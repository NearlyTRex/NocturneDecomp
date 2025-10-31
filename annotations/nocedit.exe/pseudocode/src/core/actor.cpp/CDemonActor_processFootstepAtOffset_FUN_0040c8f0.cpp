// Name: core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0
// Address: 0040c8f0
// Address Range: [[0040c8f0, 0040ca08]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0(CDemonActor * this_ptr, CVector3f * u1, float offset)
// Globals:
//   float FLOAT_006142bc = 10000
//   double DOUBLE_006142c0 = -1
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613ac
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0
          (CDemonActor *this_ptr,CVector3f *u1,float offset)

{
  int iVar1;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float in_stack_00000020;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  float local_28;
  CVector3f local_20;
  float fStack_10;
  float local_8;
  
  core_actor_cpp_CDemonActor_FUN_00408ec0(this_ptr);
  local_20.x = (float)g_CDemonCameraInstance.base.position.y;
  local_20.y = (float)g_CDemonCameraInstance.base.position.z;
  if (FLOAT_006142bc <
      (local_28 - (float)g_CDemonCameraInstance.base.position.z) *
      (local_28 - (float)g_CDemonCameraInstance.base.position.z) +
      (in_stack_ffffffd4 - (float)g_CDemonCameraInstance.base.position.y) *
      (in_stack_ffffffd4 - (float)g_CDemonCameraInstance.base.position.y) +
      (in_stack_ffffffd0 - (float)g_CDemonCameraInstance.base.position.x) *
      (in_stack_ffffffd0 - (float)g_CDemonCameraInstance.base.position.x)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
  fStack_10 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                        (g_CDemonSetPtr,(CVector3f *)&stack0xffffffd4,0.0);
  iVar1 = g_CDemonSetPtr->ground_type;
  local_8 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                      (g_CDemonSetPtr,&(this_ptr->location).position,0.0);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (local_8 < unaff_EBX + (float)DOUBLE_006142c0) {
    iVar1 = g_CDemonSetPtr->ground_type;
  }
  iVar1 = (*((this_ptr->metadata).vtable)->handleFootstep)
                    (this_ptr,&local_20,iVar1,in_stack_00000020);
  return iVar1;
}


// Assembly code:
// 0040c8f0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0
// 0040c8f1: SUB ESP,0x30
// 0040c8f4: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0040c8f8: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0040c8fc: PUSH EDX
// 0040c8fd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 0040c901: PUSH EAX
// 0040c902: PUSH EBX
// 0040c903: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0040c908: ADD ESP,0xc
// 0040c90b: MOV EAX,[0x032758e8]
//   XREF to: 032758e8 (READ)
// 0040c910: FLD float ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0040c913: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0040c917: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0040c91c: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0040c920: FMUL ST0
// 0040c922: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 032758ec (READ)
// 0040c925: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 0040c929: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0040c92d: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0040c932: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0040c936: FMUL ST0
// 0040c938: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 032758f0 (READ)
// 0040c93b: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 0040c93f: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0040c943: FXCH
// 0040c945: FADDP ST2,ST0
// 0040c947: FSUB float ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0040c94b: FMUL ST0
// 0040c94d: FADDP
// 0040c94f: FCOMP float ptr [0x006142bc]
//   XREF to: 006142bc (READ)
// 0040c955: FNSTSW AX
// 0040c957: SAHF
// 0040c958: JBE 0x0040c961
//   XREF to: 0040c961 (CONDITIONAL_JUMP)
// 0040c95a: XOR EAX,EAX
// 0040c95c: ADD ESP,0x30
// 0040c95f: POP EBX
// 0040c960: RET
// 0040c961: PUSH EDI
//   Label: LAB_0040c961
// 0040c962: PUSH ESI
// 0040c963: PUSH EBX
// 0040c964: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040c96a: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0040c96b: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0040c970: ADD ESP,0x8
// 0040c973: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 0040c977: PUSH 0x0
// 0040c979: PUSH EAX
// 0040c97a: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040c980: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0040c981: CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   XREF to: 005716b0 (UNCONDITIONAL_CALL)
// 0040c986: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0040c98a: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x8] (READ)
// 0040c98e: ADD ESP,0xc
// 0040c991: LEA EDX,[EBX + 0x20]
// 0040c994: PUSH 0x0
// 0040c996: PUSH EDX
// 0040c997: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040c99c: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0040c99d: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0040c9a1: MOV ESI,dword ptr [EAX + 0x14d134]
//   XREF to: 032613ac (READ)
// 0040c9a7: CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   XREF to: 005716b0 (UNCONDITIONAL_CALL)
// 0040c9ac: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0040c9b0: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x8] (READ)
// 0040c9b4: ADD ESP,0xc
// 0040c9b7: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040c9bd: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0040c9be: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (WRITE)
// 0040c9c2: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0040c9c7: ADD ESP,0x4
// 0040c9ca: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0040c9ce: FADD double ptr [0x006142c0]
//   XREF to: 006142c0 (READ)
// 0040c9d4: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 0040c9d8: FCOMPP
// 0040c9da: FNSTSW AX
// 0040c9dc: SAHF
// 0040c9dd: JNC 0x0040c9eb
//   XREF to: 0040c9eb (CONDITIONAL_JUMP)
// 0040c9df: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040c9e5: MOV ESI,dword ptr [ESI + 0x14d134]
//   XREF to: 032613ac (READ)
// 0040c9eb: PUSH dword ptr [ESP + 0x48]
//   Label: LAB_0040c9eb
//   XREF to: Stack[0xc] (READ)
// 0040c9ef: PUSH ESI
// 0040c9f0: LEA EDX,[ESP + 0x10]
//   XREF to: Stack[-0x34] (DATA)
// 0040c9f4: PUSH EDX
// 0040c9f5: MOV EAX,dword ptr [EBX + 0x154]
// 0040c9fb: PUSH EBX
// 0040c9fc: CALL dword ptr [EAX + 0x20]
// 0040c9ff: ADD ESP,0x10
// 0040ca02: POP ESI
// 0040ca03: POP EDI
// 0040ca04: ADD ESP,0x30
// 0040ca07: POP EBX
// 0040ca08: RET
