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
  float fVar4;
  int iVar5;
  int iVar6;
  CCurtain *pCVar7;
  SCurtainVertex *pSVar8;
  int iVar9;
  SCollisionInfo *pSVar10;
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
  SCurtainVertex *pSStack_30;
  SCurtainVertex *pSStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (((*(int *)this_ptr->unk6 != 0) || (this_ptr->falling != 0)) &&
     (iVar5 = this_ptr->simulate_me, this_ptr->unk6[0] = '\0', this_ptr->unk6[1] = '\0',
     this_ptr->unk6[2] = '\0', this_ptr->unk6[3] = '\0', iVar5 != 0)) {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->let_go_event);
    if (iVar5 != 0) {
      this_ptr->falling = 1;
    }
    iVar5 = strcmp(this_ptr->let_go_event,"none");
    if ((iVar5 == 0) || (this_ptr->falling != 0)) {
      if (this_ptr->hit_floor != 0) {
        fStack_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                              (&this_ptr->base,0.1,(CVector3f *)0x0);
        *(float *)this_ptr->unk5 = fStack_14;
      }
      *(float *)this_ptr->unk4 = 1.0 / delta_time;
      local_ac = 99999.0;
      local_a8 = 99999.0;
      local_a4 = 99999.0;
      local_7c = -99999.0;
      local_78 = -99999.0;
      local_74 = -99999.0;
      iVar5 = 0;
      if (0 < this_ptr->unk2) {
        pSVar8 = this_ptr->unk3;
        do {
          if (*(float *)(pSVar8->unk + 0x20) < local_ac) {
            local_ac = *(float *)(pSVar8->unk + 0x20);
          }
          if (*(float *)(pSVar8->unk + 0x24) < local_a8) {
            local_a8 = *(float *)(pSVar8->unk + 0x24);
          }
          if (*(float *)(pSVar8->unk + 0x28) < local_a4) {
            local_a4 = *(float *)(pSVar8->unk + 0x28);
          }
          if (local_7c < *(float *)(pSVar8->unk + 0x20)) {
            local_7c = *(float *)(pSVar8->unk + 0x20);
          }
          if (local_78 < *(float *)(pSVar8->unk + 0x24)) {
            local_78 = *(float *)(pSVar8->unk + 0x24);
          }
          if (local_74 < *(float *)(pSVar8->unk + 0x28)) {
            local_74 = *(float *)(pSVar8->unk + 0x28);
          }
          iVar5 = iVar5 + 1;
          pSVar8 = pSVar8 + 1;
        } while (iVar5 < this_ptr->unk2);
      }
      iStack_28 = 0;
      DAT_008879bc = 0;
      for (iStack_20 = 0; iVar5 = DAT_008879bc, iStack_20 < g_CDemonSetPtr->damage_listener_count;
          iStack_20 = iStack_20 + 1) {
        iVar9 = *(int *)(g_CDemonSetPtr->unk4 + iStack_28 + -4);
        pSVar10 = DAT_00887e70 + DAT_008879bc;
        if (DAT_008879c0 + DAT_008879bc != (CVector3f *)(iVar9 + 0x20)) {
          DAT_008879c0[DAT_008879bc].x = ((CVector3f *)(iVar9 + 0x20))->x;
          DAT_008879c0[iVar5].y = *(float *)(iVar9 + 0x24);
          DAT_008879c0[iVar5].z = *(float *)(iVar9 + 0x28);
        }
        pSVar10->ray_type = 0;
        iVar6 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x34))(iVar9,pSVar10);
        if (((iVar6 == 2) && (*(float *)(iVar9 + 0x24) <= local_78)) &&
           ((local_a8 <= *(float *)(iVar9 + 0x24) + DAT_00887e70[iVar5].cylinder_top_y &&
            ((((local_ac <= *(float *)(iVar9 + 0x20) + DAT_00887e70[iVar5].cylinder_radius &&
               (*(float *)(iVar9 + 0x20) - DAT_00887e70[iVar5].cylinder_radius <= local_7c)) &&
              (local_a4 <= *(float *)(iVar9 + 0x28) + DAT_00887e70[iVar5].cylinder_radius)) &&
             (*(float *)(iVar9 + 0x28) - DAT_00887e70[iVar5].cylinder_radius <= local_74)))))) {
          DAT_008879bc = DAT_008879bc + 1;
        }
        iStack_28 = iStack_28 + 4;
      }
      this_ptr->unk6[4] = '\x01';
      this_ptr->unk6[5] = '\0';
      this_ptr->unk6[6] = '\0';
      this_ptr->unk6[7] = '\0';
      if ((iVar5 == 0) && (this_ptr->falling == 0)) {
        iVar5 = this_ptr->unk2;
        this_ptr->unk6[4] = '\0';
        this_ptr->unk6[5] = '\0';
        this_ptr->unk6[6] = '\0';
        this_ptr->unk6[7] = '\0';
        if (0 < iVar5) {
          pSVar8 = this_ptr->unk3;
          iVar5 = 0;
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
              fStack_b8 = *(float *)(pSVar8->unk + 0xc) - *(float *)pSVar8->unk;
              fStack_b4 = *(float *)(pSVar8->unk + 0x10) - *(float *)(pSVar8->unk + 4);
              fStack_b0 = *(float *)(pSVar8->unk + 0x14) - *(float *)(pSVar8->unk + 8);
              if ((float)0.10000000000000001 <
                  SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4)) {
                this_ptr->unk6[4] = '\x01';
                this_ptr->unk6[5] = '\0';
                this_ptr->unk6[6] = '\0';
                this_ptr->unk6[7] = '\0';
                goto LAB_0044ac09;
              }
            }
            iVar5 = iVar5 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar5 < this_ptr->unk2);
        }
        if (*(int *)(this_ptr->unk6 + 4) == 0) {
          return;
        }
      }
LAB_0044ac09:
      iVar5 = 0;
      pCVar7 = this_ptr;
      if (0 < this_ptr->unk2) {
        do {
          pCVar7->unk3[0].unk[0x6c] = '\0';
          pCVar7->unk3[0].unk[0x6d] = '\0';
          pCVar7->unk3[0].unk[0x6e] = '\0';
          pCVar7->unk3[0].unk[0x6f] = '\0';
          iVar5 = iVar5 + 1;
          pCVar7 = (CCurtain *)&(pCVar7->base).create_prob;
        } while (iVar5 < this_ptr->unk2);
      }
      iStack_1c = 0;
      if (0 < this_ptr->unk2) {
        pSVar8 = this_ptr->unk3;
        do {
          if (*(int *)(pSVar8->unk + 0x68) == 0) {
            fVar4 = (float)0.84999999999999998;
            *(float *)(pSVar8->unk + 0x2c) = *(float *)(pSVar8->unk + 0x2c) * fVar4;
            fVar3 = this_ptr->dampen;
            *(float *)(pSVar8->unk + 0x34) = fVar4 * *(float *)(pSVar8->unk + 0x34);
            *(float *)(pSVar8->unk + 0x30) = fVar3 * *(float *)(pSVar8->unk + 0x30);
            fStack_e0 = this_ptr->weight;
            if (*(int *)(pSVar8->unk + 0x70) != 0) {
              fStack_e0 = fStack_e0 * (float)4;
            }
            fStack_44 = 1.0 / delta_time;
            fStack_18 = fStack_e0 * (float)0.03125;
            fStack_64 = -*(float *)(pSVar8->unk + 0x2c);
            fStack_60 = -*(float *)(pSVar8->unk + 0x30);
            fStack_4c = fStack_64 * fStack_44;
            fStack_50 = 1.0 / fStack_18;
            fStack_48 = fStack_60 * fStack_44;
            fStack_5c = -*(float *)(pSVar8->unk + 0x34);
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
            pcVar1 = pSVar8->unk + 0x2c;
            *(float *)pcVar1 = *(float *)pcVar1 + fStack_c4 * delta_time;
            *(float *)(pSVar8->unk + 0x30) = *(float *)(pSVar8->unk + 0x30) + fStack_c0 * delta_time
            ;
            fStack_a0 = *(float *)pcVar1 * delta_time;
            *(float *)(pSVar8->unk + 0x34) = *(float *)(pSVar8->unk + 0x34) + fStack_bc * delta_time
            ;
            fStack_9c = *(float *)(pSVar8->unk + 0x30) * delta_time;
            fStack_98 = delta_time * *(float *)(pSVar8->unk + 0x34);
            *(float *)(pSVar8->unk + 0x20) = *(float *)(pSVar8->unk + 0x20) + fStack_a0;
            *(float *)(pSVar8->unk + 0x24) = *(float *)(pSVar8->unk + 0x24) + fStack_9c;
            *(float *)(pSVar8->unk + 0x28) = *(float *)(pSVar8->unk + 0x28) + fStack_98;
            core_curtain_cpp_CCurtain_FUN_00449fc0(this_ptr);
          }
          pSVar8 = pSVar8 + 1;
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < this_ptr->unk2);
      }
      pSStack_30 = this_ptr->unk3;
      iStack_24 = 0;
      do {
        iVar5 = 0;
        pSVar8 = pSStack_30;
        if (0 < this_ptr->unk2) {
          do {
            if (*(int *)(pSVar8->unk + 0x68) == 0) {
              core_curtain_cpp_CCurtain_FUN_00449fc0(this_ptr);
            }
            iVar5 = iVar5 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar5 < this_ptr->unk2);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 3);
      iVar5 = 0;
      if (0 < this_ptr->unk2) {
        pfVar2 = &this_ptr->friction;
        pSVar8 = this_ptr->unk3;
        do {
          pSStack_2c = pSVar8;
          if (*(int *)(pSStack_2c->unk + 0x6c) != 0) {
            *(float *)(pSStack_2c->unk + 0x2c) = *pfVar2 * *(float *)(pSStack_2c->unk + 0x2c);
            *(float *)(pSStack_2c->unk + 0x30) = *pfVar2 * *(float *)(pSStack_2c->unk + 0x30);
            *(float *)(pSStack_2c->unk + 0x34) = *pfVar2 * *(float *)(pSStack_2c->unk + 0x34);
          }
          if (pSStack_2c->unk + 0x38 != pSStack_2c->unk + 0x20) {
            *(uint *)(pSStack_2c->unk + 0x38) = *(uint *)(pSStack_2c->unk + 0x20);
            *(uint *)(pSStack_2c->unk + 0x3c) = *(uint *)(pSStack_2c->unk + 0x24);
            *(uint *)(pSStack_2c->unk + 0x40) = *(uint *)(pSStack_2c->unk + 0x28);
          }
          iVar5 = iVar5 + 1;
          pSVar8 = pSStack_2c + 1;
        } while (iVar5 < this_ptr->unk2);
      }
      if (this_ptr->hit_floor != 0) {
        iVar9 = 0;
        iVar5 = 0;
        if (0 < this_ptr->unk2) {
          pSVar8 = this_ptr->unk3;
          do {
            if (*(float *)(pSVar8->unk + 0x24) <= *(float *)this_ptr->unk5) {
              iVar5 = iVar5 + 1;
            }
            iVar9 = iVar9 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar9 < this_ptr->unk2);
        }
        if (iVar5 == this_ptr->unk2) {
          this_ptr->simulate_me = 0;
        }
      }
      core_curtain_cpp_CCurtain_FUN_00449f10(this_ptr);
    }
  }
  return;
}
