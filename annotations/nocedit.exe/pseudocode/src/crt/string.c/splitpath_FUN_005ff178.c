// Name: crt_string.c_splitpath_FUN_005ff178
// Address: 005ff178
// Address Range: [[005ff178, 005ff244]]
// Convention: __watcallStack
// Signature: void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, char * ext)
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043e04f [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 0044368e [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50 (0047ca50) at 0047ca8c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 (00479f30) at 0047a013 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479750 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047da85 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bde9a [UNCONDITIONAL_CALL]
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd7fe [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_FUN_004e36f0 (004e36f0) at 004e3724 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e12eb [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2991 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0d15 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005387d8 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 00559fe7 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 0056052f [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055a540 (0055a540) at 0055a5e3 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005606e0 (005606e0) at 00560706 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563522 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005988af [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589530 (00589530) at 00589565 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005896b0 (005896b0) at 005896e5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b8e0 (0058b8e0) at 0058b968 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c42c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e0b0 (0058e0b0) at 0058e144 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058f810 (0058f810) at 0058fda1 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059292a [UNCONDITIONAL_CALL]
//   engine_dosio.c_splitPath_FUN_00481f20 (00481f20) at 00481f3c [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004597ae [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0 (0050eea0) at 0050eedb [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051adf0 (0051adf0) at 0051af41 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b770 (0051b770) at 0051b79d [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_OpenS3DFile_FUN_0051aa60 (0051aa60) at 0051ac21 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad03a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad94f [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_mbtowc_next_FUN_00605a70
//   crt_string.c_mbtowc_peek_FUN_006059e0
//   crt_string.c_strncpy_safe_FUN_005ff130

#include "nocturne.h"

void __watcallStack
crt_string_c_splitpath_FUN_005ff178(char *path,char *drive,char *dir,char *fname,char *ext)

{
  char cVar1;
  char *str;
  wchar_t wVar2;
  undefined2 extraout_var;
  char *pcVar4;
  char *src;
  char *in_stack_0000001c;
  char *src_00;
  int iVar3;
  
  cVar1 = *path;
  if ((cVar1 == '\0') || (path[1] != ':')) {
    if (drive != (char *)0x0) {
      *drive = '\0';
    }
  }
  else {
    if (drive != (char *)0x0) {
      drive[2] = '\0';
      *drive = cVar1;
      drive[1] = ':';
    }
    path = path + 2;
  }
  src = (char *)0x0;
  cVar1 = *path;
  str = path;
  src_00 = path;
  while (cVar1 != '\0') {
    wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(str);
    iVar3 = CONCAT22(extraout_var,wVar2);
    if (iVar3 == 0x2e) {
      pcVar4 = str + 1;
      src = str;
    }
    else {
      pcVar4 = crt_string_c_mbtowc_next_FUN_00605a70(str);
      if ((iVar3 == 0x5c) || (iVar3 == 0x2f)) {
        src = (char *)0x0;
        path = pcVar4;
      }
    }
    str = pcVar4;
    cVar1 = *pcVar4;
  }
  crt_string_c_strncpy_safe_FUN_005ff130(dir,src_00,(int)path - (int)src_00,0xff);
  if (src == (char *)0x0) {
    src = str;
  }
  crt_string_c_strncpy_safe_FUN_005ff130(ext,path,(int)src - (int)path,0xff);
  crt_string_c_strncpy_safe_FUN_005ff130(in_stack_0000001c,src,(int)str - (int)src,0xff);
  return;
}


// Assembly code:
// 005ff178: PUSH EBX
//   Label: crt_string.c_splitpath_FUN_005ff178
// 005ff179: PUSH ESI
// 005ff17a: PUSH EDI
// 005ff17b: PUSH EBP
// 005ff17c: SUB ESP,0x4
// 005ff17f: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005ff183: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005ff187: MOV AH,byte ptr [EBX]
// 005ff189: TEST AH,AH
// 005ff18b: JZ 0x005ff1a7
//   XREF to: 005ff1a7 (CONDITIONAL_JUMP)
// 005ff18d: MOV DL,byte ptr [EBX + 0x1]
// 005ff190: CMP DL,0x3a
// 005ff193: JNZ 0x005ff1a7
//   XREF to: 005ff1a7 (CONDITIONAL_JUMP)
// 005ff195: TEST ESI,ESI
// 005ff197: JZ 0x005ff1a2
//   XREF to: 005ff1a2 (CONDITIONAL_JUMP)
// 005ff199: MOV byte ptr [ESI + 0x2],0x0
// 005ff19d: MOV byte ptr [ESI],AH
// 005ff19f: MOV byte ptr [ESI + 0x1],DL
// 005ff1a2: ADD EBX,0x2
//   Label: LAB_005ff1a2
// 005ff1a5: JMP 0x005ff1ae
//   XREF to: 005ff1ae (UNCONDITIONAL_JUMP)
// 005ff1a7: TEST ESI,ESI
//   Label: LAB_005ff1a7
// 005ff1a9: JZ 0x005ff1ae
//   XREF to: 005ff1ae (CONDITIONAL_JUMP)
// 005ff1ab: MOV byte ptr [ESI],0x0
// 005ff1ae: MOV EBP,EBX
//   Label: LAB_005ff1ae
// 005ff1b0: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 005ff1b3: MOV DH,byte ptr [EBX]
// 005ff1b5: XOR EDI,EDI
// 005ff1b7: TEST DH,DH
// 005ff1b9: JZ 0x005ff1ee
//   XREF to: 005ff1ee (CONDITIONAL_JUMP)
// 005ff1bb: PUSH EBX
//   Label: LAB_005ff1bb
// 005ff1bc: CALL crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: 006059e0 (UNCONDITIONAL_CALL)
// 005ff1c1: MOV ESI,EAX
// 005ff1c3: ADD ESP,0x4
// 005ff1c6: CMP EAX,0x2e
// 005ff1c9: JNZ 0x005ff1d0
//   XREF to: 005ff1d0 (CONDITIONAL_JUMP)
// 005ff1cb: MOV EDI,EBX
// 005ff1cd: INC EBX
// 005ff1ce: JMP 0x005ff1e9
//   XREF to: 005ff1e9 (UNCONDITIONAL_JUMP)
// 005ff1d0: PUSH EBX
//   Label: LAB_005ff1d0
// 005ff1d1: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 005ff1d6: MOV EBX,EAX
// 005ff1d8: ADD ESP,0x4
// 005ff1db: CMP ESI,0x5c
// 005ff1de: JZ 0x005ff1e5
//   XREF to: 005ff1e5 (CONDITIONAL_JUMP)
// 005ff1e0: CMP ESI,0x2f
// 005ff1e3: JNZ 0x005ff1e9
//   XREF to: 005ff1e9 (CONDITIONAL_JUMP)
// 005ff1e5: MOV EBP,EBX
//   Label: LAB_005ff1e5
// 005ff1e7: XOR EDI,EDI
// 005ff1e9: CMP byte ptr [EBX],0x0
//   Label: LAB_005ff1e9
// 005ff1ec: JNZ 0x005ff1bb
//   XREF to: 005ff1bb (CONDITIONAL_JUMP)
// 005ff1ee: MOV EDX,dword ptr [ESP]
//   Label: LAB_005ff1ee
//   XREF to: Stack[-0x14] (DATA)
// 005ff1f1: MOV ESI,EBP
// 005ff1f3: PUSH 0xff
// 005ff1f8: SUB ESI,EDX
// 005ff1fa: PUSH ESI
// 005ff1fb: PUSH EDX
// 005ff1fc: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 005ff200: PUSH ESI
// 005ff201: CALL crt_string.c_strncpy_safe_FUN_005ff130
//   XREF to: 005ff130 (UNCONDITIONAL_CALL)
// 005ff206: ADD ESP,0x10
// 005ff209: TEST EDI,EDI
// 005ff20b: JNZ 0x005ff20f
//   XREF to: 005ff20f (CONDITIONAL_JUMP)
// 005ff20d: MOV EDI,EBX
// 005ff20f: MOV ESI,EDI
//   Label: LAB_005ff20f
// 005ff211: PUSH 0xff
// 005ff216: SUB ESI,EBP
// 005ff218: PUSH ESI
// 005ff219: PUSH EBP
// 005ff21a: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 005ff21e: PUSH EBP
// 005ff21f: CALL crt_string.c_strncpy_safe_FUN_005ff130
//   XREF to: 005ff130 (UNCONDITIONAL_CALL)
// 005ff224: ADD ESP,0x10
// 005ff227: PUSH 0xff
// 005ff22c: SUB EBX,EDI
// 005ff22e: PUSH EBX
// 005ff22f: PUSH EDI
// 005ff230: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 005ff234: PUSH EAX
// 005ff235: CALL crt_string.c_strncpy_safe_FUN_005ff130
//   XREF to: 005ff130 (UNCONDITIONAL_CALL)
// 005ff23a: ADD ESP,0x10
// 005ff23d: ADD ESP,0x4
// 005ff240: POP EBP
// 005ff241: POP EDI
// 005ff242: POP ESI
// 005ff243: POP EBX
// 005ff244: RET
