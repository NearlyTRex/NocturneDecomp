// Name: core_flies.cpp_FUN_004cbf00
// Address: 004cbf00
// Address Range: [[004cbf00, 004cc221]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004cbf00(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: byte actors_other_flies.cpp_FUN_004cbf00(uint param_1, uint param_2)
    */

void core_flies_cpp_FUN_004cbf00(void)

{
  float fVar1;
  double input_value;
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  char *extraout_EBX;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_44;
  CVector3f local_38;
  byte local_2c [20];
  int local_18;
  
  if (in_stack_00000004[0x1f].create_prob != 0.0) {
    iVar9 = in_stack_00000004[0x1f].runtime_state;
    if (iVar9 != 0) {
      local_38.x = *(float *)(iVar9 + 0x20) - (in_stack_00000004->location).position.x;
      local_38.y = *(float *)(iVar9 + 0x24) - (in_stack_00000004->location).position.y;
      local_38.z = *(float *)(iVar9 + 0x28) - (in_stack_00000004->location).position.z;
      if (0.0 < SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y)) {
        pCVar4 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (in_stack_00000004,(CVector3f *)local_2c,&local_38);
        local_44.x = pCVar4->x * 0.5f;
        local_44.y = pCVar4->y * 0.5f;
        local_44.z = 0.5f * pCVar4->z;
        if (&local_38 != &local_44) {
          local_38.x = local_44.x;
          local_38.y = local_44.y;
          local_38.z = local_44.z;
        }
        iVar9 = 0;
        if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
          pCVar4 = (CVector3f *)(in_stack_00000004[1].actor_name + 0x14);
          piVar5 = &in_stack_00000004[1].location.area_id;
          do {
            pCVar4->x = pCVar4->x - local_38.x;
            pCVar4->y = pCVar4->y - local_38.y;
            fVar1 = pCVar4[1].x;
            pCVar4->z = pCVar4->z - local_38.z;
            pCVar4[1].x = fVar1 - local_38.x;
            *(float *)((int)(pCVar4 + 1) + 4) = *(float *)((int)(pCVar4 + 1) + 4) - local_38.y;
            *(float *)((int)(pCVar4 + 1) + 8) = *(float *)((int)(pCVar4 + 1) + 8) - local_38.z;
            *piVar5 = (int)((float)*piVar5 - local_38.x);
            piVar5[1] = (int)((float)piVar5[1] - local_38.y);
            piVar5[2] = (int)((float)piVar5[2] - local_38.z);
            piVar5[3] = (int)((float)piVar5[3] - local_38.x);
            piVar5[4] = (int)((float)piVar5[4] - local_38.y);
            iVar9 = iVar9 + 1;
            piVar5[5] = (int)((float)piVar5[5] - local_38.z);
            pCVar4 = (CVector3f *)((int)(pCVar4 + 4) + 4);
            piVar5 = piVar5 + 0xd;
          } while (iVar9 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
        }
      }
      iVar9 = in_stack_00000004[0x1f].runtime_state;
      (in_stack_00000004->location).position.x = *(float *)(iVar9 + 0x20);
      (in_stack_00000004->location).position.y = *(float *)(iVar9 + 0x24);
      (in_stack_00000004->location).position.z = *(float *)(iVar9 + 0x28);
      (in_stack_00000004->location).area_id = *(int *)(iVar9 + 0x2c);
    }
    if ((0 < in_stack_00000004[0x1f].health) &&
       (fVar1 = (float)in_stack_00000004[0x1f].validation_magic - in_stack_00000008,
       in_stack_00000004[0x1f].validation_magic = (int)fVar1, fVar1 <= 0.0)) {
      if (*(int *)(in_stack_00000004[1].actor_name + 0xc) < 200) {
        core_flies_cpp_FUN_004cc760();
        iVar9 = in_stack_00000004[0x1f].unk1;
        iVar2 = in_stack_00000004[0x1f].health;
        *(int *)(in_stack_00000004[1].actor_name + 0xc) =
             *(int *)(in_stack_00000004[1].actor_name + 0xc) + 1;
        in_stack_00000004[0x1f].validation_magic = iVar9;
        in_stack_00000004[0x1f].health = iVar2 + -1;
      }
      else {
        in_stack_00000004[0x1f].health = 0;
      }
    }
    fVar1 = (float)2;
    local_18 = 0;
    if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
      pfVar8 = (float *)(in_stack_00000004[1].actor_name + 0x10);
      do {
        fVar3 = *pfVar8 + in_stack_00000008 * fVar1;
        *pfVar8 = fVar3;
        input_value = (double)fVar3;
        pfVar7 = pfVar8;
        if (1.0 <= input_value) {
          local_2c._8_8_ = floor(input_value);
          *(float *)extraout_EBX = *(float *)extraout_EBX - (float)(double)local_2c._8_8_;
          if ((CLocation *)(extraout_EBX + 4) != (CLocation *)(extraout_EBX + 0x10)) {
            *(float *)(extraout_EBX + 4) = (((CLocation *)(extraout_EBX + 0x10))->position).x;
            *(float *)(extraout_EBX + 8) = *(float *)(extraout_EBX + 0x14);
            *(float *)(extraout_EBX + 0xc) = *(float *)(extraout_EBX + 0x18);
          }
          if (pfVar8 + 4 != pfVar8 + 7) {
            pfVar8[4] = pfVar8[7];
            pfVar8[5] = pfVar8[8];
            pfVar8[6] = pfVar8[9];
          }
          if (pfVar8 + 7 != pfVar8 + 10) {
            pfVar8[7] = pfVar8[10];
            pfVar8[8] = pfVar8[0xb];
            pfVar8[9] = pfVar8[0xc];
          }
          pfVar6 = (float *)core_flies_cpp_FUN_004cc820();
          pfVar7 = (float *)extraout_EBX;
          if (pfVar8 + 10 != pfVar6) {
            pfVar8[10] = *pfVar6;
            pfVar8[0xb] = pfVar6[1];
            pfVar8[0xc] = pfVar6[2];
          }
        }
        pfVar8 = (float *)((int)pfVar7 + 0x34);
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
    }
  }
  return;
}
