// Name: core_scat.cpp_CScat_ctor_FUN_00556ed0
// Address: 00556ed0
// Address Range: [[00556ed0, 00556f8e]]
// Convention: __cdecl
// Signature: CScat * core_scat.cpp_CScat_ctor_FUN_00556ed0(CScat * this_ptr)
// Cross-references:
//   core_scat.cpp_FUN_00556e90 (00556e90) at 00556ead [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_scat_dfm_00641211
//   TerminatedCString s_draw_stand2coatPocket_0064121a
//   TerminatedCString s_draw_coatPocket2aimPisto_00641230
//   CDemonActor_vtable PTR_core_scat.cpp_FUN_00662464
// Function calls:
//   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   core_hero.cpp_FUN_004f2340
//   core_scat.cpp_FUN_00557150
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_00556ed0(CScat *this_ptr)

{
  CScat *this_ptr_00;
  undefined4 uStack00000008;
  
  this_ptr_00 = (CScat *)core_hero_cpp_FUN_004f2340();
  (this_ptr_00->base_hero).base_character.base_actor.vtable = &PTR_core_scat_cpp_FUN_00662464;
  this_ptr_00->field1_0x1fbd4[0] = '\0';
  this_ptr_00->field1_0x1fbd4[1] = '\0';
  this_ptr_00->field1_0x1fbd4[2] = '\0';
  this_ptr_00->field1_0x1fbd4[3] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(this_ptr_00->base_hero).base_character.model);
  this_ptr_00->field1_0x1fbd4[0x10] = '\0';
  this_ptr_00->field1_0x1fbd4[0x11] = '\0';
  this_ptr_00->field1_0x1fbd4[0x12] = -0x80;
  this_ptr_00->field1_0x1fbd4[0x13] = '?';
  this_ptr_00->field1_0x1fbd4[0xc] = '\0';
  this_ptr_00->field1_0x1fbd4[0xd] = '\0';
  this_ptr_00->field1_0x1fbd4[0xe] = '\0';
  this_ptr_00->field1_0x1fbd4[0xf] = '\0';
  *(undefined4 *)(this_ptr_00->field1_0x1fbd4 + 8) =
       *(undefined4 *)(this_ptr_00->field1_0x1fbd4 + 0xc);
  *(undefined4 *)(this_ptr_00->field1_0x1fbd4 + 4) =
       *(undefined4 *)(this_ptr_00->field1_0x1fbd4 + 8);
  core_scat_cpp_FUN_00557150();
  this_ptr_00->field1_0x1fbd4[0x14] = '\0';
  this_ptr_00->field1_0x1fbd4[0x15] = '\0';
  this_ptr_00->field1_0x1fbd4[0x16] = '\0';
  this_ptr_00->field1_0x1fbd4[0x17] = '\0';
  this_ptr_00->field1_0x1fbd4[0x1c] = '\0';
  this_ptr_00->field1_0x1fbd4[0x1d] = '\0';
  this_ptr_00->field1_0x1fbd4[0x1e] = '\0';
  this_ptr_00->field1_0x1fbd4[0x1f] = '\0';
  this_ptr_00->field1_0x1fbd4[0x24] = '\0';
  this_ptr_00->field1_0x1fbd4[0x25] = '\0';
  this_ptr_00->field1_0x1fbd4[0x26] = '\0';
  this_ptr_00->field1_0x1fbd4[0x27] = '\0';
  this_ptr_00->field1_0x1fbd4[0x28] = '\0';
  this_ptr_00->field1_0x1fbd4[0x29] = '\0';
  this_ptr_00->field1_0x1fbd4[0x2a] = '\0';
  this_ptr_00->field1_0x1fbd4[0x2b] = '\0';
  *(undefined4 *)(this_ptr_00->field1_0x1fbd4 + 0x18) =
       *(undefined4 *)(this_ptr_00->field1_0x1fbd4 + 0x1c);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  uStack00000008 = 0;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  return this_ptr_00;
}


// Assembly code:
// 00556ed0: PUSH EBX
//   Label: core_scat.cpp_CScat_ctor_FUN_00556ed0
// 00556ed1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00556ed5: PUSH EDX
// 00556ed6: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 00556edb: ADD ESP,0x4
// 00556ede: MOV EBX,EAX
// 00556ee0: ADD EAX,0x158
// 00556ee5: PUSH 0x641211
//   XREF to: 00641211 (DATA)
// 00556eea: MOV dword ptr [EAX + -0x4],0x662464
//   XREF to: 00662464 (DATA)
// 00556ef1: PUSH EAX
// 00556ef2: MOV dword ptr [EAX + 0x1fa7c],0x0
// 00556efc: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00556f01: LEA EAX,[EBX + 0x1fbd8]
// 00556f07: MOV dword ptr [EBX + 0x1fbe4],0x3f800000
// 00556f11: ADD ESP,0x8
// 00556f14: MOV dword ptr [EAX + 0x8],0x0
// 00556f1b: PUSH EBX
// 00556f1c: MOV EDX,dword ptr [EAX + 0x8]
// 00556f1f: MOV dword ptr [EAX + 0x4],EDX
// 00556f22: MOV EDX,dword ptr [EAX + 0x4]
// 00556f25: MOV dword ptr [EAX],EDX
// 00556f27: CALL core_scat.cpp_FUN_00557150
//   XREF to: 00557150 (UNCONDITIONAL_CALL)
// 00556f2c: ADD ESP,0x4
// 00556f2f: MOV dword ptr [EBX + 0x1fbe8],0x0
// 00556f39: PUSH 0x0
// 00556f3b: MOV dword ptr [EBX + 0x1fbf0],0x0
// 00556f45: PUSH 0x64121a
//   XREF to: 0064121a (DATA)
// 00556f4a: MOV dword ptr [EBX + 0x1fbf8],0x0
// 00556f54: PUSH 0x1
// 00556f56: MOV dword ptr [EBX + 0x1fbfc],0x0
// 00556f60: PUSH 0x0
// 00556f62: FLD float ptr [EBX + 0x1fbf0]
// 00556f68: PUSH EBX
// 00556f69: FSTP float ptr [EBX + 0x1fbec]
// 00556f6f: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 00556f74: ADD ESP,0x14
// 00556f77: PUSH 0x0
// 00556f79: PUSH 0x641230
//   XREF to: 00641230 (DATA)
// 00556f7e: PUSH 0x2
// 00556f80: PUSH 0x1
// 00556f82: PUSH EBX
// 00556f83: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 00556f88: ADD ESP,0x14
// 00556f8b: MOV EAX,EBX
// 00556f8d: POP EBX
// 00556f8e: RET
