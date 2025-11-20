// Name: core_gun.cpp_FUN_004f0350
// Address: 004f0350
// Address Range: [[004f0350, 004f05f2] [004f06df, 004f0b16]]
// Convention: unknown
// Signature: undefined core_gun.cpp_FUN_004f0350()
// Globals:
//   TerminatedCString s_s_45_dry_wav_0062e7a0
//   TerminatedCString s_s_45_wav_0062e7ad
//   double DOUBLE_0062e7c3 = 1.5
//   float FLOAT_0062e7cb = -0.125
//   double DOUBLE_0062e7d3 = 10
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
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
//   CSound g_CSoundInstance
//   undefined4 g_CTriggerClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_crate.cpp_FUN_00448a70
//   core_fire.cpp_CFireEffect_FUN_004c76a0
//   core_fire.cpp_CFireEffect_FUN_004c7a60
//   core_flamecan.cpp_FUN_004cb340
//   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
//   core_trigger.cpp_FUN_005e0aa0
//   core_trigger.cpp_FUN_005e0ac0
//   core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   core_weapon.cpp_FUN_005ee6e0

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_gun.cpp_FUN_004f0350(undefined4 param_1) */

undefined4 core_gun_cpp_FUN_004f0350(void)

{
  CDemonSet *this_ptr;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  CDemonActor *in_stack_00000004;
  CGlass *in_stack_00000038;
  CGlass *in_stack_0000003c;
  CDemonActor *in_stack_00000048;
  CBoundingBox3D *out_box;
  double dVar8;
  CBoundingBox3D *in_stack_ffffff0c;
  undefined1 auStack_bc [16];
  CVector3f CStack_ac;
  undefined1 auStack_a0 [8];
  float fStack_98;
  undefined1 auStack_94 [36];
  float fStack_70;
  CVector3f CStack_6c;
  CVector3f local_60 [2];
  CVector3f CStack_40;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [12];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  this_ptr_00 = in_stack_00000004;
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_bc + 8),pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"45-dry-!.wav",&CStack_ac);
    return 0;
  }
  auStack_94._8_4_ = in_stack_00000004[2].orient.heading;
  auStack_94._0_4_ = 0.0;
  auStack_94._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)auStack_28,(CVector3f *)auStack_94);
  auStack_a0._4_4_ = CStack_ac.y + (float)auStack_28._4_4_;
  fStack_98 = CStack_ac.z + (float)auStack_28._8_4_;
  auStack_94._0_4_ = (float)auStack_a0._0_4_ + fStack_1c;
  fStack_18 = (float)DOUBLE_0062e7c3 / in_stack_00000004[2].orient.heading;
  fStack_30 = (float)auStack_28._4_4_ * fStack_18;
  fStack_2c = (float)auStack_28._8_4_ * fStack_18;
  auStack_28._0_4_ = fStack_1c * fStack_18;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar4 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
  }
  in_stack_00000004 = (CDemonActor *)0x0;
  do {
    out_box = (CBoundingBox3D *)0x4f0513;
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_bc,(CVector3f *)(auStack_94 + 8));
    dVar8 = (double)fVar3;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) break;
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar4 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar4->vtable[1].hasCollision)
                          (pCVar4,(SCollisionInfo *)((ulonglong)dVar8 >> 0x20)), 0 < iVar2)) {
      pCVar4 = (CDemonActor *)0x0;
    }
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      if (in_stack_00000038 == (CGlass *)0x0) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (pCVar5 == (CDemonActor *)0x0) {
            if (pCVar7 == (CDemonActor *)0x0) {
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
          core_trigger_cpp_FUN_005e0aa0();
          iVar2 = core_trigger_cpp_FUN_005e0ac0();
          if (iVar2 != 0) {
            (*this_ptr_00->vtable[1].getBoundingBox)(this_ptr_00,in_stack_ffffff0c);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000048);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(in_stack_00000038);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (in_stack_0000003c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*pCVar4->vtable[1].renderOpaque)(pCVar4);
      this_ptr = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (unaff_EBP == 0) {
          *(int *)(this_ptr_00[4].actor_name + 8) = *(int *)(this_ptr_00[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffecc);
      (*this_ptr_00->vtable[1].getBoundingBox)(this_ptr_00,out_box);
      fVar3 = 0.4;
      auStack_a0._0_4_ =
           (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x;
      auStack_a0._4_4_ =
           (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_98 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      CStack_6c.y = (float)DOUBLE_0062e7d3 /
                    SQRT(fStack_98 * fStack_98 +
                         (float)auStack_a0._0_4_ * (float)auStack_a0._0_4_ +
                         (float)auStack_a0._4_4_ * (float)auStack_a0._4_4_);
      fStack_70 = (float)auStack_a0._0_4_ * CStack_6c.y;
      CStack_6c.x = (float)auStack_a0._4_4_ * CStack_6c.y;
      CStack_6c.y = fStack_98 * CStack_6c.y;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar4,&CStack_40,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&stack0xffffff04 != pCVar1) {
        in_stack_ffffff0c = (CBoundingBox3D *)pCVar1->z;
      }
      (*this_ptr_00->vtable->getCarrier)(this_ptr_00);
      (*pCVar4->vtable[1].playAmbientSoundWithVolume)(pCVar4,&stack0xfffffef4,fVar3);
      if (this_ptr_00[2].orient.bank == 0.0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    in_stack_00000004 = (CDemonActor *)((int)in_stack_00000004 + 1);
  } while ((int)in_stack_00000004 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,this_ptr_00,"45.wav",local_60);
  this_ptr_00[2].orient_matrix.m[1].z = 0.333;
  fStack_2c = 3.0;
  auStack_28._0_4_ = 3.0;
  auStack_28._4_4_ = -4.0;
  fStack_70 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_6c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_6c.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30((CMatrix3x3f *)auStack_a0,&CStack_6c)
  ;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)(auStack_a0 + 4),(CVector3f *)&fStack_14,
                      (CVector3f *)(auStack_28 + 8));
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (this_ptr_00,(CVector3f *)&stack0xfffffffc,pCVar1);
  if ((CVector3f *)&fStack_18 != pCVar1) {
    fStack_18 = pCVar1->x;
    fStack_14 = pCVar1->y;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}


// Assembly code:
// 004f0350: PUSH EBX
//   Label: core_gun.cpp_FUN_004f0350
// 004f0351: PUSH ESI
// 004f0352: PUSH EDI
// 004f0353: PUSH EBP
// 004f0354: MOV EBP,ESP
// 004f0356: SUB ESP,0x13c
// 004f035c: AND ESP,0xfffffff8
// 004f035f: MOV EBX,dword ptr [EBP + 0x14]
// 004f0362: LEA EAX,[ESP + 0xf0]
// 004f0369: PUSH EAX
// 004f036a: MOV ESI,dword ptr [EBX + 0x154]
// 004f0370: PUSH EBX
// 004f0371: CALL dword ptr [ESI + 0xf4]
// 004f0377: ADD ESP,0x8
// 004f037a: PUSH EAX
// 004f037b: LEA EAX,[ESP + 0x94]
// 004f0382: PUSH EAX
// 004f0383: PUSH EBX
// 004f0384: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f0389: ADD ESP,0xc
// 004f038c: PUSH EBX
// 004f038d: CALL core_weapon.cpp_FUN_005ee6e0
//   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)
// 004f0392: ADD ESP,0x4
// 004f0395: TEST EAX,EAX
// 004f0397: JZ 0x004f06df
//   XREF to: 004f06df (CONDITIONAL_JUMP)
// 004f039d: MOV EAX,dword ptr [EBX + 0x2e8]
// 004f03a3: MOV dword ptr [ESP + 0xb0],EAX
// 004f03aa: LEA EAX,[ESP + 0xa8]
// 004f03b1: PUSH EAX
// 004f03b2: LEA EAX,[ESP + 0x118]
// 004f03b9: PUSH EAX
// 004f03ba: XOR ECX,ECX
// 004f03bc: PUSH EBX
// 004f03bd: MOV dword ptr [ESP + 0xb4],ECX
// 004f03c4: MOV dword ptr [ESP + 0xb8],ECX
// 004f03cb: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004f03d0: ADD ESP,0xc
// 004f03d3: FLD float ptr [ESP + 0x90]
// 004f03da: FLD float ptr [ESP + 0x94]
// 004f03e1: FLD float ptr [ESP + 0x98]
// 004f03e8: FXCH ST2
// 004f03ea: FADD float ptr [ESP + 0x114]
// 004f03f1: FXCH
// 004f03f3: FADD float ptr [ESP + 0x118]
// 004f03fa: FXCH ST2
// 004f03fc: FADD float ptr [ESP + 0x11c]
// 004f0403: FXCH
// 004f0405: FSTP float ptr [ESP + 0x9c]
// 004f040c: FXCH
// 004f040e: FSTP float ptr [ESP + 0xa0]
// 004f0415: FSTP float ptr [ESP + 0xa4]
// 004f041c: FLD float ptr [EBX + 0x2e8]
// 004f0422: FDIVR double ptr [0x0062e7c3]
//   XREF to: 0062e7c3 (READ)
// 004f0428: FLD float ptr [ESP + 0x114]
// 004f042f: FXCH
// 004f0431: FSTP float ptr [ESP + 0x120]
// 004f0438: FMUL float ptr [ESP + 0x120]
// 004f043f: FLD float ptr [ESP + 0x118]
// 004f0446: FMUL float ptr [ESP + 0x120]
// 004f044d: FLD float ptr [ESP + 0x11c]
// 004f0454: FMUL float ptr [ESP + 0x120]
// 004f045b: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004f0461: FLD float ptr [ESP + 0x90]
// 004f0468: FLD float ptr [ESP + 0x94]
// 004f046f: FLD float ptr [ESP + 0x98]
// 004f0476: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004f0477: FXCH ST5
// 004f0479: FSTP float ptr [ESP + 0x10c]
// 004f0480: FXCH ST3
// 004f0482: FSTP float ptr [ESP + 0x110]
// 004f0489: FXCH
// 004f048b: FSTP float ptr [ESP + 0x114]
// 004f0492: FSUB float ptr [ESP + 0x10c]
// 004f0499: FXCH
// 004f049b: FSUB float ptr [ESP + 0x110]
// 004f04a2: FXCH ST2
// 004f04a4: FSUB float ptr [ESP + 0x114]
// 004f04ab: FXCH
// 004f04ad: FSTP float ptr [ESP + 0x70]
// 004f04b1: FXCH
// 004f04b3: FSTP float ptr [ESP + 0x74]
// 004f04b7: FSTP float ptr [ESP + 0x78]
// 004f04bb: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004f04c0: ADD ESP,0x4
// 004f04c3: PUSH 0x1
// 004f04c5: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f04ca: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004f04cb: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 004f04d0: ADD ESP,0x8
// 004f04d3: PUSH EBX
// 004f04d4: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f04da: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004f04db: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004f04e0: MOV ECX,dword ptr [EBX + 0x304]
// 004f04e6: ADD ESP,0x8
// 004f04e9: TEST ECX,ECX
// 004f04eb: JNZ 0x004f0705
//   XREF to: 004f0705 (CONDITIONAL_JUMP)
// 004f04f1: XOR EAX,EAX
//   Label: LAB_004f04f1
// 004f04f3: MOV dword ptr [ESP + 0x12c],EAX
// 004f04fa: LEA EAX,[ESP + 0x9c]
//   Label: LAB_004f04fa
// 004f0501: PUSH EAX
// 004f0502: LEA EAX,[ESP + 0x70]
// 004f0506: PUSH EAX
// 004f0507: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f050d: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004f050e: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 004f0513: MOV dword ptr [ESP + 0x144],EAX
// 004f051a: FLD float ptr [ESP + 0x144]
// 004f0521: ADD ESP,0xc
// 004f0524: FLDZ
// 004f0526: FXCH
// 004f0528: FSTP double ptr [ESP]
// 004f052b: FCOMP double ptr [ESP]
// 004f052e: FNSTSW AX
// 004f0530: SAHF
// 004f0531: JBE 0x004f071a
//   XREF to: 004f071a (CONDITIONAL_JUMP)
// 004f0537: MOV EDI,dword ptr [0x006810c8]
//   Label: LAB_004f0537
//   XREF to: 006810c8 (READ)
// 004f053d: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004f053e: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004f0543: ADD ESP,0x4
// 004f0546: MOV EAX,dword ptr [ESP + 0x90]
// 004f054d: MOV dword ptr [ESP + 0xfc],EAX
// 004f0554: MOV EAX,dword ptr [ESP + 0x94]
// 004f055b: MOV dword ptr [ESP + 0x100],EAX
// 004f0562: MOV EAX,dword ptr [ESP + 0x98]
// 004f0569: MOV dword ptr [ESP + 0x104],EAX
// 004f0570: LEA EAX,[EBX + 0x3c]
// 004f0573: PUSH EAX
// 004f0574: LEA EAX,[ESP + 0x100]
// 004f057b: FLD float ptr [ESP + 0x104]
// 004f0582: PUSH EAX
// 004f0583: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004f0588: FADD float ptr [0x0062e7cb]
//   XREF to: 0062e7cb (READ)
// 004f058e: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004f058f: FSTP float ptr [ESP + 0x10c]
// 004f0596: CALL core_fire.cpp_CFireEffect_FUN_004c7a60
//   XREF to: 004c7a60 (UNCONDITIONAL_CALL)
// 004f059b: ADD ESP,0xc
// 004f059e: LEA EAX,[ESP + 0x90]
// 004f05a5: PUSH EAX
// 004f05a6: PUSH 0x62e7ad
//   XREF to: 0062e7ad (DATA)
// 004f05ab: PUSH EBX
// 004f05ac: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 004f05b2: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004f05b3: CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 004f05b8: ADD ESP,0x10
// 004f05bb: MOV EDI,0xc0800000
// 004f05c0: MOV ECX,0x40400000
// 004f05c5: PUSH 0x3ec90fdb
// 004f05ca: MOV dword ptr [EBX + 0x300],0x3eaa7efa
// 004f05d4: PUSH 0xbec90fdb
// 004f05d9: MOV dword ptr [ESP + 0xc8],ECX
// 004f05e0: MOV dword ptr [ESP + 0xcc],ECX
// 004f05e7: MOV dword ptr [ESP + 0xd0],EDI
// 004f05ee: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004f06df: LEA EAX,[ESP + 0x90]
//   Label: LAB_004f06df
// 004f06e6: PUSH EAX
// 004f06e7: PUSH 0x62e7a0
//   XREF to: 0062e7a0 (DATA)
// 004f06ec: PUSH EBX
// 004f06ed: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 004f06f3: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004f06f4: CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 004f06f9: ADD ESP,0x10
// 004f06fc: XOR EAX,EAX
// 004f06fe: MOV ESP,EBP
// 004f0700: POP EBP
// 004f0701: POP EDI
// 004f0702: POP ESI
// 004f0703: POP EBX
// 004f0704: RET
// 004f0705: PUSH ECX
//   Label: LAB_004f0705
// 004f0706: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004f070c: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004f070d: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004f0712: ADD ESP,0x8
// 004f0715: JMP 0x004f04f1
//   XREF to: 004f04f1 (UNCONDITIONAL_JUMP)
// 004f071a: FLD1
//   Label: LAB_004f071a
// 004f071c: FCOMP double ptr [ESP]
// 004f071f: FNSTSW AX
// 004f0721: SAHF
// 004f0722: JC 0x004f0537
//   XREF to: 004f0537 (CONDITIONAL_JUMP)
// 004f0728: MOV ECX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 004f072e: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f0733: PUSH ECX
// 004f0734: MOV ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004f073a: PUSH ESI
// 004f073b: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f0740: ADD ESP,0x8
// 004f0743: MOV ESI,EAX
// 004f0745: TEST EAX,EAX
// 004f0747: JZ 0x004f075f
//   XREF to: 004f075f (CONDITIONAL_JUMP)
// 004f0749: PUSH EAX
// 004f074a: MOV EDI,dword ptr [EAX + 0x154]
// 004f0750: CALL dword ptr [EDI + 0x120]
// 004f0756: ADD ESP,0x4
// 004f0759: TEST EAX,EAX
// 004f075b: JLE 0x004f075f
//   XREF to: 004f075f (CONDITIONAL_JUMP)
// 004f075d: XOR ESI,ESI
// 004f075f: MOV EDI,dword ptr [0x02d83360]
//   Label: LAB_004f075f
//   XREF to: 02d83360 (READ)
// 004f0765: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f076a: PUSH EDI
// 004f076b: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004f0771: PUSH EDX
// 004f0772: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f0777: MOV dword ptr [ESP + 0x13c],EAX
// 004f077e: ADD ESP,0x8
// 004f0781: MOV ECX,dword ptr [0x03f87490]
//   XREF to: 03f87490 (READ)
// 004f0787: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f078c: PUSH ECX
// 004f078d: MOV EDI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004f0793: PUSH EDI
// 004f0794: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f0799: ADD ESP,0x8
// 004f079c: MOV EDI,EAX
// 004f079e: MOV dword ptr [ESP + 0x124],EAX
// 004f07a5: MOV EAX,[0x0088797c]
//   XREF to: 0088797c (READ)
// 004f07aa: PUSH EAX
// 004f07ab: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f07b0: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004f07b6: PUSH EDX
// 004f07b7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f07bc: MOV dword ptr [ESP + 0x130],EAX
// 004f07c3: ADD ESP,0x8
// 004f07c6: MOV ECX,dword ptr [0x02d7a738]
//   XREF to: 02d7a738 (READ)
// 004f07cc: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f07d1: PUSH ECX
// 004f07d2: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004f07d8: PUSH EDX
// 004f07d9: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f07de: ADD ESP,0x8
// 004f07e1: TEST ESI,ESI
// 004f07e3: JNZ 0x004f0821
//   XREF to: 004f0821 (CONDITIONAL_JUMP)
// 004f07e5: MOV ECX,dword ptr [ESP + 0x134]
// 004f07ec: TEST ECX,ECX
// 004f07ee: JNZ 0x004f0a33
//   XREF to: 004f0a33 (CONDITIONAL_JUMP)
// 004f07f4: TEST EDI,EDI
// 004f07f6: JNZ 0x004f0a61
//   XREF to: 004f0a61 (CONDITIONAL_JUMP)
// 004f07fc: MOV ESI,dword ptr [ESP + 0x128]
// 004f0803: TEST ESI,ESI
// 004f0805: JNZ 0x004f0abd
//   XREF to: 004f0abd (CONDITIONAL_JUMP)
// 004f080b: TEST EAX,EAX
// 004f080d: JZ 0x004f0ae3
//   XREF to: 004f0ae3 (CONDITIONAL_JUMP)
// 004f0813: PUSH EAX
// 004f0814: CALL core_flamecan.cpp_FUN_004cb340
//   XREF to: 004cb340 (UNCONDITIONAL_CALL)
// 004f0819: ADD ESP,0x4
// 004f081c: JMP 0x004f0ac6
//   XREF to: 004f0ac6 (UNCONDITIONAL_JUMP)
// 004f0821: PUSH ESI
//   Label: LAB_004f0821
// 004f0822: MOV EAX,dword ptr [ESI + 0x154]
// 004f0828: CALL dword ptr [EAX + 0xf4]
// 004f082e: ADD ESP,0x4
// 004f0831: TEST EAX,EAX
// 004f0833: JZ 0x004f0868
//   XREF to: 004f0868 (CONDITIONAL_JUMP)
// 004f0835: CMP dword ptr [ESP + 0x12c],0x0
// 004f083d: JNZ 0x004f0537
//   XREF to: 004f0537 (CONDITIONAL_JUMP)
// 004f0843: MOV ESI,dword ptr [EBX + 0x568]
// 004f0849: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f084f: INC ESI
// 004f0850: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004f0851: MOV dword ptr [EBX + 0x568],ESI
// 004f0857: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004f085c: ADD ESP,0x4
// 004f085f: XOR EAX,EAX
// 004f0861: MOV ESP,EBP
// 004f0863: POP EBP
// 004f0864: POP EDI
// 004f0865: POP ESI
// 004f0866: POP EBX
// 004f0867: RET
// 004f0868: LEA EAX,[ESP + 0x8]
//   Label: LAB_004f0868
// 004f086c: PUSH EAX
// 004f086d: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004f0872: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004f0877: ADD ESP,0x4
// 004f087a: MOV EAX,dword ptr [EAX + 0x14d148]
//   XREF to: 032613c0 (READ)
// 004f0880: MOV dword ptr [ESP + 0x8],EAX
// 004f0884: PUSH EBX
// 004f0885: MOV EAX,dword ptr [EBX + 0x154]
// 004f088b: CALL dword ptr [EAX + 0x100]
// 004f0891: MOV dword ptr [ESP + 0x13c],EAX
// 004f0898: MOV EDI,0x3ecccccd
// 004f089d: FLD float ptr [ESP + 0x13c]
// 004f08a4: ADD ESP,0x4
// 004f08a7: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004f08ac: MOV dword ptr [ESP + 0x10],EDI
// 004f08b0: LEA EDI,[EAX + 0x14d11c]
//   XREF to: 03261394 (DATA)
// 004f08b6: FSTP float ptr [ESP + 0xc]
// 004f08ba: FLD float ptr [EDI]
//   XREF to: 03261394 (READ)
// 004f08bc: FSUB float ptr [EAX + 0x14d110]
//   XREF to: 03261388 (READ)
// 004f08c2: FSTP float ptr [ESP + 0x84]
// 004f08c9: FLD float ptr [EDI + 0x4]
//   XREF to: 03261398 (READ)
// 004f08cc: FSUB float ptr [EAX + 0x14d114]
//   XREF to: 0326138c (READ)
// 004f08d2: FST float ptr [ESP + 0x88]
// 004f08d9: FMUL float ptr [ESP + 0x88]
// 004f08e0: FLD float ptr [ESP + 0x84]
// 004f08e7: FMUL ST0
// 004f08e9: FLD float ptr [EDI + 0x8]
//   XREF to: 0326139c (READ)
// 004f08ec: FSUB float ptr [EAX + 0x14d118]
//   XREF to: 03261390 (READ)
// 004f08f2: FXCH
// 004f08f4: FADDP ST2,ST0
// 004f08f6: FST float ptr [ESP + 0x8c]
// 004f08fd: FMUL float ptr [ESP + 0x8c]
// 004f0904: FADDP
// 004f0906: FSQRT
// 004f0908: FDIVR double ptr [0x0062e7d3]
//   XREF to: 0062e7d3 (READ)
// 004f090e: FLD float ptr [ESP + 0x84]
// 004f0915: FXCH
// 004f0917: FSTP float ptr [ESP + 0x130]
// 004f091e: FMUL float ptr [ESP + 0x130]
// 004f0925: FLD float ptr [ESP + 0x88]
// 004f092c: FMUL float ptr [ESP + 0x130]
// 004f0933: FLD float ptr [ESP + 0x8c]
// 004f093a: FMUL float ptr [ESP + 0x130]
// 004f0941: LEA EDI,[ESP + 0x14]
// 004f0945: LEA EAX,[ESP + 0xb4]
// 004f094c: FXCH ST2
// 004f094e: FSTP float ptr [ESP + 0xb4]
// 004f0955: FSTP float ptr [ESP + 0xb8]
// 004f095c: FSTP float ptr [ESP + 0xbc]
// 004f0963: CMP EDI,EAX
// 004f0965: JZ 0x004f0988
//   XREF to: 004f0988 (CONDITIONAL_JUMP)
// 004f0967: MOV EAX,dword ptr [ESP + 0xb4]
// 004f096e: MOV dword ptr [ESP + 0x14],EAX
// 004f0972: MOV EAX,dword ptr [ESP + 0xb8]
// 004f0979: MOV dword ptr [ESP + 0x18],EAX
// 004f097d: MOV EAX,dword ptr [ESP + 0xbc]
// 004f0984: MOV dword ptr [ESP + 0x1c],EAX
// 004f0988: MOV EAX,[0x006810c8]
//   Label: LAB_004f0988
//   XREF to: 006810c8 (READ)
// 004f098d: ADD EAX,0x14d138
// 004f0992: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 004f0993: LEA EAX,[ESP + 0xe8]
// 004f099a: PUSH EAX
// 004f099b: PUSH ESI
// 004f099c: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f09a1: MOV EDI,EAX
// 004f09a3: LEA EAX,[ESP + 0x30]
// 004f09a7: ADD ESP,0xc
// 004f09aa: CMP EAX,EDI
// 004f09ac: JZ 0x004f09c2
//   XREF to: 004f09c2 (CONDITIONAL_JUMP)
// 004f09ae: MOV EAX,dword ptr [EDI]
// 004f09b0: MOV dword ptr [ESP + 0x24],EAX
// 004f09b4: MOV EAX,dword ptr [EDI + 0x4]
// 004f09b7: MOV dword ptr [ESP + 0x28],EAX
// 004f09bb: MOV EAX,dword ptr [EDI + 0x8]
// 004f09be: MOV dword ptr [ESP + 0x2c],EAX
// 004f09c2: MOV EAX,dword ptr [EBX + 0x56c]
//   Label: LAB_004f09c2
// 004f09c8: MOV EDX,0x3e19999a
// 004f09cd: MOV dword ptr [ESP + 0x30],EAX
// 004f09d1: MOV dword ptr [ESP + 0x34],EDX
// 004f09d5: MOV EAX,0x65
// 004f09da: MOV dword ptr [ESP + 0x3c],EBX
// 004f09de: MOV dword ptr [ESP + 0x38],EAX
// 004f09e2: PUSH EBX
// 004f09e3: MOV EAX,dword ptr [EBX + 0x154]
// 004f09e9: CALL dword ptr [EAX + 0x8c]
// 004f09ef: ADD ESP,0x4
// 004f09f2: MOV dword ptr [ESP + 0x40],EAX
// 004f09f6: LEA EAX,[ESP + 0x8]
// 004f09fa: PUSH EAX
// 004f09fb: MOV EDI,dword ptr [ESI + 0x154]
// 004f0a01: PUSH ESI
// 004f0a02: CALL dword ptr [EDI + 0x11c]
// 004f0a08: MOV ECX,dword ptr [EBX + 0x2e4]
// 004f0a0e: ADD ESP,0x8
// 004f0a11: TEST ECX,ECX
// 004f0a13: JZ 0x004f0537
//   XREF to: 004f0537 (CONDITIONAL_JUMP)
// 004f0a19: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f0a1e: MOV ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004f0a24: PUSH ESI
// 004f0a25: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004f0a26: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004f0a2b: ADD ESP,0x8
// 004f0a2e: JMP 0x004f0ac6
//   XREF to: 004f0ac6 (UNCONDITIONAL_JUMP)
// 004f0a33: PUSH ECX
//   Label: LAB_004f0a33
// 004f0a34: CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
// 004f0a39: ADD ESP,0x4
// 004f0a3c: TEST EAX,EAX
// 004f0a3e: JZ 0x004f0537
//   XREF to: 004f0537 (CONDITIONAL_JUMP)
// 004f0a44: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004f0a49: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 004f0a4e: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 004f0a4f: MOV ECX,dword ptr [ESP + 0x138]
// 004f0a56: PUSH ECX
// 004f0a57: CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 004f0a5c: ADD ESP,0x8
// 004f0a5f: JMP 0x004f0ac6
//   XREF to: 004f0ac6 (UNCONDITIONAL_JUMP)
// 004f0a61: PUSH EDI
//   Label: LAB_004f0a61
// 004f0a62: CALL core_trigger.cpp_FUN_005e0aa0
//   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)
// 004f0a67: ADD ESP,0x4
// 004f0a6a: PUSH EBX
// 004f0a6b: PUSH EDI
// 004f0a6c: CALL core_trigger.cpp_FUN_005e0ac0
//   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
// 004f0a71: ADD ESP,0x8
// 004f0a74: TEST EAX,EAX
// 004f0a76: JZ 0x004f0aa5
//   XREF to: 004f0aa5 (CONDITIONAL_JUMP)
// 004f0a78: PUSH EBX
// 004f0a79: MOV EAX,dword ptr [EBX + 0x154]
// 004f0a7f: CALL dword ptr [EAX + 0x100]
// 004f0a85: MOV dword ptr [ESP + 0x13c],EAX
// 004f0a8c: FLD float ptr [ESP + 0x13c]
// 004f0a93: ADD ESP,0x4
// 004f0a96: SUB ESP,0x4
// 004f0a99: FSTP float ptr [ESP]
// 004f0a9c: PUSH EDI
// 004f0a9d: CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
// 004f0aa2: ADD ESP,0x8
// 004f0aa5: MOV EDI,dword ptr [ESP + 0x124]
//   Label: LAB_004f0aa5
// 004f0aac: PUSH EDI
// 004f0aad: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f0ab2: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004f0ab3: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004f0ab8: ADD ESP,0x8
// 004f0abb: JMP 0x004f0ac6
//   XREF to: 004f0ac6 (UNCONDITIONAL_JUMP)
// 004f0abd: PUSH ESI
//   Label: LAB_004f0abd
// 004f0abe: CALL core_crate.cpp_FUN_00448a70
//   XREF to: 00448a70 (UNCONDITIONAL_CALL)
// 004f0ac3: ADD ESP,0x4
// 004f0ac6: MOV EDI,dword ptr [ESP + 0x12c]
//   Label: LAB_004f0ac6
// 004f0acd: INC EDI
// 004f0ace: MOV dword ptr [ESP + 0x12c],EDI
// 004f0ad5: CMP EDI,0x4
// 004f0ad8: JL 0x004f04fa
//   XREF to: 004f04fa (CONDITIONAL_JUMP)
// 004f0ade: JMP 0x004f0537
//   XREF to: 004f0537 (UNCONDITIONAL_JUMP)
// 004f0ae3: MOV EAX,[0x006810c8]
//   Label: LAB_004f0ae3
//   XREF to: 006810c8 (READ)
// 004f0ae8: MOV EDI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004f0aee: PUSH EDI
// 004f0aef: MOV EDX,dword ptr [EAX + 0x14d134]
//   XREF to: 032613ac (READ)
// 004f0af5: PUSH EDX
// 004f0af6: LEA ESI,[EAX + 0x14d128]
//   XREF to: 032613a0 (DATA)
// 004f0afc: PUSH ESI
//   XREF to: 032613a0 (DATA)
// 004f0afd: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 004f0b02: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 004f0b03: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004f0b09: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004f0b0a: CALL core_fire.cpp_CFireEffect_FUN_004c76a0
//   XREF to: 004c76a0 (UNCONDITIONAL_CALL)
// 004f0b0f: ADD ESP,0x14
// 004f0b12: JMP 0x004f0537
//   XREF to: 004f0537 (UNCONDITIONAL_JUMP)
