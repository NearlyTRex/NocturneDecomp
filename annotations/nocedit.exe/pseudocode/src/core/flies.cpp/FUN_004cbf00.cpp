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
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  int *piVar5;
  uint extraout_EAX;
  float *pfVar6;
  uint extraout_EDX;
  float *pfVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 extraout_ST0;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float local_40;
  float local_3c;
  CVector3f local_38;
  CVector3f local_2c [2];
  int iStack_14;
  
  if (in_stack_00000004[0x1f].create_prob != 0.0) {
    iVar8 = in_stack_00000004[0x1f].runtime_state;
    if (iVar8 != 0) {
      local_38.x = *(float *)(iVar8 + 0x20) - (in_stack_00000004->location).position.x;
      local_38.y = *(float *)(iVar8 + 0x24) - (in_stack_00000004->location).position.y;
      local_38.z = *(float *)(iVar8 + 0x28) - (in_stack_00000004->location).position.z;
      if (0.0 < SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y)) {
        pCVar4 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (in_stack_00000004,local_2c,&local_38);
        local_40 = pCVar4->x * 0.5f;
        local_3c = pCVar4->y * 0.5f;
        local_38.x = 0.5f * pCVar4->z;
        if (&local_38.y != &local_40) {
          local_38.y = local_40;
          local_38.z = local_3c;
          local_2c[0].x = local_38.x;
        }
        iVar8 = 0;
        if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
          pCVar4 = (CVector3f *)(in_stack_00000004[1].actor_name + 0x14);
          piVar5 = &in_stack_00000004[1].location.area_id;
          do {
            pCVar4->x = pCVar4->x - local_38.y;
            pCVar4->y = pCVar4->y - local_38.z;
            fVar1 = pCVar4[1].x;
            pCVar4->z = pCVar4->z - local_2c[0].x;
            pCVar4[1].x = fVar1 - local_38.y;
            *(float *)((int)(pCVar4 + 1) + 4) = *(float *)((int)(pCVar4 + 1) + 4) - local_38.z;
            *(float *)((int)(pCVar4 + 1) + 8) = *(float *)((int)(pCVar4 + 1) + 8) - local_2c[0].x;
            *piVar5 = (int)((float)*piVar5 - local_38.y);
            piVar5[1] = (int)((float)piVar5[1] - local_38.z);
            piVar5[2] = (int)((float)piVar5[2] - local_2c[0].x);
            piVar5[3] = (int)((float)piVar5[3] - local_38.y);
            piVar5[4] = (int)((float)piVar5[4] - local_38.z);
            iVar8 = iVar8 + 1;
            piVar5[5] = (int)((float)piVar5[5] - local_2c[0].x);
            pCVar4 = (CVector3f *)((int)(pCVar4 + 4) + 4);
            piVar5 = piVar5 + 0xd;
          } while (iVar8 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
        }
      }
      iVar8 = in_stack_00000004[0x1f].runtime_state;
      (in_stack_00000004->location).position.x = *(float *)(iVar8 + 0x20);
      (in_stack_00000004->location).position.y = *(float *)(iVar8 + 0x24);
      (in_stack_00000004->location).position.z = *(float *)(iVar8 + 0x28);
      (in_stack_00000004->location).area_id = *(int *)(iVar8 + 0x2c);
    }
    if ((0 < in_stack_00000004[0x1f].health) &&
       (fVar1 = (float)in_stack_00000004[0x1f].field6_0x68 - in_stack_00000008,
       in_stack_00000004[0x1f].field6_0x68 = (int)fVar1, fVar1 <= 0.0)) {
      if (*(int *)(in_stack_00000004[1].actor_name + 0xc) < 200) {
        in_ST0 = (float10)core_flies_cpp_FUN_004cc760();
        iVar8 = in_stack_00000004[0x1f].field7_0x6c;
        iVar2 = in_stack_00000004[0x1f].health;
        *(int *)(in_stack_00000004[1].actor_name + 0xc) =
             *(int *)(in_stack_00000004[1].actor_name + 0xc) + 1;
        in_stack_00000004[0x1f].field6_0x68 = iVar8;
        in_stack_00000004[0x1f].health = iVar2 + -1;
      }
      else {
        in_stack_00000004[0x1f].health = 0;
      }
    }
    fVar1 = (float)2;
    iStack_14 = 0;
    if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
      pfVar7 = (float *)(in_stack_00000004[1].actor_name + 0x10);
      do {
        fVar3 = *pfVar7 + in_stack_00000008 * fVar1;
        *pfVar7 = fVar3;
        if (1.0 <= fVar3) {
          crt_math_c_floor_FUN_005feb90((double)in_ST0);
          *pfVar7 = *pfVar7 - (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
          if (pfVar7 + 1 != pfVar7 + 4) {
            pfVar7[1] = pfVar7[4];
            pfVar7[2] = pfVar7[5];
            pfVar7[3] = pfVar7[6];
          }
          if (pfVar7 + 4 != pfVar7 + 7) {
            pfVar7[4] = pfVar7[7];
            pfVar7[5] = pfVar7[8];
            pfVar7[6] = pfVar7[9];
          }
          if (pfVar7 + 7 != pfVar7 + 10) {
            pfVar7[7] = pfVar7[10];
            pfVar7[8] = pfVar7[0xb];
            pfVar7[9] = pfVar7[0xc];
          }
          pfVar6 = (float *)core_flies_cpp_FUN_004cc820();
          in_ST0 = extraout_ST0;
          if (pfVar7 + 10 != pfVar6) {
            pfVar7[10] = *pfVar6;
            pfVar7[0xb] = pfVar6[1];
            pfVar7[0xc] = pfVar6[2];
          }
        }
        pfVar7 = pfVar7 + 0xd;
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
    }
  }
  return;
}
