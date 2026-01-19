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
  va_list_t *in_stack_00000010;
  code *pcStack_20;
  code *pcStack_1c;
  FILE *pFStack_18;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    file->_link->__get_base = (char *)0x1;
  }
  pcStack_1c = crt_stdio_c_ungetc_helper_FUN_005fe720;
  pFStack_18 = file;
  pcStack_20 = crt_stdio_c_getc_helper_FUN_005fe700;
  iVar2 = crt_stdio_c_doscan_FUN_00604950
                    ((scanf_state_t *)&pcStack_20,(char **)args,in_stack_00000010);
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return iVar2;
}
