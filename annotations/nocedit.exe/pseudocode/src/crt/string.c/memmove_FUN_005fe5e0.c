// Name: crt_string.c_memmove_FUN_005fe5e0
// Address: 005fe5e0
// Address Range: [[005fe5e0, 005fe631]]
// Convention: __watcallStack
// Signature: void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0 (00488cd0) at 00488f3a [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040ff10 [UNCONDITIONAL_CALL]
//   core_actor.cpp_trimActorName_FUN_004087b0 (004087b0) at 0040880b [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0 (0047bdb0) at 0047bebd [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0 (0047bbc0) at 0047bccc [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ad900 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004ae520 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0330 (004b0330) at 004b0448 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0470 (004b0470) at 004b0588 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0db0 (004b0db0) at 004b0ee9 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_process_FUN_004aaac0 (004aaac0) at 004aabcb [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 (004b09a0) at 004b0b46 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setCounter_FUN_004b0720 (004b0720) at 004b07a1 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0 (004b05a0) at 004b0681 [UNCONDITIONAL_CALL]
//   core_event.cpp_CRuleList_insert_FUN_004b1680 (004b1680) at 004b1741 [UNCONDITIONAL_CALL]
//   core_event.cpp_CRuleList_remove_FUN_004b17c0 (004b17c0) at 004b1826 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa650 (004aa650) at 004aa6ab [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa6c0 (004aa6c0) at 004aa79d [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdd03 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_trimWhitespace_FUN_004bd9b0 (004bd9b0) at 004bda0b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_FUN_004d85a0 (004d85a0) at 004d8707 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_removeItem_FUN_004fea70 (004fea70) at 004feaea [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00538df0 (00538df0) at 00538e91 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_00542370 (00542370) at 00542455 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 (005435a0) at 005436b5 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 00543291 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0 (00541ff0) at 00542210 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00 (00542b00) at 00542c48 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_0053f650 (0053f650) at 0053f6a4 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_removeChatOut_FUN_0053f4b0 (0053f4b0) at 0053f510 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_dtor_FUN_005464d0 (005464d0) at 0054652e [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564cd0 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_removeEventXRef_FUN_005676e0 (005676e0) at 00567739 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559360 (00559360) at 005593bb [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566390 (00566390) at 00566431 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00582142 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583cea [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579c66 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60 (0058ec60) at 0058ed75 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ede0 (0058ede0) at 0058ef36 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005933bf [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0 (005ec7b0) at 005ec7ef [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_FUN_005ec320 (005ec320) at 005ec3b7 [UNCONDITIONAL_CALL]
//   crt_env.c_findEnvVar_FUN_0060f1f0 (0060f1f0) at 0060f29a [UNCONDITIONAL_CALL]
//   crt_env.c_updateEnvironTable_FUN_0060f04c (0060f04c) at 0060f1ac [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_filebuf_overflow_FUN_0060d881 (0060d881) at 0060da43 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fcf4 (0060fcf4) at 0060fe4f [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fe94 (0060fe94) at 0060ff43 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 (004b2a60) at 004b2baa [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70 (004b2d70) at 004b2e02 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b75a9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_trimWhitespace_FUN_004b1d40 (004b1d40) at 004b1d9b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f821 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510 (0049d510) at 0049d546 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_insertChar_FUN_0049d480 (0049d480) at 0049d4c6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (004a3360) at 004a3518 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 (004a2bc0) at 004a2c2f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a3670 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a3870 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_remove_FUN_004a2e00 (004a2e00) at 004a2ea5 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0 (0050f9b0) at 0050fa70 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10 (00515d10) at 00515d47 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e1de [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00 (00515e00) at 00515e3d [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d2f50 (005d2f50) at 005d2fef [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d3140 (005d3140) at 005d3212 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 (005ca590) at 005cb2c0 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c7dc0 (005c7dc0) at 005c7ede [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c8160 (005c8160) at 005c820d [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c91e0 (005c91e0) at 005c932a [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c9340 (005c9340) at 005c9458 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 (005a45c0) at 005a4819 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad319 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa49e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 (005a4c80) at 005a4db0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0 (005a59c0) at 005a5a33 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 (005aca90) at 005acbc5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_trimLineAndRemoveComments_FUN_005a4530 (005a4530) at 005a45b4 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void * __watcallStack crt_string_c_memmove_FUN_005fe5e0(void *dest,void *src,SIZE_T n)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  if (src != dest) {
    if ((src < dest) && (dest < (undefined2 *)((int)src + n))) {
      uVar1 = n >> 1;
      puVar2 = (undefined2 *)((int)src + n);
      puVar3 = (undefined2 *)((int)dest + n);
      while( true ) {
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        puVar3[-1] = puVar2[-1];
        puVar2 = puVar2 + -1;
        puVar3 = puVar3 + -1;
      }
      uVar1 = (uint)((n & 1) != 0);
      while( true ) {
        puVar3 = (undefined2 *)((int)puVar3 + -1);
        puVar2 = (undefined2 *)((int)puVar2 - 1);
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
      }
      return dest;
    }
    puVar4 = (undefined4 *)dest;
                    /* WARNING: Load size is inaccurate */
    for (uVar1 = n >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *src;
      src = (undefined4 *)((int)src + 4);
      puVar4 = puVar4 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    for (uVar1 = n & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar4 = *src;
      src = (undefined4 *)((int)src + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return dest;
}


// Assembly code:
// 005fe5e0: PUSH ESI
//   Label: crt_string.c_memmove_FUN_005fe5e0
// 005fe5e1: PUSH EDI
// 005fe5e2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fe5e6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005fe5ea: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005fe5ee: CMP ESI,EAX
// 005fe5f0: JZ 0x005fe62f
//   XREF to: 005fe62f (CONDITIONAL_JUMP)
// 005fe5f2: JNC 0x005fe61b
//   XREF to: 005fe61b (CONDITIONAL_JUMP)
// 005fe5f4: LEA EDX,[ESI + ECX*0x1]
// 005fe5f7: CMP EDX,EAX
// 005fe5f9: JBE 0x005fe61b
//   XREF to: 005fe61b (CONDITIONAL_JUMP)
// 005fe5fb: LEA EDI,[EAX + ECX*0x1]
// 005fe5fe: LEA ESI,[EDX + -0x1]
// 005fe601: DEC EDI
// 005fe602: MOV DX,DS
// 005fe604: PUSH ES
// 005fe605: MOV ES,DX
// 005fe607: STD
// 005fe608: DEC ESI
// 005fe609: DEC EDI
// 005fe60a: SHR ECX,0x1
// 005fe60c: MOVSW.REP ES:EDI,ESI
// 005fe60f: ADC ECX,ECX
// 005fe611: INC ESI
// 005fe612: INC EDI
// 005fe613: MOVSB.REP ES:EDI,ESI
// 005fe616: POP ES
// 005fe617: CLD
// 005fe618: POP EDI
// 005fe619: POP ESI
// 005fe61a: RET
// 005fe61b: MOV DX,DS
//   Label: LAB_005fe61b
// 005fe61d: MOV EDI,EAX
// 005fe61f: PUSH ES
// 005fe620: MOV ES,DX
// 005fe622: PUSH ECX
// 005fe623: SHR ECX,0x2
// 005fe626: MOVSD.REP ES:EDI,ESI
// 005fe628: POP ECX
// 005fe629: AND ECX,0x3
// 005fe62c: MOVSB.REP ES:EDI,ESI
// 005fe62e: POP ES
// 005fe62f: POP EDI
//   Label: LAB_005fe62f
// 005fe630: POP ESI
// 005fe631: RET
