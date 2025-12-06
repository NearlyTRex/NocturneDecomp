// Name: crt_stdio.c_vfscanf_FUN_005fe738
// Address: 005fe738
// Address Range: [[005fe738, 005fe7bc]]
// Convention: __cdecl
// Signature: int crt_stdio.c_vfscanf_FUN_005fe738(FILE * file, char * format, va_list_t args)

#include "nocturne.h"

int __cdecl crt_stdio_c_vfscanf_FUN_005fe738(FILE *file,char *format,va_list_t args)

{
  char *pcVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char **in_stack_00000014;
  va_list_t *in_stack_00000018;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    file->_link->__get_base = &DAT_00000001;
  }
  iVar2 = crt_stdio_c_doscan_FUN_00604950
                    ((scanf_state_t *)&stack0xffffffe8,in_stack_00000014,in_stack_00000018);
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return iVar2;
}
