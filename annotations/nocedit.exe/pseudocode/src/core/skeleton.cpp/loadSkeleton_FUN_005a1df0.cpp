// Name: core_skeleton.cpp_loadSkeleton_FUN_005a1df0
// Address: 005a1df0
// Address Range: [[005a1df0, 005a1e9b]]
// Convention: __cdecl
// Signature: CSkeleton * core_skeleton.cpp_loadSkeleton_FUN_005a1df0(char * filename)
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780 (0059a780) at 0059a792 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064f093
//   TerminatedCString s_Can_t_load_s_because_ske_0064f0a8
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_SkeletonPoolCount
//   CSkeleton[40] g_SkeletonPool
//   undefined4 DAT_038f4dac
//   undefined4 DAT_0391e5d8
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CSkeleton_load_FUN_00599b10
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_005a1df0(char *filename)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr;
  char *str1;
  
  iVar2 = 0;
  if (0 < g_SkeletonPoolCount) {
    str1 = g_SkeletonPool[0].loaded_filename;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,filename);
      if (iVar1 == 0) {
        return g_SkeletonPool + iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x2982c;
    } while (iVar2 < g_SkeletonPoolCount);
  }
  if (0x27 < g_SkeletonPoolCount) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x1093;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't load %s because skeleton manager is full.  (Size is %d)",filename,0x28);
  }
  this_ptr = g_SkeletonPool + g_SkeletonPoolCount;
  g_SkeletonPoolCount = g_SkeletonPoolCount + 1;
  core_skeleton_cpp_CSkeleton_load_FUN_00599b10(this_ptr,filename);
  return this_ptr;
}


// Assembly code:
// 005a1df0: PUSH EBX
//   Label: core_skeleton.cpp_loadSkeleton_FUN_005a1df0
// 005a1df1: PUSH ESI
// 005a1df2: PUSH EDI
// 005a1df3: PUSH EBP
// 005a1df4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a1df8: MOV EDX,dword ptr [0x038cc8a0]
//   XREF to: 038cc8a0 (READ)
// 005a1dfe: XOR EBX,EBX
// 005a1e00: TEST EDX,EDX
// 005a1e02: JLE 0x005a1e3b
//   XREF to: 005a1e3b (CONDITIONAL_JUMP)
// 005a1e04: MOV ESI,0x38cc8a4
//   XREF to: 038cc8a4 (DATA)
// 005a1e09: ADD ESI,0x28508
// 005a1e0f: IMUL EAX,EBX,0x2982c
//   Label: LAB_005a1e0f
// 005a1e15: PUSH EDI
// 005a1e16: MOV EBP,0x38cc8a4
//   XREF to: 038cc8a4 (DATA)
// 005a1e1b: PUSH ESI
//   XREF to: 038f4dac (DATA)
//   XREF to: 0391e5d8 (DATA)
// 005a1e1c: ADD EBP,EAX
// 005a1e1e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a1e23: ADD ESP,0x8
// 005a1e26: TEST EAX,EAX
// 005a1e28: JZ 0x005a1e95
//   XREF to: 005a1e95 (CONDITIONAL_JUMP)
// 005a1e2a: MOV ECX,dword ptr [0x038cc8a0]
//   XREF to: 038cc8a0 (READ)
// 005a1e30: INC EBX
// 005a1e31: ADD ESI,0x2982c
// 005a1e37: CMP EBX,ECX
// 005a1e39: JL 0x005a1e0f
//   XREF to: 005a1e0f (CONDITIONAL_JUMP)
// 005a1e3b: CMP dword ptr [0x038cc8a0],0x28
//   Label: LAB_005a1e3b
//   XREF to: 038cc8a0 (READ)
// 005a1e42: JL 0x005a1e6a
//   XREF to: 005a1e6a (CONDITIONAL_JUMP)
// 005a1e44: PUSH 0x28
// 005a1e46: PUSH EDI
// 005a1e47: MOV ESI,0x64f093
//   XREF to: 0064f093 (DATA)
// 005a1e4c: MOV EBP,0x1093
// 005a1e51: PUSH 0x64f0a8
//   XREF to: 0064f0a8 (DATA)
// 005a1e56: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a1e5c: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005a1e62: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a1e67: ADD ESP,0xc
// 005a1e6a: MOV EAX,[0x038cc8a0]
//   Label: LAB_005a1e6a
//   XREF to: 038cc8a0 (READ)
// 005a1e6f: IMUL EBX,EAX,0x2982c
// 005a1e75: PUSH EDI
// 005a1e76: ADD EBX,0x38cc8a4
//   XREF to: 038cc8a4 (DATA)
// 005a1e7c: LEA EDX,[EAX + 0x1]
// 005a1e7f: PUSH EBX
// 005a1e80: MOV dword ptr [0x038cc8a0],EDX
//   XREF to: 038cc8a0 (WRITE)
// 005a1e86: CALL core_skeleton.cpp_CSkeleton_load_FUN_00599b10
//   XREF to: 00599b10 (UNCONDITIONAL_CALL)
// 005a1e8b: ADD ESP,0x8
// 005a1e8e: MOV EAX,EBX
// 005a1e90: POP EBP
// 005a1e91: POP EDI
// 005a1e92: POP ESI
// 005a1e93: POP EBX
// 005a1e94: RET
// 005a1e95: MOV EAX,EBP
//   Label: LAB_005a1e95
//   XREF to: 038cc8a4 (DATA)
// 005a1e97: POP EBP
// 005a1e98: POP EDI
// 005a1e99: POP ESI
// 005a1e9a: POP EBX
// 005a1e9b: RET
