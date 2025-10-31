// Name: engine_clipper.c_allocateClipVertex_FUN_00435980
// Address: 00435980
// Address Range: [[00435980, 004359ce]]
// Convention: __cdecl
// Signature: SRenderVertex * engine_clipper.c_allocateClipVertex_FUN_00435980(void)
// Globals:
//   TerminatedCString s_engine_clipper_c_00618103
//   TerminatedCString s_Ran_out_of_clipped_verts_00618117
//   SRenderVertex[12] g_ClipperTempBuffer
//   int g_ClipperTempCount
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SRenderVertex * __cdecl engine_clipper_c_allocateClipVertex_FUN_00435980(void)

{
  int iVar1;
  
  if (0xb < g_ClipperTempCount) {
    g_CurrentFilename = "..\\engine\\clipper.c";
    g_CurrentLineNumber = 0x5e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
  }
  iVar1 = g_ClipperTempCount;
  g_ClipperTempCount = g_ClipperTempCount + 1;
  return g_ClipperTempBuffer + iVar1;
}


// Assembly code:
// 00435980: CMP dword ptr [0x00825cec],0xc
//   Label: engine_clipper.c_allocateClipVertex_FUN_00435980
//   XREF to: 00825cec (READ)
// 00435987: JGE 0x004359a8
//   XREF to: 004359a8 (CONDITIONAL_JUMP)
// 00435989: MOV ECX,dword ptr [0x00825cec]
//   Label: LAB_00435989
//   XREF to: 00825cec (READ)
// 0043598f: LEA EAX,[ECX*0x4 + 0x0]
// 00435996: SUB EAX,ECX
// 00435998: INC ECX
// 00435999: SHL EAX,0x4
// 0043599c: MOV dword ptr [0x00825cec],ECX
//   XREF to: 00825cec (WRITE)
// 004359a2: ADD EAX,0x825aac
//   XREF to: 00825aac (DATA)
// 004359a7: RET
// 004359a8: PUSH EBX
//   Label: LAB_004359a8
// 004359a9: MOV ECX,0x618103
//   XREF to: 00618103 (DATA)
// 004359ae: MOV EBX,0x5e
// 004359b3: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 004359b8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004359be: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004359c4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004359c9: ADD ESP,0x4
// 004359cc: POP EBX
// 004359cd: JMP 0x00435989
//   XREF to: 00435989 (UNCONDITIONAL_JUMP)
