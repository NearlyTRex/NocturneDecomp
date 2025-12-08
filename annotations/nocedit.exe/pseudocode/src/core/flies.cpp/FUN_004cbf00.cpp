// Name: core_flies.cpp_FUN_004cbf00
// Address: 004cbf00
// Address Range: [[004cbf00, 004cc221]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cbf00()

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
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float local_40;
  float local_3c;
  CVector3f local_38;
  CVector3f local_2c;
  double local_20;
  int iStack_14;
  
  if (in_stack_00000004[0x1f].create_prob != 0.0) {
    iVar9 = in_stack_00000004[0x1f].runtime_state;
    if (iVar9 != 0) {
      local_38.x = *(float *)(iVar9 + 0x20) - (in_stack_00000004->location).position.x;
      local_38.y = *(float *)(iVar9 + 0x24) - (in_stack_00000004->location).position.y;
      local_38.z = *(float *)(iVar9 + 0x28) - (in_stack_00000004->location).position.z;
      if (0.0 < SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y)) {
        pCVar4 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (in_stack_00000004,&local_2c,&local_38);
        local_40 = pCVar4->x * 0.5f;
        local_3c = pCVar4->y * 0.5f;
        local_38.x = 0.5f * pCVar4->z;
        if (&local_38.y != &local_40) {
          local_38.y = local_40;
          local_38.z = local_3c;
          local_2c.x = local_38.x;
        }
        iVar9 = 0;
        if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
          pCVar4 = (CVector3f *)(in_stack_00000004[1].actor_name + 0x14);
          piVar5 = &in_stack_00000004[1].location.area_id;
          do {
            pCVar4->x = pCVar4->x - local_38.y;
            pCVar4->y = pCVar4->y - local_38.z;
            fVar1 = pCVar4[1].x;
            pCVar4->z = pCVar4->z - local_2c.x;
            pCVar4[1].x = fVar1 - local_38.y;
            *(float *)((int)(pCVar4 + 1) + 4) = *(float *)((int)(pCVar4 + 1) + 4) - local_38.z;
            *(float *)((int)(pCVar4 + 1) + 8) = *(float *)((int)(pCVar4 + 1) + 8) - local_2c.x;
            *piVar5 = (int)((float)*piVar5 - local_38.y);
            piVar5[1] = (int)((float)piVar5[1] - local_38.z);
            piVar5[2] = (int)((float)piVar5[2] - local_2c.x);
            piVar5[3] = (int)((float)piVar5[3] - local_38.y);
            piVar5[4] = (int)((float)piVar5[4] - local_38.z);
            iVar9 = iVar9 + 1;
            piVar5[5] = (int)((float)piVar5[5] - local_2c.x);
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
       (fVar1 = (float)in_stack_00000004[0x1f].field6_0x68 - in_stack_00000008,
       in_stack_00000004[0x1f].field6_0x68 = (int)fVar1, fVar1 <= 0.0)) {
      if (*(int *)(in_stack_00000004[1].actor_name + 0xc) < 200) {
        core_flies_cpp_FUN_004cc760();
        iVar9 = in_stack_00000004[0x1f].field7_0x6c;
        iVar2 = in_stack_00000004[0x1f].health;
        *(int *)(in_stack_00000004[1].actor_name + 0xc) =
             *(int *)(in_stack_00000004[1].actor_name + 0xc) + 1;
        in_stack_00000004[0x1f].field6_0x68 = iVar9;
        in_stack_00000004[0x1f].health = iVar2 + -1;
      }
      else {
        in_stack_00000004[0x1f].health = 0;
      }
    }
    fVar1 = (float)2;
    iStack_14 = 0;
    if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
      pfVar8 = (float *)(in_stack_00000004[1].actor_name + 0x10);
      do {
        fVar3 = *pfVar8 + in_stack_00000008 * fVar1;
        *pfVar8 = fVar3;
        input_value = (double)fVar3;
        pfVar7 = pfVar8;
        if (1.0 <= input_value) {
          local_20 = crt_math_c_floor_FUN_005feb90(input_value);
          *(float *)extraout_EBX = *(float *)extraout_EBX - (float)local_20;
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
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
    }
  }
  return;
}
