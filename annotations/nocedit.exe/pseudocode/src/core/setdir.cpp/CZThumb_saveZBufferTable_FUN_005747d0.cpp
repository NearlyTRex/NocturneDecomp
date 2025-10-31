// Name: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_005747d0
// Address: 005747d0
// Address Range: [[005747d0, 00574828]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_saveZBufferTable_FUN_005747d0(CZThumb * this_ptr, int count)
// Globals:
//   TerminatedCString s_core_setdir_cpp_006463fe
//   TerminatedCString s_saveZBufferTable_already_00646411
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   uint*[1024] g_ZBufferScanlineArrayBackup
//   undefined4 DAT_03363630
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_005747d0(CZThumb *this_ptr,int count)

{
  int iVar1;
  int iVar2;
  
  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  if (0 < count) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(undefined4 *)((int)g_ZBufferScanlineArrayBackup + iVar2) =
           *(undefined4 *)((int)g_ZBufferScanlineArray + iVar2);
      iVar2 = iVar1;
    } while (SBORROW4(iVar1,count * 4) != iVar1 + count * -4 < 0);
  }
  return;
}


// Assembly code:
// 005747d0: PUSH ESI
//   Label: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_005747d0
// 005747d1: CMP dword ptr [0x0336362c],0x0
//   XREF to: 0336362c (READ)
// 005747d8: JNZ 0x00574802
//   XREF to: 00574802 (CONDITIONAL_JUMP)
// 005747da: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_005747da
//   XREF to: Stack[0x4] (READ)
// 005747de: TEST ESI,ESI
// 005747e0: JLE 0x00574800
//   XREF to: 00574800 (CONDITIONAL_JUMP)
// 005747e2: LEA ECX,[ESI*0x4 + 0x0]
// 005747e9: XOR EAX,EAX
// 005747eb: ADD EAX,0x4
//   Label: LAB_005747eb
// 005747ee: MOV EDX,dword ptr [EAX + 0x2cf7d58]
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 005747f4: MOV dword ptr [EAX + 0x3363628],EDX
//   XREF to: 0336362c (WRITE)
//   XREF to: 03363630 (WRITE)
// 005747fa: CMP EAX,ECX
// 005747fc: JL 0x005747eb
//   XREF to: 005747eb (CONDITIONAL_JUMP)
// 005747fe: MOV EAX,EAX
// 00574800: POP ESI
//   Label: LAB_00574800
// 00574801: RET
// 00574802: PUSH EBX
//   Label: LAB_00574802
// 00574803: MOV ECX,0x6463fe
//   XREF to: 006463fe (DATA)
// 00574808: MOV EBX,0x67
// 0057480d: PUSH 0x646411
//   XREF to: 00646411 (DATA)
// 00574812: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00574818: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0057481e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00574823: ADD ESP,0x4
// 00574826: POP EBX
// 00574827: JMP 0x005747da
//   XREF to: 005747da (UNCONDITIONAL_JUMP)
