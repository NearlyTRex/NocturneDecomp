// Name: engine_dosio.c_findFile_FUN_00481760
// Address: 00481760
// Address Range: [[00481760, 004817b7]]
// Convention: __cdecl
// Signature: int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e7c1 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494e5e [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFileSize_FUN_00481880 (00481880) at 004818a6 [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFileTimestamp_FUN_004818d0 (004818d0) at 004818f6 [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFile_FUN_00481a50 (00481a50) at 00481ad3 [UNCONDITIONAL_CALL]
//   engine_dosio.c_reopenFileStream_FUN_00481b50 (00481b50) at 00481bd8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad929 [UNCONDITIONAL_CALL]
// Globals:
//   int g_NumSearchHandlers
//   FileSearchHandler*[5] g_SearchHandlers
//   undefined4 g_SearchHandlers[1]
// Function calls:
//   engine_dosio.c_findFileNormally_FUN_004817c0

#include "nocturne.h"

int __cdecl engine_dosio_c_findFile_FUN_00481760(SFoundFileInfo *context)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_NumSearchHandlers < 1) {
    iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(context);
    return iVar3;
  }
  iVar3 = 0;
  if (0 < g_NumSearchHandlers) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)((int)g_SearchHandlers + iVar2))();
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_NumSearchHandlers);
  }
  return 0;
}


// Assembly code:
// 00481760: PUSH EBX
//   Label: engine_dosio.c_findFile_FUN_00481760
// 00481761: PUSH ESI
// 00481762: PUSH EDI
// 00481763: PUSH EBP
// 00481764: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00481768: MOV EDX,dword ptr [0x02c14d18]
//   XREF to: 02c14d18 (READ)
// 0048176e: CMP EDX,0x1
// 00481771: JL 0x004817a0
//   XREF to: 004817a0 (CONDITIONAL_JUMP)
// 00481773: XOR ESI,ESI
// 00481775: TEST EDX,EDX
// 00481777: JLE 0x00481799
//   XREF to: 00481799 (CONDITIONAL_JUMP)
// 00481779: XOR EBX,EBX
// 0048177b: MOV EAX,EBX
//   Label: LAB_0048177b
// 0048177d: PUSH EDI
// 0048177e: CALL dword ptr [EAX + 0x2c14d1c]
//   XREF to: 02c14d1c (READ)
//   XREF to: 02c14d20 (READ)
// 00481784: ADD ESP,0x4
// 00481787: TEST EAX,EAX
// 00481789: JNZ 0x004817ae
//   XREF to: 004817ae (CONDITIONAL_JUMP)
// 0048178b: MOV EBP,dword ptr [0x02c14d18]
//   XREF to: 02c14d18 (READ)
// 00481791: INC ESI
// 00481792: ADD EBX,0x4
// 00481795: CMP ESI,EBP
// 00481797: JL 0x0048177b
//   XREF to: 0048177b (CONDITIONAL_JUMP)
// 00481799: XOR EAX,EAX
//   Label: LAB_00481799
// 0048179b: POP EBP
// 0048179c: POP EDI
// 0048179d: POP ESI
// 0048179e: POP EBX
// 0048179f: RET
// 004817a0: PUSH EDI
//   Label: LAB_004817a0
// 004817a1: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004817a6: ADD ESP,0x4
// 004817a9: POP EBP
// 004817aa: POP EDI
// 004817ab: POP ESI
// 004817ac: POP EBX
// 004817ad: RET
// 004817ae: MOV EAX,0x1
//   Label: LAB_004817ae
// 004817b3: POP EBP
// 004817b4: POP EDI
// 004817b5: POP ESI
// 004817b6: POP EBX
// 004817b7: RET
