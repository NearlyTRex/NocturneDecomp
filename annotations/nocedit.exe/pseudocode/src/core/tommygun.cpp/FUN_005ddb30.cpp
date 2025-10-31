// Name: core_tommygun.cpp_FUN_005ddb30
// Address: 005ddb30
// Address Range: [[005ddb30, 005ddded] [005ddebf, 005de32f]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005ddb30()
// Globals:
//   TerminatedCString s_s_45_dry_wav_2_0_006554ad
//   undefined4 DAT_006554cd
//   undefined4 DAT_006554d1
//   undefined4 DAT_006554d9
//   undefined4 DAT_006554e1
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CCharacterClassInfo.name_hash
//   undefined4 g_CCrateClassInfo.name_hash
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CFlameCanClassInfo.name_hash
//   undefined4 g_CGlassClassInfo.name_hash
//   undefined4 g_CHeroClassInfo.name_hash
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
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_crate.cpp_FUN_00448a70
//   core_fire.cpp_CFireEffect_FUN_004c76a0
//   core_fire.cpp_CFireEffect_FUN_004c7a60
//   core_flamecan.cpp_FUN_004cb340
//   core_glass.cpp_FUN_004eaef0
//   core_glass.cpp_FUN_004eb3a0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_trigger.cpp_FUN_005e0aa0
//   core_trigger.cpp_FUN_005e0ac0
//   core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   core_weapon.cpp_FUN_005ee6e0
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_tommygun.cpp_FUN_005ddb30(undefined4 param_1) */

undefined4 core_tommygun_cpp_FUN_005ddb30(void)

{
  CDemonActor_vtable *pCVar1;
  CDemonSet *this_ptr;
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CDemonActor *in_stack_00000004;
  int iStack00000008;
  int in_stack_00000030;
  int in_stack_00000038;
  CDemonActor *in_stack_0000004c;
  CBoundingBox3D *out_box;
  double dVar8;
  CBoundingBox3D *in_stack_ffffff0c;
  float fStack_b4;
  CVector3f CStack_b0;
  undefined1 auStack_a4 [32];
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_14;
  
  fVar3 = in_stack_00000004[2].orient_matrix.m[1].z;
  in_stack_00000004[4].actor_name[0x18] = '\x02';
  in_stack_00000004[4].actor_name[0x19] = '\0';
  in_stack_00000004[4].actor_name[0x1a] = '\0';
  in_stack_00000004[4].actor_name[0x1b] = '\0';
  if (0.0 < fVar3) {
    return 0;
  }
  pCVar1 = (in_stack_00000004->metadata).vtable;
  in_stack_00000004[2].orient_matrix.m[1].z =
       in_stack_00000004[2].orient_matrix.m[1].z + _DAT_006554cd;
  (*pCVar1[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    in_stack_00000004[4].actor_name[0x18] = '\0';
    in_stack_00000004[4].actor_name[0x19] = '\0';
    in_stack_00000004[4].actor_name[0x1a] = '\0';
    in_stack_00000004[4].actor_name[0x1b] = '\0';
    (*((in_stack_00000004->metadata).vtable)->playSound)
              (in_stack_00000004,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    in_stack_00000004[4].actor_name[0x1c] = '\0';
    in_stack_00000004[4].actor_name[0x1d] = '\0';
    in_stack_00000004[4].actor_name[0x1e] = '\0';
    in_stack_00000004[4].actor_name[0x1f] = '\0';
    return 0;
  }
  auStack_a4._0_4_ = in_stack_00000004[2].orient.heading;
  CStack_b0.y = 0.0;
  CStack_b0.z = 0.0;
  core_actor_cpp_CDemonActor_FUN_00408e80(in_stack_00000004);
  fStack_14 = (float)_DAT_006554d1 / in_stack_00000004[2].orient.heading;
  fStack_30 = fStack_b4 * fStack_14;
  fStack_2c = CStack_b0.x * fStack_14;
  CStack_28.x = CStack_b0.y * fStack_14;
  local_60 = fStack_6c - fStack_30;
  fStack_5c = fStack_68 - fStack_2c;
  fStack_58 = fStack_64 - CStack_28.x;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar5 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar5 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar5);
  }
  iStack00000008 = 0;
  do {
    out_box = (CBoundingBox3D *)0x5ddd2a;
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_50,&CStack_b0);
    dVar8 = (double)fVar3;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) goto LAB_005ddd4e;
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar5 != (CDemonActor *)0x0) &&
       (iVar2 = (*(pCVar5->metadata).vtable[1].hasCollision)
                          (pCVar5,(SCollisionInfo *)((ulonglong)dVar8 >> 0x20)), 0 < iVar2)) {
      pCVar5 = (CDemonActor *)0x0;
    }
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar5 == (CDemonActor *)0x0) {
      if (in_stack_00000038 == 0) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (in_stack_00000030 == 0) {
            if (pCVar7 == (CDemonActor *)0x0) {
              core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
              goto LAB_005ddd4e;
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
            (*(in_stack_00000004->metadata).vtable[1].getBoundingBox)
                      (in_stack_00000004,in_stack_ffffff0c);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_0000004c);
        }
      }
      else {
        iVar2 = core_glass_cpp_FUN_004eb3a0();
        if (iVar2 == 0) goto LAB_005ddd4e;
        core_glass_cpp_FUN_004eaef0();
      }
    }
    else {
      iVar2 = (*(pCVar5->metadata).vtable[1].renderOpaque)(pCVar5);
      if ((iVar2 != 0) &&
         (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x,
                              g_CHeroClassInfo.name_hash), this_ptr = g_CDemonSetPtr,
         pCVar6 != (CDemonActor *)0x0)) {
        if (unaff_ESI == 0) {
          *(int *)(in_stack_00000004[4].actor_name + 8) =
               *(int *)(in_stack_00000004[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffecc);
      (*(in_stack_00000004->metadata).vtable[1].getBoundingBox)(in_stack_00000004,out_box);
      fVar3 = 0.4;
      CStack_28.x = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_28.y = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      CStack_28.z = (g_CDemonSetPtr->collision_result_vec2).z -
                    (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_38 = (float)_DAT_006554e1 /
                  SQRT(CStack_28.z * CStack_28.z +
                       CStack_28.x * CStack_28.x + CStack_28.y * CStack_28.y);
      fStack_40 = CStack_28.x * fStack_38;
      fStack_3c = CStack_28.y * fStack_38;
      fStack_38 = CStack_28.z * fStack_38;
      pCVar4 = core_actor_cpp_CDemonActor_FUN_00408f10(pCVar5);
      if ((CVector3f *)&stack0xffffff04 != pCVar4) {
        in_stack_ffffff0c = (CBoundingBox3D *)pCVar4->z;
      }
      (*((in_stack_00000004->metadata).vtable)->getCarrier)(in_stack_00000004);
      (*(pCVar5->metadata).vtable[1].playAmbientSoundWithVolume)(pCVar5,&stack0xfffffef4,fVar3);
      if (in_stack_00000004[2].orient.bank == 0.0) goto LAB_005ddd4e;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack00000008 = iStack00000008 + 1;
    if (3 < iStack00000008) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
        fStack_40 = CStack_28.x;
        fStack_38 = CStack_28.z;
        fStack_3c = CStack_28.y + _DAT_006554d9;
        core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
        fStack_84 = 5.0;
        uStack_80 = 0x40c00000;
        uStack_7c = 0xc0c00000;
        fStack_2c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_28.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_28.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)auStack_a4,&CStack_28);
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                  ((CMatrix3x3f *)(auStack_a4 + 4),(CVector3f *)(auStack_50 + 8),
                   (CVector3f *)auStack_78);
        pCVar4 = core_actor_cpp_CDemonActor_FUN_00408e80(in_stack_00000004);
        if ((CVector3f *)(auStack_78 + 8) != pCVar4) {
          auStack_78._8_4_ = pCVar4->x;
          fStack_6c = pCVar4->y;
          fStack_68 = pCVar4->z;
        }
        core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
      }
      return 1;
    }
  } while( true );
}


// Assembly code:
// 005ddb30: PUSH EBX
//   Label: core_tommygun.cpp_FUN_005ddb30
// 005ddb31: PUSH ESI
// 005ddb32: PUSH EDI
// 005ddb33: PUSH EBP
// 005ddb34: MOV EBP,ESP
// 005ddb36: SUB ESP,0x13c
// 005ddb3c: AND ESP,0xfffffff8
// 005ddb3f: MOV EBX,dword ptr [EBP + 0x14]
// 005ddb42: FLD float ptr [EBX + 0x300]
// 005ddb48: FLDZ
// 005ddb4a: MOV dword ptr [EBX + 0x578],0x2
// 005ddb54: FCOMPP
// 005ddb56: FNSTSW AX
// 005ddb58: SAHF
// 005ddb59: JNC 0x005ddb64
//   XREF to: 005ddb64 (CONDITIONAL_JUMP)
// 005ddb5b: XOR EAX,EAX
// 005ddb5d: MOV ESP,EBP
// 005ddb5f: POP EBP
// 005ddb60: POP EDI
// 005ddb61: POP ESI
// 005ddb62: POP EBX
// 005ddb63: RET
// 005ddb64: FLD float ptr [EBX + 0x300]
//   Label: LAB_005ddb64
// 005ddb6a: LEA EAX,[ESP + 0xf0]
// 005ddb71: MOV ESI,dword ptr [EBX + 0x154]
// 005ddb77: PUSH EAX
// 005ddb78: FADD float ptr [0x006554cd]
//   XREF to: 006554cd (READ)
// 005ddb7e: PUSH EBX
// 005ddb7f: FSTP float ptr [EBX + 0x300]
// 005ddb85: CALL dword ptr [ESI + 0xf4]
// 005ddb8b: ADD ESP,0x8
// 005ddb8e: PUSH EAX
// 005ddb8f: LEA EAX,[ESP + 0xd0]
// 005ddb96: PUSH EAX
// 005ddb97: PUSH EBX
// 005ddb98: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005ddb9d: ADD ESP,0xc
// 005ddba0: PUSH EBX
// 005ddba1: CALL core_weapon.cpp_FUN_005ee6e0
//   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)
// 005ddba6: ADD ESP,0x4
// 005ddba9: TEST EAX,EAX
// 005ddbab: JZ 0x005ddecb
//   XREF to: 005ddecb (CONDITIONAL_JUMP)
// 005ddbb1: MOV EAX,dword ptr [EBX + 0x2e8]
// 005ddbb7: MOV dword ptr [ESP + 0x98],EAX
// 005ddbbe: LEA EAX,[ESP + 0x90]
// 005ddbc5: PUSH EAX
// 005ddbc6: LEA EAX,[ESP + 0x88]
// 005ddbcd: PUSH EAX
// 005ddbce: XOR ECX,ECX
// 005ddbd0: PUSH EBX
// 005ddbd1: MOV dword ptr [ESP + 0x9c],ECX
// 005ddbd8: MOV dword ptr [ESP + 0xa0],ECX
// 005ddbdf: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005ddbe4: ADD ESP,0xc
// 005ddbe7: FLD float ptr [ESP + 0xcc]
// 005ddbee: FLD float ptr [ESP + 0xd0]
// 005ddbf5: FLD float ptr [ESP + 0xd4]
// 005ddbfc: FXCH ST2
// 005ddbfe: FADD float ptr [ESP + 0x84]
// 005ddc05: FXCH
// 005ddc07: FADD float ptr [ESP + 0x88]
// 005ddc0e: FXCH ST2
// 005ddc10: FADD float ptr [ESP + 0x8c]
// 005ddc17: FXCH
// 005ddc19: FSTP float ptr [ESP + 0x78]
// 005ddc1d: FXCH
// 005ddc1f: FSTP float ptr [ESP + 0x7c]
// 005ddc23: FSTP float ptr [ESP + 0x80]
// 005ddc2a: FLD float ptr [EBX + 0x2e8]
// 005ddc30: FDIVR double ptr [0x006554d1]
//   XREF to: 006554d1 (READ)
// 005ddc36: FLD float ptr [ESP + 0x84]
// 005ddc3d: FXCH
// 005ddc3f: FSTP float ptr [ESP + 0x124]
// 005ddc46: FMUL float ptr [ESP + 0x124]
// 005ddc4d: FLD float ptr [ESP + 0x88]
// 005ddc54: FMUL float ptr [ESP + 0x124]
// 005ddc5b: FLD float ptr [ESP + 0x8c]
// 005ddc62: FMUL float ptr [ESP + 0x124]
// 005ddc69: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005ddc6f: FLD float ptr [ESP + 0xcc]
// 005ddc76: FLD float ptr [ESP + 0xd0]
// 005ddc7d: FLD float ptr [ESP + 0xd4]
// 005ddc84: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005ddc85: FXCH ST5
// 005ddc87: FSTP float ptr [ESP + 0x10c]
// 005ddc8e: FXCH ST3
// 005ddc90: FSTP float ptr [ESP + 0x110]
// 005ddc97: FXCH
// 005ddc99: FSTP float ptr [ESP + 0x114]
// 005ddca0: FSUB float ptr [ESP + 0x10c]
// 005ddca7: FXCH
// 005ddca9: FSUB float ptr [ESP + 0x110]
// 005ddcb0: FXCH ST2
// 005ddcb2: FSUB float ptr [ESP + 0x114]
// 005ddcb9: FXCH
// 005ddcbb: FSTP float ptr [ESP + 0xdc]
// 005ddcc2: FXCH
// 005ddcc4: FSTP float ptr [ESP + 0xe0]
// 005ddccb: FSTP float ptr [ESP + 0xe4]
// 005ddcd2: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005ddcd7: ADD ESP,0x4
// 005ddcda: PUSH 0x1
// 005ddcdc: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddce1: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005ddce2: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 005ddce7: ADD ESP,0x8
// 005ddcea: PUSH EBX
// 005ddceb: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddcf1: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005ddcf2: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005ddcf7: MOV ECX,dword ptr [EBX + 0x304]
// 005ddcfd: ADD ESP,0x8
// 005ddd00: TEST ECX,ECX
// 005ddd02: JNZ 0x005ddf05
//   XREF to: 005ddf05 (CONDITIONAL_JUMP)
// 005ddd08: XOR EAX,EAX
//   Label: LAB_005ddd08
// 005ddd0a: MOV dword ptr [ESP + 0x130],EAX
// 005ddd11: LEA EAX,[ESP + 0x78]
//   Label: LAB_005ddd11
// 005ddd15: PUSH EAX
// 005ddd16: LEA EAX,[ESP + 0xdc]
// 005ddd1d: PUSH EAX
// 005ddd1e: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddd24: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005ddd25: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 005ddd2a: MOV dword ptr [ESP + 0x144],EAX
// 005ddd31: FLD float ptr [ESP + 0x144]
// 005ddd38: ADD ESP,0xc
// 005ddd3b: FLDZ
// 005ddd3d: FXCH
// 005ddd3f: FSTP double ptr [ESP]
// 005ddd42: FCOMP double ptr [ESP]
// 005ddd45: FNSTSW AX
// 005ddd47: SAHF
// 005ddd48: JBE 0x005ddf1a
//   XREF to: 005ddf1a (CONDITIONAL_JUMP)
// 005ddd4e: MOV ECX,dword ptr [0x006810c8]
//   Label: LAB_005ddd4e
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddd54: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005ddd55: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005ddd5a: MOV ESI,dword ptr [EBX + 0x574]
// 005ddd60: ADD ESP,0x4
// 005ddd63: TEST ESI,ESI
// 005ddd65: JZ 0x005ddebf
//   XREF to: 005ddebf (CONDITIONAL_JUMP)
// 005ddd6b: MOV EAX,dword ptr [ESP + 0xcc]
// 005ddd72: MOV dword ptr [ESP + 0xb4],EAX
// 005ddd79: MOV EAX,dword ptr [ESP + 0xd0]
// 005ddd80: MOV dword ptr [ESP + 0xb8],EAX
// 005ddd87: MOV EAX,dword ptr [ESP + 0xd4]
// 005ddd8e: MOV dword ptr [ESP + 0xbc],EAX
// 005ddd95: LEA EAX,[EBX + 0x3c]
// 005ddd98: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 005ddd9e: PUSH EAX
// 005ddd9f: LEA EAX,[ESP + 0xb8]
// 005ddda6: FLD float ptr [ESP + 0xbc]
// 005dddad: PUSH EAX
// 005dddae: FADD float ptr [0x006554d9]
//   XREF to: 006554d9 (READ)
// 005dddb4: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 005dddb5: FSTP float ptr [ESP + 0xc4]
// 005dddbc: CALL core_fire.cpp_CFireEffect_FUN_004c7a60
//   XREF to: 004c7a60 (UNCONDITIONAL_CALL)
// 005dddc1: ADD ESP,0xc
// 005dddc4: MOV EAX,0x40a00000
// 005dddc9: MOV EDX,0x40c00000
// 005dddce: PUSH 0x3ec90fdb
// 005dddd3: MOV ECX,0xc0c00000
// 005dddd8: PUSH 0xbec90fdb
// 005ddddd: MOV dword ptr [ESP + 0x74],EAX
// 005ddde1: MOV dword ptr [ESP + 0x78],EDX
// 005ddde5: MOV dword ptr [ESP + 0x7c],ECX
// 005ddde9: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005ddebf: MOV EAX,0x1
//   Label: LAB_005ddebf
// 005ddec4: MOV ESP,EBP
// 005ddec6: POP EBP
// 005ddec7: POP EDI
// 005ddec8: POP ESI
// 005ddec9: POP EBX
// 005ddeca: RET
// 005ddecb: PUSH 0x6554ad
//   Label: LAB_005ddecb
//   XREF to: 006554ad (DATA)
// 005dded0: MOV dword ptr [EBX + 0x578],EAX
// 005dded6: PUSH EBX
// 005dded7: MOV EAX,dword ptr [EBX + 0x154]
// 005ddedd: CALL dword ptr [EAX + 0x24]
// 005ddee0: ADD ESP,0x8
// 005ddee3: MOV EDX,dword ptr [EBX + 0x57c]
// 005ddee9: PUSH EDX
// 005ddeea: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005ddeef: ADD ESP,0x4
// 005ddef2: MOV dword ptr [EBX + 0x57c],0x0
// 005ddefc: XOR EAX,EAX
// 005ddefe: MOV ESP,EBP
// 005ddf00: POP EBP
// 005ddf01: POP EDI
// 005ddf02: POP ESI
// 005ddf03: POP EBX
// 005ddf04: RET
// 005ddf05: PUSH ECX
//   Label: LAB_005ddf05
// 005ddf06: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005ddf0c: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005ddf0d: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005ddf12: ADD ESP,0x8
// 005ddf15: JMP 0x005ddd08
//   XREF to: 005ddd08 (UNCONDITIONAL_JUMP)
// 005ddf1a: FLD1
//   Label: LAB_005ddf1a
// 005ddf1c: FCOMP double ptr [ESP]
// 005ddf1f: FNSTSW AX
// 005ddf21: SAHF
// 005ddf22: JC 0x005ddd4e
//   XREF to: 005ddd4e (CONDITIONAL_JUMP)
// 005ddf28: MOV ECX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 005ddf2e: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddf33: PUSH ECX
// 005ddf34: MOV ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005ddf3a: PUSH ESI
// 005ddf3b: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ddf40: ADD ESP,0x8
// 005ddf43: MOV ESI,EAX
// 005ddf45: TEST EAX,EAX
// 005ddf47: JZ 0x005ddf5f
//   XREF to: 005ddf5f (CONDITIONAL_JUMP)
// 005ddf49: PUSH EAX
// 005ddf4a: MOV EDI,dword ptr [EAX + 0x154]
// 005ddf50: CALL dword ptr [EDI + 0x120]
// 005ddf56: ADD ESP,0x4
// 005ddf59: TEST EAX,EAX
// 005ddf5b: JLE 0x005ddf5f
//   XREF to: 005ddf5f (CONDITIONAL_JUMP)
// 005ddf5d: XOR ESI,ESI
// 005ddf5f: MOV EDI,dword ptr [0x02d83360]
//   Label: LAB_005ddf5f
//   XREF to: 02d83360 (READ)
// 005ddf65: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddf6a: PUSH EDI
// 005ddf6b: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005ddf71: PUSH EDX
// 005ddf72: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ddf77: MOV dword ptr [ESP + 0x13c],EAX
// 005ddf7e: ADD ESP,0x8
// 005ddf81: MOV ECX,dword ptr [0x03f87490]
//   XREF to: 03f87490 (READ)
// 005ddf87: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddf8c: PUSH ECX
// 005ddf8d: MOV EDI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005ddf93: PUSH EDI
// 005ddf94: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ddf99: ADD ESP,0x8
// 005ddf9c: MOV EDI,EAX
// 005ddf9e: MOV dword ptr [ESP + 0x128],EAX
// 005ddfa5: MOV EAX,[0x0088797c]
//   XREF to: 0088797c (READ)
// 005ddfaa: PUSH EAX
// 005ddfab: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddfb0: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005ddfb6: PUSH EDX
// 005ddfb7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ddfbc: MOV dword ptr [ESP + 0x134],EAX
// 005ddfc3: ADD ESP,0x8
// 005ddfc6: MOV ECX,dword ptr [0x02d7a738]
//   XREF to: 02d7a738 (READ)
// 005ddfcc: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ddfd1: PUSH ECX
// 005ddfd2: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005ddfd8: PUSH EDX
// 005ddfd9: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ddfde: ADD ESP,0x8
// 005ddfe1: TEST ESI,ESI
// 005ddfe3: JNZ 0x005de021
//   XREF to: 005de021 (CONDITIONAL_JUMP)
// 005ddfe5: MOV ECX,dword ptr [ESP + 0x134]
// 005ddfec: TEST ECX,ECX
// 005ddfee: JNZ 0x005de24c
//   XREF to: 005de24c (CONDITIONAL_JUMP)
// 005ddff4: TEST EDI,EDI
// 005ddff6: JNZ 0x005de27a
//   XREF to: 005de27a (CONDITIONAL_JUMP)
// 005ddffc: MOV ESI,dword ptr [ESP + 0x12c]
// 005de003: TEST ESI,ESI
// 005de005: JNZ 0x005de2d6
//   XREF to: 005de2d6 (CONDITIONAL_JUMP)
// 005de00b: TEST EAX,EAX
// 005de00d: JZ 0x005de2fc
//   XREF to: 005de2fc (CONDITIONAL_JUMP)
// 005de013: PUSH EAX
// 005de014: CALL core_flamecan.cpp_FUN_004cb340
//   XREF to: 004cb340 (UNCONDITIONAL_CALL)
// 005de019: ADD ESP,0x4
// 005de01c: JMP 0x005de2df
//   XREF to: 005de2df (UNCONDITIONAL_JUMP)
// 005de021: PUSH ESI
//   Label: LAB_005de021
// 005de022: MOV EAX,dword ptr [ESI + 0x154]
// 005de028: CALL dword ptr [EAX + 0xf4]
// 005de02e: ADD ESP,0x4
// 005de031: TEST EAX,EAX
// 005de033: JZ 0x005de081
//   XREF to: 005de081 (CONDITIONAL_JUMP)
// 005de035: MOV EDI,dword ptr [0x02db880c]
//   XREF to: 02db880c (READ)
// 005de03b: PUSH EDI
// 005de03c: MOV EAX,dword ptr [EBX + 0x304]
// 005de042: PUSH EAX
// 005de043: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005de048: ADD ESP,0x8
// 005de04b: TEST EAX,EAX
// 005de04d: JZ 0x005de081
//   XREF to: 005de081 (CONDITIONAL_JUMP)
// 005de04f: CMP dword ptr [ESP + 0x130],0x0
// 005de057: JNZ 0x005ddd4e
//   XREF to: 005ddd4e (CONDITIONAL_JUMP)
// 005de05d: MOV EDX,dword ptr [EBX + 0x568]
// 005de063: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005de068: INC EDX
// 005de069: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005de06a: MOV dword ptr [EBX + 0x568],EDX
// 005de070: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005de075: ADD ESP,0x4
// 005de078: XOR EAX,EAX
// 005de07a: MOV ESP,EBP
// 005de07c: POP EBP
// 005de07d: POP EDI
// 005de07e: POP ESI
// 005de07f: POP EBX
// 005de080: RET
// 005de081: LEA EAX,[ESP + 0x8]
//   Label: LAB_005de081
// 005de085: PUSH EAX
// 005de086: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005de08b: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005de090: ADD ESP,0x4
// 005de093: MOV EAX,dword ptr [EAX + 0x14d148]
//   XREF to: 032613c0 (READ)
// 005de099: MOV dword ptr [ESP + 0x8],EAX
// 005de09d: PUSH EBX
// 005de09e: MOV EAX,dword ptr [EBX + 0x154]
// 005de0a4: CALL dword ptr [EAX + 0x100]
// 005de0aa: MOV dword ptr [ESP + 0x13c],EAX
// 005de0b1: MOV EDX,0x3ecccccd
// 005de0b6: FLD float ptr [ESP + 0x13c]
// 005de0bd: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005de0c2: ADD ESP,0x4
// 005de0c5: LEA EDI,[EAX + 0x14d11c]
//   XREF to: 03261394 (DATA)
// 005de0cb: MOV dword ptr [ESP + 0x10],EDX
// 005de0cf: FSTP float ptr [ESP + 0xc]
// 005de0d3: FLD float ptr [EDI]
//   XREF to: 03261394 (READ)
// 005de0d5: FSUB float ptr [EAX + 0x14d110]
//   XREF to: 03261388 (READ)
// 005de0db: FSTP float ptr [ESP + 0xfc]
// 005de0e2: FLD float ptr [EDI + 0x4]
//   XREF to: 03261398 (READ)
// 005de0e5: FSUB float ptr [EAX + 0x14d114]
//   XREF to: 0326138c (READ)
// 005de0eb: FST float ptr [ESP + 0x100]
// 005de0f2: FMUL float ptr [ESP + 0x100]
// 005de0f9: FLD float ptr [ESP + 0xfc]
// 005de100: FMUL ST0
// 005de102: FLD float ptr [EDI + 0x8]
//   XREF to: 0326139c (READ)
// 005de105: FSUB float ptr [EAX + 0x14d118]
//   XREF to: 03261390 (READ)
// 005de10b: FXCH
// 005de10d: FADDP ST2,ST0
// 005de10f: FST float ptr [ESP + 0x104]
// 005de116: FMUL float ptr [ESP + 0x104]
// 005de11d: FADDP
// 005de11f: FSQRT
// 005de121: FDIVR double ptr [0x006554e1]
//   XREF to: 006554e1 (READ)
// 005de127: FLD float ptr [ESP + 0xfc]
// 005de12e: FXCH
// 005de130: FSTP float ptr [ESP + 0x120]
// 005de137: FMUL float ptr [ESP + 0x120]
// 005de13e: FLD float ptr [ESP + 0x100]
// 005de145: FMUL float ptr [ESP + 0x120]
// 005de14c: FLD float ptr [ESP + 0x104]
// 005de153: FMUL float ptr [ESP + 0x120]
// 005de15a: LEA EDI,[ESP + 0xe4]
// 005de161: LEA EAX,[ESP + 0x14]
// 005de165: FXCH ST2
// 005de167: FSTP float ptr [ESP + 0xe4]
// 005de16e: FSTP float ptr [ESP + 0xe8]
// 005de175: FSTP float ptr [ESP + 0xec]
// 005de17c: CMP EAX,EDI
// 005de17e: JZ 0x005de1a1
//   XREF to: 005de1a1 (CONDITIONAL_JUMP)
// 005de180: MOV EAX,dword ptr [ESP + 0xe4]
// 005de187: MOV dword ptr [ESP + 0x14],EAX
// 005de18b: MOV EAX,dword ptr [ESP + 0xe8]
// 005de192: MOV dword ptr [ESP + 0x18],EAX
// 005de196: MOV EAX,dword ptr [ESP + 0xec]
// 005de19d: MOV dword ptr [ESP + 0x1c],EAX
// 005de1a1: MOV EAX,[0x006810c8]
//   Label: LAB_005de1a1
//   XREF to: 006810c8 (READ)
// 005de1a6: ADD EAX,0x14d138
// 005de1ab: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 005de1ac: LEA EAX,[ESP + 0x118]
// 005de1b3: PUSH EAX
// 005de1b4: PUSH ESI
// 005de1b5: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005de1ba: MOV EDI,EAX
// 005de1bc: LEA EAX,[ESP + 0x30]
// 005de1c0: ADD ESP,0xc
// 005de1c3: CMP EAX,EDI
// 005de1c5: JZ 0x005de1db
//   XREF to: 005de1db (CONDITIONAL_JUMP)
// 005de1c7: MOV EAX,dword ptr [EDI]
// 005de1c9: MOV dword ptr [ESP + 0x24],EAX
// 005de1cd: MOV EAX,dword ptr [EDI + 0x4]
// 005de1d0: MOV dword ptr [ESP + 0x28],EAX
// 005de1d4: MOV EAX,dword ptr [EDI + 0x8]
// 005de1d7: MOV dword ptr [ESP + 0x2c],EAX
// 005de1db: MOV ECX,0x65
//   Label: LAB_005de1db
// 005de1e0: MOV EAX,dword ptr [EBX + 0x56c]
// 005de1e6: MOV EDI,0x3e19999a
// 005de1eb: MOV dword ptr [ESP + 0x30],EAX
// 005de1ef: MOV dword ptr [ESP + 0x38],ECX
// 005de1f3: MOV dword ptr [ESP + 0x34],EDI
// 005de1f7: MOV dword ptr [ESP + 0x3c],EBX
// 005de1fb: PUSH EBX
// 005de1fc: MOV EAX,dword ptr [EBX + 0x154]
// 005de202: CALL dword ptr [EAX + 0x8c]
// 005de208: ADD ESP,0x4
// 005de20b: MOV dword ptr [ESP + 0x40],EAX
// 005de20f: LEA EAX,[ESP + 0x8]
// 005de213: PUSH EAX
// 005de214: MOV EDI,dword ptr [ESI + 0x154]
// 005de21a: PUSH ESI
// 005de21b: CALL dword ptr [EDI + 0x11c]
// 005de221: MOV EAX,dword ptr [EBX + 0x2e4]
// 005de227: ADD ESP,0x8
// 005de22a: TEST EAX,EAX
// 005de22c: JZ 0x005ddd4e
//   XREF to: 005ddd4e (CONDITIONAL_JUMP)
// 005de232: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005de237: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005de23d: PUSH EDX
// 005de23e: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005de23f: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005de244: ADD ESP,0x8
// 005de247: JMP 0x005de2df
//   XREF to: 005de2df (UNCONDITIONAL_JUMP)
// 005de24c: PUSH ECX
//   Label: LAB_005de24c
// 005de24d: CALL core_glass.cpp_FUN_004eb3a0
//   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
// 005de252: ADD ESP,0x4
// 005de255: TEST EAX,EAX
// 005de257: JZ 0x005ddd4e
//   XREF to: 005ddd4e (CONDITIONAL_JUMP)
// 005de25d: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005de262: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 005de267: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 005de268: MOV ECX,dword ptr [ESP + 0x138]
// 005de26f: PUSH ECX
// 005de270: CALL core_glass.cpp_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 005de275: ADD ESP,0x8
// 005de278: JMP 0x005de2df
//   XREF to: 005de2df (UNCONDITIONAL_JUMP)
// 005de27a: PUSH EDI
//   Label: LAB_005de27a
// 005de27b: CALL core_trigger.cpp_FUN_005e0aa0
//   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)
// 005de280: ADD ESP,0x4
// 005de283: PUSH EBX
// 005de284: PUSH EDI
// 005de285: CALL core_trigger.cpp_FUN_005e0ac0
//   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
// 005de28a: ADD ESP,0x8
// 005de28d: TEST EAX,EAX
// 005de28f: JZ 0x005de2be
//   XREF to: 005de2be (CONDITIONAL_JUMP)
// 005de291: PUSH EBX
// 005de292: MOV EAX,dword ptr [EBX + 0x154]
// 005de298: CALL dword ptr [EAX + 0x100]
// 005de29e: MOV dword ptr [ESP + 0x13c],EAX
// 005de2a5: FLD float ptr [ESP + 0x13c]
// 005de2ac: ADD ESP,0x4
// 005de2af: SUB ESP,0x4
// 005de2b2: FSTP float ptr [ESP]
// 005de2b5: PUSH EDI
// 005de2b6: CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
// 005de2bb: ADD ESP,0x8
// 005de2be: MOV EDI,dword ptr [ESP + 0x128]
//   Label: LAB_005de2be
// 005de2c5: PUSH EDI
// 005de2c6: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005de2cb: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005de2cc: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005de2d1: ADD ESP,0x8
// 005de2d4: JMP 0x005de2df
//   XREF to: 005de2df (UNCONDITIONAL_JUMP)
// 005de2d6: PUSH ESI
//   Label: LAB_005de2d6
// 005de2d7: CALL core_crate.cpp_FUN_00448a70
//   XREF to: 00448a70 (UNCONDITIONAL_CALL)
// 005de2dc: ADD ESP,0x4
// 005de2df: MOV ECX,dword ptr [ESP + 0x130]
//   Label: LAB_005de2df
// 005de2e6: INC ECX
// 005de2e7: MOV dword ptr [ESP + 0x130],ECX
// 005de2ee: CMP ECX,0x4
// 005de2f1: JL 0x005ddd11
//   XREF to: 005ddd11 (CONDITIONAL_JUMP)
// 005de2f7: JMP 0x005ddd4e
//   XREF to: 005ddd4e (UNCONDITIONAL_JUMP)
// 005de2fc: MOV EAX,[0x006810c8]
//   Label: LAB_005de2fc
//   XREF to: 006810c8 (READ)
// 005de301: MOV EDI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 005de307: PUSH EDI
// 005de308: MOV EDX,dword ptr [EAX + 0x14d134]
//   XREF to: 032613ac (READ)
// 005de30e: PUSH EDX
// 005de30f: LEA ESI,[EAX + 0x14d128]
//   XREF to: 032613a0 (DATA)
// 005de315: PUSH ESI
//   XREF to: 032613a0 (DATA)
// 005de316: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 005de31b: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 005de31c: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 005de322: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 005de323: CALL core_fire.cpp_CFireEffect_FUN_004c76a0
//   XREF to: 004c76a0 (UNCONDITIONAL_CALL)
// 005de328: ADD ESP,0x14
// 005de32b: JMP 0x005ddd4e
//   XREF to: 005ddd4e (UNCONDITIONAL_JUMP)
