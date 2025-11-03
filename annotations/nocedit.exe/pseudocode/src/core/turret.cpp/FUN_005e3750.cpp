// Name: core_turret.cpp_FUN_005e3750
// Address: 005e3750
// Address Range: [[005e3750, 005e3c6a]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3750()
// Globals:
//   undefined4 DAT_006567a4
//   undefined4 DAT_006567a8
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CCharacterClassInfo.name_hash
//   undefined4 g_CCrateClassInfo.name_hash
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CFlameCanClassInfo.name_hash
//   undefined4 g_CGlassClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03261388
//   undefined4 DAT_0326138c
//   undefined4 DAT_03261390
//   undefined4 DAT_03261394
//   undefined4 DAT_03261398
//   undefined4 DAT_0326139c
//   undefined4 DAT_032613a0
//   undefined4 DAT_032613ac
//   undefined4 DAT_032613b0
//   undefined4 DAT_032613bc
//   undefined4 DAT_032613c0
//   undefined4 g_CTriggerClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_crate.cpp_FUN_00448a70
//   core_fire.cpp_CFireEffect_FUN_004c76a0
//   core_fire.cpp_CFireEffect_FUN_004c7a60
//   core_flamecan.cpp_FUN_004cb340
//   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_trigger.cpp_FUN_005e0aa0
//   core_trigger.cpp_FUN_005e0ac0
//   core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_turret.cpp_FUN_005e3750(undefined4 param_1) */

undefined4 core_turret_cpp_FUN_005e3750(void)

{
  CVector3f *pCVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000020;
  CGlass *in_stack_00000028;
  CGlass *in_stack_0000002c;
  CBoundingBox3D *out_box;
  double dVar7;
  CBoundingBox3D *out_box_00;
  undefined1 auStack_98 [60];
  float local_5c;
  CVector3f aCStack_58 [3];
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  int iVar8;
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_98,pCVar1);
  aCStack_58[0].z = in_stack_00000004[2].orient.heading;
  aCStack_58[0].x = 0.0;
  aCStack_58[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_28,aCStack_58);
  auStack_98._20_4_ = (float)auStack_98._8_4_ + CStack_28.y;
  auStack_98._24_4_ = (float)auStack_98._12_4_ + CStack_28.z;
  auStack_98._28_4_ = (float)auStack_98._16_4_ + fStack_1c;
  auStack_98._56_4_ = auStack_98._8_4_;
  local_5c = (float)auStack_98._12_4_;
  aCStack_58[0].x = (float)auStack_98._16_4_;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  iVar8 = 0;
  do {
    out_box = (CBoundingBox3D *)0x5e3854;
    fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,aCStack_58,(CVector3f *)(auStack_98 + 0x1c));
    dVar7 = (double)fVar2;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar3 != (CDemonActor *)0x0) &&
       (iVar4 = (*pCVar3->vtable[1].hasCollision)
                          (pCVar3,(SCollisionInfo *)((ulonglong)dVar7 >> 0x20)), 0 < iVar4)) {
      pCVar3 = (CDemonActor *)0x0;
    }
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    out_box_00 = (CBoundingBox3D *)0x5e3919;
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      if (in_stack_00000028 == (CGlass *)0x0) {
        if (pCVar5 != (CDemonActor *)0x0) {
          core_trigger_cpp_FUN_005e0aa0();
          iVar4 = core_trigger_cpp_FUN_005e0ac0();
          pCVar3 = in_stack_00000020;
          if (iVar4 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box_00);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          goto LAB_005e3ae2;
        }
        if (in_stack_00000020 == (CDemonActor *)0x0) {
          if (pCVar6 == (CDemonActor *)0x0) {
            core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
            break;
          }
          core_flamecan_cpp_FUN_004cb340();
        }
        else {
          core_crate_cpp_FUN_00448a70();
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(in_stack_00000028);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (in_stack_0000002c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_98);
      (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box);
      fVar2 = 0.4;
      auStack_98._44_4_ =
           (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x;
      auStack_98._48_4_ =
           (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y;
      auStack_98._52_4_ =
           (g_CDemonSetPtr->collision_result_vec2).z - (g_CDemonSetPtr->collision_result_vec1).z;
      CStack_28.x = (float)_DAT_006567a8 /
                    SQRT((float)auStack_98._52_4_ * (float)auStack_98._52_4_ +
                         (float)auStack_98._44_4_ * (float)auStack_98._44_4_ +
                         (float)auStack_98._48_4_ * (float)auStack_98._48_4_);
      fStack_30 = (float)auStack_98._44_4_ * CStack_28.x;
      fStack_2c = (float)auStack_98._48_4_ * CStack_28.x;
      CStack_28.x = (float)auStack_98._52_4_ * CStack_28.x;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar3,(CVector3f *)(auStack_98 + 0x38),
                          &g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&stack0xffffff60 != pCVar1) {
        auStack_98._0_4_ = pCVar1->z;
      }
      auStack_98._4_4_ = *(undefined4 *)(in_stack_00000004[4].actor_name + 0xc);
      auStack_98._8_4_ = (CDemonActor *)0x3f800000;
      auStack_98._16_4_ = in_stack_00000004;
      auStack_98._12_4_ = 1.41531e-43;
      auStack_98._32_4_ = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,&stack0xffffff50,fVar2);
      if (in_stack_00000004[2].orient.bank == 0.0) break;
      pCVar3 = g_CDemonSetPtr->collision_actor;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  fVar2 = *(float *)(in_stack_00000004[5].create_event + 0x44);
  in_stack_00000004[6].create_event[0x28] = '\x02';
  in_stack_00000004[6].create_event[0x29] = '\0';
  in_stack_00000004[6].create_event[0x2a] = '\0';
  in_stack_00000004[6].create_event[0x2b] = '\0';
  in_stack_00000004[2].orient_matrix.m[1].z = fVar2;
  return 1;
}


// Assembly code:
// 005e3750: PUSH EBX
//   Label: core_turret.cpp_FUN_005e3750
// 005e3751: PUSH ESI
// 005e3752: PUSH EDI
// 005e3753: PUSH EBP
// 005e3754: MOV EBP,ESP
// 005e3756: SUB ESP,0xd4
// 005e375c: AND ESP,0xfffffff8
// 005e375f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e3762: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x5c] (DATA)
// 005e3769: PUSH EAX
// 005e376a: MOV ESI,dword ptr [EBX + 0x154]
// 005e3770: PUSH EBX
// 005e3771: CALL dword ptr [ESI + 0xf4]
// 005e3777: ADD ESP,0x8
// 005e377a: PUSH EAX
// 005e377b: LEA EAX,[ESP + 0x48]
// 005e377f: PUSH EAX
// 005e3780: PUSH EBX
// 005e3781: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005e3786: ADD ESP,0xc
// 005e3789: MOV EAX,dword ptr [EBX + 0x2e8]
// 005e378f: MOV dword ptr [ESP + 0x88],EAX
// 005e3796: LEA EAX,[ESP + 0x80]
// 005e379d: PUSH EAX
// 005e379e: LEA EAX,[ESP + 0xb4]
// 005e37a5: PUSH EAX
// 005e37a6: XOR EDX,EDX
// 005e37a8: PUSH EBX
// 005e37a9: MOV dword ptr [ESP + 0x8c],EDX
// 005e37b0: MOV dword ptr [ESP + 0x90],EDX
// 005e37b7: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005e37bc: ADD ESP,0xc
// 005e37bf: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005e37c5: FLD float ptr [ESP + 0x44]
// 005e37c9: FLD float ptr [ESP + 0x48]
// 005e37cd: FLD float ptr [ESP + 0x4c]
// 005e37d1: MOV EAX,dword ptr [ESP + 0x44]
// 005e37d5: PUSH 0x1
// 005e37d7: FXCH ST2
// 005e37d9: FADD float ptr [ESP + 0xb4]
// 005e37e0: FXCH
// 005e37e2: FADD float ptr [ESP + 0xb8]
// 005e37e9: FXCH ST2
// 005e37eb: FADD float ptr [ESP + 0xbc]
// 005e37f2: MOV dword ptr [ESP + 0x78],EAX
// 005e37f6: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005e37f7: FXCH
// 005e37f9: FSTP float ptr [ESP + 0x58]
// 005e37fd: MOV EAX,dword ptr [ESP + 0x50]
// 005e3801: FXCH
// 005e3803: FSTP float ptr [ESP + 0x5c]
// 005e3807: MOV dword ptr [ESP + 0x80],EAX
// 005e380e: MOV EAX,dword ptr [ESP + 0x54]
// 005e3812: FSTP float ptr [ESP + 0x60]
// 005e3816: MOV dword ptr [ESP + 0x84],EAX
// 005e381d: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 005e3822: ADD ESP,0x8
// 005e3825: PUSH EBX
// 005e3826: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005e382c: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005e382d: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005e3832: ADD ESP,0x8
// 005e3835: XOR EAX,EAX
// 005e3837: MOV dword ptr [ESP + 0xc4],EAX
// 005e383e: LEA EAX,[ESP + 0x50]
//   Label: LAB_005e383e
// 005e3842: PUSH EAX
// 005e3843: LEA EAX,[ESP + 0x78]
// 005e3847: PUSH EAX
// 005e3848: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e384e: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005e384f: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 005e3854: MOV dword ptr [ESP + 0xdc],EAX
// 005e385b: FLD float ptr [ESP + 0xdc]
// 005e3862: ADD ESP,0xc
// 005e3865: FLDZ
// 005e3867: FXCH
// 005e3869: FSTP double ptr [ESP]
// 005e386c: FCOMP double ptr [ESP]
// 005e386f: FNSTSW AX
// 005e3871: SAHF
// 005e3872: JA 0x005e3b03
//   XREF to: 005e3b03 (CONDITIONAL_JUMP)
// 005e3878: FLD1
// 005e387a: FCOMP double ptr [ESP]
// 005e387d: FNSTSW AX
// 005e387f: SAHF
// 005e3880: JC 0x005e3b03
//   XREF to: 005e3b03 (CONDITIONAL_JUMP)
// 005e3886: MOV ECX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 005e388c: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e3891: PUSH ECX
// 005e3892: MOV ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005e3898: PUSH ESI
// 005e3899: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e389e: ADD ESP,0x8
// 005e38a1: MOV EDI,EAX
// 005e38a3: TEST EAX,EAX
// 005e38a5: JZ 0x005e38bd
//   XREF to: 005e38bd (CONDITIONAL_JUMP)
// 005e38a7: PUSH EAX
// 005e38a8: MOV ESI,dword ptr [EAX + 0x154]
// 005e38ae: CALL dword ptr [ESI + 0x120]
// 005e38b4: ADD ESP,0x4
// 005e38b7: TEST EAX,EAX
// 005e38b9: JLE 0x005e38bd
//   XREF to: 005e38bd (CONDITIONAL_JUMP)
// 005e38bb: XOR EDI,EDI
// 005e38bd: MOV EAX,[0x02d83360]
//   Label: LAB_005e38bd
//   XREF to: 02d83360 (READ)
// 005e38c2: PUSH EAX
// 005e38c3: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e38c8: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005e38ce: PUSH EDX
// 005e38cf: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e38d4: MOV dword ptr [ESP + 0xd0],EAX
// 005e38db: ADD ESP,0x8
// 005e38de: MOV ECX,dword ptr [0x03f87490]
//   XREF to: 03f87490 (READ)
// 005e38e4: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e38e9: PUSH ECX
// 005e38ea: MOV ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005e38f0: PUSH ESI
// 005e38f1: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e38f6: ADD ESP,0x8
// 005e38f9: MOV ESI,EAX
// 005e38fb: MOV dword ptr [ESP + 0xbc],EAX
// 005e3902: MOV EAX,[0x0088797c]
//   XREF to: 0088797c (READ)
// 005e3907: PUSH EAX
// 005e3908: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e390d: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005e3913: PUSH EDX
// 005e3914: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e3919: MOV dword ptr [ESP + 0xc8],EAX
// 005e3920: ADD ESP,0x8
// 005e3923: MOV ECX,dword ptr [0x02d7a738]
//   XREF to: 02d7a738 (READ)
// 005e3929: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e392e: PUSH ECX
// 005e392f: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005e3935: PUSH EDX
// 005e3936: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e393b: ADD ESP,0x8
// 005e393e: TEST EDI,EDI
// 005e3940: JZ 0x005e3b75
//   XREF to: 005e3b75 (CONDITIONAL_JUMP)
// 005e3946: LEA EAX,[ESP + 0x8]
// 005e394a: PUSH EAX
// 005e394b: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005e3950: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005e3955: ADD ESP,0x4
// 005e3958: MOV EAX,dword ptr [EAX + 0x14d148]
//   XREF to: 032613c0 (READ)
// 005e395e: MOV dword ptr [ESP + 0x8],EAX
// 005e3962: PUSH EBX
// 005e3963: MOV EAX,dword ptr [EBX + 0x154]
// 005e3969: CALL dword ptr [EAX + 0x100]
// 005e396f: MOV dword ptr [ESP + 0xd4],EAX
// 005e3976: MOV ESI,0x3ecccccd
// 005e397b: FLD float ptr [ESP + 0xd4]
// 005e3982: ADD ESP,0x4
// 005e3985: MOV dword ptr [ESP + 0x10],ESI
// 005e3989: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005e398f: LEA EAX,[ESI + 0x14d11c]
//   XREF to: 03261394 (DATA)
// 005e3995: FSTP float ptr [ESP + 0xc]
// 005e3999: FLD float ptr [EAX]
//   XREF to: 03261394 (READ)
// 005e399b: FSUB float ptr [ESI + 0x14d110]
//   XREF to: 03261388 (READ)
// 005e39a1: FSTP float ptr [ESP + 0x5c]
// 005e39a5: FLD float ptr [EAX + 0x4]
//   XREF to: 03261398 (READ)
// 005e39a8: FSUB float ptr [ESI + 0x14d114]
//   XREF to: 0326138c (READ)
// 005e39ae: FST float ptr [ESP + 0x60]
// 005e39b2: FMUL float ptr [ESP + 0x60]
// 005e39b6: FLD float ptr [ESP + 0x5c]
// 005e39ba: FMUL ST0
// 005e39bc: FLD float ptr [EAX + 0x8]
//   XREF to: 0326139c (READ)
// 005e39bf: FSUB float ptr [ESI + 0x14d118]
//   XREF to: 03261390 (READ)
// 005e39c5: FXCH
// 005e39c7: FADDP ST2,ST0
// 005e39c9: FST float ptr [ESP + 0x64]
// 005e39cd: FMUL float ptr [ESP + 0x64]
// 005e39d1: FADDP
// 005e39d3: FSQRT
// 005e39d5: FDIVR double ptr [0x006567a8]
//   XREF to: 006567a8 (READ)
// 005e39db: FLD float ptr [ESP + 0x5c]
// 005e39df: FXCH
// 005e39e1: FSTP float ptr [ESP + 0xcc]
// 005e39e8: FMUL float ptr [ESP + 0xcc]
// 005e39ef: FLD float ptr [ESP + 0x60]
// 005e39f3: FMUL float ptr [ESP + 0xcc]
// 005e39fa: FLD float ptr [ESP + 0x64]
// 005e39fe: FMUL float ptr [ESP + 0xcc]
// 005e3a05: LEA ESI,[ESP + 0x14]
// 005e3a09: LEA EAX,[ESP + 0x98]
// 005e3a10: FXCH ST2
// 005e3a12: FSTP float ptr [ESP + 0x98]
// 005e3a19: FSTP float ptr [ESP + 0x9c]
// 005e3a20: FSTP float ptr [ESP + 0xa0]
// 005e3a27: CMP ESI,EAX
// 005e3a29: JZ 0x005e3a4c
//   XREF to: 005e3a4c (CONDITIONAL_JUMP)
// 005e3a2b: MOV EAX,dword ptr [ESP + 0x98]
// 005e3a32: MOV dword ptr [ESP + 0x14],EAX
// 005e3a36: MOV EAX,dword ptr [ESP + 0x9c]
// 005e3a3d: MOV dword ptr [ESP + 0x18],EAX
// 005e3a41: MOV EAX,dword ptr [ESP + 0xa0]
// 005e3a48: MOV dword ptr [ESP + 0x1c],EAX
// 005e3a4c: MOV EAX,[0x006810c8]
//   Label: LAB_005e3a4c
//   XREF to: 006810c8 (READ)
// 005e3a51: ADD EAX,0x14d138
// 005e3a56: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 005e3a57: LEA EAX,[ESP + 0x6c]
// 005e3a5b: PUSH EAX
// 005e3a5c: PUSH EDI
// 005e3a5d: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005e3a62: MOV ESI,EAX
// 005e3a64: LEA EAX,[ESP + 0x30]
// 005e3a68: ADD ESP,0xc
// 005e3a6b: CMP EAX,ESI
// 005e3a6d: JZ 0x005e3a83
//   XREF to: 005e3a83 (CONDITIONAL_JUMP)
// 005e3a6f: MOV EAX,dword ptr [ESI]
// 005e3a71: MOV dword ptr [ESP + 0x24],EAX
// 005e3a75: MOV EAX,dword ptr [ESI + 0x4]
// 005e3a78: MOV dword ptr [ESP + 0x28],EAX
// 005e3a7c: MOV EAX,dword ptr [ESI + 0x8]
// 005e3a7f: MOV dword ptr [ESP + 0x2c],EAX
// 005e3a83: MOV EAX,dword ptr [EBX + 0x56c]
//   Label: LAB_005e3a83
// 005e3a89: MOV EDX,0x3f800000
// 005e3a8e: MOV dword ptr [ESP + 0x30],EAX
// 005e3a92: MOV dword ptr [ESP + 0x34],EDX
// 005e3a96: MOV EAX,0x65
// 005e3a9b: MOV dword ptr [ESP + 0x3c],EBX
// 005e3a9f: MOV dword ptr [ESP + 0x38],EAX
// 005e3aa3: PUSH EBX
// 005e3aa4: MOV EAX,dword ptr [EBX + 0x154]
// 005e3aaa: CALL dword ptr [EAX + 0x8c]
// 005e3ab0: ADD ESP,0x4
// 005e3ab3: MOV dword ptr [ESP + 0x40],EAX
// 005e3ab7: LEA EAX,[ESP + 0x8]
// 005e3abb: PUSH EAX
// 005e3abc: MOV ESI,dword ptr [EDI + 0x154]
// 005e3ac2: PUSH EDI
// 005e3ac3: CALL dword ptr [ESI + 0x11c]
// 005e3ac9: MOV ECX,dword ptr [EBX + 0x2e4]
// 005e3acf: ADD ESP,0x8
// 005e3ad2: TEST ECX,ECX
// 005e3ad4: JZ 0x005e3b03
//   XREF to: 005e3b03 (CONDITIONAL_JUMP)
// 005e3ad6: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e3adb: MOV ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005e3ae1: PUSH ESI
// 005e3ae2: PUSH EAX
//   Label: LAB_005e3ae2
//   XREF to: 03114278 (DATA)
// 005e3ae3: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005e3ae8: ADD ESP,0x8
//   Label: LAB_005e3ae8
// 005e3aeb: MOV EDI,dword ptr [ESP + 0xc4]
//   Label: LAB_005e3aeb
// 005e3af2: INC EDI
// 005e3af3: MOV dword ptr [ESP + 0xc4],EDI
// 005e3afa: CMP EDI,0x4
// 005e3afd: JL 0x005e383e
//   XREF to: 005e383e (CONDITIONAL_JUMP)
// 005e3b03: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_005e3b03
// 005e3b07: MOV dword ptr [ESP + 0xa4],EAX
// 005e3b0e: MOV EAX,dword ptr [ESP + 0x48]
// 005e3b12: MOV dword ptr [ESP + 0xa8],EAX
// 005e3b19: MOV EAX,dword ptr [ESP + 0x4c]
// 005e3b1d: MOV dword ptr [ESP + 0xac],EAX
// 005e3b24: LEA EAX,[EBX + 0x3c]
// 005e3b27: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 005e3b2d: PUSH EAX
// 005e3b2e: LEA EAX,[ESP + 0xa8]
// 005e3b35: FLD float ptr [ESP + 0xac]
// 005e3b3c: PUSH EAX
// 005e3b3d: FADD float ptr [0x006567a4]
//   XREF to: 006567a4 (READ)
// 005e3b43: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 005e3b44: FSTP float ptr [ESP + 0xb4]
// 005e3b4b: CALL core_fire.cpp_CFireEffect_FUN_004c7a60
//   XREF to: 004c7a60 (UNCONDITIONAL_CALL)
// 005e3b50: FLD float ptr [EBX + 0x774]
// 005e3b56: MOV EAX,0x1
// 005e3b5b: MOV dword ptr [EBX + 0x8b0],0x2
// 005e3b65: ADD ESP,0xc
// 005e3b68: FSTP float ptr [EBX + 0x300]
// 005e3b6e: MOV ESP,EBP
// 005e3b70: POP EBP
// 005e3b71: POP EDI
// 005e3b72: POP ESI
// 005e3b73: POP EBX
// 005e3b74: RET
// 005e3b75: MOV ECX,dword ptr [ESP + 0xc8]
//   Label: LAB_005e3b75
// 005e3b7c: TEST ECX,ECX
// 005e3b7e: JNZ 0x005e3bde
//   XREF to: 005e3bde (CONDITIONAL_JUMP)
// 005e3b80: TEST ESI,ESI
// 005e3b82: JZ 0x005e3c0c
//   XREF to: 005e3c0c (CONDITIONAL_JUMP)
// 005e3b88: PUSH ESI
// 005e3b89: CALL core_trigger.cpp_FUN_005e0aa0
//   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)
// 005e3b8e: ADD ESP,0x4
// 005e3b91: PUSH EBX
// 005e3b92: PUSH ESI
// 005e3b93: CALL core_trigger.cpp_FUN_005e0ac0
//   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
// 005e3b98: ADD ESP,0x8
// 005e3b9b: TEST EAX,EAX
// 005e3b9d: JZ 0x005e3bcc
//   XREF to: 005e3bcc (CONDITIONAL_JUMP)
// 005e3b9f: PUSH EBX
// 005e3ba0: MOV EAX,dword ptr [EBX + 0x154]
// 005e3ba6: CALL dword ptr [EAX + 0x100]
// 005e3bac: MOV dword ptr [ESP + 0xd4],EAX
// 005e3bb3: FLD float ptr [ESP + 0xd4]
// 005e3bba: ADD ESP,0x4
// 005e3bbd: SUB ESP,0x4
// 005e3bc0: FSTP float ptr [ESP]
// 005e3bc3: PUSH ESI
// 005e3bc4: CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
// 005e3bc9: ADD ESP,0x8
// 005e3bcc: MOV EDI,dword ptr [ESP + 0xbc]
//   Label: LAB_005e3bcc
// 005e3bd3: PUSH EDI
// 005e3bd4: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e3bd9: JMP 0x005e3ae2
//   XREF to: 005e3ae2 (UNCONDITIONAL_JUMP)
// 005e3bde: PUSH ECX
//   Label: LAB_005e3bde
// 005e3bdf: CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
// 005e3be4: ADD ESP,0x4
// 005e3be7: TEST EAX,EAX
// 005e3be9: JZ 0x005e3b03
//   XREF to: 005e3b03 (CONDITIONAL_JUMP)
// 005e3bef: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005e3bf4: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 005e3bf9: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 005e3bfa: MOV ECX,dword ptr [ESP + 0xcc]
// 005e3c01: PUSH ECX
// 005e3c02: CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 005e3c07: JMP 0x005e3ae8
//   XREF to: 005e3ae8 (UNCONDITIONAL_JUMP)
// 005e3c0c: MOV ESI,dword ptr [ESP + 0xc0]
//   Label: LAB_005e3c0c
// 005e3c13: TEST ESI,ESI
// 005e3c15: JNZ 0x005e3c29
//   XREF to: 005e3c29 (CONDITIONAL_JUMP)
// 005e3c17: TEST EAX,EAX
// 005e3c19: JZ 0x005e3c37
//   XREF to: 005e3c37 (CONDITIONAL_JUMP)
// 005e3c1b: PUSH EAX
// 005e3c1c: CALL core_flamecan.cpp_FUN_004cb340
//   XREF to: 004cb340 (UNCONDITIONAL_CALL)
// 005e3c21: ADD ESP,0x4
// 005e3c24: JMP 0x005e3aeb
//   XREF to: 005e3aeb (UNCONDITIONAL_JUMP)
// 005e3c29: PUSH ESI
//   Label: LAB_005e3c29
// 005e3c2a: CALL core_crate.cpp_FUN_00448a70
//   XREF to: 00448a70 (UNCONDITIONAL_CALL)
// 005e3c2f: ADD ESP,0x4
// 005e3c32: JMP 0x005e3aeb
//   XREF to: 005e3aeb (UNCONDITIONAL_JUMP)
// 005e3c37: MOV EAX,[0x006810c8]
//   Label: LAB_005e3c37
//   XREF to: 006810c8 (READ)
// 005e3c3c: MOV EDI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005e3c42: PUSH EDI
// 005e3c43: MOV EDX,dword ptr [EAX + 0x14d134]
//   XREF to: 032613ac (READ)
// 005e3c49: PUSH EDX
// 005e3c4a: LEA ESI,[EAX + 0x14d128]
//   XREF to: 032613a0 (DATA)
// 005e3c50: PUSH ESI
//   XREF to: 032613a0 (DATA)
// 005e3c51: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 005e3c56: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 005e3c57: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 005e3c5d: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 005e3c5e: CALL core_fire.cpp_CFireEffect_FUN_004c76a0
//   XREF to: 004c76a0 (UNCONDITIONAL_CALL)
// 005e3c63: ADD ESP,0x14
// 005e3c66: JMP 0x005e3b03
//   XREF to: 005e3b03 (UNCONDITIONAL_JUMP)
