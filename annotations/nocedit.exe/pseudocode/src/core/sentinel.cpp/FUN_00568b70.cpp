// Name: core_sentinel.cpp_FUN_00568b70
// Address: 00568b70
// Address Range: [[00568b70, 00568c6d]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568b70()
// Globals:
//   float FLOAT_00645882 = 0.5
//   float FLOAT_00645886 = -0.5
//   float FLOAT_0064588a = -4
//   undefined4 DAT_03114210
//   undefined4 DAT_03114214
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_sentinel.cpp_FUN_00568b70(undefined4 param_1, undefined4
   param_2) */

undefined4 core_sentinel_cpp_FUN_00568b70(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (in_stack_00000008 == 0) {
    return 0;
  }
  pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_10,&g_ZeroVector,
                      (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_03114210 * 4].z);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_34,&g_ZeroVector,
                      (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_03114214 * 4].z);
  local_1c.x = (pCVar2->x + pCVar1->x) * FLOAT_00645882;
  local_1c.y = (pCVar2->y + pCVar1->y) * FLOAT_00645882;
  local_1c.z = (pCVar2->z + pCVar1->z) * FLOAT_00645882 + FLOAT_00645886;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_28,&local_1c);
  local_28.y = local_28.y + FLOAT_0064588a;
  (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x60))();
  return 1;
}


// Assembly code:
// 00568b70: PUSH EDI
//   Label: core_sentinel.cpp_FUN_00568b70
// 00568b71: SUB ESP,0x3c
// 00568b74: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 00568b78: TEST EDI,EDI
// 00568b7a: JNZ 0x00568b83
//   XREF to: 00568b83 (CONDITIONAL_JUMP)
// 00568b7c: XOR EAX,EAX
// 00568b7e: ADD ESP,0x3c
// 00568b81: POP EDI
// 00568b82: RET
// 00568b83: PUSH ESI
//   Label: LAB_00568b83
// 00568b84: PUSH EBX
// 00568b85: MOV EDX,dword ptr [0x03114210]
//   XREF to: 03114210 (READ)
// 00568b8b: LEA EAX,[EDX*0x4 + 0x0]
// 00568b92: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00568b96: SUB EAX,EDX
// 00568b98: ADD ESI,0xfd8
// 00568b9e: SHL EAX,0x4
// 00568ba1: ADD EAX,ESI
// 00568ba3: PUSH EAX
// 00568ba4: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00568ba9: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x10] (DATA)
// 00568bad: PUSH EAX
// 00568bae: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00568bb3: MOV EDX,dword ptr [0x03114214]
//   XREF to: 03114214 (READ)
// 00568bb9: MOV EBX,EAX
// 00568bbb: LEA EAX,[EDX*0x4 + 0x0]
// 00568bc2: SUB EAX,EDX
// 00568bc4: SHL EAX,0x4
// 00568bc7: ADD ESP,0xc
// 00568bca: ADD EAX,ESI
// 00568bcc: PUSH EAX
// 00568bcd: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00568bd2: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x34] (DATA)
// 00568bd6: PUSH EAX
// 00568bd7: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00568bdc: FLD float ptr [EAX]
// 00568bde: FADD float ptr [EBX]
// 00568be0: ADD ESP,0xc
// 00568be3: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 00568be7: FLD float ptr [EAX + 0x4]
// 00568bea: FADD float ptr [EBX + 0x4]
// 00568bed: FXCH
// 00568bef: FLD float ptr [0x00645882]
//   XREF to: 00645882 (READ)
// 00568bf5: FXCH
// 00568bf7: FMUL ST1
// 00568bf9: FXCH ST2
// 00568bfb: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (WRITE)
// 00568bff: FLD float ptr [EAX + 0x8]
// 00568c02: FADD float ptr [EBX + 0x8]
// 00568c05: FXCH
// 00568c07: FMUL ST2
// 00568c09: FXCH
// 00568c0b: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (WRITE)
// 00568c0f: FMULP ST2
// 00568c11: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00568c15: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x1c] (DATA)
// 00568c19: FXCH ST2
// 00568c1b: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00568c1f: PUSH EAX
// 00568c20: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x28] (DATA)
// 00568c24: FXCH
// 00568c26: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (WRITE)
// 00568c2a: PUSH EAX
// 00568c2b: FADD float ptr [0x00645886]
//   XREF to: 00645886 (READ)
// 00568c31: PUSH EDX
// 00568c32: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (WRITE)
// 00568c36: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00568c3b: ADD ESP,0xc
// 00568c3e: LEA EAX,[EDI + 0x30]
// 00568c41: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (READ)
// 00568c45: PUSH EAX
// 00568c46: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x28] (DATA)
// 00568c4a: FADD float ptr [0x0064588a]
//   XREF to: 0064588a (READ)
// 00568c50: PUSH EAX
// 00568c51: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (WRITE)
// 00568c55: MOV EDX,dword ptr [EDI + 0x154]
// 00568c5b: PUSH EDI
// 00568c5c: CALL dword ptr [EDX + 0x60]
// 00568c5f: MOV EAX,0x1
// 00568c64: ADD ESP,0xc
// 00568c67: POP EBX
// 00568c68: POP ESI
// 00568c69: ADD ESP,0x3c
// 00568c6c: POP EDI
// 00568c6d: RET
