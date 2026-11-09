// Name: core_fldnotes.cpp_PageResource_TwanaEntry_ctor_FUN_004a23c0
// Address: 004a23c0
// Address Range: [[004a23c0, 004a2460]]
// Convention: unknown
// Signature: SPageResourceTwanaEntry * core_fldnotes_cpp_PageResource_TwanaEntry_ctor_FUN_004a23c0(SPageResourceTwanaEntry *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceTwanaEntry * core_fldnotes_cpp_PageResource_TwanaEntry_ctor_FUN_004a23c0(SPageResourceTwanaEntry *this_ptr)

{
  SPageResourceTwanaEntry *pSVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = unkaddr_004a1200_cpp_FUN_004a1e60(this_ptr);
  iVar3 = __arrinit(iVar2 + 0xd8,3,&g_CAlphaBitmapTypeInfo);
  pSVar1 = (SPageResourceTwanaEntry *)(iVar3 + -0xd8);
  *(byte ***)(iVar3 + -0xc4) = &g_PageResource_TwanaEntryVTable;
  memset((void *)(iVar3 + -0xc0),0,0x60);
  memset((void *)(iVar3 + -0x60),0,0x60);
  iVar2 = (int)_DAT_01cab780;
  *(uint *)(iVar3 + -0xd0) = 0x69;
  *(uint *)(iVar3 + -0xcc) = 0x2f;
  if (iVar2 == 0) {
    _DAT_01cab780 = pSVar1;
    return pSVar1;
  }
  _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
  _DAT_01d046a4 = 0x3f9;
  core_main_c_FUN_004e4500("Can't have more than one twana entry right now");
  _DAT_01cab780 = pSVar1;
  return pSVar1;
}
