// Name: core_curtain.cpp_CCurtain_process_FUN_0044a920
// Address: 0044a920
// Address Range: [[0044a920, 0044b05e]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_process_FUN_0044a920(CCurtain *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_process_FUN_0044a920(CCurtain *this_ptr,float delta_time)

{
  char *pcVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  CCurtain *pCVar7;
  SCurtainVertex *pSVar8;
  int iVar9;
  SCollisionInfo *pSVar10;
  float fStack_d4;
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
  float fStack_88;
  float fStack_84;
  float fStack_80;
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
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  SCurtainVertex *pSStack_24;
  SCurtainVertex *pSStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (((*(int *)this_ptr->unk6 != 0) || (this_ptr->falling != 0)) &&
     (iVar4 = this_ptr->simulate_me, this_ptr->unk6[0] = '\0', this_ptr->unk6[1] = '\0',
     this_ptr->unk6[2] = '\0', this_ptr->unk6[3] = '\0', iVar4 != 0)) {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->let_go_event);
    if (iVar4 != 0) {
      this_ptr->falling = 1;
    }
    iVar4 = strcmp(this_ptr->let_go_event,"none");
    if ((iVar4 == 0) || (this_ptr->falling != 0)) {
      if (this_ptr->hit_floor != 0) {
        fVar5 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                          (&this_ptr->base,0.1,(CVector3f *)0x0);
        *(float *)this_ptr->unk5 = fVar5;
      }
      *(float *)this_ptr->unk4 = 1.0 / delta_time;
      fStack_a0 = 99999.0;
      fStack_9c = 99999.0;
      fStack_98 = 99999.0;
      fStack_70 = -99999.0;
      fStack_6c = -99999.0;
      fStack_68 = -99999.0;
      iVar4 = 0;
      if (0 < this_ptr->unk2) {
        pSVar8 = this_ptr->unk3;
        do {
          if (*(float *)(pSVar8->unk + 0x20) < fStack_a0) {
            fStack_a0 = *(float *)(pSVar8->unk + 0x20);
          }
          if (*(float *)(pSVar8->unk + 0x24) < fStack_9c) {
            fStack_9c = *(float *)(pSVar8->unk + 0x24);
          }
          if (*(float *)(pSVar8->unk + 0x28) < fStack_98) {
            fStack_98 = *(float *)(pSVar8->unk + 0x28);
          }
          if (fStack_70 < *(float *)(pSVar8->unk + 0x20)) {
            fStack_70 = *(float *)(pSVar8->unk + 0x20);
          }
          if (fStack_6c < *(float *)(pSVar8->unk + 0x24)) {
            fStack_6c = *(float *)(pSVar8->unk + 0x24);
          }
          if (fStack_68 < *(float *)(pSVar8->unk + 0x28)) {
            fStack_68 = *(float *)(pSVar8->unk + 0x28);
          }
          iVar4 = iVar4 + 1;
          pSVar8 = pSVar8 + 1;
        } while (iVar4 < this_ptr->unk2);
      }
      iStack_1c = 0;
      DAT_008879bc = 0;
      for (iStack_14 = 0; iVar4 = DAT_008879bc, iStack_14 < g_CDemonSetPtr->damage_listener_count;
          iStack_14 = iStack_14 + 1) {
        iVar9 = *(int *)(g_CDemonSetPtr->unk4 + iStack_1c + -4);
        pSVar10 = DAT_00887e70 + DAT_008879bc;
        if (DAT_008879c0 + DAT_008879bc != (CVector3f *)(iVar9 + 0x20)) {
          DAT_008879c0[DAT_008879bc].x = ((CVector3f *)(iVar9 + 0x20))->x;
          DAT_008879c0[iVar4].y = *(float *)(iVar9 + 0x24);
          DAT_008879c0[iVar4].z = *(float *)(iVar9 + 0x28);
        }
        pSVar10->ray_type = 0;
        iVar6 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x34))();
        if (((iVar6 == 2) && (*(float *)(iVar9 + 0x24) <= fStack_6c)) &&
           ((fStack_9c <= *(float *)(iVar9 + 0x24) + DAT_00887e70[iVar4].cylinder_top_y &&
            ((((fStack_a0 <= *(float *)(iVar9 + 0x20) + DAT_00887e70[iVar4].cylinder_radius &&
               (*(float *)(iVar9 + 0x20) - DAT_00887e70[iVar4].cylinder_radius <= fStack_70)) &&
              (fStack_98 <= *(float *)(iVar9 + 0x28) + DAT_00887e70[iVar4].cylinder_radius)) &&
             (*(float *)(iVar9 + 0x28) - DAT_00887e70[iVar4].cylinder_radius <= fStack_68)))))) {
          DAT_008879bc = DAT_008879bc + 1;
        }
        iStack_1c = iStack_1c + 4;
      }
      this_ptr->unk6[4] = '\x01';
      this_ptr->unk6[5] = '\0';
      this_ptr->unk6[6] = '\0';
      this_ptr->unk6[7] = '\0';
      if ((iVar4 == 0) && (this_ptr->falling == 0)) {
        iVar4 = this_ptr->unk2;
        this_ptr->unk6[4] = '\0';
        this_ptr->unk6[5] = '\0';
        this_ptr->unk6[6] = '\0';
        this_ptr->unk6[7] = '\0';
        if (0 < iVar4) {
          pSVar8 = this_ptr->unk3;
          iVar4 = 0;
          do {
            if (*(int *)(pSVar8->unk + 0x68) == 0) {
              if ((float)0.10000000000000001 <
                  SQRT(*(float *)(pSVar8->unk + 0x34) * *(float *)(pSVar8->unk + 0x34) +
                       *(float *)(pSVar8->unk + 0x2c) * *(float *)(pSVar8->unk + 0x2c) +
                       *(float *)(pSVar8->unk + 0x30) * *(float *)(pSVar8->unk + 0x30))) {
                this_ptr->unk6[4] = '\x01';
                this_ptr->unk6[5] = '\0';
                this_ptr->unk6[6] = '\0';
                this_ptr->unk6[7] = '\0';
                goto LAB_0044ac09;
              }
              local_ac = *(float *)(pSVar8->unk + 0xc) - *(float *)pSVar8->unk;
              local_a8 = *(float *)(pSVar8->unk + 0x10) - *(float *)(pSVar8->unk + 4);
              local_a4 = *(float *)(pSVar8->unk + 0x14) - *(float *)(pSVar8->unk + 8);
              if ((float)0.10000000000000001 <
                  SQRT(local_a4 * local_a4 + local_ac * local_ac + local_a8 * local_a8)) {
                this_ptr->unk6[4] = '\x01';
                this_ptr->unk6[5] = '\0';
                this_ptr->unk6[6] = '\0';
                this_ptr->unk6[7] = '\0';
                goto LAB_0044ac09;
              }
            }
            iVar4 = iVar4 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar4 < this_ptr->unk2);
        }
        if (*(int *)(this_ptr->unk6 + 4) == 0) {
          return;
        }
      }
LAB_0044ac09:
      iVar4 = 0;
      pCVar7 = this_ptr;
      if (0 < this_ptr->unk2) {
        do {
          pCVar7->unk3[0].unk[0x6c] = '\0';
          pCVar7->unk3[0].unk[0x6d] = '\0';
          pCVar7->unk3[0].unk[0x6e] = '\0';
          pCVar7->unk3[0].unk[0x6f] = '\0';
          iVar4 = iVar4 + 1;
          pCVar7 = (CCurtain *)&(pCVar7->base).create_prob;
        } while (iVar4 < this_ptr->unk2);
      }
      iVar4 = 0;
      if (0 < this_ptr->unk2) {
        pSVar8 = this_ptr->unk3;
        do {
          if (*(int *)(pSVar8->unk + 0x68) == 0) {
            fVar3 = (float)0.84999999999999998;
            *(float *)(pSVar8->unk + 0x2c) = *(float *)(pSVar8->unk + 0x2c) * fVar3;
            fVar5 = this_ptr->dampen;
            *(float *)(pSVar8->unk + 0x34) = fVar3 * *(float *)(pSVar8->unk + 0x34);
            *(float *)(pSVar8->unk + 0x30) = fVar5 * *(float *)(pSVar8->unk + 0x30);
            fStack_d4 = this_ptr->weight;
            if (*(int *)(pSVar8->unk + 0x70) != 0) {
              fStack_d4 = fStack_d4 * (float)4;
            }
            fStack_38 = 1.0 / delta_time;
            fStack_80 = fStack_d4 * (float)0.03125;
            fStack_58 = -*(float *)(pSVar8->unk + 0x2c);
            fStack_54 = -*(float *)(pSVar8->unk + 0x30);
            fStack_40 = fStack_58 * fStack_38;
            fStack_44 = 1.0 / fStack_80;
            fStack_3c = fStack_54 * fStack_38;
            fStack_50 = -*(float *)(pSVar8->unk + 0x34);
            fStack_38 = fStack_50 * fStack_38;
            fStack_88 = fStack_40 * fStack_80;
            fStack_84 = fStack_3c * fStack_80;
            fStack_80 = fStack_38 * fStack_80;
            fStack_64 = fStack_88 * 0.05f + 0.0;
            fStack_4c = fStack_64 * fStack_44;
            fStack_60 = (0.0 - fStack_d4) + fStack_84 * 0.05f;
            fStack_5c = fStack_80 * 0.05f + 0.0;
            fStack_48 = fStack_60 * fStack_44;
            fStack_44 = fStack_5c * fStack_44;
            if (&fStack_b8 != &fStack_4c) {
              fStack_b8 = fStack_4c;
              fStack_b4 = fStack_48;
              fStack_b0 = fStack_44;
            }
            pcVar1 = pSVar8->unk + 0x2c;
            *(float *)pcVar1 = *(float *)pcVar1 + fStack_b8 * delta_time;
            *(float *)(pSVar8->unk + 0x30) = *(float *)(pSVar8->unk + 0x30) + fStack_b4 * delta_time
            ;
            fStack_94 = *(float *)pcVar1 * delta_time;
            *(float *)(pSVar8->unk + 0x34) = *(float *)(pSVar8->unk + 0x34) + fStack_b0 * delta_time
            ;
            fStack_90 = *(float *)(pSVar8->unk + 0x30) * delta_time;
            fStack_8c = delta_time * *(float *)(pSVar8->unk + 0x34);
            *(float *)(pSVar8->unk + 0x20) = *(float *)(pSVar8->unk + 0x20) + fStack_94;
            *(float *)(pSVar8->unk + 0x24) = *(float *)(pSVar8->unk + 0x24) + fStack_90;
            *(float *)(pSVar8->unk + 0x28) = *(float *)(pSVar8->unk + 0x28) + fStack_8c;
            core_curtain_cpp_CCurtain_FUN_00449fc0(this_ptr);
          }
          pSVar8 = pSVar8 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < this_ptr->unk2);
      }
      pSStack_24 = this_ptr->unk3;
      iStack_18 = 0;
      do {
        iVar4 = 0;
        pSVar8 = pSStack_24;
        if (0 < this_ptr->unk2) {
          do {
            if (*(int *)(pSVar8->unk + 0x68) == 0) {
              core_curtain_cpp_CCurtain_FUN_00449fc0(this_ptr);
            }
            iVar4 = iVar4 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar4 < this_ptr->unk2);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 3);
      iVar4 = 0;
      if (0 < this_ptr->unk2) {
        pfVar2 = &this_ptr->friction;
        pSVar8 = this_ptr->unk3;
        do {
          pSStack_20 = pSVar8;
          if (*(int *)(pSStack_20->unk + 0x6c) != 0) {
            *(float *)(pSStack_20->unk + 0x2c) = *pfVar2 * *(float *)(pSStack_20->unk + 0x2c);
            *(float *)(pSStack_20->unk + 0x30) = *pfVar2 * *(float *)(pSStack_20->unk + 0x30);
            *(float *)(pSStack_20->unk + 0x34) = *pfVar2 * *(float *)(pSStack_20->unk + 0x34);
          }
          if (pSStack_20->unk + 0x38 != pSStack_20->unk + 0x20) {
            *(uint *)(pSStack_20->unk + 0x38) = *(uint *)(pSStack_20->unk + 0x20);
            *(uint *)(pSStack_20->unk + 0x3c) = *(uint *)(pSStack_20->unk + 0x24);
            *(uint *)(pSStack_20->unk + 0x40) = *(uint *)(pSStack_20->unk + 0x28);
          }
          iVar4 = iVar4 + 1;
          pSVar8 = pSStack_20 + 1;
        } while (iVar4 < this_ptr->unk2);
      }
      if (this_ptr->hit_floor != 0) {
        iVar9 = 0;
        iVar4 = 0;
        if (0 < this_ptr->unk2) {
          pSVar8 = this_ptr->unk3;
          do {
            if (*(float *)(pSVar8->unk + 0x24) <= *(float *)this_ptr->unk5) {
              iVar4 = iVar4 + 1;
            }
            iVar9 = iVar9 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar9 < this_ptr->unk2);
        }
        if (iVar4 == this_ptr->unk2) {
          this_ptr->simulate_me = 0;
        }
      }
      core_curtain_cpp_CCurtain_FUN_00449f10(this_ptr);
    }
  }
  return;
}
