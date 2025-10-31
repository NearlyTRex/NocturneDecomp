// Name: crt_stdio.c_fputc_FUN_006007a0
// Address: 006007a0
// Address Range: [[006007a0, 006008e8]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
// Cross-references:
//   core_dfilter.cpp_CDemonFilter_save_FUN_00470510 (00470510) at 00470591 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260 (00479260) at 004792c0 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479a02 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_copyFile_FUN_0047c930 (0047c930) at 0047c9d8 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dad32 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d7810 (004d7810) at 004d7a7e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537dd0 (00537dd0) at 00537e59 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 005380ca [UNCONDITIONAL_CALL]
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 00554524 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057fc44 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d12e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058ca40 [UNCONDITIONAL_CALL]
//   crt_math.c_print_error_message_FUN_0060e298 (0060e298) at 0060e2da [UNCONDITIONAL_CALL]
//   crt_stdio.c_OutputCallback_FUN_00604830 (00604830) at 0060483e [UNCONDITIONAL_CALL]
//   crt_stdio.c_fputs_FUN_0060ebb0 (0060ebb0) at 0060ec0e [UNCONDITIONAL_CALL]
//   crt_stdio.c_fwrite_FUN_005fdc00 (005fdc00) at 005fddbe [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 (004b7ac0) at 004b7bb2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b65be [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7e34 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc8f3 [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenRaw16_FUN_00548d20 (00548d20) at 00548e63 [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenRaw32_FUN_00548f00 (00548f00) at 00549026 [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 00549250 [UNCONDITIONAL_CALL]
//   engine_pcx.c_writePCXScanline_FUN_00548c50 (00548c50) at 00548c86 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046dc67 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __watcallStack crt_stdio_c_fputc_FUN_006007a0(int character,FILE *file)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cStack00000014;
  byte in_stack_00000020;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
    file->_link->__get_base = &DAT_00000001;
  }
  if ((file->_flag & 2) == 0) {
    crt_errno_c_setErrno_FUN_00602790(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    return -1;
  }
  if (file->_link->__reserve_end == (char *)0x0) {
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
  }
  uVar4 = 0x400;
  if ((_cStack00000014 == 10) && (uVar4 = 0x600, (file->_flag & 0x40) == 0)) {
    pcVar1 = file->_ptr;
    *(byte *)((int)&file->_flag + 1) = *(byte *)((int)&file->_flag + 1) | 0x10;
    *pcVar1 = '\r';
    file->_ptr = file->_ptr + 1;
    uVar3 = file->_cnt + 1;
    file->_cnt = uVar3;
    if (uVar3 == file->_bufsize) {
      iVar2 = crt_stdio_c_fflushInternal_FUN_006039d0(file);
      if (iVar2 != 0) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
        return -1;
      }
    }
  }
  pcVar1 = file->_ptr;
  *(byte *)((int)&file->_flag + 1) = *(byte *)((int)&file->_flag + 1) | 0x10;
  *pcVar1 = cStack00000014;
  file->_ptr = file->_ptr + 1;
  uVar3 = file->_cnt + 1;
  file->_cnt = uVar3;
  if (((uVar4 & file->_flag) != 0) || (uVar3 == file->_bufsize)) {
    iVar2 = crt_stdio_c_fflushInternal_FUN_006039d0(file);
    if (iVar2 != 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return (uint)in_stack_00000020;
}


// Assembly code:
// 006007a0: PUSH EBX
//   Label: crt_stdio.c_fputc_FUN_006007a0
// 006007a1: PUSH ESI
// 006007a2: PUSH EDI
// 006007a3: PUSH EBP
// 006007a4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 006007a8: MOV EDX,dword ptr [EBX + 0x10]
// 006007ab: PUSH EDX
// 006007ac: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 006007b2: MOV EAX,dword ptr [EBX + 0x8]
// 006007b5: MOV ECX,dword ptr [EAX + 0xc]
// 006007b8: ADD ESP,0x4
// 006007bb: CMP ECX,0x1
// 006007be: JZ 0x006007e2
//   XREF to: 006007e2 (CONDITIONAL_JUMP)
// 006007c0: TEST ECX,ECX
// 006007c2: JZ 0x006007db
//   XREF to: 006007db (CONDITIONAL_JUMP)
// 006007c4: MOV EDI,dword ptr [EBX + 0x10]
// 006007c7: PUSH EDI
// 006007c8: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006007ce: MOV EAX,0xffffffff
// 006007d3: ADD ESP,0x4
// 006007d6: POP EBP
// 006007d7: POP EDI
// 006007d8: POP ESI
// 006007d9: POP EBX
// 006007da: RET
// 006007db: MOV dword ptr [EAX + 0xc],0x1
//   Label: LAB_006007db
// 006007e2: TEST byte ptr [EBX + 0xc],0x2
//   Label: LAB_006007e2
// 006007e6: JNZ 0x00600812
//   XREF to: 00600812 (CONDITIONAL_JUMP)
// 006007e8: PUSH 0x4
// 006007ea: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006007ef: ADD ESP,0x4
// 006007f2: MOV CH,byte ptr [EBX + 0xc]
// 006007f5: MOV EAX,dword ptr [EBX + 0x10]
// 006007f8: OR CH,0x20
// 006007fb: PUSH EAX
// 006007fc: MOV byte ptr [EBX + 0xc],CH
// 006007ff: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00600805: MOV EAX,0xffffffff
// 0060080a: ADD ESP,0x4
// 0060080d: POP EBP
// 0060080e: POP EDI
// 0060080f: POP ESI
// 00600810: POP EBX
// 00600811: RET
// 00600812: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_00600812
// 00600815: CMP dword ptr [EAX + 0x8],0x0
// 00600819: JNZ 0x00600824
//   XREF to: 00600824 (CONDITIONAL_JUMP)
// 0060081b: PUSH EBX
// 0060081c: CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   XREF to: 006027e0 (UNCONDITIONAL_CALL)
// 00600821: ADD ESP,0x4
// 00600824: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00600824
// 00600828: MOV ESI,0x400
// 0060082d: CMP EAX,0xa
// 00600830: JNZ 0x00600884
//   XREF to: 00600884 (CONDITIONAL_JUMP)
// 00600832: MOV DL,byte ptr [EBX + 0xc]
// 00600835: MOV ESI,0x600
// 0060083a: TEST DL,0x40
// 0060083d: JNZ 0x00600884
//   XREF to: 00600884 (CONDITIONAL_JUMP)
// 0060083f: MOV DH,byte ptr [EBX + 0xd]
// 00600842: OR DH,0x10
// 00600845: MOV EAX,dword ptr [EBX]
// 00600847: MOV byte ptr [EBX + 0xd],DH
// 0060084a: MOV byte ptr [EAX],0xd
// 0060084d: MOV EDX,dword ptr [EBX]
// 0060084f: INC EDX
// 00600850: MOV ECX,dword ptr [EBX + 0x4]
// 00600853: MOV dword ptr [EBX],EDX
// 00600855: INC ECX
// 00600856: MOV EDI,dword ptr [EBX + 0x14]
// 00600859: MOV dword ptr [EBX + 0x4],ECX
// 0060085c: CMP ECX,EDI
// 0060085e: JNZ 0x00600884
//   XREF to: 00600884 (CONDITIONAL_JUMP)
// 00600860: PUSH EBX
// 00600861: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 00600866: ADD ESP,0x4
// 00600869: TEST EAX,EAX
// 0060086b: JZ 0x00600884
//   XREF to: 00600884 (CONDITIONAL_JUMP)
// 0060086d: MOV EBP,dword ptr [EBX + 0x10]
// 00600870: PUSH EBP
// 00600871: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00600877: MOV EAX,0xffffffff
// 0060087c: ADD ESP,0x4
// 0060087f: POP EBP
// 00600880: POP EDI
// 00600881: POP ESI
// 00600882: POP EBX
// 00600883: RET
// 00600884: MOV CL,byte ptr [EBX + 0xd]
//   Label: LAB_00600884
// 00600887: MOV EAX,dword ptr [EBX]
// 00600889: OR CL,0x10
// 0060088c: MOV DL,byte ptr [ESP + 0x14]
// 00600890: MOV byte ptr [EBX + 0xd],CL
// 00600893: MOV byte ptr [EAX],DL
// 00600895: MOV EBP,dword ptr [EBX]
// 00600897: INC EBP
// 00600898: MOV EAX,dword ptr [EBX + 0x4]
// 0060089b: MOV dword ptr [EBX],EBP
// 0060089d: INC EAX
// 0060089e: MOV EDX,dword ptr [EBX + 0xc]
// 006008a1: MOV dword ptr [EBX + 0x4],EAX
// 006008a4: TEST ESI,EDX
// 006008a6: JNZ 0x006008ad
//   XREF to: 006008ad (CONDITIONAL_JUMP)
// 006008a8: CMP EAX,dword ptr [EBX + 0x14]
// 006008ab: JNZ 0x006008d1
//   XREF to: 006008d1 (CONDITIONAL_JUMP)
// 006008ad: PUSH EBX
//   Label: LAB_006008ad
// 006008ae: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 006008b3: ADD ESP,0x4
// 006008b6: TEST EAX,EAX
// 006008b8: JZ 0x006008d1
//   XREF to: 006008d1 (CONDITIONAL_JUMP)
// 006008ba: MOV EDI,dword ptr [EBX + 0x10]
// 006008bd: PUSH EDI
// 006008be: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006008c4: MOV EAX,0xffffffff
// 006008c9: ADD ESP,0x4
// 006008cc: POP EBP
// 006008cd: POP EDI
// 006008ce: POP ESI
// 006008cf: POP EBX
// 006008d0: RET
// 006008d1: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_006008d1
// 006008d4: PUSH ESI
// 006008d5: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006008db: ADD ESP,0x4
// 006008de: XOR EAX,EAX
// 006008e0: MOV AL,byte ptr [ESP + 0x14]
// 006008e4: POP EBP
// 006008e5: POP EDI
// 006008e6: POP ESI
// 006008e7: POP EBX
// 006008e8: RET
