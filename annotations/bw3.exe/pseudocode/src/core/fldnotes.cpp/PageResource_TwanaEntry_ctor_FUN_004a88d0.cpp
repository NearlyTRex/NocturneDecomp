// Name: core_fldnotes.cpp_PageResource_TwanaEntry_ctor_FUN_004a88d0
// Address: 004a88d0
// Address Range: [[004a88d0, 004a8977]]
// Convention: unknown
// Signature: SPageResourceTwanaEntry * core_fldnotes_cpp_PageResource_TwanaEntry_ctor_FUN_004a88d0(SPageResourceTwanaEntry *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceTwanaEntry * core_fldnotes_cpp_PageResource_TwanaEntry_ctor_FUN_004a88d0(SPageResourceTwanaEntry *this_ptr)

{
  SPageResourceTwanaEntry *pSVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = unkaddr_004a76f0_cpp_FUN_004a8370(this_ptr);
  iVar3 = __arrinit(iVar2 + 0xdc,3,&g_CAlphaBitmapTypeInfo);
  pSVar1 = (SPageResourceTwanaEntry *)(iVar3 + -0xdc);
  *(byte ***)(iVar3 + -200) = &g_PageResource_TwanaEntryVTable;
  memset((void *)(iVar3 + -0xc4),0,0x60);
  memset((void *)(iVar3 + -0x60),0,0x60);
  *(uint *)(iVar3 + -100) = 0;
  iVar2 = (int)_DAT_01d0cfa0;
  *(uint *)(iVar3 + -0xd4) = 0x69;
  *(uint *)(iVar3 + -0xd0) = 0x2f;
  if (iVar2 == 0) {
    _DAT_01d0cfa0 = pSVar1;
    return pSVar1;
  }
  _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
  _DAT_01d71de4 = 0x406;
  core_main_c_FUN_004e4330("Can't have more than one twana entry right now");
  _DAT_01d0cfa0 = pSVar1;
  return pSVar1;
}
