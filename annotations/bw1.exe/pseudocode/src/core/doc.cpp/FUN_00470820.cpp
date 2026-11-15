// Name: core_doc.cpp_FUN_00470820
// Address: 00470820
// Address Range: [[00470820, 00470d5b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00470820(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_doc_cpp_FUN_00470820(void)

{
  CCharacter *pCVar1;
  CConsole *this_ptr;
  CDemonActor *this_ptr_00;
  int iVar2;
  int *piVar3;
  CDemonActor *unaff_EBP;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  CCharacter *in_stack_00000004;
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
  CVector3f CStack_100;
  float fStack_f4;
  CVector3f CStack_f0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [3];
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  int iStack_b4;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  float fStack_80;
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
  
  bVar6 = 0;
  in_stack_00000004[2].flames[0x1a].flame_size.z = 0.0;
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                        (in_stack_00000004,0);
  if ((float)_DAT_005da134 <= fStack_14) {
    if ((in_stack_00000004->carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      pCStack_24 = &(in_stack_00000004->base).location.position;
      fStack_20 = 0.0;
      iStack_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)fStack_20),
                                 g_CLadderClassInfo.name_hash);
        pCStack_18 = this_ptr_00;
        if ((this_ptr_00 != (CDemonActor *)0x0) &&
           (ABS((in_stack_00000004->base).location.position.y - (this_ptr_00->location).position.y)
            <= (float)_DAT_005da144)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    (this_ptr_00,pCStack_24,&CStack_f0);
          CStack_70.y = CStack_f0.x;
          *(uint *)((int)&CStack_70 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&CStack_f0 + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&CStack_64 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4) =
               *(uint *)((int)&CStack_f0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          if ((ABS(CStack_64.x) <= (float)_DAT_005da14c) && (0.0 <= (double)CStack_64.x)) {
            (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,SUB84(__BITCAST_UINT64((double)CStack_64.x),0))
            ;
            puVar4 = (uint *)&stack0xfffffeb8;
            puVar5 = (uint *)&stack0xfffffec8;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            if (fStack_124 < CStack_64.x) {
              if (fStack_124 + 1.0 < CStack_64.x) goto LAB_004708ab;
              CStack_64.x = fStack_124;
            }
            if (CStack_64.x < fStack_130) {
              if (CStack_64.x < fStack_130 + (float)_DAT_005da154) goto LAB_004708ab;
              CStack_64.x = fStack_130;
            }
            fStack_f4 = fStack_130 + fStack_124;
            CStack_f0.x = fStack_12c + fStack_120;
            CStack_f0.y = fStack_128 + fStack_11c;
            fStack_88 = fStack_130 + fStack_124;
            afStack_9c[(uint)bVar6 * -2 + 6] = *(float *)((int)&CStack_f0 + (uint)bVar6 * -8);
            afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                 *(float *)((int)&CStack_f0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
            afStack_54[2] = fStack_88 * _DAT_005da13c;
            afStack_54[3] = fStack_84 * _DAT_005da13c;
            fStack_44 = fStack_80 * _DAT_005da13c;
            fStack_40 = fStack_88 * _DAT_005da13c;
            afStack_54[(uint)bVar6 * -2 + 6] = afStack_54[(uint)bVar6 * -2 + 3];
            afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                 afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            CStack_64.z = fStack_38;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      (unaff_EBP,&CStack_64,&CStack_70);
            CStack_100.x = CStack_70.x;
            *(uint *)((int)&CStack_100 + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&CStack_70 + (uint)bVar6 * -8 + 4);
            *(uint *)((int)&CStack_100 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4 + 8) =
                 *(uint *)((int)&CStack_70 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            if (&CStack_64 != &CStack_100) {
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
            fVar7 = (float10)fcos((float10)_DAT_005da15c);
            if (fVar7 <= ABS((float10)fStack_34 * (float10)fStack_28 +
                             (float10)(float)pCStack_24 * (float10)fStack_20 +
                             (float10)fStack_2c * (float10)fStack_30)) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                        (&in_stack_00000004->base,&(unaff_EBP->location).position,&CStack_ac);
              fStack_a0 = CStack_ac.x;
              afStack_9c[(uint)bVar6 * -2] = *(float *)((int)&CStack_ac + (uint)bVar6 * -8 + 4);
              afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                   *(float *)((int)&CStack_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
              if (0.0 < afStack_9c[1]) {
                in_stack_00000004[2].flames[0x1a].flame_size.z = (float)unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(in_stack_00000004->model).base,0x2f,1);
                pCVar1 = in_stack_00000004 + 1;
                (pCVar1->base).actor_name[0x14] = '\0';
                (pCVar1->base).actor_name[0x15] = '\0';
                (pCVar1->base).actor_name[0x16] = '\0';
                (pCVar1->base).actor_name[0x17] = '\0';
                CStack_7c.x = 0.0;
                CStack_7c.z = 2.0;
                CStack_7c.y = 0.0;
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                          (unaff_EBP,&CStack_7c,&CStack_dc);
                piVar3 = &in_stack_00000004[2].flames[0x1a].burn_hero;
                fStack_58 = CStack_dc.x;
                afStack_54[(uint)bVar6 * -2] = *(float *)((int)&CStack_dc + (uint)bVar6 * -8 + 4);
                afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                     *(float *)((int)&CStack_dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
                fStack_d0 = fStack_58 - (in_stack_00000004->base).location.position.x;
                afStack_cc[0] = afStack_54[0] - (in_stack_00000004->base).location.position.y;
                afStack_cc[1] = afStack_54[1] - (in_stack_00000004->base).location.position.z;
                afStack_cc[2] = fStack_d0;
                afStack_cc[(uint)bVar6 * -2 + 3] = afStack_cc[(uint)bVar6 * -2];
                afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                     afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
                if ((float *)piVar3 != afStack_cc + 2) {
                  *piVar3 = (int)afStack_cc[2];
                  in_stack_00000004[2].flames[0x1a].burn_enemy = iStack_c0;
                  in_stack_00000004[2].flames[0x1a].is_visible = iStack_bc;
                }
                fStack_10c = CStack_64.x - (in_stack_00000004->base).location.position.x;
                fStack_108 = CStack_64.y - (in_stack_00000004->base).location.position.y;
                fStack_104 = CStack_64.z - (in_stack_00000004->base).location.position.z;
                fStack_118 = fStack_10c;
                *(uint *)(&stack0xfffffeec + (uint)bVar6 * -8) =
                     *(uint *)((int)&stack0xfffffef8 + (uint)bVar6 * -8);
                *(uint *)(&stack0xfffffef0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                     *(uint *)
                      ((int)&stack0xfffffefc + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
                uStack_b8 = afStack_9c[2];
                afStack_cc[(uint)bVar6 * -2 + 6] = afStack_9c[(uint)bVar6 * -2 + 3];
                afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                     afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
                in_stack_00000004[2].flames[0x1a].texture_flip = iStack_b4;
                this_ptr = g_CConsolePtr;
                in_stack_00000004[2].flames[0x1a].do_visibility_check = 0x3f800000;
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
