/*
 * @file akstyle.c
 *
 * @author Akagi201
 * @date 2014/05/28
 *
 * 这里写文件的描述
 *
 */

// 头文件顺序的原则是越基础(原子)的, 越靠前
// 一般地, 系统头文件在前, 自己添加的头文件在后

#include <stdio.h>

#include "akmacro.h"
#include "aktype_def.h"

// 下面是函数头的格式

/*
 * @brief 描述函数功能
 *
 * @param[in] argc: 命令行参数个数
 * @param[in] argv: 命令行参数数组
 *
 * @return 0: 成功 / 非0: 失败
 */
int main(int argc, char *argv[]) {

	// 打印语句不要直接使用printf, 要使用宏, 方便开关和使用日志库(如: zlog)
	AK_PRINT("hello world.\n");
	
	return 0;
}