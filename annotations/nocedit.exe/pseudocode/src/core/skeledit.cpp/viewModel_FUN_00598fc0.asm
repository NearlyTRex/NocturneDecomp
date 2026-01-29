; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_viewModel_FUN_00598fc0(void)
;
; Local Variables:
; undefined1       Stack[-0x118]:1  local_118
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005078ff
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_00649d0a
;   TerminatedCString s_rt_00649d1f
;   TerminatedCString s_d_00649d22
;   TerminatedCString s_core_skeledit_cpp_00649d26
;   TerminatedCString s_Deleting_old_s_file_00649d3b
;   TerminatedCString s_core_skeledit_cpp_00649d51
;   TerminatedCString s_core_skeledit_cpp_00649d66
;   TerminatedCString s_wt_00649d7b
;   TerminatedCString s_version_00649d7e
;   TerminatedCString s_d_00649d8a
;   TerminatedCString s_lastPOSimported_00649d8e
;   TerminatedCString s_s_00649da2
;   TerminatedCString s_lastMOTimported_00649da8
;   TerminatedCString s_s_00649dbc
;   TerminatedCString s_lastTestSkeletonDir_00649dc2
;   ... and 34 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_freeAllModels_FUN_005a1dc0
;   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_remove_FUN_005ff9d0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH 0x134                          ; 00598fc0
        ;   Label: core_skeledit.cpp_viewModel_FUN_00598fc0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00598fc5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 00598fca
    PUSH ESI                            ; 00598fcb
    PUSH EDI                            ; 00598fcc
    PUSH EBP                            ; 00598fcd
    SUB ESP,0x108                       ; 00598fce
    PUSH 0x124                          ; 00598fd4
    PUSH 0x649d0a                       ; 00598fd9 | = "..\\core\\skeledit.cpp"
    PUSH 0x649d1f                       ; 00598fde | = "rt"
    PUSH 0x0                            ; 00598fe3
    PUSH 0x681868                       ; 00598fe5 | = "skeledit.ini"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00598fea
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00598fef
    MOV EDI,EAX                         ; 00598ff2
    TEST EAX,EAX                        ; 00598ff4
    JZ 0x00599119                       ; 00598ff6
        ;   XREF to: 00599119 (CONDITIONAL_JUMP)  ; LAB_00599119
    MOV EBX,0x1                         ; 00598ffc
    MOV ESI,EAX                         ; 00599001
    PUSH ESI                            ; 00599003
        ;   Label: LAB_00599003
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599004
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599009
    TEST EAX,EAX                        ; 0059900c
    JL 0x0059901a                       ; 0059900e
        ;   XREF to: 0059901a (CONDITIONAL_JUMP)  ; LAB_0059901a
    CMP EAX,0xa                         ; 00599010
    JNZ 0x00599003                      ; 00599013
        ;   XREF to: 00599003 (CONDITIONAL_JUMP)  ; LAB_00599003
    DEC EBX                             ; 00599015
    TEST EBX,EBX                        ; 00599016
    JG 0x00599003                       ; 00599018
        ;   XREF to: 00599003 (CONDITIONAL_JUMP)  ; LAB_00599003
    LEA EAX,[ESP + 0x104]               ; 0059901a
        ;   Label: LAB_0059901a
    PUSH EAX                            ; 00599021
    PUSH 0x649d22                       ; 00599022 | = "%d\n"
    PUSH EDI                            ; 00599027
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00599028
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0059902d
    MOV EDX,dword ptr [ESP + 0x104]     ; 00599030
    CMP EDX,0x1                         ; 00599037
    JNZ 0x0059928f                      ; 0059903a
        ;   XREF to: 0059928f (CONDITIONAL_JUMP)  ; LAB_0059928f
    MOV EBX,EDX                         ; 00599040
    MOV ESI,EDI                         ; 00599042
    PUSH ESI                            ; 00599044
        ;   Label: LAB_00599044
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599045
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0059904a
    TEST EAX,EAX                        ; 0059904d
    JL 0x0059905b                       ; 0059904f
        ;   XREF to: 0059905b (CONDITIONAL_JUMP)  ; LAB_0059905b
    CMP EAX,0xa                         ; 00599051
    JNZ 0x00599044                      ; 00599054
        ;   XREF to: 00599044 (CONDITIONAL_JUMP)  ; LAB_00599044
    DEC EBX                             ; 00599056
    TEST EBX,EBX                        ; 00599057
    JG 0x00599044                       ; 00599059
        ;   XREF to: 00599044 (CONDITIONAL_JUMP)  ; LAB_00599044
    MOV EBX,0x3670848                   ; 0059905b | DAT_03670848
        ;   Label: LAB_0059905b
    XOR AH,AH                           ; 00599060
    MOV ESI,EDI                         ; 00599062
    MOV byte ptr [0x03670848],AH        ; 00599064 | DAT_03670848
    PUSH ESI                            ; 0059906a
        ;   Label: LAB_0059906a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059906b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599070
    TEST EAX,EAX                        ; 00599073
    JL 0x00599080                       ; 00599075
        ;   XREF to: 00599080 (CONDITIONAL_JUMP)  ; LAB_00599080
    CMP EAX,0xa                         ; 00599077
    JNZ 0x005992cd                      ; 0059907a
        ;   XREF to: 005992cd (CONDITIONAL_JUMP)  ; LAB_005992cd
    MOV EBX,0x1                         ; 00599080
        ;   Label: LAB_00599080
    MOV ESI,EDI                         ; 00599085
    PUSH ESI                            ; 00599087
        ;   Label: LAB_00599087
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599088
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0059908d
    TEST EAX,EAX                        ; 00599090
    JL 0x0059909e                       ; 00599092
        ;   XREF to: 0059909e (CONDITIONAL_JUMP)  ; LAB_0059909e
    CMP EAX,0xa                         ; 00599094
    JNZ 0x00599087                      ; 00599097
        ;   XREF to: 00599087 (CONDITIONAL_JUMP)  ; LAB_00599087
    DEC EBX                             ; 00599099
    TEST EBX,EBX                        ; 0059909a
    JG 0x00599087                       ; 0059909c
        ;   XREF to: 00599087 (CONDITIONAL_JUMP)  ; LAB_00599087
    MOV EBX,0x3670950                   ; 0059909e | DAT_03670950
        ;   Label: LAB_0059909e
    XOR DL,DL                           ; 005990a3
    MOV ESI,EDI                         ; 005990a5
    MOV byte ptr [0x03670950],DL        ; 005990a7 | DAT_03670950
    PUSH ESI                            ; 005990ad
        ;   Label: LAB_005990ad
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005990ae
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005990b3
    TEST EAX,EAX                        ; 005990b6
    JL 0x005990c3                       ; 005990b8
        ;   XREF to: 005990c3 (CONDITIONAL_JUMP)  ; LAB_005990c3
    CMP EAX,0xa                         ; 005990ba
    JNZ 0x00599325                      ; 005990bd
        ;   XREF to: 00599325 (CONDITIONAL_JUMP)  ; LAB_00599325
    MOV EBX,0x1                         ; 005990c3
        ;   Label: LAB_005990c3
    MOV ESI,EDI                         ; 005990c8
    PUSH ESI                            ; 005990ca
        ;   Label: LAB_005990ca
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005990cb
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005990d0
    TEST EAX,EAX                        ; 005990d3
    JL 0x005990e1                       ; 005990d5
        ;   XREF to: 005990e1 (CONDITIONAL_JUMP)  ; LAB_005990e1
    CMP EAX,0xa                         ; 005990d7
    JNZ 0x005990ca                      ; 005990da
        ;   XREF to: 005990ca (CONDITIONAL_JUMP)  ; LAB_005990ca
    DEC EBX                             ; 005990dc
    TEST EBX,EBX                        ; 005990dd
    JG 0x005990ca                       ; 005990df
        ;   XREF to: 005990ca (CONDITIONAL_JUMP)  ; LAB_005990ca
    MOV EBX,0x3670a58                   ; 005990e1 | DAT_03670a58
        ;   Label: LAB_005990e1
    XOR DH,DH                           ; 005990e6
    MOV ESI,EDI                         ; 005990e8
    MOV byte ptr [0x03670a58],DH        ; 005990ea | DAT_03670a58
    PUSH ESI                            ; 005990f0
        ;   Label: LAB_005990f0
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005990f1
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005990f6
    TEST EAX,EAX                        ; 005990f9
    JL 0x00599106                       ; 005990fb
        ;   XREF to: 00599106 (CONDITIONAL_JUMP)  ; LAB_00599106
    CMP EAX,0xa                         ; 005990fd
    JNZ 0x0059937d                      ; 00599100
        ;   XREF to: 0059937d (CONDITIONAL_JUMP)  ; LAB_0059937d
    PUSH 0x13f                          ; 00599106
        ;   Label: LAB_00599106
    PUSH 0x649d51                       ; 0059910b | = "..\\core\\skeledit.cpp"
    PUSH EDI                            ; 00599110
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00599111
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00599116
    MOV ESI,0x64e12c                    ; 00599119 | = "z:\\meshlod"
        ;   Label: LAB_00599119
    MOV EDI,0x67d3a0                    ; 0059911e | = "meshlod"
    PUSH EDI                            ; 00599123 | = "meshlod"
    MOV AL,byte ptr [ESI]               ; 00599124 | = "z:\\meshlod" | s_\meshlod_0064e12e
        ;   Label: LAB_00599124
    MOV byte ptr [EDI],AL               ; 00599126 | = "meshlod" | s_shlod_0067d3a2
    CMP AL,0x0                          ; 00599128
    JZ 0x0059913c                       ; 0059912a
        ;   XREF to: 0059913c (CONDITIONAL_JUMP)  ; LAB_0059913c
    MOV AL,byte ptr [ESI + 0x1]         ; 0059912c | s_:\meshlod_0064e12d | s_meshlod_0064e12f
    ADD ESI,0x2                         ; 0059912f
    MOV byte ptr [EDI + 0x1],AL         ; 00599132 | s_eshlod_0067d3a1 | s_hlod_0067d3a3
    ADD EDI,0x2                         ; 00599135
    CMP AL,0x0                          ; 00599138
    JNZ 0x00599124                      ; 0059913a
        ;   XREF to: 00599124 (CONDITIONAL_JUMP)  ; LAB_00599124
    POP EDI                             ; 0059913c
        ;   Label: LAB_0059913c
    XOR EBP,EBP                         ; 0059913d
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0059913f
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0059913f
    PUSH EBP                            ; 00599144
    PUSH EBP                            ; 00599145
    PUSH 0x64e137                       ; 00599146 | = "Nocturne(R) Skeleton system editor menu"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0059914b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00599150
    PUSH 0x2c                           ; 00599153
    PUSH EBP                            ; 00599155
    PUSH 0x64e15f                       ; 00599156 | = "3.  View a deformable model in action!"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0059915b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00599160
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00599163
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00599168
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0 ; 0059916d
        ;   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0()
    CALL core_skeleton.cpp_freeAllModels_FUN_005a1dc0 ; 00599172
        ;   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllModels_FUN_005a1dc0()
    MOV EBX,dword ptr [0x0067cf44]      ; 00599177 | g_CKeysInstance | g_CKeysPtr
    PUSH EBX                            ; 0059917d | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 0059917e
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00599183
    MOV ESI,EAX                         ; 00599186
    CMP EAX,0x33                        ; 00599188
    JNZ 0x0059924e                      ; 0059918b
        ;   XREF to: 0059924e (CONDITIONAL_JUMP)  ; LAB_0059924e
    PUSH EBP                            ; 00599191
    LEA EAX,[ESP + 0x4]                 ; 00599192
    PUSH EAX                            ; 00599196
    PUSH 0x64e186                       ; 00599197 | = "*.dfm"
    PUSH 0x64e18c                       ; 0059919c | = "models"
    PUSH 0x64e193                       ; 005991a1 | = "Select model to view"
    MOV EDI,dword ptr [0x00678a60]      ; 005991a6 | g_CEditorToolsPtr
    PUSH EDI                            ; 005991ac | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 005991ad
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 005991b2
    TEST EAX,EAX                        ; 005991b5
    JZ 0x0059924e                       ; 005991b7
        ;   XREF to: 0059924e (CONDITIONAL_JUMP)  ; LAB_0059924e
    PUSH 0x1b79                         ; 005991bd
    PUSH 0x64e0d2                       ; 005991c2 | = "..\\core\\skeledit.cpp"
    PUSH 0x22b4                         ; 005991c7
    LEA EDI,[ESP + 0xc]                 ; 005991cc
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005991d0
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005991d5
    TEST EAX,EAX                        ; 005991d8
    JZ 0x005991e5                       ; 005991da
        ;   XREF to: 005991e5 (CONDITIONAL_JUMP)  ; LAB_005991e5
    PUSH EAX                            ; 005991dc
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 005991dd
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005991e2
    MOV EBX,EAX                         ; 005991e5
        ;   Label: LAB_005991e5
    TEST EAX,EAX                        ; 005991e7
    JNZ 0x0059920d                      ; 005991e9
        ;   XREF to: 0059920d (CONDITIONAL_JUMP)  ; LAB_0059920d
    MOV EAX,0x64e0e7                    ; 005991eb | = "..\\core\\skeledit.cpp"
    MOV EDX,0x1b7a                      ; 005991f0
    PUSH 0x64e0fc                       ; 005991f5 | = "viewModel - out of memory!"
    MOV [0x02f0ca48],EAX                ; 005991fa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005991ff | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599205
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059920a
    PUSH EDI                            ; 0059920d
        ;   Label: LAB_0059920d
    PUSH EBX                            ; 0059920e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0059920f
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00599214
    PUSH EBX                            ; 00599217
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00599218
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059921d
    PUSH EBX                            ; 00599220
    MOV EDI,0x1b7e                      ; 00599221
    CALL core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 ; 00599226
        ;   XREF to: 005968b0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance * this_ptr)
    MOV ECX,0x64e117                    ; 0059922b | = "..\\core\\skeledit.cpp"
    ADD ESP,0x4                         ; 00599230
    MOV dword ptr [0x02f0d944],EDI      ; 00599233 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 00599239 | g_CurrentDebugFilename
    TEST EBX,EBX                        ; 0059923f
    JZ 0x0059924e                       ; 00599241
        ;   XREF to: 0059924e (CONDITIONAL_JUMP)  ; LAB_0059924e
    PUSH 0x2                            ; 00599243
    MOV EAX,dword ptr [EBX + 0x50]      ; 00599245
    PUSH EBX                            ; 00599248
    CALL dword ptr [EAX]                ; 00599249
    ADD ESP,0x8                         ; 0059924b
    CMP ESI,0x1b                        ; 0059924e
        ;   Label: LAB_0059924e
    JNZ 0x0059913f                      ; 00599251
        ;   XREF to: 0059913f (CONDITIONAL_JUMP)  ; LAB_0059913f
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00599257
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x144                          ; 0059925c
    PUSH 0x649d66                       ; 00599261 | = "..\\core\\skeledit.cpp"
    PUSH 0x649d7b                       ; 00599266 | = "wt"
    PUSH 0x0                            ; 0059926b
    PUSH 0x681868                       ; 0059926d | = "skeledit.ini"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00599272
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 00599277
    ADD ESP,0x14                        ; 00599279
    TEST EAX,EAX                        ; 0059927c
    JNZ 0x005993d5                      ; 0059927e
        ;   XREF to: 005993d5 (CONDITIONAL_JUMP)  ; LAB_005993d5
    ADD ESP,0x108                       ; 00599284
    POP EBP                             ; 0059928a
    POP EDI                             ; 0059928b
    POP ESI                             ; 0059928c
    POP EBX                             ; 0059928d
    RET                                 ; 0059928e
    PUSH 0x12d                          ; 0059928f
        ;   Label: LAB_0059928f
    PUSH 0x649d26                       ; 00599294 | = "..\\core\\skeledit.cpp"
    PUSH EDI                            ; 00599299
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0059929a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0059929f
    PUSH 0x681868                       ; 005992a2 | = "skeledit.ini"
    PUSH 0x649d3b                       ; 005992a7 | = "Deleting old %s file."
    MOV ECX,dword ptr [0x00678a60]      ; 005992ac | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 005992b2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 005992b3
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005992b8
    PUSH 0x681868                       ; 005992bb | = "skeledit.ini"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 005992c0
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 005992c5
    JMP 0x00599119                      ; 005992c8
        ;   XREF to: 00599119 (UNCONDITIONAL_JUMP)  ; LAB_00599119
    CMP EAX,0x22                        ; 005992cd
        ;   Label: LAB_005992cd
    JNZ 0x0059906a                      ; 005992d0
        ;   XREF to: 0059906a (CONDITIONAL_JUMP)  ; LAB_0059906a
    PUSH ESI                            ; 005992d6
        ;   Label: LAB_005992d6
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005992d7
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005992dc
    MOV EDX,EAX                         ; 005992df
    TEST EAX,EAX                        ; 005992e1
    JL 0x00599080                       ; 005992e3
        ;   XREF to: 00599080 (CONDITIONAL_JUMP)  ; LAB_00599080
    CMP EAX,0xa                         ; 005992e9
    JZ 0x00599080                       ; 005992ec
        ;   XREF to: 00599080 (CONDITIONAL_JUMP)  ; LAB_00599080
    CMP EAX,0x22                        ; 005992f2
    JNZ 0x0059931c                      ; 005992f5
        ;   XREF to: 0059931c (CONDITIONAL_JUMP)  ; LAB_0059931c
    MOV EBX,0x1                         ; 005992f7
    PUSH ESI                            ; 005992fc
        ;   Label: LAB_005992fc
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005992fd
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599302
    TEST EAX,EAX                        ; 00599305
    JL 0x00599080                       ; 00599307
        ;   XREF to: 00599080 (CONDITIONAL_JUMP)  ; LAB_00599080
    CMP EAX,0xa                         ; 0059930d
    JNZ 0x005992fc                      ; 00599310
        ;   XREF to: 005992fc (CONDITIONAL_JUMP)  ; LAB_005992fc
    DEC EBX                             ; 00599312
    TEST EBX,EBX                        ; 00599313
    JG 0x005992fc                       ; 00599315
        ;   XREF to: 005992fc (CONDITIONAL_JUMP)  ; LAB_005992fc
    JMP 0x00599080                      ; 00599317
        ;   XREF to: 00599080 (UNCONDITIONAL_JUMP)  ; LAB_00599080
    INC EBX                             ; 0059931c | DAT_03670849
        ;   Label: LAB_0059931c
    MOV byte ptr [EBX + -0x1],DL        ; 0059931d | DAT_03670848
    MOV byte ptr [EBX],0x0              ; 00599320 | DAT_03670849
    JMP 0x005992d6                      ; 00599323
        ;   XREF to: 005992d6 (UNCONDITIONAL_JUMP)  ; LAB_005992d6
    CMP EAX,0x22                        ; 00599325
        ;   Label: LAB_00599325
    JNZ 0x005990ad                      ; 00599328
        ;   XREF to: 005990ad (CONDITIONAL_JUMP)  ; LAB_005990ad
    PUSH ESI                            ; 0059932e
        ;   Label: LAB_0059932e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059932f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599334
    MOV EDX,EAX                         ; 00599337
    TEST EAX,EAX                        ; 00599339
    JL 0x005990c3                       ; 0059933b
        ;   XREF to: 005990c3 (CONDITIONAL_JUMP)  ; LAB_005990c3
    CMP EAX,0xa                         ; 00599341
    JZ 0x005990c3                       ; 00599344
        ;   XREF to: 005990c3 (CONDITIONAL_JUMP)  ; LAB_005990c3
    CMP EAX,0x22                        ; 0059934a
    JNZ 0x00599374                      ; 0059934d
        ;   XREF to: 00599374 (CONDITIONAL_JUMP)  ; LAB_00599374
    MOV EBX,0x1                         ; 0059934f
    PUSH ESI                            ; 00599354
        ;   Label: LAB_00599354
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599355
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0059935a
    TEST EAX,EAX                        ; 0059935d
    JL 0x005990c3                       ; 0059935f
        ;   XREF to: 005990c3 (CONDITIONAL_JUMP)  ; LAB_005990c3
    CMP EAX,0xa                         ; 00599365
    JNZ 0x00599354                      ; 00599368
        ;   XREF to: 00599354 (CONDITIONAL_JUMP)  ; LAB_00599354
    DEC EBX                             ; 0059936a
    TEST EBX,EBX                        ; 0059936b
    JG 0x00599354                       ; 0059936d
        ;   XREF to: 00599354 (CONDITIONAL_JUMP)  ; LAB_00599354
    JMP 0x005990c3                      ; 0059936f
        ;   XREF to: 005990c3 (UNCONDITIONAL_JUMP)  ; LAB_005990c3
    INC EBX                             ; 00599374 | DAT_03670951
        ;   Label: LAB_00599374
    MOV byte ptr [EBX + -0x1],DL        ; 00599375 | DAT_03670950
    MOV byte ptr [EBX],0x0              ; 00599378 | DAT_03670951
    JMP 0x0059932e                      ; 0059937b
        ;   XREF to: 0059932e (UNCONDITIONAL_JUMP)  ; LAB_0059932e
    CMP EAX,0x22                        ; 0059937d
        ;   Label: LAB_0059937d
    JNZ 0x005990f0                      ; 00599380
        ;   XREF to: 005990f0 (CONDITIONAL_JUMP)  ; LAB_005990f0
    PUSH ESI                            ; 00599386
        ;   Label: LAB_00599386
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599387
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0059938c
    MOV EDX,EAX                         ; 0059938f
    TEST EAX,EAX                        ; 00599391
    JL 0x00599106                       ; 00599393
        ;   XREF to: 00599106 (CONDITIONAL_JUMP)  ; LAB_00599106
    CMP EAX,0xa                         ; 00599399
    JZ 0x00599106                       ; 0059939c
        ;   XREF to: 00599106 (CONDITIONAL_JUMP)  ; LAB_00599106
    CMP EAX,0x22                        ; 005993a2
    JNZ 0x005993cc                      ; 005993a5
        ;   XREF to: 005993cc (CONDITIONAL_JUMP)  ; LAB_005993cc
    MOV EBX,0x1                         ; 005993a7
    PUSH ESI                            ; 005993ac
        ;   Label: LAB_005993ac
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005993ad
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005993b2
    TEST EAX,EAX                        ; 005993b5
    JL 0x00599106                       ; 005993b7
        ;   XREF to: 00599106 (CONDITIONAL_JUMP)  ; LAB_00599106
    CMP EAX,0xa                         ; 005993bd
    JNZ 0x005993ac                      ; 005993c0
        ;   XREF to: 005993ac (CONDITIONAL_JUMP)  ; LAB_005993ac
    DEC EBX                             ; 005993c2
    TEST EBX,EBX                        ; 005993c3
    JG 0x005993ac                       ; 005993c5
        ;   XREF to: 005993ac (CONDITIONAL_JUMP)  ; LAB_005993ac
    JMP 0x00599106                      ; 005993c7
        ;   XREF to: 00599106 (UNCONDITIONAL_JUMP)  ; LAB_00599106
    INC EBX                             ; 005993cc | DAT_03670a59
        ;   Label: LAB_005993cc
    MOV byte ptr [EBX + -0x1],DL        ; 005993cd | DAT_03670a58
    MOV byte ptr [EBX],0x0              ; 005993d0 | DAT_03670a59
    JMP 0x00599386                      ; 005993d3
        ;   XREF to: 00599386 (UNCONDITIONAL_JUMP)  ; LAB_00599386
    PUSH 0x649d7e                       ; 005993d5 | = "// version\n"
        ;   Label: LAB_005993d5
    PUSH EAX                            ; 005993da
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005993db
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 005993e0
    PUSH 0x1                            ; 005993e3
    PUSH 0x649d8a                       ; 005993e5 | = "%d\n"
    PUSH EBX                            ; 005993ea
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005993eb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005993f0
    PUSH 0x649d8e                       ; 005993f3 | = "// lastPOSimported\n"
    PUSH EBX                            ; 005993f8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005993f9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 005993fe
    PUSH 0x3670848                      ; 00599401 | DAT_03670848
    PUSH 0x649da2                       ; 00599406 | = "\"%s\"\n"
    PUSH EBX                            ; 0059940b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059940c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00599411
    PUSH 0x649da8                       ; 00599414 | = "// lastMOTimported\n"
    PUSH EBX                            ; 00599419
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059941a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0059941f
    PUSH 0x3670950                      ; 00599422 | DAT_03670950
    PUSH 0x649dbc                       ; 00599427 | = "\"%s\"\n"
    PUSH EBX                            ; 0059942c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059942d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00599432
    PUSH 0x649dc2                       ; 00599435 | = "// lastTestSkeletonDir\n"
    PUSH EBX                            ; 0059943a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059943b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00599440
    PUSH 0x3670a58                      ; 00599443 | DAT_03670a58
    PUSH 0x649dda                       ; 00599448 | = "\"%s\"\n"
    PUSH EBX                            ; 0059944d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059944e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00599453
    PUSH 0x154                          ; 00599456
    PUSH 0x649de0                       ; 0059945b | = "..\\core\\skeledit.cpp"
    PUSH EBX                            ; 00599460
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00599461
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00599466
    ADD ESP,0x108                       ; 00599469
    POP EBP                             ; 0059946f
    POP EDI                             ; 00599470
    POP ESI                             ; 00599471
    POP EBX                             ; 00599472
    RET                                 ; 00599473

