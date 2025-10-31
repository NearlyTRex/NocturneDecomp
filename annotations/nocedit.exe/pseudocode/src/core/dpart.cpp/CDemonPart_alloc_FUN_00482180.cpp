// Name: core_dpart.cpp_CDemonPart_alloc_FUN_00482180
// Address: 00482180
// Address Range: [[00482180, 004822a0]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_alloc_FUN_00482180(CDemonPart * this_ptr)
// Cross-references:
//   core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10 (00482a10) at 00482aac [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0 (004825c0) at 00482600 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 (00482e40) at 00482e94 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dpart_cpp_00621656
//   TerminatedCString s_CDemonPart_alloc_Out_of__00621668
//   TerminatedCString s_core_dpart_cpp_00621695
//   TerminatedCString s_core_dpart_cpp_006216a7
//   TerminatedCString s_core_dpart_cpp_006216b9
//   TerminatedCString s_CDemonPart_alloc_Out_of__006216cb
//   TerminatedCString s_core_dpart_cpp_006216f5
//   TerminatedCString s_core_dpart_cpp_00621707
//   TerminatedCString s_CDemonPart_alloc_Out_of__00621719
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dpart.cpp_CDemonPart_free_FUN_004822b0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00482180(CDemonPart *this_ptr)

{
  CVector3i *pCVar1;
  SSurfacePlane *pSVar2;
  BADSPACEBASE *in_ESP;
  
  core_dpart_cpp_CDemonPart_free_FUN_004822b0(this_ptr);
  if (this_ptr->vertex_count != 0) {
    pCVar1 = (CVector3i *)
             shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->vertex_count,0xc,"..\\core\\dpart.cpp",0x87);
    this_ptr->vertex_positions = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffefc,"CDemonPart::alloc - Out of vertex %d memory!",this_ptr->vertex_count);
      g_CurrentLineNumber = 0x8b;
      g_CurrentFilename = "..\\core\\dpart.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff00);
    }
    pCVar1 = (CVector3i *)
             shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->vertex_count,0xc,"..\\core\\dpart.cpp",0x90);
    this_ptr->vertex_normals = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      g_CurrentFilename = "..\\core\\dpart.cpp";
      g_CurrentLineNumber = 0x91;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (this_ptr->face_count != 0) {
    pSVar2 = (SSurfacePlane *)
             shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->face_count,0x20,"..\\core\\dpart.cpp",0x98);
    this_ptr->face_data = pSVar2;
    if (pSVar2 == (SSurfacePlane *)0x0) {
      g_CurrentFilename = "..\\core\\dpart.cpp";
      g_CurrentLineNumber = 0x99;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}


// Assembly code:
// 00482180: PUSH EBX
//   Label: core_dpart.cpp_CDemonPart_alloc_FUN_00482180
// 00482181: PUSH EDI
// 00482182: PUSH EBP
// 00482183: SUB ESP,0x100
// 00482189: MOV EBX,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x4] (READ)
// 00482190: PUSH EBX
// 00482191: CALL core_dpart.cpp_CDemonPart_free_FUN_004822b0
//   XREF to: 004822b0 (UNCONDITIONAL_CALL)
// 00482196: MOV EDX,dword ptr [EBX + 0x20]
// 00482199: ADD ESP,0x4
// 0048219c: TEST EDX,EDX
// 0048219e: JNZ 0x004821b5
//   XREF to: 004821b5 (CONDITIONAL_JUMP)
// 004821a0: MOV EBP,dword ptr [EBX + 0x24]
//   Label: LAB_004821a0
// 004821a3: TEST EBP,EBP
// 004821a5: JNZ 0x00482254
//   XREF to: 00482254 (CONDITIONAL_JUMP)
// 004821ab: ADD ESP,0x100
//   Label: LAB_004821ab
// 004821b1: POP EBP
// 004821b2: POP EDI
// 004821b3: POP EBX
// 004821b4: RET
// 004821b5: PUSH 0x87
//   Label: LAB_004821b5
// 004821ba: PUSH 0x621656
//   XREF to: 00621656 (DATA)
// 004821bf: PUSH 0xc
// 004821c1: PUSH EDX
// 004821c2: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 004821c7: ADD ESP,0x10
// 004821ca: MOV dword ptr [EBX + 0x2c],EAX
// 004821cd: TEST EAX,EAX
// 004821cf: JNZ 0x00482207
//   XREF to: 00482207 (CONDITIONAL_JUMP)
// 004821d1: MOV EDI,dword ptr [EBX + 0x20]
// 004821d4: PUSH EDI
// 004821d5: PUSH 0x621668
//   XREF to: 00621668 (DATA)
// 004821da: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10c] (DATA)
// 004821de: PUSH EAX
// 004821df: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004821e4: MOV EAX,0x8b
// 004821e9: ADD ESP,0xc
// 004821ec: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004821f1: MOV EAX,ESP
// 004821f3: MOV EBP,0x621695
//   XREF to: 00621695 (DATA)
// 004821f8: PUSH EAX
// 004821f9: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004821ff: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00482204: ADD ESP,0x4
// 00482207: PUSH 0x90
//   Label: LAB_00482207
// 0048220c: PUSH 0x6216a7
//   XREF to: 006216a7 (DATA)
// 00482211: PUSH 0xc
// 00482213: MOV EDX,dword ptr [EBX + 0x20]
// 00482216: PUSH EDX
// 00482217: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 0048221c: ADD ESP,0x10
// 0048221f: MOV dword ptr [EBX + 0x30],EAX
// 00482222: TEST EAX,EAX
// 00482224: JNZ 0x004821a0
//   XREF to: 004821a0 (CONDITIONAL_JUMP)
// 0048222a: PUSH ESI
// 0048222b: MOV ESI,0x6216b9
//   XREF to: 006216b9 (DATA)
// 00482230: MOV EDI,0x91
// 00482235: PUSH 0x6216cb
//   XREF to: 006216cb (DATA)
// 0048223a: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00482240: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00482246: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048224b: ADD ESP,0x4
// 0048224e: POP ESI
// 0048224f: JMP 0x004821a0
//   XREF to: 004821a0 (UNCONDITIONAL_JUMP)
// 00482254: PUSH 0x98
//   Label: LAB_00482254
// 00482259: PUSH 0x6216f5
//   XREF to: 006216f5 (DATA)
// 0048225e: PUSH 0x20
// 00482260: PUSH EBP
// 00482261: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 00482266: ADD ESP,0x10
// 00482269: MOV dword ptr [EBX + 0x34],EAX
// 0048226c: TEST EAX,EAX
// 0048226e: JNZ 0x004821ab
//   XREF to: 004821ab (CONDITIONAL_JUMP)
// 00482274: MOV ECX,0x621707
//   XREF to: 00621707 (PARAM)
// 00482279: MOV EBX,0x99
// 0048227e: PUSH 0x621719
//   XREF to: 00621719 (DATA)
// 00482283: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00482289: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0048228f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00482294: ADD ESP,0x4
// 00482297: ADD ESP,0x100
// 0048229d: POP EBP
// 0048229e: POP EDI
// 0048229f: POP EBX
// 004822a0: RET
