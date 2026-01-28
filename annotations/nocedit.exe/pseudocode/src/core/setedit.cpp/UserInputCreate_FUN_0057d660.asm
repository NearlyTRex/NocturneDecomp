; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_setedit_cpp_UserInputCreate_FUN_0057d660 (undefined4 param_1,undefined4 param_2,void *unaff_EBX,undefined4 param_4, CDemonSet *param_5,int param_6)
;
; Local Variables:
; undefined1       Stack[-0x1f0]:1  local_1f0
; undefined1       Stack[-0x1ef]:1  local_1ef
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057eb24
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_00647ded
;   TerminatedCString s_Can_t_find_GEO_00647e01
;   TerminatedCString s_KFM_00647e11
;   TerminatedCString s_s_raw_00647e16
;   TerminatedCString s_rb_00647e1d
;   TerminatedCString s_backdrop_00647e20
;   TerminatedCString s_core_setedit_cpp_00647e29
;   TerminatedCString s_core_setedit_cpp_00647e3d
;   TerminatedCString s_s_act_00647e51
;   TerminatedCString s_rb_00647e58
;   TerminatedCString s_backdrop_00647e5b
;   TerminatedCString s_core_setedit_cpp_00647e64
;   TerminatedCString s_core_setedit_cpp_00647e78
;   TerminatedCString s_core_setedit_cpp_00647e8c
;   TerminatedCString s_Out_of_memory_00647ea0
;   ... and 60 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   core_setedit.cpp_CDemonSet_FUN_0057ff70
;   core_setedit.cpp_CDemonSet_FUN_005800d0
;   core_setedit.cpp_FUN_0057d340
;   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
;   core_slew.cpp_CSlew_free_FUN_005a20a0
;   core_slew.cpp_CSlew_init_FUN_005a2060
;   ... and 27 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d660
        ;   Label: core_setedit.cpp_UserInputCreate_FUN_0057d660
    PUSH ESI                            ; 0057d661
    PUSH EDI                            ; 0057d662
    PUSH EBP                            ; 0057d663
    MOV EBP,ESP                         ; 0057d664
    SUB ESP,0x116c                      ; 0057d666
    AND ESP,0xfffffff8                  ; 0057d66c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057d66f
    XOR EDX,EDX                         ; 0057d672
    LEA EDI,[ESP + 0xf90]               ; 0057d674
    MOV dword ptr [ESP + 0x1120],EDX    ; 0057d67b
    MOV dword ptr [ESP + 0x1140],EDX    ; 0057d682
    MOV dword ptr [ESP + 0x1124],EDX    ; 0057d689
    MOV dword ptr [ESP + 0x1144],EDX    ; 0057d690
    ADD ESI,0x14d0f0                    ; 0057d697
    MOV dword ptr [ESP + 0x112c],EDX    ; 0057d69d
    PUSH EDI                            ; 0057d6a4
    MOV AL,byte ptr [ESI]               ; 0057d6a5
        ;   Label: LAB_0057d6a5
    MOV byte ptr [EDI],AL               ; 0057d6a7
    CMP AL,0x0                          ; 0057d6a9
    JZ 0x0057d6bd                       ; 0057d6ab
        ;   XREF to: 0057d6bd (CONDITIONAL_JUMP)  ; LAB_0057d6bd
    MOV AL,byte ptr [ESI + 0x1]         ; 0057d6ad
    ADD ESI,0x2                         ; 0057d6b0
    MOV byte ptr [EDI + 0x1],AL         ; 0057d6b3
    ADD EDI,0x2                         ; 0057d6b6
    CMP AL,0x0                          ; 0057d6b9
    JNZ 0x0057d6a5                      ; 0057d6bb
        ;   XREF to: 0057d6a5 (CONDITIONAL_JUMP)  ; LAB_0057d6a5
    POP EDI                             ; 0057d6bd
        ;   Label: LAB_0057d6bd
    MOV DL,0x2e                         ; 0057d6be
    LEA ESI,[ESP + 0xf90]               ; 0057d6c0
    MOV AL,byte ptr [ESI]               ; 0057d6c7
        ;   Label: LAB_0057d6c7
    CMP AL,DL                           ; 0057d6c9
    JZ 0x0057d6df                       ; 0057d6cb
        ;   XREF to: 0057d6df (CONDITIONAL_JUMP)  ; LAB_0057d6df
    CMP AL,0x0                          ; 0057d6cd
    JZ 0x0057d6dd                       ; 0057d6cf
        ;   XREF to: 0057d6dd (CONDITIONAL_JUMP)  ; LAB_0057d6dd
    INC ESI                             ; 0057d6d1
    MOV AL,byte ptr [ESI]               ; 0057d6d2
    CMP AL,DL                           ; 0057d6d4
    JZ 0x0057d6df                       ; 0057d6d6
        ;   XREF to: 0057d6df (CONDITIONAL_JUMP)  ; LAB_0057d6df
    INC ESI                             ; 0057d6d8
    CMP AL,0x0                          ; 0057d6d9
    JNZ 0x0057d6c7                      ; 0057d6db
        ;   XREF to: 0057d6c7 (CONDITIONAL_JUMP)  ; LAB_0057d6c7
    SUB ESI,ESI                         ; 0057d6dd
        ;   Label: LAB_0057d6dd
    MOV EBX,ESI                         ; 0057d6df
        ;   Label: LAB_0057d6df
    TEST ESI,ESI                        ; 0057d6e1
    JZ 0x0057dbf4                       ; 0057d6e3
        ;   XREF to: 0057dbf4 (CONDITIONAL_JUMP)  ; LAB_0057dbf4
    PUSH 0x647e11                       ; 0057d6e9 | = ".KFM"
        ;   Label: LAB_0057d6e9
    PUSH EBX                            ; 0057d6ee
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057d6ef
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0057d6f4
    MOV EBX,dword ptr [0x00681ab8]      ; 0057d6f7 | g_SkeletonPoolEnd | PTR_DAT_00681ab8
    XOR ECX,ECX                         ; 0057d6fd
    PUSH EBX                            ; 0057d6ff | g_SkeletonPoolEnd
    MOV dword ptr [ESP + 0x115c],ECX    ; 0057d700
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0057d707
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0057d70c
    IMUL EDX,dword ptr [EBP + 0x18],0x1a4 ; 0057d70f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057d716
    ADD EAX,0x4                         ; 0057d719
    ADD EAX,EDX                         ; 0057d71c
    MOV EDX,dword ptr [0x00681ab8]      ; 0057d71e | g_SkeletonPoolEnd | PTR_DAT_00681ab8
    ADD EAX,0x100                       ; 0057d724
    CMP EDX,EAX                         ; 0057d729
    JZ 0x0057d73d                       ; 0057d72b
        ;   XREF to: 0057d73d (CONDITIONAL_JUMP)  ; LAB_0057d73d
    MOV ECX,dword ptr [EAX]             ; 0057d72d
    MOV dword ptr [EDX],ECX             ; 0057d72f | g_SkeletonPoolEnd
    MOV ECX,dword ptr [EAX + 0x4]       ; 0057d731
    MOV dword ptr [EDX + 0x4],ECX       ; 0057d734 | DAT_03f48f88
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057d737
    MOV dword ptr [EDX + 0x8],ECX       ; 0057d73a | DAT_03f48f8c
    IMUL EAX,dword ptr [EBP + 0x18],0x1a4 ; 0057d73d
        ;   Label: LAB_0057d73d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057d744
    ADD EDX,0x4                         ; 0057d747
    ADD EAX,EDX                         ; 0057d74a
    MOV EDX,dword ptr [0x00681ab8]      ; 0057d74c | PTR_DAT_00681ab8
    ADD EAX,0x10c                       ; 0057d752
    ADD EDX,0xc                         ; 0057d757
    CMP EDX,EAX                         ; 0057d75a
    JZ 0x0057d76e                       ; 0057d75c
        ;   XREF to: 0057d76e (CONDITIONAL_JUMP)  ; LAB_0057d76e
    MOV ECX,dword ptr [EAX]             ; 0057d75e
    MOV dword ptr [EDX],ECX             ; 0057d760 | DAT_03f48f90
    MOV ECX,dword ptr [EAX + 0x4]       ; 0057d762
    MOV dword ptr [EDX + 0x4],ECX       ; 0057d765 | DAT_03f48f94
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057d768
    MOV dword ptr [EDX + 0x8],ECX       ; 0057d76b | DAT_03f48f98
    IMUL EAX,dword ptr [EBP + 0x18],0x1a4 ; 0057d76e
        ;   Label: LAB_0057d76e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057d775
    ADD EDX,0x4                         ; 0057d778
    FLD float ptr [EDX + EAX*0x1 + 0x144] ; 0057d77b
    ADD EAX,EDX                         ; 0057d782
    MOV ECX,dword ptr [0x00681ab8]      ; 0057d784 | PTR_DAT_00681ab8
    PUSH EAX                            ; 0057d78a
    FSTP float ptr [ECX + 0x18]         ; 0057d78b | DAT_03f48f9c
    PUSH 0x647e16                       ; 0057d78e | = "%s.raw"
    LEA EAX,[ESP + 0x1098]              ; 0057d793
    XOR ECX,ECX                         ; 0057d79a
    PUSH EAX                            ; 0057d79c
    MOV dword ptr [ESP + 0x1168],ECX    ; 0057d79d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057d7a4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d7a9
    PUSH 0x647e1d                       ; 0057d7ac | = "rb"
    LEA EAX,[ESP + 0x1094]              ; 0057d7b1
    PUSH EAX                            ; 0057d7b8
    PUSH 0x647e20                       ; 0057d7b9 | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057d7be
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057d7c3
    MOV EBX,EAX                         ; 0057d7c6
    MOV dword ptr [ESP + 0x1160],EAX    ; 0057d7c8
    TEST EAX,EAX                        ; 0057d7cf
    JZ 0x0057d946                       ; 0057d7d1
        ;   XREF to: 0057d946 (CONDITIONAL_JUMP)  ; LAB_0057d946
    PUSH 0xc64                          ; 0057d7d7
    PUSH 0x647e29                       ; 0057d7dc | = "..\\core\\setedit.cpp"
    PUSH 0x4b000                        ; 0057d7e1
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0057d7e6
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057d7eb
    MOV dword ptr [ESP + 0x115c],EAX    ; 0057d7ee
    TEST EAX,EAX                        ; 0057d7f5
    JZ 0x0057d80d                       ; 0057d7f7
        ;   XREF to: 0057d80d (CONDITIONAL_JUMP)  ; LAB_0057d80d
    PUSH EBX                            ; 0057d7f9
    PUSH 0x1e0                          ; 0057d7fa
    PUSH 0x280                          ; 0057d7ff
    PUSH EAX                            ; 0057d804
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0057d805
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0057d80a
    PUSH 0xc68                          ; 0057d80d
        ;   Label: LAB_0057d80d
    PUSH 0x647e3d                       ; 0057d812 | = "..\\core\\setedit.cpp"
    MOV EBX,dword ptr [ESP + 0x1168]    ; 0057d817
    PUSH EBX                            ; 0057d81e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057d81f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057d824
    IMUL EAX,dword ptr [EBP + 0x18],0x1a4 ; 0057d827
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057d82e
    ADD EDX,0x4                         ; 0057d831
    ADD EAX,EDX                         ; 0057d834
    PUSH EAX                            ; 0057d836
    PUSH 0x647e51                       ; 0057d837 | = "%s.act"
    LEA EAX,[ESP + 0x1098]              ; 0057d83c
    PUSH EAX                            ; 0057d843
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057d844
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d849
    PUSH 0x647e58                       ; 0057d84c | = "rb"
    LEA EAX,[ESP + 0x1094]              ; 0057d851
    PUSH EAX                            ; 0057d858
    PUSH 0x647e5b                       ; 0057d859 | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057d85e
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057d863
    MOV dword ptr [ESP + 0x1160],EAX    ; 0057d866
    TEST EAX,EAX                        ; 0057d86d
    JZ 0x0057d946                       ; 0057d86f
        ;   XREF to: 0057d946 (CONDITIONAL_JUMP)  ; LAB_0057d946
    XOR EBX,EBX                         ; 0057d875
    MOV EDI,dword ptr [ESP + 0x1160]    ; 0057d877
        ;   Label: LAB_0057d877
    PUSH EDI                            ; 0057d87e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057d87f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0057d884
    PUSH EDI                            ; 0057d887
    MOV ESI,EAX                         ; 0057d888
    MOV dword ptr [ESP + 0x1134],EAX    ; 0057d88a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057d891
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    MOV dword ptr [ESP + 0x113c],EAX    ; 0057d896
    ADD ESP,0x4                         ; 0057d89d
    PUSH EDI                            ; 0057d8a0
    MOV dword ptr [ESP + 0x1138],EAX    ; 0057d8a1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057d8a8
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    MOV ECX,dword ptr [0x0067939c]      ; 0057d8ad | g_BitsPerPixel
    ADD ESP,0x4                         ; 0057d8b3
    MOV EDX,EAX                         ; 0057d8b6
    CMP ECX,0x20                        ; 0057d8b8
    JNZ 0x0057dc1b                      ; 0057d8bb
        ;   XREF to: 0057dc1b (CONDITIONAL_JUMP)  ; LAB_0057dc1b
    MOV CL,byte ptr [0x02d01f24]        ; 0057d8c1 | g_RedBitPosition
    SHL ESI,CL                          ; 0057d8c7
    MOV CL,byte ptr [0x02d01f30]        ; 0057d8c9 | g_GreenBitPosition
    MOV dword ptr [ESP + 0x1148],ESI    ; 0057d8cf
    MOV ESI,dword ptr [ESP + 0x1138]    ; 0057d8d6
    MOV EDI,dword ptr [ESP + 0x1148]    ; 0057d8dd
    SHL ESI,CL                          ; 0057d8e4
    MOV CL,byte ptr [0x02d01f3c]        ; 0057d8e6 | g_BlueBitPosition
    OR ESI,EDI                          ; 0057d8ec
    SHL EAX,CL                          ; 0057d8ee
    MOV ECX,ESI                         ; 0057d8f0
    OR ECX,EAX                          ; 0057d8f2
        ;   Label: LAB_0057d8f2
    MOV EAX,dword ptr [ESP + 0x1134]    ; 0057d8f4
    MOV dword ptr [ESP + EBX*0x1 + 0x400],ECX ; 0057d8fb
    MOV ECX,dword ptr [ESP + 0x1130]    ; 0057d902
    MOV ESI,0x3                         ; 0057d909
    ADD ECX,EAX                         ; 0057d90e
    MOV EAX,EDX                         ; 0057d910
    SAR EDX,0x1f                        ; 0057d912
    IDIV ESI                            ; 0057d915
    ADD EBX,0x4                         ; 0057d917
    ADD EAX,ECX                         ; 0057d91a
    MOV dword ptr [ESP + EBX*0x1 + -0x4],EAX ; 0057d91c
    CMP EBX,0x400                       ; 0057d920
    JNZ 0x0057d877                      ; 0057d926
        ;   XREF to: 0057d877 (CONDITIONAL_JUMP)  ; LAB_0057d877
    PUSH 0xc73                          ; 0057d92c
    PUSH 0x647e64                       ; 0057d931 | = "..\\core\\setedit.cpp"
    MOV EDX,dword ptr [ESP + 0x1168]    ; 0057d936
    PUSH EDX                            ; 0057d93d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057d93e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057d943
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0057d946
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0057d946
    MOV ECX,dword ptr [0x0067b654]      ; 0057d94b | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 0057d951 | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0057d952
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
    MOV EAX,[0x00679394]                ; 0057d957 | g_WindowWidth
    IMUL EAX,dword ptr [0x00679398]     ; 0057d95c | g_WindowHeight
    ADD ESP,0x4                         ; 0057d963
    PUSH 0xc81                          ; 0057d966
    PUSH 0x647e78                       ; 0057d96b | = "..\\core\\setedit.cpp"
    PUSH EAX                            ; 0057d970
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0057d971
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057d976
    MOV dword ptr [ESP + 0x1164],EAX    ; 0057d979
    TEST EAX,EAX                        ; 0057d980
    JZ 0x0057dc2f                       ; 0057d982
        ;   XREF to: 0057dc2f (CONDITIONAL_JUMP)  ; LAB_0057dc2f
    PUSH 0x1e0                          ; 0057d988
        ;   Label: LAB_0057d988
    XOR EAX,EAX                         ; 0057d98d
    PUSH 0x32758e4                      ; 0057d98f | g_CDemonCameraInstance
    MOV dword ptr [ESP + 0x1130],EAX    ; 0057d994
    MOV dword ptr [ESP + 0x1170],EAX    ; 0057d99b
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 ; 0057d9a2
        ;   XREF to: 0044c190 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0057d9a7
    IMUL EAX,dword ptr [EBP + 0x18],0x1a4 ; 0057d9aa
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057d9b1
    ADD EDX,EAX                         ; 0057d9b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057d9b6
    ADD EAX,0x4                         ; 0057d9b9
    MOV dword ptr [ESP + 0x1150],EDX    ; 0057d9bc
    MOV dword ptr [ESP + 0x114c],EAX    ; 0057d9c3
    MOV EAX,[0x0067cf44]                ; 0057d9ca | g_CKeysPtr
        ;   Label: LAB_0057d9ca
    PUSH EAX                            ; 0057d9cf | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057d9d0 | g_CKeysInstance
    CALL dword ptr [EDX + 0x8]          ; 0057d9d2
    ADD ESP,0x4                         ; 0057d9d5
    CMP dword ptr [ESP + 0x1144],0x0    ; 0057d9d8
    SETZ AL                             ; 0057d9e0
    AND EAX,0xff                        ; 0057d9e3
    MOV ESI,dword ptr [ESP + 0x115c]    ; 0057d9e8
    MOV dword ptr [ESP + 0x1144],EAX    ; 0057d9ef
    TEST ESI,ESI                        ; 0057d9f6
    JZ 0x0057dc6e                       ; 0057d9f8
        ;   XREF to: 0057dc6e (CONDITIONAL_JUMP)  ; LAB_0057dc6e
    CMP dword ptr [ESP + 0x1124],0x0    ; 0057d9fe
    JZ 0x0057dc57                       ; 0057da06
        ;   XREF to: 0057dc57 (CONDITIONAL_JUMP)  ; LAB_0057dc57
    TEST EAX,EAX                        ; 0057da0c
    JZ 0x0057dc57                       ; 0057da0e
        ;   XREF to: 0057dc57 (CONDITIONAL_JUMP)  ; LAB_0057dc57
    CMP dword ptr [0x00679394],0x280    ; 0057da14 | g_WindowWidth
        ;   Label: LAB_0057da14
    JZ 0x0057df2e                       ; 0057da1e
        ;   XREF to: 0057df2e (CONDITIONAL_JUMP)  ; LAB_0057df2e
    MOV ECX,0x647eaf                    ; 0057da24 | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057da24
    MOV EBX,0xc92                       ; 0057da29
    PUSH 0x647ec3                       ; 0057da2e | = "Screen must be 640x480!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0057da33 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0057da39 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057da3f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057da44
    XOR EDI,EDI                         ; 0057da47
        ;   Label: LAB_0057da47
    MOV ESI,dword ptr [ESP + 0x115c]    ; 0057da49
    MOV dword ptr [ESP + 0x1154],EDI    ; 0057da50
    MOV EBX,dword ptr [ESP + 0x1154]    ; 0057da57
        ;   Label: LAB_0057da57
    XOR ECX,ECX                         ; 0057da5e
    XOR EDI,EDI                         ; 0057da60
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 0057da62 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EDX,dword ptr [ESP + 0x112c]    ; 0057da68
        ;   Label: LAB_0057da68
    LEA EAX,[ESI + 0x1]                 ; 0057da6f
    TEST EDX,EDX                        ; 0057da72
    JZ 0x0057df5b                       ; 0057da74
        ;   XREF to: 0057df5b (CONDITIONAL_JUMP)  ; LAB_0057df5b
    MOVZX ESI,byte ptr [ESI]            ; 0057da7a
    MOV EDX,dword ptr [ESP + ESI*0x4]   ; 0057da7d
    MOV dword ptr [ESP + 0x113c],EDX    ; 0057da80
    SUB EDX,ECX                         ; 0057da87
    MOV ESI,EAX                         ; 0057da89
    MOV EAX,EDX                         ; 0057da8b
    SAR EDX,0x1f                        ; 0057da8d
    SUB EAX,EDX                         ; 0057da90
    SAR EAX,0x1                         ; 0057da92
    ADD EAX,0x80                        ; 0057da94
    TEST EAX,EAX                        ; 0057da99
    JL 0x0057df43                       ; 0057da9b
        ;   XREF to: 0057df43 (CONDITIONAL_JUMP)  ; LAB_0057df43
    CMP EAX,0xff                        ; 0057daa1
    JLE 0x0057daad                      ; 0057daa6
        ;   XREF to: 0057daad (CONDITIONAL_JUMP)  ; LAB_0057daad
    MOV EAX,0xff                        ; 0057daa8
    CMP dword ptr [0x0067939c],0x20     ; 0057daad | g_BitsPerPixel
        ;   Label: LAB_0057daad
    JNZ 0x0057df4a                      ; 0057dab4
        ;   XREF to: 0057df4a (CONDITIONAL_JUMP)  ; LAB_0057df4a
    MOV CL,byte ptr [0x02d01f24]        ; 0057daba | g_RedBitPosition
    MOV EDX,EAX                         ; 0057dac0
    SHL EDX,CL                          ; 0057dac2
    MOV CL,byte ptr [0x02d01f30]        ; 0057dac4 | g_GreenBitPosition
    MOV dword ptr [ESP + 0x1148],EDX    ; 0057daca
    MOV EDX,EAX                         ; 0057dad1
    SHL EDX,CL                          ; 0057dad3
    MOV ECX,EDX                         ; 0057dad5
    MOV EDX,dword ptr [ESP + 0x1148]    ; 0057dad7
    OR EDX,ECX                          ; 0057dade
    MOV CL,byte ptr [0x02d01f3c]        ; 0057dae0 | g_BlueBitPosition
    SHL EAX,CL                          ; 0057dae6
    MOV ECX,EDX                         ; 0057dae8
    OR ECX,EAX                          ; 0057daea
        ;   Label: LAB_0057daea
    MOV dword ptr [EBX],ECX             ; 0057daec | DAT_00ffffff
    ADD EBX,0x4                         ; 0057daee
    MOV ECX,dword ptr [ESP + 0x113c]    ; 0057daf1
    INC EDI                             ; 0057daf8
        ;   Label: LAB_0057daf8
    CMP EDI,0x280                       ; 0057daf9
    JL 0x0057da68                       ; 0057daff
        ;   XREF to: 0057da68 (CONDITIONAL_JUMP)  ; LAB_0057da68
    MOV ECX,dword ptr [ESP + 0x1154]    ; 0057db05
    ADD ECX,0x4                         ; 0057db0c
    MOV dword ptr [ESP + 0x1154],ECX    ; 0057db0f
    CMP ECX,0x780                       ; 0057db16
    JNZ 0x0057da57                      ; 0057db1c
        ;   XREF to: 0057da57 (CONDITIONAL_JUMP)  ; LAB_0057da57
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0057db22
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0057db22
    MOV ESI,dword ptr [0x0067b654]      ; 0057db27 | g_CGamePtr
    PUSH ESI                            ; 0057db2d | g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 0057db2e
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0057db33
    MOV EAX,[0x0067cf44]                ; 0057db36 | g_CKeysPtr
    PUSH 0x1                            ; 0057db3b
    MOV EDX,dword ptr [EAX]             ; 0057db3d | g_CKeysInstance
    PUSH EAX                            ; 0057db3f | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057db40
    ADD ESP,0x8                         ; 0057db43
    TEST EAX,EAX                        ; 0057db46
    JZ 0x0057e206                       ; 0057db48
        ;   XREF to: 0057e206 (CONDITIONAL_JUMP)  ; LAB_0057e206
    MOV ESI,0x64805e                    ; 0057db4e | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057db4e
    MOV EAX,dword ptr [ESP + 0x1164]    ; 0057db53
    MOV EDI,0xd78                       ; 0057db5a
    PUSH EAX                            ; 0057db5f
    MOV dword ptr [0x0067d20c],ESI      ; 0057db60 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 0057db66 | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 0057db6c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0057db71
    MOV EDX,dword ptr [0x00681ab8]      ; 0057db74 | g_SkeletonPoolEnd | PTR_DAT_00681ab8
    PUSH EDX                            ; 0057db7a | g_SkeletonPoolEnd
    MOV EBX,0xd80                       ; 0057db7b
    CALL core_slew.cpp_CSlew_free_FUN_005a20a0 ; 0057db80
        ;   XREF to: 005a20a0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_free_FUN_005a20a0()
    MOV ECX,0x648072                    ; 0057db85 | = "..\\core\\setedit.cpp"
    ADD ESP,0x4                         ; 0057db8a
    MOV dword ptr [0x02f0d944],EBX      ; 0057db8d | g_CurrentDebugLine
    MOV ESI,dword ptr [ESP + 0x1158]    ; 0057db93
    MOV dword ptr [0x0067d20c],ECX      ; 0057db9a | g_CurrentDebugFilename
    TEST ESI,ESI                        ; 0057dba0
    JZ 0x0057dbb8                       ; 0057dba2
        ;   XREF to: 0057dbb8 (CONDITIONAL_JUMP)  ; LAB_0057dbb8
    PUSH 0x0                            ; 0057dba4
    PUSH ESI                            ; 0057dba6
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90 ; 0057dba7
        ;   XREF to: 00476d90 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel * this_ptr)
    ADD ESP,0x8                         ; 0057dbac
    PUSH EAX                            ; 0057dbaf
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0057dbb0
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0057dbb5
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0057dbb8
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0057dbb8
    MOV EAX,[0x00679398]                ; 0057dbbd | g_WindowHeight
    DEC EAX                             ; 0057dbc2
    PUSH EAX                            ; 0057dbc3
    MOV EAX,[0x00679394]                ; 0057dbc4 | g_WindowWidth
    DEC EAX                             ; 0057dbc9
    PUSH EAX                            ; 0057dbca
    PUSH 0x0                            ; 0057dbcb
    PUSH 0x0                            ; 0057dbcd
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401800 ; 0057dbcf
        ;   XREF to: 00401800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401800(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 0057dbd4
    MOV EAX,dword ptr [ESP + 0x115c]    ; 0057dbd7
    TEST EAX,EAX                        ; 0057dbde
    JNZ 0x0057e405                      ; 0057dbe0
        ;   XREF to: 0057e405 (CONDITIONAL_JUMP)  ; LAB_0057e405
    MOV EAX,dword ptr [ESP + 0x1120]    ; 0057dbe6
    MOV ESP,EBP                         ; 0057dbed
    POP EBP                             ; 0057dbef
    POP EDI                             ; 0057dbf0
    POP ESI                             ; 0057dbf1
    POP EBX                             ; 0057dbf2
    RET                                 ; 0057dbf3
    MOV EAX,0x647ded                    ; 0057dbf4 | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057dbf4
    MOV EDX,0xc3b                       ; 0057dbf9
    PUSH 0x647e01                       ; 0057dbfe | = "Can't find .GEO"
    MOV [0x02f0ca48],EAX                ; 0057dc03 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0057dc08 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057dc0e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057dc13
    JMP 0x0057d6e9                      ; 0057dc16
        ;   XREF to: 0057d6e9 (UNCONDITIONAL_JUMP)  ; LAB_0057d6e9
    MOV ECX,dword ptr [ESP + 0x1138]    ; 0057dc1b
        ;   Label: LAB_0057dc1b
    SHL ESI,0x10                        ; 0057dc22
    SHL ECX,0x8                         ; 0057dc25
    OR ECX,ESI                          ; 0057dc28
    JMP 0x0057d8f2                      ; 0057dc2a
        ;   XREF to: 0057d8f2 (UNCONDITIONAL_JUMP)  ; LAB_0057d8f2
    MOV ESI,0x647e8c                    ; 0057dc2f | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057dc2f
    MOV EDI,0xc82                       ; 0057dc34
    PUSH 0x647ea0                       ; 0057dc39 | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],ESI      ; 0057dc3e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0057dc44 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057dc4a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057dc4f
    JMP 0x0057d988                      ; 0057dc52
        ;   XREF to: 0057d988 (UNCONDITIONAL_JUMP)  ; LAB_0057d988
    PUSH 0x18                           ; 0057dc57
        ;   Label: LAB_0057dc57
    MOV EAX,[0x0067cf44]                ; 0057dc59 | g_CKeysPtr
    PUSH EAX                            ; 0057dc5e | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057dc5f | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0057dc61
    ADD ESP,0x8                         ; 0057dc63
    TEST EAX,EAX                        ; 0057dc66
    JNZ 0x0057da14                      ; 0057dc68
        ;   XREF to: 0057da14 (CONDITIONAL_JUMP)  ; LAB_0057da14
    MOV EDX,dword ptr [0x00681ab8]      ; 0057dc6e | g_SkeletonPoolEnd | PTR_DAT_00681ab8
        ;   Label: LAB_0057dc6e
    MOV EAX,dword ptr [EDX]             ; 0057dc74 | g_SkeletonPoolEnd
    MOV dword ptr [ESP + 0x10e0],EAX    ; 0057dc76
    LEA EAX,[EDX + 0x4]                 ; 0057dc7d | DAT_03f48f88
    MOV EAX,dword ptr [EAX]             ; 0057dc80 | DAT_03f48f88
    MOV dword ptr [ESP + 0x10e4],EAX    ; 0057dc82
    LEA EAX,[EDX + 0x8]                 ; 0057dc89 | DAT_03f48f8c
    MOV EAX,dword ptr [EAX]             ; 0057dc8c | DAT_03f48f8c
    LEA ECX,[EDX + 0xc]                 ; 0057dc8e | DAT_03f48f90
    MOV dword ptr [ESP + 0x10e8],EAX    ; 0057dc91
    MOV EAX,dword ptr [ECX]             ; 0057dc98 | DAT_03f48f90
    MOV dword ptr [ESP + 0x10ec],EAX    ; 0057dc9a
    LEA EAX,[ECX + 0x4]                 ; 0057dca1 | DAT_03f48f94
    MOV EAX,dword ptr [EAX]             ; 0057dca4 | DAT_03f48f94
    MOV dword ptr [ESP + 0x10f0],EAX    ; 0057dca6
    LEA EAX,[ECX + 0x8]                 ; 0057dcad | DAT_03f48f98
    MOV EAX,dword ptr [EAX]             ; 0057dcb0 | DAT_03f48f98
    MOV dword ptr [ESP + 0x10f4],EAX    ; 0057dcb2
    MOV EAX,dword ptr [EDX + 0x18]      ; 0057dcb9 | DAT_03f48f9c
    PUSH EDX                            ; 0057dcbc | g_SkeletonPoolEnd
    MOV dword ptr [ESP + 0x10fc],EAX    ; 0057dcbd
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0057dcc4
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    MOV EAX,[0x00681ab8]                ; 0057dcc9 | PTR_DAT_00681ab8
    ADD ESP,0x4                         ; 0057dcce
    CMP EAX,0x32758e8                   ; 0057dcd1 | DAT_032758e8
    JZ 0x0057dcf2                       ; 0057dcd6
        ;   XREF to: 0057dcf2 (CONDITIONAL_JUMP)  ; LAB_0057dcf2
    FLD float ptr [EAX]                 ; 0057dcd8 | g_SkeletonPoolEnd
    FLD float ptr [EAX + 0x8]           ; 0057dcda | DAT_03f48f8c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057dcdd | DAT_03f48f88
    MOV dword ptr [0x032758ec],EDX      ; 0057dce0 | g_CDemonCameraInstance.base.position.y
    FSTP float ptr [0x032758f0]         ; 0057dce6 | g_CDemonCameraInstance.base.position.z
    FSTP float ptr [0x032758e8]         ; 0057dcec | DAT_032758e8
    MOV EAX,[0x00681ab8]                ; 0057dcf2 | PTR_DAT_00681ab8
        ;   Label: LAB_0057dcf2
    ADD EAX,0xc                         ; 0057dcf7 | DAT_03f48f90
    PUSH EAX                            ; 0057dcfa | DAT_03f48f90
    PUSH 0x32758f4                      ; 0057dcfb | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0057dd00
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0057dd05
    MOV EAX,[0x00681ab8]                ; 0057dd08 | g_SkeletonPoolEnd | PTR_DAT_00681ab8
    PUSH 0x0                            ; 0057dd0d
    FLD float ptr [EAX + 0x18]          ; 0057dd0f | DAT_03f48f9c
    PUSH 0x32758e4                      ; 0057dd12 | g_CDemonCameraInstance
    FSTP float ptr [0x0327591c]         ; 0057dd17 | g_CDemonCameraInstance.base.projection_scale
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0057dd1d
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0057dd22
    PUSH 0x3f87558                      ; 0057dd25 | g_ZeroVector
    MOV EAX,[0x006703ec]                ; 0057dd2a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0057dd2f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0057dd30
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0057dd35
    CMP dword ptr [ESP + 0x1128],0x0    ; 0057dd38
    JZ 0x0057df72                       ; 0057dd40
        ;   XREF to: 0057df72 (CONDITIONAL_JUMP)  ; LAB_0057df72
    MOV dword ptr [0x03277d14],0x4      ; 0057dd46 | g_CDemonRaytraceInstance
    PUSH 0x0                            ; 0057dd50
        ;   Label: LAB_0057dd50
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057dd52
    PUSH 0x461c3f9a                     ; 0057dd55
    PUSH ESI                            ; 0057dd5a
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0057dd5b
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0057dd60
    PUSH 0x0                            ; 0057dd63
    PUSH 0x32758e4                      ; 0057dd65 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0057dd6a
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0057dd6f
    MOV EAX,[0x0067cf44]                ; 0057dd72 | g_CKeysPtr
    PUSH 0x39                           ; 0057dd77
    MOV EDX,dword ptr [EAX]             ; 0057dd79 | g_CKeysInstance
    PUSH EAX                            ; 0057dd7b | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057dd7c
    ADD ESP,0x8                         ; 0057dd7f
    TEST EAX,EAX                        ; 0057dd82
    JZ 0x0057df81                       ; 0057dd84
        ;   XREF to: 0057df81 (CONDITIONAL_JUMP)  ; LAB_0057df81
    IMUL EDX,dword ptr [EBP + 0x18],0x1a4 ; 0057dd8a
    LEA EAX,[ESI + 0x4]                 ; 0057dd91
    ADD EAX,EDX                         ; 0057dd94
    LEA EDX,[EAX + 0x100]               ; 0057dd96
    MOV EAX,[0x00681ab8]                ; 0057dd9c | PTR_DAT_00681ab8
    CMP EDX,EAX                         ; 0057dda1
    JZ 0x0057ddb5                       ; 0057dda3
        ;   XREF to: 0057ddb5 (CONDITIONAL_JUMP)  ; LAB_0057ddb5
    MOV ECX,dword ptr [EAX]             ; 0057dda5 | g_SkeletonPoolEnd
    MOV dword ptr [EDX],ECX             ; 0057dda7
    MOV ECX,dword ptr [EAX + 0x4]       ; 0057dda9 | DAT_03f48f88
    MOV dword ptr [EDX + 0x4],ECX       ; 0057ddac
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057ddaf | DAT_03f48f8c
    MOV dword ptr [EDX + 0x8],ECX       ; 0057ddb2
    IMUL EDX,dword ptr [EBP + 0x18],0x1a4 ; 0057ddb5
        ;   Label: LAB_0057ddb5
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057ddbc
    ADD ECX,0x4                         ; 0057ddbf
    MOV EAX,[0x00681ab8]                ; 0057ddc2 | PTR_DAT_00681ab8
    ADD EDX,ECX                         ; 0057ddc7
    ADD EAX,0xc                         ; 0057ddc9
    ADD EDX,0x10c                       ; 0057ddcc
    CMP EDX,EAX                         ; 0057ddd2
    JZ 0x0057dde6                       ; 0057ddd4
        ;   XREF to: 0057dde6 (CONDITIONAL_JUMP)  ; LAB_0057dde6
    MOV ECX,dword ptr [EAX]             ; 0057ddd6 | DAT_03f48f90
    MOV dword ptr [EDX],ECX             ; 0057ddd8
    MOV ECX,dword ptr [EAX + 0x4]       ; 0057ddda | DAT_03f48f94
    MOV dword ptr [EDX + 0x4],ECX       ; 0057dddd
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057dde0 | DAT_03f48f98
    MOV dword ptr [EDX + 0x8],ECX       ; 0057dde3
    IMUL EBX,dword ptr [EBP + 0x18],0x1a4 ; 0057dde6
        ;   Label: LAB_0057dde6
    MOV EAX,[0x00681ab8]                ; 0057dded | PTR_DAT_00681ab8
    ADD EAX,0xc                         ; 0057ddf2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057ddf5
    FLD float ptr [EAX + 0xc]           ; 0057ddf8 | DAT_03f48f9c
    PUSH EAX                            ; 0057ddfb | DAT_03f48f90
    LEA EAX,[EDX + 0x4]                 ; 0057ddfc
    FSTP float ptr [EDX + EBX*0x1 + 0x148] ; 0057ddff
    ADD EBX,EAX                         ; 0057de06
    LEA EAX,[EBX + 0x118]               ; 0057de08
    PUSH EAX                            ; 0057de0e
    MOV EDI,0x43fa0000                  ; 0057de0f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0057de14
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0057de19
    LEA EAX,[EBX + 0x100]               ; 0057de1c
    MOV dword ptr [ESP + 0x10fc],EDI    ; 0057de22
    MOV dword ptr [ESP + 0x1100],EDI    ; 0057de29
    MOV dword ptr [ESP + 0x1104],EDI    ; 0057de30
    FLD float ptr [0x0064809d]          ; 0057de37 | FLOAT_0064809d
    FLD float ptr [EAX]                 ; 0057de3d
    FADD ST0,ST1                        ; 0057de3f
    FSTP float ptr [ESP + 0x1114]       ; 0057de41
    FLD float ptr [EAX + 0x4]           ; 0057de48
    FADD ST0,ST1                        ; 0057de4b
    LEA EDX,[EBX + 0x17c]               ; 0057de4d
    FSTP float ptr [ESP + 0x1118]       ; 0057de53
    FADD float ptr [EAX + 0x8]          ; 0057de5a
    LEA EAX,[ESP + 0x1114]              ; 0057de5d
    FSTP float ptr [ESP + 0x111c]       ; 0057de64
    CMP EDX,EAX                         ; 0057de6b
    JZ 0x0057de8c                       ; 0057de6d
        ;   XREF to: 0057de8c (CONDITIONAL_JUMP)  ; LAB_0057de8c
    MOV EAX,dword ptr [ESP + 0x1114]    ; 0057de6f
    MOV dword ptr [EDX],EAX             ; 0057de76
    MOV EAX,dword ptr [ESP + 0x1118]    ; 0057de78
    MOV dword ptr [EDX + 0x4],EAX       ; 0057de7f
    MOV EAX,dword ptr [ESP + 0x111c]    ; 0057de82
    MOV dword ptr [EDX + 0x8],EAX       ; 0057de89
    IMUL EDX,dword ptr [EBP + 0x18],0x1a4 ; 0057de8c
        ;   Label: LAB_0057de8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057de93
    ADD EAX,0x4                         ; 0057de96
    ADD EDX,EAX                         ; 0057de99
    LEA EAX,[EDX + 0x100]               ; 0057de9b
    FLD float ptr [EAX]                 ; 0057dea1
    FADD float ptr [ESP + 0x10fc]       ; 0057dea3
    FSTP float ptr [ESP + 0x1108]       ; 0057deaa
    FLD float ptr [EAX + 0x4]           ; 0057deb1
    FADD float ptr [ESP + 0x1100]       ; 0057deb4
    ADD EDX,0x188                       ; 0057debb
    FSTP float ptr [ESP + 0x110c]       ; 0057dec1
    FLD float ptr [EAX + 0x8]           ; 0057dec8
    FADD float ptr [ESP + 0x1104]       ; 0057decb
    LEA EAX,[ESP + 0x1108]              ; 0057ded2
    FSTP float ptr [ESP + 0x1110]       ; 0057ded9
    CMP EDX,EAX                         ; 0057dee0
    JZ 0x0057df01                       ; 0057dee2
        ;   XREF to: 0057df01 (CONDITIONAL_JUMP)  ; LAB_0057df01
    MOV EAX,dword ptr [ESP + 0x1108]    ; 0057dee4
    MOV dword ptr [EDX],EAX             ; 0057deeb
    MOV EAX,dword ptr [ESP + 0x110c]    ; 0057deed
    MOV dword ptr [EDX + 0x4],EAX       ; 0057def4
    MOV EAX,dword ptr [ESP + 0x1110]    ; 0057def7
    MOV dword ptr [EDX + 0x8],EAX       ; 0057defe
    IMUL EAX,dword ptr [EBP + 0x18],0x1a4 ; 0057df01
        ;   Label: LAB_0057df01
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057df08
    ADD EDX,0x4                         ; 0057df0b
    ADD EAX,EDX                         ; 0057df0e
    PUSH EAX                            ; 0057df10
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057df11
    PUSH ESI                            ; 0057df14
    MOV EDI,0x1                         ; 0057df15
    CALL core_setedit.cpp_FUN_0057d340  ; 0057df1a
        ;   XREF to: 0057d340 (UNCONDITIONAL_CALL)  ; undefined core_setedit.cpp_FUN_0057d340()
    ADD ESP,0x8                         ; 0057df1f
    MOV dword ptr [ESP + 0x1120],EDI    ; 0057df22
    JMP 0x0057db4e                      ; 0057df29
        ;   XREF to: 0057db4e (UNCONDITIONAL_JUMP)  ; LAB_0057db4e
    CMP dword ptr [0x00679398],0x1e0    ; 0057df2e | g_WindowHeight
        ;   Label: LAB_0057df2e
    JNZ 0x0057da24                      ; 0057df38
        ;   XREF to: 0057da24 (CONDITIONAL_JUMP)  ; LAB_0057da24
    JMP 0x0057da47                      ; 0057df3e
        ;   XREF to: 0057da47 (UNCONDITIONAL_JUMP)  ; LAB_0057da47
    XOR EAX,EAX                         ; 0057df43
        ;   Label: LAB_0057df43
    JMP 0x0057daad                      ; 0057df45
        ;   XREF to: 0057daad (UNCONDITIONAL_JUMP)  ; LAB_0057daad
    MOV EDX,EAX                         ; 0057df4a
        ;   Label: LAB_0057df4a
    MOV ECX,EAX                         ; 0057df4c
    SHL EDX,0x8                         ; 0057df4e
    SHL ECX,0x10                        ; 0057df51
    OR ECX,EDX                          ; 0057df54
    JMP 0x0057daea                      ; 0057df56
        ;   XREF to: 0057daea (UNCONDITIONAL_JUMP)  ; LAB_0057daea
    MOVZX ESI,byte ptr [ESI]            ; 0057df5b
        ;   Label: LAB_0057df5b
    ADD EBX,0x4                         ; 0057df5e
    MOV EDX,dword ptr [ESP + ESI*0x4 + 0x400] ; 0057df61
    MOV ESI,EAX                         ; 0057df68
    MOV dword ptr [EBX + -0x4],EDX      ; 0057df6a
    JMP 0x0057daf8                      ; 0057df6d
        ;   XREF to: 0057daf8 (UNCONDITIONAL_JUMP)  ; LAB_0057daf8
    MOV dword ptr [0x03277d14],0x1      ; 0057df72 | g_CDemonRaytraceInstance
        ;   Label: LAB_0057df72
    JMP 0x0057dd50                      ; 0057df7c
        ;   XREF to: 0057dd50 (UNCONDITIONAL_JUMP)  ; LAB_0057dd50
    MOV EDX,dword ptr [0x00681ab8]      ; 0057df81 | g_SkeletonPoolEnd | PTR_DAT_00681ab8
        ;   Label: LAB_0057df81
    FLD float ptr [ESP + 0x10e0]        ; 0057df87
    FCOMP float ptr [EDX]               ; 0057df8e | g_SkeletonPoolEnd
    FNSTSW AX                           ; 0057df90
    SAHF                                ; 0057df92
    JZ 0x0057e0fa                       ; 0057df93
        ;   XREF to: 0057e0fa (CONDITIONAL_JUMP)  ; LAB_0057e0fa
    XOR EDI,EDI                         ; 0057df99
        ;   Label: LAB_0057df99
    MOV dword ptr [ESP + 0x1168],EDI    ; 0057df9b
    CMP dword ptr [ESP + 0x1128],0x0    ; 0057dfa2
        ;   Label: LAB_0057dfa2
    JZ 0x0057e043                       ; 0057dfaa
        ;   XREF to: 0057e043 (CONDITIONAL_JUMP)  ; LAB_0057e043
    CMP dword ptr [ESP + 0x1168],0x0    ; 0057dfb0
    JZ 0x0057e173                       ; 0057dfb8
        ;   XREF to: 0057e173 (CONDITIONAL_JUMP)  ; LAB_0057e173
    MOV EAX,dword ptr [ESP + 0x1164]    ; 0057dfbe
        ;   Label: LAB_0057dfbe
    PUSH EAX                            ; 0057dfc5
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057dfc6
    PUSH EDX                            ; 0057dfc9
    CALL core_setedit.cpp_CDemonSet_FUN_0057ff70 ; 0057dfca
        ;   XREF to: 0057ff70 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_FUN_0057ff70(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0057dfcf
    MOV ECX,dword ptr [EBP + 0x18]      ; 0057dfd2
    PUSH ECX                            ; 0057dfd5
    LEA EAX,[ESP + 0x804]               ; 0057dfd6
    PUSH EAX                            ; 0057dfdd
    MOV EBX,dword ptr [0x02cf6a90]      ; 0057dfde | g_MouseY
    PUSH EBX                            ; 0057dfe4
    MOV ESI,dword ptr [0x02cf6a8c]      ; 0057dfe5 | g_MouseX
    PUSH ESI                            ; 0057dfeb
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057dfec
    PUSH EDI                            ; 0057dfef
    CALL core_setedit.cpp_CDemonSet_FUN_005800d0 ; 0057dff0
        ;   XREF to: 005800d0 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_FUN_005800d0(CDemonSet * this_ptr)
    ADD ESP,0x14                        ; 0057dff5
    TEST EAX,EAX                        ; 0057dff8
    JLE 0x0057e032                      ; 0057dffa
        ;   XREF to: 0057e032 (CONDITIONAL_JUMP)  ; LAB_0057e032
    MOV ESI,0x21                        ; 0057dffc
    LEA EDI,[EAX*0x4 + 0x0]             ; 0057e001
    XOR EBX,EBX                         ; 0057e008
    IMUL EAX,dword ptr [ESP + EBX*0x1 + 0x800],0x1a4 ; 0057e00a
        ;   Label: LAB_0057e00a
    ADD EAX,dword ptr [ESP + 0x114c]    ; 0057e015
    PUSH EAX                            ; 0057e01c
    PUSH ESI                            ; 0057e01d
    PUSH 0x0                            ; 0057e01e
    ADD EBX,0x4                         ; 0057e020
    CALL engine_2d.c_drawTextXY_FUN_00402130 ; 0057e023
        ;   XREF to: 00402130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402130(int x_pos, int y_pos, char * text)
    ADD ESI,0xb                         ; 0057e028
    ADD ESP,0xc                         ; 0057e02b
    CMP EBX,EDI                         ; 0057e02e
    JL 0x0057e00a                       ; 0057e030
        ;   XREF to: 0057e00a (CONDITIONAL_JUMP)  ; LAB_0057e00a
    PUSH 0x0                            ; 0057e032
        ;   Label: LAB_0057e032
    MOV EBX,dword ptr [0x00678a60]      ; 0057e034 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0057e03a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0057e03b
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 0057e040
    PUSH 0x0                            ; 0057e043
        ;   Label: LAB_0057e043
    PUSH 0x0                            ; 0057e045
    PUSH 0x647edb                       ; 0057e047 | = "Move camera with slew keys.  Press SP..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e04c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,[0x0067b654]                ; 0057e051 | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 0057e056 | g_CGameInstance.delta_time_float
    FLD1                                ; 0057e05c
    FDIVRP                              ; 0057e05e
    ADD ESP,0xc                         ; 0057e060
    SUB ESP,0x8                         ; 0057e063
    FSTP double ptr [ESP]               ; 0057e066
    PUSH 0x647f1e                       ; 0057e069 | = "%f"
    LEA EAX,[ESP + 0xf9c]               ; 0057e06e
    PUSH EAX                            ; 0057e075
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057e076
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0057e07b | g_WindowHeight
    ADD ESP,0x10                        ; 0057e080
    SUB EAX,0xb                         ; 0057e083
    PUSH EAX                            ; 0057e086
    PUSH 0x0                            ; 0057e087
    LEA EAX,[ESP + 0xf98]               ; 0057e089
    PUSH EAX                            ; 0057e090
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e091
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057e096
    MOV EAX,dword ptr [ESP + 0x1150]    ; 0057e099
    CMP dword ptr [EAX + 0x144],0x0     ; 0057e0a0
    JZ 0x0057e19c                       ; 0057e0a7
        ;   XREF to: 0057e19c (CONDITIONAL_JUMP)  ; LAB_0057e19c
    MOV EAX,[0x00681ab8]                ; 0057e0ad | PTR_DAT_00681ab8
    SUB ESP,0x8                         ; 0057e0b2
    FLD float ptr [EAX + 0x8]           ; 0057e0b5 | DAT_03f48f8c
    FSTP double ptr [ESP]               ; 0057e0b8
    SUB ESP,0x8                         ; 0057e0bb
    FLD float ptr [EAX + 0x4]           ; 0057e0be | DAT_03f48f88
    FSTP double ptr [ESP]               ; 0057e0c1
    SUB ESP,0x8                         ; 0057e0c4
    FLD float ptr [EAX]                 ; 0057e0c7 | g_SkeletonPoolEnd
    FSTP double ptr [ESP]               ; 0057e0c9
    PUSH 0x647f21                       ; 0057e0cc | = "PANNING CAMERA: x: %f, y: %f, z: %f"
    LEA EAX,[ESP + 0xfac]               ; 0057e0d1
    PUSH EAX                            ; 0057e0d8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057e0d9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 0057e0de
    PUSH 0xb                            ; 0057e0e1
        ;   Label: LAB_0057e0e1
    PUSH 0x0                            ; 0057e0e3
    LEA EAX,[ESP + 0xf98]               ; 0057e0e5
    PUSH EAX                            ; 0057e0ec
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057e0ed
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057e0f2
    JMP 0x0057db22                      ; 0057e0f5
        ;   XREF to: 0057db22 (UNCONDITIONAL_JUMP)  ; LAB_0057db22
    FLD float ptr [ESP + 0x10e4]        ; 0057e0fa
        ;   Label: LAB_0057e0fa
    FCOMP float ptr [EDX + 0x4]         ; 0057e101 | DAT_03f48f88
    FNSTSW AX                           ; 0057e104
    SAHF                                ; 0057e106
    JNZ 0x0057df99                      ; 0057e107
        ;   XREF to: 0057df99 (CONDITIONAL_JUMP)  ; LAB_0057df99
    FLD float ptr [ESP + 0x10e8]        ; 0057e10d
    FCOMP float ptr [EDX + 0x8]         ; 0057e114 | DAT_03f48f8c
    FNSTSW AX                           ; 0057e117
    SAHF                                ; 0057e119
    JNZ 0x0057df99                      ; 0057e11a
        ;   XREF to: 0057df99 (CONDITIONAL_JUMP)  ; LAB_0057df99
    LEA ECX,[EDX + 0xc]                 ; 0057e120 | DAT_03f48f90
    FLD float ptr [ESP + 0x10ec]        ; 0057e123
    FCOMP float ptr [ECX]               ; 0057e12a | DAT_03f48f90
    FNSTSW AX                           ; 0057e12c
    SAHF                                ; 0057e12e
    JNZ 0x0057df99                      ; 0057e12f
        ;   XREF to: 0057df99 (CONDITIONAL_JUMP)  ; LAB_0057df99
    FLD float ptr [ESP + 0x10f0]        ; 0057e135
    FCOMP float ptr [ECX + 0x4]         ; 0057e13c | DAT_03f48f94
    FNSTSW AX                           ; 0057e13f
    SAHF                                ; 0057e141
    JNZ 0x0057df99                      ; 0057e142
        ;   XREF to: 0057df99 (CONDITIONAL_JUMP)  ; LAB_0057df99
    FLD float ptr [ESP + 0x10f4]        ; 0057e148
    FCOMP float ptr [ECX + 0x8]         ; 0057e14f | DAT_03f48f98
    FNSTSW AX                           ; 0057e152
    SAHF                                ; 0057e154
    JNZ 0x0057df99                      ; 0057e155
        ;   XREF to: 0057df99 (CONDITIONAL_JUMP)  ; LAB_0057df99
    FLD float ptr [ESP + 0x10f8]        ; 0057e15b
    FCOMP float ptr [EDX + 0x18]        ; 0057e162 | DAT_03f48f9c
    FNSTSW AX                           ; 0057e165
    SAHF                                ; 0057e167
    JNZ 0x0057df99                      ; 0057e168
        ;   XREF to: 0057df99 (CONDITIONAL_JUMP)  ; LAB_0057df99
    JMP 0x0057dfa2                      ; 0057e16e
        ;   XREF to: 0057dfa2 (UNCONDITIONAL_JUMP)  ; LAB_0057dfa2
    MOV ECX,dword ptr [EBP + 0x18]      ; 0057e173
        ;   Label: LAB_0057e173
    PUSH ECX                            ; 0057e176
    MOV EBX,dword ptr [ESP + 0x1168]    ; 0057e177
    PUSH EBX                            ; 0057e17e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057e17f
    PUSH ESI                            ; 0057e182
    MOV EDI,0x1                         ; 0057e183
    CALL core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 ; 0057e188
        ;   XREF to: 0057fd00 (UNCONDITIONAL_CALL)  ; undefined core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00()
    ADD ESP,0xc                         ; 0057e18d
    MOV dword ptr [ESP + 0x1168],EDI    ; 0057e190
    JMP 0x0057dfbe                      ; 0057e197
        ;   XREF to: 0057dfbe (UNCONDITIONAL_JUMP)  ; LAB_0057dfbe
    MOV EAX,[0x00681ab8]                ; 0057e19c | PTR_DAT_00681ab8
        ;   Label: LAB_0057e19c
    SUB ESP,0x8                         ; 0057e1a1
    FLD float ptr [EAX + 0x18]          ; 0057e1a4 | DAT_03f48f9c
    FSTP double ptr [ESP]               ; 0057e1a7
    FLD double ptr [0x006480a5]         ; 0057e1aa | DOUBLE_006480a5
    FLD float ptr [EAX + 0x10]          ; 0057e1b0 | DAT_03f48f94
    FMUL ST1                            ; 0057e1b3
    FLD double ptr [0x006480ad]         ; 0057e1b5 | DOUBLE_006480ad
    FXCH                                ; 0057e1bb
    FMUL ST1                            ; 0057e1bd
    SUB ESP,0x8                         ; 0057e1bf
    FSTP double ptr [ESP]               ; 0057e1c2
    FLD float ptr [EAX + 0xc]           ; 0057e1c5 | DAT_03f48f90
    FMULP ST2                           ; 0057e1c8
    FMULP                               ; 0057e1ca
    SUB ESP,0x8                         ; 0057e1cc
    FSTP double ptr [ESP]               ; 0057e1cf
    SUB ESP,0x8                         ; 0057e1d2
    FLD float ptr [EAX + 0x8]           ; 0057e1d5 | DAT_03f48f8c
    FSTP double ptr [ESP]               ; 0057e1d8
    SUB ESP,0x8                         ; 0057e1db
    FLD float ptr [EAX + 0x4]           ; 0057e1de | DAT_03f48f88
    FSTP double ptr [ESP]               ; 0057e1e1
    SUB ESP,0x8                         ; 0057e1e4
    FLD float ptr [EAX]                 ; 0057e1e7 | g_SkeletonPoolEnd
    FSTP double ptr [ESP]               ; 0057e1e9
    PUSH 0x647f45                       ; 0057e1ec | = "FIXED CAMERA: x: %f, y: %f, z: %f, p ..."
    LEA EAX,[ESP + 0xfc4]               ; 0057e1f1
    PUSH EAX                            ; 0057e1f8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057e1f9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x38                        ; 0057e1fe
    JMP 0x0057e0e1                      ; 0057e201
        ;   XREF to: 0057e0e1 (UNCONDITIONAL_JUMP)  ; LAB_0057e0e1
    PUSH 0x3b                           ; 0057e206
        ;   Label: LAB_0057e206
    MOV EAX,[0x0067cf44]                ; 0057e208 | g_CKeysPtr
    PUSH EAX                            ; 0057e20d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057e20e | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057e210
    ADD ESP,0x8                         ; 0057e213
    TEST EAX,EAX                        ; 0057e216
    JNZ 0x0057e268                      ; 0057e218
        ;   XREF to: 0057e268 (CONDITIONAL_JUMP)  ; LAB_0057e268
    MOV ESI,0x32758e4                   ; 0057e21a | g_CDemonCameraInstance
        ;   Label: LAB_0057e21a
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 0057e21f
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_0057e21f
    TEST EAX,EAX                        ; 0057e224
    JZ 0x0057d9ca                       ; 0057e226
        ;   XREF to: 0057d9ca (CONDITIONAL_JUMP)  ; LAB_0057d9ca
    MOV EDI,dword ptr [0x0067cf44]      ; 0057e22c | g_CKeysPtr
    PUSH EDI                            ; 0057e232 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 0057e233
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0057e238
    CMP EAX,0x46                        ; 0057e23b
    JNC 0x0057e3dc                      ; 0057e23e
        ;   XREF to: 0057e3dc (CONDITIONAL_JUMP)  ; LAB_0057e3dc
    CMP EAX,0x43                        ; 0057e244
    JC 0x0057e21f                       ; 0057e247
        ;   XREF to: 0057e21f (CONDITIONAL_JUMP)  ; LAB_0057e21f
    JA 0x0057e3fb                       ; 0057e249
        ;   XREF to: 0057e3fb (CONDITIONAL_JUMP)  ; LAB_0057e3fb
    CMP dword ptr [ESP + 0x1128],0x0    ; 0057e24f
    SETZ AL                             ; 0057e257
    AND EAX,0xff                        ; 0057e25a
    MOV dword ptr [ESP + 0x1128],EAX    ; 0057e25f
    JMP 0x0057e21f                      ; 0057e266
        ;   XREF to: 0057e21f (UNCONDITIONAL_JUMP)  ; LAB_0057e21f
    LEA EAX,[ESP + 0xbe8]               ; 0057e268
        ;   Label: LAB_0057e268
    PUSH EAX                            ; 0057e26f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057e270
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057e275
    PUSH 0x647f81                       ; 0057e278 | = "W\tToggle full screen mode"
    LEA EAX,[ESP + 0xbec]               ; 0057e27d
    PUSH EAX                            ; 0057e284
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057e285
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057e28a
    PUSH 0x647f9b                       ; 0057e28d | = "S\tToggle strobe mode"
    LEA EAX,[ESP + 0xbec]               ; 0057e292
    PUSH EAX                            ; 0057e299
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057e29a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057e29f
    PUSH 0x647fb0                       ; 0057e2a2 | = "O\tHold to show original background"
    LEA EAX,[ESP + 0xbec]               ; 0057e2a7
    PUSH EAX                            ; 0057e2ae
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057e2af
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057e2b4
    PUSH 0x647fd3                       ; 0057e2b7 | = "F\tEnter fov value manually"
    LEA EAX,[ESP + 0xbec]               ; 0057e2bc
    PUSH EAX                            ; 0057e2c3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057e2c4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057e2c9
    PUSH 0x647fee                       ; 0057e2cc | = "D\tToggle original background 'differ..."
    LEA EAX,[ESP + 0xbec]               ; 0057e2d1
    PUSH EAX                            ; 0057e2d8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057e2d9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057e2de
    PUSH 0x0                            ; 0057e2e1
    PUSH -0x1                           ; 0057e2e3
    PUSH 0x64801d                       ; 0057e2e5 | = "Camera editor hot keys"
    LEA EAX,[ESP + 0xbf4]               ; 0057e2ea
    PUSH EAX                            ; 0057e2f1
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057e2f2
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0057e2f7
    PUSH 0x0                            ; 0057e2fa
    LEA EAX,[ESP + 0xbec]               ; 0057e2fc
    PUSH EAX                            ; 0057e303
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057e304
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0057e309
    JMP 0x0057e21a                      ; 0057e30c
        ;   XREF to: 0057e21a (UNCONDITIONAL_JUMP)  ; LAB_0057e21a
    CMP dword ptr [ESP + 0x1140],0x0    ; 0057e311
        ;   Label: LAB_0057e311
    SETZ AL                             ; 0057e319
    AND EAX,0xff                        ; 0057e31c
    MOV dword ptr [ESP + 0x1140],EAX    ; 0057e321
    JZ 0x0057e34b                       ; 0057e328
        ;   XREF to: 0057e34b (CONDITIONAL_JUMP)  ; LAB_0057e34b
    PUSH 0xf0                           ; 0057e32a
    PUSH ESI                            ; 0057e32f | g_CDemonCameraInstance
        ;   Label: LAB_0057e32f
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 ; 0057e330
        ;   XREF to: 0044c190 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0057e335
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0057e338
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    XOR ECX,ECX                         ; 0057e33d
    MOV dword ptr [ESP + 0x1168],ECX    ; 0057e33f
    JMP 0x0057e21f                      ; 0057e346
        ;   XREF to: 0057e21f (UNCONDITIONAL_JUMP)  ; LAB_0057e21f
    PUSH 0x1e0                          ; 0057e34b
        ;   Label: LAB_0057e34b
    JMP 0x0057e32f                      ; 0057e350
        ;   XREF to: 0057e32f (UNCONDITIONAL_JUMP)  ; LAB_0057e32f
    CMP dword ptr [ESP + 0x1124],0x0    ; 0057e352
        ;   Label: LAB_0057e352
    SETZ AL                             ; 0057e35a
    AND EAX,0xff                        ; 0057e35d
    MOV dword ptr [ESP + 0x1124],EAX    ; 0057e362
    JMP 0x0057e21f                      ; 0057e369
        ;   XREF to: 0057e21f (UNCONDITIONAL_JUMP)  ; LAB_0057e21f
    MOV EAX,dword ptr [ESP + 0x1150]    ; 0057e36e
        ;   Label: LAB_0057e36e
    MOV EDI,dword ptr [EAX + 0x144]     ; 0057e375
    TEST EDI,EDI                        ; 0057e37b
    JZ 0x0057e398                       ; 0057e37d
        ;   XREF to: 0057e398 (CONDITIONAL_JUMP)  ; LAB_0057e398
    PUSH 0x648034                       ; 0057e37f | = "Can't set FOV on panning camera"
    MOV EDX,dword ptr [0x00678a60]      ; 0057e384 | g_CEditorToolsPtr
    PUSH EDX                            ; 0057e38a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057e38b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057e390
    JMP 0x0057e21f                      ; 0057e393
        ;   XREF to: 0057e21f (UNCONDITIONAL_JUMP)  ; LAB_0057e21f
    PUSH 0x1                            ; 0057e398
        ;   Label: LAB_0057e398
    PUSH 0x0                            ; 0057e39a
    PUSH 0x0                            ; 0057e39c
    MOV EAX,[0x00681ab8]                ; 0057e39e | PTR_DAT_00681ab8
    PUSH EDI                            ; 0057e3a3
    ADD EAX,0x18                        ; 0057e3a4
    PUSH EAX                            ; 0057e3a7 | DAT_03f48f9c
    PUSH 0x648054                       ; 0057e3a8 | = "Enter FOV"
    MOV EAX,[0x00678a60]                ; 0057e3ad | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0057e3b2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0057e3b3
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0057e3b8
    JMP 0x0057e21f                      ; 0057e3bb
        ;   XREF to: 0057e21f (UNCONDITIONAL_JUMP)  ; LAB_0057e21f
    CMP dword ptr [ESP + 0x112c],0x0    ; 0057e3c0
        ;   Label: LAB_0057e3c0
    SETZ AL                             ; 0057e3c8
    AND EAX,0xff                        ; 0057e3cb
    MOV dword ptr [ESP + 0x112c],EAX    ; 0057e3d0
    JMP 0x0057e21f                      ; 0057e3d7
        ;   XREF to: 0057e21f (UNCONDITIONAL_JUMP)  ; LAB_0057e21f
    JBE 0x0057e36e                      ; 0057e3dc
        ;   XREF to: 0057e36e (CONDITIONAL_JUMP)  ; LAB_0057e36e
        ;   Label: LAB_0057e3dc
    CMP EAX,0x53                        ; 0057e3de
    JC 0x0057e21f                       ; 0057e3e1
        ;   XREF to: 0057e21f (CONDITIONAL_JUMP)  ; LAB_0057e21f
    JBE 0x0057e352                      ; 0057e3e7
        ;   XREF to: 0057e352 (CONDITIONAL_JUMP)  ; LAB_0057e352
    CMP EAX,0x57                        ; 0057e3ed
    JZ 0x0057e311                       ; 0057e3f0
        ;   XREF to: 0057e311 (CONDITIONAL_JUMP)  ; LAB_0057e311
    JMP 0x0057e21f                      ; 0057e3f6
        ;   XREF to: 0057e21f (UNCONDITIONAL_JUMP)  ; LAB_0057e21f
    CMP EAX,0x44                        ; 0057e3fb
        ;   Label: LAB_0057e3fb
    JZ 0x0057e3c0                       ; 0057e3fe
        ;   XREF to: 0057e3c0 (CONDITIONAL_JUMP)  ; LAB_0057e3c0
    JMP 0x0057e21f                      ; 0057e400
        ;   XREF to: 0057e21f (UNCONDITIONAL_JUMP)  ; LAB_0057e21f
    PUSH 0xd8c                          ; 0057e405
        ;   Label: LAB_0057e405
    PUSH 0x648086                       ; 0057e40a | = "..\\core\\setedit.cpp"
    PUSH EAX                            ; 0057e40f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0057e410
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057e415
    MOV EAX,dword ptr [ESP + 0x1120]    ; 0057e418
    MOV ESP,EBP                         ; 0057e41f
    POP EBP                             ; 0057e421
    POP EDI                             ; 0057e422
    POP ESI                             ; 0057e423
    POP EBX                             ; 0057e424
    RET                                 ; 0057e425

