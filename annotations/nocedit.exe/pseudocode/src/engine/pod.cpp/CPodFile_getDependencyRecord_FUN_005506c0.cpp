// Name: engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0
// Address: 005506c0
// Address Range: [[005506c0, 005507e3]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0(CPodFile * this_ptr, int dependency_index, CPodDependencyRecord * output_record)
// Cross-references:
//   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 (005513d0) at 00551523 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_006404ff
//   TerminatedCString s_CPodFile_getDependencyRe_00640511
//   TerminatedCString s_engine_pod_cpp_00640552
//   TerminatedCString s_rb_00640564
//   TerminatedCString s_engine_pod_cpp_00640567
//   TerminatedCString s_CPodFile_getDependencyRe_00640579
//   TerminatedCString s_engine_pod_cpp_006405a7
//   TerminatedCString s_CPodFile_getDependencyRe_006405b9
//   TerminatedCString s_engine_pod_cpp_006405ea
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0
          (CPodFile *this_ptr,int dependency_index,CPodDependencyRecord *output_record)

{
  FILE *file;
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  byte bVar3;
  int in_stack_00000014;
  undefined4 auStack_f8 [59];
  
  bVar3 = 0;
  if ((dependency_index < 0) || (this_ptr->dependency_count <= dependency_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x32e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::getDependencyRecord - invalid index.  Pod not mounted?");
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x332);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x333;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::getDependencyRecord - can't open %s",this_ptr->filename);
  }
  crt_stdio_c_fseek_FUN_005ffacc
            (file,in_stack_00000014 * 0x108 + this_ptr->dependency_records_offset,0);
  crt_stdio_c_fread_FUN_005fd990(&stack0xfffffefc,0x108,1,file);
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x341;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::getDependencyRecord - error reading %s");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",0x346);
  puVar2 = auStack_f8;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005506c0: PUSH EBX
//   Label: engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0
// 005506c1: PUSH EDI
// 005506c2: PUSH EBP
// 005506c3: SUB ESP,0x108
// 005506c9: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005506d0: MOV EBX,ESI
// 005506d2: MOV EDX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 005506d9: TEST EDX,EDX
// 005506db: JL 0x005506e5
//   XREF to: 005506e5 (CONDITIONAL_JUMP)
// 005506dd: CMP EDX,dword ptr [EBP + 0x424]
// 005506e3: JL 0x00550708
//   XREF to: 00550708 (CONDITIONAL_JUMP)
// 005506e5: MOV ESI,0x6404ff
//   Label: LAB_005506e5
//   XREF to: 006404ff (DATA)
// 005506ea: MOV EDI,0x32e
// 005506ef: PUSH 0x640511
//   XREF to: 00640511 (DATA)
// 005506f4: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005506fa: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00550700: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00550705: ADD ESP,0x4
// 00550708: PUSH 0x332
//   Label: LAB_00550708
// 0055070d: PUSH 0x640552
//   XREF to: 00640552 (DATA)
// 00550712: PUSH 0x640564
//   XREF to: 00640564 (DATA)
// 00550717: PUSH 0x0
// 00550719: LEA EDI,[EBP + 0x4]
// 0055071c: PUSH EDI
// 0055071d: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00550722: ADD ESP,0x14
// 00550725: MOV ESI,EAX
// 00550727: TEST EAX,EAX
// 00550729: JNZ 0x0055074e
//   XREF to: 0055074e (CONDITIONAL_JUMP)
// 0055072b: PUSH EDI
// 0055072c: MOV EAX,0x640567
//   XREF to: 00640567 (PARAM)
// 00550731: MOV EDX,0x333
// 00550736: PUSH 0x640579
//   XREF to: 00640579 (DATA)
// 0055073b: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00550740: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00550746: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055074b: ADD ESP,0x8
// 0055074e: MOV EDI,dword ptr [ESP + 0x11c]
//   Label: LAB_0055074e
//   XREF to: Stack[0x8] (READ)
// 00550755: MOV EAX,EDI
// 00550757: SHL EAX,0x5
// 0055075a: ADD EAX,EDI
// 0055075c: MOV ECX,dword ptr [EBP + 0x428]
// 00550762: SHL EAX,0x3
// 00550765: PUSH 0x0
// 00550767: ADD EAX,ECX
// 00550769: PUSH EAX
// 0055076a: PUSH ESI
// 0055076b: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00550770: ADD ESP,0xc
// 00550773: PUSH ESI
// 00550774: PUSH 0x1
// 00550776: PUSH 0x108
// 0055077b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x114] (DATA)
// 0055077f: PUSH EAX
// 00550780: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00550785: MOV AH,byte ptr [ESI + 0xc]
// 00550788: ADD ESP,0x10
// 0055078b: TEST AH,0x20
// 0055078e: JNZ 0x005507bc
//   XREF to: 005507bc (CONDITIONAL_JUMP)
// 00550790: PUSH 0x346
//   Label: LAB_00550790
// 00550795: PUSH 0x6405ea
//   XREF to: 006405ea (DATA)
// 0055079a: PUSH ESI
// 0055079b: MOV EDI,EBX
// 0055079d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005507a2: MOV ECX,0x42
// 005507a7: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x114] (DATA)
// 005507ab: ADD ESP,0xc
// 005507ae: MOVSD.REP ES:EDI,ESI
// 005507b0: MOV EAX,EBX
// 005507b2: ADD ESP,0x108
// 005507b8: POP EBP
// 005507b9: POP EDI
// 005507ba: POP EBX
// 005507bb: RET
// 005507bc: ADD EBP,0x4
//   Label: LAB_005507bc
// 005507bf: PUSH EBP
// 005507c0: MOV EDI,0x6405a7
//   XREF to: 006405a7 (DATA)
// 005507c5: MOV EAX,0x341
// 005507ca: PUSH 0x6405b9
//   XREF to: 006405b9 (DATA)
// 005507cf: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005507d5: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005507da: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005507df: ADD ESP,0x8
// 005507e2: JMP 0x00550790
//   XREF to: 00550790 (UNCONDITIONAL_JUMP)
