// Name: shape_design.c_findVertexListInModel_FUN_00468000
// Address: 00468000
// Address Range: [[00468000, 00468075]]
// Convention: __cdecl
// Signature: CVector3i * shape_design.c_findVertexListInModel_FUN_00468000(SMRGLHeaderExtended * model_ptr)
// Cross-references:
//   shape_design.c_applyVertexCentering_FUN_004680f0 (004680f0) at 00468100 [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 00468204 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_design_c_0061cbd9
//   TerminatedCString s_Can_t_find_vlist_0061cbeb
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_model.c_getMRGLSize_FUN_00528700

#include "nocturne.h"

CVector3i * __cdecl
shape_design_c_findVertexListInModel_FUN_00468000(SMRGLHeaderExtended *model_ptr)

{
  int iVar1;
  
  while (((char)(model_ptr->base).type != '\x02' && ((char)(model_ptr->base).type != '\0'))) {
    iVar1 = engine_model_c_getMRGLSize_FUN_00528700(model_ptr);
    model_ptr = (SMRGLHeaderExtended *)((int)&(model_ptr->base).type + iVar1);
  }
  if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x21ce;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find vlist");
  }
  return (CVector3i *)(model_ptr + 1);
}


// Assembly code:
// 00468000: PUSH EBX
//   Label: shape_design.c_findVertexListInModel_FUN_00468000
// 00468001: PUSH ESI
// 00468002: PUSH EDI
// 00468003: PUSH EBP
// 00468004: MOV EBP,ESP
// 00468006: SUB ESP,0xc
// 0046800c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046800c
//   XREF to: Stack[0x4] (READ)
// 0046800f: CMP byte ptr [EAX],0x2
// 00468012: JZ 0x0046801c
//   XREF to: 0046801c (CONDITIONAL_JUMP)
// 00468014: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468017: CMP byte ptr [EAX],0x0
// 0046801a: JNZ 0x0046801e
//   XREF to: 0046801e (CONDITIONAL_JUMP)
// 0046801c: JMP 0x0046802f
//   Label: LAB_0046801c
//   XREF to: 0046802f (UNCONDITIONAL_JUMP)
// 0046801e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046801e
//   XREF to: Stack[0x4] (READ)
// 00468021: PUSH EAX
// 00468022: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 00468027: ADD ESP,0x4
// 0046802a: ADD dword ptr [EBP + 0x14],EAX
//   XREF to: Stack[0x4] (READ_WRITE)
// 0046802d: JMP 0x0046800c
//   XREF to: 0046800c (UNCONDITIONAL_JUMP)
// 0046802f: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_0046802f
//   XREF to: Stack[0x4] (READ)
// 00468033: JNZ 0x00468057
//   XREF to: 00468057 (CONDITIONAL_JUMP)
// 00468035: MOV dword ptr [0x02f0ca48],0x61cbd9
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061cbd9 (DATA)
// 0046803f: MOV dword ptr [0x02f0ca4c],0x21ce
//   XREF to: 02f0ca4c (WRITE)
// 00468049: MOV EAX,0x61cbeb
//   XREF to: 0061cbeb (PARAM)
// 0046804e: PUSH EAX
//   XREF to: 0061cbeb (DATA)
// 0046804f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00468054: ADD ESP,0x4
// 00468057: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00468057
//   XREF to: Stack[0x4] (READ)
// 0046805a: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046805d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468060: ADD EAX,0xc
// 00468063: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00468066: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468069: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046806c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046806f: MOV ESP,EBP
// 00468071: POP EBP
// 00468072: POP EDI
// 00468073: POP ESI
// 00468074: POP EBX
// 00468075: RET
