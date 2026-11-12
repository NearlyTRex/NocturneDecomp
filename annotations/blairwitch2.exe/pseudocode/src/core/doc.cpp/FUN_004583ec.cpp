// Name: core_doc.cpp_FUN_004583ec
// Address: 004583ec
// Address Range: [[004583ec, 0045892b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_004583ec(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_004583ec(CCharacter *param_1)

{
  CFlame *pCVar1;
  CCharacter *pCVar2;
  CConsole *this_ptr;
  CDemonActor *this_ptr_00;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_1100 [1000];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uintptr_t uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_ac;
  uint uStack_a0;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  float fStack_70;
  float afStack_6c [4];
  float fStack_5c;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CLocation *pCStack_24;
  float fStack_20;
  int iStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  pCVar1 = param_1[2].flames;
  pCVar1[1].on_event[0x20] = '\0';
  pCVar1[1].on_event[0x21] = '\0';
  pCVar1[1].on_event[0x22] = '\0';
  pCVar1[1].on_event[0x23] = '\0';
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
  if ((float)_DAT_005d0347 <= fStack_14) {
    if ((param_1->carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      pCStack_24 = &(param_1->base).location;
      fStack_20 = 0.0;
      iStack_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)fStack_20),
                                 g_CLadderClassInfo.name_hash);
        pCStack_18 = this_ptr_00;
        if ((this_ptr_00 != (CDemonActor *)0x0) &&
           (ABS((param_1->base).location.position.y - (this_ptr_00->location).position.y) <=
            (float)_DAT_005d0357)) {
          core_actor_cpp_FUN_00408de0(this_ptr_00,pCStack_24);
          afStack_6c[0] = fStack_f0;
          afStack_6c[(uint)bVar7 * -2 + 1] =
               *(float *)((int)&stack0xffffff04 + ((uint)bVar7 * -2 + 4) * 4);
          afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
               *(float *)((int)&stack0xffffff04 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 5) * 4);
          if ((ABS(afStack_6c[2]) <= (float)_DAT_005d035f) && (0.0 <= (double)afStack_6c[2])) {
            (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                      (this_ptr_00,SUB84(__BITCAST_UINT64((double)afStack_6c[2]),0));
            puVar5 = (uint *)&stack0xfffffeb8;
            puVar6 = (uint *)&stack0xfffffec8;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            if (fStack_124 < afStack_6c[2]) {
              if (fStack_124 + 1.0 < afStack_6c[2]) goto LAB_0045847b;
              afStack_6c[2] = fStack_124;
            }
            if (afStack_6c[2] < fStack_130) {
              if (afStack_6c[2] < fStack_130 + (float)_DAT_005d0367) goto LAB_0045847b;
              afStack_6c[2] = fStack_130;
            }
            fStack_f4 = fStack_130 + fStack_124;
            fStack_f0 = fStack_12c + fStack_120;
            fStack_ec = fStack_128 + fStack_11c;
            fStack_88 = fStack_130 + fStack_124;
            afStack_98[(uint)bVar7 * -2 + 5] =
                 *(float *)((int)&stack0xffffff04 + ((uint)bVar7 * -2 + 3) * 4);
            afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 6] =
                 *(float *)((int)&stack0xffffff04 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4);
            afStack_54[2] = fStack_88 * _DAT_005d034f;
            afStack_54[3] = fStack_84 * _DAT_005d034f;
            fStack_44 = fStack_80 * _DAT_005d034f;
            fStack_40 = fStack_88 * _DAT_005d034f;
            afStack_54[(uint)bVar7 * -2 + 6] = afStack_54[(uint)bVar7 * -2 + 3];
            afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            fStack_5c = fStack_38;
            core_actor_cpp_FUN_00408d70(unaff_EBP);
            fStack_100 = fStack_70;
            *(float *)((int)&stack0xffffff04 + (uint)bVar7 * -8) = afStack_6c[(uint)bVar7 * -2];
            *(float *)((int)&stack0xffffff04 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
                 afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if (afStack_6c + 2 != &stack0xffffff00) {
              afStack_6c[2] = fStack_100;
              afStack_6c[3] = fStack_fc;
              fStack_5c = fStack_f8;
            }
            pCStack_24 = (CLocation *)(param_1->base).orient_matrix.m[0].z;
            fStack_2c = (param_1->base).orient_matrix.m[1].z;
            fStack_34 = (param_1->base).orient_matrix.m[2].z;
            fStack_20 = *(float *)(unaff_EBP + 0x44);
            fStack_30 = *(float *)(unaff_EBP + 0x50);
            fStack_28 = *(float *)(unaff_EBP + 0x5c);
            fVar8 = (float10)fcos((float10)_DAT_005d036f);
            if (fVar8 <= ABS((float10)fStack_34 * (float10)fStack_28 +
                             (float10)(float)pCStack_24 * (float10)fStack_20 +
                             (float10)fStack_2c * (float10)fStack_30)) {
              core_actor_cpp_FUN_00408de0(param_1);
              uStack_a0 = uStack_ac;
              (&stack0xffffff40)[(uint)bVar7 * -2 + 9] = (&stack0xffffff40)[(uint)bVar7 * -2 + 6];
              afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
                   (&stack0xffffff40)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
              if (0.0 < afStack_98[0]) {
                *(int *)(param_1[2].flames[1].on_event + 0x20) = unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(param_1->model).base,0x2c,1);
                pCVar2 = param_1 + 1;
                (pCVar2->base).actor_name[0x14] = '\0';
                (pCVar2->base).actor_name[0x15] = '\0';
                (pCVar2->base).actor_name[0x16] = '\0';
                (pCVar2->base).actor_name[0x17] = '\0';
                uStack_7c = 0;
                uStack_74 = 0x40000000;
                uStack_78 = 0;
                core_actor_cpp_FUN_00408d70(unaff_EBP);
                piVar4 = &param_1[2].flames[2].base.runtime_state;
                fStack_58 = fStack_dc;
                afStack_54[(uint)bVar7 * -2] = *(float *)(&stack0xffffff28 + (uint)bVar7 * -8);
                afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     *(float *)(&stack0xffffff28 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4);
                fStack_d0 = fStack_58 - (param_1->base).location.position.x;
                fStack_cc = afStack_54[0] - (param_1->base).location.position.y;
                fStack_c8 = afStack_54[1] - (param_1->base).location.position.z;
                fStack_c4 = fStack_d0;
                (&stack0xffffff40)[(uint)bVar7 * 0xfffffffe] =
                     (float)*(uint *)(&stack0xffffff28 + ((uint)bVar7 * -2 + 3) * 4);
                (&stack0xffffff40)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     (float)*(uint *)
                             (&stack0xffffff28 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4);
                if ((float *)piVar4 != &stack0xffffff3c) {
                  *piVar4 = (int)fStack_c4;
                  param_1[2].flames[2].base.health = (int)fStack_c0;
                  param_1[2].flames[2].base.validation_magic = uStack_bc;
                }
                fStack_10c = afStack_6c[2] - (param_1->base).location.position.x;
                fStack_108 = afStack_6c[3] - (param_1->base).location.position.y;
                fStack_104 = fStack_5c - (param_1->base).location.position.z;
                fStack_118 = fStack_10c;
                *(uint *)(&stack0xfffffeec + (uint)bVar7 * -8) =
                     *(uint *)((int)&stack0xfffffef8 + (uint)bVar7 * -8);
                *(uint *)(&stack0xfffffef0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                     *(uint *)
                      ((int)&stack0xfffffefc + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
                uStack_b8 = afStack_98[1];
                (&stack0xffffff40)[(uint)bVar7 * -2 + 3] = afStack_98[(uint)bVar7 * -2 + 2];
                (&stack0xffffff40)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                     afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
                param_1[2].flames[2].base.direction_hint = iStack_b4;
                this_ptr = g_CConsolePtr;
                param_1[2].flames[2].base.lifecycle_state = 0x3f800000;
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
