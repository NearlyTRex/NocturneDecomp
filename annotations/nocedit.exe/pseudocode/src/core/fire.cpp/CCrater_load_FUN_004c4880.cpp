// Name: core_fire.cpp_CCrater_load_FUN_004c4880
// Address: 004c4880
// Address Range: [[004c4880, 004c49bb]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_load_FUN_004c4880(CCrater * this_ptr, FILE * file_handle)
// Cross-references:
//   core_fire.cpp_CFireEffect_load_FUN_004c9300 (004c9300) at 004c935f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_f_f_00629e4f
//   TerminatedCString s_f_f_f_00629e5c
//   TerminatedCString s_f_f_f_00629e66
//   TerminatedCString s_f_f_f_00629e70
//   TerminatedCString s_f_f_f_00629e7a
//   TerminatedCString s_f_f_f_00629e84
//   TerminatedCString s_f_f_f_00629e8e
// Function calls:
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,FILE *file_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%d,%d,%f,%f\n",this_ptr,this_ptr->field0_0x0 + 4,
             this_ptr->field0_0x0 + 8,this_ptr->field0_0x0 + 0x18);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&file_handle->_flag,&file_handle->_handle,
             &file_handle->_bufsize);
  iVar3 = 0;
  iVar1 = in_stack_0000000c + 0x1c;
  iVar4 = in_stack_0000000c + 0x24;
  iVar5 = in_stack_0000000c + 0x20;
  do {
    iVar2 = iVar3 * 0xc;
    iVar3 = iVar3 + 1;
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n",iVar2 + iVar1,iVar5,iVar4);
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + 0xc;
  } while (iVar3 < 3);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",in_stack_00000010 + 0x40,in_stack_00000010 + 0x44,
             in_stack_00000010 + 0x48);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",in_stack_00000014 + 0x4c,in_stack_00000014 + 0x50,
             in_stack_00000014 + 0x54);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",in_stack_00000018 + 0x58,in_stack_00000018 + 0x5c,
             in_stack_00000018 + 0x60);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",in_stack_0000001c + 100,in_stack_0000001c + 0x68);
  return;
}


// Assembly code:
// 004c4880: PUSH EBX
//   Label: core_fire.cpp_CCrater_load_FUN_004c4880
// 004c4881: PUSH ESI
// 004c4882: PUSH EDI
// 004c4883: PUSH EBP
// 004c4884: SUB ESP,0x4
// 004c4887: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004c488b: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c488f: ADD EAX,0x18
// 004c4892: PUSH EAX
// 004c4893: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004c4897: ADD EAX,0x8
// 004c489a: PUSH EAX
// 004c489b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004c489f: ADD EAX,0x4
// 004c48a2: PUSH EAX
// 004c48a3: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004c48a7: PUSH EDX
// 004c48a8: PUSH 0x629e4f
//   XREF to: 00629e4f (DATA)
// 004c48ad: PUSH EBP
// 004c48ae: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004c48b3: ADD ESP,0x18
// 004c48b6: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c48ba: ADD EAX,0x14
// 004c48bd: PUSH EAX
// 004c48be: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004c48c2: ADD EAX,0x10
// 004c48c5: PUSH EAX
// 004c48c6: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004c48ca: ADD EAX,0xc
// 004c48cd: PUSH EAX
// 004c48ce: PUSH 0x629e5c
//   XREF to: 00629e5c (DATA)
// 004c48d3: PUSH EBP
// 004c48d4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004c48d9: ADD ESP,0x14
// 004c48dc: XOR EBX,EBX
// 004c48de: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c48e2: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c48e6: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c48ea: ADD EAX,0x1c
// 004c48ed: ADD EDI,0x20
// 004c48f0: ADD ESI,0x24
// 004c48f3: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004c48f6: IMUL EAX,EBX,0xc
//   Label: LAB_004c48f6
// 004c48f9: PUSH ESI
// 004c48fa: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004c48fe: PUSH EDI
// 004c48ff: ADD EAX,ECX
// 004c4901: PUSH EAX
// 004c4902: PUSH 0x629e66
//   XREF to: 00629e66 (DATA)
// 004c4907: ADD ESI,0xc
// 004c490a: PUSH EBP
// 004c490b: ADD EDI,0xc
// 004c490e: INC EBX
// 004c490f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004c4914: ADD ESP,0x14
// 004c4917: CMP EBX,0x3
// 004c491a: JL 0x004c48f6
//   XREF to: 004c48f6 (CONDITIONAL_JUMP)
// 004c491c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c4920: ADD EAX,0x48
// 004c4923: PUSH EAX
// 004c4924: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004c4928: ADD EAX,0x44
// 004c492b: PUSH EAX
// 004c492c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004c4930: ADD EAX,0x40
// 004c4933: PUSH EAX
// 004c4934: PUSH 0x629e70
//   XREF to: 00629e70 (DATA)
// 004c4939: PUSH EBP
// 004c493a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004c493f: ADD ESP,0x14
// 004c4942: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c4946: ADD EAX,0x54
// 004c4949: PUSH EAX
// 004c494a: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004c494e: ADD EAX,0x50
// 004c4951: PUSH EAX
// 004c4952: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004c4956: ADD EAX,0x4c
// 004c4959: PUSH EAX
// 004c495a: PUSH 0x629e7a
//   XREF to: 00629e7a (DATA)
// 004c495f: PUSH EBP
// 004c4960: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004c4965: ADD ESP,0x14
// 004c4968: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c496c: ADD EAX,0x60
// 004c496f: PUSH EAX
// 004c4970: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004c4974: ADD EAX,0x5c
// 004c4977: PUSH EAX
// 004c4978: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004c497c: ADD EAX,0x58
// 004c497f: PUSH EAX
// 004c4980: PUSH 0x629e84
//   XREF to: 00629e84 (DATA)
// 004c4985: PUSH EBP
// 004c4986: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004c498b: ADD ESP,0x14
// 004c498e: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c4992: ADD EAX,0x6c
// 004c4995: PUSH EAX
// 004c4996: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004c499a: ADD EAX,0x68
// 004c499d: PUSH EAX
// 004c499e: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004c49a2: ADD EAX,0x64
// 004c49a5: PUSH EAX
// 004c49a6: PUSH 0x629e8e
//   XREF to: 00629e8e (DATA)
// 004c49ab: PUSH EBP
// 004c49ac: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004c49b1: ADD ESP,0x14
// 004c49b4: ADD ESP,0x4
// 004c49b7: POP EBP
// 004c49b8: POP EDI
// 004c49b9: POP ESI
// 004c49ba: POP EBX
// 004c49bb: RET
