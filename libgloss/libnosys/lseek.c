/*
 * Stub version of lseek.
 */

#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#undef errno
extern int errno;
#include "warning.h"

int
_WEAK_DEFUN (_lseek, (file, ptr, dir),
        int   file  _AND
        int   ptr   _AND
        int   dir)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(_lseek)
