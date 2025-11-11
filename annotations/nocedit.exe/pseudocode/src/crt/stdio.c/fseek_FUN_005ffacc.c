// Name: crt_stdio.c_fseek_FUN_005ffacc
// Address: 005ffacc
// Address Range: [[005ffacc, 005ffcb2]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 (0054b690) at 0054b84b [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c2a4 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044fc10 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494ef6 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e14ae [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579907 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058be34 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592ba0 [UNCONDITIONAL_CALL]
//   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c (0060190c) at 00601a06 [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFile_FUN_00481a50 (00481a50) at 00481b1b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 (004b2a60) at 004b2a89 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 (004b2eb0) at 004b2ec4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6518 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd622 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7dba [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 (004b23a0) at 004b23cd [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 (005507f0) at 00550893 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590 (00550590) at 00550642 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0 (005506c0) at 0055076b [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054fd71 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 00550329 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 005511e2 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490 (0054f490) at 0054f4da [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046bcb0 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 00458223 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b0e4 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0 (0052ecf0) at 0052ed68 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_reset_FUN_0052eca0 (0052eca0) at 0052ecae [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 (00534630) at 005346fe [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0 (00534ba0) at 00534bcf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 (005a65a0) at 005a666b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4ebf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_WavReadingFunc1_FUN_005a3fe0 (005a3fe0) at 005a4200 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_tell_FUN_00606720
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_stdio.c_lseek_FUN_00606690
//   crt_stdio.c_seek_within_buffer_FUN_005ffa70
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005ffb98) */

int __cdecl crt_stdio_c_fseek_FUN_005ffacc(FILE *file,long offset,int whence)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  bVar1 = (byte)file->_flag;
  if ((bVar1 & 6) != 0) {
    if ((file->_flag & 0x1000) == 0) {
      if (whence == 1) {
        offset = offset - file->_cnt;
      }
      pcVar2 = file->_link->__reserve_end;
      file->_cnt = 0;
      file->_ptr = pcVar2;
    }
    else {
      iVar3 = crt_stdio_c_fflushInternal_FUN_006039d0(file);
      if (iVar3 != 0) {
        if ((whence == 0) && (offset < 0)) {
          crt_errno_c_setErrno_FUN_00602790(9);
        }
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
        return -1;
      }
    }
    *(byte *)&file->_flag = (byte)file->_flag & 0xeb;
    iVar3 = crt_stdio_c_lseek_FUN_00606690(file->_handle,offset,whence);
    if (iVar3 == -1) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
    goto LAB_005ffc9f;
  }
  if (whence == 0) {
    lVar5 = crt_io_c_tell_FUN_00606720(file->_handle);
    iVar3 = crt_stdio_c_seek_within_buffer_FUN_005ffa70(offset - (lVar5 - file->_cnt),file);
    if (iVar3 == 0) goto LAB_005ffc9f;
    iVar3 = crt_stdio_c_lseek_FUN_00606690(file->_handle,offset,0);
    if (iVar3 == -1) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
  }
  else {
    if (1 < (uint)whence) {
      if (whence != 2) {
        crt_errno_c_setErrno_FUN_00602790(9);
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
        return -1;
      }
      *(byte *)&file->_flag = bVar1 & 0xef;
      pcVar2 = file->_link->__reserve_end;
      file->_cnt = 0;
      file->_ptr = pcVar2;
      iVar3 = crt_stdio_c_lseek_FUN_00606690(file->_handle,offset,2);
      if (iVar3 == -1) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
        return -1;
      }
      goto LAB_005ffc9f;
    }
    iVar3 = file->_cnt;
    iVar4 = crt_stdio_c_seek_within_buffer_FUN_005ffa70(offset,file);
    if (iVar4 == 0) goto LAB_005ffc9f;
    iVar3 = crt_stdio_c_lseek_FUN_00606690(file->_handle,offset - iVar3,whence);
    if (iVar3 == -1) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
  }
  crt_stdio_c_seek_within_buffer_FUN_005ffa70(file);
LAB_005ffc9f:
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return 0;
}


// Assembly code:
// 005ffacc: PUSH EBX
//   Label: crt_stdio.c_fseek_FUN_005ffacc
// 005ffacd: PUSH ESI
// 005fface: PUSH EDI
// 005ffacf: PUSH EBP
// 005ffad0: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ffad4: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ffad8: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ffadc: MOV EDX,dword ptr [EBX + 0x10]
// 005ffadf: PUSH EDX
// 005ffae0: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 005ffae6: MOV AH,byte ptr [EBX + 0xc]
// 005ffae9: ADD ESP,0x4
// 005ffaec: TEST AH,0x6
// 005ffaef: JZ 0x005ffb7f
//   XREF to: 005ffb7f (CONDITIONAL_JUMP)
// 005ffaf5: TEST byte ptr [EBX + 0xd],0x10
// 005ffaf9: JZ 0x005ffb31
//   XREF to: 005ffb31 (CONDITIONAL_JUMP)
// 005ffafb: PUSH EBX
// 005ffafc: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 005ffb01: ADD ESP,0x4
// 005ffb04: TEST EAX,EAX
// 005ffb06: JZ 0x005ffb48
//   XREF to: 005ffb48 (CONDITIONAL_JUMP)
// 005ffb08: TEST EDI,EDI
// 005ffb0a: JNZ 0x005ffb1a
//   XREF to: 005ffb1a (CONDITIONAL_JUMP)
// 005ffb0c: TEST ESI,ESI
// 005ffb0e: JGE 0x005ffb1a
//   XREF to: 005ffb1a (CONDITIONAL_JUMP)
// 005ffb10: PUSH 0x9
// 005ffb12: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 005ffb17: ADD ESP,0x4
// 005ffb1a: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_005ffb1a
// 005ffb1d: PUSH ESI
// 005ffb1e: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005ffb24: MOV EAX,0xffffffff
// 005ffb29: ADD ESP,0x4
// 005ffb2c: POP EBP
// 005ffb2d: POP EDI
// 005ffb2e: POP ESI
// 005ffb2f: POP EBX
// 005ffb30: RET
// 005ffb31: CMP EDI,0x1
//   Label: LAB_005ffb31
// 005ffb34: JNZ 0x005ffb39
//   XREF to: 005ffb39 (CONDITIONAL_JUMP)
// 005ffb36: SUB ESI,dword ptr [EBX + 0x4]
// 005ffb39: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_005ffb39
// 005ffb3c: MOV EAX,dword ptr [EAX + 0x8]
// 005ffb3f: MOV dword ptr [EBX + 0x4],0x0
// 005ffb46: MOV dword ptr [EBX],EAX
// 005ffb48: PUSH EDI
//   Label: LAB_005ffb48
// 005ffb49: MOV CL,byte ptr [EBX + 0xc]
// 005ffb4c: PUSH ESI
// 005ffb4d: MOV EAX,dword ptr [EBX + 0x10]
// 005ffb50: AND CL,0xeb
// 005ffb53: PUSH EAX
// 005ffb54: MOV byte ptr [EBX + 0xc],CL
// 005ffb57: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 005ffb5c: ADD ESP,0xc
// 005ffb5f: CMP EAX,-0x1
// 005ffb62: JNZ 0x005ffc9f
//   XREF to: 005ffc9f (CONDITIONAL_JUMP)
// 005ffb68: MOV ECX,dword ptr [EBX + 0x10]
// 005ffb6b: PUSH ECX
// 005ffb6c: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005ffb72: MOV EAX,0xffffffff
// 005ffb77: ADD ESP,0x4
// 005ffb7a: POP EBP
// 005ffb7b: POP EDI
// 005ffb7c: POP ESI
// 005ffb7d: POP EBX
// 005ffb7e: RET
// 005ffb7f: CMP EDI,0x1
//   Label: LAB_005ffb7f
// 005ffb82: JC 0x005ffb94
//   XREF to: 005ffb94 (CONDITIONAL_JUMP)
// 005ffb84: JBE 0x005ffb9d
//   XREF to: 005ffb9d (CONDITIONAL_JUMP)
// 005ffb86: CMP EDI,0x2
// 005ffb89: JZ 0x005ffc3d
//   XREF to: 005ffc3d (CONDITIONAL_JUMP)
// 005ffb8f: JMP 0x005ffc7e
//   XREF to: 005ffc7e (UNCONDITIONAL_JUMP)
// 005ffb94: TEST EDI,EDI
//   Label: LAB_005ffb94
// 005ffb96: JZ 0x005ffbec
//   XREF to: 005ffbec (CONDITIONAL_JUMP)
// 005ffb98: JMP 0x005ffc7e
//   XREF to: 005ffc7e (UNCONDITIONAL_JUMP)
// 005ffb9d: PUSH EBX
//   Label: LAB_005ffb9d
// 005ffb9e: PUSH ESI
// 005ffb9f: MOV EBP,dword ptr [EBX + 0x4]
// 005ffba2: CALL crt_stdio.c_seek_within_buffer_FUN_005ffa70
//   XREF to: 005ffa70 (UNCONDITIONAL_CALL)
// 005ffba7: ADD ESP,0x8
// 005ffbaa: TEST EAX,EAX
// 005ffbac: JZ 0x005ffc9f
//   XREF to: 005ffc9f (CONDITIONAL_JUMP)
// 005ffbb2: PUSH EDI
// 005ffbb3: SUB ESI,EBP
// 005ffbb5: PUSH ESI
// 005ffbb6: MOV EDI,dword ptr [EBX + 0x10]
// 005ffbb9: PUSH EDI
// 005ffbba: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 005ffbbf: ADD ESP,0xc
// 005ffbc2: CMP EAX,-0x1
// 005ffbc5: JNZ 0x005ffbde
//   XREF to: 005ffbde (CONDITIONAL_JUMP)
// 005ffbc7: MOV EBP,dword ptr [EBX + 0x10]
// 005ffbca: PUSH EBP
// 005ffbcb: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005ffbd1: MOV EAX,0xffffffff
// 005ffbd6: ADD ESP,0x4
// 005ffbd9: POP EBP
// 005ffbda: POP EDI
// 005ffbdb: POP ESI
// 005ffbdc: POP EBX
// 005ffbdd: RET
// 005ffbde: PUSH EBX
//   Label: LAB_005ffbde
// 005ffbdf: CALL crt_stdio.c_seek_within_buffer_FUN_005ffa70
//   XREF to: 005ffab4 (UNCONDITIONAL_CALL)
// 005ffbe4: ADD ESP,0x4
// 005ffbe7: JMP 0x005ffc9f
//   XREF to: 005ffc9f (UNCONDITIONAL_JUMP)
// 005ffbec: MOV EDX,dword ptr [EBX + 0x10]
//   Label: LAB_005ffbec
// 005ffbef: PUSH EDX
// 005ffbf0: CALL crt_io.c_tell_FUN_00606720
//   XREF to: 00606720 (UNCONDITIONAL_CALL)
// 005ffbf5: ADD ESP,0x4
// 005ffbf8: MOV ECX,dword ptr [EBX + 0x4]
// 005ffbfb: MOV EBP,ESI
// 005ffbfd: SUB EAX,ECX
// 005ffbff: PUSH EBX
// 005ffc00: SUB EBP,EAX
// 005ffc02: PUSH EBP
// 005ffc03: CALL crt_stdio.c_seek_within_buffer_FUN_005ffa70
//   XREF to: 005ffa70 (UNCONDITIONAL_CALL)
// 005ffc08: ADD ESP,0x8
// 005ffc0b: TEST EAX,EAX
// 005ffc0d: JZ 0x005ffc9f
//   XREF to: 005ffc9f (CONDITIONAL_JUMP)
// 005ffc13: PUSH EDI
// 005ffc14: PUSH ESI
// 005ffc15: MOV ESI,dword ptr [EBX + 0x10]
// 005ffc18: PUSH ESI
// 005ffc19: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 005ffc1e: ADD ESP,0xc
// 005ffc21: CMP EAX,-0x1
// 005ffc24: JNZ 0x005ffbde
//   XREF to: 005ffbde (CONDITIONAL_JUMP)
// 005ffc26: MOV EDI,dword ptr [EBX + 0x10]
// 005ffc29: PUSH EDI
// 005ffc2a: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005ffc30: MOV EAX,0xffffffff
// 005ffc35: ADD ESP,0x4
// 005ffc38: POP EBP
// 005ffc39: POP EDI
// 005ffc3a: POP ESI
// 005ffc3b: POP EBX
// 005ffc3c: RET
// 005ffc3d: MOV DL,AH
//   Label: LAB_005ffc3d
// 005ffc3f: PUSH EDI
// 005ffc40: MOV ECX,dword ptr [EBX + 0x10]
// 005ffc43: AND DL,0xef
// 005ffc46: MOV EAX,dword ptr [EBX + 0x8]
// 005ffc49: MOV byte ptr [EBX + 0xc],DL
// 005ffc4c: PUSH ESI
// 005ffc4d: MOV EAX,dword ptr [EAX + 0x8]
// 005ffc50: MOV dword ptr [EBX + 0x4],0x0
// 005ffc57: PUSH ECX
// 005ffc58: MOV dword ptr [EBX],EAX
// 005ffc5a: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 005ffc5f: ADD ESP,0xc
// 005ffc62: CMP EAX,-0x1
// 005ffc65: JNZ 0x005ffc9f
//   XREF to: 005ffc9f (CONDITIONAL_JUMP)
// 005ffc67: MOV ESI,dword ptr [EBX + 0x10]
// 005ffc6a: PUSH ESI
// 005ffc6b: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005ffc71: MOV EAX,0xffffffff
// 005ffc76: ADD ESP,0x4
// 005ffc79: POP EBP
// 005ffc7a: POP EDI
// 005ffc7b: POP ESI
// 005ffc7c: POP EBX
// 005ffc7d: RET
// 005ffc7e: PUSH 0x9
//   Label: LAB_005ffc7e
// 005ffc80: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 005ffc85: ADD ESP,0x4
// 005ffc88: MOV EAX,dword ptr [EBX + 0x10]
// 005ffc8b: PUSH EAX
// 005ffc8c: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005ffc92: MOV EAX,0xffffffff
// 005ffc97: ADD ESP,0x4
// 005ffc9a: POP EBP
// 005ffc9b: POP EDI
// 005ffc9c: POP ESI
// 005ffc9d: POP EBX
// 005ffc9e: RET
// 005ffc9f: MOV EDX,dword ptr [EBX + 0x10]
//   Label: LAB_005ffc9f
// 005ffca2: PUSH EDX
// 005ffca3: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005ffca9: ADD ESP,0x4
// 005ffcac: XOR EAX,EAX
// 005ffcae: POP EBP
// 005ffcaf: POP EDI
// 005ffcb0: POP ESI
// 005ffcb1: POP EBX
// 005ffcb2: RET
