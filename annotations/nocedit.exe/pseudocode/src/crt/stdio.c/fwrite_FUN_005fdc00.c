// Name: crt_stdio.c_fwrite_FUN_005fdc00
// Address: 005fdc00
// Address Range: [[005fdc00, 005fde38]]
// Convention: __watcallStack
// Signature: SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0 (0054b5c0) at 0054b64a [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_FUN_0054b930 (0054b930) at 0054b967 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250 (00455250) at 004552ab [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_save_FUN_00457430 (00457430) at 00457445 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_write_FUN_00482330 (00482330) at 00482363 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50 (00494f50) at 00494f66 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0 (0049a5f0) at 0049a600 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 005544cd [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_write_FUN_00574b20 (00574b20) at 00574b37 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00577007 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d1f5 [UNCONDITIONAL_CALL]
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930 (00402930) at 00402a18 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6902 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd637 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 (004b2030) at 004b216a [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 005454ad [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 005491e0 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 005511f7 [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 004682db [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046db20 [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 00468572 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045b680 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 (00534210) at 0053437c [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   crt_stdio.c_write_FUN_006038c0
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

SIZE_T __watcallStack crt_stdio_c_fwrite_FUN_005fdc00(void *ptr,SIZE_T size,SIZE_T count,FILE *file)

{
  byte bVar1;
  uint uVar2;
  SIZE_T SVar3;
  uint uVar4;
  ThreadData *pTVar5;
  byte bVar7;
  uint uVar6;
  uint unaff_EBP;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  int iStack_14;
  
  bVar7 = 0;
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  if ((file->_flag & 2) == 0) {
    crt_errno_c_setErrno_FUN_00602790(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    SVar3 = 0;
  }
  else {
    uVar9 = count * count;
    if (uVar9 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    if (file->_link->__reserve_end == (char *)0x0) {
      crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
    }
    uVar2 = file->_flag;
    bVar1 = (byte)file->_flag;
    iStack_14 = 0;
    *(byte *)&file->_flag = bVar1 & 0xcf;
    if ((bVar1 & 0x40) == 0) {
      bVar7 = *(byte *)((int)&file->_flag + 1);
      bVar11 = (bVar7 & 4) != 0;
      if (bVar11) {
        bVar7 = bVar7 & 0xfa;
        *(byte *)((int)&file->_flag + 1) = bVar7;
        *(byte *)((int)&file->_flag + 1) = bVar7 | 1;
      }
      pcVar8 = file->_link->__get_base;
      file->_link->__get_base = &DAT_00000001;
      do {
        bVar7 = *(byte *)size;
        size = size + 1;
        crt_stdio_c_fputc_FUN_006007a0((uint)bVar7,file);
        if ((file->_flag & 0x30) != 0) break;
        iStack_14 = iStack_14 + 1;
      } while (uVar9 - iStack_14 != 0);
      file->_link->__get_base = pcVar8;
      if (bVar11) {
        bVar7 = *(byte *)((int)&file->_flag + 1) & 0xfa;
        *(byte *)((int)&file->_flag + 1) = bVar7;
        *(byte *)((int)&file->_flag + 1) = bVar7 | 4;
        crt_stdio_c_fflushInternal_FUN_006039d0(file);
      }
    }
    else {
      do {
        if ((file->_cnt == 0) && (file->_bufsize <= uVar9)) {
          uVar4 = uVar9 >> 8 & 0xfffffe;
          uVar6 = uVar4 << 8;
          if (uVar4 == 0) {
            uVar6 = uVar9;
          }
          uVar4 = crt_stdio_c_write_FUN_006038c0(file->_handle,(void *)size,uVar6);
          if (uVar4 != 0xffffffff) {
            if (uVar4 != 0) goto LAB_005fdd50;
            pTVar5 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
            pTVar5->errno_value = 0xc;
          }
          *(byte *)&file->_flag = (byte)file->_flag | 0x20;
        }
        else {
          uVar4 = file->_bufsize - file->_cnt;
          if (uVar9 < uVar4) {
            uVar4 = uVar9;
          }
          pcVar8 = (char *)size;
          pcVar10 = file->_ptr;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + ((uint)bVar7 * -2 + 1) * 4;
            pcVar10 = pcVar10 + ((uint)bVar7 * -2 + 1) * 4;
          }
          for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar10 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
            pcVar10 = pcVar10 + (uint)bVar7 * -2 + 1;
          }
          bVar1 = *(byte *)((int)&file->_flag + 1);
          file->_ptr = file->_ptr + uVar4;
          file->_cnt = file->_cnt + uVar4;
          *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
          if ((file->_cnt == file->_bufsize) || ((file->_flag & 0x400) != 0)) {
            crt_stdio_c_fflushInternal_FUN_006039d0(file);
          }
        }
LAB_005fdd50:
        size = size + uVar4;
        unaff_EBP = uVar9 - uVar4;
      } while ((unaff_EBP != 0) && (uVar9 = unaff_EBP, (file->_flag & 0x20) == 0));
    }
    file->_flag = file->_flag | uVar2 & 0x30;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    SVar3 = unaff_EBP / (uint)file;
  }
  return SVar3;
}


// Assembly code:
// 005fdc00: PUSH EBX
//   Label: crt_stdio.c_fwrite_FUN_005fdc00
// 005fdc01: PUSH ESI
// 005fdc02: PUSH EDI
// 005fdc03: PUSH EBP
// 005fdc04: SUB ESP,0x10
// 005fdc07: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 005fdc0b: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 005fdc0f: MOV EDX,dword ptr [EBX + 0x10]
// 005fdc12: PUSH EDX
// 005fdc13: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 005fdc19: MOV AH,byte ptr [EBX + 0xc]
// 005fdc1c: ADD ESP,0x4
// 005fdc1f: TEST AH,0x2
// 005fdc22: JNZ 0x005fdc4b
//   XREF to: 005fdc4b (CONDITIONAL_JUMP)
// 005fdc24: PUSH 0x4
// 005fdc26: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 005fdc2b: ADD ESP,0x4
// 005fdc2e: MOV AH,byte ptr [EBX + 0xc]
// 005fdc31: MOV EDX,dword ptr [EBX + 0x10]
// 005fdc34: OR AH,0x20
// 005fdc37: PUSH EDX
// 005fdc38: MOV byte ptr [EBX + 0xc],AH
// 005fdc3b: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fdc41: ADD ESP,0x4
// 005fdc44: XOR EAX,EAX
// 005fdc46: JMP 0x005fde31
//   XREF to: 005fde31 (UNCONDITIONAL_JUMP)
// 005fdc4b: IMUL EDI,dword ptr [ESP + 0x28]
//   Label: LAB_005fdc4b
// 005fdc50: TEST EDI,EDI
// 005fdc52: JNZ 0x005fdc6b
//   XREF to: 005fdc6b (CONDITIONAL_JUMP)
// 005fdc54: MOV EAX,dword ptr [EBX + 0x10]
// 005fdc57: PUSH EAX
// 005fdc58: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fdc5e: ADD ESP,0x4
// 005fdc61: MOV EAX,EDI
// 005fdc63: ADD ESP,0x10
// 005fdc66: POP EBP
// 005fdc67: POP EDI
// 005fdc68: POP ESI
// 005fdc69: POP EBX
// 005fdc6a: RET
// 005fdc6b: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_005fdc6b
// 005fdc6e: CMP dword ptr [EAX + 0x8],0x0
// 005fdc72: JNZ 0x005fdc7d
//   XREF to: 005fdc7d (CONDITIONAL_JUMP)
// 005fdc74: PUSH EBX
// 005fdc75: CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   XREF to: 006027e0 (UNCONDITIONAL_CALL)
// 005fdc7a: ADD ESP,0x4
// 005fdc7d: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_005fdc7d
// 005fdc80: MOV DL,byte ptr [EBX + 0xc]
// 005fdc83: XOR EBP,EBP
// 005fdc85: AND EAX,0x30
// 005fdc88: AND DL,0xcf
// 005fdc8b: MOV dword ptr [ESP + 0x8],EBP
// 005fdc8f: MOV dword ptr [ESP],EAX
// 005fdc92: MOV byte ptr [EBX + 0xc],DL
// 005fdc95: TEST DL,0x40
// 005fdc98: JZ 0x005fdd83
//   XREF to: 005fdd83 (CONDITIONAL_JUMP)
// 005fdc9e: MOV dword ptr [ESP + 0xc],EDI
// 005fdca2: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_005fdca2
// 005fdca6: JNZ 0x005fdcf2
//   XREF to: 005fdcf2 (CONDITIONAL_JUMP)
// 005fdca8: MOV EAX,dword ptr [ESP + 0xc]
// 005fdcac: CMP EAX,dword ptr [EBX + 0x14]
// 005fdcaf: JC 0x005fdcf2
//   XREF to: 005fdcf2 (CONDITIONAL_JUMP)
// 005fdcb1: XOR AL,AL
// 005fdcb3: AND AH,0xfe
// 005fdcb6: TEST EAX,EAX
// 005fdcb8: JNZ 0x005fdcbe
//   XREF to: 005fdcbe (CONDITIONAL_JUMP)
// 005fdcba: MOV EAX,dword ptr [ESP + 0xc]
// 005fdcbe: PUSH EAX
//   Label: LAB_005fdcbe
// 005fdcbf: MOV ESI,dword ptr [ESP + 0x28]
// 005fdcc3: PUSH ESI
// 005fdcc4: MOV EDI,dword ptr [EBX + 0x10]
// 005fdcc7: PUSH EDI
// 005fdcc8: CALL crt_stdio.c_write_FUN_006038c0
//   XREF to: 006038c0 (UNCONDITIONAL_CALL)
// 005fdccd: ADD ESP,0xc
// 005fdcd0: MOV EBP,EAX
// 005fdcd2: CMP EAX,-0x1
// 005fdcd5: JZ 0x005fdcec
//   XREF to: 005fdcec (CONDITIONAL_JUMP)
// 005fdcd7: TEST EAX,EAX
// 005fdcd9: JNZ 0x005fdd50
//   XREF to: 005fdd50 (CONDITIONAL_JUMP)
// 005fdcdf: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 005fdce5: MOV dword ptr [EAX + 0x4],0xc
// 005fdcec: OR byte ptr [EBX + 0xc],0x20
//   Label: LAB_005fdcec
// 005fdcf0: JMP 0x005fdd50
//   XREF to: 005fdd50 (UNCONDITIONAL_JUMP)
// 005fdcf2: MOV EBP,dword ptr [EBX + 0x14]
//   Label: LAB_005fdcf2
// 005fdcf5: MOV ESI,dword ptr [EBX + 0x4]
// 005fdcf8: MOV EDI,dword ptr [ESP + 0xc]
// 005fdcfc: SUB EBP,ESI
// 005fdcfe: CMP EBP,EDI
// 005fdd00: JBE 0x005fdd04
//   XREF to: 005fdd04 (CONDITIONAL_JUMP)
// 005fdd02: MOV EBP,EDI
// 005fdd04: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_005fdd04
// 005fdd08: MOV ECX,EBP
// 005fdd0a: MOV EDI,dword ptr [EBX]
// 005fdd0c: PUSH ES
// 005fdd0d: MOV AX,DS
// 005fdd0f: MOV ES,AX
// 005fdd11: PUSH EDI
// 005fdd12: MOV EAX,ECX
// 005fdd14: SHR ECX,0x2
// 005fdd17: MOVSD.REP ES:EDI,ESI
// 005fdd19: MOV CL,AL
// 005fdd1b: AND CL,0x3
// 005fdd1e: MOVSB.REP ES:EDI,ESI
// 005fdd20: POP EDI
// 005fdd21: POP ES
// 005fdd22: MOV EAX,dword ptr [EBX]
// 005fdd24: MOV EDX,dword ptr [EBX + 0x4]
// 005fdd27: MOV CH,byte ptr [EBX + 0xd]
// 005fdd2a: ADD EAX,EBP
// 005fdd2c: ADD EDX,EBP
// 005fdd2e: MOV dword ptr [EBX],EAX
// 005fdd30: OR CH,0x10
// 005fdd33: MOV dword ptr [EBX + 0x4],EDX
// 005fdd36: MOV byte ptr [EBX + 0xd],CH
// 005fdd39: MOV EAX,dword ptr [EBX + 0x4]
// 005fdd3c: CMP EAX,dword ptr [EBX + 0x14]
// 005fdd3f: JZ 0x005fdd47
//   XREF to: 005fdd47 (CONDITIONAL_JUMP)
// 005fdd41: TEST byte ptr [EBX + 0xd],0x4
// 005fdd45: JZ 0x005fdd50
//   XREF to: 005fdd50 (CONDITIONAL_JUMP)
// 005fdd47: PUSH EBX
//   Label: LAB_005fdd47
// 005fdd48: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 005fdd4d: ADD ESP,0x4
// 005fdd50: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_005fdd50
// 005fdd54: MOV EDX,dword ptr [ESP + 0x8]
// 005fdd58: MOV ECX,dword ptr [ESP + 0xc]
// 005fdd5c: ADD EAX,EBP
// 005fdd5e: ADD EDX,EBP
// 005fdd60: MOV dword ptr [ESP + 0x24],EAX
// 005fdd64: MOV dword ptr [ESP + 0x8],EDX
// 005fdd68: SUB ECX,EBP
// 005fdd6a: MOV dword ptr [ESP + 0xc],ECX
// 005fdd6e: JZ 0x005fde03
//   XREF to: 005fde03 (CONDITIONAL_JUMP)
// 005fdd74: TEST byte ptr [EBX + 0xc],0x20
// 005fdd78: JZ 0x005fdca2
//   XREF to: 005fdca2 (CONDITIONAL_JUMP)
// 005fdd7e: JMP 0x005fde03
//   XREF to: 005fde03 (UNCONDITIONAL_JUMP)
// 005fdd83: MOV CL,byte ptr [EBX + 0xd]
//   Label: LAB_005fdd83
// 005fdd86: XOR ESI,ESI
// 005fdd88: TEST CL,0x4
// 005fdd8b: JZ 0x005fdda1
//   XREF to: 005fdda1 (CONDITIONAL_JUMP)
// 005fdd8d: MOV CH,CL
// 005fdd8f: AND CH,0xfa
// 005fdd92: MOV AL,CH
// 005fdd94: MOV byte ptr [EBX + 0xd],CH
// 005fdd97: OR AL,0x1
// 005fdd99: MOV ESI,0x1
// 005fdd9e: MOV byte ptr [EBX + 0xd],AL
// 005fdda1: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_005fdda1
// 005fdda4: MOV EBP,dword ptr [EAX + 0xc]
// 005fdda7: MOV dword ptr [ESP + 0x4],EBP
// 005fddab: MOV dword ptr [EAX + 0xc],0x1
// 005fddb2: MOV EBP,dword ptr [ESP + 0x24]
// 005fddb6: XOR EAX,EAX
//   Label: LAB_005fddb6
// 005fddb8: PUSH EBX
// 005fddb9: MOV AL,byte ptr [EBP]
// 005fddbc: PUSH EAX
// 005fddbd: INC EBP
// 005fddbe: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 005fddc3: MOV DL,byte ptr [EBX + 0xc]
// 005fddc6: ADD ESP,0x8
// 005fddc9: TEST DL,0x30
// 005fddcc: JNZ 0x005fdddb
//   XREF to: 005fdddb (CONDITIONAL_JUMP)
// 005fddce: MOV ECX,dword ptr [ESP + 0x8]
// 005fddd2: INC ECX
// 005fddd3: MOV dword ptr [ESP + 0x8],ECX
// 005fddd7: CMP EDI,ECX
// 005fddd9: JNZ 0x005fddb6
//   XREF to: 005fddb6 (CONDITIONAL_JUMP)
// 005fdddb: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_005fdddb
// 005fddde: MOV EDI,dword ptr [ESP + 0x4]
// 005fdde2: MOV dword ptr [EAX + 0xc],EDI
// 005fdde5: TEST ESI,ESI
// 005fdde7: JZ 0x005fde03
//   XREF to: 005fde03 (CONDITIONAL_JUMP)
// 005fdde9: MOV DH,byte ptr [EBX + 0xd]
// 005fddec: AND DH,0xfa
// 005fddef: MOV CL,DH
// 005fddf1: MOV byte ptr [EBX + 0xd],DH
// 005fddf4: OR CL,0x4
// 005fddf7: PUSH EBX
// 005fddf8: MOV byte ptr [EBX + 0xd],CL
// 005fddfb: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 005fde00: ADD ESP,0x4
// 005fde03: TEST byte ptr [EBX + 0xc],0x20
//   Label: LAB_005fde03
// 005fde07: JZ 0x005fde0f
//   XREF to: 005fde0f (CONDITIONAL_JUMP)
// 005fde09: XOR EDI,EDI
// 005fde0b: MOV dword ptr [ESP + 0x8],EDI
// 005fde0f: MOV EAX,dword ptr [ESP]
//   Label: LAB_005fde0f
// 005fde12: MOV EBP,dword ptr [EBX + 0xc]
// 005fde15: OR EBP,EAX
// 005fde17: MOV EAX,dword ptr [EBX + 0x10]
// 005fde1a: PUSH EAX
// 005fde1b: MOV dword ptr [EBX + 0xc],EBP
// 005fde1e: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fde24: ADD ESP,0x4
// 005fde27: XOR EDX,EDX
// 005fde29: MOV EAX,dword ptr [ESP + 0x8]
// 005fde2d: DIV dword ptr [ESP + 0x28]
// 005fde31: ADD ESP,0x10
//   Label: LAB_005fde31
// 005fde34: POP EBP
// 005fde35: POP EDI
// 005fde36: POP ESI
// 005fde37: POP EBX
// 005fde38: RET
