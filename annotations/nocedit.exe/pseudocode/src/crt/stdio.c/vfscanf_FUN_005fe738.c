// Name: crt_stdio.c_vfscanf_FUN_005fe738
// Address: 005fe738
// Address Range: [[005fe738, 005fe7bc]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_vfscanf_FUN_005fe738(_FILE *file,char *format,va_list_t args)

#include "nocturne.h"

int __cdecl vfscanf(_FILE *file,char *format,va_list_t args)

{
  char *pcVar1;
  int iVar2;
  code *pcStack_24;
  code *pcStack_20;
  _FILE *p_Stack_1c;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    file->_link->__get_base = (char *)0x1;
  }
  pcStack_20 = ungetc_helper;
  p_Stack_1c = file;
  pcStack_24 = getc_helper;
  iVar2 = doscan
                    ((scanf_state_t *)&pcStack_24,(char **)format,(va_list_t *)args.value[0]);
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return iVar2;
}
