#
# @file Makefile
#
# @author Akagi201
# @date 2014/04/29
#
# Makefile for akstyle
#

TARGET := akstyle

PWD=${shell pwd}

# header file
AKSTYLE_INC  := ${PWD}/include
#AKZLOG_INC := ${PWD}/../akzlog/src

# library file
#AKZLOG_LIB := ${PWD}/../akzlog/src/libzlog.a

# summary
INC += -I ${PWD} -I ${AKSTYLE_INC} #-I ${AKZLOG_INC}
LIB += #${AKZLOG_LIB}
LIB += #-lpcap -lpthread -lnet

# source file
SRC = akstyle.c

# toolchain
CC := gcc

CFLAGS += -std=gnu99 -Wall -O2 #-fno-color-diagnostics

${TARGET}: ${SRC} ${AKZLOG_LIB}
	gcc ${CFLAGS} ${INC} ${SRC} -o ${TARGET} ${LIB}

clean:
	-rm -rf ${TARGET}
