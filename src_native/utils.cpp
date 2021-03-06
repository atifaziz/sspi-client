#include "node_version_support.h"
#ifdef IS_SUPPORTED_NODE_VERSION

#include "utils.h"

#include <stdio.h>
#include <stdarg.h>

static bool s_debug = false;

void SetDebugLogging(bool enable)
{
    s_debug = enable;
}

void DebugLog(const char* format, ...)
{
    if (s_debug)
    {
        va_list args;
        va_start(args, format);
        vprintf(format, args);
        va_end(args);
    }
}

#endif  // IS_SUPPORTED_NODE_VERSION
