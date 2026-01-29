; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager *this_ptr)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050786e
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00513317
;
; Referenced Globals:
;   TerminatedCString s_Demon_File_Manager_00629821
;   TerminatedCString s_Advanced_option_list_00629834
;   TerminatedCString s_s_1_Rebuild_last_POD_00629849
;   TerminatedCString s_s_2_Extract_all_files_fr_0062985e
;   TerminatedCString s_s_4_Build_a_POD_from_an__0062987d
;   TerminatedCString s_s_5_Catalog_a_POD_file_006298ae
;   TerminatedCString s_s_7_Move_a_set_into_POD__006298c5
;   TerminatedCString s_s_9_Extract_files_from_P_006298e2
;   TerminatedCString s_A_Create_POD_file_from_e_0062990b
;   TerminatedCString s_C_Mount_dismount_PODs_0062993b
;   TerminatedCString s_Q_Test_sound_files_00629952
;   TerminatedCString s_R_Refresh_sound_director_00629966
;   TerminatedCString s_L_Compare_files_in_pod_v_00629981
;   TerminatedCString s_T_View_audit_trail_for_a_006299a9
;   TerminatedCString s_V_Verify_POD_CRC_006299c7
;   ... and 5 more
;
; Called Functions:
;   core_dmodel.cpp_freeAllModels_FUN_00478cb0
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20
;   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930
;   core_fileman.cpp_refreshSoundDirectory_FUN_004be590
;   core_skeleton.cpp_freeAllModels_FUN_005a1dc0
;   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
;   crt_ctype.c_toupper_FUN_005ff9e0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
;   engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
;   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
;   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be270
        ;   Label: core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
    PUSH ESI                            ; 004be271
    PUSH EDI                            ; 004be272
    PUSH EBP                            ; 004be273
    SUB ESP,0x100                       ; 004be274
    MOV ESI,dword ptr [ESP + 0x114]     ; 004be27a
    XOR EBP,EBP                         ; 004be281
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004be283
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_004be283
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004be288
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH EBP                            ; 004be28d
    PUSH EBP                            ; 004be28e
    PUSH 0x629821                       ; 004be28f | = "Demon File Manager"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be294
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be299
    PUSH 0x16                           ; 004be29c
    PUSH EBP                            ; 004be29e
    PUSH 0x629834                       ; 004be29f | = "Advanced option list"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be2a4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be2a9
    PUSH 0x2c                           ; 004be2ac
    PUSH EBP                            ; 004be2ae
    PUSH 0x629849                       ; 004be2af | = "1. Rebuild last .POD"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be2b4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be2b9
    PUSH 0x37                           ; 004be2bc
    PUSH EBP                            ; 004be2be
    PUSH 0x62985e                       ; 004be2bf | = "2. Extract all files from .POD"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be2c4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be2c9
    PUSH 0x4d                           ; 004be2cc
    PUSH EBP                            ; 004be2ce
    PUSH 0x62987d                       ; 004be2cf | = "4. Build a .POD from an old-school re..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be2d4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be2d9
    PUSH 0x58                           ; 004be2dc
    PUSH EBP                            ; 004be2de
    PUSH 0x6298ae                       ; 004be2df | = "5. Catalog a .POD file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be2e4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be2e9
    PUSH 0x6e                           ; 004be2ec
    PUSH EBP                            ; 004be2ee
    PUSH 0x6298c5                       ; 004be2ef | = "7. Move a set into .POD file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be2f4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be2f9
    PUSH 0x84                           ; 004be2fc
    PUSH EBP                            ; 004be301
    PUSH 0x6298e2                       ; 004be302 | = "9. Extract files from .POD interactively"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be307
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be30c
    PUSH 0x9a                           ; 004be30f
    PUSH EBP                            ; 004be314
    PUSH 0x62990b                       ; 004be315 | = "A. Create .POD file from extended res..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be31a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be31f
    PUSH 0xa5                           ; 004be322
    PUSH EBP                            ; 004be327
    PUSH 0x62993b                       ; 004be328 | = "C. Mount/dismount PODs"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be32d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be332
    PUSH 0x129                          ; 004be335
    PUSH EBP                            ; 004be33a
    PUSH 0x629952                       ; 004be33b | = "Q. Test sound files"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be340
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be345
    PUSH 0x134                          ; 004be348
    PUSH EBP                            ; 004be34d
    PUSH 0x629966                       ; 004be34e | = "R. Refresh sound directory"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be353
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be358
    PUSH 0xfd                           ; 004be35b
    PUSH EBP                            ; 004be360
    PUSH 0x629981                       ; 004be361 | = "L. Compare files in pod vs. local files"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be366
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be36b
    PUSH 0x108                          ; 004be36e
    PUSH EBP                            ; 004be373
    PUSH 0x6299a9                       ; 004be374 | = "T. View audit trail for a pod"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be379
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be37e
    PUSH 0x113                          ; 004be381
    PUSH EBP                            ; 004be386
    PUSH 0x6299c7                       ; 004be387 | = "V. Verify .POD CRC"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be38c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be391
    PUSH 0x129                          ; 004be394
    PUSH EBP                            ; 004be399
    PUSH 0x6299da                       ; 004be39a | = "X. Cross reference PODs for duplicates"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be39f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be3a4
    PUSH 0x134                          ; 004be3a7
    PUSH EBP                            ; 004be3ac
    PUSH 0x629a01                       ; 004be3ad | = "S. Search for files in mounted PODs"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004be3b2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004be3b7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004be3ba
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004be3bf
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 004be3c4
    PUSH EAX                            ; 004be3c9
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004be3ca
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004be3cf
    MOV EBX,EAX                         ; 004be3d2
    MOV EDI,EAX                         ; 004be3d4
    CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0 ; 004be3d6
        ;   XREF to: 00478cb0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_00478cb0()
    CALL core_skeleton.cpp_freeAllModels_FUN_005a1dc0 ; 004be3db
        ;   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllModels_FUN_005a1dc0()
    CALL core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0 ; 004be3e0
        ;   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0()
    MOV EAX,EBX                         ; 004be3e5
    CMP EBX,0x43                        ; 004be3e7
    JNC 0x004be4cb                      ; 004be3ea
        ;   XREF to: 004be4cb (CONDITIONAL_JUMP)  ; LAB_004be4cb
    CMP EBX,0x35                        ; 004be3f0
    JNC 0x004be54e                      ; 004be3f3
        ;   XREF to: 004be54e (CONDITIONAL_JUMP)  ; LAB_004be54e
    CMP EBX,0x32                        ; 004be3f9
    JNC 0x004be57b                      ; 004be3fc
        ;   XREF to: 004be57b (CONDITIONAL_JUMP)  ; LAB_004be57b
    CMP EBX,0x31                        ; 004be402
    JNZ 0x004be412                      ; 004be405
        ;   XREF to: 004be412 (CONDITIONAL_JUMP)  ; LAB_004be412
    PUSH EBP                            ; 004be407
    PUSH EBP                            ; 004be408
    PUSH ESI                            ; 004be409
    CALL engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 ; 004be40a
        ;   XREF to: 004b5a50 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager * this_ptr, char * pod_filename, char * volume_name)
    ADD ESP,0xc                         ; 004be40f
        ;   Label: LAB_004be40f
    CMP EDI,0x1b                        ; 004be412
        ;   Label: LAB_004be412
    JNZ 0x004be283                      ; 004be415
        ;   XREF to: 004be283 (CONDITIONAL_JUMP)  ; LAB_004be283
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004be41b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    ADD ESP,0x100                       ; 004be420
    POP EBP                             ; 004be426
    POP EDI                             ; 004be427
    POP ESI                             ; 004be428
    POP EBX                             ; 004be429
    RET                                 ; 004be42a
    PUSH 0x1                            ; 004be42b
        ;   Label: LAB_004be42b
    PUSH EBP                            ; 004be42d
    MOV EAX,dword ptr [ESI + 0x138810]  ; 004be42e
    PUSH ESI                            ; 004be434
    CALL dword ptr [EAX]                ; 004be435
    JMP 0x004be40f                      ; 004be437
        ;   XREF to: 004be40f (UNCONDITIONAL_JUMP)  ; LAB_004be40f
    PUSH ESI                            ; 004be439
        ;   Label: LAB_004be439
    CALL engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 ; 004be43a
        ;   XREF to: 004b7ac0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004be43f
    JMP 0x004be412                      ; 004be442
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH EBP                            ; 004be444
        ;   Label: LAB_004be444
    PUSH ESI                            ; 004be445
    CALL engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 ; 004be446
        ;   XREF to: 004b7460 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004be44b
    JMP 0x004be412                      ; 004be44e
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH ESI                            ; 004be450
        ;   Label: LAB_004be450
    CALL core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 ; 004be451
        ;   XREF to: 004bd930 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(CDemonFileManager * this_ptr)
    ADD ESP,0x4                         ; 004be456
    JMP 0x004be412                      ; 004be459
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH ESI                            ; 004be45b
        ;   Label: LAB_004be45b
    CALL engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 ; 004be45c
        ;   XREF to: 004b76d0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004be461
    JMP 0x004be412                      ; 004be464
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH ESI                            ; 004be466
        ;   Label: LAB_004be466
    CALL core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 ; 004be467
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager * this_ptr)
    ADD ESP,0x4                         ; 004be46c
    JMP 0x004be412                      ; 004be46f
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH ESI                            ; 004be471
        ;   Label: LAB_004be471
    CALL engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 ; 004be472
        ;   XREF to: 004bcec0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004be477
    JMP 0x004be412                      ; 004be47a
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    CALL sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 ; 004be47c
        ;   XREF to: 005ad5c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0()
        ;   Label: LAB_004be47c
    JMP 0x004be412                      ; 004be481
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH EBP                            ; 004be483
        ;   Label: LAB_004be483
    PUSH ESI                            ; 004be484
    CALL engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90 ; 004be485
        ;   XREF to: 004b7c90 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004be48a
    JMP 0x004be412                      ; 004be48d
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH EBP                            ; 004be48f
        ;   Label: LAB_004be48f
    PUSH ESI                            ; 004be490
    CALL engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 ; 004be491
        ;   XREF to: 004b82a0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004be496
    JMP 0x004be412                      ; 004be499
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH EBP                            ; 004be49e
        ;   Label: LAB_004be49e
    PUSH ESI                            ; 004be49f
    CALL engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 ; 004be4a0
        ;   XREF to: 004b7f50 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004be4a5
    JMP 0x004be412                      ; 004be4a8
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH EBP                            ; 004be4ad
        ;   Label: LAB_004be4ad
    PUSH ESI                            ; 004be4ae
    CALL engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 ; 004be4af
        ;   XREF to: 004b9f40 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004be4b4
    JMP 0x004be412                      ; 004be4b7
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    PUSH EBP                            ; 004be4bc
        ;   Label: LAB_004be4bc
    PUSH ESI                            ; 004be4bd
    CALL engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 ; 004be4be
        ;   XREF to: 004bcb70 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70(CFileManager * this_ptr, char * default_wildcard)
    ADD ESP,0x8                         ; 004be4c3
    JMP 0x004be412                      ; 004be4c6
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    JBE 0x004be471                      ; 004be4cb
        ;   XREF to: 004be471 (CONDITIONAL_JUMP)  ; LAB_004be471
        ;   Label: LAB_004be4cb
    CMP EBX,0x53                        ; 004be4cd
    JNC 0x004be4e1                      ; 004be4d0
        ;   XREF to: 004be4e1 (CONDITIONAL_JUMP)  ; LAB_004be4e1
    CMP EBX,0x51                        ; 004be4d2
    JNC 0x004be4fe                      ; 004be4d5
        ;   XREF to: 004be4fe (CONDITIONAL_JUMP)  ; LAB_004be4fe
    CMP EBX,0x4c                        ; 004be4d7
    JZ 0x004be48f                       ; 004be4da
        ;   XREF to: 004be48f (CONDITIONAL_JUMP)  ; LAB_004be48f
    JMP 0x004be412                      ; 004be4dc
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    JBE 0x004be4bc                      ; 004be4e1
        ;   XREF to: 004be4bc (CONDITIONAL_JUMP)  ; LAB_004be4bc
        ;   Label: LAB_004be4e1
    CMP EBX,0x56                        ; 004be4e3
    JNC 0x004be4f2                      ; 004be4e6
        ;   XREF to: 004be4f2 (CONDITIONAL_JUMP)  ; LAB_004be4f2
    CMP EBX,0x54                        ; 004be4e8
    JZ 0x004be49e                       ; 004be4eb
        ;   XREF to: 004be49e (CONDITIONAL_JUMP)  ; LAB_004be49e
    JMP 0x004be412                      ; 004be4ed
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    JBE 0x004be483                      ; 004be4f2
        ;   XREF to: 004be483 (CONDITIONAL_JUMP)  ; LAB_004be483
        ;   Label: LAB_004be4f2
    CMP EBX,0x58                        ; 004be4f4
    JZ 0x004be4ad                       ; 004be4f7
        ;   XREF to: 004be4ad (CONDITIONAL_JUMP)  ; LAB_004be4ad
    JMP 0x004be412                      ; 004be4f9
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    JBE 0x004be47c                      ; 004be4fe
        ;   XREF to: 004be47c (CONDITIONAL_JUMP)  ; LAB_004be47c
        ;   Label: LAB_004be4fe
    PUSH EBP                            ; 004be504
    PUSH 0x100                          ; 004be505
    LEA EAX,[ESP + 0x8]                 ; 004be50a
    PUSH EAX                            ; 004be50e
    PUSH 0x629a25                       ; 004be50f | = "Enter source directory containing sou..."
    MOV EDX,dword ptr [0x00678a60]      ; 004be514 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004be51a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004be51b
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004be520
    TEST EAX,EAX                        ; 004be523
    JZ 0x004be412                       ; 004be525
        ;   XREF to: 004be412 (CONDITIONAL_JUMP)  ; LAB_004be412
    PUSH ESI                            ; 004be52b
    CALL engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10 ; 004be52c
        ;   XREF to: 004b7c10 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004be531
    MOV EAX,ESP                         ; 004be534
    PUSH EAX                            ; 004be536
    PUSH ESI                            ; 004be537
    CALL core_fileman.cpp_refreshSoundDirectory_FUN_004be590 ; 004be538
        ;   XREF to: 004be590 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_refreshSoundDirectory_FUN_004be590(_FILE * file_list_output, char * source_directory)
    ADD ESP,0x8                         ; 004be53d
    PUSH ESI                            ; 004be540
    CALL engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60 ; 004be541
        ;   XREF to: 004b7c60 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004be546
    JMP 0x004be412                      ; 004be549
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    JBE 0x004be444                      ; 004be54e
        ;   XREF to: 004be444 (CONDITIONAL_JUMP)  ; LAB_004be444
        ;   Label: LAB_004be54e
    CMP EBX,0x39                        ; 004be554
    JNC 0x004be567                      ; 004be557
        ;   XREF to: 004be567 (CONDITIONAL_JUMP)  ; LAB_004be567
    CMP EBX,0x37                        ; 004be559
    JZ 0x004be450                       ; 004be55c
        ;   XREF to: 004be450 (CONDITIONAL_JUMP)  ; LAB_004be450
    JMP 0x004be412                      ; 004be562
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    JBE 0x004be45b                      ; 004be567
        ;   XREF to: 004be45b (CONDITIONAL_JUMP)  ; LAB_004be45b
        ;   Label: LAB_004be567
    CMP EBX,0x41                        ; 004be56d
    JZ 0x004be466                       ; 004be570
        ;   XREF to: 004be466 (CONDITIONAL_JUMP)  ; LAB_004be466
    JMP 0x004be412                      ; 004be576
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412
    JBE 0x004be42b                      ; 004be57b
        ;   XREF to: 004be42b (CONDITIONAL_JUMP)  ; LAB_004be42b
        ;   Label: LAB_004be57b
    CMP EBX,0x34                        ; 004be581
    JZ 0x004be439                       ; 004be584
        ;   XREF to: 004be439 (CONDITIONAL_JUMP)  ; LAB_004be439
    JMP 0x004be412                      ; 004be58a
        ;   XREF to: 004be412 (UNCONDITIONAL_JUMP)  ; LAB_004be412

