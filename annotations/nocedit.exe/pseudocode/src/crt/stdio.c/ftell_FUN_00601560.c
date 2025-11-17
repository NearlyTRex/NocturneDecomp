// Name: crt_stdio.c_ftell_FUN_00601560
// Address: 00601560
// Address Range: [[00601560, 006015c6]]
// Convention: __watcallStack
// Signature: long crt_stdio.c_ftell_FUN_00601560(FILE * file_handle)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e142f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a06c [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 00560444 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579080 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005929fc [UNCONDITIONAL_CALL]
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 00602014 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 (004b2eb0) at 004b2f64 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b690b [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054fe27 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0 (0052ecf0) at 0052ed2c [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 (00534630) at 0053469b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa504 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 (005a4c80) at 005a4e2a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 (005a5200) at 005a546c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_parseConfigFile_FUN_005a45c0 (005a45c0) at 005a4764 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9448 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_readMessageFile_FUN_00543e40 (00543e40) at 00543f40 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_io.c_tell_FUN_00606720
//   crt_stdio.c_fflush_FUN_00601540
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

long __watcallStack crt_stdio_c_ftell_FUN_00601560(FILE *file_handle)

{
  int iVar1;
  int iVar2;
  
  if (((file_handle->_flag & 0x80) != 0) && ((file_handle->_flag & 0x1000) != 0)) {
    crt_stdio_c_fflush_FUN_00601540(file_handle);
  }
  iVar2 = crt_io_c_tell_FUN_00606720(file_handle->_handle);
  if (iVar2 != -1) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle->_handle);
    iVar1 = file_handle->_cnt;
    if (iVar1 != 0) {
      if ((file_handle->_flag & 0x1000) == 0) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = iVar2 + iVar1;
      }
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle->_handle);
  }
  return iVar2;
}


// Assembly code:
// 00601560: PUSH EBX
//   Label: crt_stdio.c_ftell_FUN_00601560
// 00601561: PUSH ESI
// 00601562: PUSH EDI
// 00601563: PUSH EBP
// 00601564: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00601568: TEST byte ptr [EBX + 0xc],0x80
// 0060156c: JZ 0x0060157d
//   XREF to: 0060157d (CONDITIONAL_JUMP)
// 0060156e: TEST byte ptr [EBX + 0xd],0x10
// 00601572: JZ 0x0060157d
//   XREF to: 0060157d (CONDITIONAL_JUMP)
// 00601574: PUSH EBX
// 00601575: CALL crt_stdio.c_fflush_FUN_00601540
//   XREF to: 00601540 (UNCONDITIONAL_CALL)
// 0060157a: ADD ESP,0x4
// 0060157d: MOV EDX,dword ptr [EBX + 0x10]
//   Label: LAB_0060157d
// 00601580: PUSH EDX
// 00601581: CALL crt_io.c_tell_FUN_00606720
//   XREF to: 00606720 (UNCONDITIONAL_CALL)
// 00601586: MOV ESI,EAX
// 00601588: ADD ESP,0x4
// 0060158b: MOV EDI,EAX
// 0060158d: CMP EAX,-0x1
// 00601590: JZ 0x006015c0
//   XREF to: 006015c0 (CONDITIONAL_JUMP)
// 00601592: MOV ECX,dword ptr [EBX + 0x10]
// 00601595: PUSH ECX
// 00601596: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060159c: MOV EBP,dword ptr [EBX + 0x4]
// 0060159f: ADD ESP,0x4
// 006015a2: TEST EBP,EBP
// 006015a4: JZ 0x006015b3
//   XREF to: 006015b3 (CONDITIONAL_JUMP)
// 006015a6: TEST byte ptr [EBX + 0xd],0x10
// 006015aa: JZ 0x006015b1
//   XREF to: 006015b1 (CONDITIONAL_JUMP)
// 006015ac: LEA EDI,[ESI + EBP*0x1]
// 006015af: JMP 0x006015b3
//   XREF to: 006015b3 (UNCONDITIONAL_JUMP)
// 006015b1: SUB EDI,EBP
//   Label: LAB_006015b1
// 006015b3: MOV EDX,dword ptr [EBX + 0x10]
//   Label: LAB_006015b3
// 006015b6: PUSH EDX
// 006015b7: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006015bd: ADD ESP,0x4
// 006015c0: MOV EAX,EDI
//   Label: LAB_006015c0
// 006015c2: POP EBP
// 006015c3: POP EDI
// 006015c4: POP ESI
// 006015c5: POP EBX
// 006015c6: RET
