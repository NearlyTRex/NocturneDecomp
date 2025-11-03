// Name: core_crossbow.cpp_CCrossbow_FUN_00448f20
// Address: 00448f20
// Address Range: [[00448f20, 0044953a]]
// Convention: __cdecl
// Signature: int core_crossbow.cpp_CCrossbow_FUN_00448f20(CCrossbow * this_ptr)
// Globals:
//   TerminatedCString s_bow_wav_00619b86
//   double DOUBLE_00619b92 = 1.5
//   double DOUBLE_00619b9a = 10
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 g_CCharacterClassInfo.name_hash
//   CFireEffect g_CFireEffectInstance
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
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0
//   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_sound.cpp_CSound_FUN_005b3a40
//   core_trigger.cpp_FUN_005e0aa0
//   core_trigger.cpp_FUN_005e0ac0
//   core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   core_weapon.cpp_FUN_005ee6e0

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_FUN_00448f20(CCrossbow *this_ptr)

{
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CBoundingBox3D *volume;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  float fStack00000008;
  CGlass *in_stack_00000034;
  CGlass *in_stack_00000038;
  CDemonActor *in_stack_00000048;
  CBoundingBox3D *out_box;
  double dVar6;
  CBoundingBox3D *in_stack_ffffff54;
  float fStack_a4;
  CVector3f CStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [16];
  CVector3f CStack_64;
  float fStack_58;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pCVar1 = (CVector3f *)
           (*(this_ptr->base_weapon).base_actor.vtable[1].renderOpaque)((CDemonActor *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_64,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    return 0;
  }
  auStack_74._8_4_ = (this_ptr->base_weapon).bolt_velocity;
  auStack_74._0_4_ = 0.0;
  auStack_74._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_8c,(CVector3f *)auStack_74);
  CStack_64.x = fStack_58 + CStack_8c.y;
  CStack_64.y = CStack_54.x + CStack_8c.z;
  CStack_64.z = CStack_54.y + fStack_80;
  fStack_38 = (float)DOUBLE_00619b92 / (this_ptr->base_weapon).bolt_velocity;
  fStack_40 = CStack_8c.y * fStack_38;
  fStack_3c = CStack_8c.z * fStack_38;
  fStack_38 = fStack_80 * fStack_38;
  fStack_7c = fStack_58 - fStack_40;
  fStack_78 = CStack_54.x - fStack_3c;
  auStack_74._0_4_ = CStack_54.y - fStack_38;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  out_box = (CBoundingBox3D *)0x44908c;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar4 = *(CDemonActor **)&(this_ptr->base_weapon).carried_by_actor;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
  }
  fStack00000008 = 0.0;
  do {
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)(auStack_74 + 8),&CStack_54);
    dVar6 = (double)fVar3;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar4 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar4->vtable[1].hasCollision)
                          (pCVar4,(SCollisionInfo *)((ulonglong)dVar6 >> 0x20)), 0 < iVar2)) {
      pCVar4 = (CDemonActor *)0x0;
    }
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      if (in_stack_00000034 == (CGlass *)0x0) {
        if (pCVar5 == (CDemonActor *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     (CVector3f *)&(this_ptr->base_weapon).base_actor.orient,
                     &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_FUN_005e0aa0();
        iVar2 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar2 != 0) {
          (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                    ((CDemonActor *)this_ptr,in_stack_ffffff54);
          fStack_a4 = 6.297431e-39;
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000048);
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(in_stack_00000034);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (in_stack_00000038,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*pCVar4->vtable[1].renderOpaque)(pCVar4);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (fStack_14 == 0.0) {
          (this_ptr->base_weapon).ammo_count = (this_ptr->base_weapon).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff18);
      volume = (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                         ((CDemonActor *)this_ptr,out_box);
      CStack_8c.y = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_8c.z = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_80 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      fStack00000008 =
           (float)DOUBLE_00619b9a /
           SQRT(fStack_80 * fStack_80 + CStack_8c.y * CStack_8c.y + CStack_8c.z * CStack_8c.z);
      fStack_1c = CStack_8c.y * fStack00000008;
      fStack_18 = CStack_8c.z * fStack00000008;
      fStack_14 = fStack_80 * fStack00000008;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar4,(CVector3f *)&stack0xfffffff0,
                          &g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&stack0xffffff50 != pCVar1) {
        in_stack_ffffff54 = (CBoundingBox3D *)pCVar1->y;
      }
      fStack_a4 = (float)(this_ptr->base_weapon).ammo_type;
      CStack_8c.y = (float)(*((this_ptr->base_weapon).base_actor.vtable)->getCarrier)
                                     ((CDemonActor *)this_ptr);
      (*pCVar4->vtable[1].playAmbientSoundWithVolume)(pCVar4,&stack0xffffff40,(float)volume);
      if (*(int *)((this_ptr->base_weapon).field3_0x2d8 + 0xc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    fStack00000008 = (float)((int)fStack00000008 + 1);
  } while ((int)fStack00000008 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < fStack_a4) {
    fStack_a4 = 1.0;
  }
  CStack_64.x = fStack_40 + CStack_54.z * fStack_a4;
  CStack_64.y = fStack_3c + fStack_48 * fStack_a4;
  CStack_64.z = fStack_38 + fStack_44 * fStack_a4;
  core_sound_cpp_CSound_FUN_005b3a40(g_CSoundPtr,(char *)this_ptr,"bow-!.wav");
  (this_ptr->base_weapon).field7_0x2f4[0xc] = -6;
  (this_ptr->base_weapon).field7_0x2f4[0xd] = '~';
  (this_ptr->base_weapon).field7_0x2f4[0xe] = '*';
  (this_ptr->base_weapon).field7_0x2f4[0xf] = '?';
  return 1;
}


// Assembly code:
// 00448f20: PUSH EBX
//   Label: core_crossbow.cpp_CCrossbow_FUN_00448f20
// 00448f21: PUSH ESI
// 00448f22: PUSH EDI
// 00448f23: PUSH EBP
// 00448f24: MOV EBP,ESP
// 00448f26: SUB ESP,0xf0
// 00448f2c: AND ESP,0xfffffff8
// 00448f2f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00448f32: LEA ESI,[ESP + 0xb4]
//   XREF to: Stack[-0x4c] (DATA)
// 00448f39: PUSH ESI
// 00448f3a: MOV EAX,dword ptr [EBX + 0x154]
// 00448f40: PUSH EBX
// 00448f41: CALL dword ptr [EAX + 0xf4]
// 00448f47: ADD ESP,0x8
// 00448f4a: PUSH EAX
// 00448f4b: LEA EAX,[ESP + 0x94]
// 00448f52: PUSH EAX
// 00448f53: PUSH EBX
// 00448f54: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00448f59: ADD ESP,0xc
// 00448f5c: PUSH EBX
// 00448f5d: CALL core_weapon.cpp_FUN_005ee6e0
//   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)
// 00448f62: ADD ESP,0x4
// 00448f65: TEST EAX,EAX
// 00448f67: JNZ 0x00448f70
//   XREF to: 00448f70 (CONDITIONAL_JUMP)
// 00448f69: MOV ESP,EBP
// 00448f6b: POP EBP
// 00448f6c: POP EDI
// 00448f6d: POP ESI
// 00448f6e: POP EBX
// 00448f6f: RET
// 00448f70: MOV EAX,dword ptr [EBX + 0x2e8]
//   Label: LAB_00448f70
// 00448f76: MOV dword ptr [ESP + 0x80],EAX
// 00448f7d: LEA EAX,[ESP + 0x78]
// 00448f81: PUSH EAX
// 00448f82: LEA EAX,[ESP + 0x64]
// 00448f86: PUSH EAX
// 00448f87: XOR EDX,EDX
// 00448f89: PUSH EBX
// 00448f8a: MOV dword ptr [ESP + 0x84],EDX
// 00448f91: MOV dword ptr [ESP + 0x88],EDX
// 00448f98: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00448f9d: ADD ESP,0xc
// 00448fa0: FLD float ptr [ESP + 0x90]
// 00448fa7: FLD float ptr [ESP + 0x94]
// 00448fae: FLD float ptr [ESP + 0x98]
// 00448fb5: FXCH ST2
// 00448fb7: FADD float ptr [ESP + 0x60]
// 00448fbb: FXCH
// 00448fbd: FADD float ptr [ESP + 0x64]
// 00448fc1: FXCH ST2
// 00448fc3: FADD float ptr [ESP + 0x68]
// 00448fc7: FXCH
// 00448fc9: FSTP float ptr [ESP + 0x84]
// 00448fd0: FXCH
// 00448fd2: FSTP float ptr [ESP + 0x88]
// 00448fd9: FSTP float ptr [ESP + 0x8c]
// 00448fe0: FLD float ptr [EBX + 0x2e8]
// 00448fe6: FDIVR double ptr [0x00619b92]
//   XREF to: 00619b92 (READ)
// 00448fec: FLD float ptr [ESP + 0x60]
// 00448ff0: FXCH
// 00448ff2: FSTP float ptr [ESP + 0xd8]
// 00448ff9: FMUL float ptr [ESP + 0xd8]
// 00449000: FLD float ptr [ESP + 0x64]
// 00449004: FMUL float ptr [ESP + 0xd8]
// 0044900b: FLD float ptr [ESP + 0x68]
// 0044900f: FMUL float ptr [ESP + 0xd8]
// 00449016: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0044901c: FLD float ptr [ESP + 0x90]
// 00449023: FLD float ptr [ESP + 0x94]
// 0044902a: FLD float ptr [ESP + 0x98]
// 00449031: PUSH ESI
//   XREF to: 03114278 (DATA)
// 00449032: FXCH ST5
// 00449034: FSTP float ptr [ESP + 0xac]
// 0044903b: FXCH ST3
// 0044903d: FSTP float ptr [ESP + 0xb0]
// 00449044: FXCH
// 00449046: FSTP float ptr [ESP + 0xb4]
// 0044904d: FSUB float ptr [ESP + 0xac]
// 00449054: FXCH
// 00449056: FSUB float ptr [ESP + 0xb0]
// 0044905d: FXCH ST2
// 0044905f: FSUB float ptr [ESP + 0xb4]
// 00449066: FXCH
// 00449068: FSTP float ptr [ESP + 0x70]
// 0044906c: FXCH
// 0044906e: FSTP float ptr [ESP + 0x74]
// 00449072: FSTP float ptr [ESP + 0x78]
// 00449076: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0044907b: ADD ESP,0x4
// 0044907e: PUSH 0x1
// 00449080: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00449086: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00449087: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 0044908c: ADD ESP,0x8
// 0044908f: PUSH EBX
// 00449090: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00449095: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00449096: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0044909b: MOV EDX,dword ptr [EBX + 0x304]
// 004490a1: ADD ESP,0x8
// 004490a4: TEST EDX,EDX
// 004490a6: JNZ 0x004491b1
//   XREF to: 004491b1 (CONDITIONAL_JUMP)
// 004490ac: XOR EDI,EDI
//   Label: LAB_004490ac
// 004490ae: MOV dword ptr [ESP + 0xe0],EDI
// 004490b5: LEA EAX,[ESP + 0x84]
//   Label: LAB_004490b5
// 004490bc: PUSH EAX
// 004490bd: LEA EAX,[ESP + 0x70]
// 004490c1: PUSH EAX
// 004490c2: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004490c7: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004490c8: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 004490cd: MOV dword ptr [ESP + 0xf8],EAX
// 004490d4: FLD float ptr [ESP + 0xf8]
// 004490db: ADD ESP,0xc
// 004490de: FLDZ
// 004490e0: FXCH
// 004490e2: FST float ptr [ESP + 0x8]
// 004490e6: FSTP double ptr [ESP]
// 004490e9: FCOMP double ptr [ESP]
// 004490ec: FNSTSW AX
// 004490ee: SAHF
// 004490ef: JBE 0x004491c6
//   XREF to: 004491c6 (CONDITIONAL_JUMP)
// 004490f5: MOV ESI,dword ptr [0x006810c8]
//   Label: LAB_004490f5
//   XREF to: 006810c8 (READ)
// 004490fb: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004490fc: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 00449101: ADD ESP,0x4
// 00449104: FLD float ptr [ESP + 0x8]
// 00449108: FLD1
// 0044910a: FCOMPP
// 0044910c: FNSTSW AX
// 0044910e: SAHF
// 0044910f: JNC 0x00449119
//   XREF to: 00449119 (CONDITIONAL_JUMP)
// 00449111: MOV dword ptr [ESP + 0x8],0x3f800000
// 00449119: FLD float ptr [ESP + 0x8]
//   Label: LAB_00449119
// 0044911d: FLD float ptr [ESP + 0x60]
// 00449121: FMUL ST1
// 00449123: FLD float ptr [ESP + 0x64]
// 00449127: FMUL ST2
// 00449129: FLD float ptr [ESP + 0x68]
// 0044912d: FMULP ST3
// 0044912f: FLD float ptr [ESP + 0x6c]
// 00449133: FLD float ptr [ESP + 0x70]
// 00449137: LEA EAX,[ESP + 0x90]
// 0044913e: FLD float ptr [ESP + 0x74]
// 00449142: PUSH EAX
// 00449143: FXCH ST4
// 00449145: FSTP float ptr [ESP + 0xa0]
// 0044914c: FXCH ST2
// 0044914e: FSTP float ptr [ESP + 0xa4]
// 00449155: FXCH ST3
// 00449157: FSTP float ptr [ESP + 0xa8]
// 0044915e: PUSH 0x619b86
//   XREF to: 00619b86 (DATA)
// 00449163: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00449168: FXCH ST2
// 0044916a: FADD float ptr [ESP + 0xa4]
// 00449171: FXCH ST2
// 00449173: FADD float ptr [ESP + 0xa8]
// 0044917a: FXCH
// 0044917c: FADD float ptr [ESP + 0xac]
// 00449183: PUSH EBX
// 00449184: FXCH ST2
// 00449186: FSTP float ptr [ESP + 0x54]
// 0044918a: FSTP float ptr [ESP + 0x58]
// 0044918e: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 0044918f: FSTP float ptr [ESP + 0x60]
// 00449193: CALL core_sound.cpp_CSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 00449198: MOV EAX,0x1
// 0044919d: ADD ESP,0x10
// 004491a0: MOV dword ptr [EBX + 0x300],0x3f2a7efa
// 004491aa: MOV ESP,EBP
// 004491ac: POP EBP
// 004491ad: POP EDI
// 004491ae: POP ESI
// 004491af: POP EBX
// 004491b0: RET
// 004491b1: PUSH EDX
//   Label: LAB_004491b1
// 004491b2: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004491b8: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004491b9: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004491be: ADD ESP,0x8
// 004491c1: JMP 0x004490ac
//   XREF to: 004490ac (UNCONDITIONAL_JUMP)
// 004491c6: FLD1
//   Label: LAB_004491c6
// 004491c8: FCOMP double ptr [ESP]
// 004491cb: FNSTSW AX
// 004491cd: SAHF
// 004491ce: JC 0x004490f5
//   XREF to: 004490f5 (CONDITIONAL_JUMP)
// 004491d4: MOV EDX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 004491da: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004491df: PUSH EDX
// 004491e0: MOV ECX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004491e6: PUSH ECX
// 004491e7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004491ec: ADD ESP,0x8
// 004491ef: MOV ESI,EAX
// 004491f1: TEST EAX,EAX
// 004491f3: JZ 0x0044920b
//   XREF to: 0044920b (CONDITIONAL_JUMP)
// 004491f5: PUSH EAX
// 004491f6: MOV EDI,dword ptr [EAX + 0x154]
// 004491fc: CALL dword ptr [EDI + 0x120]
// 00449202: ADD ESP,0x4
// 00449205: TEST EAX,EAX
// 00449207: JLE 0x0044920b
//   XREF to: 0044920b (CONDITIONAL_JUMP)
// 00449209: XOR ESI,ESI
// 0044920b: MOV EDI,dword ptr [0x02d83360]
//   Label: LAB_0044920b
//   XREF to: 02d83360 (READ)
// 00449211: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00449216: PUSH EDI
// 00449217: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0044921d: PUSH EDX
// 0044921e: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00449223: MOV dword ptr [ESP + 0xf0],EAX
// 0044922a: ADD ESP,0x8
// 0044922d: MOV ECX,dword ptr [0x03f87490]
//   XREF to: 03f87490 (READ)
// 00449233: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00449238: PUSH ECX
// 00449239: MOV EDI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 0044923f: PUSH EDI
// 00449240: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00449245: ADD ESP,0x8
// 00449248: MOV EDI,EAX
// 0044924a: MOV dword ptr [ESP + 0xdc],EAX
// 00449251: TEST ESI,ESI
// 00449253: JNZ 0x004492cc
//   XREF to: 004492cc (CONDITIONAL_JUMP)
// 00449255: MOV EAX,dword ptr [ESP + 0xe8]
// 0044925c: TEST EAX,EAX
// 0044925e: JNZ 0x004494c1
//   XREF to: 004494c1 (CONDITIONAL_JUMP)
// 00449264: TEST EDI,EDI
// 00449266: JZ 0x0044950a
//   XREF to: 0044950a (CONDITIONAL_JUMP)
// 0044926c: PUSH EDI
// 0044926d: CALL core_trigger.cpp_FUN_005e0aa0
//   XREF to: 005e0aa0 (UNCONDITIONAL_CALL)
// 00449272: ADD ESP,0x4
// 00449275: PUSH EBX
// 00449276: PUSH EDI
// 00449277: CALL core_trigger.cpp_FUN_005e0ac0
//   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
// 0044927c: ADD ESP,0x8
// 0044927f: TEST EAX,EAX
// 00449281: JZ 0x004492b0
//   XREF to: 004492b0 (CONDITIONAL_JUMP)
// 00449283: PUSH EBX
// 00449284: MOV EAX,dword ptr [EBX + 0x154]
// 0044928a: CALL dword ptr [EAX + 0x100]
// 00449290: MOV dword ptr [ESP + 0xf0],EAX
// 00449297: FLD float ptr [ESP + 0xf0]
// 0044929e: ADD ESP,0x4
// 004492a1: SUB ESP,0x4
// 004492a4: FSTP float ptr [ESP]
// 004492a7: PUSH EDI
// 004492a8: CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
// 004492ad: ADD ESP,0x8
// 004492b0: MOV ESI,dword ptr [ESP + 0xdc]
//   Label: LAB_004492b0
// 004492b7: PUSH ESI
// 004492b8: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004492be: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004492bf: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004492c4: ADD ESP,0x8
// 004492c7: JMP 0x004494ed
//   XREF to: 004494ed (UNCONDITIONAL_JUMP)
// 004492cc: PUSH ESI
//   Label: LAB_004492cc
// 004492cd: MOV EAX,dword ptr [ESI + 0x154]
// 004492d3: CALL dword ptr [EAX + 0xf4]
// 004492d9: ADD ESP,0x4
// 004492dc: TEST EAX,EAX
// 004492de: JZ 0x00449313
//   XREF to: 00449313 (CONDITIONAL_JUMP)
// 004492e0: CMP dword ptr [ESP + 0xe0],0x0
// 004492e8: JNZ 0x004490f5
//   XREF to: 004490f5 (CONDITIONAL_JUMP)
// 004492ee: MOV ECX,dword ptr [EBX + 0x568]
// 004492f4: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004492fa: INC ECX
// 004492fb: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004492fc: MOV dword ptr [EBX + 0x568],ECX
// 00449302: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 00449307: ADD ESP,0x4
// 0044930a: XOR EAX,EAX
// 0044930c: MOV ESP,EBP
// 0044930e: POP EBP
// 0044930f: POP EDI
// 00449310: POP ESI
// 00449311: POP EBX
// 00449312: RET
// 00449313: LEA EAX,[ESP + 0xc]
//   Label: LAB_00449313
// 00449317: PUSH EAX
// 00449318: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0044931d: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00449322: ADD ESP,0x4
// 00449325: MOV EAX,dword ptr [EAX + 0x14d148]
//   XREF to: 032613c0 (READ)
// 0044932b: MOV dword ptr [ESP + 0xc],EAX
// 0044932f: PUSH EBX
// 00449330: MOV EAX,dword ptr [EBX + 0x154]
// 00449336: CALL dword ptr [EAX + 0x100]
// 0044933c: MOV ECX,0x3ecccccd
// 00449341: MOV dword ptr [ESP + 0xf0],EAX
// 00449348: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0044934e: FLD float ptr [ESP + 0xf0]
// 00449355: ADD ESP,0x4
// 00449358: LEA EAX,[EDI + 0x14d11c]
//   XREF to: 03261394 (DATA)
// 0044935e: MOV dword ptr [ESP + 0x14],ECX
// 00449362: FSTP float ptr [ESP + 0x10]
// 00449366: FLD float ptr [EAX]
//   XREF to: 03261394 (READ)
// 00449368: FSUB float ptr [EDI + 0x14d110]
//   XREF to: 03261388 (READ)
// 0044936e: FSTP float ptr [ESP + 0x54]
// 00449372: FLD float ptr [EAX + 0x4]
//   XREF to: 03261398 (READ)
// 00449375: FSUB float ptr [EDI + 0x14d114]
//   XREF to: 0326138c (READ)
// 0044937b: FST float ptr [ESP + 0x58]
// 0044937f: FMUL float ptr [ESP + 0x58]
// 00449383: FLD float ptr [ESP + 0x54]
// 00449387: FMUL ST0
// 00449389: FLD float ptr [EAX + 0x8]
//   XREF to: 0326139c (READ)
// 0044938c: FSUB float ptr [EDI + 0x14d118]
//   XREF to: 03261390 (READ)
// 00449392: FXCH
// 00449394: FADDP ST2,ST0
// 00449396: FST float ptr [ESP + 0x5c]
// 0044939a: FMUL float ptr [ESP + 0x5c]
// 0044939e: FADDP
// 004493a0: FSQRT
// 004493a2: FDIVR double ptr [0x00619b9a]
//   XREF to: 00619b9a (READ)
// 004493a8: FLD float ptr [ESP + 0x54]
// 004493ac: FXCH
// 004493ae: FSTP float ptr [ESP + 0xe4]
// 004493b5: FMUL float ptr [ESP + 0xe4]
// 004493bc: FLD float ptr [ESP + 0x58]
// 004493c0: FMUL float ptr [ESP + 0xe4]
// 004493c7: FLD float ptr [ESP + 0x5c]
// 004493cb: FMUL float ptr [ESP + 0xe4]
// 004493d2: LEA EDI,[ESP + 0xc0]
// 004493d9: LEA EAX,[ESP + 0x18]
// 004493dd: FXCH ST2
// 004493df: FSTP float ptr [ESP + 0xc0]
// 004493e6: FSTP float ptr [ESP + 0xc4]
// 004493ed: FSTP float ptr [ESP + 0xc8]
// 004493f4: CMP EAX,EDI
// 004493f6: JZ 0x00449419
//   XREF to: 00449419 (CONDITIONAL_JUMP)
// 004493f8: MOV EAX,dword ptr [ESP + 0xc0]
// 004493ff: MOV dword ptr [ESP + 0x18],EAX
// 00449403: MOV EAX,dword ptr [ESP + 0xc4]
// 0044940a: MOV dword ptr [ESP + 0x1c],EAX
// 0044940e: MOV EAX,dword ptr [ESP + 0xc8]
// 00449415: MOV dword ptr [ESP + 0x20],EAX
// 00449419: MOV EAX,[0x006810c8]
//   Label: LAB_00449419
//   XREF to: 006810c8 (READ)
// 0044941e: ADD EAX,0x14d138
// 00449423: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 00449424: LEA EAX,[ESP + 0xd0]
// 0044942b: PUSH EAX
// 0044942c: PUSH ESI
// 0044942d: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00449432: MOV EDI,EAX
// 00449434: LEA EAX,[ESP + 0x34]
// 00449438: ADD ESP,0xc
// 0044943b: CMP EAX,EDI
// 0044943d: JZ 0x00449453
//   XREF to: 00449453 (CONDITIONAL_JUMP)
// 0044943f: MOV EAX,dword ptr [EDI]
// 00449441: MOV dword ptr [ESP + 0x28],EAX
// 00449445: MOV EAX,dword ptr [EDI + 0x4]
// 00449448: MOV dword ptr [ESP + 0x2c],EAX
// 0044944c: MOV EAX,dword ptr [EDI + 0x8]
// 0044944f: MOV dword ptr [ESP + 0x30],EAX
// 00449453: MOV EAX,dword ptr [EBX + 0x56c]
//   Label: LAB_00449453
// 00449459: MOV EDI,0x68
// 0044945e: MOV dword ptr [ESP + 0x34],EAX
// 00449462: MOV dword ptr [ESP + 0x3c],EDI
// 00449466: MOV EAX,0x3e19999a
// 0044946b: MOV dword ptr [ESP + 0x40],EBX
// 0044946f: MOV dword ptr [ESP + 0x38],EAX
// 00449473: PUSH EBX
// 00449474: MOV EAX,dword ptr [EBX + 0x154]
// 0044947a: CALL dword ptr [EAX + 0x8c]
// 00449480: ADD ESP,0x4
// 00449483: LEA EDI,[ESP + 0xc]
// 00449487: PUSH EDI
// 00449488: MOV dword ptr [ESP + 0x48],EAX
// 0044948c: PUSH ESI
// 0044948d: MOV EAX,dword ptr [ESI + 0x154]
// 00449493: CALL dword ptr [EAX + 0x11c]
// 00449499: MOV EDX,dword ptr [EBX + 0x2e4]
// 0044949f: ADD ESP,0x8
// 004494a2: TEST EDX,EDX
// 004494a4: JZ 0x004490f5
//   XREF to: 004490f5 (CONDITIONAL_JUMP)
// 004494aa: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004494af: MOV ECX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004494b5: PUSH ECX
// 004494b6: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004494b7: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004494bc: ADD ESP,0x8
// 004494bf: JMP 0x004494ed
//   XREF to: 004494ed (UNCONDITIONAL_JUMP)
// 004494c1: PUSH EAX
//   Label: LAB_004494c1
// 004494c2: CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
// 004494c7: ADD ESP,0x4
// 004494ca: TEST EAX,EAX
// 004494cc: JZ 0x004490f5
//   XREF to: 004490f5 (CONDITIONAL_JUMP)
// 004494d2: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004494d7: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 004494dc: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 004494dd: MOV EDX,dword ptr [ESP + 0xec]
// 004494e4: PUSH EDX
// 004494e5: CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 004494ea: ADD ESP,0x8
// 004494ed: MOV ESI,dword ptr [ESP + 0xe0]
//   Label: LAB_004494ed
// 004494f4: INC ESI
// 004494f5: MOV dword ptr [ESP + 0xe0],ESI
// 004494fc: CMP ESI,0x4
// 004494ff: JL 0x004490b5
//   XREF to: 004490b5 (CONDITIONAL_JUMP)
// 00449505: JMP 0x004490f5
//   XREF to: 004490f5 (UNCONDITIONAL_JUMP)
// 0044950a: MOV EAX,[0x006810c8]
//   Label: LAB_0044950a
//   XREF to: 006810c8 (READ)
// 0044950f: MOV EDX,dword ptr [EAX + 0x14d134]
//   XREF to: 032613ac (READ)
// 00449515: PUSH EDX
// 00449516: LEA ESI,[EAX + 0x14d128]
//   XREF to: 032613a0 (DATA)
// 0044951c: PUSH ESI
//   XREF to: 032613a0 (DATA)
// 0044951d: LEA ESI,[EBX + 0x30]
// 00449520: PUSH ESI
// 00449521: ADD EAX,0x14d138
//   XREF to: 032613b0 (PARAM)
// 00449526: PUSH EAX
//   XREF to: 032613b0 (DATA)
// 00449527: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0044952d: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 0044952e: CALL core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0
//   XREF to: 004c7bb0 (UNCONDITIONAL_CALL)
// 00449533: ADD ESP,0x14
// 00449536: JMP 0x004490f5
//   XREF to: 004490f5 (UNCONDITIONAL_JUMP)
