// Name: crt_stdio.c_fgets_FUN_005fefd0
// Address: 005fefd0
// Address Range: [[005fefd0, 005ff05f]]
// Convention: __watcallStack
// Signature: char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
// Cross-references:
//   core_box.cpp_CBox_loadFromFile_FUN_0041fe90 (0041fe90) at 0041feb2 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00438ec0 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_loadCameraFog_FUN_00453e50 (00453e50) at 00453e71 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 0047980f [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_loadState_FUN_004b0fc0 (004b0fc0) at 004b1321 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_load_FUN_004c9300 (004c9300) at 004c9334 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1707 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e40bc [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee1e0 (004ee1e0) at 004ee1fc [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff5a3 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_loadState_FUN_00560820 (00560820) at 00560843 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569780 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200 (00576200) at 00576275 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579771 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f760 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 0057847e [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90 (00585c90) at 00585cb8 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_load_FUN_00585420 (00585420) at 00585460 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0 (005874d0) at 005874fb [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_load_FUN_00586310 (00586310) at 005866a2 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_readAndParseLine_FUN_00585290 (00585290) at 005852aa [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 (004b23a0) at 004b2411 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0 (004cd2c0) at 004cd309 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470 (004fb470) at 004fb501 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_getProfileString_FUN_004fb250 (004fb250) at 004fb2c7 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb7a0 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458f09 [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 0045973b [UNCONDITIONAL_CALL]
//   shape_design.c_showHelpFile_FUN_00457f00 (00457f00) at 00457f4c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad0c7 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_parseConfigFile_FUN_005a45c0 (005a45c0) at 005a4793 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_readMessageFile_FUN_00543e40 (00543e40) at 00543ee2 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

char * __watcallStack crt_stdio_c_fgets_FUN_005fefd0(char *str,int num,FILE *stream)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int unaff_EDI;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(stream->_handle);
  uVar1 = stream->_flag;
  *(byte *)&stream->_flag = (byte)stream->_flag & 0xcf;
  pcVar2 = str;
  do {
    num = num + -1;
    pcVar3 = pcVar2;
    if (num < 1) break;
    unaff_EDI = crt_stdio_c_fgetc_FUN_005fe840(stream);
    if (unaff_EDI == -1) break;
    pcVar3 = pcVar2 + 1;
    *pcVar2 = (char)unaff_EDI;
    pcVar2 = pcVar3;
  } while ((char)unaff_EDI != '\n');
  if ((unaff_EDI == -1) && ((pcVar3 == str || ((stream->_flag & 0x20) != 0)))) {
    str = (char *)0x0;
  }
  else {
    *pcVar3 = '\0';
  }
  stream->_flag = stream->_flag | uVar1 & 0x30;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
  return str;
}


// Assembly code:
// 005fefd0: PUSH EBX
//   Label: crt_stdio.c_fgets_FUN_005fefd0
// 005fefd1: PUSH ESI
// 005fefd2: PUSH EDI
// 005fefd3: PUSH EBP
// 005fefd4: SUB ESP,0x8
// 005fefd7: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005fefdb: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005fefdf: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 005fefe3: MOV EDX,dword ptr [EDI + 0x10]
// 005fefe6: PUSH EDX
// 005fefe7: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 005fefed: MOV EAX,dword ptr [EDI + 0xc]
// 005feff0: ADD ESP,0x4
// 005feff3: AND EAX,0x30
// 005feff6: MOV dword ptr [ESP + 0x4],EAX
// 005feffa: MOV AH,byte ptr [EDI + 0xc]
// 005feffd: AND AH,0xcf
// 005ff000: MOV EBX,EBP
// 005ff002: MOV byte ptr [EDI + 0xc],AH
// 005ff005: DEC ESI
//   Label: LAB_005ff005
// 005ff006: TEST ESI,ESI
// 005ff008: JLE 0x005ff026
//   XREF to: 005ff026 (CONDITIONAL_JUMP)
// 005ff00a: PUSH EDI
// 005ff00b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005ff010: ADD ESP,0x4
// 005ff013: MOV dword ptr [ESP],EAX
// 005ff016: CMP EAX,-0x1
// 005ff019: JZ 0x005ff026
//   XREF to: 005ff026 (CONDITIONAL_JUMP)
// 005ff01b: INC EBX
// 005ff01c: MOV AL,byte ptr [ESP]
// 005ff01f: MOV byte ptr [EBX + -0x1],AL
// 005ff022: CMP AL,0xa
// 005ff024: JNZ 0x005ff005
//   XREF to: 005ff005 (CONDITIONAL_JUMP)
// 005ff026: CMP dword ptr [ESP],-0x1
//   Label: LAB_005ff026
// 005ff02a: JNZ 0x005ff03a
//   XREF to: 005ff03a (CONDITIONAL_JUMP)
// 005ff02c: CMP EBX,EBP
// 005ff02e: JZ 0x005ff036
//   XREF to: 005ff036 (CONDITIONAL_JUMP)
// 005ff030: TEST byte ptr [EDI + 0xc],0x20
// 005ff034: JZ 0x005ff03a
//   XREF to: 005ff03a (CONDITIONAL_JUMP)
// 005ff036: XOR EBP,EBP
//   Label: LAB_005ff036
// 005ff038: JMP 0x005ff03d
//   XREF to: 005ff03d (UNCONDITIONAL_JUMP)
// 005ff03a: MOV byte ptr [EBX],0x0
//   Label: LAB_005ff03a
// 005ff03d: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005ff03d
// 005ff041: MOV ESI,dword ptr [EDI + 0xc]
// 005ff044: OR ESI,EAX
// 005ff046: MOV EAX,dword ptr [EDI + 0x10]
// 005ff049: PUSH EAX
// 005ff04a: MOV dword ptr [EDI + 0xc],ESI
// 005ff04d: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005ff053: ADD ESP,0x4
// 005ff056: MOV EAX,EBP
// 005ff058: ADD ESP,0x8
// 005ff05b: POP EBP
// 005ff05c: POP EDI
// 005ff05d: POP ESI
// 005ff05e: POP EBX
// 005ff05f: RET
