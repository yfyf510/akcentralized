
/*
 * @file aktype_def.h
 *
 * @author Akagi201
 * @date 2014/04/28
 *
 * 每个项目通用类型与常量定义
 *
 */

#ifndef AKTYPE_DEF_H_
#define AKTYPE_DEF_H_ (1)

// 常量

// 换行符
#define CR                              '\r'
#define LF                              '\n'

// 函数返回值
#define AK_OK           ((int)0)
#define AK_ERR			((int)~0)

#ifndef TRUE
#define TRUE	(1 == 1)
#endif

#ifndef FALSE
#define FALSE	(1 == 0)
#endif

#endif // AKTYPE_DEF_H_
