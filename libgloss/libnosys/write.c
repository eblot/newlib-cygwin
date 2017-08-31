/*
 * Stub version of write.
 */

#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#undef errno
extern int errno;
#include "warning.h"

int
_WEAK_DEFUN (_write, (file, ptr, len),
        int   file  _AND
        char *ptr   _AND
        int   len)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(_write)

