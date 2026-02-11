// Name: core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
// Address: 0043f7e0
// Address Range: [[0043f7e0, 0043f843]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_0043f7e0(CColonel *this_ptr)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_0043f7e0(CColonel *this_ptr)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CColonelVTable;
  pCVar1->guns_drawn = 0;
  pCVar1->field2_0x1fbd8[0] = '\0';
  pCVar1->field2_0x1fbd8[1] = '\0';
  pCVar1->field2_0x1fbd8[2] = '\0';
  pCVar1->field2_0x1fbd8[3] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"colonel.dfm");
  pCVar1->field2_0x1fbd8[0x10] = '\0';
  pCVar1->field2_0x1fbd8[0x11] = '\0';
  pCVar1->field2_0x1fbd8[0x12] = -0x80;
  pCVar1->field2_0x1fbd8[0x13] = '?';
  pCVar1->field2_0x1fbd8[0xc] = '\0';
  pCVar1->field2_0x1fbd8[0xd] = '\0';
  pCVar1->field2_0x1fbd8[0xe] = '\0';
  pCVar1->field2_0x1fbd8[0xf] = '\0';
  *(uint *)(pCVar1->field2_0x1fbd8 + 8) = *(uint *)(pCVar1->field2_0x1fbd8 + 0xc);
  *(uint *)(pCVar1->field2_0x1fbd8 + 4) = *(uint *)(pCVar1->field2_0x1fbd8 + 8);
  return pCVar1;
}
