// Name: core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0
// Address: 005b17d0
// Address Range: [[005b17d0, 005b1865]]
// Convention: __cdecl
// Signature: void core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0(char * wildcard_pattern)
// Globals:
//   CStrList g_SoundFileList
//   int g_SoundMatchCount
//   char[40][40] g_SoundMatchedFilenames
//   undefined4 DAT_03f6b141
//   undefined4 DAT_03f6b142
//   undefined4 DAT_03f6b143
// Function calls:
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_005b17d0(char *wildcard_pattern)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int index;
  CStrList *unaff_EBP;
  char *pcVar4;
  
  index = 0;
  g_SoundMatchCount = 0;
  if (g_SoundFileList.item_count < 1) {
    g_SoundMatchCount = 0;
    return;
  }
  do {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,index);
    iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                      (wildcard_pattern,pcVar2,(int)unaff_EBP);
    if (iVar3 != 0) {
      unaff_EBP = &g_SoundFileList;
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,index);
      pcVar4 = g_SoundMatchedFilenames[g_SoundMatchCount];
      do {
        cVar1 = *pcVar2;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      g_SoundMatchCount = g_SoundMatchCount + 1;
      if (0x27 < g_SoundMatchCount) {
        return;
      }
    }
    index = index + 1;
    if (g_SoundFileList.item_count <= index) {
      return;
    }
  } while( true );
}


// Assembly code:
// 005b17d0: PUSH EBX
//   Label: core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0
// 005b17d1: PUSH ESI
// 005b17d2: PUSH EDI
// 005b17d3: PUSH EBP
// 005b17d4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b17d8: XOR EDX,EDX
// 005b17da: XOR EBX,EBX
// 005b17dc: MOV dword ptr [0x03f6b138],EDX
//   XREF to: 03f6b138 (WRITE)
// 005b17e2: MOV EAX,[0x03f6b128]
//   XREF to: 03f6b128 (READ)
// 005b17e7: CMP EBX,EAX
// 005b17e9: JL 0x005b17f0
//   XREF to: 005b17f0 (CONDITIONAL_JUMP)
// 005b17eb: POP EBP
//   Label: LAB_005b17eb
// 005b17ec: POP EDI
// 005b17ed: POP ESI
// 005b17ee: POP EBX
// 005b17ef: RET
// 005b17f0: PUSH 0x0
//   Label: LAB_005b17f0
// 005b17f2: PUSH EBX
// 005b17f3: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b17f8: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005b17fd: ADD ESP,0x8
// 005b1800: PUSH EAX
// 005b1801: PUSH EBP
// 005b1802: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 005b1807: ADD ESP,0xc
// 005b180a: TEST EAX,EAX
// 005b180c: JZ 0x005b1857
//   XREF to: 005b1857 (CONDITIONAL_JUMP)
// 005b180e: PUSH EBX
// 005b180f: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b1814: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005b1819: IMUL EDI,dword ptr [0x03f6b138],0x28
//   XREF to: 03f6b138 (READ)
// 005b1820: ADD ESP,0x8
// 005b1823: MOV ESI,EAX
// 005b1825: ADD EDI,0x3f6b140
//   XREF to: 03f6b140 (DATA)
// 005b182b: PUSH EDI
//   XREF to: 03f6b140 (DATA)
// 005b182c: MOV AL,byte ptr [ESI]
//   Label: LAB_005b182c
// 005b182e: MOV byte ptr [EDI],AL
//   XREF to: 03f6b140 (WRITE)
//   XREF to: 03f6b142 (WRITE)
// 005b1830: CMP AL,0x0
// 005b1832: JZ 0x005b1844
//   XREF to: 005b1844 (CONDITIONAL_JUMP)
// 005b1834: MOV AL,byte ptr [ESI + 0x1]
// 005b1837: ADD ESI,0x2
// 005b183a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03f6b141 (WRITE)
//   XREF to: 03f6b143 (WRITE)
// 005b183d: ADD EDI,0x2
// 005b1840: CMP AL,0x0
// 005b1842: JNZ 0x005b182c
//   XREF to: 005b182c (CONDITIONAL_JUMP)
// 005b1844: POP EDI
//   Label: LAB_005b1844
// 005b1845: MOV ESI,dword ptr [0x03f6b138]
//   XREF to: 03f6b138 (READ)
// 005b184b: INC ESI
// 005b184c: MOV dword ptr [0x03f6b138],ESI
//   XREF to: 03f6b138 (WRITE)
// 005b1852: CMP ESI,0x28
// 005b1855: JGE 0x005b17eb
//   XREF to: 005b17eb (CONDITIONAL_JUMP)
// 005b1857: INC EBX
//   Label: LAB_005b1857
// 005b1858: MOV EAX,[0x03f6b128]
//   XREF to: 03f6b128 (READ)
// 005b185d: CMP EBX,EAX
// 005b185f: JL 0x005b17f0
//   XREF to: 005b17f0 (CONDITIONAL_JUMP)
// 005b1861: POP EBP
// 005b1862: POP EDI
// 005b1863: POP ESI
// 005b1864: POP EBX
// 005b1865: RET
