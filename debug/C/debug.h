/**
    This is the head file of  debug print.
    Author: lxXxw
    Date:   06-11-2017
**/

#ifndef _DEBUG_H
#define _DEBUG_H

/* Comment this part if you don't want to debug print. */

#ifndef _DEBUG_MODE
#define _DEBUG_MODE
#endif

/**********************************************************/

#ifdef _DEBUG_MODE
#define DEBUG_PRINT(fmt, args...) do{fprintf(stderr, "DEBUG: %s:%d:%s(): " fmt, \
    __FILE__, __LINE__, __func__, ##args);} while(0)
#else
#define DEBUG_PRINT(fmt, args...) do{ } while(0)
#endif

#endif
