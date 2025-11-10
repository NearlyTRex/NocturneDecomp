// Name: core_dracbrid.cpp_FUN_00486070
// Address: 00486070
// Address Range: [[00486070, 004862ec]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486070()
// Globals:
//   TerminatedCString s_bride_launch_wav_00621bf6
//   TerminatedCString s_bride_die_wav_00621c07
//   TerminatedCString s_bride_hurt_wav_00621c16
//   double DOUBLE_00621c26 = 2
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_FUN_0042b5b0
//   core_dracbrid.cpp_FUN_004864c0
//   core_dracbrid.cpp_ShotThruHeart_FUN_00486020
//   core_enemy.cpp_FUN_004a9f10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00486070(undefined4 param_1, undefined4
   param_2) */

void core_dracbrid_cpp_FUN_00486070(void)

{
  float fVar1;
  bool bVar2;
  CVector3f *input_local_point;
  SMotion *pSVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CDeformableModelInstance *pCVar5;
  CDeformableModelInstance *this_ptr;
  CVector3f aCStack_28 [2];
  
  bVar2 = false;
  if (*(int *)((int)in_stack_00000008 + 0x28) == 7) {
    iVar4 = 0;
    *(float *)((int)in_stack_00000008 + 4) =
         *(float *)((int)in_stack_00000008 + 4) * (float)DOUBLE_00621c26;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffd0,
               (CVector3f *)((int)in_stack_00000008 + 0x1c));
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar4 < 5);
    bVar2 = true;
  }
  if (*(int *)((int)in_stack_00000008 + 0x30) == 0x68) {
    bVar2 = true;
  }
  if (*(int *)((int)in_stack_00000008 + 0x30) == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&in_stack_00000004->model,(CVector3f *)&stack0xffffffc8,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,aCStack_28,input_local_point);
    core_charactr_cpp_CCharacter_FUN_0042b5b0(in_stack_00000004);
  }
  core_dracbrid_cpp_ShotThruHeart_FUN_00486020();
  fVar1 = in_stack_00000004->hit_points - *(float *)((int)in_stack_00000008 + 4);
  pCVar5 = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar5->motion_controller);
    iVar4 = pSVar3->state_index;
    if ((((iVar4 != 0x11) && (iVar4 != 0x10)) && (iVar4 != 10)) && (iVar4 != 7)) {
      if (bVar2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,7,1);
        (*((in_stack_00000004->base_actor).vtable)->playAmbientSound)
                  (&in_stack_00000004->base_actor,"bride-launch.wav");
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,10,1);
      }
    }
    iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
    if (iVar4 != 0) {
      aCStack_28[0].x = 2.0;
      core_dracbrid_cpp_FUN_004864c0();
      aCStack_28[0].y = in_stack_00000008;
      aCStack_28[0].x = (float)in_stack_00000004;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
    goto LAB_0048616e;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar5->motion_controller);
  iVar4 = pSVar3->state_index;
  if (((iVar4 == 8) || (iVar4 == 9)) || (iVar4 == 2)) {
    this_ptr = (CDeformableModelInstance *)&DAT_00000001;
    pCVar5 = (CDeformableModelInstance *)&DAT_00000001;
LAB_00486225:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)0x486231,(int)pCVar5,(int)this_ptr);
  }
  else if (((iVar4 == 0) || (iVar4 == 0xe)) ||
          (((iVar4 == 0x13 || (((iVar4 == 0xc || (iVar4 == 0x12)) || (iVar4 == 0x14)))) ||
           (iVar4 == 0x15)))) {
    this_ptr = (CDeformableModelInstance *)&DAT_00000002;
    pCVar5 = (CDeformableModelInstance *)0x0;
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar4 == 0) {
      this_ptr = (CDeformableModelInstance *)&DAT_00000004;
      pCVar5 = &in_stack_00000004->model;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar5->motion_controller,4,1)
      ;
    }
    if (iVar4 == 1) {
      this_ptr = &in_stack_00000004->model;
      pCVar5 = (CDeformableModelInstance *)0x4862ba;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,5,1);
    }
    if (iVar4 == 2) goto LAB_00486225;
  }
  iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
  if (iVar4 != 0) {
    aCStack_28[0].x = 2.0;
    core_dracbrid_cpp_FUN_004864c0();
    aCStack_28[0].y = in_stack_00000008;
    aCStack_28[0].x = (float)in_stack_00000004;
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
LAB_0048616e:
  aCStack_28[0].x = in_stack_00000008;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00486070: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00486070
// 00486071: PUSH ESI
// 00486072: PUSH EDI
// 00486073: PUSH EBP
// 00486074: SUB ESP,0x2c
// 00486077: MOV ESI,dword ptr [ESP + 0x40]
// 0048607b: MOV EDI,dword ptr [ESP + 0x44]
// 0048607f: MOV EDX,dword ptr [EDI + 0x28]
// 00486082: XOR EBP,EBP
// 00486084: CMP EDX,0x7
// 00486087: JZ 0x00486180
//   XREF to: 00486180 (CONDITIONAL_JUMP)
// 0048608d: CMP dword ptr [EDI + 0x30],0x68
//   Label: LAB_0048608d
// 00486091: JNZ 0x00486098
//   XREF to: 00486098 (CONDITIONAL_JUMP)
// 00486093: MOV EBP,0x1
// 00486098: CMP dword ptr [EDI + 0x30],0x6c
//   Label: LAB_00486098
// 0048609c: JNZ 0x004860dc
//   XREF to: 004860dc (CONDITIONAL_JUMP)
// 0048609e: PUSH 0x0
// 004860a0: LEA EAX,[ESP + 0x4]
// 004860a4: PUSH EAX
// 004860a5: LEA EAX,[ESI + 0x158]
// 004860ab: PUSH EAX
// 004860ac: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004860b1: ADD ESP,0xc
// 004860b4: PUSH EAX
// 004860b5: LEA EAX,[ESP + 0x1c]
// 004860b9: PUSH EAX
// 004860ba: PUSH ESI
// 004860bb: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004860c0: ADD ESP,0xc
// 004860c3: PUSH 0x0
// 004860c5: PUSH 0x41200000
// 004860ca: PUSH 0x0
// 004860cc: PUSH 0x0
// 004860ce: LEA EAX,[ESP + 0x28]
// 004860d2: PUSH EAX
// 004860d3: PUSH ESI
// 004860d4: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 004860d9: ADD ESP,0x18
// 004860dc: PUSH EDI
//   Label: LAB_004860dc
// 004860dd: PUSH ESI
// 004860de: CALL core_dracbrid.cpp_ShotThruHeart_FUN_00486020
//   XREF to: 00486020 (UNCONDITIONAL_CALL)
// 004860e3: FLD float ptr [EDI + 0x4]
// 004860e6: ADD ESP,0x8
// 004860e9: FSUBR float ptr [ESI + 0x243c]
// 004860ef: LEA EBX,[ESI + 0x158]
// 004860f5: FST float ptr [ESI + 0x243c]
// 004860fb: FLDZ
// 004860fd: FCOMPP
// 004860ff: FNSTSW AX
// 00486101: SAHF
// 00486102: JC 0x00486210
//   XREF to: 00486210 (CONDITIONAL_JUMP)
// 00486108: PUSH EBX
// 00486109: MOV dword ptr [ESI + 0x243c],0x0
// 00486113: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00486118: MOV EAX,dword ptr [EAX + 0x24]
// 0048611b: ADD ESP,0x4
// 0048611e: CMP EAX,0x11
// 00486121: JZ 0x00486159
//   XREF to: 00486159 (CONDITIONAL_JUMP)
// 00486123: CMP EAX,0x10
// 00486126: JZ 0x00486159
//   XREF to: 00486159 (CONDITIONAL_JUMP)
// 00486128: CMP EAX,0xa
// 0048612b: JZ 0x00486159
//   XREF to: 00486159 (CONDITIONAL_JUMP)
// 0048612d: CMP EAX,0x7
// 00486130: JZ 0x00486159
//   XREF to: 00486159 (CONDITIONAL_JUMP)
// 00486132: TEST EBP,EBP
// 00486134: JZ 0x004861d9
//   XREF to: 004861d9 (CONDITIONAL_JUMP)
// 0048613a: PUSH 0x1
// 0048613c: PUSH 0x7
// 0048613e: PUSH EBX
// 0048613f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00486144: ADD ESP,0xc
// 00486147: PUSH 0x621bf6
//   XREF to: 00621bf6 (DATA)
// 0048614c: MOV EAX,dword ptr [ESI + 0x154]
// 00486152: PUSH ESI
// 00486153: CALL dword ptr [EAX + 0x28]
// 00486156: ADD ESP,0x8
// 00486159: PUSH 0x3ecccccd
//   Label: LAB_00486159
// 0048615e: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00486163: ADD ESP,0x4
// 00486166: TEST EAX,EAX
// 00486168: JNZ 0x004861eb
//   XREF to: 004861eb (CONDITIONAL_JUMP)
// 0048616e: PUSH EDI
//   Label: LAB_0048616e
// 0048616f: PUSH ESI
// 00486170: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00486175: ADD ESP,0x8
// 00486178: ADD ESP,0x2c
// 0048617b: POP EBP
// 0048617c: POP EDI
// 0048617d: POP ESI
// 0048617e: POP EBX
// 0048617f: RET
// 00486180: FLD float ptr [EDI + 0x4]
//   Label: LAB_00486180
// 00486183: LEA EAX,[EDI + 0x1c]
// 00486186: FLD ST0
// 00486188: FMUL double ptr [0x00621c26]
//   XREF to: 00621c26 (READ)
// 0048618e: PUSH EAX
// 0048618f: LEA EAX,[ESP + 0x10]
// 00486193: XOR EBX,EBX
// 00486195: PUSH EAX
// 00486196: FSTP ST1
// 00486198: PUSH ESI
// 00486199: FSTP float ptr [EDI + 0x4]
// 0048619c: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004861a1: ADD ESP,0xc
// 004861a4: PUSH 0xffff
//   Label: LAB_004861a4
// 004861a9: PUSH EBP
// 004861aa: PUSH 0x4000
// 004861af: PUSH 0x4000
// 004861b4: PUSH EBP
// 004861b5: LEA EAX,[ESP + 0x20]
// 004861b9: PUSH EAX
// 004861ba: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004861c0: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004861c1: INC EBX
// 004861c2: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004861c7: ADD ESP,0x1c
// 004861ca: CMP EBX,0x5
// 004861cd: JL 0x004861a4
//   XREF to: 004861a4 (CONDITIONAL_JUMP)
// 004861cf: MOV EBP,0x1
// 004861d4: JMP 0x0048608d
//   XREF to: 0048608d (UNCONDITIONAL_JUMP)
// 004861d9: PUSH 0x1
//   Label: LAB_004861d9
// 004861db: PUSH 0xa
// 004861dd: PUSH EBX
// 004861de: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004861e3: ADD ESP,0xc
// 004861e6: JMP 0x00486159
//   XREF to: 00486159 (UNCONDITIONAL_JUMP)
// 004861eb: PUSH 0x40000000
//   Label: LAB_004861eb
// 004861f0: PUSH 0x621c07
//   XREF to: 00621c07 (DATA)
// 004861f5: PUSH ESI
// 004861f6: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 004861fb: ADD ESP,0xc
// 004861fe: PUSH EDI
// 004861ff: PUSH ESI
// 00486200: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00486205: ADD ESP,0x8
// 00486208: ADD ESP,0x2c
// 0048620b: POP EBP
// 0048620c: POP EDI
// 0048620d: POP ESI
// 0048620e: POP EBX
// 0048620f: RET
// 00486210: PUSH EBX
//   Label: LAB_00486210
// 00486211: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00486216: MOV EAX,dword ptr [EAX + 0x24]
// 00486219: ADD ESP,0x4
// 0048621c: CMP EAX,0x8
// 0048621f: JNZ 0x0048626e
//   XREF to: 0048626e (CONDITIONAL_JUMP)
// 00486221: PUSH 0x1
//   Label: LAB_00486221
// 00486223: PUSH 0x1
// 00486225: LEA EAX,[ESI + 0x158]
//   Label: LAB_00486225
// 0048622b: PUSH EAX
// 0048622c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00486231: ADD ESP,0xc
// 00486234: PUSH 0x3ecccccd
//   Label: LAB_00486234
// 00486239: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0048623e: ADD ESP,0x4
// 00486241: TEST EAX,EAX
// 00486243: JZ 0x0048616e
//   XREF to: 0048616e (CONDITIONAL_JUMP)
// 00486249: PUSH 0x40000000
// 0048624e: PUSH 0x621c16
//   XREF to: 00621c16 (DATA)
// 00486253: PUSH ESI
// 00486254: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 00486259: ADD ESP,0xc
// 0048625c: PUSH EDI
// 0048625d: PUSH ESI
// 0048625e: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00486263: ADD ESP,0x8
// 00486266: ADD ESP,0x2c
// 00486269: POP EBP
// 0048626a: POP EDI
// 0048626b: POP ESI
// 0048626c: POP EBX
// 0048626d: RET
// 0048626e: CMP EAX,0x9
//   Label: LAB_0048626e
// 00486271: JZ 0x00486221
//   XREF to: 00486221 (CONDITIONAL_JUMP)
// 00486273: CMP EAX,0x2
// 00486276: JZ 0x00486221
//   XREF to: 00486221 (CONDITIONAL_JUMP)
// 00486278: TEST EAX,EAX
// 0048627a: JZ 0x00486281
//   XREF to: 00486281 (CONDITIONAL_JUMP)
// 0048627c: CMP EAX,0xe
// 0048627f: JNZ 0x004862cf
//   XREF to: 004862cf (CONDITIONAL_JUMP)
// 00486281: PUSH 0x2
//   Label: LAB_00486281
// 00486283: PUSH 0x0
// 00486285: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 0048628a: ADD ESP,0x8
// 0048628d: MOV EBX,EAX
// 0048628f: TEST EAX,EAX
// 00486291: JNZ 0x004862a6
//   XREF to: 004862a6 (CONDITIONAL_JUMP)
// 00486293: PUSH 0x1
// 00486295: PUSH 0x4
// 00486297: LEA EAX,[ESI + 0x158]
// 0048629d: PUSH EAX
// 0048629e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004862a3: ADD ESP,0xc
// 004862a6: CMP EBX,0x1
//   Label: LAB_004862a6
// 004862a9: JNZ 0x004862bd
//   XREF to: 004862bd (CONDITIONAL_JUMP)
// 004862ab: PUSH EBX
// 004862ac: PUSH 0x5
// 004862ae: LEA EAX,[ESI + 0x158]
// 004862b4: PUSH EAX
// 004862b5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004862ba: ADD ESP,0xc
// 004862bd: CMP EBX,0x2
//   Label: LAB_004862bd
// 004862c0: JNZ 0x00486234
//   XREF to: 00486234 (CONDITIONAL_JUMP)
// 004862c6: PUSH 0x1
// 004862c8: PUSH 0x6
// 004862ca: JMP 0x00486225
//   XREF to: 00486225 (UNCONDITIONAL_JUMP)
// 004862cf: CMP EAX,0x13
//   Label: LAB_004862cf
// 004862d2: JZ 0x00486281
//   XREF to: 00486281 (CONDITIONAL_JUMP)
// 004862d4: CMP EAX,0xc
// 004862d7: JZ 0x00486281
//   XREF to: 00486281 (CONDITIONAL_JUMP)
// 004862d9: CMP EAX,0x12
// 004862dc: JZ 0x00486281
//   XREF to: 00486281 (CONDITIONAL_JUMP)
// 004862de: CMP EAX,0x14
// 004862e1: JZ 0x00486281
//   XREF to: 00486281 (CONDITIONAL_JUMP)
// 004862e3: CMP EAX,0x15
// 004862e6: JZ 0x00486281
//   XREF to: 00486281 (CONDITIONAL_JUMP)
// 004862e8: JMP 0x00486234
//   XREF to: 00486234 (UNCONDITIONAL_JUMP)
