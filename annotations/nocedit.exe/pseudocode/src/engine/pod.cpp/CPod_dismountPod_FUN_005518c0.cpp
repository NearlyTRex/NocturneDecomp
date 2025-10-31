// Name: engine_pod.cpp_CPod_dismountPod_FUN_005518c0
// Address: 005518c0
// Address Range: [[005518c0, 0055195d]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_dismountPod_FUN_005518c0(CPod * this_ptr, int index)
// Cross-references:
//   engine_pod.cpp_CPod_dismount_FUN_00550b90 (00550b90) at 00550c0f [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 (005513d0) at 00551447 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_006408b1
//   TerminatedCString s_CPod_dismountPod_invalid_006408c3
//   TerminatedCString s_engine_pod_cpp_006408e5
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_005518c0(CPod *this_ptr,int index)

{
  CPodFile *ptr;
  CPodFile **ppCVar1;
  int iVar2;
  
  if ((index < 0) || (this_ptr->pod_file_count <= index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x5fd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPod::dismountPod - invalid index");
  }
  g_CurrentDebugLine = 0x602;
  g_CurrentDebugFilename = "..\\engine\\pod.cpp";
  if (this_ptr->pod_files[index] != (CPodFile *)0x0) {
    ptr = engine_pod_cpp_CPodFile_dtor_FUN_0054f610(this_ptr->pod_files[index]);
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  }
  iVar2 = this_ptr->pod_file_count + -1;
  this_ptr->pod_file_count = iVar2;
  if (index < iVar2) {
    ppCVar1 = this_ptr->pod_files + index + -1;
    do {
      ppCVar1[1] = ppCVar1[2];
      index = index + 1;
      ppCVar1 = ppCVar1 + 1;
    } while (index < this_ptr->pod_file_count);
  }
  this_ptr->pod_files[this_ptr->pod_file_count] = (CPodFile *)0x0;
  return;
}


// Assembly code:
// 005518c0: PUSH EBX
//   Label: engine_pod.cpp_CPod_dismountPod_FUN_005518c0
// 005518c1: PUSH ESI
// 005518c2: PUSH EBP
// 005518c3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005518c7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005518cb: TEST ESI,ESI
// 005518cd: JL 0x005518d3
//   XREF to: 005518d3 (CONDITIONAL_JUMP)
// 005518cf: CMP ESI,dword ptr [EBX]
// 005518d1: JL 0x005518f8
//   XREF to: 005518f8 (CONDITIONAL_JUMP)
// 005518d3: PUSH EDI
//   Label: LAB_005518d3
// 005518d4: MOV ECX,0x6408b1
//   XREF to: 006408b1 (PARAM)
// 005518d9: MOV EDI,0x5fd
// 005518de: PUSH 0x6408c3
//   XREF to: 006408c3 (DATA)
// 005518e3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005518e9: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005518ef: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005518f4: ADD ESP,0x4
// 005518f7: POP EDI
// 005518f8: MOV EAX,0x602
//   Label: LAB_005518f8
// 005518fd: MOV EBP,0x6408e5
//   XREF to: 006408e5 (DATA)
// 00551902: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 00551907: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 0055190d: MOV EAX,dword ptr [EBX + ESI*0x4 + 0x4]
// 00551911: TEST EAX,EAX
// 00551913: JZ 0x00551929
//   XREF to: 00551929 (CONDITIONAL_JUMP)
// 00551915: PUSH 0x0
// 00551917: PUSH EAX
// 00551918: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 0055191d: ADD ESP,0x8
// 00551920: PUSH EAX
// 00551921: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00551926: ADD ESP,0x4
// 00551929: MOV ECX,dword ptr [EBX]
//   Label: LAB_00551929
// 0055192b: DEC ECX
// 0055192c: MOV EDX,ESI
// 0055192e: MOV dword ptr [EBX],ECX
// 00551930: CMP ESI,ECX
// 00551932: JGE 0x00551950
//   XREF to: 00551950 (CONDITIONAL_JUMP)
// 00551934: LEA EAX,[ESI*0x4 + 0x0]
// 0055193b: ADD EAX,EBX
// 0055193d: MOV ECX,dword ptr [EAX + 0x8]
//   Label: LAB_0055193d
// 00551940: MOV dword ptr [EAX + 0x4],ECX
// 00551943: INC EDX
// 00551944: MOV EBP,dword ptr [EBX]
// 00551946: ADD EAX,0x4
// 00551949: CMP EDX,EBP
// 0055194b: JL 0x0055193d
//   XREF to: 0055193d (CONDITIONAL_JUMP)
// 0055194d: LEA EAX,[EAX]
// 00551950: MOV EAX,dword ptr [EBX]
//   Label: LAB_00551950
// 00551952: MOV dword ptr [EBX + EAX*0x4 + 0x4],0x0
// 0055195a: POP EBP
// 0055195b: POP ESI
// 0055195c: POP EBX
// 0055195d: RET
