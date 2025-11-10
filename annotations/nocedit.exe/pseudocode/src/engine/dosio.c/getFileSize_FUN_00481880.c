// Name: engine_dosio.c_getFileSize_FUN_00481880
// Address: 00481880
// Address Range: [[00481880, 004818cb]]
// Convention: __cdecl
// Signature: int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054bf6e [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044f606 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 (004702f0) at 00470335 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab444 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdedd [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1510 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e294b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0f76 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537dd0 (00537dd0) at 00537dde [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 00538042 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 00559fb1 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 00560661 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bdc2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576ab0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e0b0 (0058e0b0) at 0058e192 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640 (004b5640) at 004b5893 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd07c [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelFile_FUN_00527ec0 (00527ec0) at 00527ef5 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 00545349 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 005502ef [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 005510aa [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490 (0054f490) at 0054f4a5 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 (005dcc00) at 005dcc1e [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 00468274 [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e99c [UNCONDITIONAL_CALL]
//   shape_design.c_validateModelTextures_FUN_00459a20 (00459a20) at 00459b4a [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 (00534550) at 00534562 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0 (005a45c0) at 005a466c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5180 (005a5180) at 005a5193 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5200 (005a5200) at 005a52b0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4d47 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005acf34 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa42a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a8fb4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad985 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_readMessageFile_FUN_00543e40 (00543e40) at 00543e60 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_dosio.c_findFile_FUN_00481760
//   engine_dosio.c_getRelativeFilePath_FUN_004816c0

#include "nocturne.h"

int __cdecl engine_dosio_c_getFileSize_FUN_00481880(char *directory,char *filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iStack_8;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffdec,directory,filename);
  iVar1 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffffdf0);
  if (iVar1 != 0) {
    return iStack_8;
  }
  return -1;
}


// Assembly code:
// 00481880: SUB ESP,0x214
//   Label: engine_dosio.c_getFileSize_FUN_00481880
// 00481886: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x8] (READ)
// 0048188d: PUSH EDX
// 0048188e: MOV ECX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 00481895: PUSH ECX
// 00481896: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x214] (DATA)
// 0048189a: PUSH EAX
// 0048189b: CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   XREF to: 004816c0 (UNCONDITIONAL_CALL)
// 004818a0: ADD ESP,0xc
// 004818a3: MOV EAX,ESP
// 004818a5: PUSH EAX
// 004818a6: CALL engine_dosio.c_findFile_FUN_00481760
//   XREF to: 00481760 (UNCONDITIONAL_CALL)
// 004818ab: ADD ESP,0x4
// 004818ae: TEST EAX,EAX
// 004818b0: JZ 0x004818c0
//   XREF to: 004818c0 (CONDITIONAL_JUMP)
// 004818b2: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x10] (READ)
// 004818b9: ADD ESP,0x214
// 004818bf: RET
// 004818c0: MOV EAX,0xffffffff
//   Label: LAB_004818c0
// 004818c5: ADD ESP,0x214
// 004818cb: RET
