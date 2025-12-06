// Name: core_curtain.cpp_FUN_0044a920
// Address: 0044a920
// Address Range: [[0044a920, 0044b05e]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044a920()

#include "nocturne.h"

/* Signature: byte actors_other_curtain.cpp_FUN_0044a920(uint param_1, uint
   param_2) */

void core_curtain_cpp_FUN_0044a920(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  SCollisionInfo *pSVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float fStack_e0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  uint uStack_14;
  
  if (((*(int *)(in_stack_00000004 + 0x65b30) != 0) || (*(int *)(in_stack_00000004 + 400) != 0)) &&
     (*(uint *)(in_stack_00000004 + 0x65b30) = 0, *(int *)(in_stack_00000004 + 0x1f8) != 0)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)(in_stack_00000004 + 0x194));
    if (iVar3 != 0) {
      *(uint *)(in_stack_00000004 + 400) = 1;
    }
    iVar3 = crt_string_c_strcmp_FUN_005fef20((char *)(in_stack_00000004 + 0x194),"none");
    if ((iVar3 == 0) || (*(int *)(in_stack_00000004 + 400) != 0)) {
      if (*(int *)(in_stack_00000004 + 0x65b2c) != 0) {
        uStack_14 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x38))();
        *(uint *)(in_stack_00000004 + 0x65b28) = uStack_14;
      }
      *(float *)(in_stack_00000004 + 0x1c728) = 1.0 / in_stack_00000008;
      local_ac = 99999.0;
      local_a8 = 99999.0;
      local_a4 = 99999.0;
      local_7c = -99999.0;
      local_78 = -99999.0;
      local_74 = -99999.0;
      iVar3 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x204)) {
        iVar6 = in_stack_00000004 + 0x208;
        do {
          if (*(float *)(iVar6 + 0x20) < local_ac) {
            local_ac = *(float *)(iVar6 + 0x20);
          }
          if (*(float *)(iVar6 + 0x24) < local_a8) {
            local_a8 = *(float *)(iVar6 + 0x24);
          }
          if (*(float *)(iVar6 + 0x28) < local_a4) {
            local_a4 = *(float *)(iVar6 + 0x28);
          }
          if (local_7c < *(float *)(iVar6 + 0x20)) {
            local_7c = *(float *)(iVar6 + 0x20);
          }
          if (local_78 < *(float *)(iVar6 + 0x24)) {
            local_78 = *(float *)(iVar6 + 0x24);
          }
          if (local_74 < *(float *)(iVar6 + 0x28)) {
            local_74 = *(float *)(iVar6 + 0x28);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x74;
        } while (iVar3 < *(int *)(in_stack_00000004 + 0x204));
      }
      iStack_28 = 0;
      DAT_008879bc = 0;
      for (iStack_20 = 0; iVar3 = DAT_008879bc, iStack_20 < g_CDemonSetPtr->damage_listener_count;
          iStack_20 = iStack_20 + 1) {
        iVar6 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_28 + -4);
        pSVar7 = DAT_00887e70 + DAT_008879bc;
        if (DAT_008879c0 + DAT_008879bc != (CVector3f *)(iVar6 + 0x20)) {
          DAT_008879c0[DAT_008879bc].x = ((CVector3f *)(iVar6 + 0x20))->x;
          DAT_008879c0[iVar3].y = *(float *)(iVar6 + 0x24);
          DAT_008879c0[iVar3].z = *(float *)(iVar6 + 0x28);
        }
        pSVar7->ray_type = 0;
        iVar4 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x34))();
        if (((iVar4 == 2) && (*(float *)(iVar6 + 0x24) <= local_78)) &&
           ((local_a8 <= *(float *)(iVar6 + 0x24) + DAT_00887e70[iVar3].cylinder_top_y &&
            ((((local_ac <= *(float *)(iVar6 + 0x20) + DAT_00887e70[iVar3].cylinder_radius &&
               (*(float *)(iVar6 + 0x20) - DAT_00887e70[iVar3].cylinder_radius <= local_7c)) &&
              (local_a4 <= *(float *)(iVar6 + 0x28) + DAT_00887e70[iVar3].cylinder_radius)) &&
             (*(float *)(iVar6 + 0x28) - DAT_00887e70[iVar3].cylinder_radius <= local_74)))))) {
          DAT_008879bc = DAT_008879bc + 1;
        }
        iStack_28 = iStack_28 + 4;
      }
      *(uint *)(in_stack_00000004 + 0x65b34) = 1;
      if ((iVar3 == 0) && (*(int *)(in_stack_00000004 + 400) == 0)) {
        *(uint *)(in_stack_00000004 + 0x65b34) = 0;
        if (0 < *(int *)(in_stack_00000004 + 0x204)) {
          pfVar5 = (float *)(in_stack_00000004 + 0x208);
          iVar3 = 0;
          do {
            if (pfVar5[0x1a] == 0.0) {
              if ((float)0.10000000000000001 <
                  SQRT(pfVar5[0xd] * pfVar5[0xd] +
                       pfVar5[0xb] * pfVar5[0xb] + pfVar5[0xc] * pfVar5[0xc])) {
                *(uint *)(in_stack_00000004 + 0x65b34) = 1;
                goto LAB_0044ac09;
              }
              fStack_b8 = pfVar5[3] - *pfVar5;
              fStack_b4 = pfVar5[4] - pfVar5[1];
              fStack_b0 = pfVar5[5] - pfVar5[2];
              if ((float)0.10000000000000001 <
                  SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4)) {
                *(uint *)(in_stack_00000004 + 0x65b34) = 1;
                goto LAB_0044ac09;
              }
            }
            iVar3 = iVar3 + 1;
            pfVar5 = pfVar5 + 0x1d;
          } while (iVar3 < *(int *)(in_stack_00000004 + 0x204));
        }
        if (*(int *)(in_stack_00000004 + 0x65b34) == 0) {
          return;
        }
      }
LAB_0044ac09:
      iVar6 = 0;
      iVar3 = in_stack_00000004;
      if (0 < *(int *)(in_stack_00000004 + 0x204)) {
        do {
          *(uint *)(iVar3 + 0x274) = 0;
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 0x74;
        } while (iVar6 < *(int *)(in_stack_00000004 + 0x204));
      }
      iStack_1c = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x204)) {
        iVar3 = in_stack_00000004 + 0x208;
        do {
          if (*(int *)(iVar3 + 0x68) == 0) {
            fVar2 = (float)0.84999999999999998;
            *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) * fVar2;
            fVar1 = *(float *)(in_stack_00000004 + 0x65b18);
            *(float *)(iVar3 + 0x34) = fVar2 * *(float *)(iVar3 + 0x34);
            *(float *)(iVar3 + 0x30) = fVar1 * *(float *)(iVar3 + 0x30);
            fStack_e0 = *(float *)(in_stack_00000004 + 0x65b14);
            if (*(int *)(iVar3 + 0x70) != 0) {
              fStack_e0 = fStack_e0 * (float)4;
            }
            fStack_44 = 1.0 / in_stack_00000008;
            fStack_18 = fStack_e0 * (float)0.03125;
            fStack_64 = -*(float *)(iVar3 + 0x2c);
            fStack_60 = -*(float *)(iVar3 + 0x30);
            fStack_4c = fStack_64 * fStack_44;
            fStack_50 = 1.0 / fStack_18;
            fStack_48 = fStack_60 * fStack_44;
            fStack_5c = -*(float *)(iVar3 + 0x34);
            fStack_44 = fStack_5c * fStack_44;
            fStack_94 = fStack_4c * fStack_18;
            fStack_90 = fStack_48 * fStack_18;
            fStack_8c = fStack_44 * fStack_18;
            fStack_70 = fStack_94 * 0.05f + 0.0;
            fStack_58 = fStack_70 * fStack_50;
            fStack_6c = (0.0 - fStack_e0) + fStack_90 * 0.05f;
            fStack_68 = fStack_8c * 0.05f + 0.0;
            fStack_54 = fStack_6c * fStack_50;
            fStack_50 = fStack_68 * fStack_50;
            if (&fStack_c4 != &fStack_58) {
              fStack_c4 = fStack_58;
              fStack_c0 = fStack_54;
              fStack_bc = fStack_50;
            }
            pfVar5 = (float *)(iVar3 + 0x2c);
            *pfVar5 = *pfVar5 + fStack_c4 * in_stack_00000008;
            *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) + fStack_c0 * in_stack_00000008;
            fStack_a0 = *pfVar5 * in_stack_00000008;
            *(float *)(iVar3 + 0x34) = *(float *)(iVar3 + 0x34) + fStack_bc * in_stack_00000008;
            fStack_9c = *(float *)(iVar3 + 0x30) * in_stack_00000008;
            fStack_98 = in_stack_00000008 * *(float *)(iVar3 + 0x34);
            *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fStack_a0;
            *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fStack_9c;
            *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fStack_98;
            core_curtain_cpp_FUN_00449fc0();
          }
          iVar3 = iVar3 + 0x74;
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < *(int *)(in_stack_00000004 + 0x204));
      }
      iStack_30 = in_stack_00000004 + 0x208;
      iStack_24 = 0;
      do {
        iVar6 = 0;
        iVar3 = iStack_30;
        if (0 < *(int *)(in_stack_00000004 + 0x204)) {
          do {
            if (*(int *)(iVar3 + 0x68) == 0) {
              core_curtain_cpp_FUN_00449fc0();
            }
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + 0x74;
          } while (iVar6 < *(int *)(in_stack_00000004 + 0x204));
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 3);
      iVar3 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x204)) {
        pfVar5 = (float *)(in_stack_00000004 + 0x65b20);
        iVar6 = in_stack_00000004 + 0x208;
        do {
          iStack_2c = iVar6;
          if (*(int *)(iStack_2c + 0x6c) != 0) {
            *(float *)(iStack_2c + 0x2c) = *pfVar5 * *(float *)(iStack_2c + 0x2c);
            *(float *)(iStack_2c + 0x30) = *pfVar5 * *(float *)(iStack_2c + 0x30);
            *(float *)(iStack_2c + 0x34) = *pfVar5 * *(float *)(iStack_2c + 0x34);
          }
          if ((uint *)(iStack_2c + 0x38) != (uint *)(iStack_2c + 0x20)) {
            *(uint *)(iStack_2c + 0x38) = *(uint *)(iStack_2c + 0x20);
            *(uint *)(iStack_2c + 0x3c) = *(uint *)(iStack_2c + 0x24);
            *(uint *)(iStack_2c + 0x40) = *(uint *)(iStack_2c + 0x28);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iStack_2c + 0x74;
        } while (iVar3 < *(int *)(in_stack_00000004 + 0x204));
      }
      if (*(int *)(in_stack_00000004 + 0x65b2c) != 0) {
        iVar6 = 0;
        iVar3 = 0;
        if (0 < *(int *)(in_stack_00000004 + 0x204)) {
          iVar4 = in_stack_00000004 + 0x208;
          do {
            if (*(float *)(iVar4 + 0x24) <= *(float *)(in_stack_00000004 + 0x65b28)) {
              iVar3 = iVar3 + 1;
            }
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 0x74;
          } while (iVar6 < *(int *)(in_stack_00000004 + 0x204));
        }
        if (iVar3 == *(int *)(in_stack_00000004 + 0x204)) {
          *(uint *)(in_stack_00000004 + 0x1f8) = 0;
        }
      }
      core_curtain_cpp_FUN_00449f10();
    }
  }
  return;
}
