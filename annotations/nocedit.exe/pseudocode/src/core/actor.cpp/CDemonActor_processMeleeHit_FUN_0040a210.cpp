// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor * this_ptr, int hit_type)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613a40
//   TerminatedCString s_CHero_00613a52
//   TerminatedCString s_s_causing_5_2f_damage_to_00613a58
//   TerminatedCString s_CHero_00613a77
//   TerminatedCString s_s_causing_5_2f_damage_to_00613a7d
//   double DOUBLE_00613aa0 = 0.5
//   double DOUBLE_00613aa8 = 10
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CCharacterClassInfo.name_hash
//   CConsole g_ConsolePtr
//   undefined4 g_CCrateClassInfo.name_hash
//   undefined4 g_CFlameCanClassInfo.name_hash
//   undefined4 g_CGlassClassInfo.name_hash
//   CGore g_CGoreInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03261388
//   undefined4 DAT_0326138c
//   undefined4 DAT_03261390
//   undefined4 DAT_03261394
//   undefined4 DAT_03261398
//   undefined4 DAT_0326139c
//   undefined4 DAT_032613b0
//   undefined4 DAT_032613bc
//   undefined4 DAT_032613c0
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
//   undefined4 g_CTriggerClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_crate.cpp_FUN_00448a70
//   core_flamecan.cpp_FUN_004cb340
//   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   core_gore.cpp_FUN_004edbb0
//   core_setcolid.cpp_CDemonSet_FUN_00574170
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_trigger.cpp_FUN_005e0ac0
//   core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   crt_math.c_round_FUN_005fe6b0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CDemonActor *pCVar7;
  int iVar8;
  CDemonActor *pCVar9;
  CGlass *pCVar10;
  int extraout_EAX;
  float fVar11;
  CDemonActor *pCVar12;
  int extraout_EAX_00;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar13;
  float10 fVar14;
  int iStack0000000c;
  CDemonActor *in_stack_00000010;
  CDemonActor *in_stack_00000014;
  CDemonActor *in_stack_00000018;
  int in_stack_00000030;
  CDemonActor *in_stack_00000048;
  CDemonActor *in_stack_0000004c;
  CDemonActor *in_stack_00000050;
  CGlass *in_stack_00000054;
  int in_stack_0000006c;
  float in_stack_00000078;
  CDemonActor *in_stack_00000084;
  double dVar15;
  CDemonActor *in_stack_fffffdac;
  float in_stack_fffffdb0;
  float in_stack_fffffe08;
  CDemonActor *pCStack_1c4;
  undefined1 auStack_19c [44];
  undefined1 auStack_170 [8];
  CDemonActor *pCStack_168;
  CDemonActor *pCStack_164;
  CDemonActor *pCStack_160;
  undefined1 auStack_15c [8];
  undefined1 auStack_154 [56];
  CDemonActor *pCStack_11c;
  undefined1 auStack_118 [36];
  undefined1 auStack_f4 [12];
  CBoundingBox3D CStack_e8;
  float local_d0;
  int iStack_cc;
  undefined1 auStack_c4 [12];
  CBoundingBox3D CStack_b8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [8];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  char acStack_5c [20];
  undefined1 auStack_48 [8];
  float fStack_40;
  CVector3f CStack_38;
  int iStack_28;
  CVector3f CStack_20;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  fStack_40 = 0.0;
  if (hit_type == 1) {
    fStack_40 = (float)hit_type;
  }
  local_d0 = 0.0;
  iStack_cc = 0;
  pCVar3 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)(auStack_118 + 0xc));
  CStack_b8.min.y = (pCVar3->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)&CStack_b8.min.z,(CVector3f *)(auStack_c4 + 8));
  if (iStack_28 == 1) {
    auStack_c4._8_4_ = (CDemonActor *)0xc0400000;
    auStack_c4._0_4_ = 0.0;
    auStack_c4._4_4_ = (CDemonActor *)0x0;
    pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,&CStack_88,(CVector3f *)auStack_c4);
    CStack_7c.y = CStack_b8.max.y + pCVar4->x;
    CStack_7c.z = CStack_b8.max.z + pCVar4->y;
    fStack_70 = fStack_a0 + pCVar4->z;
    if (&fStack_9c != &CStack_7c.y) {
      fStack_9c = CStack_7c.y;
      fStack_98 = CStack_7c.z;
      fStack_94 = fStack_70;
    }
  }
  auStack_90._0_4_ = (CDemonActor *)0x0;
  auStack_90._4_4_ = (CDemonActor *)0x0;
  CStack_88.x = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (this_ptr,(CVector3f *)auStack_48,(CVector3f *)auStack_90);
  pCVar5 = (*this_ptr->vtable->getCarrier)(this_ptr);
  if (iStack_14 == 0) {
    iVar13 = 0;
    for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr; iVar6 = iVar6 + 1) {
      pCVar9 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar13);
      if ((this_ptr != pCVar9) && (pCVar9 != pCVar5)) {
        pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar9,g_CCharacterClassInfo.name_hash)
        ;
        if (pCVar7 == (CDemonActor *)0x0) {
          pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (in_stack_00000010,g_CTriggerClassInfo.name_hash);
          if (pCVar9 == (CDemonActor *)0x0) {
            pCVar10 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (in_stack_00000014,g_CGlassClassInfo.name_hash);
            if (pCVar10 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar10,(CVector3f *)(auStack_48 + 4),
                         (CVector3f *)(auStack_90 + 4));
              pCVar3 = (*((pCVar10->base).vtable)->getBoundingBox)
                                 ((CDemonActor *)pCVar10,&CStack_b8);
              iVar8 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar3,(CVector3f *)in_stack_fffffdac,in_stack_fffffdb0);
              if (iVar8 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe04);
                in_stack_fffffdac = this_ptr;
                in_stack_fffffdb0 = (float)hit_type;
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffe08,(CDemonActor *)pCVar10)
                ;
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffe2c,(CDemonActor *)pCVar10)
                ;
                core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar10);
                if (extraout_EAX != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0(pCVar10,&CStack_20);
                }
              }
            }
          }
          else {
            iVar8 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar8 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (pCVar9,&CStack_38,(CVector3f *)(auStack_90 + 4));
              pCVar3 = (*pCVar9->vtable->getBoundingBox)(pCVar9,&CStack_e8);
              iVar8 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar3,(CVector3f *)in_stack_fffffdac,in_stack_fffffdb0);
              if (iVar8 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffdc8);
                in_stack_fffffdac = this_ptr;
                in_stack_fffffdb0 = (float)hit_type;
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffdcc,pCVar9);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffdf8,pCVar9);
              }
            }
          }
        }
        else if (((pCVar9 == (CDemonActor *)0x0) ||
                 (iVar8 = (*pCVar7->vtable[1].renderOpaque)(pCVar7), iVar8 == 0)) ||
                (iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000018,"CHero"),
                iVar8 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_15c);
          (*this_ptr->vtable->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_15c + 4),pCVar7);
          (*pCVar7->vtable[1].playAmbientSound)(pCVar7,acStack_5c);
          if (0.0 < (float)pCStack_11c) {
            fVar14 = (float10)1 + (float10)(float)pCStack_11c * (float10)DOUBLE_00613aa0;
            crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,pCVar7[0x1c].was_created));
            in_stack_0000006c = (int)ROUND(fVar14);
            core_gore_cpp_FUN_004edbb0();
            (*this_ptr->vtable->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)auStack_118,pCVar7);
          }
        }
      }
      iVar13 = iVar13 + 4;
    }
  }
  if (iStack_14 == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
    if (in_stack_00000014 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000014);
    }
    iStack0000000c = 0;
    while( true ) {
      fVar11 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                         (g_CDemonSetPtr,&CStack_7c,&CStack_88);
      dVar15 = (double)fVar11;
      if ((dVar15 < 0.0) || (1.0 < dVar15)) break;
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar5 != (CDemonActor *)0x0) &&
         (iVar13 = (*pCVar5->vtable[1].hasCollision)
                             (pCVar5,(SCollisionInfo *)((ulonglong)dVar15 >> 0x20)), 0 < iVar13)) {
        pCVar5 = (CDemonActor *)0x0;
      }
      core_actor_cpp_castToClassHash_FUN_0040c790
                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      core_actor_cpp_castToClassHash_FUN_0040c790
                (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      pCVar9 = in_stack_0000004c;
      if (pCVar5 == (CDemonActor *)0x0) {
        if (in_stack_00000050 == (CDemonActor *)0x0) {
          if (in_stack_0000004c == (CDemonActor *)0x0) {
            if (in_stack_00000030 == 0) {
              if (pCVar12 == (CDemonActor *)0x0) {
                return 0;
              }
              core_flamecan_cpp_FUN_004cb340();
            }
            else {
              core_crate_cpp_FUN_00448a70();
            }
          }
          else {
            iVar13 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar13 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_f4);
              (*this_ptr->vtable->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_f4 + 4),pCVar9);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
              core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              (*this_ptr->vtable->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_c4,in_stack_00000084);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000084);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_170);
          pCVar10 = in_stack_00000054;
          (*this_ptr->vtable->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_170 + 4),&in_stack_00000054->base);
          (*this_ptr->vtable->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_154 + 0xc),&pCVar10->base);
          core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar10);
          if (extraout_EAX_00 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004eaef0
                    (pCVar10,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCVar7 == (CDemonActor *)0x0) ||
               (iVar13 = (*pCVar5->vtable[1].renderOpaque)(pCVar5), iVar13 == 0)) ||
              (iVar13 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000050,"CHero"),
              iVar13 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_19c);
        auStack_19c._4_4_ = g_CDemonSetPtr->field11_0x14d148;
        (*this_ptr->vtable->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)(auStack_19c + 4),pCVar5);
        fVar11 = (g_CDemonSetPtr->collision_result_vec2).x -
                 (g_CDemonSetPtr->collision_result_vec1).x;
        fVar1 = (g_CDemonSetPtr->collision_result_vec2).y -
                (g_CDemonSetPtr->collision_result_vec1).y;
        fVar2 = (g_CDemonSetPtr->collision_result_vec2).z -
                (g_CDemonSetPtr->collision_result_vec1).z;
        in_stack_00000078 =
             (float)DOUBLE_00613aa8 / SQRT(fVar2 * fVar2 + fVar11 * fVar11 + fVar1 * fVar1);
        in_stack_00000048 = (CDemonActor *)(fVar11 * in_stack_00000078);
        in_stack_0000004c = (CDemonActor *)(fVar1 * in_stack_00000078);
        in_stack_00000050 = (CDemonActor *)(fVar2 * in_stack_00000078);
        if (&pCStack_168 != &stack0x00000048) {
          pCStack_168 = in_stack_00000048;
          pCStack_164 = in_stack_0000004c;
          pCStack_160 = in_stack_00000050;
        }
        pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (pCVar5,(CVector3f *)&stack0x00000054,
                            &g_CDemonSetPtr->collision_impact_position);
        if ((CVector3f *)auStack_154 != pCVar4) {
          auStack_154._0_4_ = pCVar4->x;
          auStack_154._4_4_ = pCVar4->y;
          auStack_154._8_4_ = pCVar4->z;
        }
        (*pCVar5->vtable[1].playAmbientSoundWithVolume)(pCVar5,auStack_170,in_stack_fffffe08);
        (*this_ptr->vtable->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_154,pCVar5);
        pCStack_1c4 = (CDemonActor *)0x40aa52;
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      iStack0000000c = iStack0000000c + 1;
      if (3 < iStack0000000c) {
        return 0;
      }
    }
  }
  return 0;
}


// Assembly code:
// 0040a210: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// 0040a211: PUSH ESI
// 0040a212: PUSH EDI
// 0040a213: PUSH EBP
// 0040a214: MOV EBP,ESP
// 0040a216: SUB ESP,0x28c
// 0040a21c: AND ESP,0xfffffff8
// 0040a21f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040a222: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040a225: PUSH 0x5ea
// 0040a22a: PUSH 0x613a40
//   XREF to: 00613a40 (DATA)
// 0040a22f: PUSH EBX
// 0040a230: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040a235: ADD ESP,0xc
// 0040a238: XOR EDX,EDX
// 0040a23a: MOV dword ptr [ESP + 0x25c],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0040a241: CMP ESI,0x1
// 0040a244: JNZ 0x0040a24d
//   XREF to: 0040a24d (CONDITIONAL_JUMP)
// 0040a246: MOV dword ptr [ESP + 0x25c],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 0040a24d: LEA EAX,[ESP + 0x190]
//   Label: LAB_0040a24d
//   XREF to: Stack[-0x110] (DATA)
// 0040a254: XOR EDI,EDI
// 0040a256: PUSH EAX
// 0040a257: MOV dword ptr [ESP + 0x1d0],EDI
//   XREF to: Stack[-0xd4] (WRITE)
// 0040a25e: MOV dword ptr [ESP + 0x1d4],EDI
//   XREF to: Stack[-0xd0] (WRITE)
// 0040a265: PUSH EBX
// 0040a266: MOV EDX,dword ptr [EBX + 0x154]
// 0040a26c: CALL dword ptr [EDX + 0x14]
// 0040a26f: ADD ESP,0x8
// 0040a272: MOV EAX,dword ptr [EAX + 0x14]
// 0040a275: MOV dword ptr [ESP + 0x1d4],EAX
// 0040a27c: LEA EAX,[ESP + 0x1cc]
// 0040a283: PUSH EAX
// 0040a284: LEA EAX,[ESP + 0x1dc]
// 0040a28b: PUSH EAX
// 0040a28c: PUSH EBX
// 0040a28d: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0040a292: ADD ESP,0xc
// 0040a295: CMP dword ptr [ESP + 0x25c],0x1
// 0040a29d: JNZ 0x0040a347
//   XREF to: 0040a347 (CONDITIONAL_JUMP)
// 0040a2a3: MOV dword ptr [ESP + 0x1c8],0xc0400000
// 0040a2ae: LEA EAX,[ESP + 0x1c0]
// 0040a2b5: PUSH EAX
// 0040a2b6: LEA EAX,[ESP + 0x200]
// 0040a2bd: PUSH EAX
// 0040a2be: PUSH EBX
// 0040a2bf: MOV dword ptr [ESP + 0x1cc],EDI
// 0040a2c6: MOV dword ptr [ESP + 0x1d0],EDI
// 0040a2cd: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0040a2d2: ADD ESP,0xc
// 0040a2d5: LEA EDX,[ESP + 0x208]
// 0040a2dc: FLD float ptr [ESP + 0x1d8]
// 0040a2e3: FADD float ptr [EAX]
// 0040a2e5: FLD float ptr [ESP + 0x1dc]
// 0040a2ec: FXCH
// 0040a2ee: FSTP float ptr [ESP + 0x208]
// 0040a2f5: FADD float ptr [EAX + 0x4]
// 0040a2f8: FLD float ptr [ESP + 0x1e0]
// 0040a2ff: FXCH
// 0040a301: FSTP float ptr [ESP + 0x20c]
// 0040a308: FADD float ptr [EAX + 0x8]
// 0040a30b: LEA EAX,[ESP + 0x1e4]
// 0040a312: FSTP float ptr [ESP + 0x210]
// 0040a319: CMP EAX,EDX
// 0040a31b: JZ 0x0040a347
//   XREF to: 0040a347 (CONDITIONAL_JUMP)
// 0040a31d: MOV EAX,dword ptr [ESP + 0x208]
// 0040a324: MOV dword ptr [ESP + 0x1e4],EAX
// 0040a32b: MOV EAX,dword ptr [ESP + 0x20c]
// 0040a332: MOV dword ptr [ESP + 0x1e8],EAX
// 0040a339: MOV EAX,dword ptr [ESP + 0x210]
// 0040a340: MOV dword ptr [ESP + 0x1ec],EAX
// 0040a347: LEA EAX,[ESP + 0x1f0]
//   Label: LAB_0040a347
// 0040a34e: PUSH EAX
// 0040a34f: LEA EAX,[ESP + 0x23c]
// 0040a356: XOR EDX,EDX
// 0040a358: PUSH EAX
// 0040a359: MOV EDI,0x3f800000
// 0040a35e: MOV dword ptr [ESP + 0x1f8],EDX
// 0040a365: PUSH EBX
// 0040a366: MOV dword ptr [ESP + 0x200],EDX
// 0040a36d: MOV dword ptr [ESP + 0x204],EDI
// 0040a374: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0040a379: ADD ESP,0xc
// 0040a37c: MOV EAX,dword ptr [EBX + 0x154]
// 0040a382: PUSH EBX
// 0040a383: CALL dword ptr [EAX + 0x8c]
// 0040a389: ADD ESP,0x4
// 0040a38c: MOV dword ptr [ESP + 0x278],EAX
// 0040a393: MOV EAX,dword ptr [ESP + 0x25c]
// 0040a39a: TEST EAX,EAX
// 0040a39c: JNZ 0x0040a6d0
//   XREF to: 0040a6d0 (CONDITIONAL_JUMP)
// 0040a3a2: MOV dword ptr [ESP + 0x268],EAX
// 0040a3a9: MOV dword ptr [ESP + 0x270],EAX
// 0040a3b0: MOV EAX,[0x006810c8]
//   Label: LAB_0040a3b0
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a3b5: MOV EDX,dword ptr [ESP + 0x268]
// 0040a3bc: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 0040a3c2: JGE 0x0040a6d0
//   XREF to: 0040a6d0 (CONDITIONAL_JUMP)
// 0040a3c8: ADD EAX,dword ptr [ESP + 0x270]
// 0040a3cf: MOV EAX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 0040a3d5: MOV dword ptr [ESP + 0x27c],EAX
// 0040a3dc: CMP EBX,EAX
// 0040a3de: JNZ 0x0040a402
//   XREF to: 0040a402 (CONDITIONAL_JUMP)
// 0040a3e0: MOV EAX,dword ptr [ESP + 0x268]
//   Label: LAB_0040a3e0
// 0040a3e7: MOV EDI,dword ptr [ESP + 0x270]
// 0040a3ee: INC EAX
// 0040a3ef: ADD EDI,0x4
// 0040a3f2: MOV dword ptr [ESP + 0x268],EAX
// 0040a3f9: MOV dword ptr [ESP + 0x270],EDI
// 0040a400: JMP 0x0040a3b0
//   XREF to: 0040a3b0 (UNCONDITIONAL_JUMP)
// 0040a402: CMP EAX,dword ptr [ESP + 0x278]
//   Label: LAB_0040a402
// 0040a409: JZ 0x0040a3e0
//   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
// 0040a40b: MOV EAX,[0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0040a410: PUSH EAX
// 0040a411: MOV EDX,dword ptr [ESP + 0x280]
// 0040a418: PUSH EDX
// 0040a419: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0040a41e: ADD ESP,0x8
// 0040a421: MOV EDI,EAX
// 0040a423: TEST EAX,EAX
// 0040a425: JZ 0x0040a530
//   XREF to: 0040a530 (CONDITIONAL_JUMP)
// 0040a42b: CMP dword ptr [ESP + 0x278],0x0
// 0040a433: JZ 0x0040a466
//   XREF to: 0040a466 (CONDITIONAL_JUMP)
// 0040a435: PUSH EAX
// 0040a436: MOV EDX,dword ptr [EAX + 0x154]
// 0040a43c: CALL dword ptr [EDX + 0xf4]
// 0040a442: ADD ESP,0x4
// 0040a445: TEST EAX,EAX
// 0040a447: JZ 0x0040a466
//   XREF to: 0040a466 (CONDITIONAL_JUMP)
// 0040a449: PUSH 0x613a52
//   XREF to: 00613a52 (DATA)
// 0040a44e: MOV ECX,dword ptr [ESP + 0x27c]
// 0040a455: PUSH ECX
// 0040a456: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0040a45b: ADD ESP,0x8
// 0040a45e: TEST EAX,EAX
// 0040a460: JNZ 0x0040a3e0
//   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
// 0040a466: LEA EAX,[ESP + 0x100]
//   Label: LAB_0040a466
// 0040a46d: PUSH EAX
// 0040a46e: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0040a473: ADD ESP,0x4
// 0040a476: PUSH EDI
// 0040a477: LEA EDX,[ESP + 0x104]
// 0040a47e: PUSH EDX
// 0040a47f: PUSH ESI
// 0040a480: MOV EAX,dword ptr [EBX + 0x154]
// 0040a486: PUSH EBX
// 0040a487: CALL dword ptr [EAX + 0x74]
// 0040a48a: ADD ESP,0x10
// 0040a48d: LEA EAX,[ESP + 0x100]
// 0040a494: PUSH EAX
// 0040a495: LEA EAX,[ESP + 0x1dc]
// 0040a49c: PUSH 0x40000000
// 0040a4a1: PUSH EAX
// 0040a4a2: MOV EDX,dword ptr [EDI + 0x154]
// 0040a4a8: PUSH EDI
// 0040a4a9: CALL dword ptr [EDX + 0x114]
// 0040a4af: ADD ESP,0x10
// 0040a4b2: FLDZ
// 0040a4b4: FLD float ptr [ESP + 0x104]
// 0040a4bb: FSTP double ptr [ESP + 0x8]
// 0040a4bf: FCOMP double ptr [ESP + 0x8]
// 0040a4c3: FNSTSW AX
// 0040a4c5: SAHF
// 0040a4c6: JNC 0x0040a3e0
//   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
// 0040a4cc: FLD double ptr [ESP + 0x8]
// 0040a4d0: FMUL double ptr [0x00613aa0]
//   XREF to: 00613aa0 (READ)
// 0040a4d6: MOV EAX,dword ptr [EDI + 0x2610]
// 0040a4dc: FLD1
// 0040a4de: FADDP
// 0040a4e0: PUSH EAX
// 0040a4e1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0040a4e6: FISTP dword ptr [ESP + 0x28c]
// 0040a4ed: MOV EDX,dword ptr [ESP + 0x28c]
// 0040a4f4: PUSH EDX
// 0040a4f5: LEA EAX,[ESP + 0x240]
// 0040a4fc: PUSH EAX
// 0040a4fd: LEA EAX,[ESP + 0x1e4]
// 0040a504: PUSH EAX
// 0040a505: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0040a50b: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0040a50c: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 0040a511: ADD ESP,0x14
// 0040a514: PUSH EDI
// 0040a515: LEA EAX,[ESP + 0x104]
// 0040a51c: PUSH EAX
// 0040a51d: PUSH ESI
// 0040a51e: MOV EDX,dword ptr [EBX + 0x154]
// 0040a524: PUSH EBX
// 0040a525: CALL dword ptr [EDX + 0x78]
// 0040a528: ADD ESP,0x10
// 0040a52b: JMP 0x0040a3e0
//   XREF to: 0040a3e0 (UNCONDITIONAL_JUMP)
// 0040a530: MOV ECX,dword ptr [0x03f87490]
//   Label: LAB_0040a530
//   XREF to: 03f87490 (READ)
// 0040a536: PUSH ECX
// 0040a537: MOV EDI,dword ptr [ESP + 0x280]
// 0040a53e: PUSH EDI
// 0040a53f: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0040a544: MOV EDI,EAX
// 0040a546: ADD ESP,0x8
// 0040a549: TEST EAX,EAX
// 0040a54b: JZ 0x0040a60f
//   XREF to: 0040a60f (CONDITIONAL_JUMP)
// 0040a551: PUSH EBX
// 0040a552: PUSH EAX
// 0040a553: CALL core_trigger.cpp_FUN_005e0ac0
//   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
// 0040a558: ADD ESP,0x8
// 0040a55b: TEST EAX,EAX
// 0040a55d: JZ 0x0040a3e0
//   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
// 0040a563: LEA EAX,[ESP + 0x1d8]
// 0040a56a: PUSH 0x40000000
// 0040a56f: PUSH EAX
// 0040a570: LEA EAX,[ESP + 0x234]
// 0040a577: PUSH EAX
// 0040a578: PUSH EDI
// 0040a579: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0040a57e: ADD ESP,0xc
// 0040a581: PUSH EAX
// 0040a582: LEA EAX,[ESP + 0x180]
// 0040a589: PUSH EAX
// 0040a58a: MOV EDX,dword ptr [EDI + 0x154]
// 0040a590: PUSH EDI
// 0040a591: CALL dword ptr [EDX + 0x14]
// 0040a594: ADD ESP,0x8
// 0040a597: PUSH EAX
// 0040a598: CALL core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
//   XREF to: 004215f0 (UNCONDITIONAL_CALL)
// 0040a59d: ADD ESP,0xc
// 0040a5a0: TEST EAX,EAX
// 0040a5a2: JZ 0x0040a3e0
//   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
// 0040a5a8: LEA EAX,[ESP + 0x10]
// 0040a5ac: PUSH EAX
// 0040a5ad: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0040a5b2: ADD ESP,0x4
// 0040a5b5: PUSH EDI
// 0040a5b6: LEA EAX,[ESP + 0x14]
// 0040a5ba: PUSH EAX
// 0040a5bb: PUSH ESI
// 0040a5bc: MOV EDX,dword ptr [EBX + 0x154]
// 0040a5c2: PUSH EBX
// 0040a5c3: CALL dword ptr [EDX + 0x74]
// 0040a5c6: ADD ESP,0x10
// 0040a5c9: PUSH EDI
// 0040a5ca: FLD float ptr [ESP + 0x18]
// 0040a5ce: SUB ESP,0x8
// 0040a5d1: FSTP double ptr [ESP]
// 0040a5d4: PUSH EBX
// 0040a5d5: PUSH 0x613a58
//   XREF to: 00613a58 (DATA)
// 0040a5da: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0040a5e0: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 0040a5e1: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0040a5e6: ADD ESP,0x18
// 0040a5e9: PUSH dword ptr [ESP + 0x14]
// 0040a5ed: PUSH EDI
// 0040a5ee: CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
// 0040a5f3: ADD ESP,0x8
// 0040a5f6: PUSH EDI
// 0040a5f7: LEA EAX,[ESP + 0x14]
// 0040a5fb: PUSH EAX
// 0040a5fc: PUSH ESI
// 0040a5fd: MOV EDX,dword ptr [EBX + 0x154]
// 0040a603: PUSH EBX
// 0040a604: CALL dword ptr [EDX + 0x78]
// 0040a607: ADD ESP,0x10
// 0040a60a: JMP 0x0040a3e0
//   XREF to: 0040a3e0 (UNCONDITIONAL_JUMP)
// 0040a60f: MOV EAX,[0x02d83360]
//   Label: LAB_0040a60f
//   XREF to: 02d83360 (READ)
// 0040a614: PUSH EAX
// 0040a615: MOV EDX,dword ptr [ESP + 0x280]
// 0040a61c: PUSH EDX
// 0040a61d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0040a622: MOV EDI,EAX
// 0040a624: ADD ESP,0x8
// 0040a627: TEST EAX,EAX
// 0040a629: JZ 0x0040a3e0
//   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
// 0040a62f: LEA EAX,[ESP + 0x1d8]
// 0040a636: PUSH 0x40000000
// 0040a63b: PUSH EAX
// 0040a63c: LEA EAX,[ESP + 0x228]
// 0040a643: PUSH EAX
// 0040a644: PUSH EDI
// 0040a645: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0040a64a: ADD ESP,0xc
// 0040a64d: PUSH EAX
// 0040a64e: LEA EAX,[ESP + 0x1b0]
// 0040a655: PUSH EAX
// 0040a656: MOV EDX,dword ptr [EDI + 0x154]
// 0040a65c: PUSH EDI
// 0040a65d: CALL dword ptr [EDX + 0x14]
// 0040a660: ADD ESP,0x8
// 0040a663: PUSH EAX
// 0040a664: CALL core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
//   XREF to: 004215f0 (UNCONDITIONAL_CALL)
// 0040a669: ADD ESP,0xc
// 0040a66c: TEST EAX,EAX
// 0040a66e: JZ 0x0040a3e0
//   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
// 0040a674: LEA EAX,[ESP + 0x4c]
// 0040a678: PUSH EAX
// 0040a679: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0040a67e: ADD ESP,0x4
// 0040a681: PUSH EDI
// 0040a682: LEA EDX,[ESP + 0x50]
// 0040a686: PUSH EDX
// 0040a687: PUSH ESI
// 0040a688: MOV EAX,dword ptr [EBX + 0x154]
// 0040a68e: PUSH EBX
// 0040a68f: CALL dword ptr [EAX + 0x74]
// 0040a692: ADD ESP,0x10
// 0040a695: PUSH EDI
// 0040a696: LEA EAX,[ESP + 0x50]
// 0040a69a: PUSH EAX
// 0040a69b: PUSH ESI
// 0040a69c: MOV EDX,dword ptr [EBX + 0x154]
// 0040a6a2: PUSH EBX
// 0040a6a3: CALL dword ptr [EDX + 0x78]
// 0040a6a6: ADD ESP,0x10
// 0040a6a9: PUSH EDI
// 0040a6aa: CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
// 0040a6af: ADD ESP,0x4
// 0040a6b2: TEST EAX,EAX
// 0040a6b4: JZ 0x0040a3e0
//   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
// 0040a6ba: LEA EAX,[ESP + 0x1d8]
// 0040a6c1: PUSH EAX
// 0040a6c2: PUSH EDI
// 0040a6c3: CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 0040a6c8: ADD ESP,0x8
// 0040a6cb: JMP 0x0040a3e0
//   XREF to: 0040a3e0 (UNCONDITIONAL_JUMP)
// 0040a6d0: MOV EDX,dword ptr [ESP + 0x25c]
//   Label: LAB_0040a6d0
// 0040a6d7: CMP EDX,0x1
// 0040a6da: JZ 0x0040a6e5
//   XREF to: 0040a6e5 (CONDITIONAL_JUMP)
// 0040a6dc: XOR EAX,EAX
//   Label: LAB_0040a6dc
// 0040a6de: MOV ESP,EBP
// 0040a6e0: POP EBP
// 0040a6e1: POP EDI
// 0040a6e2: POP ESI
// 0040a6e3: POP EBX
// 0040a6e4: RET
// 0040a6e5: PUSH EDX
//   Label: LAB_0040a6e5
// 0040a6e6: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a6ec: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0040a6ed: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 0040a6f2: ADD ESP,0x8
// 0040a6f5: PUSH EBX
// 0040a6f6: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040a6fc: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0040a6fd: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0040a702: ADD ESP,0x8
// 0040a705: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a70a: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0040a70b: CALL core_setcolid.cpp_CDemonSet_FUN_00574170
//   XREF to: 00574170 (UNCONDITIONAL_CALL)
// 0040a710: ADD ESP,0x4
// 0040a713: MOV EDX,dword ptr [ESP + 0x278]
// 0040a71a: TEST EDX,EDX
// 0040a71c: JNZ 0x0040a897
//   XREF to: 0040a897 (CONDITIONAL_JUMP)
// 0040a722: XOR EAX,EAX
//   Label: LAB_0040a722
// 0040a724: MOV dword ptr [ESP + 0x26c],EAX
// 0040a72b: LEA EAX,[ESP + 0x1d8]
//   Label: LAB_0040a72b
// 0040a732: PUSH EAX
// 0040a733: LEA EAX,[ESP + 0x1e8]
// 0040a73a: PUSH EAX
// 0040a73b: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a741: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0040a742: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 0040a747: MOV dword ptr [ESP + 0x294],EAX
// 0040a74e: FLD float ptr [ESP + 0x294]
// 0040a755: ADD ESP,0xc
// 0040a758: FLDZ
// 0040a75a: FXCH
// 0040a75c: FSTP double ptr [ESP]
// 0040a75f: FCOMP double ptr [ESP]
// 0040a762: FNSTSW AX
// 0040a764: SAHF
// 0040a765: JA 0x0040a6dc
//   XREF to: 0040a6dc (CONDITIONAL_JUMP)
// 0040a76b: FLD1
// 0040a76d: FCOMP double ptr [ESP]
// 0040a770: FNSTSW AX
// 0040a772: SAHF
// 0040a773: JC 0x0040a6dc
//   XREF to: 0040a6dc (CONDITIONAL_JUMP)
// 0040a779: MOV ECX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0040a77f: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a784: PUSH ECX
// 0040a785: MOV EDI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0040a78b: PUSH EDI
// 0040a78c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0040a791: ADD ESP,0x8
// 0040a794: MOV EDI,EAX
// 0040a796: TEST EAX,EAX
// 0040a798: JZ 0x0040a7b0
//   XREF to: 0040a7b0 (CONDITIONAL_JUMP)
// 0040a79a: PUSH EAX
// 0040a79b: MOV EDX,dword ptr [EAX + 0x154]
// 0040a7a1: CALL dword ptr [EDX + 0x120]
// 0040a7a7: ADD ESP,0x4
// 0040a7aa: TEST EAX,EAX
// 0040a7ac: JLE 0x0040a7b0
//   XREF to: 0040a7b0 (CONDITIONAL_JUMP)
// 0040a7ae: XOR EDI,EDI
// 0040a7b0: MOV EAX,[0x02d83360]
//   Label: LAB_0040a7b0
//   XREF to: 02d83360 (READ)
// 0040a7b5: PUSH EAX
// 0040a7b6: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a7bb: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0040a7c1: PUSH EDX
// 0040a7c2: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0040a7c7: MOV dword ptr [ESP + 0x28c],EAX
// 0040a7ce: ADD ESP,0x8
// 0040a7d1: MOV ECX,dword ptr [0x03f87490]
//   XREF to: 03f87490 (READ)
// 0040a7d7: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a7dc: PUSH ECX
// 0040a7dd: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0040a7e3: PUSH EDX
// 0040a7e4: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0040a7e9: MOV dword ptr [ESP + 0x288],EAX
// 0040a7f0: ADD ESP,0x8
// 0040a7f3: MOV ECX,dword ptr [0x0088797c]
//   XREF to: 0088797c (READ)
// 0040a7f9: MOV dword ptr [ESP + 0x260],EAX
// 0040a800: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a805: PUSH ECX
// 0040a806: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0040a80c: PUSH EDX
// 0040a80d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0040a812: MOV dword ptr [ESP + 0x26c],EAX
// 0040a819: ADD ESP,0x8
// 0040a81c: MOV ECX,dword ptr [0x02d7a738]
//   XREF to: 02d7a738 (READ)
// 0040a822: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040a827: PUSH ECX
// 0040a828: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0040a82e: PUSH EDX
// 0040a82f: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0040a834: ADD ESP,0x8
// 0040a837: TEST EDI,EDI
// 0040a839: JZ 0x0040aa5a
//   XREF to: 0040aa5a (CONDITIONAL_JUMP)
// 0040a83f: CMP dword ptr [ESP + 0x278],0x0
// 0040a847: JZ 0x0040a8ac
//   XREF to: 0040a8ac (CONDITIONAL_JUMP)
// 0040a849: PUSH EDI
// 0040a84a: MOV EAX,dword ptr [EDI + 0x154]
// 0040a850: CALL dword ptr [EAX + 0xf4]
// 0040a856: ADD ESP,0x4
// 0040a859: TEST EAX,EAX
// 0040a85b: JZ 0x0040a8ac
//   XREF to: 0040a8ac (CONDITIONAL_JUMP)
// 0040a85d: PUSH 0x613a77
//   XREF to: 00613a77 (DATA)
// 0040a862: MOV EDX,dword ptr [ESP + 0x27c]
// 0040a869: PUSH EDX
// 0040a86a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0040a86f: ADD ESP,0x8
// 0040a872: TEST EAX,EAX
// 0040a874: JZ 0x0040a8ac
//   XREF to: 0040a8ac (CONDITIONAL_JUMP)
// 0040a876: MOV EDI,dword ptr [ESP + 0x26c]
//   Label: LAB_0040a876
// 0040a87d: INC EDI
// 0040a87e: MOV dword ptr [ESP + 0x26c],EDI
// 0040a885: CMP EDI,0x4
// 0040a888: JL 0x0040a72b
//   XREF to: 0040a72b (CONDITIONAL_JUMP)
// 0040a88e: XOR EAX,EAX
// 0040a890: MOV ESP,EBP
// 0040a892: POP EBP
// 0040a893: POP EDI
// 0040a894: POP ESI
// 0040a895: POP EBX
// 0040a896: RET
// 0040a897: PUSH EDX
//   Label: LAB_0040a897
// 0040a898: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040a89e: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0040a89f: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0040a8a4: ADD ESP,0x8
// 0040a8a7: JMP 0x0040a722
//   XREF to: 0040a722 (UNCONDITIONAL_JUMP)
// 0040a8ac: LEA EAX,[ESP + 0x88]
//   Label: LAB_0040a8ac
// 0040a8b3: PUSH EAX
// 0040a8b4: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0040a8b9: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040a8be: ADD ESP,0x4
// 0040a8c1: MOV EAX,dword ptr [EAX + 0x14d148]
//   XREF to: 032613c0 (READ)
// 0040a8c7: PUSH EDI
// 0040a8c8: MOV dword ptr [ESP + 0x8c],EAX
// 0040a8cf: LEA EAX,[ESP + 0x8c]
// 0040a8d6: PUSH EAX
// 0040a8d7: PUSH ESI
// 0040a8d8: MOV EDX,dword ptr [EBX + 0x154]
// 0040a8de: PUSH EBX
// 0040a8df: CALL dword ptr [EDX + 0x74]
// 0040a8e2: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040a8e8: LEA EAX,[EDX + 0x14d11c]
//   XREF to: 03261394 (DATA)
// 0040a8ee: FLD float ptr [EAX]
//   XREF to: 03261394 (READ)
// 0040a8f0: FSUB float ptr [EDX + 0x14d110]
//   XREF to: 03261388 (READ)
// 0040a8f6: ADD ESP,0x10
// 0040a8f9: FSTP float ptr [ESP + 0x214]
// 0040a900: FLD float ptr [EAX + 0x4]
//   XREF to: 03261398 (READ)
// 0040a903: FSUB float ptr [EDX + 0x14d114]
//   XREF to: 0326138c (READ)
// 0040a909: FST float ptr [ESP + 0x218]
// 0040a910: FMUL float ptr [ESP + 0x218]
// 0040a917: FLD float ptr [ESP + 0x214]
// 0040a91e: FMUL ST0
// 0040a920: FLD float ptr [EAX + 0x8]
//   XREF to: 0326139c (READ)
// 0040a923: FSUB float ptr [EDX + 0x14d118]
//   XREF to: 03261390 (READ)
// 0040a929: FXCH
// 0040a92b: FADDP ST2,ST0
// 0040a92d: FST float ptr [ESP + 0x21c]
// 0040a934: FMUL float ptr [ESP + 0x21c]
// 0040a93b: FADDP
// 0040a93d: FSQRT
// 0040a93f: FDIVR double ptr [0x00613aa8]
//   XREF to: 00613aa8 (READ)
// 0040a945: FLD float ptr [ESP + 0x214]
// 0040a94c: FXCH
// 0040a94e: FSTP float ptr [ESP + 0x274]
// 0040a955: FMUL float ptr [ESP + 0x274]
// 0040a95c: FLD float ptr [ESP + 0x218]
// 0040a963: FMUL float ptr [ESP + 0x274]
// 0040a96a: FLD float ptr [ESP + 0x21c]
// 0040a971: FMUL float ptr [ESP + 0x274]
// 0040a978: LEA EDX,[ESP + 0x244]
// 0040a97f: LEA EAX,[ESP + 0x94]
// 0040a986: FXCH ST2
// 0040a988: FSTP float ptr [ESP + 0x244]
// 0040a98f: FSTP float ptr [ESP + 0x248]
// 0040a996: FSTP float ptr [ESP + 0x24c]
// 0040a99d: CMP EAX,EDX
// 0040a99f: JZ 0x0040a9cb
//   XREF to: 0040a9cb (CONDITIONAL_JUMP)
// 0040a9a1: MOV EAX,dword ptr [ESP + 0x244]
// 0040a9a8: MOV dword ptr [ESP + 0x94],EAX
// 0040a9af: MOV EAX,dword ptr [ESP + 0x248]
// 0040a9b6: MOV dword ptr [ESP + 0x98],EAX
// 0040a9bd: MOV EAX,dword ptr [ESP + 0x24c]
// 0040a9c4: MOV dword ptr [ESP + 0x9c],EAX
// 0040a9cb: MOV EAX,[0x006810c8]
//   Label: LAB_0040a9cb
//   XREF to: 006810c8 (READ)
// 0040a9d0: ADD EAX,0x14d138
// 0040a9d5: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 0040a9d6: LEA EAX,[ESP + 0x254]
// 0040a9dd: PUSH EAX
// 0040a9de: PUSH EDI
// 0040a9df: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0040a9e4: MOV EDX,EAX
// 0040a9e6: LEA EAX,[ESP + 0xb0]
// 0040a9ed: ADD ESP,0xc
// 0040a9f0: CMP EAX,EDX
// 0040a9f2: JZ 0x0040aa11
//   XREF to: 0040aa11 (CONDITIONAL_JUMP)
// 0040a9f4: MOV EAX,dword ptr [EDX]
// 0040a9f6: MOV dword ptr [ESP + 0xa4],EAX
// 0040a9fd: MOV EAX,dword ptr [EDX + 0x4]
// 0040aa00: MOV dword ptr [ESP + 0xa8],EAX
// 0040aa07: MOV EAX,dword ptr [EDX + 0x8]
// 0040aa0a: MOV dword ptr [ESP + 0xac],EAX
// 0040aa11: LEA EDX,[ESP + 0x88]
//   Label: LAB_0040aa11
// 0040aa18: PUSH EDX
// 0040aa19: MOV EAX,dword ptr [EDI + 0x154]
// 0040aa1f: PUSH EDI
// 0040aa20: CALL dword ptr [EAX + 0x11c]
// 0040aa26: ADD ESP,0x8
// 0040aa29: PUSH EDI
// 0040aa2a: LEA EDX,[ESP + 0x8c]
// 0040aa31: PUSH EDX
// 0040aa32: PUSH ESI
// 0040aa33: MOV EAX,dword ptr [EBX + 0x154]
// 0040aa39: PUSH EBX
// 0040aa3a: CALL dword ptr [EAX + 0x78]
// 0040aa3d: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040aa42: ADD ESP,0x10
// 0040aa45: MOV ECX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0040aa4b: PUSH ECX
// 0040aa4c: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0040aa4d: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0040aa52: ADD ESP,0x8
// 0040aa55: JMP 0x0040a876
//   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
// 0040aa5a: CMP dword ptr [ESP + 0x284],0x0
//   Label: LAB_0040aa5a
// 0040aa62: JNZ 0x0040aa98
//   XREF to: 0040aa98 (CONDITIONAL_JUMP)
// 0040aa64: MOV EDI,dword ptr [ESP + 0x280]
// 0040aa6b: TEST EDI,EDI
// 0040aa6d: JNZ 0x0040ab07
//   XREF to: 0040ab07 (CONDITIONAL_JUMP)
// 0040aa73: MOV EDX,dword ptr [ESP + 0x264]
// 0040aa7a: TEST EDX,EDX
// 0040aa7c: JNZ 0x0040aba9
//   XREF to: 0040aba9 (CONDITIONAL_JUMP)
// 0040aa82: TEST EAX,EAX
// 0040aa84: JZ 0x0040a6dc
//   XREF to: 0040a6dc (CONDITIONAL_JUMP)
// 0040aa8a: PUSH EAX
// 0040aa8b: CALL core_flamecan.cpp_FUN_004cb340
//   XREF to: 004cb340 (UNCONDITIONAL_CALL)
// 0040aa90: ADD ESP,0x4
// 0040aa93: JMP 0x0040a876
//   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
// 0040aa98: LEA EAX,[ESP + 0xc4]
//   Label: LAB_0040aa98
// 0040aa9f: PUSH EAX
// 0040aaa0: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0040aaa5: ADD ESP,0x4
// 0040aaa8: MOV EDI,dword ptr [ESP + 0x284]
// 0040aaaf: PUSH EDI
// 0040aab0: LEA EAX,[ESP + 0xc8]
// 0040aab7: PUSH EAX
// 0040aab8: PUSH ESI
// 0040aab9: MOV EDX,dword ptr [EBX + 0x154]
// 0040aabf: PUSH EBX
// 0040aac0: CALL dword ptr [EDX + 0x74]
// 0040aac3: ADD ESP,0x10
// 0040aac6: PUSH EDI
// 0040aac7: LEA EDX,[ESP + 0xc8]
// 0040aace: PUSH EDX
// 0040aacf: PUSH ESI
// 0040aad0: MOV EAX,dword ptr [EBX + 0x154]
// 0040aad6: PUSH EBX
// 0040aad7: CALL dword ptr [EAX + 0x78]
// 0040aada: ADD ESP,0x10
// 0040aadd: PUSH EDI
// 0040aade: CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
// 0040aae3: ADD ESP,0x4
// 0040aae6: TEST EAX,EAX
// 0040aae8: JZ 0x0040a6dc
//   XREF to: 0040a6dc (CONDITIONAL_JUMP)
// 0040aaee: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040aaf3: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 0040aaf8: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 0040aaf9: PUSH EDI
// 0040aafa: CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 0040aaff: ADD ESP,0x8
// 0040ab02: JMP 0x0040a876
//   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
// 0040ab07: PUSH EBX
//   Label: LAB_0040ab07
// 0040ab08: PUSH EDI
// 0040ab09: CALL core_trigger.cpp_FUN_005e0ac0
//   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
// 0040ab0e: ADD ESP,0x8
// 0040ab11: TEST EAX,EAX
// 0040ab13: JZ 0x0040ab8d
//   XREF to: 0040ab8d (CONDITIONAL_JUMP)
// 0040ab15: LEA EAX,[ESP + 0x13c]
// 0040ab1c: PUSH EAX
// 0040ab1d: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0040ab22: ADD ESP,0x4
// 0040ab25: PUSH EDI
// 0040ab26: LEA EAX,[ESP + 0x140]
// 0040ab2d: PUSH EAX
// 0040ab2e: PUSH ESI
// 0040ab2f: MOV EDX,dword ptr [EBX + 0x154]
// 0040ab35: PUSH EBX
// 0040ab36: CALL dword ptr [EDX + 0x74]
// 0040ab39: ADD ESP,0x10
// 0040ab3c: PUSH EDI
// 0040ab3d: FLD float ptr [ESP + 0x144]
// 0040ab44: SUB ESP,0x8
// 0040ab47: FSTP double ptr [ESP]
// 0040ab4a: PUSH EBX
// 0040ab4b: PUSH 0x613a7d
//   XREF to: 00613a7d (DATA)
// 0040ab50: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0040ab56: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 0040ab57: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0040ab5c: ADD ESP,0x18
// 0040ab5f: PUSH dword ptr [ESP + 0x140]
// 0040ab66: PUSH EDI
// 0040ab67: CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
// 0040ab6c: ADD ESP,0x8
// 0040ab6f: MOV EAX,dword ptr [ESP + 0x284]
// 0040ab76: PUSH EAX
// 0040ab77: LEA EAX,[ESP + 0x140]
// 0040ab7e: PUSH EAX
// 0040ab7f: PUSH ESI
// 0040ab80: MOV EDX,dword ptr [EBX + 0x154]
// 0040ab86: PUSH EBX
// 0040ab87: CALL dword ptr [EDX + 0x78]
// 0040ab8a: ADD ESP,0x10
// 0040ab8d: MOV EDX,dword ptr [ESP + 0x260]
//   Label: LAB_0040ab8d
// 0040ab94: PUSH EDX
// 0040ab95: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040ab9b: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0040ab9c: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0040aba1: ADD ESP,0x8
// 0040aba4: JMP 0x0040a876
//   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
// 0040aba9: PUSH EDX
//   Label: LAB_0040aba9
// 0040abaa: CALL core_crate.cpp_FUN_00448a70
//   XREF to: 00448a70 (UNCONDITIONAL_CALL)
// 0040abaf: ADD ESP,0x4
// 0040abb2: JMP 0x0040a876
//   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
