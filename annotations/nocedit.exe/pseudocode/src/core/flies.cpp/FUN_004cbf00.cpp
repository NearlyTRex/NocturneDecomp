// Name: core_flies.cpp_FUN_004cbf00
// Address: 004cbf00
// Address Range: [[004cbf00, 004cc221]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cbf00()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: byte actors_other_flies.cpp_FUN_004cbf00(uint param_1, uint param_2)
    */

void core_flies_cpp_FUN_004cbf00
               (uint param_1,CLocation *param_2,uint param_3,uint param_4,
               CDemonActor *param_5,float param_6)

{
  float fVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  CVector3f *pCVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 extraout_ST0;
  uint uStack_54;
  float local_40;
  float local_3c;
  CVector3f local_38;
  CVector3f local_2c;
  uint local_20;
  CLocation *pCStack_1c;
  int iStack_14;
  
  if (param_5[0x1f].create_prob != 0.0) {
    iVar9 = param_5[0x1f].runtime_state;
    if (iVar9 != 0) {
      local_38.x = *(float *)(iVar9 + 0x20) - (param_5->location).position.x;
      local_38.y = *(float *)(iVar9 + 0x24) - (param_5->location).position.y;
      local_38.z = *(float *)(iVar9 + 0x28) - (param_5->location).position.z;
      if (0.0 < SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y)) {
        pCVar5 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (param_5,&local_2c,&local_38);
        local_40 = pCVar5->x * 0.5f;
        local_3c = pCVar5->y * 0.5f;
        local_38.x = 0.5f * pCVar5->z;
        if (&local_38.y != &local_40) {
          local_38.y = local_40;
          local_38.z = local_3c;
          local_2c.x = local_38.x;
        }
        iVar9 = 0;
        if (0 < *(int *)(param_5[1].actor_name + 0xc)) {
          pCVar5 = (CVector3f *)(param_5[1].actor_name + 0x14);
          piVar6 = &param_5[1].location.area_id;
          do {
            pCVar5->x = pCVar5->x - local_38.y;
            pCVar5->y = pCVar5->y - local_38.z;
            fVar1 = pCVar5[1].x;
            pCVar5->z = pCVar5->z - local_2c.x;
            pCVar5[1].x = fVar1 - local_38.y;
            *(float *)((int)(pCVar5 + 1) + 4) = *(float *)((int)(pCVar5 + 1) + 4) - local_38.z;
            *(float *)((int)(pCVar5 + 1) + 8) = *(float *)((int)(pCVar5 + 1) + 8) - local_2c.x;
            *piVar6 = (int)((float)*piVar6 - local_38.y);
            piVar6[1] = (int)((float)piVar6[1] - local_38.z);
            piVar6[2] = (int)((float)piVar6[2] - local_2c.x);
            piVar6[3] = (int)((float)piVar6[3] - local_38.y);
            piVar6[4] = (int)((float)piVar6[4] - local_38.z);
            iVar9 = iVar9 + 1;
            piVar6[5] = (int)((float)piVar6[5] - local_2c.x);
            pCVar5 = (CVector3f *)((int)(pCVar5 + 4) + 4);
            piVar6 = piVar6 + 0xd;
          } while (iVar9 < *(int *)(param_5[1].actor_name + 0xc));
        }
      }
      iVar9 = param_5[0x1f].runtime_state;
      param_2 = &param_5->location;
      (param_2->position).x = *(float *)(iVar9 + 0x20);
      (param_5->location).position.y = *(float *)(iVar9 + 0x24);
      (param_5->location).position.z = *(float *)(iVar9 + 0x28);
      (param_5->location).area_id = *(int *)(iVar9 + 0x2c);
    }
    if ((0 < param_5[0x1f].health) &&
       (fVar1 = (float)param_5[0x1f].field6_0x68 - param_6, param_5[0x1f].field6_0x68 = (int)fVar1,
       fVar1 <= 0.0)) {
      if (*(int *)(param_5[1].actor_name + 0xc) < 200) {
        in_ST0 = (float10)core_flies_cpp_FUN_004cc760();
        iVar9 = param_5[0x1f].field7_0x6c;
        param_2 = (CLocation *)(*(int *)(param_5[1].actor_name + 0xc) + 1);
        iVar3 = param_5[0x1f].health;
        *(CLocation **)(param_5[1].actor_name + 0xc) = param_2;
        param_5[0x1f].field6_0x68 = iVar9;
        param_5[0x1f].health = iVar3 + -1;
      }
      else {
        param_5[0x1f].health = 0;
      }
    }
    fVar1 = (float)2;
    iStack_14 = 0;
    if (0 < *(int *)(param_5[1].actor_name + 0xc)) {
      pfVar8 = (float *)(param_5[1].actor_name + 0x10);
      do {
        fVar4 = *pfVar8 + param_6 * fVar1;
        *pfVar8 = fVar4;
        dVar2 = (double)fVar4;
        if (1.0 <= dVar2) {
          uStack_54 = SUB84 /* extract 2-byte value */(dVar2,0);
          crt_math_c_floor_FUN_005feb90((double)in_ST0);
          local_20 = uStack_54;
          *pfVar8 = *pfVar8 - (float)(double)CONCAT44 /* combine 2-byte values */(param_2,uStack_54);
          if (pfVar8 + 1 != pfVar8 + 4) {
            pfVar8[1] = pfVar8[4];
            pfVar8[2] = pfVar8[5];
            pfVar8[3] = pfVar8[6];
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
          pCStack_1c = param_2;
          pfVar7 = (float *)core_flies_cpp_FUN_004cc820();
          in_ST0 = extraout_ST0;
          if (pfVar8 + 10 != pfVar7) {
            pfVar8[10] = *pfVar7;
            pfVar8[0xb] = pfVar7[1];
            pfVar8[0xc] = pfVar7[2];
          }
        }
        pfVar8 = pfVar8 + 0xd;
        iStack_14 = iStack_14 + 1;
        param_2 = *(CLocation **)(param_5[1].actor_name + 0xc);
      } while (iStack_14 < (int)param_2);
    }
  }
  return;
}
