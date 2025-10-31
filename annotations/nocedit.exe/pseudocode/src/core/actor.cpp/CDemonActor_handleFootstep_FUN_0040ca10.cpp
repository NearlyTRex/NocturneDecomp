// Name: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10
// Address: 0040ca10
// Address Range: [[0040ca10, 0040cb82]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10(CDemonActor * this_ptr, CVector3f * position, int surface_type, float unknown)
// Globals:
//   TerminatedCString s_footstep_s_s_wav_f_006142c8
//   float FLOAT_006142e4 = 10000
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CGore g_CGoreInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   CSound g_CSoundInstance
// Function calls:
//   core_gore.cpp_CGore_FUN_004ee070
//   core_gore.cpp_CGore_FUN_004ee0f0
//   core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   core_setcolid.cpp_CDemonSet_FUN_00574580
//   core_sound.cpp_CSound_FUN_005b3a40
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10
          (CDemonActor *this_ptr,CVector3f *position,int surface_type,float unknown)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  float in_stack_0000001c;
  undefined4 uVar6;
  CVector3f *pCStack_7c;
  char acStack_78 [80];
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = g_CDemonCameraInstance.base.position.x;
  local_24 = g_CDemonCameraInstance.base.position.y;
  local_20 = g_CDemonCameraInstance.base.position.z;
  fVar1 = position->x - (float)g_CDemonCameraInstance.base.position.x;
  fVar3 = position->y - (float)g_CDemonCameraInstance.base.position.y;
  fVar2 = position->z - (float)g_CDemonCameraInstance.base.position.z;
  if (FLOAT_006142e4 < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  iVar4 = core_setcolid_cpp_CDemonSet_FUN_00574580(g_CDemonSetPtr);
  if (iVar4 != 0) {
    surface_type = 6;
  }
  iVar4 = core_gore_cpp_CGore_FUN_004ee0f0(g_CGorePtr);
  if (iVar4 == 0) {
    if (this_ptr->field19_0x114 < 1) {
      if (surface_type == 3) {
        core_gore_cpp_CGore_FUN_004ee070(g_CGorePtr);
      }
      goto LAB_0040cb07;
    }
  }
  else {
    this_ptr->field19_0x114 = 0xffff;
  }
  core_gore_cpp_CGore_FUN_004ee070(g_CGorePtr);
  iVar4 = this_ptr->field19_0x114 + -0x2000;
  this_ptr->field19_0x114 = iVar4;
  if (iVar4 < 0) {
    this_ptr->field19_0x114 = 0;
  }
LAB_0040cb07:
  uVar6 = (undefined4)((ulonglong)(double)in_stack_0000001c >> 0x20);
  pcVar5 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(surface_type);
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)&pCStack_7c,"footstep-%s-!-%s-?.wav @ %f",&this_ptr->field21_0x11c,pcVar5,uVar6
            );
  pCStack_7c = position;
  core_sound_cpp_CSound_FUN_005b3a40(g_CSoundPtr,this_ptr->actor_name,acStack_78);
  return extraout_EAX;
}


// Assembly code:
// 0040ca10: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10
// 0040ca11: PUSH ESI
// 0040ca12: PUSH EDI
// 0040ca13: PUSH EBP
// 0040ca14: SUB ESP,0x7c
// 0040ca17: MOV EBX,dword ptr [ESP + 0x90]
//   XREF to: Stack[0x4] (READ)
// 0040ca1e: MOV ESI,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x8] (READ)
// 0040ca25: MOV EDI,dword ptr [ESP + 0x98]
//   XREF to: Stack[0xc] (READ)
// 0040ca2c: MOV EAX,[0x032758e8]
//   XREF to: 032758e8 (READ)
// 0040ca31: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0040ca35: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0040ca3a: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 032758ec (READ)
// 0040ca3d: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0040ca41: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0040ca46: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 032758f0 (READ)
// 0040ca49: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0040ca4d: FLD float ptr [ESI]
// 0040ca4f: FSUB float ptr [ESP + 0x64]
//   XREF to: Stack[-0x28] (READ)
// 0040ca53: FMUL ST0
// 0040ca55: FLD float ptr [ESI + 0x4]
// 0040ca58: FSUB float ptr [ESP + 0x68]
//   XREF to: Stack[-0x24] (READ)
// 0040ca5c: FMUL ST0
// 0040ca5e: FLD float ptr [ESI + 0x8]
// 0040ca61: FXCH
// 0040ca63: FADDP ST2,ST0
// 0040ca65: FSUB float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x20] (READ)
// 0040ca69: FMUL ST0
// 0040ca6b: FADDP
// 0040ca6d: FCOMP float ptr [0x006142e4]
//   XREF to: 006142e4 (READ)
// 0040ca73: FNSTSW AX
// 0040ca75: SAHF
// 0040ca76: JBE 0x0040ca82
//   XREF to: 0040ca82 (CONDITIONAL_JUMP)
// 0040ca78: XOR EAX,EAX
// 0040ca7a: ADD ESP,0x7c
// 0040ca7d: POP EBP
// 0040ca7e: POP EDI
// 0040ca7f: POP ESI
// 0040ca80: POP EBX
// 0040ca81: RET
// 0040ca82: PUSH ESI
//   Label: LAB_0040ca82
// 0040ca83: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040ca89: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0040ca8a: CALL core_setcolid.cpp_CDemonSet_FUN_00574580
//   XREF to: 00574580 (UNCONDITIONAL_CALL)
// 0040ca8f: ADD ESP,0x8
// 0040ca92: TEST EAX,EAX
// 0040ca94: JZ 0x0040ca9b
//   XREF to: 0040ca9b (CONDITIONAL_JUMP)
// 0040ca96: MOV EDI,0x6
// 0040ca9b: LEA EAX,[EBX + 0x118]
//   Label: LAB_0040ca9b
// 0040caa1: PUSH EAX
// 0040caa2: PUSH ESI
// 0040caa3: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0040caa9: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0040caaa: CALL core_gore.cpp_CGore_FUN_004ee0f0
//   XREF to: 004ee0f0 (UNCONDITIONAL_CALL)
// 0040caaf: ADD ESP,0xc
// 0040cab2: TEST EAX,EAX
// 0040cab4: JZ 0x0040cb55
//   XREF to: 0040cb55 (CONDITIONAL_JUMP)
// 0040caba: MOV dword ptr [EBX + 0x114],0xffff
// 0040cac4: MOV EDX,dword ptr [EBX + 0x118]
//   Label: LAB_0040cac4
// 0040caca: PUSH EDX
// 0040cacb: MOV ECX,dword ptr [EBX + 0x114]
// 0040cad1: PUSH ECX
// 0040cad2: PUSH 0xb
// 0040cad4: LEA EAX,[EBX + 0x30]
// 0040cad7: PUSH EAX
// 0040cad8: PUSH ESI
// 0040cad9: MOV EBP,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 0040cadf: PUSH EBP
//   XREF to: 02d83364 (DATA)
// 0040cae0: CALL core_gore.cpp_CGore_FUN_004ee070
//   XREF to: 004ee070 (UNCONDITIONAL_CALL)
// 0040cae5: MOV EAX,dword ptr [EBX + 0x114]
// 0040caeb: SUB EAX,0x2000
// 0040caf0: ADD ESP,0x18
// 0040caf3: MOV dword ptr [EBX + 0x114],EAX
// 0040caf9: TEST EAX,EAX
// 0040cafb: JGE 0x0040cb07
//   XREF to: 0040cb07 (CONDITIONAL_JUMP)
// 0040cafd: MOV dword ptr [EBX + 0x114],0x0
// 0040cb07: FLD float ptr [ESP + 0x9c]
//   Label: LAB_0040cb07
//   XREF to: Stack[0x10] (READ)
// 0040cb0e: SUB ESP,0x8
// 0040cb11: FSTP double ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 0040cb14: PUSH EDI
// 0040cb15: CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   XREF to: 004eece0 (UNCONDITIONAL_CALL)
// 0040cb1a: ADD ESP,0x4
// 0040cb1d: PUSH EAX
// 0040cb1e: LEA EAX,[EBX + 0x11c]
// 0040cb24: PUSH EAX
// 0040cb25: PUSH 0x6142c8
//   XREF to: 006142c8 (DATA)
// 0040cb2a: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x8c] (DATA)
// 0040cb2e: PUSH EAX
// 0040cb2f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040cb34: ADD ESP,0x18
// 0040cb37: PUSH ESI
// 0040cb38: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8c] (DATA)
// 0040cb3c: PUSH EAX
// 0040cb3d: PUSH EBX
// 0040cb3e: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0040cb44: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 0040cb45: CALL core_sound.cpp_CSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 0040cb4a: ADD ESP,0x10
// 0040cb4d: ADD ESP,0x7c
// 0040cb50: POP EBP
// 0040cb51: POP EDI
// 0040cb52: POP ESI
// 0040cb53: POP EBX
// 0040cb54: RET
// 0040cb55: CMP dword ptr [EBX + 0x114],0x0
//   Label: LAB_0040cb55
// 0040cb5c: JG 0x0040cac4
//   XREF to: 0040cac4 (CONDITIONAL_JUMP)
// 0040cb62: CMP EDI,0x3
// 0040cb65: JNZ 0x0040cb07
//   XREF to: 0040cb07 (CONDITIONAL_JUMP)
// 0040cb67: PUSH EAX
// 0040cb68: PUSH 0x4000
// 0040cb6d: PUSH EDI
// 0040cb6e: LEA EAX,[EBX + 0x30]
// 0040cb71: PUSH EAX
// 0040cb72: PUSH ESI
// 0040cb73: MOV EAX,[0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0040cb78: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 0040cb79: CALL core_gore.cpp_CGore_FUN_004ee070
//   XREF to: 004ee070 (UNCONDITIONAL_CALL)
// 0040cb7e: ADD ESP,0x18
// 0040cb81: JMP 0x0040cb07
//   XREF to: 0040cb07 (UNCONDITIONAL_JUMP)
