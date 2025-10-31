// Name: core_course.cpp_CCourse_load_FUN_00442580
// Address: 00442580
// Address Range: [[00442580, 004426b3]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
// Cross-references:
//   core_bat.cpp_CBat_FUN_004148a0 (004148a0) at 004148c5 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 004431b5 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e252 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d17b0 (004d17b0) at 004d19c0 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_init_FUN_00529ae0 (00529ae0) at 00529c92 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rt_00618f25
//   TerminatedCString s_data_00618f28
//   TerminatedCString s_core_course_cpp_00618f2d
//   TerminatedCString s_CCourse_load_can_t_open__00618f40
//   TerminatedCString s_d_00618f63
//   TerminatedCString s_d_d_00618f67
//   TerminatedCString s_f_f_f_f_f_f_f_00618f6e
//   TerminatedCString s_core_course_cpp_00618f85
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_course.cpp_CCourse_allocMemory_FUN_00442500
//   core_course.cpp_CCourse_free_FUN_004426c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename)

{
  FILE *file;
  int iVar1;
  int iVar2;
  int iVar3;
  
  core_course_cpp_CCourse_free_FUN_004426c0(this_ptr);
  file = engine_dosio_c_getFile_FUN_00481a50("data",filename,"rt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\course.cpp";
    g_CurrentLineNumber = 0x7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d\n");
  core_course_cpp_CCourse_allocMemory_FUN_00442500(this_ptr);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->len) {
    iVar3 = 0;
    do {
      iVar2 = (int)&(this_ptr->frame_list->frame1).pos.x + iVar3;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x1c;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file,"%f,%f,%f, %f,%f,%f,%f\n","%f,%f,%f, %f,%f,%f,%f\n",iVar2,iVar2 + 4);
    } while (iVar1 < this_ptr->len);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x9e);
  return;
}


// Assembly code:
// 00442580: PUSH EBX
//   Label: core_course.cpp_CCourse_load_FUN_00442580
// 00442581: PUSH ESI
// 00442582: PUSH EDI
// 00442583: PUSH EBP
// 00442584: SUB ESP,0x8
// 00442587: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0044258b: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0044258f: PUSH EDI
// 00442590: CALL core_course.cpp_CCourse_free_FUN_004426c0
//   XREF to: 004426c0 (UNCONDITIONAL_CALL)
// 00442595: ADD ESP,0x4
// 00442598: PUSH 0x618f25
//   XREF to: 00618f25 (DATA)
// 0044259d: PUSH EBX
// 0044259e: PUSH 0x618f28
//   XREF to: 00618f28 (DATA)
// 004425a3: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004425a8: ADD ESP,0xc
// 004425ab: MOV EBP,EAX
// 004425ad: TEST EAX,EAX
// 004425af: JZ 0x0044268b
//   XREF to: 0044268b (CONDITIONAL_JUMP)
// 004425b5: MOV EBX,EBP
//   Label: LAB_004425b5
// 004425b7: PUSH EBX
//   Label: LAB_004425b7
// 004425b8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004425bd: ADD ESP,0x4
// 004425c0: TEST EAX,EAX
// 004425c2: JL 0x004425c9
//   XREF to: 004425c9 (CONDITIONAL_JUMP)
// 004425c4: CMP EAX,0xa
// 004425c7: JNZ 0x004425b7
//   XREF to: 004425b7 (CONDITIONAL_JUMP)
// 004425c9: MOV EAX,ESP
//   Label: LAB_004425c9
// 004425cb: PUSH EAX
// 004425cc: PUSH 0x618f63
//   XREF to: 00618f63 (DATA)
// 004425d1: PUSH EBP
// 004425d2: MOV EBX,EBP
// 004425d4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004425d9: ADD ESP,0xc
// 004425dc: PUSH EBX
//   Label: LAB_004425dc
// 004425dd: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004425e2: ADD ESP,0x4
// 004425e5: TEST EAX,EAX
// 004425e7: JL 0x004425ee
//   XREF to: 004425ee (CONDITIONAL_JUMP)
// 004425e9: CMP EAX,0xa
// 004425ec: JNZ 0x004425dc
//   XREF to: 004425dc (CONDITIONAL_JUMP)
// 004425ee: LEA EAX,[EDI + 0x8]
//   Label: LAB_004425ee
// 004425f1: PUSH EAX
// 004425f2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 004425f6: PUSH EAX
// 004425f7: PUSH 0x618f67
//   XREF to: 00618f67 (DATA)
// 004425fc: PUSH EBP
// 004425fd: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442602: ADD ESP,0x10
// 00442605: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00442609: PUSH EBX
// 0044260a: PUSH EDI
// 0044260b: CALL core_course.cpp_CCourse_allocMemory_FUN_00442500
//   XREF to: 00442500 (UNCONDITIONAL_CALL)
// 00442610: MOV EBX,EBP
// 00442612: ADD ESP,0x8
// 00442615: PUSH EBX
//   Label: LAB_00442615
// 00442616: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0044261b: ADD ESP,0x4
// 0044261e: TEST EAX,EAX
// 00442620: JL 0x00442627
//   XREF to: 00442627 (CONDITIONAL_JUMP)
// 00442622: CMP EAX,0xa
// 00442625: JNZ 0x00442615
//   XREF to: 00442615 (CONDITIONAL_JUMP)
// 00442627: MOV ESI,dword ptr [EDI]
//   Label: LAB_00442627
// 00442629: XOR EBX,EBX
// 0044262b: TEST ESI,ESI
// 0044262d: JLE 0x00442670
//   XREF to: 00442670 (CONDITIONAL_JUMP)
// 0044262f: XOR ESI,ESI
// 00442631: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_00442631
// 00442634: ADD EAX,ESI
// 00442636: LEA EDX,[EAX + 0x18]
// 00442639: PUSH EDX
// 0044263a: LEA EDX,[EAX + 0x14]
// 0044263d: PUSH EDX
// 0044263e: LEA EDX,[EAX + 0x10]
// 00442641: PUSH EDX
// 00442642: LEA EDX,[EAX + 0xc]
// 00442645: PUSH EDX
// 00442646: LEA EDX,[EAX + 0x8]
// 00442649: PUSH EDX
// 0044264a: LEA EDX,[EAX + 0x4]
// 0044264d: PUSH EDX
// 0044264e: PUSH EAX
// 0044264f: PUSH 0x618f6e
//   XREF to: 00618f6e (DATA)
// 00442654: PUSH EBP
// 00442655: INC EBX
// 00442656: ADD ESI,0x1c
// 00442659: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0044265e: MOV EAX,dword ptr [EDI]
// 00442660: ADD ESP,0x24
// 00442663: CMP EBX,EAX
// 00442665: JL 0x00442631
//   XREF to: 00442631 (CONDITIONAL_JUMP)
// 00442667: LEA EAX,[EAX]
// 0044266d: LEA EDX,[EDX]
// 00442670: PUSH 0x9e
//   Label: LAB_00442670
// 00442675: PUSH 0x618f85
//   XREF to: 00618f85 (DATA)
// 0044267a: PUSH EBP
// 0044267b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00442680: ADD ESP,0xc
// 00442683: ADD ESP,0x8
// 00442686: POP EBP
// 00442687: POP EDI
// 00442688: POP ESI
// 00442689: POP EBX
// 0044268a: RET
// 0044268b: PUSH EBX
//   Label: LAB_0044268b
// 0044268c: MOV EDX,0x618f2d
//   XREF to: 00618f2d (PARAM)
// 00442691: MOV ECX,0x7c
// 00442696: PUSH 0x618f40
//   XREF to: 00618f40 (DATA)
// 0044269b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004426a1: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004426a7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004426ac: ADD ESP,0x8
// 004426af: JMP 0x004425b5
//   XREF to: 004425b5 (UNCONDITIONAL_JUMP)
