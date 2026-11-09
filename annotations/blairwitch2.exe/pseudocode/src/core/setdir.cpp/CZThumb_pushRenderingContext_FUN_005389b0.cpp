// Name: core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0
// Address: 005389b0
// Address Range: [[005389b0, 00538a2e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_005389b0(CZThumb *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_005389b0(CZThumb *this_ptr)

{
  _DAT_020b1518 = DAT_006141b8;
  _DAT_020b151c = DAT_006141bc;
  DAT_006141b8 = *(uint *)this_ptr;
  DAT_006141bc = *(int *)&this_ptr->field_0x4;
  engine_matrix_c_FUN_0046b710(DAT_0060b280,0,0,*(int *)this_ptr + -1,DAT_006141bc + -1);
  engine_drender_cpp_FUN_0046afb0(DAT_0060b280,(CVector3f *)&this_ptr->field_0x8);
  engine_matrix_c_FUN_0046b4d0(DAT_0060b280,*(uint *)&this_ptr->field_0x20);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
            (DAT_0060b280,(CVector3f *)&this_ptr->field_0x14);
  return;
}
