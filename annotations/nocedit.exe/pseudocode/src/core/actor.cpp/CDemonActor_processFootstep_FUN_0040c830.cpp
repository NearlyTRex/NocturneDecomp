// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830
// Address: 0040c830
// Address Range: [[0040c830, 0040c8e7]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830(CDemonActor * this_ptr, float volume)
// Globals:
//   float FLOAT_006142b8 = 10000
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613ac
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
// Function calls:
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830(CDemonActor *this_ptr,float volume)

{
  CLocation *position;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float in_stack_00000014;
  
  position = &this_ptr->location;
  fVar1 = (position->position).x - (float)g_CDemonCameraInstance.base.position.x;
  fVar3 = (this_ptr->location).position.y - (float)g_CDemonCameraInstance.base.position.y;
  fVar2 = (this_ptr->location).position.z - (float)g_CDemonCameraInstance.base.position.z;
  if (FLOAT_006142b8 < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
            (g_CDemonSetPtr,&position->position,0.0);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  iVar4 = (*((this_ptr->metadata).vtable)->handleFootstep)
                    (this_ptr,&position->position,g_CDemonSetPtr->ground_type,in_stack_00000014);
  return iVar4;
}


// Assembly code:
// 0040c830: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830
// 0040c831: PUSH ESI
// 0040c832: PUSH EBP
// 0040c833: SUB ESP,0x18
// 0040c836: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0040c83a: MOV EAX,[0x032758e8]
//   XREF to: 032758e8 (READ)
// 0040c83f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0040c842: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0040c847: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 032758ec (READ)
// 0040c84a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0040c84e: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0040c853: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 032758f0 (READ)
// 0040c856: LEA EBX,[ESI + 0x20]
// 0040c859: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0040c85d: FLD float ptr [EBX]
// 0040c85f: FSUB float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0040c862: FMUL ST0
// 0040c864: FLD float ptr [EBX + 0x4]
// 0040c867: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0040c86b: FMUL ST0
// 0040c86d: FLD float ptr [EBX + 0x8]
// 0040c870: FXCH
// 0040c872: FADDP ST2,ST0
// 0040c874: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0040c878: FMUL ST0
// 0040c87a: FADDP
// 0040c87c: FCOMP float ptr [0x006142b8]
//   XREF to: 006142b8 (READ)
// 0040c882: FNSTSW AX
// 0040c884: SAHF
// 0040c885: JBE 0x0040c890
//   XREF to: 0040c890 (CONDITIONAL_JUMP)
// 0040c887: XOR EAX,EAX
// 0040c889: ADD ESP,0x18
// 0040c88c: POP EBP
// 0040c88d: POP ESI
// 0040c88e: POP EBX
// 0040c88f: RET
// 0040c890: PUSH EDI
//   Label: LAB_0040c890
// 0040c891: PUSH ESI
// 0040c892: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040c898: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0040c899: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0040c89e: ADD ESP,0x8
// 0040c8a1: PUSH 0x0
// 0040c8a3: PUSH EBX
// 0040c8a4: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0040c8aa: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0040c8ab: CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   XREF to: 005716b0 (UNCONDITIONAL_CALL)
// 0040c8b0: ADD ESP,0xc
// 0040c8b3: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040c8b9: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0040c8ba: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0040c8bf: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0040c8c4: ADD ESP,0x4
// 0040c8c7: MOV EBP,dword ptr [EAX + 0x14d134]
//   XREF to: 032613ac (READ)
// 0040c8cd: PUSH dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0040c8d1: PUSH EBP
// 0040c8d2: PUSH EBX
// 0040c8d3: MOV EDX,dword ptr [ESI + 0x154]
// 0040c8d9: PUSH ESI
// 0040c8da: CALL dword ptr [EDX + 0x20]
// 0040c8dd: ADD ESP,0x10
// 0040c8e0: POP EDI
// 0040c8e1: ADD ESP,0x18
// 0040c8e4: POP EBP
// 0040c8e5: POP ESI
// 0040c8e6: POP EBX
// 0040c8e7: RET
