// Name: engine_boss.c_modelStructNotSupported_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041dc1e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended * header)
// Cross-references:
//   engine_model.c_getMRGLBounds_FUN_00528140 (00528140) at 005285aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_boss_c_00616419
//   string s_modelStruct_not_supported_0061642a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended *header)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SMRGLHeaderExtended *unaff_ESI;
  int *piVar2;
  SMRGLHeaderExtended *pSVar3;
  byte bVar4;
  int local_3c [13];
  
  bVar4 = 0;
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x44;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  piVar2 = local_3c;
  pSVar3 = unaff_ESI;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pSVar3->base).type = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    pSVar3 = (SMRGLHeaderExtended *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
  }
  return unaff_ESI;
}


// Assembly code:
// 0041dbe0: PUSH EBX
//   Label: engine_boss.c_modelStructNotSupported_FUN_0041dbe0
// 0041dbe1: PUSH EDI
// 0041dbe2: SUB ESP,0x34
// 0041dbe5: MOV EBX,ESI
// 0041dbe7: MOV EDX,0x616419
//   XREF to: 00616419 (PARAM)
// 0041dbec: MOV ECX,0x44
// 0041dbf1: PUSH 0x61642a
//   XREF to: 0061642a (DATA)
// 0041dbf6: MOV EDI,ESI
// 0041dbf8: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x3c] (DATA)
// 0041dbfc: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0041dc02: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0041dc08: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041dc0d: MOV ECX,0xd
// 0041dc12: ADD ESP,0x4
// 0041dc15: MOVSD.REP ES:EDI,ESI
// 0041dc17: MOV EAX,EBX
// 0041dc19: ADD ESP,0x34
// 0041dc1c: POP EDI
// 0041dc1d: POP EBX
// 0041dc1e: RET
