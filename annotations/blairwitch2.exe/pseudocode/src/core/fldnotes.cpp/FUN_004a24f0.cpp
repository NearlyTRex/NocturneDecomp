// Name: core_fldnotes.cpp_FUN_004a24f0
// Address: 004a24f0
// Address Range: [[004a24f0, 004a2616]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a24f0(int *param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004a24f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CAlphaBitmap *this_ptr;
  int *str1;
  int *str2;
  char acStack_120 [256];
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  
  iStack_18 = *param_1;
  piStack_20 = param_1 + 0x1e;
  piStack_1c = param_1 + 6;
  iVar3 = 0;
  this_ptr = (CAlphaBitmap *)(param_1 + 0x36);
  piStack_14 = param_1;
  do {
    if ((char)piStack_14[6] != '\0') {
      str2 = piStack_20 + iVar3 * 8;
      str1 = piStack_1c + iVar3 * 8;
      iVar2 = _stricmp((char *)str1,(char *)str2);
      if (iVar2 != 0) {
        FUN_005b7790(acStack_120,0x5d5aab,str1);
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(this_ptr,acStack_120,0x23,0x2f);
        do {
          iVar2 = *str1;
          *(char *)str2 = (char)iVar2;
          if ((char)iVar2 == '\0') break;
          cVar1 = *(char *)((int)str1 + 1);
          str1 = (int *)((int)str1 + 2);
          *(char *)((int)str2 + 1) = cVar1;
          str2 = (int *)((int)str2 + 2);
        } while (cVar1 != '\0');
      }
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(this_ptr,iStack_18,param_1[1],0xffff);
    }
    this_ptr = this_ptr + 1;
    iVar3 = iVar3 + 1;
    piStack_14 = piStack_14 + 8;
    iStack_18 = iStack_18 + 0x23;
    if (2 < iVar3) {
      return;
    }
  } while( true );
}
