// Name: engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
// Address: 005507f0
// Address Range: [[005507f0, 00550970]]
// Convention: __cdecl
// Signature: uint engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile * this_ptr, int file_index)
// Cross-references:
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5d5f [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 005504a9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_006405fc
//   TerminatedCString s_CPodFile_computeOneFileC_0064060e
//   TerminatedCString s_engine_pod_cpp_0064063a
//   TerminatedCString s_rb_0064064c
//   TerminatedCString s_engine_pod_cpp_0064064f
//   TerminatedCString s_CPodFile_computeOneFileC_00640661
//   TerminatedCString s_engine_pod_cpp_0064068d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[65536] g_FileIOBuffer
//   undefined4 DAT_030d5091
//   undefined4 DAT_030d5092
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile *this_ptr,int file_index)

{
  uchar uVar1;
  FILE *pFVar2;
  uint uVar3;
  FILE *unaff_EBP;
  uint current_crc;
  FILE *unaff_ESI;
  char *pcVar4;
  FILE *unaff_EDI;
  SIZE_T size;
  
  if ((file_index < 0) || (this_ptr->file_count <= file_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x354;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::computeOneFileCRC - invalid index");
  }
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x358);
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x359;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::computeOneFileCRC - can't open %s",this_ptr->filename,0);
  }
  crt_stdio_c_fseek_FUN_005ffacc(unaff_EBP,this_ptr->directory_entries[file_index].offset,0);
  current_crc = 0xffffffff;
  for (size = this_ptr->directory_entries[file_index].size; 0xffff < (int)size;
      size = size - 0x10000) {
    pcVar4 = g_FileIOBuffer;
    uVar3 = 0;
    crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,0x10000,1,unaff_EDI);
    do {
      uVar1 = *pcVar4;
      pcVar4 = (char *)((uchar *)pcVar4 + 1);
      uVar3 = uVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar3 < 0x10000);
  }
  pcVar4 = g_FileIOBuffer;
  crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,size,1,unaff_EDI);
  uVar3 = 0;
  if (size != 0) {
    do {
      uVar1 = *pcVar4;
      pcVar4 = (char *)((uchar *)pcVar4 + 1);
      uVar3 = uVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar3 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_ESI,"..\\engine\\pod.cpp",0x365);
  return current_crc;
}


// Assembly code:
// 005507f0: PUSH EBX
//   Label: engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
// 005507f1: PUSH ESI
// 005507f2: PUSH EDI
// 005507f3: PUSH EBP
// 005507f4: SUB ESP,0xc
// 005507f7: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005507fb: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005507ff: TEST EDI,EDI
// 00550801: JL 0x0055080b
//   XREF to: 0055080b (CONDITIONAL_JUMP)
// 00550803: CMP EDI,dword ptr [EBX + 0x410]
// 00550809: JL 0x0055082e
//   XREF to: 0055082e (CONDITIONAL_JUMP)
// 0055080b: MOV ECX,0x6405fc
//   Label: LAB_0055080b
//   XREF to: 006405fc (PARAM)
// 00550810: MOV ESI,0x354
// 00550815: PUSH 0x64060e
//   XREF to: 0064060e (DATA)
// 0055081a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00550820: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00550826: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055082b: ADD ESP,0x4
// 0055082e: PUSH 0x358
//   Label: LAB_0055082e
// 00550833: PUSH 0x64063a
//   XREF to: 0064063a (DATA)
// 00550838: PUSH 0x64064c
//   XREF to: 0064064c (DATA)
// 0055083d: PUSH 0x0
// 0055083f: LEA ESI,[EBX + 0x4]
// 00550842: PUSH ESI
// 00550843: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00550848: ADD ESP,0x14
// 0055084b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 0055084e: TEST EAX,EAX
// 00550850: JNZ 0x00550875
//   XREF to: 00550875 (CONDITIONAL_JUMP)
// 00550852: PUSH ESI
// 00550853: MOV EBP,0x64064f
//   XREF to: 0064064f (DATA)
// 00550858: MOV EAX,0x359
// 0055085d: PUSH 0x640661
//   XREF to: 00640661 (DATA)
// 00550862: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00550868: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0055086d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00550872: ADD ESP,0x8
// 00550875: LEA ESI,[EDI*0x4 + 0x0]
//   Label: LAB_00550875
// 0055087c: ADD ESI,EDI
// 0055087e: MOV EAX,dword ptr [EBX + 0x414]
// 00550884: SHL ESI,0x2
// 00550887: PUSH 0x0
// 00550889: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x8]
// 0055088d: PUSH EDX
// 0055088e: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 00550892: PUSH ECX
// 00550893: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00550898: MOV EAX,dword ptr [EBX + 0x414]
// 0055089e: ADD ESP,0xc
// 005508a1: ADD ESI,EAX
// 005508a3: MOV EBP,0xffffffff
// 005508a8: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005508ab: MOV EDI,dword ptr [ESI + 0x4]
// 005508ae: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005508b2: CMP EDI,0x10000
// 005508b8: JL 0x00550904
//   XREF to: 00550904 (CONDITIONAL_JUMP)
// 005508ba: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_005508ba
//   XREF to: Stack[-0x14] (READ)
// 005508be: PUSH EBX
// 005508bf: PUSH 0x1
// 005508c1: PUSH 0x10000
// 005508c6: PUSH 0x30d5090
//   XREF to: 030d5090 (DATA)
// 005508cb: MOV ESI,0x30d5090
//   XREF to: 030d5090 (DATA)
// 005508d0: XOR EBX,EBX
// 005508d2: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005508d7: ADD ESP,0x10
// 005508da: MOV EAX,EBP
// 005508dc: XOR EDX,EDX
//   Label: LAB_005508dc
// 005508de: MOV DL,byte ptr [ESI]
//   XREF to: 030d5090 (READ)
//   XREF to: 030d5091 (READ)
// 005508e0: PUSH EDX
// 005508e1: PUSH EAX
// 005508e2: INC ESI
// 005508e3: INC EBX
// 005508e4: CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)
// 005508e9: ADD ESP,0x8
// 005508ec: CMP EBX,0x10000
// 005508f2: JC 0x005508dc
//   XREF to: 005508dc (CONDITIONAL_JUMP)
// 005508f4: SUB EDI,0x10000
// 005508fa: MOV EBP,EAX
// 005508fc: CMP EDI,0x10000
// 00550902: JGE 0x005508ba
//   XREF to: 005508ba (CONDITIONAL_JUMP)
// 00550904: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_00550904
//   XREF to: Stack[-0x14] (READ)
// 00550908: PUSH ESI
// 00550909: PUSH 0x1
// 0055090b: PUSH EDI
// 0055090c: PUSH 0x30d5090
//   XREF to: 030d5090 (DATA)
// 00550911: MOV EBX,0x30d5090
//   XREF to: 030d5090 (PARAM)
// 00550916: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0055091b: ADD ESP,0x10
// 0055091e: XOR ESI,ESI
// 00550920: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00550924: TEST EDI,EDI
// 00550926: JBE 0x00550950
//   XREF to: 00550950 (CONDITIONAL_JUMP)
// 00550928: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0055092c: XOR EAX,EAX
//   Label: LAB_0055092c
// 0055092e: MOV AL,byte ptr [EBX]
//   XREF to: 030d5090 (READ)
//   XREF to: 030d5091 (READ)
// 00550930: PUSH EAX
// 00550931: PUSH EBP
// 00550932: INC EBX
//   XREF to: 030d5091 (PARAM)
//   XREF to: 030d5092 (PARAM)
// 00550933: INC ESI
// 00550934: CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)
// 00550939: ADD ESP,0x8
// 0055093c: MOV EBP,EAX
// 0055093e: CMP ESI,EDI
// 00550940: JC 0x0055092c
//   XREF to: 0055092c (CONDITIONAL_JUMP)
// 00550942: LEA EAX,[EAX]
// 00550948: LEA EDX,[EDX]
// 0055094e: MOV EAX,EAX
// 00550950: PUSH 0x365
//   Label: LAB_00550950
// 00550955: PUSH 0x64068d
//   XREF to: 0064068d (DATA)
// 0055095a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0055095e: PUSH EAX
// 0055095f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00550964: ADD ESP,0xc
// 00550967: MOV EAX,EBP
// 00550969: ADD ESP,0xc
// 0055096c: POP EBP
// 0055096d: POP EDI
// 0055096e: POP ESI
// 0055096f: POP EBX
// 00550970: RET
