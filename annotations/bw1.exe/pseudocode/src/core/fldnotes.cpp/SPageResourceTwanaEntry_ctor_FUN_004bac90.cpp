// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90
// Address: 004bac90
// Address Range: [[004bac90, 004bad37]]
// Convention: unknown
// Signature: SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90(SPageResourceTwanaEntry *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90(SPageResourceTwanaEntry *this_ptr)

{
  SPageResourceTwanaEntry *pSVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  
  unkaddr_004b9ab0_cpp_SPageResource_ctor_FUN_004ba730(&this_ptr->base);
  iVar3 = __arrinit(extraout_EAX + 0xdc,3,&g_CAlphaBitmapTypeInfo);
  pSVar1 = (SPageResourceTwanaEntry *)(iVar3 + -0xdc);
  *(byte ***)(iVar3 + -200) = &g_SPageResourceTwanaEntryVTable;
  memset((void *)(iVar3 + -0xc4),0,0x60);
  memset((void *)(iVar3 + -0x60),0,0x60);
  *(uint *)(iVar3 + -100) = 0;
  iVar2 = (int)_DAT_01cc4200;
  *(uint *)(iVar3 + -0xd4) = 0x69;
  *(uint *)(iVar3 + -0xd0) = 0x2f;
  if (iVar2 == 0) {
    _DAT_01cc4200 = pSVar1;
    return pSVar1;
  }
  _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
  _DAT_01d1d404 = 0x40b;
  core_main_c_FUN_005030e0("Can't have more than one twana entry right now");
  _DAT_01cc4200 = pSVar1;
  return pSVar1;
}
