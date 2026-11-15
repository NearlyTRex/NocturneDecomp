// Name: core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300
// Address: 0042e300
// Address Range: [[0042e300, 0042e36c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042e300(CCharacter *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042e300(CCharacter *this_ptr,int layer_flag)

{
  int iVar1;
  uint *puVar2;
  int unaff_EDI;
  uint *puVar3;
  byte bVar4;
  uint auStack_2c [4];
  uint local_1c [6];
  
  bVar4 = 0;
  if (this_ptr->render_active == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_2c;
  puVar3 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0
                    ((CBoundingBox3D *)(local_1c + 2),unaff_EDI);
  if (iVar1 != 0) {
    core_charactr_cpp_CCharacter_renderCharacter_FUN_0042d8e0(this_ptr);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
  return;
}
