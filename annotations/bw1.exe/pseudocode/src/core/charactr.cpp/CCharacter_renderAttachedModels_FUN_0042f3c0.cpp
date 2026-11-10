// Name: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042f3c0
// Address: 0042f3c0
// Address Range: [[0042f3c0, 0042f4c9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042f3c0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042f3c0(CCharacter *this_ptr)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  byte *apuStackY_1020 [991];
  CVector3f *translation;
  float local_5c;
  float local_4c;
  float local_3c;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  byte *apuStack_1c [3];
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x3004) {
    apuStack_1c[2] = &(this_ptr->model).field_0xe80;
    piVar2 = (int *)&this_ptr->field_0x3008;
    do {
      if (*(int *)(&(this_ptr->model).field_0x2140 + *piVar2 * 4) != 0) {
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(piVar2 + 2,apuStack_1c[2] + piVar2[1] * 0x30);
        puVar4 = (uint *)&stack0xffffff68;
        puVar5 = (uint *)&stack0xffffff98;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xffffff98);
        local_2c.x = local_5c;
        local_2c.y = local_4c;
        local_2c.z = local_3c;
        translation = &local_2c;
        local_38.x = local_20;
        *(byte **)((int)&local_38 + (uint)bVar6 * -8 + 4) = apuStack_1c[(uint)bVar6 * -2];
        *(byte **)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             apuStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                  (DAT_00612560,&local_38,translation);
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                  ((CKeyFramedModelInstance *)&DAT_007c61c4,0.0,-1);
        engine_matrix_c_pop_FUN_004839a0();
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xe;
    } while (iVar3 < *(int *)&this_ptr->field_0x3004);
  }
  return;
}
