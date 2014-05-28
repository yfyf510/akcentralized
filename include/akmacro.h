
/*
 * @file aktype_def.h
 *
 * @author Akagi201
 * @date 2014/04/28
 *
 * 项目相关的宏定义
 *
 */

#ifndef AKMACRO_H_
#define AKMACRO_H_ (1)

//#include "zlog.h"

//extern zlog_category_t *g_cat;

#define AK_PRINT                    printf
//#define AK_FATAL(fmt, arg...)       zlog_fatal(g_cat, fmt, ##arg)
//#define AK_ERROR(fmt, arg...)       zlog_error(g_cat, fmt, ##arg)
//#define AK_WARN(fmt, arg...)        zlog_warn(g_cat, fmt, ##arg)
//#define AK_NOTICE(fmt, arg...)      zlog_notice(g_cat, fmt, ##arg)
//#define AK_INFO(fmt, arg...)        zlog_info(g_cat, fmt, ##arg)
//#define AK_DEBUG(fmt, arg...)       zlog_debug(g_cat, fmt, ##arg)

// 结构体头格式

/*
 * @brief 结构体的描述
 */
typedef struct akstruct{
	int one;
	int two;
}akstruct_t;

#endif // AKMACRO_H_
