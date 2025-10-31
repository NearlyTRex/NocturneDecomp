// Name: shape_design.c_getVertexCountFromModel_FUN_00468080
// Address: 00468080
// Address Range: [[00468080, 004680ef]]
// Convention: __cdecl
// Signature: int shape_design.c_getVertexCountFromModel_FUN_00468080(SMRGLHeaderExtended * model_ptr)
// Cross-references:
//   shape_design.c_applyVertexCentering_FUN_004680f0 (004680f0) at 0046810f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_design_c_0061cbfc
//   TerminatedCString s_Can_t_find_vlist_0061cc0e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_model.c_getMRGLSize_FUN_00528700

#include "nocturne.h"

int __cdecl shape_design_c_getVertexCountFromModel_FUN_00468080(SMRGLHeaderExtended *model_ptr)

{
  int iVar1;
  
  while (((char)(model_ptr->base).type != '\x02' && ((char)(model_ptr->base).type != '\0'))) {
    iVar1 = engine_model_c_getMRGLSize_FUN_00528700(model_ptr);
    model_ptr = (SMRGLHeaderExtended *)((int)&(model_ptr->base).type + iVar1);
  }
  if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x21e2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find vlist");
  }
  return model_ptr->child_count;
}


// Assembly code:
// 00468080: PUSH EBX
//   Label: shape_design.c_getVertexCountFromModel_FUN_00468080
// 00468081: PUSH ESI
// 00468082: PUSH EDI
// 00468083: PUSH EBP
// 00468084: MOV EBP,ESP
// 00468086: SUB ESP,0x8
// 0046808c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046808c
//   XREF to: Stack[0x4] (READ)
// 0046808f: CMP byte ptr [EAX],0x2
// 00468092: JZ 0x0046809c
//   XREF to: 0046809c (CONDITIONAL_JUMP)
// 00468094: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468097: CMP byte ptr [EAX],0x0
// 0046809a: JNZ 0x0046809e
//   XREF to: 0046809e (CONDITIONAL_JUMP)
// 0046809c: JMP 0x004680af
//   Label: LAB_0046809c
//   XREF to: 004680af (UNCONDITIONAL_JUMP)
// 0046809e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046809e
//   XREF to: Stack[0x4] (READ)
// 004680a1: PUSH EAX
// 004680a2: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 004680a7: ADD ESP,0x4
// 004680aa: ADD dword ptr [EBP + 0x14],EAX
//   XREF to: Stack[0x4] (READ_WRITE)
// 004680ad: JMP 0x0046808c
//   XREF to: 0046808c (UNCONDITIONAL_JUMP)
// 004680af: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_004680af
//   XREF to: Stack[0x4] (READ)
// 004680b3: JNZ 0x004680d7
//   XREF to: 004680d7 (CONDITIONAL_JUMP)
// 004680b5: MOV dword ptr [0x02f0ca48],0x61cbfc
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061cbfc (DATA)
// 004680bf: MOV dword ptr [0x02f0ca4c],0x21e2
//   XREF to: 02f0ca4c (WRITE)
// 004680c9: MOV EAX,0x61cc0e
//   XREF to: 0061cc0e (PARAM)
// 004680ce: PUSH EAX
//   XREF to: 0061cc0e (DATA)
// 004680cf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004680d4: ADD ESP,0x4
// 004680d7: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004680d7
//   XREF to: Stack[0x4] (READ)
// 004680da: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004680dd: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004680e0: MOV EAX,dword ptr [EAX + 0x8]
// 004680e3: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004680e6: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004680e9: MOV ESP,EBP
// 004680eb: POP EBP
// 004680ec: POP EDI
// 004680ed: POP ESI
// 004680ee: POP EBX
// 004680ef: RET
