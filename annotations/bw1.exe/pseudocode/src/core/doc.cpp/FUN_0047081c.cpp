// Name: core_doc.cpp_FUN_0047081c
// Address: 0047081c
// Address Range: [[0047081c, 00470d5b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0047081c(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_0047081c(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CConsole *this_ptr;
  CDemonActor *this_ptr_00;
  int iVar2;
  int *piVar3;
  float unaff_EBP;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
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
  int iStack_bc;
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
  
  bVar6 = 0;
  param_1[2].flames[0x1a].flame_size.z = 0.0;
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,0);
  if ((float)_DAT_005da134 <= fStack_14) {
    if ((param_1->carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      pCStack_24 = &(param_1->base).location;
      fStack_20 = 0.0;
      iStack_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)fStack_20),
                                 g_CLadderClassInfo.name_hash);
        pCStack_18 = this_ptr_00;
        if ((this_ptr_00 != (CDemonActor *)0x0) &&
           (ABS((param_1->base).location.position.y - (this_ptr_00->location).position.y) <=
            (float)_DAT_005da144)) {
          core_actor_cpp_FUN_00408bb0(this_ptr_00,pCStack_24);
          afStack_6c[0] = fStack_f0;
          afStack_6c[(uint)bVar6 * -2 + 1] =
               *(float *)((int)&stack0xffffff04 + ((uint)bVar6 * -2 + 4) * 4);
          afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2] =
               *(float *)((int)&stack0xffffff04 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 5) * 4);
          if ((ABS(afStack_6c[2]) <= (float)_DAT_005da14c) && (0.0 <= (double)afStack_6c[2])) {
            (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                      (this_ptr_00,SUB84(__BITCAST_UINT64((double)afStack_6c[2]),0));
            puVar4 = (uint *)&stack0xfffffeb8;
            puVar5 = (uint *)&stack0xfffffec8;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            if (fStack_124 < afStack_6c[2]) {
              if (fStack_124 + 1.0 < afStack_6c[2]) goto LAB_004708ab;
              afStack_6c[2] = fStack_124;
            }
            if (afStack_6c[2] < fStack_130) {
              if (afStack_6c[2] < fStack_130 + (float)_DAT_005da154) goto LAB_004708ab;
              afStack_6c[2] = fStack_130;
            }
            fStack_f4 = fStack_130 + fStack_124;
            fStack_f0 = fStack_12c + fStack_120;
            fStack_ec = fStack_128 + fStack_11c;
            fStack_88 = fStack_130 + fStack_124;
            afStack_98[(uint)bVar6 * -2 + 5] =
                 *(float *)((int)&stack0xffffff04 + ((uint)bVar6 * -2 + 3) * 4);
            afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 6] =
                 *(float *)((int)&stack0xffffff04 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
            afStack_54[2] = fStack_88 * _DAT_005da13c;
            afStack_54[3] = fStack_84 * _DAT_005da13c;
            fStack_44 = fStack_80 * _DAT_005da13c;
            fStack_40 = fStack_88 * _DAT_005da13c;
            afStack_54[(uint)bVar6 * -2 + 6] = afStack_54[(uint)bVar6 * -2 + 3];
            afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                 afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            fStack_5c = fStack_38;
            core_actor_cpp_FUN_00408b40(unaff_EBP);
            fStack_100 = fStack_70;
            *(float *)((int)&stack0xffffff04 + (uint)bVar6 * -8) = afStack_6c[(uint)bVar6 * -2];
            *(float *)((int)&stack0xffffff04 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
                 afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            if (afStack_6c + 2 != &stack0xffffff00) {
              afStack_6c[2] = fStack_100;
              afStack_6c[3] = fStack_fc;
              fStack_5c = fStack_f8;
            }
            pCStack_24 = (CLocation *)(param_1->base).orient_matrix.m[0].z;
            fStack_2c = (param_1->base).orient_matrix.m[1].z;
            fStack_34 = (param_1->base).orient_matrix.m[2].z;
            fStack_20 = *(float *)((int)unaff_EBP + 0x44);
            fStack_30 = *(float *)((int)unaff_EBP + 0x50);
            fStack_28 = *(float *)((int)unaff_EBP + 0x5c);
            fVar7 = (float10)fcos((float10)_DAT_005da15c);
            if (fVar7 <= ABS((float10)fStack_34 * (float10)fStack_28 +
                             (float10)(float)pCStack_24 * (float10)fStack_20 +
                             (float10)fStack_2c * (float10)fStack_30)) {
              core_actor_cpp_FUN_00408bb0(param_1);
              uStack_a0 = uStack_ac;
              (&stack0xffffff40)[(uint)bVar6 * -2 + 9] = (&stack0xffffff40)[(uint)bVar6 * -2 + 6];
              afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
                   (&stack0xffffff40)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
              if (0.0 < afStack_98[0]) {
                param_1[2].flames[0x1a].flame_size.z = unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(param_1->model).base,0x2f,1);
                pCVar1 = param_1 + 1;
                (pCVar1->base).actor_name[0x14] = '\0';
                (pCVar1->base).actor_name[0x15] = '\0';
                (pCVar1->base).actor_name[0x16] = '\0';
                (pCVar1->base).actor_name[0x17] = '\0';
                uStack_7c = 0;
                uStack_74 = 0x40000000;
                uStack_78 = 0;
                core_actor_cpp_FUN_00408b40(unaff_EBP);
                piVar3 = &param_1[2].flames[0x1a].burn_hero;
                fStack_58 = fStack_dc;
                afStack_54[(uint)bVar6 * -2] = *(float *)(&stack0xffffff28 + (uint)bVar6 * -8);
                afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                     *(float *)(&stack0xffffff28 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
                fStack_d0 = fStack_58 - (param_1->base).location.position.x;
                fStack_cc = afStack_54[0] - (param_1->base).location.position.y;
                fStack_c8 = afStack_54[1] - (param_1->base).location.position.z;
                fStack_c4 = fStack_d0;
                (&stack0xffffff40)[(uint)bVar6 * 0xfffffffe] =
                     (float)*(uint *)(&stack0xffffff28 + ((uint)bVar6 * -2 + 3) * 4);
                (&stack0xffffff40)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                     (float)*(uint *)
                             (&stack0xffffff28 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
                if ((float *)piVar3 != &stack0xffffff3c) {
                  *piVar3 = (int)fStack_c4;
                  param_1[2].flames[0x1a].burn_enemy = (int)fStack_c0;
                  param_1[2].flames[0x1a].is_visible = iStack_bc;
                }
                fStack_10c = afStack_6c[2] - (param_1->base).location.position.x;
                fStack_108 = afStack_6c[3] - (param_1->base).location.position.y;
                fStack_104 = fStack_5c - (param_1->base).location.position.z;
                fStack_118 = fStack_10c;
                *(uint *)(&stack0xfffffeec + (uint)bVar6 * -8) =
                     *(uint *)((int)&stack0xfffffef8 + (uint)bVar6 * -8);
                *(uint *)(&stack0xfffffef0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                     *(uint *)
                      ((int)&stack0xfffffefc + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
                uStack_b8 = afStack_98[1];
                (&stack0xffffff40)[(uint)bVar6 * -2 + 3] = afStack_98[(uint)bVar6 * -2 + 2];
                (&stack0xffffff40)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                     afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
                param_1[2].flames[0x1a].texture_flip = iStack_b4;
                this_ptr = g_CConsolePtr;
                param_1[2].flames[0x1a].do_visibility_check = 0x3f800000;
                engine_console_cpp_CConsole_printf_FUN_00445430
                          (this_ptr,"Climbing ladder %s\n");
                return 1;
              }
            }
          }
        }
LAB_004708ab:
        iStack_1c = iStack_1c + 1;
        fStack_20 = (float)((int)fStack_20 + 4);
      }
    }
  }
  return 0;
}
