// Name: core_charactr.cpp_FUN_00431d10
// Address: 00431d10
// Address Range: [[00431d10, 00431fff]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00431d10(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00431d10(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  byte *apuStackY_1040 [859];
  byte local_e8 [48];
  uint local_b8 [12];
  uint local_88 [12];
  uint local_58;
  byte *local_54 [4];
  uint local_44;
  uint local_40;
  byte *local_34;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  int local_1c;
  int *local_18;
  
  bVar6 = 0;
  local_24 = &this_ptr->field_0x30;
  local_28 = &this_ptr->field_0x20;
  local_20 = &this_ptr->field_0xfd8;
  local_18 = (int *)&this_ptr->field_0x25a8;
  local_1c = 0;
  do {
    piVar2 = local_18;
    if (local_18[2] != 0) {
      if (local_18[0x11] == 0) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 300))(this_ptr,local_1c);
        puVar4 = (uint *)&stack0xfffffe88;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_18 + 0x12,local_20 + *local_18 * 0x30);
        puVar4 = (uint *)&stack0xfffffeb8;
      }
      puVar5 = (uint *)&stack0xfffffee8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if ((float)piVar2[0x10] < 1.0) {
        fVar1 = (float)piVar2[0xf] * delta_time + (float)piVar2[0x10];
        piVar2[0x10] = (int)fVar1;
        if (fVar1 <= 1.0) {
          core_xform_cpp_FUN_00584560(local_20 + *piVar2 * 0x30);
          puVar4 = (uint *)&stack0xfffffe28;
          puVar5 = (uint *)&stack0xfffffd98;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffee8,&stack0xfffffd98);
          puVar4 = (uint *)&stack0xfffffd38;
          puVar5 = (uint *)&stack0xfffffd68;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005854a0(piVar2 + 3,&stack0xfffffd68,piVar2[0x10]);
          puVar4 = local_88;
          puVar5 = (uint *)&stack0xfffffdc8;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffdc8,local_20 + *piVar2 * 0x30);
          puVar4 = (uint *)&stack0xfffffdf8;
          puVar5 = (uint *)&stack0xfffffee8;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
        }
        else {
          piVar2[0x10] = 0x3f800000;
        }
      }
      core_xform_cpp_FUN_00583940(local_e8,local_28,local_24);
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffee8,local_e8);
      puVar4 = local_b8;
      puVar5 = (uint *)&stack0xfffffe58;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_00584450(&stack0xfffffe58);
      local_58 = local_40;
      local_54[(uint)bVar6 * -2] = local_54[(uint)bVar6 * -2 + 6];
      local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      iVar3 = piVar2[2];
      *(uint *)(iVar3 + 0x20) = local_58;
      *(byte **)(iVar3 + 0x24) = local_54[0];
      *(byte **)(iVar3 + 0x28) = local_54[1];
      core_xform_cpp_FUN_00583b10(&stack0xfffffe58);
      local_54[2] = local_34;
      local_54[(uint)bVar6 * -2 + 3] = local_54[(uint)bVar6 * -2 + 9];
      local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      iVar3 = piVar2[2];
      if ((byte **)(iVar3 + 0x30) != local_54 + 2) {
        *(byte **)(iVar3 + 0x30) = local_54[2];
        *(byte **)(iVar3 + 0x34) = local_54[3];
        *(uint *)(iVar3 + 0x38) = local_44;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)piVar2[2]);
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 0x1e;
  } while (local_1c < 2);
  return;
}
