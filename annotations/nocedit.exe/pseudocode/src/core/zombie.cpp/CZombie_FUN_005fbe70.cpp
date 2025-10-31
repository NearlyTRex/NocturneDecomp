// Name: core_zombie.cpp_CZombie_FUN_005fbe70
// Address: 005fbe70
// Address Range: [[005fbe70, 005fbfce]]
// Convention: __cdecl
// Signature: int core_zombie.cpp_CZombie_FUN_005fbe70(CZombie * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_charactr.cpp_CCharacter_FUN_0042b0e0
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fbe70(CZombie *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  CMatrix3x4f *matrix;
  undefined4 local_c4 [12];
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  if ((*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 != 0) &&
     (this_ptr->is_miner_zombie != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059f820();
    matrix = (CMatrix3x4f *)&stack0xffffff0c;
    local_70.y = 0.5;
    local_70.z = 0.5;
    puVar2 = local_c4;
    puVar3 = (undefined4 *)&stack0xffffff0c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_70.x = 0.0;
    core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_94,&local_70,matrix);
    core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)this_ptr);
    local_58.x = 0.0;
    local_58.y = 0.0;
    local_58.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (&local_40,&local_58,(CMatrix3x4f *)&stack0xffffff0c);
    core_actor_cpp_CDemonActor_FUN_00408e80((CDemonActor *)this_ptr);
    local_28.x = 0.0;
    local_28.y = 0.0;
    local_28.z = 1.0;
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (&local_4c,&local_28,(CMatrix3x4f *)&stack0xffffff0c);
    core_actor_cpp_CDemonActor_FUN_00408e80((CDemonActor *)this_ptr);
    local_64.x = local_1c - local_34;
    local_64.y = local_18 - local_30;
    local_64.z = local_14 - local_2c;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_64);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0(&local_88,(CVector3i *)&local_7c,56.0,6.0);
  }
  if (*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 == 0) {
    return *(int *)(this_ptr->base_enemy).base_character.field13_0x2620;
  }
  core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
  return *(int *)(this_ptr->base_enemy).base_character.field13_0x2620;
}


// Assembly code:
// 005fbe70: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fbe70
// 005fbe71: PUSH ESI
// 005fbe72: PUSH EDI
// 005fbe73: PUSH EBP
// 005fbe74: MOV EBP,ESP
// 005fbe76: SUB ESP,0xe4
// 005fbe7c: SUB EBP,0x7e
// 005fbe7f: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 005fbe85: CMP dword ptr [EBX + 0x2620],0x0
// 005fbe8c: JZ 0x005fbfa1
//   XREF to: 005fbfa1 (CONDITIONAL_JUMP)
// 005fbe92: CMP dword ptr [EBX + 0xbf40],0x0
// 005fbe99: JZ 0x005fbfa1
//   XREF to: 005fbfa1 (CONDITIONAL_JUMP)
// 005fbe9f: MOV ESI,dword ptr [EBX + 0xbf4c]
// 005fbea5: PUSH ESI
// 005fbea6: LEA EAX,[EBX + 0x158]
// 005fbeac: PUSH EAX
// 005fbead: LEA ESI,[EBP + -0x36]
//   XREF to: Stack[-0xc4] (DATA)
// 005fbeb0: LEA EDI,[EBP + -0x66]
//   XREF to: Stack[-0xf4] (DATA)
// 005fbeb3: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
//   XREF to: 0059f820 (UNCONDITIONAL_CALL)
// 005fbeb8: ADD ESP,0x8
// 005fbebb: LEA EAX,[EBP + -0x66]
//   XREF to: Stack[-0xf4] (DATA)
// 005fbebe: MOV ECX,0xc
// 005fbec3: PUSH EAX
// 005fbec4: MOV EAX,0x3f000000
// 005fbec9: LEA ESI,[EBP + -0x36]
//   XREF to: Stack[-0xc4] (DATA)
// 005fbecc: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005fbecf: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005fbed2: LEA EAX,[EBP + 0x1e]
//   XREF to: Stack[-0x70] (DATA)
// 005fbed5: MOVSD.REP ES:EDI,ESI
// 005fbed7: PUSH EAX
// 005fbed8: LEA EAX,[EBP + -0x6]
//   XREF to: Stack[-0x94] (DATA)
// 005fbedb: XOR EDI,EDI
// 005fbedd: PUSH EAX
// 005fbede: MOV dword ptr [EBP + 0x1e],EDI
//   XREF to: Stack[-0x70] (WRITE)
// 005fbee1: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005fbee6: ADD ESP,0xc
// 005fbee9: PUSH EAX
// 005fbeea: LEA EAX,[EBP + 0x6]
//   XREF to: Stack[-0x88] (DATA)
// 005fbeed: PUSH EAX
// 005fbeee: PUSH EBX
// 005fbeef: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005fbef4: ADD ESP,0xc
// 005fbef7: LEA EAX,[EBP + -0x66]
//   XREF to: Stack[-0xf4] (DATA)
// 005fbefa: PUSH EAX
// 005fbefb: LEA EAX,[EBP + 0x36]
//   XREF to: Stack[-0x58] (DATA)
// 005fbefe: PUSH EAX
// 005fbeff: LEA EAX,[EBP + 0x4e]
//   XREF to: Stack[-0x40] (DATA)
// 005fbf02: MOV dword ptr [EBP + 0x36],EDI
//   XREF to: Stack[-0x58] (WRITE)
// 005fbf05: PUSH EAX
// 005fbf06: MOV dword ptr [EBP + 0x3a],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 005fbf09: MOV dword ptr [EBP + 0x3e],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 005fbf0c: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005fbf11: ADD ESP,0xc
// 005fbf14: PUSH EAX
// 005fbf15: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x34] (DATA)
// 005fbf18: PUSH EAX
// 005fbf19: PUSH EBX
// 005fbf1a: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005fbf1f: ADD ESP,0xc
// 005fbf22: LEA EAX,[EBP + -0x66]
//   XREF to: Stack[-0xf4] (DATA)
// 005fbf25: PUSH EAX
// 005fbf26: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 005fbf29: MOV ECX,0x3f800000
// 005fbf2e: PUSH EAX
// 005fbf2f: LEA EAX,[EBP + 0x42]
//   XREF to: Stack[-0x4c] (DATA)
// 005fbf32: MOV dword ptr [EBP + 0x66],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005fbf35: PUSH EAX
// 005fbf36: MOV dword ptr [EBP + 0x6a],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005fbf39: MOV dword ptr [EBP + 0x6e],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005fbf3c: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005fbf41: ADD ESP,0xc
// 005fbf44: PUSH EAX
// 005fbf45: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x1c] (DATA)
// 005fbf48: PUSH EAX
// 005fbf49: PUSH EBX
// 005fbf4a: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005fbf4f: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 005fbf52: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 005fbf55: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 005fbf58: LEA EAX,[EBP + 0x2a]
//   XREF to: Stack[-0x64] (DATA)
// 005fbf5b: ADD ESP,0xc
// 005fbf5e: FXCH ST2
// 005fbf60: FSUB float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 005fbf63: FXCH
// 005fbf65: FSUB float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 005fbf68: FXCH ST2
// 005fbf6a: FSUB float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 005fbf6d: PUSH EAX
// 005fbf6e: FXCH
// 005fbf70: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x64] (WRITE)
// 005fbf73: LEA EAX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 005fbf76: FXCH
// 005fbf78: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x60] (WRITE)
// 005fbf7b: PUSH EAX
// 005fbf7c: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x5c] (WRITE)
// 005fbf7f: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005fbf84: ADD ESP,0x8
// 005fbf87: PUSH 0x40c00000
// 005fbf8c: LEA EAX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 005fbf8f: PUSH 0x42600000
// 005fbf94: PUSH EAX
// 005fbf95: LEA EAX,[EBP + 0x6]
//   XREF to: Stack[-0x88] (DATA)
// 005fbf98: PUSH EAX
// 005fbf99: CALL core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
//   XREF to: 004760d0 (UNCONDITIONAL_CALL)
// 005fbf9e: ADD ESP,0x10
// 005fbfa1: CMP dword ptr [EBX + 0x2620],0x0
//   Label: LAB_005fbfa1
// 005fbfa8: JNZ 0x005fbfb8
//   XREF to: 005fbfb8 (CONDITIONAL_JUMP)
// 005fbfaa: MOV EAX,dword ptr [EBX + 0x2620]
// 005fbfb0: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005fbfb3: POP EBP
// 005fbfb4: POP EDI
// 005fbfb5: POP ESI
// 005fbfb6: POP EBX
// 005fbfb7: RET
// 005fbfb8: PUSH EBX
//   Label: LAB_005fbfb8
// 005fbfb9: CALL core_charactr.cpp_CCharacter_FUN_0042b0e0
//   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)
// 005fbfbe: ADD ESP,0x4
// 005fbfc1: MOV EAX,dword ptr [EBX + 0x2620]
// 005fbfc7: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005fbfca: POP EBP
// 005fbfcb: POP EDI
// 005fbfcc: POP ESI
// 005fbfcd: POP EBX
// 005fbfce: RET
