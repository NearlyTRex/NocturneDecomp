// Name: crt_stdio.c_fread_FUN_005fd990
// Address: 005fd990
// Address Range: [[005fd990, 005fdb86]]
// Convention: __cdecl
// Signature: SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
// Cross-references:
//   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 (00431ac0) at 00431b78 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 (004331f0) at 00433260 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 (00431870) at 004318dc [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 (0054b690) at 0054b7c7 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 (0054b9b0) at 0054b9c9 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c0a8 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c351 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044f907 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0 (004551d0) at 00455243 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_load_FUN_00457530 (00457530) at 00457545 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 (004702f0) at 0047041d [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 00470823 [UNCONDITIONAL_CALL]
//   core_dimage.cpp_CDemonImage_load_FUN_00471ad0 (00471ad0) at 00471b60 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20 (00476f20) at 0047700b [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0 (004825c0) at 00482663 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494841 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0 (0049a5a0) at 0049a5c1 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1496 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2ba0 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_load_FUN_004ef030 (004ef030) at 004ef2c6 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574b10 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 005770e0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576b85 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d805 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058bd71 [UNCONDITIONAL_CALL]
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 00401105 [UNCONDITIONAL_CALL]
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930 (00402930) at 00402a47 [UNCONDITIONAL_CALL]
//   engine_2d.c_loadPaletteFile_FUN_004015a0 (004015a0) at 004015cb [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 (004105d0) at 00410905 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd609 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 (004b2030) at 004b2082 [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelChunk_FUN_00528970 (00528970) at 005289f0 [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelFile_FUN_00527ec0 (00527ec0) at 00527fdb [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 005452f0 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 (005507f0) at 005508d2 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590 (00550590) at 00550657 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0 (005506c0) at 00550780 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054fb23 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 0055034b [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 00551114 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490 (0054f490) at 0054f4fe [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0 (0054f3e0) at 0054f410 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 (005dcc00) at 005dd009 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046bd52 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 00458210 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_0052ec40 (0052ec40) at 0052ec87 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 (0052ee50) at 0052eee0 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 (0052ef40) at 0052f076 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4f8e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a6c7a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_WavReadingFunc1_FUN_005a3fe0 (005a3fe0) at 005a4085 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_stdio.c_FillInputBuffer_FUN_005fe940
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

SIZE_T __cdecl crt_stdio_c_fread_FUN_005fd990(void *buffer,SIZE_T size,SIZE_T count,FILE *file)

{
  char cVar1;
  SIZE_T SVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  char *in_stack_00000014;
  uint in_stack_00000024;
  
  bVar9 = 0;
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  if ((file->_flag & 1) == 0) {
    crt_errno_c_setErrno_FUN_00602790(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    SVar2 = 0;
  }
  else {
    uVar8 = count * (int)in_stack_00000014;
    if (uVar8 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    if (file->_link->__reserve_end == (char *)0x0) {
      crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
    }
    if ((file->_flag & 0x40) == 0) {
      pcVar6 = in_stack_00000014;
      do {
        if ((file->_cnt == 0) &&
           (iVar4 = crt_stdio_c_FillInputBuffer_FUN_005fe940(file), iVar4 == 0)) break;
        pcVar7 = file->_ptr;
        file->_cnt = file->_cnt + -1;
        file->_ptr = pcVar7 + 1;
        cVar1 = *pcVar7;
        if (cVar1 == '\r') {
          if ((file->_cnt == 0) &&
             (iVar4 = crt_stdio_c_FillInputBuffer_FUN_005fe940(file), iVar4 == 0)) break;
          file->_cnt = file->_cnt + -1;
          pcVar7 = file->_ptr;
          file->_ptr = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        if (cVar1 == '\x1a') {
          *(byte *)&file->_flag = (byte)file->_flag | 0x10;
          break;
        }
        pcVar7 = pcVar6 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar7;
      } while (pcVar7 != in_stack_00000014 + uVar8);
    }
    else {
      do {
        while( true ) {
          uVar3 = file->_cnt;
          if (uVar3 != 0) {
            if (uVar8 < uVar3) {
              uVar3 = uVar8;
            }
            pcVar6 = file->_ptr;
            pcVar7 = in_stack_00000014;
            for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + (uint)bVar9 * -8 + 4;
              pcVar7 = pcVar7 + (uint)bVar9 * -8 + 4;
            }
            for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar7 = *pcVar6;
              pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
              pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
            }
            uVar8 = uVar8 - uVar3;
            in_stack_00000014 = in_stack_00000014 + uVar3;
            file->_ptr = file->_ptr + uVar3;
            file->_cnt = file->_cnt - uVar3;
          }
          if (uVar8 == 0) goto LAB_005fdb69;
          if ((uVar8 < file->_bufsize) && ((file->_flag & 0x400) == 0)) break;
          file->_ptr = file->_link->__reserve_end;
          file->_cnt = 0;
          uVar3 = uVar8;
          if (((file->_flag & 0x400) == 0) && (0x200 < uVar8)) {
            uVar3 = (uVar8 >> 8 & 0xfffffe) << 8;
          }
          iVar4 = crt_stdio_c_ReadFileWithDeviceAbstraction_FUN_00602880
                            (file->_handle,in_stack_00000014,uVar3);
          if (iVar4 == -1) {
            *(byte *)&file->_flag = (byte)file->_flag | 0x20;
            goto LAB_005fdb69;
          }
          if (iVar4 == 0) {
            *(byte *)&file->_flag = (byte)file->_flag | 0x10;
            goto LAB_005fdb69;
          }
          in_stack_00000014 = in_stack_00000014 + iVar4;
          uVar8 = uVar8 - iVar4;
        }
        iVar4 = crt_stdio_c_FillInputBuffer_FUN_005fe940(file);
      } while (iVar4 != 0);
    }
LAB_005fdb69:
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    SVar2 = size / in_stack_00000024;
  }
  return SVar2;
}


// Assembly code:
// 005fd990: PUSH EBX
//   Label: crt_stdio.c_fread_FUN_005fd990
// 005fd991: PUSH ESI
// 005fd992: PUSH EDI
// 005fd993: PUSH EBP
// 005fd994: SUB ESP,0x4
// 005fd997: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005fd99b: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 005fd99f: MOV EDX,dword ptr [EBX + 0x10]
// 005fd9a2: PUSH EDX
// 005fd9a3: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 005fd9a9: MOV AH,byte ptr [EBX + 0xc]
// 005fd9ac: ADD ESP,0x4
// 005fd9af: TEST AH,0x1
// 005fd9b2: JNZ 0x005fd9d6
//   XREF to: 005fd9d6 (CONDITIONAL_JUMP)
// 005fd9b4: PUSH 0x4
// 005fd9b6: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 005fd9bb: OR byte ptr [EBX + 0xc],0x20
// 005fd9bf: ADD ESP,0x4
// 005fd9c2: MOV EDX,dword ptr [EBX + 0x10]
// 005fd9c5: PUSH EDX
// 005fd9c6: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fd9cc: ADD ESP,0x4
// 005fd9cf: XOR EAX,EAX
// 005fd9d1: JMP 0x005fdb7f
//   XREF to: 005fdb7f (UNCONDITIONAL_JUMP)
// 005fd9d6: IMUL ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_005fd9d6
// 005fd9db: TEST ESI,ESI
// 005fd9dd: JNZ 0x005fd9f6
//   XREF to: 005fd9f6 (CONDITIONAL_JUMP)
// 005fd9df: MOV EAX,dword ptr [EBX + 0x10]
// 005fd9e2: PUSH EAX
// 005fd9e3: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fd9e9: ADD ESP,0x4
// 005fd9ec: MOV EAX,ESI
// 005fd9ee: ADD ESP,0x4
// 005fd9f1: POP EBP
// 005fd9f2: POP EDI
// 005fd9f3: POP ESI
// 005fd9f4: POP EBX
// 005fd9f5: RET
// 005fd9f6: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_005fd9f6
// 005fd9f9: CMP dword ptr [EAX + 0x8],0x0
// 005fd9fd: JNZ 0x005fda08
//   XREF to: 005fda08 (CONDITIONAL_JUMP)
// 005fd9ff: PUSH EBX
// 005fda00: CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   XREF to: 006027e0 (UNCONDITIONAL_CALL)
// 005fda05: ADD ESP,0x4
// 005fda08: XOR EBP,EBP
//   Label: LAB_005fda08
// 005fda0a: MOV DL,byte ptr [EBX + 0xc]
// 005fda0d: MOV dword ptr [ESP],EBP
// 005fda10: TEST DL,0x40
// 005fda13: JZ 0x005fdaf8
//   XREF to: 005fdaf8 (CONDITIONAL_JUMP)
// 005fda19: MOV EBP,ESI
// 005fda1b: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_005fda1b
// 005fda1e: TEST ECX,ECX
// 005fda20: JZ 0x005fda66
//   XREF to: 005fda66 (CONDITIONAL_JUMP)
// 005fda22: MOV EDX,ECX
// 005fda24: CMP ECX,EBP
// 005fda26: JBE 0x005fda2a
//   XREF to: 005fda2a (CONDITIONAL_JUMP)
// 005fda28: MOV EDX,EBP
// 005fda2a: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_005fda2a
// 005fda2e: MOV ECX,EDX
// 005fda30: MOV ESI,dword ptr [EBX]
// 005fda32: PUSH ES
// 005fda33: MOV AX,DS
// 005fda35: MOV ES,AX
// 005fda37: PUSH EDI
// 005fda38: MOV EAX,ECX
// 005fda3a: SHR ECX,0x2
// 005fda3d: MOVSD.REP ES:EDI,ESI
// 005fda3f: MOV CL,AL
// 005fda41: AND CL,0x3
// 005fda44: MOVSB.REP ES:EDI,ESI
// 005fda46: POP EDI
// 005fda47: POP ES
// 005fda48: SUB EBP,EDX
// 005fda4a: MOV ECX,dword ptr [ESP]
// 005fda4d: MOV ESI,dword ptr [EBX]
// 005fda4f: ADD EDI,EDX
// 005fda51: MOV EAX,dword ptr [EBX + 0x4]
// 005fda54: MOV dword ptr [ESP + 0x18],EDI
// 005fda58: ADD ESI,EDX
// 005fda5a: SUB EAX,EDX
// 005fda5c: ADD ECX,EDX
// 005fda5e: MOV dword ptr [EBX],ESI
// 005fda60: MOV dword ptr [ESP],ECX
// 005fda63: MOV dword ptr [EBX + 0x4],EAX
// 005fda66: TEST EBP,EBP
//   Label: LAB_005fda66
// 005fda68: JZ 0x005fdb69
//   XREF to: 005fdb69 (CONDITIONAL_JUMP)
// 005fda6e: CMP EBP,dword ptr [EBX + 0x14]
// 005fda71: JNC 0x005fda79
//   XREF to: 005fda79 (CONDITIONAL_JUMP)
// 005fda73: TEST byte ptr [EBX + 0xd],0x4
// 005fda77: JZ 0x005fdae2
//   XREF to: 005fdae2 (CONDITIONAL_JUMP)
// 005fda79: MOV EDX,dword ptr [EBX + 0x8]
//   Label: LAB_005fda79
// 005fda7c: MOV EDX,dword ptr [EDX + 0x8]
// 005fda7f: MOV dword ptr [EBX],EDX
// 005fda81: MOV EAX,EBP
// 005fda83: MOV DL,byte ptr [EBX + 0xd]
// 005fda86: MOV dword ptr [EBX + 0x4],0x0
// 005fda8d: TEST DL,0x4
// 005fda90: JNZ 0x005fda9f
//   XREF to: 005fda9f (CONDITIONAL_JUMP)
// 005fda92: CMP EBP,0x200
// 005fda98: JBE 0x005fda9f
//   XREF to: 005fda9f (CONDITIONAL_JUMP)
// 005fda9a: XOR AL,AL
// 005fda9c: AND AH,0xfe
// 005fda9f: PUSH EAX
//   Label: LAB_005fda9f
// 005fdaa0: MOV EDI,dword ptr [ESP + 0x1c]
// 005fdaa4: PUSH EDI
// 005fdaa5: MOV EAX,dword ptr [EBX + 0x10]
// 005fdaa8: PUSH EAX
// 005fdaa9: CALL crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
//   XREF to: 00602880 (UNCONDITIONAL_CALL)
// 005fdaae: ADD ESP,0xc
// 005fdab1: CMP EAX,-0x1
// 005fdab4: JNZ 0x005fdabf
//   XREF to: 005fdabf (CONDITIONAL_JUMP)
// 005fdab6: OR byte ptr [EBX + 0xc],0x20
// 005fdaba: JMP 0x005fdb69
//   XREF to: 005fdb69 (UNCONDITIONAL_JUMP)
// 005fdabf: TEST EAX,EAX
//   Label: LAB_005fdabf
// 005fdac1: JNZ 0x005fdacc
//   XREF to: 005fdacc (CONDITIONAL_JUMP)
// 005fdac3: OR byte ptr [EBX + 0xc],0x10
// 005fdac7: JMP 0x005fdb69
//   XREF to: 005fdb69 (UNCONDITIONAL_JUMP)
// 005fdacc: MOV ECX,dword ptr [ESP]
//   Label: LAB_005fdacc
// 005fdacf: LEA EDX,[EDI + EAX*0x1]
// 005fdad2: SUB EBP,EAX
// 005fdad4: ADD ECX,EAX
// 005fdad6: MOV dword ptr [ESP + 0x18],EDX
// 005fdada: MOV dword ptr [ESP],ECX
// 005fdadd: JMP 0x005fda1b
//   XREF to: 005fda1b (UNCONDITIONAL_JUMP)
// 005fdae2: PUSH EBX
//   Label: LAB_005fdae2
// 005fdae3: CALL crt_stdio.c_FillInputBuffer_FUN_005fe940
//   XREF to: 005fe940 (UNCONDITIONAL_CALL)
// 005fdae8: ADD ESP,0x4
// 005fdaeb: TEST EAX,EAX
// 005fdaed: JZ 0x005fdb69
//   XREF to: 005fdb69 (CONDITIONAL_JUMP)
// 005fdaf3: JMP 0x005fda1b
//   XREF to: 005fda1b (UNCONDITIONAL_JUMP)
// 005fdaf8: MOV EBP,dword ptr [ESP + 0x18]
//   Label: LAB_005fdaf8
// 005fdafc: ADD ESI,EBP
// 005fdafe: XOR EDI,EDI
// 005fdb00: CMP EDI,dword ptr [EBX + 0x4]
//   Label: LAB_005fdb00
// 005fdb03: JNZ 0x005fdb12
//   XREF to: 005fdb12 (CONDITIONAL_JUMP)
// 005fdb05: PUSH EBX
// 005fdb06: CALL crt_stdio.c_FillInputBuffer_FUN_005fe940
//   XREF to: 005fe940 (UNCONDITIONAL_CALL)
// 005fdb0b: ADD ESP,0x4
// 005fdb0e: TEST EAX,EAX
// 005fdb10: JZ 0x005fdb69
//   XREF to: 005fdb69 (CONDITIONAL_JUMP)
// 005fdb12: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_005fdb12
// 005fdb15: DEC EDX
// 005fdb16: MOV EAX,dword ptr [EBX]
// 005fdb18: MOV dword ptr [EBX + 0x4],EDX
// 005fdb1b: LEA EDX,[EAX + 0x1]
// 005fdb1e: MOV dword ptr [EBX],EDX
// 005fdb20: MOV AL,byte ptr [EAX]
// 005fdb22: AND EAX,0xff
// 005fdb27: CMP EAX,0xd
// 005fdb2a: JNZ 0x005fdb4f
//   XREF to: 005fdb4f (CONDITIONAL_JUMP)
// 005fdb2c: CMP EDI,dword ptr [EBX + 0x4]
// 005fdb2f: JNZ 0x005fdb3e
//   XREF to: 005fdb3e (CONDITIONAL_JUMP)
// 005fdb31: PUSH EBX
// 005fdb32: CALL crt_stdio.c_FillInputBuffer_FUN_005fe940
//   XREF to: 005fe940 (UNCONDITIONAL_CALL)
// 005fdb37: ADD ESP,0x4
// 005fdb3a: TEST EAX,EAX
// 005fdb3c: JZ 0x005fdb69
//   XREF to: 005fdb69 (CONDITIONAL_JUMP)
// 005fdb3e: DEC dword ptr [EBX + 0x4]
//   Label: LAB_005fdb3e
// 005fdb41: MOV EAX,dword ptr [EBX]
// 005fdb43: LEA EDX,[EAX + 0x1]
// 005fdb46: MOV dword ptr [EBX],EDX
// 005fdb48: MOV AL,byte ptr [EAX]
// 005fdb4a: AND EAX,0xff
// 005fdb4f: CMP EAX,0x1a
//   Label: LAB_005fdb4f
// 005fdb52: JNZ 0x005fdb5a
//   XREF to: 005fdb5a (CONDITIONAL_JUMP)
// 005fdb54: OR byte ptr [EBX + 0xc],0x10
// 005fdb58: JMP 0x005fdb69
//   XREF to: 005fdb69 (UNCONDITIONAL_JUMP)
// 005fdb5a: MOV EDX,dword ptr [ESP]
//   Label: LAB_005fdb5a
// 005fdb5d: INC EBP
// 005fdb5e: INC EDX
// 005fdb5f: MOV byte ptr [EBP + -0x1],AL
// 005fdb62: MOV dword ptr [ESP],EDX
// 005fdb65: CMP EBP,ESI
// 005fdb67: JNZ 0x005fdb00
//   XREF to: 005fdb00 (CONDITIONAL_JUMP)
// 005fdb69: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_005fdb69
// 005fdb6c: PUSH ESI
// 005fdb6d: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fdb73: ADD ESP,0x4
// 005fdb76: XOR EDX,EDX
// 005fdb78: MOV EAX,dword ptr [ESP]
// 005fdb7b: DIV dword ptr [ESP + 0x1c]
// 005fdb7f: ADD ESP,0x4
//   Label: LAB_005fdb7f
// 005fdb82: POP EBP
// 005fdb83: POP EDI
// 005fdb84: POP ESI
// 005fdb85: POP EBX
// 005fdb86: RET
