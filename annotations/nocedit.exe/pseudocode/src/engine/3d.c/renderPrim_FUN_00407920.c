// Name: engine_3d.c_renderPrim_FUN_00407920
// Address: 00407920
// Address Range: [[00407920, 004079b4]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPrim_FUN_00407920(SMRGLHeaderPrimitive * primitive)
// Globals:
//   TerminatedCString s_engine_3d_c_006134a9
//   TerminatedCString s_renderPrim_Bad_input_poi_006134b8
//   TerminatedCString s_Bad_prim_d_006134d6
//   TerminatedCString s_engine_3d_c_006134e4
//   MRGLBlockHandlerFunc*[67] g_MRGLBlockHandlerTable
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrim_FUN_00407920(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  SMRGLHeaderExtended *extraout_EAX;
  SMRGLHeaderExtended *pSVar2;
  BADSPACEBASE *in_ESP;
  char acStack_100 [4];
  char acStack_fc [248];
  
  if (primitive == (SMRGLHeaderPrimitive *)0x0) {
    g_CurrentFilename = "..\\engine\\3d.c";
    g_CurrentLineNumber = 0xc82;
    core_main_c_displayErrorAndQuit_FUN_00506f10("renderPrim: Bad input pointer");
  }
  iVar1 = (primitive->base).type;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    pSVar2 = (*g_MRGLBlockHandlerTable[iVar1])((SMRGLHeaderExtended *)primitive);
    return pSVar2;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_100,"Bad prim : %d",iVar1);
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 0xc8b;
  core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_fc);
  return extraout_EAX;
}


// Assembly code:
// 00407920: PUSH EBX
//   Label: engine_3d.c_renderPrim_FUN_00407920
// 00407921: SUB ESP,0x100
// 00407927: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 0040792e: TEST EBX,EBX
// 00407930: JZ 0x0040797d
//   XREF to: 0040797d (CONDITIONAL_JUMP)
// 00407932: MOV EAX,dword ptr [EBX]
//   Label: LAB_00407932
// 00407934: TEST EAX,EAX
// 00407936: JL 0x0040793d
//   XREF to: 0040793d (CONDITIONAL_JUMP)
// 00407938: CMP EAX,0x43
// 0040793b: JL 0x004079a2
//   XREF to: 004079a2 (CONDITIONAL_JUMP)
// 0040793d: PUSH ESI
//   Label: LAB_0040793d
// 0040793e: PUSH EAX
// 0040793f: PUSH 0x6134d6
//   XREF to: 006134d6 (DATA)
// 00407944: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x104] (DATA)
// 00407948: PUSH EAX
// 00407949: MOV EBX,0x6134e4
//   XREF to: 006134e4 (DATA)
// 0040794e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00407953: ADD ESP,0xc
// 00407956: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 0040795a: MOV ESI,0xc8b
// 0040795f: PUSH EAX
// 00407960: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00407966: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0040796c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00407971: ADD ESP,0x4
// 00407974: POP ESI
// 00407975: ADD ESP,0x100
// 0040797b: POP EBX
// 0040797c: RET
// 0040797d: MOV EDX,0x6134a9
//   Label: LAB_0040797d
//   XREF to: 006134a9 (DATA)
// 00407982: MOV ECX,0xc82
// 00407987: PUSH 0x6134b8
//   XREF to: 006134b8 (DATA)
// 0040798c: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00407992: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00407998: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040799d: ADD ESP,0x4
// 004079a0: JMP 0x00407932
//   XREF to: 00407932 (UNCONDITIONAL_JUMP)
// 004079a2: PUSH EBX
//   Label: LAB_004079a2
// 004079a3: CALL dword ptr [EAX*0x4 + 0x66df88]
//   XREF to: 0066df88 (DATA)
// 004079aa: ADD ESP,0x4
// 004079ad: ADD ESP,0x100
// 004079b3: POP EBX
// 004079b4: RET
