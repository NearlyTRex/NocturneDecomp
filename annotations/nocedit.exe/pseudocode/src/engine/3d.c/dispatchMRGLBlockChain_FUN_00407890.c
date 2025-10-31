// Name: engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
// Address: 00407890
// Address Range: [[00407890, 00407910]]
// Convention: __cdecl
// Signature: void engine_3d.c_dispatchMRGLBlockChain_FUN_00407890(SMRGLHeaderExtended * chain)
// Cross-references:
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407b4e [UNCONDITIONAL_CALL]
//   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 (00501f30) at 005022b1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_3d_c_00613474
//   TerminatedCString s_Bad_pointer_00613483
//   TerminatedCString s_engine_3d_c_00613490
//   TerminatedCString s_Bad_code_0061349f
//   MRGLBlockHandlerFunc*[67] g_MRGLBlockHandlerTable
//   uint g_VertexProcessingEnabled = 0x1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_00407890(SMRGLHeaderExtended *chain)

{
  int iVar1;
  
  if (chain == (SMRGLHeaderExtended *)0x0) {
    g_CurrentFilename = "..\\engine\\3d.c";
    g_CurrentLineNumber = 0xc5f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad pointer!");
  }
  while( true ) {
    iVar1 = (chain->base).type;
    if (iVar1 == 0) break;
    if ((iVar1 < 0) || (0x42 < iVar1)) {
      g_CurrentFilename = "..\\engine\\3d.c";
      g_CurrentLineNumber = 0xc68;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Bad code!");
    }
    chain = (*g_MRGLBlockHandlerTable[iVar1])(chain);
  }
  g_VertexProcessingEnabled = 1;
  return;
}


// Assembly code:
// 00407890: PUSH EBX
//   Label: engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
// 00407891: PUSH ESI
// 00407892: PUSH EDI
// 00407893: PUSH EBP
// 00407894: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00407898: MOV ESI,EBX
// 0040789a: TEST EBX,EBX
// 0040789c: JZ 0x004078dd
//   XREF to: 004078dd (CONDITIONAL_JUMP)
// 0040789e: MOV EDI,0x613490
//   Label: LAB_0040789e
//   XREF to: 00613490 (DATA)
// 004078a3: MOV EBP,0xc68
// 004078a8: MOV EBX,dword ptr [ESI]
//   Label: LAB_004078a8
// 004078aa: TEST EBX,EBX
// 004078ac: JZ 0x00407902
//   XREF to: 00407902 (CONDITIONAL_JUMP)
// 004078ae: JL 0x004078b5
//   XREF to: 004078b5 (CONDITIONAL_JUMP)
// 004078b0: CMP EBX,0x43
// 004078b3: JL 0x004078ce
//   XREF to: 004078ce (CONDITIONAL_JUMP)
// 004078b5: PUSH 0x61349f
//   Label: LAB_004078b5
//   XREF to: 0061349f (DATA)
// 004078ba: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004078c0: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004078c6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004078cb: ADD ESP,0x4
// 004078ce: PUSH ESI
//   Label: LAB_004078ce
// 004078cf: CALL dword ptr [EBX*0x4 + 0x66df88]
//   XREF to: 0066df88 (DATA)
// 004078d6: MOV ESI,EAX
// 004078d8: ADD ESP,0x4
// 004078db: JMP 0x004078a8
//   XREF to: 004078a8 (UNCONDITIONAL_JUMP)
// 004078dd: MOV EDX,0x613474
//   Label: LAB_004078dd
//   XREF to: 00613474 (PARAM)
// 004078e2: MOV ECX,0xc5f
// 004078e7: PUSH 0x613483
//   XREF to: 00613483 (DATA)
// 004078ec: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004078f2: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004078f8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004078fd: ADD ESP,0x4
// 00407900: JMP 0x0040789e
//   XREF to: 0040789e (UNCONDITIONAL_JUMP)
// 00407902: MOV dword ptr [0x006793bc],0x1
//   Label: LAB_00407902
//   XREF to: 006793bc (WRITE)
// 0040790c: POP EBP
// 0040790d: POP EDI
// 0040790e: POP ESI
// 0040790f: POP EBX
// 00407910: RET
