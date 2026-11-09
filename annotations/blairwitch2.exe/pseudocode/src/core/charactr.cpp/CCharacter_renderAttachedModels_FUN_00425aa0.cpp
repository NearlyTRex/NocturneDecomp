// Name: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0
// Address: 00425aa0
// Address Range: [[00425aa0, 00425ba9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0(CCharacter *this_ptr)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1020 [991];
  CVector3f *translation;
  CVector3f local_5c [3];
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  byte *local_14;
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x3448) {
    local_14 = &this_ptr->field_0x1134;
    piVar2 = (int *)&this_ptr->field_0x344c;
    do {
      if (*(int *)(&this_ptr->field_0x23f4 + *piVar2 * 4) != 0) {
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(piVar2 + 2,local_14 + piVar2[1] * 0x30);
        puVar4 = (uint *)&stack0xffffff68;
        puVar5 = (uint *)&stack0xffffff98;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        core_xform_cpp_FUN_00591de0(&stack0xffffff98);
        local_2c._0_4_ = local_5c[0]._0_4_;
        local_2c._4_4_ = local_5c[1]._4_4_;
        local_2c._8_4_ = local_5c[2]._8_4_;
        translation = &local_2c;
        local_38._0_4_ = local_20._0_4_;
        *(uint *)((int)&local_38 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&local_20 + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&local_20 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                  (DAT_0060b280,&local_38,translation);
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                  ((CKeyFramedModelInstance *)&DAT_007bdadc,0.0,-1);
        engine_matrix_c_pop_FUN_0046b4a0();
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xe;
    } while (iVar3 < *(int *)&this_ptr->field_0x3448);
  }
  return;
}
