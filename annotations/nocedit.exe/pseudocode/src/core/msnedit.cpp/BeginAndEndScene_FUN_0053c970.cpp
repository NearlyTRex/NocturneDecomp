// Name: core_msnedit.cpp_BeginAndEndScene_FUN_0053c970
// Address: 0053c970
// Address Range: [[0053c970, 0053c9f9]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_BeginAndEndScene_FUN_0053c970()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_FUN_0053ca00 (0053ca00) at 0053ca1a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c930 (0053c930) at 0053c961 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02f7c53c
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_msnedit.cpp_FUN_00535c60

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_BeginAndEndScene(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_msnedit_cpp_BeginAndEndScene_FUN_0053c970(void)

{
  undefined4 *puVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if ((((in_stack_00000008 != 0) && (DAT_02f7c53c != 3)) && (DAT_02f7c53c != 4)) &&
     (((*(int *)(in_stack_00000004 + 0x14) < in_stack_0000000c &&
       (in_stack_0000000c < *(int *)(in_stack_00000004 + 0x1c))) &&
      ((*(int *)(in_stack_00000004 + 0x18) < in_stack_00000010 &&
       (in_stack_00000010 < *(int *)(in_stack_00000004 + 0x20))))))) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    puVar1 = (undefined4 *)core_msnedit_cpp_FUN_00535c60();
    *(undefined4 *)(in_stack_00000010 + 0x20) = *puVar1;
    *(undefined4 *)(in_stack_00000010 + 0x24) = puVar1[1];
    *(undefined4 *)(in_stack_00000010 + 0x28) = puVar1[2];
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    return;
  }
  return;
}


// Assembly code:
// 0053c970: PUSH EBX
//   Label: core_msnedit.cpp_BeginAndEndScene_FUN_0053c970
// 0053c971: PUSH ESI
// 0053c972: SUB ESP,0xc
// 0053c975: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0053c979: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0053c97d: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0053c981: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0x8] (READ)
// 0053c986: JZ 0x0053c9ac
//   XREF to: 0053c9ac (CONDITIONAL_JUMP)
// 0053c988: MOV ECX,dword ptr [0x02f7c53c]
//   XREF to: 02f7c53c (READ)
// 0053c98e: CMP ECX,0x3
// 0053c991: JZ 0x0053c9ac
//   XREF to: 0053c9ac (CONDITIONAL_JUMP)
// 0053c993: CMP ECX,0x4
// 0053c996: JZ 0x0053c9ac
//   XREF to: 0053c9ac (CONDITIONAL_JUMP)
// 0053c998: CMP EBX,dword ptr [EAX + 0x14]
// 0053c99b: JLE 0x0053c9ac
//   XREF to: 0053c9ac (CONDITIONAL_JUMP)
// 0053c99d: CMP EBX,dword ptr [EAX + 0x1c]
// 0053c9a0: JGE 0x0053c9ac
//   XREF to: 0053c9ac (CONDITIONAL_JUMP)
// 0053c9a2: CMP ESI,dword ptr [EAX + 0x18]
// 0053c9a5: JLE 0x0053c9ac
//   XREF to: 0053c9ac (CONDITIONAL_JUMP)
// 0053c9a7: CMP ESI,dword ptr [EAX + 0x20]
// 0053c9aa: JL 0x0053c9b2
//   XREF to: 0053c9b2 (CONDITIONAL_JUMP)
// 0053c9ac: ADD ESP,0xc
//   Label: LAB_0053c9ac
// 0053c9af: POP ESI
// 0053c9b0: POP EBX
// 0053c9b1: RET
// 0053c9b2: PUSH 0x1
//   Label: LAB_0053c9b2
// 0053c9b4: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053c9b9: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0053c9be: ADD ESP,0x8
// 0053c9c1: PUSH ESI
// 0053c9c2: PUSH EBX
// 0053c9c3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 0053c9c7: PUSH EAX
// 0053c9c8: CALL core_msnedit.cpp_FUN_00535c60
//   XREF to: 00535c60 (UNCONDITIONAL_CALL)
// 0053c9cd: ADD ESP,0xc
// 0053c9d0: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0053c9d4: FLD float ptr [EAX]
// 0053c9d6: PUSH 0x0
// 0053c9d8: FSTP float ptr [EDX + 0x20]
// 0053c9db: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053c9e0: MOV ECX,dword ptr [EAX + 0x4]
// 0053c9e3: MOV dword ptr [EDX + 0x24],ECX
// 0053c9e6: MOV ECX,dword ptr [EAX + 0x8]
// 0053c9e9: MOV dword ptr [EDX + 0x28],ECX
// 0053c9ec: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0053c9f1: ADD ESP,0x8
// 0053c9f4: ADD ESP,0xc
// 0053c9f7: POP ESI
// 0053c9f8: POP EBX
// 0053c9f9: RET
