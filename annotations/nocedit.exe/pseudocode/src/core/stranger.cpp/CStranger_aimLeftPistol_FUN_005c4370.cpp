// Name: core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370
// Address: 005c4370
// Address Range: [[005c4370, 005c48ae]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc390 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\stranger.cpp_00653cd4
//   TerminatedCString s_CStranger_aimLeftPistol__00653ce9
//   undefined4 DAT_00653d14
//   undefined4 DAT_00663770
//   undefined4 DAT_00663774
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03f6bad8
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_FUN_0040cd70
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_math.c_acos_FUN_00600162

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_aimLeftPistol(CStranger* param_1) */

void core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(void)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  double dVar2;
  CDemonActor *in_stack_00000004;
  float fStack_bc;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float local_9c;
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CVector3f CStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (in_stack_00000004[0x17a].orient_matrix.m[0].x == 0.0) {
    g_CurrentFilename = "$@..\\core\\stranger.cpp" + 2;
    g_CurrentLineNumber = 0x10c0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::aimLeftPistol - no weapon?");
  }
  (**(code **)(*(int *)((int)in_stack_00000004[0x17a].orient_matrix.m[0].x + 0x154) + 0xf4))();
  fStack_24 = -1.3089969;
  fStack_2c = 0.5235988;
  core_actor_cpp_CDemonActor_FUN_00408ec0
            ((CDemonActor *)in_stack_00000004[0x17a].orient_matrix.m[0].x);
  uStack_3c = 0;
  fStack_38 = 0.0;
  uStack_34 = 0x447a0000;
  core_actor_cpp_CDemonActor_FUN_00408e80
            ((CDemonActor *)in_stack_00000004[0x17a].orient_matrix.m[0].x);
  CStack_90.x = CStack_a8.x + fStack_84;
  CStack_90.y = CStack_a8.y + fStack_80;
  CStack_90.z = CStack_a8.z + fStack_7c;
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270
            (g_CDemonSetPtr,1.4013e-45,3.57331e-43,0.0,0.0);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
            (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004[0x17a].orient_matrix.m[0].x);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  fStack_bc = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_a8,&CStack_90)
  ;
  fStack_14 = fStack_bc;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if ((fStack_bc < 0.0) || (1.0 < fStack_bc)) {
    fStack_bc = 1.0;
  }
  fStack_48 = fStack_84 * fStack_bc;
  fStack_44 = fStack_80 * fStack_bc;
  fStack_40 = fStack_7c * fStack_bc;
  CStack_b4.x = CStack_a8.x + fStack_48;
  CStack_b4.y = CStack_a8.y + fStack_44;
  CStack_b4.z = CStack_a8.z + fStack_40;
  if (&CStack_90 != &CStack_b4) {
    CStack_90.x = CStack_b4.x;
    CStack_90.y = CStack_b4.y;
    CStack_90.z = CStack_b4.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
  core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004);
  CStack_78.x = fStack_60 - fStack_6c;
  CStack_78.y = fStack_5c - fStack_68;
  CStack_78.z = fStack_58 - fStack_64;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_54,&CStack_78);
  fVar1 = SQRT(CStack_78.z * CStack_78.z + CStack_78.x * CStack_78.x + CStack_78.y * CStack_78.y);
  if ((float)_DAT_00653d14 < fVar1) {
    fStack_20 = -local_9c;
    if ((((float)_DAT_00653d14 <= fVar1) &&
        (dVar2 = (double)(SQRT(fVar1 * fVar1 - fStack_20 * fStack_20) / fVar1), dVar2 < 1.0)) &&
       (0.0 <= dVar2)) {
      dVar2 = crt_math_c_acos_FUN_00600162(dVar2);
      fStack_2c = (float)dVar2;
      if (0.0 <= fStack_24) {
        CStack_54.x = CStack_54.x + fStack_2c;
      }
      else {
        CStack_54.x = CStack_54.x - fStack_2c;
      }
      CStack_54.x = core_actor_cpp_FUN_0040cd70(CStack_54.x);
      fStack_18 = CStack_54.x;
    }
    if ((((float)_DAT_00653d14 <= fStack_bc) &&
        (dVar2 = (double)(SQRT(fStack_bc * fStack_bc - local_9c * local_9c) / fStack_bc),
        dVar2 < 1.0)) && (0.0 <= dVar2)) {
      dVar2 = crt_math_c_acos_FUN_00600162(dVar2);
      fStack_38 = (float)dVar2;
      if (0.0 <= CStack_a8.z) {
        fStack_5c = fStack_5c + fStack_38;
      }
      else {
        fStack_5c = fStack_5c - fStack_38;
      }
      core_actor_cpp_FUN_0040cd70(fStack_5c);
    }
  }
  fStack_1c = CStack_54.x;
  fStack_20 = fStack_58;
  if (fStack_58 < DAT_00663770) {
    fStack_20 = DAT_00663770;
  }
  if (DAT_00663774 < fStack_20) {
    fStack_20 = DAT_00663774;
  }
  if (CStack_54.x < fStack_28) {
    fStack_1c = fStack_28;
  }
  if (fStack_30 < fStack_1c) {
    fStack_1c = fStack_30;
  }
  in_stack_00000004[0x17a].location.area_id = 0x3f800000;
  in_stack_00000004[0x17a].location.position.y = fStack_1c;
  in_stack_00000004[0x17a].location.position.x = fStack_20;
  *(float *)(in_stack_00000004[0x17a].actor_name + 0x1c) = fStack_1c;
  *(float *)(in_stack_00000004[0x17a].actor_name + 0x18) = fStack_20;
  return;
}


// Assembly code:
// 005c4370: PUSH EBX
//   Label: core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370
// 005c4371: PUSH ESI
// 005c4372: PUSH EDI
// 005c4373: PUSH EBP
// 005c4374: MOV EBP,ESP
// 005c4376: SUB ESP,0xd8
// 005c437c: AND ESP,0xfffffff8
// 005c437f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4382: CMP dword ptr [EBX + 0x1fc2c],0x0
// 005c4389: JZ 0x005c4715
//   XREF to: 005c4715 (CONDITIONAL_JUMP)
// 005c438f: LEA EDX,[ESP + 0x4c]
//   Label: LAB_005c438f
//   XREF to: Stack[-0x9c] (DATA)
// 005c4393: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c4399: PUSH EDX
// 005c439a: MOV ESI,dword ptr [EAX + 0x154]
// 005c43a0: PUSH EAX
// 005c43a1: CALL dword ptr [ESI + 0xf4]
// 005c43a7: MOV EAX,0xbfa78d36
// 005c43ac: ADD ESP,0x8
// 005c43af: MOV dword ptr [ESP + 0xc4],EAX
// 005c43b6: LEA EAX,[ESP + 0x4c]
// 005c43ba: PUSH EAX
// 005c43bb: LEA EAX,[ESP + 0x44]
// 005c43bf: PUSH EAX
// 005c43c0: MOV ECX,dword ptr [EBX + 0x1fc2c]
// 005c43c6: MOV EDX,0x3f060a92
// 005c43cb: PUSH ECX
// 005c43cc: MOV EDI,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005c43d2: MOV dword ptr [ESP + 0xc8],EDX
// 005c43d9: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c43de: ADD ESP,0xc
// 005c43e1: XOR EAX,EAX
// 005c43e3: MOV dword ptr [ESP + 0xac],EAX
// 005c43ea: MOV dword ptr [ESP + 0xb0],EAX
// 005c43f1: LEA EAX,[ESP + 0xac]
// 005c43f8: MOV ECX,0x447a0000
// 005c43fd: PUSH EAX
// 005c43fe: LEA EAX,[ESP + 0x68]
// 005c4402: MOV dword ptr [ESP + 0xb8],ECX
// 005c4409: PUSH EAX
// 005c440a: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c4410: PUSH EAX
// 005c4411: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005c4416: ADD ESP,0xc
// 005c4419: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c441f: FLD float ptr [ESP + 0x40]
// 005c4423: FLD float ptr [ESP + 0x44]
// 005c4427: PUSH 0x0
// 005c4429: FLD float ptr [ESP + 0x4c]
// 005c442d: PUSH 0x0
// 005c442f: FXCH ST2
// 005c4431: FADD float ptr [ESP + 0x6c]
// 005c4435: FXCH
// 005c4437: FADD float ptr [ESP + 0x70]
// 005c443b: FXCH ST2
// 005c443d: FADD float ptr [ESP + 0x74]
// 005c4441: PUSH 0xff
// 005c4446: FXCH
// 005c4448: FSTP float ptr [ESP + 0x64]
// 005c444c: PUSH 0x1
// 005c444e: FXCH
// 005c4450: FSTP float ptr [ESP + 0x6c]
// 005c4454: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005c4455: FSTP float ptr [ESP + 0x74]
// 005c4459: CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
//   XREF to: 00574270 (UNCONDITIONAL_CALL)
// 005c445e: ADD ESP,0x14
// 005c4461: MOV ECX,dword ptr [EBX + 0x1fc2c]
// 005c4467: PUSH ECX
// 005c4468: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c446d: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005c446e: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c4473: ADD ESP,0x8
// 005c4476: LEA ESI,[EBX + 0x1fc08]
// 005c447c: PUSH EBX
// 005c447d: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c4483: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005c4484: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c4489: ADD ESP,0x8
// 005c448c: LEA EAX,[ESP + 0x58]
// 005c4490: PUSH EAX
// 005c4491: LEA EAX,[ESP + 0x44]
// 005c4495: PUSH EAX
// 005c4496: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c449c: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005c449d: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 005c44a2: MOV dword ptr [ESP + 0xe0],EAX
// 005c44a9: FLD float ptr [ESP + 0xe0]
// 005c44b0: ADD ESP,0xc
// 005c44b3: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c44b8: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005c44b9: FSTP float ptr [ESP + 0x30]
// 005c44bd: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c44c2: ADD ESP,0x4
// 005c44c5: FLDZ
// 005c44c7: FLD float ptr [ESP + 0x2c]
// 005c44cb: FSTP double ptr [ESP + 0x18]
// 005c44cf: FCOMP double ptr [ESP + 0x18]
// 005c44d3: FNSTSW AX
// 005c44d5: SAHF
// 005c44d6: JBE 0x005c473d
//   XREF to: 005c473d (CONDITIONAL_JUMP)
// 005c44dc: MOV dword ptr [ESP + 0x2c],0x3f800000
//   Label: LAB_005c44dc
// 005c44e4: FLD float ptr [ESP + 0x2c]
//   Label: LAB_005c44e4
// 005c44e8: FLD float ptr [ESP + 0x64]
// 005c44ec: FMUL ST1
// 005c44ee: FLD float ptr [ESP + 0x68]
// 005c44f2: FMUL ST2
// 005c44f4: FLD float ptr [ESP + 0x6c]
// 005c44f8: FMULP ST3
// 005c44fa: FLD float ptr [ESP + 0x40]
// 005c44fe: FLD float ptr [ESP + 0x44]
// 005c4502: FLD float ptr [ESP + 0x48]
// 005c4506: LEA EAX,[ESP + 0x34]
// 005c450a: LEA EDX,[ESP + 0x58]
// 005c450e: FXCH ST4
// 005c4510: FSTP float ptr [ESP + 0xa0]
// 005c4517: FXCH ST2
// 005c4519: FSTP float ptr [ESP + 0xa4]
// 005c4520: FXCH ST3
// 005c4522: FSTP float ptr [ESP + 0xa8]
// 005c4529: FXCH ST2
// 005c452b: FADD float ptr [ESP + 0xa0]
// 005c4532: FXCH ST2
// 005c4534: FADD float ptr [ESP + 0xa4]
// 005c453b: FXCH
// 005c453d: FADD float ptr [ESP + 0xa8]
// 005c4544: FXCH ST2
// 005c4546: FSTP float ptr [ESP + 0x34]
// 005c454a: FSTP float ptr [ESP + 0x38]
// 005c454e: FSTP float ptr [ESP + 0x3c]
// 005c4552: CMP EDX,EAX
// 005c4554: JZ 0x005c456e
//   XREF to: 005c456e (CONDITIONAL_JUMP)
// 005c4556: MOV EAX,dword ptr [ESP + 0x34]
// 005c455a: MOV dword ptr [ESP + 0x58],EAX
// 005c455e: MOV EAX,dword ptr [ESP + 0x38]
// 005c4562: MOV dword ptr [ESP + 0x5c],EAX
// 005c4566: MOV EAX,dword ptr [ESP + 0x3c]
// 005c456a: MOV dword ptr [ESP + 0x60],EAX
// 005c456e: PUSH EDI
//   Label: LAB_005c456e
// 005c456f: LEA EAX,[ESP + 0x80]
// 005c4576: PUSH EAX
// 005c4577: LEA EAX,[EBX + 0x158]
// 005c457d: PUSH EAX
// 005c457e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005c4583: ADD ESP,0xc
// 005c4586: LEA EAX,[ESP + 0x58]
// 005c458a: PUSH EAX
// 005c458b: LEA EAX,[ESP + 0x8c]
// 005c4592: PUSH EAX
// 005c4593: PUSH EBX
// 005c4594: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c4599: ADD ESP,0xc
// 005c459c: LEA EAX,[ESP + 0x70]
// 005c45a0: FLD float ptr [ESP + 0x88]
// 005c45a7: FLD float ptr [ESP + 0x8c]
// 005c45ae: FLD float ptr [ESP + 0x90]
// 005c45b5: PUSH EAX
// 005c45b6: LEA EAX,[ESP + 0x98]
// 005c45bd: FXCH ST2
// 005c45bf: FSUB float ptr [ESP + 0x80]
// 005c45c6: FXCH
// 005c45c8: FSUB float ptr [ESP + 0x84]
// 005c45cf: FXCH ST2
// 005c45d1: FSUB float ptr [ESP + 0x88]
// 005c45d8: FXCH
// 005c45da: FSTP float ptr [ESP + 0x74]
// 005c45de: FXCH
// 005c45e0: FSTP float ptr [ESP + 0x78]
// 005c45e4: PUSH EAX
// 005c45e5: FSTP float ptr [ESP + 0x80]
// 005c45ec: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005c45f1: ADD ESP,0x8
// 005c45f4: FLD float ptr [ESP + 0x74]
// 005c45f8: FMUL ST0
// 005c45fa: FLD float ptr [ESP + 0x70]
// 005c45fe: FMUL ST0
// 005c4600: FADDP
// 005c4602: FLD float ptr [ESP + 0x78]
// 005c4606: FMUL ST0
// 005c4608: FADDP
// 005c460a: FSQRT
// 005c460c: FST float ptr [ESP + 0x28]
// 005c4610: MOV EAX,dword ptr [ESP + 0x28]
// 005c4614: FST double ptr [ESP]
// 005c4617: MOV dword ptr [ESP + 0x30],EAX
// 005c461b: FCOMP double ptr [0x00653d14]
//   XREF to: 00653d14 (READ)
// 005c4621: FNSTSW AX
// 005c4623: SAHF
// 005c4624: JBE 0x005c4650
//   XREF to: 005c4650 (CONDITIONAL_JUMP)
// 005c4626: FLD float ptr [ESP + 0x4c]
// 005c462a: FCHS
// 005c462c: FSTP float ptr [ESP + 0xc8]
// 005c4633: JNC 0x005c4751
//   XREF to: 005c4751 (CONDITIONAL_JUMP)
// 005c4639: FLD float ptr [ESP + 0x30]
//   Label: LAB_005c4639
// 005c463d: FST double ptr [ESP + 0x10]
// 005c4641: FCOMP double ptr [0x00653d14]
//   XREF to: 00653d14 (READ)
// 005c4647: FNSTSW AX
// 005c4649: SAHF
// 005c464a: JNC 0x005c47f9
//   XREF to: 005c47f9 (CONDITIONAL_JUMP)
// 005c4650: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_005c4650
// 005c4657: MOV dword ptr [ESP + 0xd0],EAX
// 005c465e: MOV EAX,dword ptr [ESP + 0x94]
// 005c4665: FLD float ptr [ESP + 0x94]
// 005c466c: MOV dword ptr [ESP + 0xcc],EAX
// 005c4673: FCOMP float ptr [0x00663770]
//   XREF to: 00663770 (READ)
// 005c4679: FNSTSW AX
// 005c467b: SAHF
// 005c467c: JNC 0x005c468a
//   XREF to: 005c468a (CONDITIONAL_JUMP)
// 005c467e: MOV EAX,[0x00663770]
//   XREF to: 00663770 (READ)
// 005c4683: MOV dword ptr [ESP + 0xcc],EAX
// 005c468a: FLD float ptr [ESP + 0xcc]
//   Label: LAB_005c468a
// 005c4691: FCOMP float ptr [0x00663774]
//   XREF to: 00663774 (READ)
// 005c4697: FNSTSW AX
// 005c4699: SAHF
// 005c469a: JBE 0x005c46a8
//   XREF to: 005c46a8 (CONDITIONAL_JUMP)
// 005c469c: MOV EAX,[0x00663774]
//   XREF to: 00663774 (READ)
// 005c46a1: MOV dword ptr [ESP + 0xcc],EAX
// 005c46a8: FLD float ptr [ESP + 0xd0]
//   Label: LAB_005c46a8
// 005c46af: FCOMP float ptr [ESP + 0xc4]
// 005c46b6: FNSTSW AX
// 005c46b8: SAHF
// 005c46b9: JNC 0x005c46c9
//   XREF to: 005c46c9 (CONDITIONAL_JUMP)
// 005c46bb: MOV EAX,dword ptr [ESP + 0xc4]
// 005c46c2: MOV dword ptr [ESP + 0xd0],EAX
// 005c46c9: FLD float ptr [ESP + 0xd0]
//   Label: LAB_005c46c9
// 005c46d0: FCOMP float ptr [ESP + 0xbc]
// 005c46d7: FNSTSW AX
// 005c46d9: SAHF
// 005c46da: JA 0x005c489c
//   XREF to: 005c489c (CONDITIONAL_JUMP)
// 005c46e0: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_005c46e0
// 005c46e7: MOV dword ptr [ESI + 0x14],0x3f800000
// 005c46ee: MOV dword ptr [ESI + 0xc],EAX
// 005c46f1: MOV EAX,dword ptr [ESP + 0xcc]
// 005c46f8: MOV dword ptr [ESI + 0x8],EAX
// 005c46fb: MOV EAX,dword ptr [ESP + 0xd0]
// 005c4702: MOV dword ptr [ESI + 0x4],EAX
// 005c4705: MOV EAX,dword ptr [ESP + 0xcc]
// 005c470c: MOV dword ptr [ESI],EAX
// 005c470e: MOV ESP,EBP
// 005c4710: POP EBP
// 005c4711: POP EDI
// 005c4712: POP ESI
// 005c4713: POP EBX
// 005c4714: RET
// 005c4715: MOV ECX,0x653cd4
//   Label: LAB_005c4715
//   XREF to: 00653cd4 (PARAM)
// 005c471a: MOV ESI,0x10c0
// 005c471f: PUSH 0x653ce9
//   XREF to: 00653ce9 (DATA)
// 005c4724: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005c472a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005c4730: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005c4735: ADD ESP,0x4
// 005c4738: JMP 0x005c438f
//   XREF to: 005c438f (UNCONDITIONAL_JUMP)
// 005c473d: FLD1
//   Label: LAB_005c473d
// 005c473f: FCOMP double ptr [ESP + 0x18]
// 005c4743: FNSTSW AX
// 005c4745: SAHF
// 005c4746: JC 0x005c44dc
//   XREF to: 005c44dc (CONDITIONAL_JUMP)
// 005c474c: JMP 0x005c44e4
//   XREF to: 005c44e4 (UNCONDITIONAL_JUMP)
// 005c4751: FLD float ptr [ESP + 0x28]
//   Label: LAB_005c4751
// 005c4755: FMUL ST0
// 005c4757: FLD float ptr [ESP + 0xc8]
// 005c475e: FMUL ST0
// 005c4760: FSUBP
// 005c4762: FSQRT
// 005c4764: FDIV double ptr [ESP]
// 005c4767: FLD1
// 005c4769: FXCH
// 005c476b: FSTP double ptr [ESP + 0x20]
// 005c476f: FCOMP double ptr [ESP + 0x20]
// 005c4773: FNSTSW AX
// 005c4775: SAHF
// 005c4776: JBE 0x005c4639
//   XREF to: 005c4639 (CONDITIONAL_JUMP)
// 005c477c: FLDZ
// 005c477e: FCOMP double ptr [ESP + 0x20]
// 005c4782: FNSTSW AX
// 005c4784: SAHF
// 005c4785: JA 0x005c4639
//   XREF to: 005c4639 (CONDITIONAL_JUMP)
// 005c478b: FLD double ptr [ESP + 0x20]
// 005c478f: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005c4794: FLDZ
// 005c4796: FXCH
// 005c4798: FSTP float ptr [ESP + 0xc0]
// 005c479f: FCOMP float ptr [ESP + 0xc8]
// 005c47a6: FNSTSW AX
// 005c47a8: SAHF
// 005c47a9: JBE 0x005c47e9
//   XREF to: 005c47e9 (CONDITIONAL_JUMP)
// 005c47ab: FLD float ptr [ESP + 0x98]
// 005c47b2: FSUB float ptr [ESP + 0xc0]
// 005c47b9: FSTP float ptr [ESP + 0x98]
//   Label: LAB_005c47b9
// 005c47c0: PUSH dword ptr [ESP + 0x98]
// 005c47c7: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c47cc: MOV dword ptr [ESP + 0xd8],EAX
// 005c47d3: FLD float ptr [ESP + 0xd8]
// 005c47da: ADD ESP,0x4
// 005c47dd: FSTP float ptr [ESP + 0x98]
// 005c47e4: JMP 0x005c4639
//   XREF to: 005c4639 (UNCONDITIONAL_JUMP)
// 005c47e9: FLD float ptr [ESP + 0x98]
//   Label: LAB_005c47e9
// 005c47f0: FADD float ptr [ESP + 0xc0]
// 005c47f7: JMP 0x005c47b9
//   XREF to: 005c47b9 (UNCONDITIONAL_JUMP)
// 005c47f9: FLD float ptr [ESP + 0x30]
//   Label: LAB_005c47f9
// 005c47fd: FMUL ST0
// 005c47ff: FLD float ptr [ESP + 0x50]
// 005c4803: FMUL ST0
// 005c4805: FSUBP
// 005c4807: FSQRT
// 005c4809: FDIV double ptr [ESP + 0x10]
// 005c480d: FLD1
// 005c480f: FXCH
// 005c4811: FSTP double ptr [ESP + 0x8]
// 005c4815: FCOMP double ptr [ESP + 0x8]
// 005c4819: FNSTSW AX
// 005c481b: SAHF
// 005c481c: JBE 0x005c4650
//   XREF to: 005c4650 (CONDITIONAL_JUMP)
// 005c4822: FLDZ
// 005c4824: FCOMP double ptr [ESP + 0x8]
// 005c4828: FNSTSW AX
// 005c482a: SAHF
// 005c482b: JA 0x005c4650
//   XREF to: 005c4650 (CONDITIONAL_JUMP)
// 005c4831: FLD double ptr [ESP + 0x8]
// 005c4835: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005c483a: FLDZ
// 005c483c: FXCH
// 005c483e: FSTP float ptr [ESP + 0xb8]
// 005c4845: FCOMP float ptr [ESP + 0x50]
// 005c4849: FNSTSW AX
// 005c484b: SAHF
// 005c484c: JBE 0x005c488c
//   XREF to: 005c488c (CONDITIONAL_JUMP)
// 005c484e: FLD float ptr [ESP + 0x94]
// 005c4855: FSUB float ptr [ESP + 0xb8]
// 005c485c: FSTP float ptr [ESP + 0x94]
//   Label: LAB_005c485c
// 005c4863: PUSH dword ptr [ESP + 0x94]
// 005c486a: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c486f: MOV dword ptr [ESP + 0xd8],EAX
// 005c4876: FLD float ptr [ESP + 0xd8]
// 005c487d: ADD ESP,0x4
// 005c4880: FSTP float ptr [ESP + 0x94]
// 005c4887: JMP 0x005c4650
//   XREF to: 005c4650 (UNCONDITIONAL_JUMP)
// 005c488c: FLD float ptr [ESP + 0x94]
//   Label: LAB_005c488c
// 005c4893: FADD float ptr [ESP + 0xb8]
// 005c489a: JMP 0x005c485c
//   XREF to: 005c485c (UNCONDITIONAL_JUMP)
// 005c489c: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_005c489c
// 005c48a3: MOV dword ptr [ESP + 0xd0],EAX
// 005c48aa: JMP 0x005c46e0
//   XREF to: 005c46e0 (UNCONDITIONAL_JUMP)
