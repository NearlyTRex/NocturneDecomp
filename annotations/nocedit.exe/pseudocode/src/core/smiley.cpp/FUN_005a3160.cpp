// Name: core_smiley.cpp_FUN_005a3160
// Address: 005a3160
// Address Range: [[005a3160, 005a3212]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a3160()
// Globals:
//   undefined4 DAT_0064f322
//   undefined4 DAT_03f48fa8
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a3160(undefined4 param_1, undefined4
   param_2) */

undefined4 core_smiley_cpp_FUN_005a3160(void)

{
  int iVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  SCollisionInfo *in_stack_ffffffe0;
  CVector3f CStack_18;
  
  if (in_stack_00000008 == 0) {
    return 0;
  }
  iVar1 = (*in_stack_00000004->vtable[1].hasCollision)(in_stack_00000004,in_stack_ffffffe0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x104))();
    return 1;
  }
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_005f4dc0
                 ((CVector3f *)&stack0xfffffff4,&g_ZeroVector,
                  (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_03f48fa8 * 4].z);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&CStack_18,input_local_point);
  CStack_18.y = CStack_18.y + _DAT_0064f322;
  (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x60))();
  return 1;
}


// Assembly code:
// 005a3160: PUSH EBX
//   Label: core_smiley.cpp_FUN_005a3160
// 005a3161: PUSH ESI
// 005a3162: SUB ESP,0x18
// 005a3165: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005a3169: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005a316d: TEST EBX,EBX
// 005a316f: JNZ 0x005a3179
//   XREF to: 005a3179 (CONDITIONAL_JUMP)
// 005a3171: XOR EAX,EAX
// 005a3173: ADD ESP,0x18
// 005a3176: POP ESI
// 005a3177: POP EBX
// 005a3178: RET
// 005a3179: PUSH ESI
//   Label: LAB_005a3179
// 005a317a: MOV EAX,dword ptr [ESI + 0x154]
// 005a3180: CALL dword ptr [EAX + 0x120]
// 005a3186: ADD ESP,0x4
// 005a3189: TEST EAX,EAX
// 005a318b: JZ 0x005a31a8
//   XREF to: 005a31a8 (CONDITIONAL_JUMP)
// 005a318d: PUSH EBX
// 005a318e: MOV EAX,dword ptr [EBX + 0x154]
// 005a3194: CALL dword ptr [EAX + 0x104]
// 005a319a: MOV EAX,0x1
// 005a319f: ADD ESP,0x4
// 005a31a2: ADD ESP,0x18
// 005a31a5: POP ESI
// 005a31a6: POP EBX
// 005a31a7: RET
// 005a31a8: MOV EDX,dword ptr [0x03f48fa8]
//   Label: LAB_005a31a8
//   XREF to: 03f48fa8 (READ)
// 005a31ae: LEA EAX,[EDX*0x4 + 0x0]
// 005a31b5: SUB EAX,EDX
// 005a31b7: SHL EAX,0x4
// 005a31ba: LEA EDX,[ESI + 0xfd8]
// 005a31c0: ADD EAX,EDX
// 005a31c2: PUSH EAX
// 005a31c3: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005a31c8: LEA EAX,[ESP + 0x14]
// 005a31cc: PUSH EAX
// 005a31cd: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005a31d2: ADD ESP,0xc
// 005a31d5: PUSH EAX
// 005a31d6: LEA EAX,[ESP + 0x4]
// 005a31da: PUSH EAX
// 005a31db: PUSH ESI
// 005a31dc: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005a31e1: ADD ESP,0xc
// 005a31e4: LEA EAX,[EBX + 0x30]
// 005a31e7: FLD float ptr [ESP + 0x4]
// 005a31eb: PUSH EAX
// 005a31ec: LEA EAX,[ESP + 0x4]
// 005a31f0: FADD float ptr [0x0064f322]
//   XREF to: 0064f322 (READ)
// 005a31f6: PUSH EAX
// 005a31f7: FSTP float ptr [ESP + 0xc]
// 005a31fb: MOV EDX,dword ptr [EBX + 0x154]
// 005a3201: PUSH EBX
// 005a3202: CALL dword ptr [EDX + 0x60]
// 005a3205: MOV EAX,0x1
// 005a320a: ADD ESP,0xc
// 005a320d: ADD ESP,0x18
// 005a3210: POP ESI
// 005a3211: POP EBX
// 005a3212: RET
