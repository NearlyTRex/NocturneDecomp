// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004a88d0
// Address: 004a88d0
// Address Range: [[004a88d0, 004a8977]]
// Convention: unknown
// Signature: SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004a88d0(SPageResourceTwanaEntry *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004a88d0(SPageResourceTwanaEntry *this_ptr)

{
  SPageResourceTwanaEntry *pSVar1;
  int iVar2;
  int extraout_EAX;
  void *pvVar3;
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004a8370(&this_ptr->base);
  pvVar3 = __arrinit
                     ((void *)(extraout_EAX + 0xdc),3,&g_CAlphaBitmapTypeInfo);
  pSVar1 = (SPageResourceTwanaEntry *)((int)pvVar3 + -0xdc);
  *(byte ***)((int)pvVar3 + -200) = &g_SPageResourceTwanaEntryVTable;
  memset((void *)((int)pvVar3 + -0xc4),0,0x60);
  memset((void *)((int)pvVar3 + -0x60),0,0x60);
  *(uint *)((int)pvVar3 + -100) = 0;
  iVar2 = (int)_DAT_01d0cfa0;
  *(uint *)((int)pvVar3 + -0xd4) = 0x69;
  *(uint *)((int)pvVar3 + -0xd0) = 0x2f;
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
