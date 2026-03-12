; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_loadPalette_FUN_0046e810(void)
;
; Local Variables:
; char[80]         Stack[-0xb8]:80  local_b8
; char[80]         Stack[-0x68]:80  local_68
; char *           Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_s_1_Load_model_palette_0061df26
;   TerminatedCString s_s_2_Load_ACT_file_palett_0061df3e
;   TerminatedCString s_s_3_Load_default_editor__0061df5a
;   TerminatedCString s_Enter_option_1_0061df7b
;   TerminatedCString s_No_model_loaded_Hit_a_ke_0061df8f
;   TerminatedCString s_ACT_0061dfae
;   undefined4 DAT_0061dfaf
;   undefined4 DAT_0061dfb0
;   undefined4 s_T_0061dfb1
;   TerminatedCString s_ACT_0061dfb3
;   undefined4 DAT_0061dfb4
;   undefined4 DAT_0061dfb5
;   undefined4 s_T_0061dfb6
;   TerminatedCString s_art_0061dfb8
;   TerminatedCString s_File_not_found_Hit_a_key_0061dfbc
;   ... and 21 more
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_doNothing_FUN_00401590
;   engine_2d.c_doNothing_FUN_00402860
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   engine_2d.c_loadOrBuildColorMap_FUN_00402930
;   engine_2d.c_loadPaletteFile_FUN_004015a0
;   engine_dosio.c_getFileSize_FUN_00481880
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e810
        ;   Label: shape_design.c_loadPalette_FUN_0046e810
    PUSH ESI                            ; 0046e811
    PUSH EDI                            ; 0046e812
    PUSH EBP                            ; 0046e813
    MOV EBP,ESP                         ; 0046e814
    SUB ESP,0xa8                        ; 0046e816
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046e81c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x16                           ; 0046e821
    PUSH 0x0                            ; 0046e823
    MOV EAX,0x61df26                    ; 0046e825 | = "  1) Load model palette"
    PUSH EAX                            ; 0046e82a | = "  1) Load model palette"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e82b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e830
    PUSH 0x21                           ; 0046e833
    PUSH 0x0                            ; 0046e835
    MOV EAX,0x61df3e                    ; 0046e837 | = "  2) Load .ACT file palette"
    PUSH EAX                            ; 0046e83c | = "  2) Load .ACT file palette"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e83d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e842
    PUSH 0x2c                           ; 0046e845
    PUSH 0x0                            ; 0046e847
    MOV EAX,0x61df5a                    ; 0046e849 | = "  3) Load default editor palette"
    PUSH EAX                            ; 0046e84e | = "  3) Load default editor palette"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e84f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e854
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046e857
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,0x61df7b                    ; 0046e85c | = "Enter option [1] : "
    PUSH EAX                            ; 0046e861 | = "Enter option [1] : "
    PUSH 0x0                            ; 0046e862
    PUSH 0x0                            ; 0046e864
    PUSH 0x14                           ; 0046e866
    LEA EAX,[EBP + 0xffffff58]          ; 0046e868
    PUSH EAX                            ; 0046e86e
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046e86f
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046e874
    CMP EAX,0x1b                        ; 0046e877
    JNZ 0x0046e881                      ; 0046e87a
        ;   XREF to: 0046e881 (CONDITIONAL_JUMP)  ; LAB_0046e881
    JMP 0x0046eb77                      ; 0046e87c
        ;   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)  ; LAB_0046eb77
    MOV dword ptr [EBP + -0x4],0x1      ; 0046e881
        ;   Label: LAB_0046e881
    LEA EDI,[EBP + 0xffffff58]          ; 0046e888
    SUB ECX,ECX                         ; 0046e88e
    DEC ECX                             ; 0046e890
    XOR EAX,EAX                         ; 0046e891
    SCASB.REPNE ES:EDI                  ; 0046e893
    NOT ECX                             ; 0046e895
    DEC ECX                             ; 0046e897
    TEST ECX,ECX                        ; 0046e898
    JZ 0x0046e8ae                       ; 0046e89a
        ;   XREF to: 0046e8ae (CONDITIONAL_JUMP)  ; LAB_0046e8ae
    LEA EAX,[EBP + 0xffffff58]          ; 0046e89c
    PUSH EAX                            ; 0046e8a2
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046e8a3
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0046e8a8
    MOV dword ptr [EBP + -0x4],EAX      ; 0046e8ab
    CMP dword ptr [EBP + -0x4],0x1      ; 0046e8ae
        ;   Label: LAB_0046e8ae
    JNZ 0x0046ea04                      ; 0046e8b2
        ;   XREF to: 0046ea04 (CONDITIONAL_JUMP)  ; LAB_0046ea04
    CMP byte ptr [0x0066eda8],0x0       ; 0046e8b8 | g_LoadedModelName
    JNZ 0x0046e8e7                      ; 0046e8bf
        ;   XREF to: 0046e8e7 (CONDITIONAL_JUMP)  ; LAB_0046e8e7
    PUSH 0x42                           ; 0046e8c1
    PUSH 0x0                            ; 0046e8c3
    MOV EAX,0x61df8f                    ; 0046e8c5 | = "No model loaded.  Hit a key..."
    PUSH EAX                            ; 0046e8ca | = "No model loaded.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e8cb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e8d0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046e8d3
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046e8d8
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046e8dd
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x0046eb77                      ; 0046e8e2
        ;   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)  ; LAB_0046eb77
    MOV ESI,0x66eda8                    ; 0046e8e7 | g_LoadedModelName
        ;   Label: LAB_0046e8e7
    LEA EDI,[EBP + -0x58]               ; 0046e8ec
    PUSH EDI                            ; 0046e8ef
    MOV AL,byte ptr [ESI]               ; 0046e8f0 | g_LoadedModelName | s__0066edaa
        ;   Label: LAB_0046e8f0
    MOV byte ptr [EDI],AL               ; 0046e8f2
    CMP AL,0x0                          ; 0046e8f4
    JZ 0x0046e908                       ; 0046e8f6
        ;   XREF to: 0046e908 (CONDITIONAL_JUMP)  ; LAB_0046e908
    MOV AL,byte ptr [ESI + 0x1]         ; 0046e8f8 | s__0066eda9 | DAT_0066edab
    ADD ESI,0x2                         ; 0046e8fb
    MOV byte ptr [EDI + 0x1],AL         ; 0046e8fe
    ADD EDI,0x2                         ; 0046e901
    CMP AL,0x0                          ; 0046e904
    JNZ 0x0046e8f0                      ; 0046e906
        ;   XREF to: 0046e8f0 (CONDITIONAL_JUMP)  ; LAB_0046e8f0
    POP EDI                             ; 0046e908
        ;   Label: LAB_0046e908
    MOV EDX,0x2e                        ; 0046e909
    LEA ESI,[EBP + -0x58]               ; 0046e90e
    MOV AL,byte ptr [ESI]               ; 0046e911
        ;   Label: LAB_0046e911
    CMP AL,DL                           ; 0046e913
    JZ 0x0046e929                       ; 0046e915
        ;   XREF to: 0046e929 (CONDITIONAL_JUMP)  ; LAB_0046e929
    CMP AL,0x0                          ; 0046e917
    JZ 0x0046e927                       ; 0046e919
        ;   XREF to: 0046e927 (CONDITIONAL_JUMP)  ; LAB_0046e927
    INC ESI                             ; 0046e91b
    MOV AL,byte ptr [ESI]               ; 0046e91c
    CMP AL,DL                           ; 0046e91e
    JZ 0x0046e929                       ; 0046e920
        ;   XREF to: 0046e929 (CONDITIONAL_JUMP)  ; LAB_0046e929
    INC ESI                             ; 0046e922
    CMP AL,0x0                          ; 0046e923
    JNZ 0x0046e911                      ; 0046e925
        ;   XREF to: 0046e911 (CONDITIONAL_JUMP)  ; LAB_0046e911
    SUB ESI,ESI                         ; 0046e927
        ;   Label: LAB_0046e927
    MOV dword ptr [EBP + -0x8],ESI      ; 0046e929
        ;   Label: LAB_0046e929
    CMP dword ptr [EBP + -0x8],0x0      ; 0046e92c
    JZ 0x0046e956                       ; 0046e930
        ;   XREF to: 0046e956 (CONDITIONAL_JUMP)  ; LAB_0046e956
    MOV ESI,0x61dfae                    ; 0046e932 | = ".ACT"
    MOV EDI,dword ptr [EBP + -0x8]      ; 0046e937
    PUSH EDI                            ; 0046e93a
    MOV AL,byte ptr [ESI]               ; 0046e93b | = ".ACT" | DAT_0061dfb0
        ;   Label: LAB_0046e93b
    MOV byte ptr [EDI],AL               ; 0046e93d
    CMP AL,0x0                          ; 0046e93f
    JZ 0x0046e953                       ; 0046e941
        ;   XREF to: 0046e953 (CONDITIONAL_JUMP)  ; LAB_0046e953
    MOV AL,byte ptr [ESI + 0x1]         ; 0046e943 | DAT_0061dfaf | s_T_0061dfb1
    ADD ESI,0x2                         ; 0046e946
    MOV byte ptr [EDI + 0x1],AL         ; 0046e949
    ADD EDI,0x2                         ; 0046e94c
    CMP AL,0x0                          ; 0046e94f
    JNZ 0x0046e93b                      ; 0046e951
        ;   XREF to: 0046e93b (CONDITIONAL_JUMP)  ; LAB_0046e93b
    POP EDI                             ; 0046e953
        ;   Label: LAB_0046e953
    JMP 0x0046e992                      ; 0046e954
        ;   XREF to: 0046e992 (UNCONDITIONAL_JUMP)  ; LAB_0046e992
    LEA EDI,[EBP + -0x58]               ; 0046e956
        ;   Label: LAB_0046e956
    SUB ECX,ECX                         ; 0046e959
    DEC ECX                             ; 0046e95b
    XOR EAX,EAX                         ; 0046e95c
    SCASB.REPNE ES:EDI                  ; 0046e95e
    NOT ECX                             ; 0046e960
    DEC ECX                             ; 0046e962
    CMP ECX,0x8                         ; 0046e963
    JA 0x0046e992                       ; 0046e966
        ;   XREF to: 0046e992 (CONDITIONAL_JUMP)  ; LAB_0046e992
    MOV ESI,0x61dfb3                    ; 0046e968 | = ".ACT"
    LEA EDI,[EBP + -0x58]               ; 0046e96d
    PUSH EDI                            ; 0046e970
    SUB ECX,ECX                         ; 0046e971
    DEC ECX                             ; 0046e973
    MOV AL,0x0                          ; 0046e974
    SCASB.REPNE ES:EDI                  ; 0046e976
    DEC EDI                             ; 0046e978
    MOV AL,byte ptr [ESI]               ; 0046e979 | = ".ACT" | DAT_0061dfb5
        ;   Label: LAB_0046e979
    MOV byte ptr [EDI],AL               ; 0046e97b
    CMP AL,0x0                          ; 0046e97d
    JZ 0x0046e991                       ; 0046e97f
        ;   XREF to: 0046e991 (CONDITIONAL_JUMP)  ; LAB_0046e991
    MOV AL,byte ptr [ESI + 0x1]         ; 0046e981 | DAT_0061dfb4 | s_T_0061dfb6
    ADD ESI,0x2                         ; 0046e984
    MOV byte ptr [EDI + 0x1],AL         ; 0046e987
    ADD EDI,0x2                         ; 0046e98a
    CMP AL,0x0                          ; 0046e98d
    JNZ 0x0046e979                      ; 0046e98f
        ;   XREF to: 0046e979 (CONDITIONAL_JUMP)  ; LAB_0046e979
    POP EDI                             ; 0046e991
        ;   Label: LAB_0046e991
    LEA EAX,[EBP + -0x58]               ; 0046e992
        ;   Label: LAB_0046e992
    PUSH EAX                            ; 0046e995
    MOV EAX,0x61dfb8                    ; 0046e996 | = "art"
    PUSH EAX                            ; 0046e99b | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 0046e99c
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 0046e9a1
    CMP EAX,-0x1                        ; 0046e9a4
    JNZ 0x0046e9cf                      ; 0046e9a7
        ;   XREF to: 0046e9cf (CONDITIONAL_JUMP)  ; LAB_0046e9cf
    PUSH 0x42                           ; 0046e9a9
    PUSH 0x0                            ; 0046e9ab
    MOV EAX,0x61dfbc                    ; 0046e9ad | = "File not found.  Hit a key..."
    PUSH EAX                            ; 0046e9b2 | = "File not found.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e9b3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e9b8
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046e9bb
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046e9c0
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046e9c5
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x0046eb77                      ; 0046e9ca
        ;   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)  ; LAB_0046eb77
    LEA EAX,[EBP + -0x58]               ; 0046e9cf
        ;   Label: LAB_0046e9cf
    PUSH EAX                            ; 0046e9d2
    CALL engine_2d.c_loadPaletteFile_FUN_004015a0 ; 0046e9d3
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadPaletteFile_FUN_004015a0(char * filename)
    ADD ESP,0x4                         ; 0046e9d8
    LEA EAX,[EBP + -0x58]               ; 0046e9db
    PUSH EAX                            ; 0046e9de
    CALL engine_2d.c_doNothing_FUN_00402860 ; 0046e9df
        ;   XREF to: 00402860 (UNCONDITIONAL_CALL)  ; void engine_2d.c_doNothing_FUN_00402860(char * filename)
    ADD ESP,0x4                         ; 0046e9e4
    LEA EAX,[EBP + -0x58]               ; 0046e9e7
    PUSH EAX                            ; 0046e9ea
    CALL engine_2d.c_loadOrBuildColorMap_FUN_00402930 ; 0046e9eb
        ;   XREF to: 00402930 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadOrBuildColorMap_FUN_00402930(char * filename)
    ADD ESP,0x4                         ; 0046e9f0
    LEA EAX,[EBP + -0x58]               ; 0046e9f3
    PUSH EAX                            ; 0046e9f6
    CALL engine_2d.c_doNothing_FUN_00401590 ; 0046e9f7
        ;   XREF to: 00401590 (UNCONDITIONAL_CALL)  ; void engine_2d.c_doNothing_FUN_00401590(char * filename)
    ADD ESP,0x4                         ; 0046e9fc
    JMP 0x0046eb51                      ; 0046e9ff
        ;   XREF to: 0046eb51 (UNCONDITIONAL_JUMP)  ; LAB_0046eb51
    CMP dword ptr [EBP + -0x4],0x2      ; 0046ea04
        ;   Label: LAB_0046ea04
    JNZ 0x0046eaee                      ; 0046ea08
        ;   XREF to: 0046eaee (CONDITIONAL_JUMP)  ; LAB_0046eaee
    MOV EDX,0x61dfda                    ; 0046ea0e | = "Enter .ACT filename : "
    PUSH EDX                            ; 0046ea13 | = "Enter .ACT filename : "
    PUSH 0x42                           ; 0046ea14
    PUSH 0x0                            ; 0046ea16
    PUSH 0x4f                           ; 0046ea18
    LEA EDX,[EBP + -0x58]               ; 0046ea1a
    PUSH EDX                            ; 0046ea1d
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046ea1e
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046ea23
    MOV EDX,0x2e                        ; 0046ea26
    LEA ESI,[EBP + -0x58]               ; 0046ea2b
    MOV AL,byte ptr [ESI]               ; 0046ea2e
        ;   Label: LAB_0046ea2e
    CMP AL,DL                           ; 0046ea30
    JZ 0x0046ea46                       ; 0046ea32
        ;   XREF to: 0046ea46 (CONDITIONAL_JUMP)  ; LAB_0046ea46
    CMP AL,0x0                          ; 0046ea34
    JZ 0x0046ea44                       ; 0046ea36
        ;   XREF to: 0046ea44 (CONDITIONAL_JUMP)  ; LAB_0046ea44
    INC ESI                             ; 0046ea38
    MOV AL,byte ptr [ESI]               ; 0046ea39
    CMP AL,DL                           ; 0046ea3b
    JZ 0x0046ea46                       ; 0046ea3d
        ;   XREF to: 0046ea46 (CONDITIONAL_JUMP)  ; LAB_0046ea46
    INC ESI                             ; 0046ea3f
    CMP AL,0x0                          ; 0046ea40
    JNZ 0x0046ea2e                      ; 0046ea42
        ;   XREF to: 0046ea2e (CONDITIONAL_JUMP)  ; LAB_0046ea2e
    SUB ESI,ESI                         ; 0046ea44
        ;   Label: LAB_0046ea44
    MOV dword ptr [EBP + -0x8],ESI      ; 0046ea46
        ;   Label: LAB_0046ea46
    CMP dword ptr [EBP + -0x8],0x0      ; 0046ea49
    JZ 0x0046ea73                       ; 0046ea4d
        ;   XREF to: 0046ea73 (CONDITIONAL_JUMP)  ; LAB_0046ea73
    MOV ESI,0x61dff1                    ; 0046ea4f | = ".ACT"
    MOV EDI,dword ptr [EBP + -0x8]      ; 0046ea54
    PUSH EDI                            ; 0046ea57
    MOV AL,byte ptr [ESI]               ; 0046ea58 | = ".ACT" | DAT_0061dff3
        ;   Label: LAB_0046ea58
    MOV byte ptr [EDI],AL               ; 0046ea5a
    CMP AL,0x0                          ; 0046ea5c
    JZ 0x0046ea70                       ; 0046ea5e
        ;   XREF to: 0046ea70 (CONDITIONAL_JUMP)  ; LAB_0046ea70
    MOV AL,byte ptr [ESI + 0x1]         ; 0046ea60 | DAT_0061dff2 | s_T_0061dff4
    ADD ESI,0x2                         ; 0046ea63
    MOV byte ptr [EDI + 0x1],AL         ; 0046ea66
    ADD EDI,0x2                         ; 0046ea69
    CMP AL,0x0                          ; 0046ea6c
    JNZ 0x0046ea58                      ; 0046ea6e
        ;   XREF to: 0046ea58 (CONDITIONAL_JUMP)  ; LAB_0046ea58
    POP EDI                             ; 0046ea70
        ;   Label: LAB_0046ea70
    JMP 0x0046eaaf                      ; 0046ea71
        ;   XREF to: 0046eaaf (UNCONDITIONAL_JUMP)  ; LAB_0046eaaf
    LEA EDI,[EBP + -0x58]               ; 0046ea73
        ;   Label: LAB_0046ea73
    SUB ECX,ECX                         ; 0046ea76
    DEC ECX                             ; 0046ea78
    XOR EAX,EAX                         ; 0046ea79
    SCASB.REPNE ES:EDI                  ; 0046ea7b
    NOT ECX                             ; 0046ea7d
    DEC ECX                             ; 0046ea7f
    CMP ECX,0x8                         ; 0046ea80
    JA 0x0046eaaf                       ; 0046ea83
        ;   XREF to: 0046eaaf (CONDITIONAL_JUMP)  ; LAB_0046eaaf
    MOV ESI,0x61dff6                    ; 0046ea85 | = ".ACT"
    LEA EDI,[EBP + -0x58]               ; 0046ea8a
    PUSH EDI                            ; 0046ea8d
    SUB ECX,ECX                         ; 0046ea8e
    DEC ECX                             ; 0046ea90
    MOV AL,0x0                          ; 0046ea91
    SCASB.REPNE ES:EDI                  ; 0046ea93
    DEC EDI                             ; 0046ea95
    MOV AL,byte ptr [ESI]               ; 0046ea96 | = ".ACT" | DAT_0061dff8
        ;   Label: LAB_0046ea96
    MOV byte ptr [EDI],AL               ; 0046ea98
    CMP AL,0x0                          ; 0046ea9a
    JZ 0x0046eaae                       ; 0046ea9c
        ;   XREF to: 0046eaae (CONDITIONAL_JUMP)  ; LAB_0046eaae
    MOV AL,byte ptr [ESI + 0x1]         ; 0046ea9e | DAT_0061dff7 | s_T_0061dff9
    ADD ESI,0x2                         ; 0046eaa1
    MOV byte ptr [EDI + 0x1],AL         ; 0046eaa4
    ADD EDI,0x2                         ; 0046eaa7
    CMP AL,0x0                          ; 0046eaaa
    JNZ 0x0046ea96                      ; 0046eaac
        ;   XREF to: 0046ea96 (CONDITIONAL_JUMP)  ; LAB_0046ea96
    POP EDI                             ; 0046eaae
        ;   Label: LAB_0046eaae
    LEA EAX,[EBP + -0x58]               ; 0046eaaf
        ;   Label: LAB_0046eaaf
    PUSH EAX                            ; 0046eab2
    MOV EAX,0x61dffb                    ; 0046eab3 | = "art"
    PUSH EAX                            ; 0046eab8 | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 0046eab9
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 0046eabe
    CMP EAX,-0x1                        ; 0046eac1
    JNZ 0x0046eaec                      ; 0046eac4
        ;   XREF to: 0046eaec (CONDITIONAL_JUMP)  ; LAB_0046eaec
    PUSH 0x58                           ; 0046eac6
    PUSH 0x0                            ; 0046eac8
    MOV EAX,0x61dfff                    ; 0046eaca | = "File not found.  Hit a key..."
    PUSH EAX                            ; 0046eacf | = "File not found.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ead0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ead5
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046ead8
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046eadd
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046eae2
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x0046eb77                      ; 0046eae7
        ;   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)  ; LAB_0046eb77
    JMP 0x0046eb51                      ; 0046eaec
        ;   XREF to: 0046eb51 (UNCONDITIONAL_JUMP)  ; LAB_0046eb51
        ;   Label: LAB_0046eaec
    CMP dword ptr [EBP + -0x4],0x3      ; 0046eaee
        ;   Label: LAB_0046eaee
    JNZ 0x0046eb2e                      ; 0046eaf2
        ;   XREF to: 0046eb2e (CONDITIONAL_JUMP)  ; LAB_0046eb2e
    MOV EAX,0x61e01d                    ; 0046eaf4 | = "vga.act"
    PUSH EAX                            ; 0046eaf9 | = "vga.act"
    CALL engine_2d.c_loadPaletteFile_FUN_004015a0 ; 0046eafa
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadPaletteFile_FUN_004015a0(char * filename)
    ADD ESP,0x4                         ; 0046eaff
    MOV EAX,0x61e025                    ; 0046eb02 | = "vga.lte"
    PUSH EAX                            ; 0046eb07 | = "vga.lte"
    CALL engine_2d.c_doNothing_FUN_00402860 ; 0046eb08
        ;   XREF to: 00402860 (UNCONDITIONAL_CALL)  ; void engine_2d.c_doNothing_FUN_00402860(char * filename)
    ADD ESP,0x4                         ; 0046eb0d
    MOV EAX,0x61e02d                    ; 0046eb10 | = "vga.act"
    PUSH EAX                            ; 0046eb15 | = "vga.act"
    CALL engine_2d.c_loadOrBuildColorMap_FUN_00402930 ; 0046eb16
        ;   XREF to: 00402930 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadOrBuildColorMap_FUN_00402930(char * filename)
    ADD ESP,0x4                         ; 0046eb1b
    MOV EAX,0x61e035                    ; 0046eb1e | = "vga.act"
    PUSH EAX                            ; 0046eb23 | = "vga.act"
    CALL engine_2d.c_doNothing_FUN_00401590 ; 0046eb24
        ;   XREF to: 00401590 (UNCONDITIONAL_CALL)  ; void engine_2d.c_doNothing_FUN_00401590(char * filename)
    ADD ESP,0x4                         ; 0046eb29
    JMP 0x0046eb51                      ; 0046eb2c
        ;   XREF to: 0046eb51 (UNCONDITIONAL_JUMP)  ; LAB_0046eb51
    PUSH 0x42                           ; 0046eb2e
        ;   Label: LAB_0046eb2e
    PUSH 0x0                            ; 0046eb30
    MOV EAX,0x61e03d                    ; 0046eb32 | = "Invalid option.  Hit a key..."
    PUSH EAX                            ; 0046eb37 | = "Invalid option.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046eb38
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046eb3d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046eb40
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046eb45
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046eb4a
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x0046eb77                      ; 0046eb4f
        ;   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)  ; LAB_0046eb77
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 ; 0046eb51
        ;   XREF to: 005ed8f0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0()
        ;   Label: LAB_0046eb51
    PUSH 0x58                           ; 0046eb56
    PUSH 0x0                            ; 0046eb58
    MOV EAX,0x61e05b                    ; 0046eb5a | = "New palette loaded.  Hit a key..."
    PUSH EAX                            ; 0046eb5f | = "New palette loaded.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046eb60
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046eb65
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046eb68
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046eb6d
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046eb72
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ESP,EBP                         ; 0046eb77
        ;   Label: LAB_0046eb77
    POP EBP                             ; 0046eb79
    POP EDI                             ; 0046eb7a
    POP ESI                             ; 0046eb7b
    POP EBX                             ; 0046eb7c
    RET                                 ; 0046eb7d

