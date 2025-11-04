// Name: core_skeledit.cpp_FUN_0058e4e0
// Address: 0058e4e0
// Address Range: [[0058e4e0, 0058e5f9]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e4e0()
// Globals:
//   TerminatedCString s_core_skeledit_cpp_0064af04
//   TerminatedCString s_core_skeledit_cpp_0064af19
//   TerminatedCString s_CDeformableModel_groundB_0064af2e
//   TerminatedCString s_core_skeledit_cpp_0064af5c
//   undefined4 DAT_0064af72
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058e600
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480
//   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeledit_cpp_FUN_0058e4e0(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x30);
  this_ptr = (CDeformableModelInstance *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeledit.cpp",0x9bc);
  if (this_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr);
  }
  if (this_ptr == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x9bd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::groundBias - out of memory!");
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0480(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
            (this_ptr,in_stack_00000008,in_stack_0000000c);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a01d0(this_ptr);
  iVar1 = this_ptr->field14_0x2234;
  iVar3 = 0;
  iVar2 = *(int *)(iVar1 + 4);
  if (0 < *(int *)(in_stack_00000004 + 0x2c)) {
    do {
      if (*(int *)(iVar1 + 4) < iVar2) {
        iVar2 = *(int *)(iVar1 + 4);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x2c));
  }
  core_skeledit_cpp_FUN_0058e600();
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0x9d1;
  (*(code *)((this_ptr->motion_controller).vtable)->dtor)();
  return;
}


// Assembly code:
// 0058e4e0: PUSH 0x30
//   Label: core_skeledit.cpp_FUN_0058e4e0
// 0058e4e5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058e4ea: PUSH EBX
// 0058e4eb: PUSH ESI
// 0058e4ec: PUSH EDI
// 0058e4ed: PUSH EBP
// 0058e4ee: SUB ESP,0x10
// 0058e4f1: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0058e4f5: PUSH 0x9bc
// 0058e4fa: PUSH 0x64af04
//   XREF to: 0064af04 (DATA)
// 0058e4ff: PUSH 0x22b4
// 0058e504: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0058e509: ADD ESP,0xc
// 0058e50c: TEST EAX,EAX
// 0058e50e: JNZ 0x0058e5ec
//   XREF to: 0058e5ec (CONDITIONAL_JUMP)
// 0058e514: MOV ESI,EAX
//   Label: LAB_0058e514
// 0058e516: TEST EAX,EAX
// 0058e518: JNZ 0x0058e53d
//   XREF to: 0058e53d (CONDITIONAL_JUMP)
// 0058e51a: MOV EDX,0x64af19
//   XREF to: 0064af19 (DATA)
// 0058e51f: MOV ECX,0x9bd
// 0058e524: PUSH 0x64af2e
//   XREF to: 0064af2e (DATA)
// 0058e529: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0058e52f: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0058e535: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058e53a: ADD ESP,0x4
// 0058e53d: PUSH EBX
//   Label: LAB_0058e53d
// 0058e53e: PUSH ESI
// 0058e53f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480
//   XREF to: 005a0480 (UNCONDITIONAL_CALL)
// 0058e544: ADD ESP,0x8
// 0058e547: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0058e54b: PUSH dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0058e54f: PUSH EDI
// 0058e550: PUSH ESI
// 0058e551: CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
//   XREF to: 0059e070 (UNCONDITIONAL_CALL)
// 0058e556: ADD ESP,0xc
// 0058e559: PUSH 0x0
// 0058e55b: PUSH ESI
// 0058e55c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 0058e561: ADD ESP,0x8
// 0058e564: MOV EAX,dword ptr [ESI + 0x2234]
// 0058e56a: MOV EBP,dword ptr [EBX + 0x2c]
// 0058e56d: XOR EDX,EDX
// 0058e56f: MOV ECX,dword ptr [EAX + 0x4]
// 0058e572: TEST EBP,EBP
// 0058e574: JLE 0x0058e58a
//   XREF to: 0058e58a (CONDITIONAL_JUMP)
// 0058e576: MOV EBP,dword ptr [EAX + 0x4]
//   Label: LAB_0058e576
// 0058e579: CMP ECX,EBP
// 0058e57b: JLE 0x0058e57f
//   XREF to: 0058e57f (CONDITIONAL_JUMP)
// 0058e57d: MOV ECX,EBP
// 0058e57f: INC EDX
//   Label: LAB_0058e57f
// 0058e580: MOV EDI,dword ptr [EBX + 0x2c]
// 0058e583: ADD EAX,0xc
// 0058e586: CMP EDX,EDI
// 0058e588: JL 0x0058e576
//   XREF to: 0058e576 (CONDITIONAL_JUMP)
// 0058e58a: MOV EAX,[0x03f87558]
//   Label: LAB_0058e58a
//   XREF to: 03f87558 (READ)
// 0058e58f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 0058e592: MOV EAX,[0x03f8755c]
//   XREF to: 03f8755c (READ)
// 0058e597: NEG ECX
// 0058e599: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058e59d: MOV EAX,[0x03f87560]
//   XREF to: 03f87560 (READ)
// 0058e5a2: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0058e5a6: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058e5aa: MOV EAX,ESP
// 0058e5ac: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0058e5b0: PUSH EAX
// 0058e5b1: FMUL double ptr [0x0064af72]
//   XREF to: 0064af72 (READ)
// 0058e5b7: PUSH EBX
// 0058e5b8: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0058e5bc: CALL core_skeledit.cpp_FUN_0058e600
//   XREF to: 0058e600 (UNCONDITIONAL_CALL)
// 0058e5c1: ADD ESP,0x8
// 0058e5c4: MOV EAX,0x64af5c
//   XREF to: 0064af5c (DATA)
// 0058e5c9: PUSH 0x2
// 0058e5cb: MOV EDX,0x9d1
// 0058e5d0: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 0058e5d5: PUSH ESI
// 0058e5d6: MOV EAX,dword ptr [ESI + 0x50]
// 0058e5d9: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 0058e5df: CALL dword ptr [EAX]
// 0058e5e1: ADD ESP,0x8
// 0058e5e4: ADD ESP,0x10
// 0058e5e7: POP EBP
// 0058e5e8: POP EDI
// 0058e5e9: POP ESI
// 0058e5ea: POP EBX
// 0058e5eb: RET
// 0058e5ec: PUSH EAX
//   Label: LAB_0058e5ec
// 0058e5ed: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 0058e5f2: ADD ESP,0x4
// 0058e5f5: JMP 0x0058e514
//   XREF to: 0058e514 (UNCONDITIONAL_JUMP)
