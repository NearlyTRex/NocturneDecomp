// Name: core_gabriela.cpp_CGabriella_ctor_FUN_004c6270
// Address: 004c6270
// Address Range: [[004c6270, 004c6387]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004c6270(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004c6270(CGabriella *this_ptr)

{
  uint uVar1;
  CHero *pCVar2;
  CCloth *pCVar3;
  
  pCVar2 = core_hero_cpp_FUN_004ea830((CHero *)this_ptr);
  pCVar3 = core_cloth_cpp_FUN_0043e5c0((CCloth *)(pCVar2 + 0x1ffec));
  *(byte ***)(pCVar3 + -0x1fe98) = &g_CGabriellaVTable;
  *(uint *)(pCVar3 + -0x40) = 0;
  *(uint *)(pCVar3 + -0x3c) = 0;
  *(uint *)(pCVar3 + -0x38) = 0;
  *(uint *)(pCVar3 + -0x34) = 0;
  *(uint *)(pCVar3 + -0x1c) = 0;
  *(uint *)(pCVar3 + -0x30) = 0;
  *(uint *)(pCVar3 + -0x2c) = 0xbf060a92;
  *(uint *)(pCVar3 + -8) = 0;
  *(uint *)(pCVar3 + -0x10) = 0;
  *(uint *)(pCVar3 + -0x18) = 0;
  *(uint *)(pCVar3 + -4) = 0;
  uVar1 = _DAT_00600d8c;
  *(uint *)(pCVar3 + -0x28) = 0;
  *(uint *)(pCVar3 + 0x3ab30) = uVar1;
  *(uint *)(pCVar3 + -0x24) = 0;
  *(uint *)(pCVar3 + -0x20) = 0;
  *(uint *)(pCVar3 + -0xc) = *(uint *)(pCVar3 + -0x10);
  *(uint *)(pCVar3 + -0x14) = *(uint *)(pCVar3 + -0x18);
  core_skeleton_cpp_FUN_00569f50(pCVar3 + -0x1fe94,"?gabriela.dfm" + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(*(int *)(pCVar3 + -0x1cc) + 0x158),(char *)0x5e0e49);
  return (CGabriella *)(pCVar3 + -0x1ffec);
}
