// Name: core_enemy.cpp_FUN_004a9a50
// Address: 004a9a50
// Address Range: [[004a9a50, 004a9afa]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9a50()
// Cross-references:
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 005267da [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
//   core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_enemy.cpp_FUN_004a9a50(undefined4 param_1, undefined4 param_2)
    */

bool core_enemy_cpp_FUN_004a9a50(void)

{
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_48;
  CVector3f local_2c;
  undefined1 auStack_18 [16];
  
  this_ptr = in_stack_00000008;
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    return false;
  }
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].shouldIgnoreForTargeting)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_2c,pCVar1);
  (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)&stack0xffffffb4);
  fStack_48 = 6.851314e-39;
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (this_ptr,(CVector3f *)&stack0x00000010,(CVector3f *)(auStack_18 + 4));
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550
                     ((CBoundingBox3D *)&stack0xffffffcc,(CVector3f *)&stack0x00000008,pCVar1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(this_ptr,(CVector3f *)auStack_18,pCVar1)
  ;
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                    (g_CDemonSetPtr,(CVector3f *)&stack0xfffffff8,(CVector3f *)(auStack_18 + 4));
  return iVar2 == 0;
}


// Assembly code:
// 004a9a50: PUSH EBX
//   Label: core_enemy.cpp_FUN_004a9a50
// 004a9a51: PUSH ESI
// 004a9a52: SUB ESP,0x54
// 004a9a55: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 004a9a59: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x8] (READ)
// 004a9a5d: TEST EBX,EBX
// 004a9a5f: JNZ 0x004a9a69
//   XREF to: 004a9a69 (CONDITIONAL_JUMP)
// 004a9a61: XOR EAX,EAX
// 004a9a63: ADD ESP,0x54
// 004a9a66: POP ESI
// 004a9a67: POP EBX
// 004a9a68: RET
// 004a9a69: LEA EDX,[ESP + 0x30]
//   Label: LAB_004a9a69
//   XREF to: Stack[-0x2c] (DATA)
// 004a9a6d: PUSH EDX
// 004a9a6e: MOV EAX,dword ptr [ESI + 0x154]
// 004a9a74: PUSH ESI
// 004a9a75: CALL dword ptr [EAX + 0x154]
// 004a9a7b: ADD ESP,0x8
// 004a9a7e: PUSH EAX
// 004a9a7f: LEA EAX,[ESP + 0x28]
// 004a9a83: PUSH EAX
// 004a9a84: PUSH ESI
// 004a9a85: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004a9a8a: ADD ESP,0xc
// 004a9a8d: MOV EDX,ESP
// 004a9a8f: PUSH EDX
// 004a9a90: MOV EAX,dword ptr [EBX + 0x154]
// 004a9a96: PUSH EBX
// 004a9a97: CALL dword ptr [EAX + 0x14]
// 004a9a9a: ADD ESP,0x8
// 004a9a9d: LEA EAX,[ESP + 0x24]
// 004a9aa1: PUSH EAX
// 004a9aa2: LEA EAX,[ESP + 0x4c]
// 004a9aa6: PUSH EAX
// 004a9aa7: PUSH EBX
// 004a9aa8: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004a9aad: ADD ESP,0xc
// 004a9ab0: PUSH EAX
// 004a9ab1: LEA EAX,[ESP + 0x40]
// 004a9ab5: PUSH EAX
// 004a9ab6: LEA EAX,[ESP + 0x8]
// 004a9aba: PUSH EAX
// 004a9abb: CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
//   XREF to: 00421550 (UNCONDITIONAL_CALL)
// 004a9ac0: ADD ESP,0xc
// 004a9ac3: PUSH EAX
// 004a9ac4: LEA EAX,[ESP + 0x1c]
// 004a9ac8: PUSH EAX
// 004a9ac9: PUSH EBX
// 004a9aca: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004a9acf: ADD ESP,0xc
// 004a9ad2: LEA EAX,[ESP + 0x18]
// 004a9ad6: PUSH EAX
// 004a9ad7: LEA EAX,[ESP + 0x28]
// 004a9adb: PUSH EAX
// 004a9adc: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004a9ae2: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004a9ae3: CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
//   XREF to: 00572510 (UNCONDITIONAL_CALL)
// 004a9ae8: ADD ESP,0xc
// 004a9aeb: TEST EAX,EAX
// 004a9aed: SETZ AL
// 004a9af0: AND EAX,0xff
// 004a9af5: ADD ESP,0x54
// 004a9af8: POP ESI
// 004a9af9: POP EBX
// 004a9afa: RET
