// Name: crt_unknown.c_vfscanf_FUN_005632c8
// Address: 005632c8
// Address Range: [[005632c8, 0056334c]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_vfscanf_FUN_005632c8(_FILE *file,char *format,va_list_t args)

#include "nocturne.h"

int __cdecl vfscanf(_FILE *file,char *format,va_list_t args)

{
  char *pcVar1;
  int iVar2;
  code *pcStack_24;
  code *pcStack_20;
  _FILE *p_Stack_1c;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
      return 0;
    }
    file->_link->__get_base = (char *)0x1;
  }
  pcStack_20 = ungetc_helper;
  p_Stack_1c = file;
  pcStack_24 = getc_helper;
  iVar2 = FUN_00567560(&pcStack_24,format,args.value[0]);
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
  return iVar2;
}
