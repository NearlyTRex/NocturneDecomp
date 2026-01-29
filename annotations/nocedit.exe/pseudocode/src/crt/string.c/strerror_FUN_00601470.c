// Name: crt_string.c_strerror_FUN_00601470
// Address: 00601470
// Address Range: [[00601470, 0060148d]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_string_c_strerror_FUN_00601470(int errnum)

#include "nocturne.h"

char * __watcallStack strerror(int errnum)

{
  if ((-1 < errnum) && (errnum <= g_MaxErrnoValue)) {
    return g_ErrorMessageTable[errnum];
  }
  return "unknown error";
}
