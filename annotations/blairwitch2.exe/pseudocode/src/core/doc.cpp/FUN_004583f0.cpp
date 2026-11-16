// Name: core_doc.cpp_FUN_004583f0
// Address: 004583f0
// Address Range: [[004583f0, 0045892b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_004583f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_doc_cpp_FUN_004583f0(void)

{
  CFlame *pCVar1;
  CCharacter *pCVar2;
  CConsole *this_ptr;
  CDemonActor *this_ptr_00;
  int iVar3;
  int *piVar4;
  CDemonActor *unaff_EBP;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  CCharacter *in_stack_00000004;
  float afStackY_1100 [24];
  int aiStackY_10a0 [3];
  float afStackY_1094 [6];
  int aiStackY_107c [3];
  float afStackY_1070 [964];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  CVector3f CStack_118;
  float fStack_10c;
  float afStack_108 [2];
  CVector3f CStack_100;
  float fStack_f4;
  CVector3f CStack_f0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [3];
  int iStack_c0;
  uintptr_t uStack_bc;
  float fStack_b8;
  int aiStack_b4 [2];
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [2];
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [2];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f *pCStack_24;
  float fStack_20;
  int iStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  pCVar1 = in_stack_00000004[2].flames;
  pCVar1[1].on_event[0x20] = '\0';
  pCVar1[1].on_event[0x21] = '\0';
  pCVar1[1].on_event[0x22] = '\0';
  pCVar1[1].on_event[0x23] = '\0';
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        (in_stack_00000004,0);
  if ((float)_DAT_005d0347 <= fStack_14) {
    if ((in_stack_00000004->carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      pCStack_24 = &(in_stack_00000004->base).location.position;
      fStack_20 = 0.0;
      iStack_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)fStack_20),
                                 g_CLadderClassInfo.name_hash);
        pCStack_18 = this_ptr_00;
        if ((this_ptr_00 != (CDemonActor *)0x0) &&
           (ABS((in_stack_00000004->base).location.position.y - (this_ptr_00->location).position.y)
            <= (float)_DAT_005d0357)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    (this_ptr_00,pCStack_24,&CStack_f0);
          CStack_70.y = CStack_f0.x;
          *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&CStack_f0 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&CStack_64 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
               *(uint *)((int)&CStack_f0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if ((ABS(CStack_64.x) <= (float)_DAT_005d035f) && (0.0 <= (double)CStack_64.x)) {
            (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,SUB84(__BITCAST_UINT64((double)CStack_64.x),0))
            ;
            puVar5 = (uint *)&stack0xfffffeb8;
            puVar6 = (uint *)&stack0xfffffec8;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            if (fStack_124 < CStack_64.x) {
              if (fStack_124 + 1.0 < CStack_64.x) goto LAB_0045847b;
              CStack_64.x = fStack_124;
            }
            if (CStack_64.x < fStack_130) {
              if (CStack_64.x < fStack_130 + (float)_DAT_005d0367) goto LAB_0045847b;
              CStack_64.x = fStack_130;
            }
            fStack_f4 = fStack_130 + fStack_124;
            CStack_f0.x = fStack_12c + fStack_120;
            CStack_f0.y = fStack_128 + fStack_11c;
            fStack_88 = fStack_130 + fStack_124;
            afStack_84[(uint)bVar7 * -2] = *(float *)((int)&CStack_f0 + (uint)bVar7 * -8);
            afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 *(float *)((int)&CStack_f0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
            afStack_54[2] = fStack_88 * _DAT_005d034f;
            afStack_54[3] = afStack_84[0] * _DAT_005d034f;
            fStack_44 = afStack_84[1] * _DAT_005d034f;
            fStack_40 = fStack_88 * _DAT_005d034f;
            afStack_54[(uint)bVar7 * -2 + 6] = afStack_54[(uint)bVar7 * -2 + 3];
            afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            CStack_64.z = fStack_38;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      (unaff_EBP,&CStack_64,&CStack_70);
            CStack_100.x = CStack_70.x;
            afStack_108[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_70 + (uint)bVar7 * -8 + 4);
            afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 *(float *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            if (&CStack_64 != (CVector3f *)(afStack_108 + 2)) {
              CStack_64.x = CStack_100.x;
              CStack_64.y = CStack_100.y;
              CStack_64.z = CStack_100.z;
            }
            pCStack_24 = (CVector3f *)(in_stack_00000004->base).orient_matrix.m[0].z;
            fStack_2c = (in_stack_00000004->base).orient_matrix.m[1].z;
            fStack_34 = (in_stack_00000004->base).orient_matrix.m[2].z;
            fStack_20 = (unaff_EBP->orient_matrix).m[0].z;
            fStack_30 = (unaff_EBP->orient_matrix).m[1].z;
            fStack_28 = (unaff_EBP->orient_matrix).m[2].z;
            fVar8 = (float10)fcos((float10)_DAT_005d036f);
            if (fVar8 <= ABS((float10)fStack_34 * (float10)fStack_28 +
                             (float10)(float)pCStack_24 * (float10)fStack_20 +
                             (float10)fStack_2c * (float10)fStack_30)) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        (&in_stack_00000004->base,&(unaff_EBP->location).position,&CStack_ac);
              fStack_a0 = CStack_ac.x;
              afStack_9c[(uint)bVar7 * -2] = *(float *)((int)&CStack_ac + (uint)bVar7 * -8 + 4);
              afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                   *(float *)((int)&CStack_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              if (0.0 < afStack_9c[1]) {
                *(CDemonActor **)(in_stack_00000004[2].flames[1].on_event + 0x20) = unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(in_stack_00000004->model).base,0x2c,1);
                pCVar2 = in_stack_00000004 + 1;
                (pCVar2->base).actor_name[0x14] = '\0';
                (pCVar2->base).actor_name[0x15] = '\0';
                (pCVar2->base).actor_name[0x16] = '\0';
                (pCVar2->base).actor_name[0x17] = '\0';
                CStack_7c.x = 0.0;
                CStack_7c.z = 2.0;
                CStack_7c.y = 0.0;
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                          (unaff_EBP,&CStack_7c,&CStack_dc);
                piVar4 = &in_stack_00000004[2].flames[2].base.runtime_state;
                fStack_58 = CStack_dc.x;
                afStack_54[(uint)bVar7 * -2] = *(float *)((int)&CStack_dc + (uint)bVar7 * -8 + 4);
                afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     *(float *)((int)&CStack_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
                fStack_d0 = fStack_58 - (in_stack_00000004->base).location.position.x;
                afStack_cc[0] = afStack_54[0] - (in_stack_00000004->base).location.position.y;
                afStack_cc[1] = afStack_54[1] - (in_stack_00000004->base).location.position.z;
                afStack_cc[2] = fStack_d0;
                afStack_cc[(uint)bVar7 * -2 + 3] = afStack_cc[(uint)bVar7 * -2];
                afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                     afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                if ((float *)piVar4 != afStack_cc + 2) {
                  *piVar4 = (int)afStack_cc[2];
                  in_stack_00000004[2].flames[2].base.health = iStack_c0;
                  in_stack_00000004[2].flames[2].base.validation_magic = uStack_bc;
                }
                fStack_10c = CStack_64.x - (in_stack_00000004->base).location.position.x;
                afStack_108[0] = CStack_64.y - (in_stack_00000004->base).location.position.y;
                afStack_108[1] = CStack_64.z - (in_stack_00000004->base).location.position.z;
                CStack_118.x = fStack_10c;
                *(float *)((int)&CStack_118 + (uint)bVar7 * -8 + 4) = afStack_108[(uint)bVar7 * -2];
                *(float *)((int)&CStack_118 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                     afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                          (&CStack_118,&CStack_94);
                fStack_b8 = CStack_94.x;
                aiStack_b4[(uint)bVar7 * -2] = *(int *)((int)&CStack_94 + (uint)bVar7 * -8 + 4);
                aiStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     *(int *)((int)&CStack_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
                in_stack_00000004[2].flames[2].base.direction_hint = aiStack_b4[0];
                this_ptr = g_CConsolePtr;
                in_stack_00000004[2].flames[2].base.lifecycle_state = 0x3f800000;
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (this_ptr,"Climbing ladder %s\n");
                return 1;
              }
            }
          }
        }
LAB_0045847b:
        iStack_1c = iStack_1c + 1;
        fStack_20 = (float)((int)fStack_20 + 4);
      }
    }
  }
  return 0;
}
