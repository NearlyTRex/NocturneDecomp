// Name: crt_stdio.c_freopen_FUN_005b91a4
// Address: 005b91a4
// Address Range: [[005b91a4, 005b9235]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_freopen_FUN_005b91a4(char *filename,char *mode,_FILE *stream)

#include "nocturne.h"

_FILE * __cdecl _freopen(char *filename,char *mode,_FILE *stream)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _FILE *p_Var4;
  uint uStack_14;
  
  iVar2 = FUN_005b8e60(mode,&uStack_14);
  p_Var4 = (_FILE *)0x0;
  if (iVar2 != 0) {
    iVar1 = stream->_handle;
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(iVar1);
    if (DAT_0061f418 != (code *)0x0) {
      (*DAT_0061f418)(iVar1);
    }
    iVar3 = FUN_005b9124(stream);
    p_Var4 = (_FILE *)0x0;
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0x4000;
      p_Var4 = (_FILE *)FUN_005b8f9c(filename,*mode,iVar2,uStack_14,0,iVar3);
    }
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(iVar1);
  }
  return p_Var4;
}
