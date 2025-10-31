// Name: core_ladder.cpp_FUN_00502d00
// Address: 00502d00
// Address Range: [[00502d00, 00502e4e]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502d00()
// Globals:
//   double DOUBLE_00630e80 = 4
//   double DOUBLE_00630e88 = 0.5
//   undefined4 DAT_006605e8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502d00(undefined4 param_1) */

float10 core_ladder_cpp_FUN_00502d00(void)

{
  float fVar1;
  int iVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  float10 in_ST0;
  double dVar3;
  CDemonActor *in_stack_00000004;
  float fStack_2c;
  CKeys *pCVar4;
  
  pCVar4 = g_CKeysPtr;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  else {
    iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.y =
           in_stack_00000004[2].location.position.y - fStack_2c;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.y =
           in_stack_00000004[2].location.position.y + (float)pCVar4;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.z =
           in_stack_00000004[2].location.position.z - DAT_006605e8;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x10);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.z =
           DAT_006605e8 + in_stack_00000004[2].location.position.z;
    }
    if (in_stack_00000004[2].location.position.y < (float)DOUBLE_00630e88) {
      in_stack_00000004[2].location.position.y = 0.5;
    }
    if (in_stack_00000004[2].location.position.z < DAT_006605e8) {
      in_stack_00000004[2].location.position.z = DAT_006605e8;
    }
  }
  dVar3 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar1 = (float)(double)CONCAT44(extraout_EDX,extraout_EAX) * DAT_006605e8;
  in_stack_00000004[2].location.area_id = 0;
  in_stack_00000004[2].location.position.z = fVar1;
  return (float10)dVar3;
}


// Assembly code:
// 00502d00: PUSH EBX
//   Label: core_ladder.cpp_FUN_00502d00
// 00502d01: SUB ESP,0xc
// 00502d04: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00502d08: PUSH 0x1d
// 00502d0a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00502d0f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00502d10: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00502d12: CALL dword ptr [EDX]
// 00502d14: ADD ESP,0x8
// 00502d17: TEST EAX,EAX
// 00502d19: JZ 0x00502e44
//   XREF to: 00502e44 (CONDITIONAL_JUMP)
// 00502d1f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00502d24: PUSH 0x4b
// 00502d26: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00502d2c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00502d31: FMUL double ptr [0x00630e80]
//   XREF to: 00630e80 (READ)
// 00502d37: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00502d38: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00502d3a: FSTP float ptr [ESP + 0x10]
// 00502d3e: CALL dword ptr [EDX]
// 00502d40: ADD ESP,0x8
// 00502d43: TEST EAX,EAX
// 00502d45: JZ 0x00502d57
//   XREF to: 00502d57 (CONDITIONAL_JUMP)
// 00502d47: FLD float ptr [EBX + 0x2d4]
// 00502d4d: FSUB float ptr [ESP + 0x8]
// 00502d51: FSTP float ptr [EBX + 0x2d4]
// 00502d57: PUSH 0x4d
//   Label: LAB_00502d57
// 00502d59: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00502d5e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00502d5f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00502d61: CALL dword ptr [EDX]
// 00502d63: ADD ESP,0x8
// 00502d66: TEST EAX,EAX
// 00502d68: JZ 0x00502d7a
//   XREF to: 00502d7a (CONDITIONAL_JUMP)
// 00502d6a: FLD float ptr [EBX + 0x2d4]
// 00502d70: FADD float ptr [ESP + 0x8]
// 00502d74: FSTP float ptr [EBX + 0x2d4]
// 00502d7a: PUSH 0x1e
//   Label: LAB_00502d7a
// 00502d7c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00502d81: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00502d82: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00502d84: CALL dword ptr [EDX + 0x4]
// 00502d87: ADD ESP,0x8
// 00502d8a: TEST EAX,EAX
// 00502d8c: JZ 0x00502da0
//   XREF to: 00502da0 (CONDITIONAL_JUMP)
// 00502d8e: FLD float ptr [0x006605e8]
//   XREF to: 006605e8 (READ)
// 00502d94: FSUBR float ptr [EBX + 0x2d8]
// 00502d9a: FSTP float ptr [EBX + 0x2d8]
// 00502da0: PUSH 0x10
//   Label: LAB_00502da0
// 00502da2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00502da7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00502da8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00502daa: CALL dword ptr [EDX + 0x4]
// 00502dad: ADD ESP,0x8
// 00502db0: TEST EAX,EAX
// 00502db2: JZ 0x00502dc6
//   XREF to: 00502dc6 (CONDITIONAL_JUMP)
// 00502db4: FLD float ptr [0x006605e8]
//   XREF to: 006605e8 (READ)
// 00502dba: FADD float ptr [EBX + 0x2d8]
// 00502dc0: FSTP float ptr [EBX + 0x2d8]
// 00502dc6: FLD float ptr [EBX + 0x2d4]
//   Label: LAB_00502dc6
// 00502dcc: FCOMP double ptr [0x00630e88]
//   XREF to: 00630e88 (READ)
// 00502dd2: FNSTSW AX
// 00502dd4: SAHF
// 00502dd5: JNC 0x00502de1
//   XREF to: 00502de1 (CONDITIONAL_JUMP)
// 00502dd7: MOV dword ptr [EBX + 0x2d4],0x3f000000
// 00502de1: FLD float ptr [EBX + 0x2d8]
//   Label: LAB_00502de1
// 00502de7: FCOMP float ptr [0x006605e8]
//   XREF to: 006605e8 (READ)
// 00502ded: FNSTSW AX
// 00502def: SAHF
// 00502df0: JNC 0x00502dfd
//   XREF to: 00502dfd (CONDITIONAL_JUMP)
// 00502df2: MOV EAX,[0x006605e8]
//   XREF to: 006605e8 (READ)
// 00502df7: MOV dword ptr [EBX + 0x2d8],EAX
// 00502dfd: FLD float ptr [EBX + 0x2d8]
//   Label: LAB_00502dfd
// 00502e03: FDIV float ptr [0x006605e8]
//   XREF to: 006605e8 (READ)
// 00502e09: FADD double ptr [0x00630e88]
//   XREF to: 00630e88 (READ)
// 00502e0f: SUB ESP,0x8
// 00502e12: FSTP double ptr [ESP]
// 00502e15: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00502e1a: MOV dword ptr [ESP + 0x8],EAX
// 00502e1e: MOV dword ptr [ESP + 0xc],EDX
// 00502e22: FLD double ptr [ESP + 0x8]
// 00502e26: FMUL float ptr [0x006605e8]
//   XREF to: 006605e8 (READ)
// 00502e2c: MOV dword ptr [EBX + 0x2dc],0x0
// 00502e36: ADD ESP,0x8
// 00502e39: FSTP float ptr [EBX + 0x2d8]
// 00502e3f: ADD ESP,0xc
// 00502e42: POP EBX
// 00502e43: RET
// 00502e44: PUSH EBX
//   Label: LAB_00502e44
// 00502e45: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 00502e4a: ADD ESP,0x4
// 00502e4d: JMP 0x00502dfd
//   XREF to: 00502dfd (UNCONDITIONAL_JUMP)
