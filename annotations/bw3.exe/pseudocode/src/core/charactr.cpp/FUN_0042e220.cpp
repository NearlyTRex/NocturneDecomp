// Name: core_charactr.cpp_FUN_0042e220
// Address: 0042e220
// Address Range: [[0042e220, 0042e2ff]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_0042e220(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_FUN_0042e220(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_38 [6];
  uint local_20 [6];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(DAT_005f2afc);
  if (iVar1 == 0) {
    *(uint *)&this_ptr->field_0x27bc = 0;
  }
  if (*(int *)&this_ptr->field_0x24fc == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
    puVar3 = local_38;
    puVar4 = local_20;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041daf0(local_20);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x27bc = 1;
      core_charactr_cpp_FUN_0042d8e0(this_ptr);
      if (_DAT_01d8e40c != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
        if (iVar2 == 0) {
          core_motion_cpp_FUN_004fcdc0
                    ((CMotionController *)&this_ptr->field_0x158,(CDemonActor *)this_ptr);
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x58))(this_ptr);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
