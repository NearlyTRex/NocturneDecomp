// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004a23c0
// Address: 004a23c0
// Address Range: [[004a23c0, 004a2460]]
// Convention: __cdecl
// Signature: SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004a23c0(SPageResourceTwanaEntry *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004a23c0(SPageResourceTwanaEntry *this_ptr)

{
  SPageResourceTwanaEntry *pSVar1;
  int iVar2;
  int extraout_EAX;
  void *pvVar3;
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004a1e60(&this_ptr->base);
  pvVar3 = __arrinit
                     ((void *)(extraout_EAX + 0xd8),3,&g_CAlphaBitmapTypeInfo);
  pSVar1 = (SPageResourceTwanaEntry *)((int)pvVar3 + -0xd8);
  *(byte ***)((int)pvVar3 + -0xc4) = &g_SPageResourceTwanaEntryVTable;
  memset((void *)((int)pvVar3 + -0xc0),0,0x60);
  memset((void *)((int)pvVar3 + -0x60),0,0x60);
  iVar2 = (int)_DAT_01cab780;
  *(uint *)((int)pvVar3 + -0xd0) = 0x69;
  *(uint *)((int)pvVar3 + -0xcc) = 0x2f;
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
