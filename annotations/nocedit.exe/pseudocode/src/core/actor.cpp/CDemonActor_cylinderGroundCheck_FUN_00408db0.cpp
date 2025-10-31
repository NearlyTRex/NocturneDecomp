// Name: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0
// Address: 00408db0
// Address Range: [[00408db0, 00408e7e]]
// Convention: __cdecl
// Signature: float core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0(CDemonActor * this_ptr, float radius, CVector3f * out_normal)
// Globals:
//   TerminatedCString s_core_actor_cpp_006137c2
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CPlatformClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613a0
//   undefined4 DAT_032613a4
//   undefined4 DAT_032613a8
//   undefined4 DAT_032613bc
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_setcolid.cpp_CDemonSet_FUN_00574220
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10

#include "nocturne.h"

float __cdecl
core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0
          (CDemonActor *this_ptr,float radius,CVector3f *out_normal)

{
  CDemonSet *pCVar1;
  CDemonActor *pCVar2;
  float in_stack_00000018;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x2b6);
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_CDemonSet_FUN_00574220(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
            (g_CDemonSetPtr,&(this_ptr->location).position,in_stack_00000018);
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (g_CDemonSetPtr->collision_actor,g_CPlatformClassInfo.name_hash);
  this_ptr->field11_0xdc = (int)pCVar2;
  pCVar1 = g_CDemonSetPtr;
  if (out_normal != (CVector3f *)0x0) {
    if (out_normal != &g_CDemonSetPtr->collision_normal) {
      out_normal->x = (g_CDemonSetPtr->collision_normal).x;
      out_normal->y = (pCVar1->collision_normal).y;
      out_normal->z = (pCVar1->collision_normal).z;
    }
  }
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  return (float)this_ptr;
}


// Assembly code:
// 00408db0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0
// 00408db1: PUSH ESI
// 00408db2: PUSH EDI
// 00408db3: PUSH EBP
// 00408db4: SUB ESP,0x8
// 00408db7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00408dbb: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00408dbf: PUSH 0x2b6
// 00408dc4: PUSH 0x6137c2
//   XREF to: 006137c2 (DATA)
// 00408dc9: PUSH ESI
// 00408dca: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408dcf: ADD ESP,0xc
// 00408dd2: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00408dd8: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00408dd9: CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
//   XREF to: 00573e10 (UNCONDITIONAL_CALL)
// 00408dde: ADD ESP,0x4
// 00408de1: PUSH ESI
// 00408de2: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00408de8: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00408de9: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00408dee: ADD ESP,0x8
// 00408df1: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00408df7: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00408df8: CALL core_setcolid.cpp_CDemonSet_FUN_00574220
//   XREF to: 00574220 (UNCONDITIONAL_CALL)
// 00408dfd: ADD ESP,0x4
// 00408e00: LEA EAX,[ESI + 0x20]
// 00408e03: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00408e07: PUSH EAX
// 00408e08: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00408e0e: PUSH EBP
//   XREF to: 03114278 (DATA)
// 00408e0f: CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   XREF to: 005716b0 (UNCONDITIONAL_CALL)
// 00408e14: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00408e18: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 00408e1c: ADD ESP,0xc
// 00408e1f: MOV EAX,[0x030d508c]
//   XREF to: 030d508c (READ)
// 00408e24: PUSH EAX
// 00408e25: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00408e2a: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 00408e30: PUSH EDX
// 00408e31: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00408e35: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00408e3a: ADD ESP,0x8
// 00408e3d: MOV dword ptr [ESI + 0xdc],EAX
// 00408e43: TEST EBX,EBX
// 00408e45: JZ 0x00408e65
//   XREF to: 00408e65 (CONDITIONAL_JUMP)
// 00408e47: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00408e4c: ADD EAX,0x14d128
//   XREF to: 032613a0 (PARAM)
// 00408e51: CMP EBX,EAX
// 00408e53: JZ 0x00408e65
//   XREF to: 00408e65 (CONDITIONAL_JUMP)
// 00408e55: MOV EDX,dword ptr [EAX]
//   XREF to: 032613a0 (READ)
// 00408e57: MOV dword ptr [EBX],EDX
// 00408e59: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 032613a4 (READ)
// 00408e5c: MOV dword ptr [EBX + 0x4],EDX
// 00408e5f: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 032613a8 (READ)
// 00408e62: MOV dword ptr [EBX + 0x8],EDX
// 00408e65: MOV ECX,dword ptr [0x006810c8]
//   Label: LAB_00408e65
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00408e6b: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00408e6c: CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
//   XREF to: 00573fc0 (UNCONDITIONAL_CALL)
// 00408e71: ADD ESP,0x4
// 00408e74: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00408e77: ADD ESP,0x8
// 00408e7a: POP EBP
// 00408e7b: POP EDI
// 00408e7c: POP ESI
// 00408e7d: POP EBX
// 00408e7e: RET
