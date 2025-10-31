// Name: core_flame.cpp_FUN_004caf60
// Address: 004caf60
// Address Range: [[004caf60, 004cb096]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004caf60()
// Globals:
//   double DOUBLE_0062a26e = 4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_flamecan.cpp_FUN_004cad90

#include "nocturne.h"

/* Signature: undefined1 actors_other_flamecan.cpp_FUN_004caf60(undefined4 param_1) */

void core_flame_cpp_FUN_004caf60(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  float in_stack_00000020;
  float in_stack_00000034;
  float in_stack_00000048;
  float in_stack_0000005c;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name - in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name + in_stack_00000034;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000048;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_0000005c;
    }
    if (*(int *)in_stack_00000004[1].actor_name < 0x3dcccccd) {
      in_stack_00000004[1].actor_name[0] = -0x33;
      in_stack_00000004[1].actor_name[1] = -0x34;
      in_stack_00000004[1].actor_name[2] = -0x34;
      in_stack_00000004[1].actor_name[3] = '=';
    }
    if (*(float *)(in_stack_00000004[1].actor_name + 4) < 0.1) {
      in_stack_00000004[1].actor_name[4] = -0x33;
      in_stack_00000004[1].actor_name[5] = -0x34;
      in_stack_00000004[1].actor_name[6] = -0x34;
      in_stack_00000004[1].actor_name[7] = '=';
    }
    if (*(float *)(in_stack_00000004[1].actor_name + 8) < 0.1) {
      in_stack_00000004[1].actor_name[8] = -0x33;
      in_stack_00000004[1].actor_name[9] = -0x34;
      in_stack_00000004[1].actor_name[10] = -0x34;
      in_stack_00000004[1].actor_name[0xb] = '=';
    }
    *(undefined4 *)(in_stack_00000004[1].actor_name + 8) =
         *(undefined4 *)in_stack_00000004[1].actor_name;
    core_flamecan_cpp_FUN_004cad90();
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  core_flamecan_cpp_FUN_004cad90();
  return;
}


// Assembly code:
// 004caf60: PUSH EBX
//   Label: core_flame.cpp_FUN_004caf60
// 004caf61: SUB ESP,0x8
// 004caf64: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004caf68: PUSH 0x1d
// 004caf6a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004caf6f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004caf70: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004caf72: CALL dword ptr [EDX]
// 004caf74: ADD ESP,0x8
// 004caf77: TEST EAX,EAX
// 004caf79: JZ 0x004cb080
//   XREF to: 004cb080 (CONDITIONAL_JUMP)
// 004caf7f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004caf84: PUSH 0x4b
// 004caf86: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004caf8c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004caf91: FMUL double ptr [0x0062a26e]
//   XREF to: 0062a26e (READ)
// 004caf97: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004caf98: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004caf9a: FSTP float ptr [ESP + 0xc]
// 004caf9e: CALL dword ptr [EDX]
// 004cafa0: ADD ESP,0x8
// 004cafa3: TEST EAX,EAX
// 004cafa5: JZ 0x004cafb7
//   XREF to: 004cafb7 (CONDITIONAL_JUMP)
// 004cafa7: FLD float ptr [EBX + 0x158]
// 004cafad: FSUB float ptr [ESP + 0x4]
// 004cafb1: FSTP float ptr [EBX + 0x158]
// 004cafb7: PUSH 0x4d
//   Label: LAB_004cafb7
// 004cafb9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004cafbe: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004cafbf: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004cafc1: CALL dword ptr [EDX]
// 004cafc3: ADD ESP,0x8
// 004cafc6: TEST EAX,EAX
// 004cafc8: JZ 0x004cafda
//   XREF to: 004cafda (CONDITIONAL_JUMP)
// 004cafca: FLD float ptr [EBX + 0x158]
// 004cafd0: FADD float ptr [ESP + 0x4]
// 004cafd4: FSTP float ptr [EBX + 0x158]
// 004cafda: PUSH 0x1e
//   Label: LAB_004cafda
// 004cafdc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004cafe1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004cafe2: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004cafe4: CALL dword ptr [EDX]
// 004cafe6: ADD ESP,0x8
// 004cafe9: TEST EAX,EAX
// 004cafeb: JZ 0x004caffd
//   XREF to: 004caffd (CONDITIONAL_JUMP)
// 004cafed: FLD float ptr [EBX + 0x15c]
// 004caff3: FSUB float ptr [ESP + 0x4]
// 004caff7: FSTP float ptr [EBX + 0x15c]
// 004caffd: PUSH 0x10
//   Label: LAB_004caffd
// 004cafff: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004cb004: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004cb005: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004cb007: CALL dword ptr [EDX]
// 004cb009: ADD ESP,0x8
// 004cb00c: TEST EAX,EAX
// 004cb00e: JZ 0x004cb020
//   XREF to: 004cb020 (CONDITIONAL_JUMP)
// 004cb010: FLD float ptr [EBX + 0x15c]
// 004cb016: FADD float ptr [ESP + 0x4]
// 004cb01a: FSTP float ptr [EBX + 0x15c]
// 004cb020: MOV EDX,0x3dcccccd
//   Label: LAB_004cb020
// 004cb025: MOV ECX,dword ptr [EBX + 0x158]
// 004cb02b: MOV dword ptr [ESP],EDX
// 004cb02e: CMP ECX,EDX
// 004cb030: JGE 0x004cb038
//   XREF to: 004cb038 (CONDITIONAL_JUMP)
// 004cb032: MOV dword ptr [EBX + 0x158],EDX
// 004cb038: FLD float ptr [EBX + 0x15c]
//   Label: LAB_004cb038
// 004cb03e: FCOMP float ptr [ESP]
// 004cb041: FNSTSW AX
// 004cb043: SAHF
// 004cb044: JNC 0x004cb04f
//   XREF to: 004cb04f (CONDITIONAL_JUMP)
// 004cb046: MOV EAX,dword ptr [ESP]
// 004cb049: MOV dword ptr [EBX + 0x15c],EAX
// 004cb04f: FLD float ptr [EBX + 0x160]
//   Label: LAB_004cb04f
// 004cb055: FCOMP float ptr [ESP]
// 004cb058: FNSTSW AX
// 004cb05a: SAHF
// 004cb05b: JNC 0x004cb066
//   XREF to: 004cb066 (CONDITIONAL_JUMP)
// 004cb05d: MOV EAX,dword ptr [ESP]
// 004cb060: MOV dword ptr [EBX + 0x160],EAX
// 004cb066: MOV EAX,dword ptr [EBX + 0x158]
//   Label: LAB_004cb066
// 004cb06c: MOV dword ptr [EBX + 0x160],EAX
// 004cb072: PUSH EBX
// 004cb073: CALL core_flamecan.cpp_FUN_004cad90
//   XREF to: 004cad90 (UNCONDITIONAL_CALL)
// 004cb078: ADD ESP,0x4
// 004cb07b: ADD ESP,0x8
// 004cb07e: POP EBX
// 004cb07f: RET
// 004cb080: PUSH EBX
//   Label: LAB_004cb080
// 004cb081: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004cb086: ADD ESP,0x4
// 004cb089: PUSH EBX
// 004cb08a: CALL core_flamecan.cpp_FUN_004cad90
//   XREF to: 004cad90 (UNCONDITIONAL_CALL)
// 004cb08f: ADD ESP,0x4
// 004cb092: ADD ESP,0x8
// 004cb095: POP EBX
// 004cb096: RET
