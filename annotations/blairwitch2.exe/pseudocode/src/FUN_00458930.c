// Name: FUN_00458930
// Address: 00458930
// Address Range: [[00458930, 00458e7d]]
// Convention: unknown
// Signature: undefined4 FUN_00458930(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00458930(CCharacter *param_1)

{
  CFlame *pCVar1;
  CCharacter *pCVar2;
  CDemonActor *this_ptr;
  int iVar3;
  int *piVar4;
  CCharacter *unaff_EBP;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_1100 [45];
  int aiStackY_104c [6];
  float afStackY_1034 [947];
  CCharacter *in_stack_fffffea0;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  CVector3f CStack_114;
  float fStack_100;
  float afStack_fc [2];
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [3];
  int iStack_84;
  uintptr_t uStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  int aiStack_54 [2];
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f *pCStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  pCVar1 = param_1[2].flames;
  pCVar1[1].off_event[0x3c] = '\0';
  pCVar1[1].off_event[0x3d] = '\0';
  pCVar1[1].off_event[0x3e] = '\0';
  pCVar1[1].off_event[0x3f] = '\0';
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
  if ((float)_DAT_005d038f <= fStack_14) {
    if ((param_1->carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      pCStack_28 = &(param_1->base).location.position;
      iStack_20 = 0;
      fStack_1c = 0.0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= iStack_20) break;
        this_ptr = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)fStack_1c),
                              g_CLadderClassInfo.name_hash);
        pCStack_18 = this_ptr;
        if ((this_ptr != (CDemonActor *)0x0) &&
           (ABS((param_1->base).location.position.y -
                ((this_ptr->location).position.y + this_ptr[1].particle_systems[0].fade_duration))
            <= (float)_DAT_005d039f)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(this_ptr,pCStack_28,&CStack_114)
          ;
          CStack_f4.y = CStack_114.x;
          *(uint *)((int)&CStack_f4 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&CStack_e8 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
               *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if ((ABS(CStack_e8.x) <= (float)_DAT_005d03a7) && (CStack_e8.x <= 0.0)) {
            (*((this_ptr->vtable)._ub)->getBoundingBox)
                      (this_ptr,(CBoundingBox3D *)in_stack_fffffea0);
            puVar5 = (uint *)&stack0xfffffeb8;
            puVar6 = (uint *)&stack0xfffffec8;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            if (fStack_124 < CStack_e8.x) {
              if (fStack_124 + 1.0 < CStack_e8.x) goto LAB_004589bb;
              CStack_e8.x = fStack_124;
            }
            if (CStack_e8.x < fStack_130) {
              if (CStack_e8.x < fStack_130 + (float)_DAT_005d03af) goto LAB_004589bb;
              CStack_e8.x = fStack_130;
            }
            fStack_94 = fStack_130 + fStack_124;
            afStack_90[0] = fStack_12c + fStack_120;
            afStack_90[1] = fStack_128 + fStack_11c;
            afStack_cc[2] = fStack_130 + fStack_124;
            afStack_cc[(uint)bVar7 * -2 + 3] = afStack_90[(uint)bVar7 * -2];
            afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            fStack_100 = afStack_cc[2] * _DAT_005d0397;
            afStack_fc[0] = afStack_cc[3] * _DAT_005d0397;
            afStack_fc[1] = fStack_bc * _DAT_005d0397;
            fStack_118 = afStack_cc[2] * _DAT_005d0397;
            *(float *)((int)&CStack_114 + (uint)bVar7 * -8) = afStack_fc[(uint)bVar7 * -2];
            *(float *)((int)&CStack_114 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) =
                 afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            CStack_e8.z = CStack_114.y;
            in_stack_fffffea0 = unaff_EBP;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      (&unaff_EBP->base,&CStack_e8,&CStack_a0);
            CStack_7c.x = CStack_a0.x;
            *(uint *)((int)&CStack_7c + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&CStack_a0 + (uint)bVar7 * -8 + 4);
            *(uint *)((int)&CStack_7c + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 4) =
                 *(uint *)((int)&CStack_a0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            if (&CStack_e8 != &CStack_7c) {
              CStack_e8.x = CStack_7c.x;
              CStack_e8.y = CStack_7c.y;
              CStack_e8.z = CStack_7c.z;
            }
            CStack_e8.y = CStack_e8.y + (unaff_EBP->model).bone_origins[0x18].z;
            fStack_30 = (param_1->base).orient_matrix.m[0].z;
            fStack_2c = (param_1->base).orient_matrix.m[1].z;
            fStack_34 = (param_1->base).orient_matrix.m[2].z;
            pCStack_28 = (CVector3f *)(unaff_EBP->base).orient_matrix.m[0].z;
            fStack_24 = (unaff_EBP->base).orient_matrix.m[1].z;
            fStack_1c = (unaff_EBP->base).orient_matrix.m[2].z;
            fVar8 = (float10)fcos((float10)_DAT_005d03b7);
            if (fVar8 <= (float10)ABS(fStack_34 * fStack_1c +
                                      fStack_30 * (float)pCStack_28 + fStack_2c * fStack_24)) {
              in_stack_fffffea0 = param_1;
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        (&param_1->base,&(unaff_EBP->base).location.position,&CStack_70);
              fStack_d0 = CStack_70.x;
              afStack_cc[(uint)bVar7 * -2] = *(float *)((int)&CStack_70 + (uint)bVar7 * -8 + 4);
              afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                   *(float *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              if (0.0 < afStack_cc[1]) {
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (g_CConsolePtr,"?Ladder dot : %f\n" + 1);
                *(CCharacter **)(param_1[2].flames[1].off_event + 0x3c) = unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(param_1->model).base,0x2d,1);
                pCVar2 = param_1 + 1;
                (pCVar2->base).actor_name[0x14] = '\0';
                (pCVar2->base).actor_name[0x15] = '\0';
                (pCVar2->base).actor_name[0x16] = '\0';
                (pCVar2->base).actor_name[0x17] = '\0';
                CStack_dc.y = (unaff_EBP->model).bone_origins[0x18].z;
                CStack_dc.x = 0.0;
                CStack_dc.z = -1.5;
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                          (&unaff_EBP->base,&CStack_dc,&CStack_ac);
                piVar4 = &param_1[2].flames[2].base.runtime_state;
                fStack_b8 = CStack_ac.x;
                afStack_cc[(uint)bVar7 * -2 + 6] =
                     *(float *)((int)&CStack_ac + (uint)bVar7 * -8 + 4);
                afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                     *(float *)((int)&CStack_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
                fStack_4c = fStack_b8 - (param_1->base).location.position.x;
                afStack_48[0] = fStack_b4 - (param_1->base).location.position.y;
                afStack_48[1] = fStack_b0 - (param_1->base).location.position.z;
                afStack_90[2] = fStack_4c;
                afStack_90[(uint)bVar7 * -2 + 3] = afStack_48[(uint)bVar7 * -2];
                afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                     afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                if ((float *)piVar4 != afStack_90 + 2) {
                  *piVar4 = (int)afStack_90[2];
                  param_1[2].flames[2].base.health = iStack_84;
                  param_1[2].flames[2].base.validation_magic = uStack_80;
                }
                afStack_48[2] = CStack_e8.x - (param_1->base).location.position.x;
                afStack_48[3] = CStack_e8.y - (param_1->base).location.position.y;
                fStack_38 = CStack_e8.z - (param_1->base).location.position.z;
                CStack_f4.x = afStack_48[2];
                *(float *)((int)&CStack_f4 + (uint)bVar7 * -8 + 4) =
                     afStack_48[(uint)bVar7 * -2 + 3];
                *(float *)((int)&CStack_f4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                     afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                          (&CStack_f4,&CStack_64);
                fStack_58 = CStack_64.x;
                aiStack_54[(uint)bVar7 * -2] = *(int *)((int)&CStack_64 + (uint)bVar7 * -8 + 4);
                aiStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     *(int *)((int)&CStack_64 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
                param_1[2].flames[2].base.lifecycle_state = 0x3f800000;
                param_1[2].flames[2].base.direction_hint = aiStack_54[0];
                return 1;
              }
            }
          }
        }
LAB_004589bb:
        iStack_20 = iStack_20 + 1;
        fStack_1c = (float)((int)fStack_1c + 4);
      }
    }
  }
  return 0;
}
