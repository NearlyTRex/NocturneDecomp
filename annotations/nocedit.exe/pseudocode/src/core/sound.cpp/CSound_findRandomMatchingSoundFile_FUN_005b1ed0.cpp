// Name: core_sound.cpp_CSound_findRandomMatchingSoundFile_FUN_005b1ed0
// Address: 005b1ed0
// Address Range: [[005b1ed0, 005b1fc8]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_findRandomMatchingSoundFile_FUN_005b1ed0(CSound * this_ptr, char * out_result, char * wildcard_pattern)
// Cross-references:
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0 (005b1fd0) at 005b2401 [UNCONDITIONAL_CALL]
// Globals:
//   CStrList g_SoundFileList
//   int g_SoundMatchCount
//   char[40][40] g_SoundMatchedFilenames
//   undefined4 DAT_03f6b141
//   undefined4 DAT_03f6b142
//   undefined4 DAT_03f6b143
// Function calls:
//   crt_stdlib.c_rand_FUN_005feb5c
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

void __cdecl
core_sound_cpp_CSound_findRandomMatchingSoundFile_FUN_005b1ed0
          (CSound *this_ptr,char *out_result,char *wildcard_pattern)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CStrList *unaff_EBP;
  char *pcVar4;
  char *pcVar5;
  
  g_SoundMatchCount = 0;
  *out_result = '\0';
  for (iVar3 = 0; iVar3 < g_SoundFileList.item_count; iVar3 = iVar3 + 1) {
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,iVar3);
    iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                      (wildcard_pattern,pcVar4,(int)unaff_EBP);
    if (iVar2 != 0) {
      unaff_EBP = &g_SoundFileList;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,iVar3);
      pcVar5 = g_SoundMatchedFilenames[g_SoundMatchCount];
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      g_SoundMatchCount = g_SoundMatchCount + 1;
      if (0x27 < g_SoundMatchCount) break;
    }
  }
  if (g_SoundMatchCount < 1) {
    return;
  }
  iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
  pcVar4 = g_SoundMatchedFilenames[iVar3 % g_SoundMatchCount];
  do {
    cVar1 = *pcVar4;
    *wildcard_pattern = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    wildcard_pattern[1] = cVar1;
    wildcard_pattern = wildcard_pattern + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 005b1ed0: PUSH EBX
//   Label: core_sound.cpp_CSound_findRandomMatchingSoundFile_FUN_005b1ed0
// 005b1ed1: PUSH ESI
// 005b1ed2: PUSH EDI
// 005b1ed3: PUSH EBP
// 005b1ed4: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005b1ed8: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b1edc: XOR EDX,EDX
// 005b1ede: XOR EBX,EBX
// 005b1ee0: MOV dword ptr [0x03f6b138],EDX
//   XREF to: 03f6b138 (WRITE)
// 005b1ee6: MOV byte ptr [EAX],0x0
// 005b1ee9: MOV EAX,[0x03f6b128]
//   Label: LAB_005b1ee9
//   XREF to: 03f6b128 (READ)
// 005b1eee: CMP EBX,EAX
// 005b1ef0: JL 0x005b1f04
//   XREF to: 005b1f04 (CONDITIONAL_JUMP)
// 005b1ef2: CMP dword ptr [0x03f6b138],0x1
//   Label: LAB_005b1ef2
//   XREF to: 03f6b138 (READ)
// 005b1ef9: JGE 0x005b1f81
//   XREF to: 005b1f81 (CONDITIONAL_JUMP)
// 005b1eff: POP EBP
// 005b1f00: POP EDI
// 005b1f01: POP ESI
// 005b1f02: POP EBX
// 005b1f03: RET
// 005b1f04: PUSH 0x0
//   Label: LAB_005b1f04
// 005b1f06: PUSH EBX
// 005b1f07: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b1f0c: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005b1f11: ADD ESP,0x8
// 005b1f14: PUSH EAX
// 005b1f15: PUSH EBP
// 005b1f16: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 005b1f1b: ADD ESP,0xc
// 005b1f1e: TEST EAX,EAX
// 005b1f20: JZ 0x005b1f7b
//   XREF to: 005b1f7b (CONDITIONAL_JUMP)
// 005b1f22: PUSH EBX
// 005b1f23: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b1f28: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005b1f2d: MOV EDI,dword ptr [0x03f6b138]
//   XREF to: 03f6b138 (READ)
// 005b1f33: MOV ESI,EAX
// 005b1f35: LEA EAX,[EDI*0x4 + 0x0]
// 005b1f3c: ADD EAX,EDI
// 005b1f3e: MOV EDI,0x3f6b140
//   XREF to: 03f6b140 (DATA)
// 005b1f43: SHL EAX,0x3
// 005b1f46: ADD ESP,0x8
// 005b1f49: ADD EDI,EAX
// 005b1f4b: PUSH EDI
//   XREF to: 03f6b140 (DATA)
// 005b1f4c: MOV AL,byte ptr [ESI]
//   Label: LAB_005b1f4c
// 005b1f4e: MOV byte ptr [EDI],AL
//   XREF to: 03f6b140 (WRITE)
//   XREF to: 03f6b142 (WRITE)
// 005b1f50: CMP AL,0x0
// 005b1f52: JZ 0x005b1f64
//   XREF to: 005b1f64 (CONDITIONAL_JUMP)
// 005b1f54: MOV AL,byte ptr [ESI + 0x1]
// 005b1f57: ADD ESI,0x2
// 005b1f5a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03f6b141 (WRITE)
//   XREF to: 03f6b143 (WRITE)
// 005b1f5d: ADD EDI,0x2
// 005b1f60: CMP AL,0x0
// 005b1f62: JNZ 0x005b1f4c
//   XREF to: 005b1f4c (CONDITIONAL_JUMP)
// 005b1f64: POP EDI
//   Label: LAB_005b1f64
// 005b1f65: MOV ECX,dword ptr [0x03f6b138]
//   XREF to: 03f6b138 (READ)
// 005b1f6b: INC ECX
// 005b1f6c: MOV dword ptr [0x03f6b138],ECX
//   XREF to: 03f6b138 (WRITE)
// 005b1f72: CMP ECX,0x28
// 005b1f75: JGE 0x005b1ef2
//   XREF to: 005b1ef2 (CONDITIONAL_JUMP)
// 005b1f7b: INC EBX
//   Label: LAB_005b1f7b
// 005b1f7c: JMP 0x005b1ee9
//   XREF to: 005b1ee9 (UNCONDITIONAL_JUMP)
// 005b1f81: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_005b1f81
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005b1f86: MOV EDX,EAX
// 005b1f88: MOV EBP,dword ptr [0x03f6b138]
//   XREF to: 03f6b138 (READ)
// 005b1f8e: SAR EDX,0x1f
// 005b1f91: IDIV EBP
// 005b1f93: LEA EAX,[EDX*0x4 + 0x0]
// 005b1f9a: ADD EAX,EDX
// 005b1f9c: MOV ESI,0x3f6b140
//   XREF to: 03f6b140 (DATA)
// 005b1fa1: SHL EAX,0x3
// 005b1fa4: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005b1fa8: ADD ESI,EAX
// 005b1faa: PUSH EDI
// 005b1fab: MOV AL,byte ptr [ESI]
//   Label: LAB_005b1fab
//   XREF to: 03f6b140 (DATA)
//   XREF to: 03f6b142 (DATA)
// 005b1fad: MOV byte ptr [EDI],AL
// 005b1faf: CMP AL,0x0
// 005b1fb1: JZ 0x005b1fc3
//   XREF to: 005b1fc3 (CONDITIONAL_JUMP)
// 005b1fb3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 03f6b141 (DATA)
//   XREF to: 03f6b143 (DATA)
// 005b1fb6: ADD ESI,0x2
// 005b1fb9: MOV byte ptr [EDI + 0x1],AL
// 005b1fbc: ADD EDI,0x2
// 005b1fbf: CMP AL,0x0
// 005b1fc1: JNZ 0x005b1fab
//   XREF to: 005b1fab (CONDITIONAL_JUMP)
// 005b1fc3: POP EDI
//   Label: LAB_005b1fc3
// 005b1fc4: POP EBP
// 005b1fc5: POP EDI
// 005b1fc6: POP ESI
// 005b1fc7: POP EBX
// 005b1fc8: RET
