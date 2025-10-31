// Name: core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
// Address: 004be270
// Address Range: [[004be270, 004be58e]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050786e [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513317 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Demon_File_Manager_00629821
//   TerminatedCString s_Advanced_option_list_00629834
//   TerminatedCString s_s_1_Rebuild_last_POD_00629849
//   TerminatedCString s_s_2_Extract_all_files_fr_0062985e
//   TerminatedCString s_s_4_Build_a_POD_from_an__0062987d
//   TerminatedCString s_s_5_Catalog_a_POD_file_006298ae
//   TerminatedCString s_s_7_Move_a_set_into_POD__006298c5
//   TerminatedCString s_s_9_Extract_files_from_P_006298e2
//   TerminatedCString s_A_Create_POD_file_from_e_0062990b
//   TerminatedCString s_C_Mount_dismount_PODs_0062993b
//   TerminatedCString s_Q_Test_sound_files_00629952
//   TerminatedCString s_R_Refresh_sound_director_00629966
//   TerminatedCString s_L_Compare_files_in_pod_v_00629981
//   TerminatedCString s_T_View_audit_trail_for_a_006299a9
//   TerminatedCString s_V_Verify_POD_CRC_006299c7
//   TerminatedCString s_X_Cross_reference_PODs_f_006299da
//   TerminatedCString s_S_Search_for_files_in_mo_00629a01
//   TerminatedCString s_Enter_source_directory_c_00629a25
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_dmodel.cpp_freeAllModels_FUN_00478cb0
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20
//   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930
//   core_fileman.cpp_refreshSoundDirectory_FUN_004be590
//   core_skeleton.cpp_CDeformableModel_freeAllModels_FUN_005a1dc0
//   core_skeleton.cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0
//   crt_ctype.c_toupper_FUN_005ff9e0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
//   engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
//   engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70
//   engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager *this_ptr)

{
  uint uVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_drawText_FUN_00401fd0("Demon File Manager",0,0);
    engine_2d_c_drawText_FUN_00401fd0("Advanced option list",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("1. Rebuild last .POD",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("2. Extract all files from .POD",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("4. Build a .POD from an old-school response file",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("5. Catalog a .POD file",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("7. Move a set into .POD file",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("9. Extract files from .POD interactively",0,0x84);
    engine_2d_c_drawText_FUN_00401fd0("A. Create .POD file from extended response file",0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("C. Mount/dismount PODs",0,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("Q. Test sound files",0,0x129);
    engine_2d_c_drawText_FUN_00401fd0("R. Refresh sound directory",0,0x134);
    engine_2d_c_drawText_FUN_00401fd0("L. Compare files in pod vs. local files",0,0xfd);
    engine_2d_c_drawText_FUN_00401fd0("T. View audit trail for a pod",0,0x108);
    engine_2d_c_drawText_FUN_00401fd0("V. Verify .POD CRC",0,0x113);
    engine_2d_c_drawText_FUN_00401fd0("X. Cross reference PODs for duplicates",0,0x129);
    engine_2d_c_drawText_FUN_00401fd0("S. Search for files in mounted PODs",0,0x134);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    uVar1 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
    core_dmodel_cpp_freeAllModels_FUN_00478cb0();
    core_skeleton_cpp_CDeformableModel_freeAllModels_FUN_005a1dc0();
    core_skeleton_cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0();
    if (uVar1 < 0x43) {
      if (uVar1 < 0x35) {
        if (uVar1 < 0x32) {
          if (uVar1 == 0x31) {
            engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50
                      (&this_ptr->base_filemanager,(char *)0x0,(char *)0x0);
          }
        }
        else if (uVar1 < 0x33) {
          (*((this_ptr->base_filemanager).vtable)->extractPodFile)
                    (&this_ptr->base_filemanager,(char *)0x0);
        }
        else if (uVar1 == 0x34) {
          engine_fileio_cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
                    (&this_ptr->base_filemanager);
        }
      }
      else if (uVar1 < 0x36) {
        engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460
                  (&this_ptr->base_filemanager,(char *)0x0);
      }
      else if (uVar1 < 0x39) {
        if (uVar1 == 0x37) {
          core_fileman_cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(this_ptr);
        }
      }
      else if (uVar1 < 0x3a) {
        engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
                  (&this_ptr->base_filemanager);
      }
      else if (uVar1 == 0x41) {
        core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(this_ptr);
      }
    }
    else if (uVar1 < 0x44) {
      engine_fileio_cpp_CFileManager_managePodMounts_FUN_004bcec0(&this_ptr->base_filemanager);
    }
    else if (uVar1 < 0x53) {
      if (uVar1 < 0x51) {
        if (uVar1 == 0x4c) {
          engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
                    (&this_ptr->base_filemanager,(char *)0x0);
        }
      }
      else if (uVar1 < 0x52) {
        sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0();
      }
      else {
        iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter source directory containing sound files",&stack0xffffff54,
                           0x100,0);
        if (iVar2 != 0) {
          engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
                    (&this_ptr->base_filemanager);
          core_fileman_cpp_refreshSoundDirectory_FUN_004be590((FILE *)this_ptr,&stack0xffffff5c);
          engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(&this_ptr->base_filemanager);
        }
      }
    }
    else if (uVar1 < 0x54) {
      engine_fileio_cpp_CFileManager_searchMountedPods_FUN_004bcb70
                (&this_ptr->base_filemanager,(char *)0x0);
    }
    else if (uVar1 < 0x56) {
      if (uVar1 == 0x54) {
        engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
                  (&this_ptr->base_filemanager,(char *)0x0);
      }
    }
    else if (uVar1 < 0x57) {
      engine_fileio_cpp_CFileManager_verifyPodCRC_FUN_004b7c90
                (&this_ptr->base_filemanager,(char *)0x0);
    }
    else if (uVar1 == 0x58) {
      engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
                (&this_ptr->base_filemanager,(char *)0x0);
    }
  } while (uVar1 != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 004be270: PUSH EBX
//   Label: core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
// 004be271: PUSH ESI
// 004be272: PUSH EDI
// 004be273: PUSH EBP
// 004be274: SUB ESP,0x100
// 004be27a: MOV ESI,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 004be281: XOR EBP,EBP
// 004be283: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_004be283
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004be288: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004be28d: PUSH EBP
// 004be28e: PUSH EBP
// 004be28f: PUSH 0x629821
//   XREF to: 00629821 (DATA)
// 004be294: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be299: ADD ESP,0xc
// 004be29c: PUSH 0x16
// 004be29e: PUSH EBP
// 004be29f: PUSH 0x629834
//   XREF to: 00629834 (DATA)
// 004be2a4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be2a9: ADD ESP,0xc
// 004be2ac: PUSH 0x2c
// 004be2ae: PUSH EBP
// 004be2af: PUSH 0x629849
//   XREF to: 00629849 (DATA)
// 004be2b4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be2b9: ADD ESP,0xc
// 004be2bc: PUSH 0x37
// 004be2be: PUSH EBP
// 004be2bf: PUSH 0x62985e
//   XREF to: 0062985e (DATA)
// 004be2c4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be2c9: ADD ESP,0xc
// 004be2cc: PUSH 0x4d
// 004be2ce: PUSH EBP
// 004be2cf: PUSH 0x62987d
//   XREF to: 0062987d (DATA)
// 004be2d4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be2d9: ADD ESP,0xc
// 004be2dc: PUSH 0x58
// 004be2de: PUSH EBP
// 004be2df: PUSH 0x6298ae
//   XREF to: 006298ae (DATA)
// 004be2e4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be2e9: ADD ESP,0xc
// 004be2ec: PUSH 0x6e
// 004be2ee: PUSH EBP
// 004be2ef: PUSH 0x6298c5
//   XREF to: 006298c5 (DATA)
// 004be2f4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be2f9: ADD ESP,0xc
// 004be2fc: PUSH 0x84
// 004be301: PUSH EBP
// 004be302: PUSH 0x6298e2
//   XREF to: 006298e2 (DATA)
// 004be307: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be30c: ADD ESP,0xc
// 004be30f: PUSH 0x9a
// 004be314: PUSH EBP
// 004be315: PUSH 0x62990b
//   XREF to: 0062990b (DATA)
// 004be31a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be31f: ADD ESP,0xc
// 004be322: PUSH 0xa5
// 004be327: PUSH EBP
// 004be328: PUSH 0x62993b
//   XREF to: 0062993b (DATA)
// 004be32d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be332: ADD ESP,0xc
// 004be335: PUSH 0x129
// 004be33a: PUSH EBP
// 004be33b: PUSH 0x629952
//   XREF to: 00629952 (DATA)
// 004be340: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be345: ADD ESP,0xc
// 004be348: PUSH 0x134
// 004be34d: PUSH EBP
// 004be34e: PUSH 0x629966
//   XREF to: 00629966 (DATA)
// 004be353: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be358: ADD ESP,0xc
// 004be35b: PUSH 0xfd
// 004be360: PUSH EBP
// 004be361: PUSH 0x629981
//   XREF to: 00629981 (DATA)
// 004be366: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be36b: ADD ESP,0xc
// 004be36e: PUSH 0x108
// 004be373: PUSH EBP
// 004be374: PUSH 0x6299a9
//   XREF to: 006299a9 (DATA)
// 004be379: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be37e: ADD ESP,0xc
// 004be381: PUSH 0x113
// 004be386: PUSH EBP
// 004be387: PUSH 0x6299c7
//   XREF to: 006299c7 (DATA)
// 004be38c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be391: ADD ESP,0xc
// 004be394: PUSH 0x129
// 004be399: PUSH EBP
// 004be39a: PUSH 0x6299da
//   XREF to: 006299da (DATA)
// 004be39f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be3a4: ADD ESP,0xc
// 004be3a7: PUSH 0x134
// 004be3ac: PUSH EBP
// 004be3ad: PUSH 0x629a01
//   XREF to: 00629a01 (DATA)
// 004be3b2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004be3b7: ADD ESP,0xc
// 004be3ba: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004be3bf: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004be3c4: AND EAX,0xff
// 004be3c9: PUSH EAX
// 004be3ca: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004be3cf: ADD ESP,0x4
// 004be3d2: MOV EBX,EAX
// 004be3d4: MOV EDI,EAX
// 004be3d6: CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0
//   XREF to: 00478cb0 (UNCONDITIONAL_CALL)
// 004be3db: CALL core_skeleton.cpp_CDeformableModel_freeAllModels_FUN_005a1dc0
//   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)
// 004be3e0: CALL core_skeleton.cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0
//   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)
// 004be3e5: MOV EAX,EBX
// 004be3e7: CMP EBX,0x43
// 004be3ea: JNC 0x004be4cb
//   XREF to: 004be4cb (CONDITIONAL_JUMP)
// 004be3f0: CMP EBX,0x35
// 004be3f3: JNC 0x004be54e
//   XREF to: 004be54e (CONDITIONAL_JUMP)
// 004be3f9: CMP EBX,0x32
// 004be3fc: JNC 0x004be57b
//   XREF to: 004be57b (CONDITIONAL_JUMP)
// 004be402: CMP EBX,0x31
// 004be405: JNZ 0x004be412
//   XREF to: 004be412 (CONDITIONAL_JUMP)
// 004be407: PUSH EBP
// 004be408: PUSH EBP
// 004be409: PUSH ESI
// 004be40a: CALL engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
//   XREF to: 004b5a50 (UNCONDITIONAL_CALL)
// 004be40f: ADD ESP,0xc
//   Label: LAB_004be40f
// 004be412: CMP EDI,0x1b
//   Label: LAB_004be412
// 004be415: JNZ 0x004be283
//   XREF to: 004be283 (CONDITIONAL_JUMP)
// 004be41b: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004be420: ADD ESP,0x100
// 004be426: POP EBP
// 004be427: POP EDI
// 004be428: POP ESI
// 004be429: POP EBX
// 004be42a: RET
// 004be42b: PUSH 0x1
//   Label: LAB_004be42b
// 004be42d: PUSH EBP
// 004be42e: MOV EAX,dword ptr [ESI + 0x138810]
// 004be434: PUSH ESI
// 004be435: CALL dword ptr [EAX]
// 004be437: JMP 0x004be40f
//   XREF to: 004be40f (UNCONDITIONAL_JUMP)
// 004be439: PUSH ESI
//   Label: LAB_004be439
// 004be43a: CALL engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
//   XREF to: 004b7ac0 (UNCONDITIONAL_CALL)
// 004be43f: ADD ESP,0x4
// 004be442: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be444: PUSH EBP
//   Label: LAB_004be444
// 004be445: PUSH ESI
// 004be446: CALL engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
//   XREF to: 004b7460 (UNCONDITIONAL_CALL)
// 004be44b: ADD ESP,0x8
// 004be44e: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be450: PUSH ESI
//   Label: LAB_004be450
// 004be451: CALL core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930
//   XREF to: 004bd930 (UNCONDITIONAL_CALL)
// 004be456: ADD ESP,0x4
// 004be459: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be45b: PUSH ESI
//   Label: LAB_004be45b
// 004be45c: CALL engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
//   XREF to: 004b76d0 (UNCONDITIONAL_CALL)
// 004be461: ADD ESP,0x4
// 004be464: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be466: PUSH ESI
//   Label: LAB_004be466
// 004be467: CALL core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20
//   XREF to: 004bda20 (UNCONDITIONAL_CALL)
// 004be46c: ADD ESP,0x4
// 004be46f: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be471: PUSH ESI
//   Label: LAB_004be471
// 004be472: CALL engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
//   XREF to: 004bcec0 (UNCONDITIONAL_CALL)
// 004be477: ADD ESP,0x4
// 004be47a: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be47c: CALL sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
//   Label: LAB_004be47c
//   XREF to: 005ad5c0 (UNCONDITIONAL_CALL)
// 004be481: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be483: PUSH EBP
//   Label: LAB_004be483
// 004be484: PUSH ESI
// 004be485: CALL engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
//   XREF to: 004b7c90 (UNCONDITIONAL_CALL)
// 004be48a: ADD ESP,0x8
// 004be48d: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be48f: PUSH EBP
//   Label: LAB_004be48f
// 004be490: PUSH ESI
// 004be491: CALL engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
//   XREF to: 004b82a0 (UNCONDITIONAL_CALL)
// 004be496: ADD ESP,0x8
// 004be499: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be49e: PUSH EBP
//   Label: LAB_004be49e
// 004be49f: PUSH ESI
// 004be4a0: CALL engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
//   XREF to: 004b7f50 (UNCONDITIONAL_CALL)
// 004be4a5: ADD ESP,0x8
// 004be4a8: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be4ad: PUSH EBP
//   Label: LAB_004be4ad
// 004be4ae: PUSH ESI
// 004be4af: CALL engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
//   XREF to: 004b9f40 (UNCONDITIONAL_CALL)
// 004be4b4: ADD ESP,0x8
// 004be4b7: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be4bc: PUSH EBP
//   Label: LAB_004be4bc
// 004be4bd: PUSH ESI
// 004be4be: CALL engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70
//   XREF to: 004bcb70 (UNCONDITIONAL_CALL)
// 004be4c3: ADD ESP,0x8
// 004be4c6: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be4cb: JBE 0x004be471
//   Label: LAB_004be4cb
//   XREF to: 004be471 (CONDITIONAL_JUMP)
// 004be4cd: CMP EBX,0x53
// 004be4d0: JNC 0x004be4e1
//   XREF to: 004be4e1 (CONDITIONAL_JUMP)
// 004be4d2: CMP EBX,0x51
// 004be4d5: JNC 0x004be4fe
//   XREF to: 004be4fe (CONDITIONAL_JUMP)
// 004be4d7: CMP EBX,0x4c
// 004be4da: JZ 0x004be48f
//   XREF to: 004be48f (CONDITIONAL_JUMP)
// 004be4dc: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be4e1: JBE 0x004be4bc
//   Label: LAB_004be4e1
//   XREF to: 004be4bc (CONDITIONAL_JUMP)
// 004be4e3: CMP EBX,0x56
// 004be4e6: JNC 0x004be4f2
//   XREF to: 004be4f2 (CONDITIONAL_JUMP)
// 004be4e8: CMP EBX,0x54
// 004be4eb: JZ 0x004be49e
//   XREF to: 004be49e (CONDITIONAL_JUMP)
// 004be4ed: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be4f2: JBE 0x004be483
//   Label: LAB_004be4f2
//   XREF to: 004be483 (CONDITIONAL_JUMP)
// 004be4f4: CMP EBX,0x58
// 004be4f7: JZ 0x004be4ad
//   XREF to: 004be4ad (CONDITIONAL_JUMP)
// 004be4f9: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be4fe: JBE 0x004be47c
//   Label: LAB_004be4fe
//   XREF to: 004be47c (CONDITIONAL_JUMP)
// 004be504: PUSH EBP
// 004be505: PUSH 0x100
// 004be50a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 004be50e: PUSH EAX
// 004be50f: PUSH 0x629a25
//   XREF to: 00629a25 (DATA)
// 004be514: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004be51a: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004be51b: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004be520: ADD ESP,0x14
// 004be523: TEST EAX,EAX
// 004be525: JZ 0x004be412
//   XREF to: 004be412 (CONDITIONAL_JUMP)
// 004be52b: PUSH ESI
// 004be52c: CALL engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
//   XREF to: 004b7c10 (UNCONDITIONAL_CALL)
// 004be531: ADD ESP,0x4
// 004be534: MOV EAX,ESP
// 004be536: PUSH EAX
// 004be537: PUSH ESI
// 004be538: CALL core_fileman.cpp_refreshSoundDirectory_FUN_004be590
//   XREF to: 004be590 (UNCONDITIONAL_CALL)
// 004be53d: ADD ESP,0x8
// 004be540: PUSH ESI
// 004be541: CALL engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
//   XREF to: 004b7c60 (UNCONDITIONAL_CALL)
// 004be546: ADD ESP,0x4
// 004be549: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be54e: JBE 0x004be444
//   Label: LAB_004be54e
//   XREF to: 004be444 (CONDITIONAL_JUMP)
// 004be554: CMP EBX,0x39
// 004be557: JNC 0x004be567
//   XREF to: 004be567 (CONDITIONAL_JUMP)
// 004be559: CMP EBX,0x37
// 004be55c: JZ 0x004be450
//   XREF to: 004be450 (CONDITIONAL_JUMP)
// 004be562: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be567: JBE 0x004be45b
//   Label: LAB_004be567
//   XREF to: 004be45b (CONDITIONAL_JUMP)
// 004be56d: CMP EBX,0x41
// 004be570: JZ 0x004be466
//   XREF to: 004be466 (CONDITIONAL_JUMP)
// 004be576: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
// 004be57b: JBE 0x004be42b
//   Label: LAB_004be57b
//   XREF to: 004be42b (CONDITIONAL_JUMP)
// 004be581: CMP EBX,0x34
// 004be584: JZ 0x004be439
//   XREF to: 004be439 (CONDITIONAL_JUMP)
// 004be58a: JMP 0x004be412
//   XREF to: 004be412 (UNCONDITIONAL_JUMP)
