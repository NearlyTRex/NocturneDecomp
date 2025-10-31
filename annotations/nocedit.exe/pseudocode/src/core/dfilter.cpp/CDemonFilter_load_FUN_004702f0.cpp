// Name: core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
// Address: 004702f0
// Address Range: [[004702f0, 00470500]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter * this_ptr, char * filename)
// Cross-references:
//   core_boxactor.cpp_FUN_00422d60 (00422d60) at 0042302d [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 (00470060) at 00470138 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 00470889 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_0061e5af
//   TerminatedCString s_art_0061e5b2
//   TerminatedCString s_core_dfilter_cpp_0061e5b6
//   TerminatedCString s_CDemonFilter_load_Bad_fi_0061e5ca
//   TerminatedCString s_core_dfilter_cpp_0061e5f1
//   TerminatedCString s_art_0061e605
//   TerminatedCString s_core_dfilter_cpp_0061e609
//   TerminatedCString s_CDemonFilter_load_Non_sq_0061e61d
//   TerminatedCString s_core_dfilter_cpp_0061e64a
//   TerminatedCString s_CDemonFilter_load_Bad_fi_0061e65e
//   TerminatedCString s_core_dfilter_cpp_0061e686
//   TerminatedCString s_CDemonFilter_load_Bad_fi_0061e69a
//   TerminatedCString s_rb_0061e6c2
//   TerminatedCString s_art_0061e6c5
//   TerminatedCString s_core_dfilter_cpp_0061e6c9
//   TerminatedCString s_CDemonFilter_load_Bad_fi_0061e6dd
//   TerminatedCString s_core_dfilter_cpp_0061e6ff
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fread_FUN_005fd990
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter *this_ptr,char *filename)

{
  char cVar1;
  FILE *pFVar2;
  int iVar3;
  char *pcVar4;
  float10 fVar5;
  double dVar6;
  
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filename : %s",filename);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\dfilter.cpp",0xad);
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("art",filename);
  fVar5 = SQRT((float10)iVar3);
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar3,iVar3));
  this_ptr->size = (int)ROUND(fVar5);
  this_ptr->count = (int)((ulonglong)dVar6 >> 0x20) / this_ptr->size;
  if (this_ptr->size != this_ptr->count) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xb7;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonFilter::load - Non-square filter %dx%d",this_ptr->size,this_ptr->count);
  }
  if ((this_ptr->size < 0x40) || (0x100 < this_ptr->size)) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xb9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filter size %d");
  }
  if ((this_ptr->count < 0x40) || (0x100 < this_ptr->count)) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xbc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filter size %d");
  }
  core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(this_ptr);
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xc6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::load - Bad filename");
  }
  crt_stdio_c_fread_FUN_005fd990(this_ptr->data_buffer,this_ptr->size,this_ptr->count,pFVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\dfilter.cpp",0xce);
  for (iVar3 = 0; iVar3 < this_ptr->size * this_ptr->count; iVar3 = iVar3 + 1) {
    *(char *)(iVar3 + (int)this_ptr->data_buffer) =
         (char)((int)(uint)*(byte *)(iVar3 + (int)this_ptr->data_buffer) >> 2);
  }
  pcVar4 = this_ptr->name;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004702f0: PUSH EBX
//   Label: core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
// 004702f1: PUSH ESI
// 004702f2: PUSH EDI
// 004702f3: PUSH EBP
// 004702f4: SUB ESP,0x4
// 004702f7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004702fb: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004702ff: PUSH 0x61e5af
//   XREF to: 0061e5af (DATA)
// 00470304: PUSH EDI
// 00470305: PUSH 0x61e5b2
//   XREF to: 0061e5b2 (DATA)
// 0047030a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0047030f: ADD ESP,0xc
// 00470312: MOV ESI,EAX
// 00470314: TEST EAX,EAX
// 00470316: JZ 0x00470466
//   XREF to: 00470466 (CONDITIONAL_JUMP)
// 0047031c: PUSH 0xad
//   Label: LAB_0047031c
// 00470321: PUSH 0x61e5f1
//   XREF to: 0061e5f1 (DATA)
// 00470326: PUSH ESI
// 00470327: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0047032c: ADD ESP,0xc
// 0047032f: PUSH EDI
// 00470330: PUSH 0x61e605
//   XREF to: 0061e605 (DATA)
// 00470335: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 0047033a: ADD ESP,0x8
// 0047033d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00470340: MOV EDX,EAX
// 00470342: FILD dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00470345: FSQRT
// 00470347: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047034c: MOV EAX,EDX
// 0047034e: FISTP dword ptr [EBX]
// 00470350: SAR EDX,0x1f
// 00470353: MOV ECX,dword ptr [EBX]
// 00470355: IDIV ECX
// 00470357: MOV dword ptr [EBX + 0x4],EAX
// 0047035a: MOV EAX,dword ptr [EBX]
// 0047035c: MOV ESI,dword ptr [EBX + 0x4]
// 0047035f: CMP EAX,ESI
// 00470361: JZ 0x00470389
//   XREF to: 00470389 (CONDITIONAL_JUMP)
// 00470363: PUSH ESI
// 00470364: MOV ECX,dword ptr [EBX]
// 00470366: PUSH ECX
// 00470367: MOV EBP,0x61e609
//   XREF to: 0061e609 (DATA)
// 0047036c: MOV EAX,0xb7
// 00470371: PUSH 0x61e61d
//   XREF to: 0061e61d (DATA)
// 00470376: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0047037c: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00470381: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470386: ADD ESP,0xc
// 00470389: MOV ESI,dword ptr [EBX]
//   Label: LAB_00470389
// 0047038b: CMP ESI,0x40
// 0047038e: JGE 0x0047048f
//   XREF to: 0047048f (CONDITIONAL_JUMP)
// 00470394: MOV ECX,dword ptr [EBX]
//   Label: LAB_00470394
// 00470396: PUSH ECX
// 00470397: MOV EAX,0x61e64a
//   XREF to: 0061e64a (PARAM)
// 0047039c: MOV EDX,0xb9
// 004703a1: PUSH 0x61e65e
//   XREF to: 0061e65e (DATA)
// 004703a6: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004703ab: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004703b1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004703b6: ADD ESP,0x8
// 004703b9: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_004703b9
// 004703bc: CMP ESI,0x40
// 004703bf: JGE 0x004704a0
//   XREF to: 004704a0 (CONDITIONAL_JUMP)
// 004703c5: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_004703c5
// 004703c8: PUSH ECX
// 004703c9: MOV EAX,0x61e686
//   XREF to: 0061e686 (PARAM)
// 004703ce: MOV EDX,0xbc
// 004703d3: PUSH 0x61e69a
//   XREF to: 0061e69a (DATA)
// 004703d8: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004703dd: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004703e3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004703e8: ADD ESP,0x8
// 004703eb: PUSH EBX
//   Label: LAB_004703eb
// 004703ec: CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
//   XREF to: 00470260 (UNCONDITIONAL_CALL)
// 004703f1: ADD ESP,0x4
// 004703f4: PUSH 0x61e6c2
//   XREF to: 0061e6c2 (DATA)
// 004703f9: PUSH EDI
// 004703fa: PUSH 0x61e6c5
//   XREF to: 0061e6c5 (DATA)
// 004703ff: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00470404: ADD ESP,0xc
// 00470407: MOV ESI,EAX
// 00470409: TEST EAX,EAX
// 0047040b: JZ 0x004704b1
//   XREF to: 004704b1 (CONDITIONAL_JUMP)
// 00470411: PUSH ESI
//   Label: LAB_00470411
// 00470412: MOV EDX,dword ptr [EBX + 0x4]
// 00470415: PUSH EDX
// 00470416: MOV ECX,dword ptr [EBX]
// 00470418: PUSH ECX
// 00470419: MOV EBP,dword ptr [EBX + 0x48]
// 0047041c: PUSH EBP
// 0047041d: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00470422: ADD ESP,0x10
// 00470425: PUSH 0xce
// 0047042a: PUSH 0x61e6ff
//   XREF to: 0061e6ff (DATA)
// 0047042f: PUSH ESI
// 00470430: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00470435: ADD ESP,0xc
// 00470438: XOR ECX,ECX
// 0047043a: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0047043a
// 0047043d: MOV EDX,dword ptr [EBX]
// 0047043f: IMUL EDX,EAX
// 00470442: CMP ECX,EDX
// 00470444: JGE 0x004704d8
//   XREF to: 004704d8 (CONDITIONAL_JUMP)
// 0047044a: MOV ESI,dword ptr [EBX + 0x48]
// 0047044d: XOR EDX,EDX
// 0047044f: MOV DL,byte ptr [ECX + ESI*0x1]
// 00470452: MOV EAX,EDX
// 00470454: SAR EDX,0x1f
// 00470457: SHL EDX,0x2
// 0047045a: SBB EAX,EDX
// 0047045c: SAR EAX,0x2
// 0047045f: INC ECX
// 00470460: MOV byte ptr [ECX + ESI*0x1 + -0x1],AL
// 00470464: JMP 0x0047043a
//   XREF to: 0047043a (UNCONDITIONAL_JUMP)
// 00470466: PUSH EDI
//   Label: LAB_00470466
// 00470467: MOV EDX,0x61e5b6
//   XREF to: 0061e5b6 (PARAM)
// 0047046c: MOV ECX,0xab
// 00470471: PUSH 0x61e5ca
//   XREF to: 0061e5ca (DATA)
// 00470476: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0047047c: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00470482: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470487: ADD ESP,0x8
// 0047048a: JMP 0x0047031c
//   XREF to: 0047031c (UNCONDITIONAL_JUMP)
// 0047048f: CMP ESI,0x100
//   Label: LAB_0047048f
// 00470495: JG 0x00470394
//   XREF to: 00470394 (CONDITIONAL_JUMP)
// 0047049b: JMP 0x004703b9
//   XREF to: 004703b9 (UNCONDITIONAL_JUMP)
// 004704a0: CMP ESI,0x100
//   Label: LAB_004704a0
// 004704a6: JG 0x004703c5
//   XREF to: 004703c5 (CONDITIONAL_JUMP)
// 004704ac: JMP 0x004703eb
//   XREF to: 004703eb (UNCONDITIONAL_JUMP)
// 004704b1: MOV EBP,0x61e6c9
//   Label: LAB_004704b1
//   XREF to: 0061e6c9 (DATA)
// 004704b6: MOV EAX,0xc6
// 004704bb: PUSH 0x61e6dd
//   XREF to: 0061e6dd (DATA)
// 004704c0: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004704c6: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004704cb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004704d0: ADD ESP,0x4
// 004704d3: JMP 0x00470411
//   XREF to: 00470411 (UNCONDITIONAL_JUMP)
// 004704d8: ADD EBX,0x8
//   Label: LAB_004704d8
// 004704db: MOV ESI,EDI
// 004704dd: MOV EDI,EBX
// 004704df: PUSH EDI
// 004704e0: MOV AL,byte ptr [ESI]
//   Label: LAB_004704e0
// 004704e2: MOV byte ptr [EDI],AL
// 004704e4: CMP AL,0x0
// 004704e6: JZ 0x004704f8
//   XREF to: 004704f8 (CONDITIONAL_JUMP)
// 004704e8: MOV AL,byte ptr [ESI + 0x1]
// 004704eb: ADD ESI,0x2
// 004704ee: MOV byte ptr [EDI + 0x1],AL
// 004704f1: ADD EDI,0x2
// 004704f4: CMP AL,0x0
// 004704f6: JNZ 0x004704e0
//   XREF to: 004704e0 (CONDITIONAL_JUMP)
// 004704f8: POP EDI
//   Label: LAB_004704f8
// 004704f9: ADD ESP,0x4
// 004704fc: POP EBP
// 004704fd: POP EDI
// 004704fe: POP ESI
// 004704ff: POP EBX
// 00470500: RET
