; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * core_set_cpp_FUN_0054d3c0(CDemonSet *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x330]:1  local_330
; undefined        Stack[-0x230]:1  local_230
; undefined        Stack[-0x130]:1  local_130
; undefined1       Stack[-0x12f]:1  local_12f
; undefined        Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xc9]:1  local_c9
; undefined1       Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_FUN_0051b610 at 0051b632
;
; Referenced Globals:
;   TerminatedCString s_Loading_set_005f0484
;   undefined4 DAT_005f0490
;   TerminatedCString s_models_005f0493
;   TerminatedCString s_core_set_cpp_005f049a
;   TerminatedCString s_CDemonSet_Unable_to_open_005f04aa
;   undefined4 DAT_005f04c7
;   undefined4 DAT_005f04cb
;   undefined4 DAT_005f04cf
;   undefined4 DAT_005f04d3
;   undefined4 DAT_005f04d7
;   TerminatedCString s_f_f_f_f_005f04db
;   TerminatedCString s_d_d_d_d_005f04e8
;   TerminatedCString s_f_f_f_005f04f5
;   TerminatedCString s_f_f_f_f_005f04ff
;   TerminatedCString s_f_f_005f050c
;   ... and 64 more
;
; Called Functions:
;   core_dcamera.cpp_loadCameraFog_FUN_00454ab0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0
;   core_main.c_FUN_005030e0
;   core_path.cpp_resetAllPathMaps_FUN_00535280
;   core_set.cpp_CDemonSet_clear_FUN_0054d370
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00559580
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_0055b220
;   core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_0055b8f0
;   core_setutil.cpp_C3DSCamera_load_FUN_0055c1b0
;   core_setutil.cpp_C3DSCamera_loadPVS_FUN_0055c540
;   core_setutil.cpp_C3DSLight_load_FUN_0055c800
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d3c0
        ;   Label: core_set.cpp_FUN_0054d3c0
    PUSH ESI                            ; 0054d3c1
    PUSH EDI                            ; 0054d3c2
    PUSH EBP                            ; 0054d3c3
    MOV EBP,ESP                         ; 0054d3c4
    SUB ESP,0x320                       ; 0054d3c6
    AND ESP,0xfffffff8                  ; 0054d3cc
    MOV ESI,dword ptr [EBP + 0x18]      ; 0054d3cf
    PUSH 0x0                            ; 0054d3d2
    PUSH 0x5f0484                       ; 0054d3d4 | = "Loading set"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0054d3d9
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0054d3de
    PUSH EAX                            ; 0054d3e1
    MOV EDX,dword ptr [0x0061f2e0]      ; 0054d3e2 | DAT_0061f2e0
    PUSH EDX                            ; 0054d3e8
    CALL core_level.cpp_CLevelLoader_update_FUN_004fe9c0 ; 0054d3e9
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004fe9c0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 0054d3ee
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054d3f1
    PUSH ECX                            ; 0054d3f4
    CALL core_set.cpp_CDemonSet_clear_FUN_0054d370 ; 0054d3f5
        ;   XREF to: 0054d370 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clear_FUN_0054d370(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054d3fa
    PUSH 0x5f0490                       ; 0054d3fd | DAT_005f0490
    PUSH ESI                            ; 0054d402
    PUSH 0x5f0493                       ; 0054d403 | = "models"
    CALL engine_dosio.cpp_FUN_00479180  ; 0054d408
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0054d40d
    MOV EBX,EAX                         ; 0054d410
    TEST EAX,EAX                        ; 0054d412
    JZ 0x0054df91                       ; 0054d414
        ;   XREF to: 0054df91 (CONDITIONAL_JUMP)  ; LAB_0054df91
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d41a
        ;   Label: LAB_0054d41a
    ADD EAX,0x15acc0                    ; 0054d41d
    PUSH EAX                            ; 0054d422
    PUSH 0x5f04c7                       ; 0054d423 | DAT_005f04c7
    PUSH EBX                            ; 0054d428
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d429
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d42e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d431
    ADD EAX,0x15aea8                    ; 0054d434
    PUSH EAX                            ; 0054d439
    PUSH 0x5f04cb                       ; 0054d43a | DAT_005f04cb
    PUSH EBX                            ; 0054d43f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d440
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d445
    MOV EAX,ESP                         ; 0054d448
    PUSH EAX                            ; 0054d44a
    PUSH 0x5f04cf                       ; 0054d44b | DAT_005f04cf
    PUSH EBX                            ; 0054d450
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d451
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d456
    LEA EAX,[ESP + 0x200]               ; 0054d459
    PUSH EAX                            ; 0054d460
    PUSH 0x5f04d3                       ; 0054d461 | DAT_005f04d3
    PUSH EBX                            ; 0054d466
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d467
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d46c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d46f
    ADD EAX,0x14d150                    ; 0054d472
    PUSH EAX                            ; 0054d477
    PUSH 0x5f04d7                       ; 0054d478 | DAT_005f04d7
    PUSH EBX                            ; 0054d47d
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d47e
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d483
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d486
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054d489
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0054d48c
    ADD ESI,0x14d154                    ; 0054d492
    CMP EDX,0x1e                        ; 0054d498
    JL 0x0054dfb9                       ; 0054d49b
        ;   XREF to: 0054dfb9 (CONDITIONAL_JUMP)  ; LAB_0054dfb9
    ADD EAX,0x14d160                    ; 0054d4a1
    PUSH EAX                            ; 0054d4a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d4a7
    ADD EAX,0x14d15c                    ; 0054d4aa
    PUSH EAX                            ; 0054d4af
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d4b0
    ADD EAX,0x14d158                    ; 0054d4b3
    PUSH EAX                            ; 0054d4b8
    PUSH ESI                            ; 0054d4b9
    PUSH 0x5f04db                       ; 0054d4ba | = "%f,%f,%f,%f\n"
    PUSH EBX                            ; 0054d4bf
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d4c0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0054d4c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d4c8
        ;   Label: LAB_0054d4c8
    CMP dword ptr [EAX + 0x15acc0],0x0  ; 0054d4cb
    JNZ 0x0054d50d                      ; 0054d4d2
        ;   XREF to: 0054d50d (CONDITIONAL_JUMP)  ; LAB_0054d50d
    PUSH EBX                            ; 0054d4d4
    PUSH 0xff                           ; 0054d4d5
    LEA EAX,[ESP + 0x8]                 ; 0054d4da
    PUSH EAX                            ; 0054d4de
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d4df
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d4e4
    PUSH EBX                            ; 0054d4e7
    PUSH 0xff                           ; 0054d4e8
    LEA EAX,[ESP + 0x8]                 ; 0054d4ed
    PUSH EAX                            ; 0054d4f1
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d4f2
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d4f7
    PUSH EBX                            ; 0054d4fa
    PUSH 0xff                           ; 0054d4fb
    LEA EAX,[ESP + 0x8]                 ; 0054d500
    PUSH EAX                            ; 0054d504
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d505
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d50a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d50d
        ;   Label: LAB_0054d50d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054d510
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 0054d513
    ADD ESI,0x15ac40                    ; 0054d519
    CMP EDI,0x11                        ; 0054d51f
    JGE 0x0054e05d                      ; 0054d522
        ;   XREF to: 0054e05d (CONDITIONAL_JUMP)  ; LAB_0054e05d
    PUSH EBX                            ; 0054d528
    PUSH 0xff                           ; 0054d529
    LEA EAX,[ESP + 0x8]                 ; 0054d52e
    PUSH EAX                            ; 0054d532
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d533
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d538
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d53b
    ADD EAX,0x15ac48                    ; 0054d53e
    PUSH EAX                            ; 0054d543
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d544
    ADD EAX,0x15ac44                    ; 0054d547
    PUSH EAX                            ; 0054d54c
    PUSH ESI                            ; 0054d54d
    LEA EAX,[ESP + 0x2f0]               ; 0054d54e
    PUSH EAX                            ; 0054d555
    PUSH 0x5f04e8                       ; 0054d556 | = "%d,%d,%d,%d\n"
    PUSH EBX                            ; 0054d55b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d55c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0054d561
    PUSH EBX                            ; 0054d564
    PUSH 0xff                           ; 0054d565
    LEA EAX,[ESP + 0x8]                 ; 0054d56a
    PUSH EAX                            ; 0054d56e
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d56f
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d574
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d577
    ADD EAX,0x15ac54                    ; 0054d57a
    PUSH EAX                            ; 0054d57f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d580
    ADD EAX,0x15ac50                    ; 0054d583
    PUSH EAX                            ; 0054d588
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d589
    ADD EAX,0x15ac4c                    ; 0054d58c
    PUSH EAX                            ; 0054d591
    PUSH 0x5f04f5                       ; 0054d592 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0054d597
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d598
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0054d59d
    LEA EAX,[ESP + 0x2e4]               ; 0054d5a0
    PUSH EAX                            ; 0054d5a7
    PUSH EAX                            ; 0054d5a8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d5a9
    ADD EAX,0x15ac5c                    ; 0054d5ac
    PUSH EAX                            ; 0054d5b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d5b2
    ADD EAX,0x15ac58                    ; 0054d5b5
    PUSH EAX                            ; 0054d5ba
    PUSH 0x5f04ff                       ; 0054d5bb | = "%f,%f,%f,%f\n"
    PUSH EBX                            ; 0054d5c0
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d5c1
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0054d5c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d5c9
    MOV dword ptr [EAX + 0x15ac60],0x42480000 ; 0054d5cc
    PUSH EBX                            ; 0054d5d6
        ;   Label: LAB_0054d5d6
    PUSH 0xff                           ; 0054d5d7
    LEA EAX,[ESP + 0x8]                 ; 0054d5dc
    PUSH EAX                            ; 0054d5e0
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d5e1
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    MOV EAX,[0x00625c90]                ; 0054d5e6 | g_CWaterPtr
    ADD ESP,0xc                         ; 0054d5eb
    LEA ESI,[EAX + 0x8]                 ; 0054d5ee
    PUSH ESI                            ; 0054d5f1
    ADD EAX,0x4                         ; 0054d5f2
    PUSH EAX                            ; 0054d5f5
    PUSH 0x5f050c                       ; 0054d5f6 | = "%f,%f\n"
    PUSH EBX                            ; 0054d5fb
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d5fc
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0054d601
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d604
    CMP dword ptr [EAX + 0x15acc0],0x1f ; 0054d607
    JL 0x0054e06d                       ; 0054d60e
        ;   XREF to: 0054e06d (CONDITIONAL_JUMP)  ; LAB_0054e06d
    PUSH EBX                            ; 0054d614
    PUSH 0xff                           ; 0054d615
    LEA EAX,[ESP + 0x8]                 ; 0054d61a
    PUSH EAX                            ; 0054d61e
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d61f
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d624
    PUSH 0x2c8afc4                      ; 0054d627 | DAT_02c8afc4
    PUSH 0x2c8afc0                      ; 0054d62c | DAT_02c8afc0
    PUSH 0x625c98                       ; 0054d631 | DAT_00625c98
    PUSH 0x625c94                       ; 0054d636 | DAT_00625c94
    PUSH 0x5f0513                       ; 0054d63b | = "%f,%d,%f,%f\n"
    PUSH EBX                            ; 0054d640
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d641
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0054d646
    PUSH EBX                            ; 0054d649
        ;   Label: LAB_0054d649
    PUSH 0xff                           ; 0054d64a
    LEA EAX,[ESP + 0x8]                 ; 0054d64f
    PUSH EAX                            ; 0054d653
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d654
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d659
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d65c
    ADD EAX,0x15aca8                    ; 0054d65f
    PUSH EAX                            ; 0054d664
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d665
    ADD EAX,0x15aca4                    ; 0054d668
    PUSH EAX                            ; 0054d66d
    PUSH 0x5f0520                       ; 0054d66e | = "%d,%s\n"
    PUSH EBX                            ; 0054d673
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d674
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0054d679
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d67c
    CMP dword ptr [EAX + 0x15acc0],0x5  ; 0054d67f
    JL 0x0054e094                       ; 0054d686
        ;   XREF to: 0054e094 (CONDITIONAL_JUMP)  ; LAB_0054e094
    PUSH EBX                            ; 0054d68c
    PUSH 0xff                           ; 0054d68d
    LEA EAX,[ESP + 0x8]                 ; 0054d692
    PUSH EAX                            ; 0054d696
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d697
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d69c
    MOV ESI,dword ptr [0x00625c90]      ; 0054d69f | g_CWaterPtr
    PUSH ESI                            ; 0054d6a5 | g_CWaterInstance
    PUSH 0x5f0527                       ; 0054d6a6 | DAT_005f0527
    PUSH EBX                            ; 0054d6ab
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d6ac
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d6b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d6b4
        ;   Label: LAB_0054d6b4
    CMP dword ptr [EAX + 0x15acc0],0x6  ; 0054d6b7
    JL 0x0054e0cf                       ; 0054d6be
        ;   XREF to: 0054e0cf (CONDITIONAL_JUMP)  ; LAB_0054e0cf
    PUSH EBX                            ; 0054d6c4
    PUSH 0xff                           ; 0054d6c5
    LEA EAX,[ESP + 0x8]                 ; 0054d6ca
    PUSH EAX                            ; 0054d6ce
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d6cf
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d6d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d6d7
    ADD EAX,0x161640                    ; 0054d6da
    PUSH EAX                            ; 0054d6df
    PUSH 0x5f0530                       ; 0054d6e0 | DAT_005f0530
    PUSH EBX                            ; 0054d6e5
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d6e6
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d6eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d6ee
        ;   Label: LAB_0054d6ee
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054d6f1
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0054d6f4
    ADD EDI,0x161644                    ; 0054d6fa
    CMP EDX,0xc                         ; 0054d700
    JL 0x0054e0de                       ; 0054d703
        ;   XREF to: 0054e0de (CONDITIONAL_JUMP)  ; LAB_0054e0de
    PUSH EDI                            ; 0054d709
    ADD EAX,0x161664                    ; 0054d70a
    PUSH EAX                            ; 0054d70f
    PUSH 0x5f0534                       ; 0054d710 | = "%d,%s\n"
    PUSH EBX                            ; 0054d715
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d716
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0054d71b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d71e
        ;   Label: LAB_0054d71e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054d721
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0054d724
    ADD EDI,0x15ae64                    ; 0054d72a
    CMP ECX,0xd                         ; 0054d730
    JL 0x0054e10f                       ; 0054d733
        ;   XREF to: 0054e10f (CONDITIONAL_JUMP)  ; LAB_0054e10f
    PUSH EBX                            ; 0054d739
    PUSH 0xff                           ; 0054d73a
    LEA EAX,[ESP + 0x8]                 ; 0054d73f
    PUSH EAX                            ; 0054d743
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d744
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d749
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d74c
    PUSH EDI                            ; 0054d74f
    ADD EAX,0x15ae60                    ; 0054d750
    PUSH EAX                            ; 0054d755
    PUSH 0x5f0547                       ; 0054d756 | = "%d,%s\n"
    PUSH EBX                            ; 0054d75b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d75c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0054d761
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d764
        ;   Label: LAB_0054d764
    CMP dword ptr [EAX + 0x15acc0],0x19 ; 0054d767
    JL 0x0054e13d                       ; 0054d76e
        ;   XREF to: 0054e13d (CONDITIONAL_JUMP)  ; LAB_0054e13d
    PUSH EBX                            ; 0054d774
    PUSH 0xff                           ; 0054d775
    LEA EAX,[ESP + 0x8]                 ; 0054d77a
    PUSH EAX                            ; 0054d77e
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d77f
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d784
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d787
    ADD EAX,0x161680                    ; 0054d78a
    PUSH EAX                            ; 0054d78f
    PUSH 0x5f0553                       ; 0054d790 | DAT_005f0553
    PUSH EBX                            ; 0054d795
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d796
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d79b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d79e
        ;   Label: LAB_0054d79e
    CMP dword ptr [EAX + 0x15acc0],0x1d ; 0054d7a1
    JL 0x0054e14c                       ; 0054d7a8
        ;   XREF to: 0054e14c (CONDITIONAL_JUMP)  ; LAB_0054e14c
    PUSH EBX                            ; 0054d7ae
    PUSH 0xff                           ; 0054d7af
    LEA EAX,[ESP + 0x8]                 ; 0054d7b4
    PUSH EAX                            ; 0054d7b8
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d7b9
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d7be
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d7c1
    ADD EAX,0x15acbc                    ; 0054d7c4
    PUSH EAX                            ; 0054d7c9
    PUSH 0x5f0557                       ; 0054d7ca | DAT_005f0557
    PUSH EBX                            ; 0054d7cf
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d7d0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d7d5
    PUSH 0x0                            ; 0054d7d8
        ;   Label: LAB_0054d7d8
    LEA EAX,[ESP + 0x104]               ; 0054d7da
    PUSH EAX                            ; 0054d7e1
    PUSH 0x0                            ; 0054d7e2
    PUSH 0x0                            ; 0054d7e4
    LEA EAX,[ESP + 0x210]               ; 0054d7e6
    PUSH EAX                            ; 0054d7ed
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 0054d7ee
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0054d7f3
    PUSH 0x5f055b                       ; 0054d7f6 | = "train"
    LEA EAX,[ESP + 0x104]               ; 0054d7fb
    PUSH EAX                            ; 0054d802
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054d803
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054d808
    TEST EAX,EAX                        ; 0054d80b
    JNZ 0x0054e15b                      ; 0054d80d
        ;   XREF to: 0054e15b (CONDITIONAL_JUMP)  ; LAB_0054e15b
    MOV EDX,dword ptr [0x00625bc0]      ; 0054d813 | DAT_00625bc0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d819
    PUSH EDX                            ; 0054d81c
    MOV dword ptr [EAX + 0x15acb8],0x1  ; 0054d81d
    CALL core_terrain.cpp_CTerrain_init_FUN_0059f380 ; 0054d827
        ;   XREF to: 0059f380 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_init_FUN_0059f380(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 0054d82c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054d82f
        ;   Label: LAB_0054d82f
    PUSH ECX                            ; 0054d832
    ADD ESP,0x4                         ; 0054d833
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d836
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0054d839
    JL 0x0054d855                       ; 0054d840
        ;   XREF to: 0054d855 (CONDITIONAL_JUMP)  ; LAB_0054d855
    PUSH EBX                            ; 0054d842
    PUSH 0xff                           ; 0054d843
    LEA EAX,[ESP + 0x8]                 ; 0054d848
    PUSH EAX                            ; 0054d84c
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d84d
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d852
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d855
        ;   Label: LAB_0054d855
    ADD EAX,0x19a2c                     ; 0054d858
    PUSH EAX                            ; 0054d85d
    PUSH 0x5f0561                       ; 0054d85e | DAT_005f0561
    PUSH EBX                            ; 0054d863
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d864
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d869
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d86c
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 0054d86f
    XOR EDI,EDI                         ; 0054d875
    TEST EDX,EDX                        ; 0054d877
    JLE 0x0054d8a0                      ; 0054d879
        ;   XREF to: 0054d8a0 (CONDITIONAL_JUMP)  ; LAB_0054d8a0
    LEA ESI,[EAX + 0x19a30]             ; 0054d87b
    PUSH EBX                            ; 0054d881
        ;   Label: LAB_0054d881
    PUSH ESI                            ; 0054d882
    CALL core_setutil.cpp_C3DSLight_load_FUN_0055c800 ; 0054d883
        ;   XREF to: 0055c800 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_load_FUN_0055c800(C3DSLight * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0054d888
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d88b
    INC EDI                             ; 0054d88e
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0054d88f
    ADD ESI,0x1898                      ; 0054d895
    CMP EDI,ECX                         ; 0054d89b
    JL 0x0054d881                       ; 0054d89d
        ;   XREF to: 0054d881 (CONDITIONAL_JUMP)  ; LAB_0054d881
    NOP                                 ; 0054d89f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d8a0
        ;   Label: LAB_0054d8a0
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0054d8a3
    JL 0x0054d8bf                       ; 0054d8aa
        ;   XREF to: 0054d8bf (CONDITIONAL_JUMP)  ; LAB_0054d8bf
    PUSH EBX                            ; 0054d8ac
    PUSH 0xff                           ; 0054d8ad
    LEA EAX,[ESP + 0x8]                 ; 0054d8b2
    PUSH EAX                            ; 0054d8b6
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d8b7
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d8bc
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054d8bf
        ;   Label: LAB_0054d8bf
    PUSH EDI                            ; 0054d8c2
    PUSH 0x5f0565                       ; 0054d8c3 | DAT_005f0565
    PUSH EBX                            ; 0054d8c8
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d8c9
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d8ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d8d1
    MOV EDX,dword ptr [EAX]             ; 0054d8d4
    XOR EDI,EDI                         ; 0054d8d6
    TEST EDX,EDX                        ; 0054d8d8
    JLE 0x0054d900                      ; 0054d8da
        ;   XREF to: 0054d900 (CONDITIONAL_JUMP)  ; LAB_0054d900
    LEA ESI,[EAX + 0x4]                 ; 0054d8dc
    PUSH EBX                            ; 0054d8df
        ;   Label: LAB_0054d8df
    PUSH ESI                            ; 0054d8e0
    CALL core_setutil.cpp_C3DSCamera_load_FUN_0055c1b0 ; 0054d8e1
        ;   XREF to: 0055c1b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_load_FUN_0055c1b0(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0054d8e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d8e9
    INC EDI                             ; 0054d8ec
    MOV ECX,dword ptr [EAX]             ; 0054d8ed
    ADD ESI,0x1a4                       ; 0054d8ef
    CMP EDI,ECX                         ; 0054d8f5
    JL 0x0054d8df                       ; 0054d8f7
        ;   XREF to: 0054d8df (CONDITIONAL_JUMP)  ; LAB_0054d8df
    LEA EAX,[EAX]                       ; 0054d8f9
    NOP                                 ; 0054d8ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d900
        ;   Label: LAB_0054d900
    CMP dword ptr [EAX + 0x15acc0],0x0  ; 0054d903
    JLE 0x0054e17b                      ; 0054d90a
        ;   XREF to: 0054e17b (CONDITIONAL_JUMP)  ; LAB_0054e17b
    PUSH EBX                            ; 0054d910
    PUSH 0xff                           ; 0054d911
    LEA EAX,[ESP + 0x8]                 ; 0054d916
    PUSH EAX                            ; 0054d91a
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054d91b
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054d920
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d923
    ADD EAX,0x15aed0                    ; 0054d926
    PUSH EAX                            ; 0054d92b
    PUSH 0x5f0569                       ; 0054d92c | DAT_005f0569
    PUSH EBX                            ; 0054d931
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d932
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d937
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d93a
    ADD EAX,0x15aed4                    ; 0054d93d
    PUSH EAX                            ; 0054d942
    PUSH 0x5f056d                       ; 0054d943 | DAT_005f056d
    PUSH EBX                            ; 0054d948
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d949
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054d94e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d951
    MOV EDI,dword ptr [EAX + 0x15aed4]  ; 0054d954
    XOR ESI,ESI                         ; 0054d95a
    TEST EDI,EDI                        ; 0054d95c
    JLE 0x0054daf0                      ; 0054d95e
        ;   XREF to: 0054daf0 (CONDITIONAL_JUMP)  ; LAB_0054daf0
    ADD EAX,0x15aed8                    ; 0054d964
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0054d969
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d970
    ADD EAX,0x15af18                    ; 0054d973
    MOV dword ptr [ESP + 0x31c],EAX     ; 0054d978
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d97f
    ADD EAX,0x15aef0                    ; 0054d982
    MOV dword ptr [ESP + 0x2fc],EAX     ; 0054d987
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d98e
    ADD EAX,0x15aee4                    ; 0054d991
    MOV dword ptr [ESP + 0x318],EAX     ; 0054d996
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d99d
    ADD EAX,0x15aee8                    ; 0054d9a0
    MOV dword ptr [ESP + 0x304],EAX     ; 0054d9a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d9ac
    ADD EAX,0x15aeec                    ; 0054d9af
    MOV dword ptr [ESP + 0x300],EAX     ; 0054d9b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d9bb
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054d9be
    ADD EAX,0x15aee0                    ; 0054d9c1
    ADD EDI,0x15aedc                    ; 0054d9c6
    MOV dword ptr [ESP + 0x30c],EAX     ; 0054d9cc
    IMUL EAX,ESI,0x44                   ; 0054d9d3
        ;   Label: LAB_0054d9d3
    MOV ECX,dword ptr [ESP + 0x30c]     ; 0054d9d6
    PUSH ECX                            ; 0054d9dd
    MOV EDX,dword ptr [ESP + 0x2f0]     ; 0054d9de
    PUSH EDI                            ; 0054d9e5
    ADD EAX,EDX                         ; 0054d9e6
    PUSH EAX                            ; 0054d9e8
    PUSH 0x5f0571                       ; 0054d9e9 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0054d9ee
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054d9ef
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0054d9f4
    MOV EAX,dword ptr [ESP + 0x300]     ; 0054d9f7
    PUSH EAX                            ; 0054d9fe
    MOV EDX,dword ptr [ESP + 0x308]     ; 0054d9ff
    PUSH EDX                            ; 0054da06
    MOV ECX,dword ptr [ESP + 0x320]     ; 0054da07
    PUSH ECX                            ; 0054da0e
    PUSH 0x5f057b                       ; 0054da0f | = "%f,%f,%f\n"
    PUSH EBX                            ; 0054da14
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054da15
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0054da1a
    LEA EAX,[ESP + 0x2d8]               ; 0054da1d
    PUSH EAX                            ; 0054da24
    LEA EAX,[ESP + 0x2e0]               ; 0054da25
    PUSH EAX                            ; 0054da2c
    LEA EAX,[ESP + 0x2dc]               ; 0054da2d
    PUSH EAX                            ; 0054da34
    PUSH 0x5f0585                       ; 0054da35 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0054da3a
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054da3b
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0054da40
    LEA EAX,[ESP + 0x2d4]               ; 0054da43
    PUSH EAX                            ; 0054da4a
    MOV EAX,dword ptr [ESP + 0x300]     ; 0054da4b
    PUSH EAX                            ; 0054da52
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0054da53
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0054da58
    MOV EDX,dword ptr [ESP + 0x31c]     ; 0054da5b
    PUSH EDX                            ; 0054da62
    PUSH 0x5f058f                       ; 0054da63 | DAT_005f058f
    PUSH EBX                            ; 0054da68
    ADD EDI,0x44                        ; 0054da69
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054da6c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054da71
    INC ESI                             ; 0054da74
    MOV ECX,dword ptr [ESP + 0x31c]     ; 0054da75
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 0054da7c
    MOV EDX,dword ptr [ESP + 0x318]     ; 0054da83
    ADD ECX,0x44                        ; 0054da8a
    ADD EAX,0x44                        ; 0054da8d
    ADD EDX,0x44                        ; 0054da90
    MOV dword ptr [ESP + 0x31c],ECX     ; 0054da93
    MOV dword ptr [ESP + 0x2fc],EAX     ; 0054da9a
    MOV dword ptr [ESP + 0x318],EDX     ; 0054daa1
    MOV ECX,dword ptr [ESP + 0x304]     ; 0054daa8
    MOV EAX,dword ptr [ESP + 0x300]     ; 0054daaf
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0054dab6
    ADD EAX,0x44                        ; 0054dabd
    ADD ECX,0x44                        ; 0054dac0
    MOV dword ptr [ESP + 0x300],EAX     ; 0054dac3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054daca
    ADD EDX,0x44                        ; 0054dacd
    MOV dword ptr [ESP + 0x304],ECX     ; 0054dad0
    MOV ECX,dword ptr [EAX + 0x15aed4]  ; 0054dad7
    MOV dword ptr [ESP + 0x30c],EDX     ; 0054dadd
    CMP ESI,ECX                         ; 0054dae4
    JL 0x0054d9d3                       ; 0054dae6
        ;   XREF to: 0054d9d3 (CONDITIONAL_JUMP)  ; LAB_0054d9d3
    LEA EAX,[EAX]                       ; 0054daec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054daf0
        ;   Label: LAB_0054daf0
    CMP dword ptr [EAX + 0x15acc0],0x3  ; 0054daf3
    JL 0x0054e25f                       ; 0054dafa
        ;   XREF to: 0054e25f (CONDITIONAL_JUMP)  ; LAB_0054e25f
    PUSH EBX                            ; 0054db00
    PUSH 0xff                           ; 0054db01
    LEA EAX,[ESP + 0x8]                 ; 0054db06
    PUSH EAX                            ; 0054db0a
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054db0b
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054db10
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054db13
    ADD EAX,0x15f694                    ; 0054db16
    PUSH EAX                            ; 0054db1b
    PUSH 0x5f05b0                       ; 0054db1c | DAT_005f05b0
    PUSH EBX                            ; 0054db21
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054db22
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054db27
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054db2a
        ;   Label: LAB_0054db2a
    CMP dword ptr [EAX + 0x15acc0],0x18 ; 0054db2d
    JL 0x0054e362                       ; 0054db34
        ;   XREF to: 0054e362 (CONDITIONAL_JUMP)  ; LAB_0054e362
    PUSH EBX                            ; 0054db3a
    PUSH 0xff                           ; 0054db3b
    LEA EAX,[ESP + 0x8]                 ; 0054db40
    PUSH EAX                            ; 0054db44
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054db45
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054db4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054db4d
    ADD EAX,0x15ac8c                    ; 0054db50
    PUSH EAX                            ; 0054db55
    PUSH 0x5f05d8                       ; 0054db56 | DAT_005f05d8
    PUSH EBX                            ; 0054db5b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054db5c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054db61
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054db64
        ;   Label: LAB_0054db64
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0054db67
    CMP EDX,0x4                         ; 0054db6d
    JL 0x0054db81                       ; 0054db70
        ;   XREF to: 0054db81 (CONDITIONAL_JUMP)  ; LAB_0054db81
    CMP EDX,0x9                         ; 0054db72
    JG 0x0054db81                       ; 0054db75
        ;   XREF to: 0054db81 (CONDITIONAL_JUMP)  ; LAB_0054db81
    PUSH EBX                            ; 0054db77
    PUSH EAX                            ; 0054db78
    CALL core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_0055b8f0 ; 0054db79
        ;   XREF to: 0055b8f0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_0055b8f0(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0054db7e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054db81
        ;   Label: LAB_0054db81
    CMP dword ptr [EAX + 0x15acc0],0x5  ; 0054db84
    JL 0x0054e371                       ; 0054db8b
        ;   XREF to: 0054e371 (CONDITIONAL_JUMP)  ; LAB_0054e371
    PUSH EBX                            ; 0054db91
    PUSH 0xff                           ; 0054db92
    LEA EAX,[ESP + 0x8]                 ; 0054db97
    PUSH EAX                            ; 0054db9b
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054db9c
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054dba1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dba4
    ADD EAX,0x15b428                    ; 0054dba7
    PUSH EAX                            ; 0054dbac
    PUSH 0x5f05dc                       ; 0054dbad | DAT_005f05dc
    PUSH EBX                            ; 0054dbb2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054dbb3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054dbb8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dbbb
    MOV EDX,dword ptr [EAX + 0x15b428]  ; 0054dbbe
    XOR ESI,ESI                         ; 0054dbc4
    TEST EDX,EDX                        ; 0054dbc6
    JLE 0x0054dd20                      ; 0054dbc8
        ;   XREF to: 0054dd20 (CONDITIONAL_JUMP)  ; LAB_0054dd20
    ADD EAX,0x15b42c                    ; 0054dbce
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0054dbd3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dbda
    ADD EAX,0x15b444                    ; 0054dbdd
    MOV dword ptr [ESP + 0x310],EAX     ; 0054dbe2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dbe9
    ADD EAX,0x15b43c                    ; 0054dbec
    MOV dword ptr [ESP + 0x308],EAX     ; 0054dbf1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dbf8
    ADD EAX,0x15b440                    ; 0054dbfb
    MOV dword ptr [ESP + 0x314],EAX     ; 0054dc00
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dc07
    ADD EAX,0x15b430                    ; 0054dc0a
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0054dc0f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dc16
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054dc19
    ADD EAX,0x15b434                    ; 0054dc1c
    ADD EDI,0x15b438                    ; 0054dc21
    MOV dword ptr [ESP + 0x2f8],EAX     ; 0054dc27
    IMUL EAX,ESI,0x44                   ; 0054dc2e
        ;   Label: LAB_0054dc2e
    MOV EDX,dword ptr [ESP + 0x2f8]     ; 0054dc31
    MOV ECX,dword ptr [ESP + 0x2f0]     ; 0054dc38
    PUSH EDX                            ; 0054dc3f
    ADD EAX,ECX                         ; 0054dc40
    MOV ECX,dword ptr [ESP + 0x2f8]     ; 0054dc42
    PUSH ECX                            ; 0054dc49
    PUSH EAX                            ; 0054dc4a
    PUSH 0x5f05e0                       ; 0054dc4b | = "%f,%f,%f\n"
    PUSH EBX                            ; 0054dc50
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054dc51
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0054dc56
    MOV EAX,dword ptr [ESP + 0x314]     ; 0054dc59
    PUSH EAX                            ; 0054dc60
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0054dc61
    PUSH EDX                            ; 0054dc68
    PUSH EDI                            ; 0054dc69
    PUSH 0x5f05ea                       ; 0054dc6a | = "%f,%f,%f\n"
    PUSH EBX                            ; 0054dc6f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054dc70
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0054dc75
    LEA EAX,[ESP + 0x2cc]               ; 0054dc78
    PUSH EAX                            ; 0054dc7f
    LEA EAX,[ESP + 0x2d4]               ; 0054dc80
    PUSH EAX                            ; 0054dc87
    LEA EAX,[ESP + 0x2d0]               ; 0054dc88
    PUSH EAX                            ; 0054dc8f
    PUSH 0x5f05f4                       ; 0054dc90 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0054dc95
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054dc96
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0054dc9b
    LEA EAX,[ESP + 0x2c8]               ; 0054dc9e
    PUSH EAX                            ; 0054dca5
    MOV ECX,dword ptr [ESP + 0x314]     ; 0054dca6
    PUSH ECX                            ; 0054dcad
    INC ESI                             ; 0054dcae
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0054dcaf
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0054dcb4
    ADD EDI,0x44                        ; 0054dcb7
    MOV EAX,dword ptr [ESP + 0x310]     ; 0054dcba
    MOV EDX,dword ptr [ESP + 0x308]     ; 0054dcc1
    MOV ECX,dword ptr [ESP + 0x314]     ; 0054dcc8
    ADD EAX,0x44                        ; 0054dccf
    ADD EDX,0x44                        ; 0054dcd2
    ADD ECX,0x44                        ; 0054dcd5
    MOV dword ptr [ESP + 0x310],EAX     ; 0054dcd8
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 0054dcdf
    MOV dword ptr [ESP + 0x308],EDX     ; 0054dce6
    ADD EAX,0x44                        ; 0054dced
    MOV EDX,dword ptr [ESP + 0x2f8]     ; 0054dcf0
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0054dcf7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dcfe
    MOV dword ptr [ESP + 0x314],ECX     ; 0054dd01
    ADD EDX,0x44                        ; 0054dd08
    MOV ECX,dword ptr [EAX + 0x15b428]  ; 0054dd0b
    MOV dword ptr [ESP + 0x2f8],EDX     ; 0054dd11
    CMP ESI,ECX                         ; 0054dd18
    JL 0x0054dc2e                       ; 0054dd1a
        ;   XREF to: 0054dc2e (CONDITIONAL_JUMP)  ; LAB_0054dc2e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054dd20
        ;   Label: LAB_0054dd20
    PUSH ESI                            ; 0054dd23
    CALL core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10 ; 0054dd24
        ;   XREF to: 0055bf10 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054dd29
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dd2c
        ;   Label: LAB_0054dd2c
    CMP dword ptr [EAX + 0x15acc0],0xe  ; 0054dd2f
    JNZ 0x0054dd5e                      ; 0054dd36
        ;   XREF to: 0054dd5e (CONDITIONAL_JUMP)  ; LAB_0054dd5e
    PUSH EBX                            ; 0054dd38
    PUSH 0xff                           ; 0054dd39
    LEA EAX,[ESP + 0x8]                 ; 0054dd3e
    PUSH EAX                            ; 0054dd42
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054dd43
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054dd48
    PUSH EBX                            ; 0054dd4b
    PUSH 0xff                           ; 0054dd4c
    LEA EAX,[ESP + 0x8]                 ; 0054dd51
    PUSH EAX                            ; 0054dd55
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054dd56
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054dd5b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dd5e
        ;   Label: LAB_0054dd5e
    CMP dword ptr [EAX + 0x15acc0],0x14 ; 0054dd61
    JL 0x0054ddb0                       ; 0054dd68
        ;   XREF to: 0054ddb0 (CONDITIONAL_JUMP)  ; LAB_0054ddb0
    PUSH EBX                            ; 0054dd6a
    PUSH 0xff                           ; 0054dd6b
    LEA EAX,[ESP + 0x8]                 ; 0054dd70
    PUSH EAX                            ; 0054dd74
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054dd75
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0054dd7a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dd7d
    MOV ECX,dword ptr [EAX]             ; 0054dd80
    XOR ESI,ESI                         ; 0054dd82
    TEST ECX,ECX                        ; 0054dd84
    JLE 0x0054ddb0                      ; 0054dd86
        ;   XREF to: 0054ddb0 (CONDITIONAL_JUMP)  ; LAB_0054ddb0
    LEA EDI,[EAX + 0x4]                 ; 0054dd88
    PUSH EBX                            ; 0054dd8b
        ;   Label: LAB_0054dd8b
    PUSH EDI                            ; 0054dd8c
    CALL core_setutil.cpp_C3DSCamera_loadPVS_FUN_0055c540 ; 0054dd8d
        ;   XREF to: 0055c540 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_loadPVS_FUN_0055c540(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0054dd92
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054dd95
    INC ESI                             ; 0054dd98
    MOV EDX,dword ptr [EAX]             ; 0054dd99
    ADD EDI,0x1a4                       ; 0054dd9b
    CMP ESI,EDX                         ; 0054dda1
    JL 0x0054dd8b                       ; 0054dda3
        ;   XREF to: 0054dd8b (CONDITIONAL_JUMP)  ; LAB_0054dd8b
    LEA EAX,[EAX]                       ; 0054dda5
    LEA EDX,[EDX]                       ; 0054ddab
    MOV EBX,EBX                         ; 0054ddae
    PUSH EBX                            ; 0054ddb0
        ;   Label: LAB_0054ddb0
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0054ddb1
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0054ddb6
    PUSH 0x0                            ; 0054ddb9
    PUSH 0x5f05fe                       ; 0054ddbb | = "Loading set geometry"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0054ddc0
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0054ddc5
    PUSH EAX                            ; 0054ddc8
    MOV ECX,dword ptr [0x0061f2e0]      ; 0054ddc9 | DAT_0061f2e0
    PUSH ECX                            ; 0054ddcf
    CALL core_level.cpp_CLevelLoader_update_FUN_004fe9c0 ; 0054ddd0
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004fe9c0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 0054ddd5
    LEA EAX,[ESP + 0x200]               ; 0054ddd8
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054dddf
    PUSH EAX                            ; 0054dde2
    ADD EBX,0x14d0f0                    ; 0054dde3
    PUSH EBX                            ; 0054dde9
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054ddea
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054ddef
    TEST EAX,EAX                        ; 0054ddf2
    JZ 0x0054e3aa                       ; 0054ddf4
        ;   XREF to: 0054e3aa (CONDITIONAL_JUMP)  ; LAB_0054e3aa
    LEA ESI,[ESP + 0x200]               ; 0054ddfa
    MOV EDI,EBX                         ; 0054de01
    PUSH EDI                            ; 0054de03
    MOV AL,byte ptr [ESI]               ; 0054de04
        ;   Label: LAB_0054de04
    MOV byte ptr [EDI],AL               ; 0054de06
    CMP AL,0x0                          ; 0054de08
    JZ 0x0054de1c                       ; 0054de0a
        ;   XREF to: 0054de1c (CONDITIONAL_JUMP)  ; LAB_0054de1c
    MOV AL,byte ptr [ESI + 0x1]         ; 0054de0c
    ADD ESI,0x2                         ; 0054de0f
    MOV byte ptr [EDI + 0x1],AL         ; 0054de12
    ADD EDI,0x2                         ; 0054de15
    CMP AL,0x0                          ; 0054de18
    JNZ 0x0054de04                      ; 0054de1a
        ;   XREF to: 0054de04 (CONDITIONAL_JUMP)  ; LAB_0054de04
    POP EDI                             ; 0054de1c
        ;   Label: LAB_0054de1c
    PUSH 0x5f0613                       ; 0054de1d | DAT_005f0613
    PUSH EBX                            ; 0054de22
    PUSH 0x5f0616                       ; 0054de23 | DAT_005f0616
    CALL engine_dosio.cpp_FUN_00479180  ; 0054de28
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0054de2d
    TEST EAX,EAX                        ; 0054de30
    JZ 0x0054e380                       ; 0054de32
        ;   XREF to: 0054e380 (CONDITIONAL_JUMP)  ; LAB_0054e380
    PUSH EAX                            ; 0054de38
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0054de39
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0054de3e
    PUSH EBX                            ; 0054de41
    PUSH 0x1fe5c1c                      ; 0054de42 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0 ; 0054de47
        ;   XREF to: 0048afa0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0(CDemonRaytrace * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054de4c
    CALL core_path.cpp_resetAllPathMaps_FUN_00535280 ; 0054de4f
        ;   XREF to: 00535280 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_00535280()
        ;   Label: LAB_0054de4f
    PUSH 0x0                            ; 0054de54
        ;   Label: LAB_0054de54
    PUSH 0x5f0642                       ; 0054de56 | = "Loading thumbs"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0054de5b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0054de60
    PUSH EAX                            ; 0054de63
    MOV ESI,dword ptr [0x0061f2e0]      ; 0054de64 | DAT_0061f2e0
    PUSH ESI                            ; 0054de6a
    CALL core_level.cpp_CLevelLoader_update_FUN_004fe9c0 ; 0054de6b
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004fe9c0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 0054de70
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054de73
    LEA EDI,[ESP + 0x264]               ; 0054de76
    ADD ESI,0x14d0f0                    ; 0054de7d
    MOV DL,0x2e                         ; 0054de83
    PUSH EDI                            ; 0054de85
    MOV AL,byte ptr [ESI]               ; 0054de86
        ;   Label: LAB_0054de86
    MOV byte ptr [EDI],AL               ; 0054de88
    CMP AL,0x0                          ; 0054de8a
    JZ 0x0054de9e                       ; 0054de8c
        ;   XREF to: 0054de9e (CONDITIONAL_JUMP)  ; LAB_0054de9e
    MOV AL,byte ptr [ESI + 0x1]         ; 0054de8e
    ADD ESI,0x2                         ; 0054de91
    MOV byte ptr [EDI + 0x1],AL         ; 0054de94
    ADD EDI,0x2                         ; 0054de97
    CMP AL,0x0                          ; 0054de9a
    JNZ 0x0054de86                      ; 0054de9c
        ;   XREF to: 0054de86 (CONDITIONAL_JUMP)  ; LAB_0054de86
    POP EDI                             ; 0054de9e
        ;   Label: LAB_0054de9e
    LEA ESI,[ESP + 0x264]               ; 0054de9f
    MOV AL,byte ptr [ESI]               ; 0054dea6
        ;   Label: LAB_0054dea6
    CMP AL,DL                           ; 0054dea8
    JZ 0x0054debe                       ; 0054deaa
        ;   XREF to: 0054debe (CONDITIONAL_JUMP)  ; LAB_0054debe
    CMP AL,0x0                          ; 0054deac
    JZ 0x0054debc                       ; 0054deae
        ;   XREF to: 0054debc (CONDITIONAL_JUMP)  ; LAB_0054debc
    INC ESI                             ; 0054deb0
    MOV AL,byte ptr [ESI]               ; 0054deb1
    CMP AL,DL                           ; 0054deb3
    JZ 0x0054debe                       ; 0054deb5
        ;   XREF to: 0054debe (CONDITIONAL_JUMP)  ; LAB_0054debe
    INC ESI                             ; 0054deb7
    CMP AL,0x0                          ; 0054deb8
    JNZ 0x0054dea6                      ; 0054deba
        ;   XREF to: 0054dea6 (CONDITIONAL_JUMP)  ; LAB_0054dea6
    SUB ESI,ESI                         ; 0054debc
        ;   Label: LAB_0054debc
    MOV EDI,ESI                         ; 0054debe
        ;   Label: LAB_0054debe
    TEST ESI,ESI                        ; 0054dec0
    JNZ 0x0054dee7                      ; 0054dec2
        ;   XREF to: 0054dee7 (CONDITIONAL_JUMP)  ; LAB_0054dee7
    LEA ESI,[ESP + 0x264]               ; 0054dec4
    XOR DL,DL                           ; 0054decb
    MOV AL,byte ptr [ESI]               ; 0054decd
        ;   Label: LAB_0054decd
    CMP AL,DL                           ; 0054decf
    JZ 0x0054dee5                       ; 0054ded1
        ;   XREF to: 0054dee5 (CONDITIONAL_JUMP)  ; LAB_0054dee5
    CMP AL,0x0                          ; 0054ded3
    JZ 0x0054dee3                       ; 0054ded5
        ;   XREF to: 0054dee3 (CONDITIONAL_JUMP)  ; LAB_0054dee3
    INC ESI                             ; 0054ded7
    MOV AL,byte ptr [ESI]               ; 0054ded8
    CMP AL,DL                           ; 0054deda
    JZ 0x0054dee5                       ; 0054dedc
        ;   XREF to: 0054dee5 (CONDITIONAL_JUMP)  ; LAB_0054dee5
    INC ESI                             ; 0054dede
    CMP AL,0x0                          ; 0054dedf
    JNZ 0x0054decd                      ; 0054dee1
        ;   XREF to: 0054decd (CONDITIONAL_JUMP)  ; LAB_0054decd
    SUB ESI,ESI                         ; 0054dee3
        ;   Label: LAB_0054dee3
    MOV EDI,ESI                         ; 0054dee5
        ;   Label: LAB_0054dee5
    MOV ESI,0x5f0651                    ; 0054dee7 | DAT_005f0651
        ;   Label: LAB_0054dee7
    PUSH EDI                            ; 0054deec
    MOV AL,byte ptr [ESI]               ; 0054deed | DAT_005f0651 | DAT_005f0653
        ;   Label: LAB_0054deed
    MOV byte ptr [EDI],AL               ; 0054deef
    CMP AL,0x0                          ; 0054def1
    JZ 0x0054df05                       ; 0054def3
        ;   XREF to: 0054df05 (CONDITIONAL_JUMP)  ; LAB_0054df05
    MOV AL,byte ptr [ESI + 0x1]         ; 0054def5 | DAT_005f0652 | DAT_005f0654
    ADD ESI,0x2                         ; 0054def8
    MOV byte ptr [EDI + 0x1],AL         ; 0054defb
    ADD EDI,0x2                         ; 0054defe
    CMP AL,0x0                          ; 0054df01
    JNZ 0x0054deed                      ; 0054df03
        ;   XREF to: 0054deed (CONDITIONAL_JUMP)  ; LAB_0054deed
    POP EDI                             ; 0054df05
        ;   Label: LAB_0054df05
    LEA EAX,[ESP + 0x264]               ; 0054df06
    PUSH EAX                            ; 0054df0d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054df0e
    PUSH EDI                            ; 0054df11
    CALL core_setdir.cpp_CDemonSet_refreshThumbs_FUN_0055b220 ; 0054df12
        ;   XREF to: 0055b220 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_refreshThumbs_FUN_0055b220(CDemonSet * this_ptr, char * filename)
    MOV EDX,dword ptr [EDI + 0x15aca4]  ; 0054df17
    ADD ESP,0x8                         ; 0054df1d
    TEST EDX,EDX                        ; 0054df20
    JZ 0x0054df38                       ; 0054df22
        ;   XREF to: 0054df38 (CONDITIONAL_JUMP)  ; LAB_0054df38
    LEA EAX,[EDI + 0x15aca8]            ; 0054df24
    PUSH EAX                            ; 0054df2a
    PUSH 0x1fe5fac                      ; 0054df2b
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 ; 0054df30
        ;   XREF to: 004668a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054df35
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054df38
        ;   Label: LAB_0054df38
    MOV ECX,dword ptr [EAX]             ; 0054df3b
    XOR ESI,ESI                         ; 0054df3d
    TEST ECX,ECX                        ; 0054df3f
    JLE 0x0054df80                      ; 0054df41
        ;   XREF to: 0054df80 (CONDITIONAL_JUMP)  ; LAB_0054df80
    MOV EBX,EAX                         ; 0054df43
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054df45
    FLD float ptr [EAX + 0x14d150]      ; 0054df48
        ;   Label: LAB_0054df48
    MOV dword ptr [EBX + 0x150],0x0     ; 0054df4e
    MOV dword ptr [EBX + 0x1a4],0x1     ; 0054df58
    INC ESI                             ; 0054df62
    FSTP float ptr [EBX + 0x14c]        ; 0054df63
    MOV EDI,dword ptr [EAX]             ; 0054df69
    ADD EBX,0x1a4                       ; 0054df6b
    CMP ESI,EDI                         ; 0054df71
    JL 0x0054df48                       ; 0054df73
        ;   XREF to: 0054df48 (CONDITIONAL_JUMP)  ; LAB_0054df48
    LEA EAX,[EAX]                       ; 0054df75
    LEA EDX,[EDX]                       ; 0054df7b
    MOV EBX,EBX                         ; 0054df7e
    MOV dword ptr [0x02026348],0x1      ; 0054df80 | DAT_02026348
        ;   Label: LAB_0054df80
    MOV ESP,EBP                         ; 0054df8a
    POP EBP                             ; 0054df8c
    POP EDI                             ; 0054df8d
    POP ESI                             ; 0054df8e
    POP EBX                             ; 0054df8f
    RET                                 ; 0054df90
    PUSH ESI                            ; 0054df91
        ;   Label: LAB_0054df91
    MOV EDI,0x5f049a                    ; 0054df92 | = "..\\core\\set.cpp"
    MOV EAX,0x15c                       ; 0054df97
    PUSH 0x5f04aa                       ; 0054df9c | = "CDemonSet::Unable to open %s"
    MOV dword ptr [0x01d1d400],EDI      ; 0054dfa1 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0054dfa7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054dfac
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0054dfb1
    JMP 0x0054d41a                      ; 0054dfb4
        ;   XREF to: 0054d41a (UNCONDITIONAL_JUMP)  ; LAB_0054d41a
    MOV dword ptr [EAX + 0x14d154],0xbf800000 ; 0054dfb9
        ;   Label: LAB_0054dfb9
    MOV dword ptr [EAX + 0x14d158],0xbf800000 ; 0054dfc3
    MOV dword ptr [EAX + 0x14d15c],0xbf800000 ; 0054dfcd
    FLD float ptr [ESI + 0x4]           ; 0054dfd7
    FMUL ST0                            ; 0054dfda
    FLD float ptr [ESI]                 ; 0054dfdc
    FMUL ST0                            ; 0054dfde
    FADDP                               ; 0054dfe0
    FLD float ptr [ESI + 0x8]           ; 0054dfe2
    FMUL ST0                            ; 0054dfe5
    FADDP                               ; 0054dfe7
    FSQRT                               ; 0054dfe9
    FLDZ                                ; 0054dfeb
    FXCH                                ; 0054dfed
    FSTP float ptr [ESP + 0x2e8]        ; 0054dfef
    FCOMP float ptr [ESP + 0x2e8]       ; 0054dff6
    FNSTSW AX                           ; 0054dffd
    SAHF                                ; 0054dfff
    JNC 0x0054e039                      ; 0054e000
        ;   XREF to: 0054e039 (CONDITIONAL_JUMP)  ; LAB_0054e039
    FLD1                                ; 0054e002
    FLD float ptr [ESI]                 ; 0054e004
    FXCH                                ; 0054e006
    FDIV float ptr [ESP + 0x2e8]        ; 0054e008
    FXCH                                ; 0054e00f
    FMUL ST1                            ; 0054e011
    FLD float ptr [ESI + 0x4]           ; 0054e013
    FMUL ST2                            ; 0054e016
    FLD float ptr [ESI + 0x8]           ; 0054e018
    FMULP ST3                           ; 0054e01b
    FXCH                                ; 0054e01d
    FSTP float ptr [ESI]                ; 0054e01f
    FSTP float ptr [ESI + 0x4]          ; 0054e021
    FSTP float ptr [ESI + 0x8]          ; 0054e024
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e027
    MOV dword ptr [EAX + 0x14d160],0x0  ; 0054e02a
    JMP 0x0054d4c8                      ; 0054e034
        ;   XREF to: 0054d4c8 (UNCONDITIONAL_JUMP)  ; LAB_0054d4c8
    MOV dword ptr [ESI + 0x8],0x0       ; 0054e039
        ;   Label: LAB_0054e039
    MOV EAX,dword ptr [ESI + 0x8]       ; 0054e040
    MOV dword ptr [ESI + 0x4],EAX       ; 0054e043
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054e046
    MOV dword ptr [ESI],EAX             ; 0054e049
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e04b
    MOV dword ptr [EAX + 0x14d160],0x0  ; 0054e04e
    JMP 0x0054d4c8                      ; 0054e058
        ;   XREF to: 0054d4c8 (UNCONDITIONAL_JUMP)  ; LAB_0054d4c8
    PUSH EDI                            ; 0054e05d
        ;   Label: LAB_0054e05d
    PUSH EBX                            ; 0054e05e
    PUSH ESI                            ; 0054e05f
    CALL core_dcamera.cpp_loadCameraFog_FUN_00454ab0 ; 0054e060
        ;   XREF to: 00454ab0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_loadCameraFog_FUN_00454ab0(SFog * fog, _FILE * file_handle, int file_version)
    ADD ESP,0xc                         ; 0054e065
    JMP 0x0054d5d6                      ; 0054e068
        ;   XREF to: 0054d5d6 (UNCONDITIONAL_JUMP)  ; LAB_0054d5d6
    MOV EDI,0x2000                      ; 0054e06d
        ;   Label: LAB_0054e06d
    MOV ESI,0x3e800000                  ; 0054e072
    XOR EAX,EAX                         ; 0054e077
    MOV dword ptr [0x00625c98],EDI      ; 0054e079 | DAT_00625c98
    MOV [0x02c8afc0],EAX                ; 0054e07f | DAT_02c8afc0
    MOV [0x02c8afc4],EAX                ; 0054e084 | DAT_02c8afc4
    MOV dword ptr [0x00625c94],ESI      ; 0054e089 | DAT_00625c94
    JMP 0x0054d649                      ; 0054e08f
        ;   XREF to: 0054d649 (UNCONDITIONAL_JUMP)  ; LAB_0054d649
    PUSH 0x4                            ; 0054e094
        ;   Label: LAB_0054e094
    PUSH 0x5f052b                       ; 0054e096 | DAT_005f052b
    LEA EAX,[ESP + 0x208]               ; 0054e09b
    PUSH EAX                            ; 0054e0a2
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e0a3
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e0a8
    TEST EAX,EAX                        ; 0054e0ab
    JNZ 0x0054e0bf                      ; 0054e0ad
        ;   XREF to: 0054e0bf (CONDITIONAL_JUMP)  ; LAB_0054e0bf
    MOV EAX,[0x00625c90]                ; 0054e0af | g_CWaterPtr
    MOV dword ptr [EAX],0x1             ; 0054e0b4 | g_CWaterInstance
    JMP 0x0054d6b4                      ; 0054e0ba
        ;   XREF to: 0054d6b4 (UNCONDITIONAL_JUMP)  ; LAB_0054d6b4
    MOV EAX,[0x00625c90]                ; 0054e0bf | g_CWaterPtr
        ;   Label: LAB_0054e0bf
    MOV dword ptr [EAX],0x0             ; 0054e0c4 | g_CWaterInstance
    JMP 0x0054d6b4                      ; 0054e0ca
        ;   XREF to: 0054d6b4 (UNCONDITIONAL_JUMP)  ; LAB_0054d6b4
    MOV dword ptr [EAX + 0x161640],0x1  ; 0054e0cf
        ;   Label: LAB_0054e0cf
    JMP 0x0054d6ee                      ; 0054e0d9
        ;   XREF to: 0054d6ee (UNCONDITIONAL_JUMP)  ; LAB_0054d6ee
    MOV ESI,0x5f053b                    ; 0054e0de | = "NITESKY.RAW"
        ;   Label: LAB_0054e0de
    PUSH EDI                            ; 0054e0e3
    MOV AL,byte ptr [ESI]               ; 0054e0e4 | = "NITESKY.RAW" | s_NITESKY_RAW_005f053b+2
        ;   Label: LAB_0054e0e4
    MOV byte ptr [EDI],AL               ; 0054e0e6
    CMP AL,0x0                          ; 0054e0e8
    JZ 0x0054e0fc                       ; 0054e0ea
        ;   XREF to: 0054e0fc (CONDITIONAL_JUMP)  ; LAB_0054e0fc
    MOV AL,byte ptr [ESI + 0x1]         ; 0054e0ec | s_NITESKY_RAW_005f053b+1 | s_NITESKY_RAW_005f053b+3
    ADD ESI,0x2                         ; 0054e0ef
    MOV byte ptr [EDI + 0x1],AL         ; 0054e0f2
    ADD EDI,0x2                         ; 0054e0f5
    CMP AL,0x0                          ; 0054e0f8
    JNZ 0x0054e0e4                      ; 0054e0fa
        ;   XREF to: 0054e0e4 (CONDITIONAL_JUMP)  ; LAB_0054e0e4
    POP EDI                             ; 0054e0fc
        ;   Label: LAB_0054e0fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e0fd
    MOV dword ptr [EAX + 0x161664],0x4000 ; 0054e100
    JMP 0x0054d71e                      ; 0054e10a
        ;   XREF to: 0054d71e (UNCONDITIONAL_JUMP)  ; LAB_0054d71e
    MOV ESI,0x5f054e                    ; 0054e10f | DAT_005f054e
        ;   Label: LAB_0054e10f
    MOV dword ptr [EAX + 0x15ae60],0x0  ; 0054e114
    PUSH EDI                            ; 0054e11e
    MOV AL,byte ptr [ESI]               ; 0054e11f | DAT_005f054e | DAT_005f0550
        ;   Label: LAB_0054e11f
    MOV byte ptr [EDI],AL               ; 0054e121
    CMP AL,0x0                          ; 0054e123
    JZ 0x0054e137                       ; 0054e125
        ;   XREF to: 0054e137 (CONDITIONAL_JUMP)  ; LAB_0054e137
    MOV AL,byte ptr [ESI + 0x1]         ; 0054e127 | DAT_005f054f | DAT_005f0551
    ADD ESI,0x2                         ; 0054e12a
    MOV byte ptr [EDI + 0x1],AL         ; 0054e12d
    ADD EDI,0x2                         ; 0054e130
    CMP AL,0x0                          ; 0054e133
    JNZ 0x0054e11f                      ; 0054e135
        ;   XREF to: 0054e11f (CONDITIONAL_JUMP)  ; LAB_0054e11f
    POP EDI                             ; 0054e137
        ;   Label: LAB_0054e137
    JMP 0x0054d764                      ; 0054e138
        ;   XREF to: 0054d764 (UNCONDITIONAL_JUMP)  ; LAB_0054d764
    MOV dword ptr [EAX + 0x161680],0x0  ; 0054e13d
        ;   Label: LAB_0054e13d
    JMP 0x0054d79e                      ; 0054e147
        ;   XREF to: 0054d79e (UNCONDITIONAL_JUMP)  ; LAB_0054d79e
    MOV dword ptr [EAX + 0x15acbc],0x0  ; 0054e14c
        ;   Label: LAB_0054e14c
    JMP 0x0054d7d8                      ; 0054e156
        ;   XREF to: 0054d7d8 (UNCONDITIONAL_JUMP)  ; LAB_0054d7d8
    MOV EAX,[0x00625bc0]                ; 0054e15b | DAT_00625bc0
        ;   Label: LAB_0054e15b
    PUSH EAX                            ; 0054e160
    CALL core_terrain.cpp_CTerrain_free_FUN_0059f3c0 ; 0054e161
        ;   XREF to: 0059f3c0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_free_FUN_0059f3c0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 0054e166
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e169
    MOV dword ptr [EAX + 0x15acb8],0x0  ; 0054e16c
    JMP 0x0054d82f                      ; 0054e176
        ;   XREF to: 0054d82f (UNCONDITIONAL_JUMP)  ; LAB_0054d82f
    PUSH 0x5                            ; 0054e17b
        ;   Label: LAB_0054e17b
    PUSH 0x5f0593                       ; 0054e17d | = "mauso"
    MOV dword ptr [EAX + 0x15aed0],0x0  ; 0054e182
    LEA EAX,[ESP + 0x208]               ; 0054e18c
    PUSH EAX                            ; 0054e193
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e194
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e199
    TEST EAX,EAX                        ; 0054e19c
    JNZ 0x0054e1ad                      ; 0054e19e
        ;   XREF to: 0054e1ad (CONDITIONAL_JUMP)  ; LAB_0054e1ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e1a0
    MOV dword ptr [EAX + 0x15aed0],0x2  ; 0054e1a3
    PUSH 0x4                            ; 0054e1ad
        ;   Label: LAB_0054e1ad
    PUSH 0x5f0599                       ; 0054e1af | DAT_005f0599
    LEA EAX,[ESP + 0x208]               ; 0054e1b4
    PUSH EAX                            ; 0054e1bb
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e1bc
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e1c1
    TEST EAX,EAX                        ; 0054e1c4
    JNZ 0x0054e1d5                      ; 0054e1c6
        ;   XREF to: 0054e1d5 (CONDITIONAL_JUMP)  ; LAB_0054e1d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e1c8
    MOV dword ptr [EAX + 0x15aed0],0x0  ; 0054e1cb
    PUSH 0x5                            ; 0054e1d5
        ;   Label: LAB_0054e1d5
    PUSH 0x5f059e                       ; 0054e1d7 | = "smill"
    LEA EAX,[ESP + 0x208]               ; 0054e1dc
    PUSH EAX                            ; 0054e1e3
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e1e4
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e1e9
    TEST EAX,EAX                        ; 0054e1ec
    JNZ 0x0054e1fd                      ; 0054e1ee
        ;   XREF to: 0054e1fd (CONDITIONAL_JUMP)  ; LAB_0054e1fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e1f0
    MOV dword ptr [EAX + 0x15aed0],0x3  ; 0054e1f3
    PUSH 0x6                            ; 0054e1fd
        ;   Label: LAB_0054e1fd
    PUSH 0x5f05a4                       ; 0054e1ff | = "pier59"
    LEA EAX,[ESP + 0x208]               ; 0054e204
    PUSH EAX                            ; 0054e20b
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e20c
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e211
    TEST EAX,EAX                        ; 0054e214
    JNZ 0x0054e225                      ; 0054e216
        ;   XREF to: 0054e225 (CONDITIONAL_JUMP)  ; LAB_0054e225
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e218
    MOV dword ptr [EAX + 0x15aed0],0x0  ; 0054e21b
    PUSH 0x4                            ; 0054e225
        ;   Label: LAB_0054e225
    PUSH 0x5f05ab                       ; 0054e227 | DAT_005f05ab
    LEA EAX,[ESP + 0x208]               ; 0054e22c
    PUSH EAX                            ; 0054e233
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e234
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e239
    TEST EAX,EAX                        ; 0054e23c
    JNZ 0x0054e24d                      ; 0054e23e
        ;   XREF to: 0054e24d (CONDITIONAL_JUMP)  ; LAB_0054e24d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e240
    MOV dword ptr [EAX + 0x15aed0],0x3  ; 0054e243
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e24d
        ;   Label: LAB_0054e24d
    MOV dword ptr [EAX + 0x15aed4],0x0  ; 0054e250
    JMP 0x0054daf0                      ; 0054e25a
        ;   XREF to: 0054daf0 (UNCONDITIONAL_JUMP)  ; LAB_0054daf0
    PUSH 0x5                            ; 0054e25f
        ;   Label: LAB_0054e25f
    PUSH 0x5f05b4                       ; 0054e261 | = "mauso"
    MOV dword ptr [EAX + 0x15f694],0x2  ; 0054e266
    LEA EAX,[ESP + 0x208]               ; 0054e270
    PUSH EAX                            ; 0054e277
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e278
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e27d
    TEST EAX,EAX                        ; 0054e280
    JNZ 0x0054e291                      ; 0054e282
        ;   XREF to: 0054e291 (CONDITIONAL_JUMP)  ; LAB_0054e291
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e284
    MOV dword ptr [EAX + 0x15f694],0x8  ; 0054e287
    PUSH 0x4                            ; 0054e291
        ;   Label: LAB_0054e291
    PUSH 0x5f05ba                       ; 0054e293 | DAT_005f05ba
    LEA EAX,[ESP + 0x208]               ; 0054e298
    PUSH EAX                            ; 0054e29f
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e2a0
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e2a5
    TEST EAX,EAX                        ; 0054e2a8
    JNZ 0x0054e2b9                      ; 0054e2aa
        ;   XREF to: 0054e2b9 (CONDITIONAL_JUMP)  ; LAB_0054e2b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e2ac
    MOV dword ptr [EAX + 0x15f694],0x3  ; 0054e2af
    PUSH 0x5                            ; 0054e2b9
        ;   Label: LAB_0054e2b9
    PUSH 0x5f05bf                       ; 0054e2bb | = "smill"
    LEA EAX,[ESP + 0x208]               ; 0054e2c0
    PUSH EAX                            ; 0054e2c7
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e2c8
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e2cd
    TEST EAX,EAX                        ; 0054e2d0
    JNZ 0x0054e2e1                      ; 0054e2d2
        ;   XREF to: 0054e2e1 (CONDITIONAL_JUMP)  ; LAB_0054e2e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e2d4
    MOV dword ptr [EAX + 0x15f694],0x2  ; 0054e2d7
    PUSH 0x6                            ; 0054e2e1
        ;   Label: LAB_0054e2e1
    PUSH 0x5f05c5                       ; 0054e2e3 | = "pier59"
    LEA EAX,[ESP + 0x208]               ; 0054e2e8
    PUSH EAX                            ; 0054e2ef
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e2f0
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e2f5
    TEST EAX,EAX                        ; 0054e2f8
    JNZ 0x0054e309                      ; 0054e2fa
        ;   XREF to: 0054e309 (CONDITIONAL_JUMP)  ; LAB_0054e309
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e2fc
    MOV dword ptr [EAX + 0x15f694],0x7  ; 0054e2ff
    PUSH 0x6                            ; 0054e309
        ;   Label: LAB_0054e309
    PUSH 0x5f05cc                       ; 0054e30b | = "castle"
    LEA EAX,[ESP + 0x208]               ; 0054e310
    PUSH EAX                            ; 0054e317
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e318
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e31d
    TEST EAX,EAX                        ; 0054e320
    JNZ 0x0054e331                      ; 0054e322
        ;   XREF to: 0054e331 (CONDITIONAL_JUMP)  ; LAB_0054e331
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e324
    MOV dword ptr [EAX + 0x15f694],0x2  ; 0054e327
    PUSH 0x4                            ; 0054e331
        ;   Label: LAB_0054e331
    PUSH 0x5f05d3                       ; 0054e333 | DAT_005f05d3
    LEA EAX,[ESP + 0x208]               ; 0054e338
    PUSH EAX                            ; 0054e33f
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054e340
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054e345
    TEST EAX,EAX                        ; 0054e348
    JNZ 0x0054db2a                      ; 0054e34a
        ;   XREF to: 0054db2a (CONDITIONAL_JUMP)  ; LAB_0054db2a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054e350
    MOV dword ptr [EAX + 0x15f694],0x8  ; 0054e353
    JMP 0x0054db2a                      ; 0054e35d
        ;   XREF to: 0054db2a (UNCONDITIONAL_JUMP)  ; LAB_0054db2a
    MOV dword ptr [EAX + 0x15ac8c],0x0  ; 0054e362
        ;   Label: LAB_0054e362
    JMP 0x0054db64                      ; 0054e36c
        ;   XREF to: 0054db64 (UNCONDITIONAL_JUMP)  ; LAB_0054db64
    MOV dword ptr [EAX + 0x15b428],0x0  ; 0054e371
        ;   Label: LAB_0054e371
    JMP 0x0054dd2c                      ; 0054e37b
        ;   XREF to: 0054dd2c (UNCONDITIONAL_JUMP)  ; LAB_0054dd2c
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0054e380
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_0054e380
    PUSH 0x0                            ; 0054e385
    PUSH 0x0                            ; 0054e387
    PUSH 0x5f061b                       ; 0054e389 | = "Warning!  No .GEO file.  Press any key"
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0054e38e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0054e393
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0054e396
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0054e39b
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005b2510 ; 0054e3a0
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005b2510()
    JMP 0x0054de4f                      ; 0054e3a5
        ;   XREF to: 0054de4f (UNCONDITIONAL_JUMP)  ; LAB_0054de4f
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054e3aa
        ;   Label: LAB_0054e3aa
    PUSH EBX                            ; 0054e3ad
    CALL core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00559580 ; 0054e3ae
        ;   XREF to: 00559580 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00559580(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054e3b3
    JMP 0x0054de54                      ; 0054e3b6
        ;   XREF to: 0054de54 (UNCONDITIONAL_JUMP)  ; LAB_0054de54

