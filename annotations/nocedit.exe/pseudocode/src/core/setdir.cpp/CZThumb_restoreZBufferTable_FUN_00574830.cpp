// Name: core_setdir.cpp_CZThumb_restoreZBufferTable_FUN_00574830
// Address: 00574830
// Address Range: [[00574830, 00574891]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_restoreZBufferTable_FUN_00574830(CZThumb * this_ptr, int count)
// Globals:
//   TerminatedCString s_core_setdir_cpp_00646433
//   TerminatedCString s_saveZBufferTable_not_sav_00646446
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   uint*[1024] g_ZBufferScanlineArrayBackup
//   undefined4 DAT_03363630
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_restoreZBufferTable_FUN_00574830(CZThumb *this_ptr,int count)

{
  int iVar1;
  int iVar2;
  
  if (g_ZBufferScanlineArrayBackup[0] == (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x70;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - not saved!");
  }
  if (0 < count) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(undefined4 *)((int)g_ZBufferScanlineArray + iVar2) =
           *(undefined4 *)((int)g_ZBufferScanlineArrayBackup + iVar2);
      iVar2 = iVar1;
    } while (SBORROW4(iVar1,count * 4) != iVar1 + count * -4 < 0);
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  return;
}


// Assembly code:
// 00574830: PUSH ESI
//   Label: core_setdir.cpp_CZThumb_restoreZBufferTable_FUN_00574830
// 00574831: PUSH EDI
// 00574832: CMP dword ptr [0x0336362c],0x0
//   XREF to: 0336362c (READ)
// 00574839: JZ 0x0057486b
//   XREF to: 0057486b (CONDITIONAL_JUMP)
// 0057483b: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_0057483b
//   XREF to: Stack[0x4] (READ)
// 0057483f: TEST ESI,ESI
// 00574841: JLE 0x00574860
//   XREF to: 00574860 (CONDITIONAL_JUMP)
// 00574843: LEA ECX,[ESI*0x4 + 0x0]
// 0057484a: XOR EAX,EAX
// 0057484c: ADD EAX,0x4
//   Label: LAB_0057484c
// 0057484f: MOV EDX,dword ptr [EAX + 0x3363628]
//   XREF to: 0336362c (READ)
//   XREF to: 03363630 (READ)
// 00574855: MOV dword ptr [EAX + 0x2cf7d58],EDX
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 0057485b: CMP EAX,ECX
// 0057485d: JL 0x0057484c
//   XREF to: 0057484c (CONDITIONAL_JUMP)
// 0057485f: NOP
// 00574860: XOR EDI,EDI
//   Label: LAB_00574860
// 00574862: MOV dword ptr [0x0336362c],EDI
//   XREF to: 0336362c (WRITE)
// 00574868: POP EDI
// 00574869: POP ESI
// 0057486a: RET
// 0057486b: PUSH EBX
//   Label: LAB_0057486b
// 0057486c: MOV ECX,0x646433
//   XREF to: 00646433 (DATA)
// 00574871: MOV EBX,0x70
// 00574876: PUSH 0x646446
//   XREF to: 00646446 (DATA)
// 0057487b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00574881: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00574887: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057488c: ADD ESP,0x4
// 0057488f: POP EBX
// 00574890: JMP 0x0057483b
//   XREF to: 0057483b (UNCONDITIONAL_JUMP)
