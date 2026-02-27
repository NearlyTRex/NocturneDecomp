; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_finishAct_FUN_004e3b90(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x550]:4  local_550
; undefined1       Stack[-0x54c]:1  local_54c
; undefined1       Stack[-0x54b]:1  local_54b
; undefined1       Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x14b]:1  local_14b
; undefined1       Stack[-0x4c]:1  local_4c
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
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 00524617
;
; Referenced Globals:
;   TerminatedCString s_To_be_continued_0062d555
;   TerminatedCString s_stats_0062d568
;   TerminatedCString s_Mission_time_0062d56e
;   TerminatedCString s_anon_0062d57b
;   undefined4 DAT_0062d57c
;   undefined4 DAT_0062d57d
;   TerminatedCString s_s_2d_2d_2d_2d_0062d57e
;   TerminatedCString s_Total_body_count_0062d590
;   TerminatedCString s_anon_0062d5a1
;   undefined4 DAT_0062d5a2
;   undefined4 DAT_0062d5a3
;   TerminatedCString s_d_0062d5a4
;   double DOUBLE_0062d5ad = 0.000277777777777778
;   double DOUBLE_0062d5b5 = 3600
;   double DOUBLE_0062d5bd = 0.0166666666666667
;   ... and 9 more
;
; Called Functions:
;   core_game.cpp_CGame_rollCredits_FUN_004e4010
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3b90
        ;   Label: core_game.cpp_CGame_finishAct_FUN_004e3b90
    PUSH ESI                            ; 004e3b91
    PUSH EDI                            ; 004e3b92
    PUSH EBP                            ; 004e3b93
    MOV EBP,ESP                         ; 004e3b94
    SUB ESP,0x540                       ; 004e3b96
    AND ESP,0xfffffff8                  ; 004e3b9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3b9f
    CMP dword ptr [EAX + 0x258],0x2     ; 004e3ba2
    JNZ 0x004e3c6c                      ; 004e3ba9
        ;   XREF to: 004e3c6c (CONDITIONAL_JUMP)  ; LAB_004e3c6c
    MOV EAX,[0x03275a28]                ; 004e3baf | g_ScreenHeightForFonts
    MOV EDI,dword ptr [0x020a5720]      ; 004e3bb4 | g_ThemeFont
    CMP EAX,0x1e0                       ; 004e3bba
    JGE 0x004e3bc7                      ; 004e3bbf
        ;   XREF to: 004e3bc7 (CONDITIONAL_JUMP)  ; LAB_004e3bc7
    MOV EDI,dword ptr [0x020a5724]      ; 004e3bc1 | g_SmallEditorFont
    PUSH 0x58                           ; 004e3bc7
        ;   Label: LAB_004e3bc7
    PUSH EDI                            ; 004e3bc9
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004e3bca
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004e3bcf
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e3bd2
    PUSH EDX                            ; 004e3bd5
    MOV ESI,EAX                         ; 004e3bd6
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004e3bd8
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    MOV ECX,0x40a00000                  ; 004e3bdd
    ADD ESP,0x4                         ; 004e3be2
    MOV dword ptr [ESP],ECX             ; 004e3be5
    FLD float ptr [ESP]                 ; 004e3be8
        ;   Label: LAB_004e3be8
    FLDZ                                ; 004e3beb
    FCOMPP                              ; 004e3bed
    FNSTSW AX                           ; 004e3bef
    SAHF                                ; 004e3bf1
    JNC 0x004e3c54                      ; 004e3bf2
        ;   XREF to: 004e3c54 (CONDITIONAL_JUMP)  ; LAB_004e3c54
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004e3bf4
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x62d555                       ; 004e3bf9 | = "To be continued..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e3bfe
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x00679398]      ; 004e3c03 | g_WindowHeight
    ADD ESP,0x4                         ; 004e3c09
    SUB EDX,ESI                         ; 004e3c0c
    PUSH EAX                            ; 004e3c0e
    MOV EAX,EDX                         ; 004e3c0f
    SAR EDX,0x1f                        ; 004e3c11
    SUB EAX,EDX                         ; 004e3c14
    SAR EAX,0x1                         ; 004e3c16
    PUSH 0x0                            ; 004e3c18
    PUSH 0xf8                           ; 004e3c1a
    PUSH EAX                            ; 004e3c1f
    MOV EAX,[0x00679394]                ; 004e3c20 | g_WindowWidth
    DEC EAX                             ; 004e3c25
    PUSH EAX                            ; 004e3c26
    PUSH 0x0                            ; 004e3c27
    PUSH EDI                            ; 004e3c29
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 ; 004e3c2a
        ;   XREF to: 004cdee0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004e3c2f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004e3c32
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3c37
    PUSH EAX                            ; 004e3c3a
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 004e3c3b
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e3c40
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3c43
    FLD float ptr [ESP]                 ; 004e3c46
    FSUB float ptr [EAX + 0x264]        ; 004e3c49
    FSTP float ptr [ESP]                ; 004e3c4f
    JMP 0x004e3be8                      ; 004e3c52
        ;   XREF to: 004e3be8 (UNCONDITIONAL_JUMP)  ; LAB_004e3be8
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e3c54
        ;   Label: LAB_004e3c54
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e3c57
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH EBX                            ; 004e3c5c
    CALL core_game.cpp_CGame_rollCredits_FUN_004e4010 ; 004e3c5d
        ;   XREF to: 004e4010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_rollCredits_FUN_004e4010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e3c62
    MOV ESP,EBP                         ; 004e3c65
    POP EBP                             ; 004e3c67
    POP EDI                             ; 004e3c68
    POP ESI                             ; 004e3c69
    POP EBX                             ; 004e3c6a
    RET                                 ; 004e3c6b
    FLD float ptr [EAX + 0x250]         ; 004e3c6c
        ;   Label: LAB_004e3c6c
    FADD float ptr [EAX + 0x248]        ; 004e3c72
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e3c78
    FSTP float ptr [EAX + 0x248]        ; 004e3c7b
    MOV EAX,dword ptr [EAX + 0x24c]     ; 004e3c81
    MOV ECX,dword ptr [EDX + 0x254]     ; 004e3c87
    ADD ECX,EAX                         ; 004e3c8d
    LEA EAX,[ESP + 0x504]               ; 004e3c8f
    PUSH EAX                            ; 004e3c96
    MOV dword ptr [EDX + 0x254],ECX     ; 004e3c97
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004e3c9d
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e3ca2
    PUSH 0x1e0                          ; 004e3ca5
    PUSH 0x280                          ; 004e3caa
    PUSH 0x62d568                       ; 004e3caf | = "stats"
    LEA EAX,[ESP + 0x510]               ; 004e3cb4
    PUSH EAX                            ; 004e3cbb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004e3cbc
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004e3cc1
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004e3cc4
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0xffff                         ; 004e3cc9
    PUSH 0x0                            ; 004e3cce
    PUSH 0x0                            ; 004e3cd0
    LEA EAX,[ESP + 0x510]               ; 004e3cd2
    PUSH EAX                            ; 004e3cd9
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 004e3cda
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004e3cdf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3ce2
    FLD float ptr [EAX + 0x248]         ; 004e3ce5
    FLD ST0                             ; 004e3ceb
    FMUL double ptr [0x0062d5ad]        ; 004e3ced | DOUBLE_0062d5ad
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e3cf3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x528]       ; 004e3cf8
    MOV EAX,dword ptr [ESP + 0x528]     ; 004e3cff
    MOV dword ptr [ESP + 0x53c],EAX     ; 004e3d06
    FILD dword ptr [ESP + 0x53c]        ; 004e3d0d
    FMUL double ptr [0x0062d5b5]        ; 004e3d14 | DOUBLE_0062d5b5
    FSUBP                               ; 004e3d1a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3d1c
    FST float ptr [EAX + 0x248]         ; 004e3d1f
    FLD ST0                             ; 004e3d25
    FMUL double ptr [0x0062d5bd]        ; 004e3d27 | DOUBLE_0062d5bd
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e3d2d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x520]       ; 004e3d32
    MOV EAX,dword ptr [ESP + 0x520]     ; 004e3d39
    MOV dword ptr [ESP + 0x53c],EAX     ; 004e3d40
    FILD dword ptr [ESP + 0x53c]        ; 004e3d47
    FMUL double ptr [0x0062d5c5]        ; 004e3d4e | DOUBLE_0062d5c5
    FSUBP                               ; 004e3d54
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3d56
    FST float ptr [EAX + 0x248]         ; 004e3d59
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e3d5f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x538]       ; 004e3d64
    MOV EAX,dword ptr [ESP + 0x538]     ; 004e3d6b
    MOV dword ptr [ESP + 0x53c],EAX     ; 004e3d72
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3d79
    FILD dword ptr [ESP + 0x53c]        ; 004e3d7c
    FSUBR float ptr [EAX + 0x248]       ; 004e3d83
    FST float ptr [EAX + 0x248]         ; 004e3d89
    FMUL double ptr [0x0062d5cd]        ; 004e3d8f | DOUBLE_0062d5cd
    PUSH 0x62d56e                       ; 004e3d95 | = "Mission time"
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e3d9a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x528]       ; 004e3d9f
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e3da6
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e3dab
    LEA EDI,[ESP + 0x4]                 ; 004e3dae
    MOV ESI,EAX                         ; 004e3db2
    PUSH EDI                            ; 004e3db4
    MOV AL,byte ptr [ESI]               ; 004e3db5
        ;   Label: LAB_004e3db5
    MOV byte ptr [EDI],AL               ; 004e3db7
    CMP AL,0x0                          ; 004e3db9
    JZ 0x004e3dcd                       ; 004e3dbb
        ;   XREF to: 004e3dcd (CONDITIONAL_JUMP)  ; LAB_004e3dcd
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3dbd
    ADD ESI,0x2                         ; 004e3dc0
    MOV byte ptr [EDI + 0x1],AL         ; 004e3dc3
    ADD EDI,0x2                         ; 004e3dc6
    CMP AL,0x0                          ; 004e3dc9
    JNZ 0x004e3db5                      ; 004e3dcb
        ;   XREF to: 004e3db5 (CONDITIONAL_JUMP)  ; LAB_004e3db5
    POP EDI                             ; 004e3dcd
        ;   Label: LAB_004e3dcd
    MOV ESI,0x62d57b                    ; 004e3dce | = "\n\n"
    LEA EDI,[ESP + 0x4]                 ; 004e3dd3
    MOV EBX,dword ptr [ESP + 0x524]     ; 004e3dd7
    PUSH EDI                            ; 004e3dde
    SUB ECX,ECX                         ; 004e3ddf
    DEC ECX                             ; 004e3de1
    MOV AL,0x0                          ; 004e3de2
    SCASB.REPNE ES:EDI                  ; 004e3de4
    DEC EDI                             ; 004e3de6
    MOV AL,byte ptr [ESI]               ; 004e3de7 | = "\n\n" | DAT_0062d57d
        ;   Label: LAB_004e3de7
    MOV byte ptr [EDI],AL               ; 004e3de9
    CMP AL,0x0                          ; 004e3deb
    JZ 0x004e3dff                       ; 004e3ded
        ;   XREF to: 004e3dff (CONDITIONAL_JUMP)  ; LAB_004e3dff
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3def | DAT_0062d57c | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004e3df2
    MOV byte ptr [EDI + 0x1],AL         ; 004e3df5
    ADD EDI,0x2                         ; 004e3df8
    CMP AL,0x0                          ; 004e3dfb
    JNZ 0x004e3de7                      ; 004e3dfd
        ;   XREF to: 004e3de7 (CONDITIONAL_JUMP)  ; LAB_004e3de7
    POP EDI                             ; 004e3dff
        ;   Label: LAB_004e3dff
    PUSH EBX                            ; 004e3e00
    MOV ESI,dword ptr [ESP + 0x53c]     ; 004e3e01
    PUSH ESI                            ; 004e3e08
    MOV EDI,dword ptr [ESP + 0x528]     ; 004e3e09
    PUSH EDI                            ; 004e3e10
    MOV EAX,dword ptr [ESP + 0x534]     ; 004e3e11
    PUSH EAX                            ; 004e3e18
    PUSH 0x62d57e                       ; 004e3e19 | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x418]               ; 004e3e1e
    PUSH EAX                            ; 004e3e25
    XOR ESI,ESI                         ; 004e3e26
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004e3e28
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV DL,0x30                         ; 004e3e2d
    ADD ESP,0x18                        ; 004e3e2f
    LEA EDI,[ESP + 0x404]               ; 004e3e32
        ;   Label: LAB_004e3e32
    SUB ECX,ECX                         ; 004e3e39
    DEC ECX                             ; 004e3e3b
    XOR EAX,EAX                         ; 004e3e3c
    SCASB.REPNE ES:EDI                  ; 004e3e3e
    NOT ECX                             ; 004e3e40
    DEC ECX                             ; 004e3e42
    CMP ESI,ECX                         ; 004e3e43
    JNC 0x004e3e5d                      ; 004e3e45
        ;   XREF to: 004e3e5d (CONDITIONAL_JUMP)  ; LAB_004e3e5d
    CMP byte ptr [ESP + ESI*0x1 + 0x404],0x20 ; 004e3e47
    JZ 0x004e3e54                       ; 004e3e4f
        ;   XREF to: 004e3e54 (CONDITIONAL_JUMP)  ; LAB_004e3e54
    INC ESI                             ; 004e3e51
        ;   Label: LAB_004e3e51
    JMP 0x004e3e32                      ; 004e3e52
        ;   XREF to: 004e3e32 (UNCONDITIONAL_JUMP)  ; LAB_004e3e32
    MOV byte ptr [ESP + ESI*0x1 + 0x404],DL ; 004e3e54
        ;   Label: LAB_004e3e54
    JMP 0x004e3e51                      ; 004e3e5b
        ;   XREF to: 004e3e51 (UNCONDITIONAL_JUMP)  ; LAB_004e3e51
    LEA ESI,[ESP + 0x404]               ; 004e3e5d
        ;   Label: LAB_004e3e5d
    LEA EDI,[ESP + 0x4]                 ; 004e3e64
    PUSH EDI                            ; 004e3e68
    SUB ECX,ECX                         ; 004e3e69
    DEC ECX                             ; 004e3e6b
    MOV AL,0x0                          ; 004e3e6c
    SCASB.REPNE ES:EDI                  ; 004e3e6e
    DEC EDI                             ; 004e3e70
    MOV AL,byte ptr [ESI]               ; 004e3e71
        ;   Label: LAB_004e3e71
    MOV byte ptr [EDI],AL               ; 004e3e73
    CMP AL,0x0                          ; 004e3e75
    JZ 0x004e3e89                       ; 004e3e77
        ;   XREF to: 004e3e89 (CONDITIONAL_JUMP)  ; LAB_004e3e89
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3e79
    ADD ESI,0x2                         ; 004e3e7c
    MOV byte ptr [EDI + 0x1],AL         ; 004e3e7f
    ADD EDI,0x2                         ; 004e3e82
    CMP AL,0x0                          ; 004e3e85
    JNZ 0x004e3e71                      ; 004e3e87
        ;   XREF to: 004e3e71 (CONDITIONAL_JUMP)  ; LAB_004e3e71
    POP EDI                             ; 004e3e89
        ;   Label: LAB_004e3e89
    PUSH 0x62d590                       ; 004e3e8a | = "Total body count"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e3e8f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e3e94
    LEA EDI,[ESP + 0x4]                 ; 004e3e97
    MOV ESI,EAX                         ; 004e3e9b
    PUSH EDI                            ; 004e3e9d
    SUB ECX,ECX                         ; 004e3e9e
    DEC ECX                             ; 004e3ea0
    MOV AL,0x0                          ; 004e3ea1
    SCASB.REPNE ES:EDI                  ; 004e3ea3
    DEC EDI                             ; 004e3ea5
    MOV AL,byte ptr [ESI]               ; 004e3ea6
        ;   Label: LAB_004e3ea6
    MOV byte ptr [EDI],AL               ; 004e3ea8
    CMP AL,0x0                          ; 004e3eaa
    JZ 0x004e3ebe                       ; 004e3eac
        ;   XREF to: 004e3ebe (CONDITIONAL_JUMP)  ; LAB_004e3ebe
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3eae
    ADD ESI,0x2                         ; 004e3eb1
    MOV byte ptr [EDI + 0x1],AL         ; 004e3eb4
    ADD EDI,0x2                         ; 004e3eb7
    CMP AL,0x0                          ; 004e3eba
    JNZ 0x004e3ea6                      ; 004e3ebc
        ;   XREF to: 004e3ea6 (CONDITIONAL_JUMP)  ; LAB_004e3ea6
    POP EDI                             ; 004e3ebe
        ;   Label: LAB_004e3ebe
    MOV ESI,0x62d5a1                    ; 004e3ebf | = "\n\n"
    LEA EDI,[ESP + 0x4]                 ; 004e3ec4
    PUSH EDI                            ; 004e3ec8
    SUB ECX,ECX                         ; 004e3ec9
    DEC ECX                             ; 004e3ecb
    MOV AL,0x0                          ; 004e3ecc
    SCASB.REPNE ES:EDI                  ; 004e3ece
    DEC EDI                             ; 004e3ed0
    MOV AL,byte ptr [ESI]               ; 004e3ed1 | = "\n\n" | DAT_0062d5a3
        ;   Label: LAB_004e3ed1
    MOV byte ptr [EDI],AL               ; 004e3ed3
    CMP AL,0x0                          ; 004e3ed5
    JZ 0x004e3ee9                       ; 004e3ed7
        ;   XREF to: 004e3ee9 (CONDITIONAL_JUMP)  ; LAB_004e3ee9
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3ed9 | DAT_0062d5a2 | = "%d\n\n"
    ADD ESI,0x2                         ; 004e3edc
    MOV byte ptr [EDI + 0x1],AL         ; 004e3edf
    ADD EDI,0x2                         ; 004e3ee2
    CMP AL,0x0                          ; 004e3ee5
    JNZ 0x004e3ed1                      ; 004e3ee7
        ;   XREF to: 004e3ed1 (CONDITIONAL_JUMP)  ; LAB_004e3ed1
    POP EDI                             ; 004e3ee9
        ;   Label: LAB_004e3ee9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3eea
    MOV EBX,dword ptr [EAX + 0x254]     ; 004e3eed
    PUSH EBX                            ; 004e3ef3
    PUSH 0x62d5a4                       ; 004e3ef4 | = "%d\n\n"
    LEA EAX,[ESP + 0x40c]               ; 004e3ef9
    PUSH EAX                            ; 004e3f00
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004e3f01
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e3f06
    LEA ESI,[ESP + 0x404]               ; 004e3f09
    LEA EDI,[ESP + 0x4]                 ; 004e3f10
    PUSH EDI                            ; 004e3f14
    SUB ECX,ECX                         ; 004e3f15
    DEC ECX                             ; 004e3f17
    MOV AL,0x0                          ; 004e3f18
    SCASB.REPNE ES:EDI                  ; 004e3f1a
    DEC EDI                             ; 004e3f1c
    MOV AL,byte ptr [ESI]               ; 004e3f1d
        ;   Label: LAB_004e3f1d
    MOV byte ptr [EDI],AL               ; 004e3f1f
    CMP AL,0x0                          ; 004e3f21
    JZ 0x004e3f35                       ; 004e3f23
        ;   XREF to: 004e3f35 (CONDITIONAL_JUMP)  ; LAB_004e3f35
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3f25
    ADD ESI,0x2                         ; 004e3f28
    MOV byte ptr [EDI + 0x1],AL         ; 004e3f2b
    ADD EDI,0x2                         ; 004e3f2e
    CMP AL,0x0                          ; 004e3f31
    JNZ 0x004e3f1d                      ; 004e3f33
        ;   XREF to: 004e3f1d (CONDITIONAL_JUMP)  ; LAB_004e3f1d
    POP EDI                             ; 004e3f35
        ;   Label: LAB_004e3f35
    MOV EAX,[0x020a5720]                ; 004e3f36 | g_ThemeFont
    PUSH 0xffff                         ; 004e3f3b
    MOV dword ptr [ESP + 0x538],EAX     ; 004e3f40
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004e3f47
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004e3f4c
    PUSH 0xc0                           ; 004e3f4f
    PUSH 0x100                          ; 004e3f54
    PUSH 0x14                           ; 004e3f59
    PUSH 0x2d7d6f0                      ; 004e3f5b | g_ActStatsTextBuffer2
    LEA EAX,[ESP + 0x14]                ; 004e3f60
    PUSH EAX                            ; 004e3f64
    MOV ESI,dword ptr [ESP + 0x548]     ; 004e3f65
    PUSH ESI                            ; 004e3f6c
    CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010 ; 004e3f6d
        ;   XREF to: 004d0010 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
    ADD ESP,0x18                        ; 004e3f72
    PUSH 0x58                           ; 004e3f75
    XOR EDI,EDI                         ; 004e3f77
    PUSH ESI                            ; 004e3f79
    MOV EBX,EAX                         ; 004e3f7a
    MOV dword ptr [ESP + 0x534],EAX     ; 004e3f7c
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004e3f83
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004e3f88
    MOV ESI,0xf0                        ; 004e3f8b
    MOV dword ptr [ESP + 0x530],EAX     ; 004e3f90
    TEST EBX,EBX                        ; 004e3f97
    JLE 0x004e3fe0                      ; 004e3f99
        ;   XREF to: 004e3fe0 (CONDITIONAL_JUMP)  ; LAB_004e3fe0
    MOV EBX,0x2d7d6f0                   ; 004e3f9b | g_ActStatsTextBuffer2
    PUSH EBX                            ; 004e3fa0 | g_ActStatsTextBuffer2 | DAT_02d7d7f0
        ;   Label: LAB_004e3fa0
    PUSH 0x0                            ; 004e3fa1
    PUSH 0xf8                           ; 004e3fa3
    PUSH ESI                            ; 004e3fa8
    PUSH 0x27f                          ; 004e3fa9
    PUSH 0x1c0                          ; 004e3fae
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004e3fb3
    PUSH EAX                            ; 004e3fba
    INC EDI                             ; 004e3fbb
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 ; 004e3fbc
        ;   XREF to: 004cdee0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004e3fc1
    ADD EBX,0x100                       ; 004e3fc4 | DAT_02d7d7f0
    MOV EDX,dword ptr [ESP + 0x530]     ; 004e3fca
    MOV ECX,dword ptr [ESP + 0x52c]     ; 004e3fd1
    ADD ESI,EDX                         ; 004e3fd8
    CMP EDI,ECX                         ; 004e3fda
    JL 0x004e3fa0                       ; 004e3fdc
        ;   XREF to: 004e3fa0 (CONDITIONAL_JUMP)  ; LAB_004e3fa0
    MOV EAX,EAX                         ; 004e3fde
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004e3fe0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_004e3fe0
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e3fe5
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004e3fea
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e3fef
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x0                            ; 004e3ff4
    LEA EAX,[ESP + 0x508]               ; 004e3ff6
    PUSH EAX                            ; 004e3ffd
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 004e3ffe
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e4003
    MOV ESP,EBP                         ; 004e4006
    POP EBP                             ; 004e4008
    POP EDI                             ; 004e4009
    POP ESI                             ; 004e400a
    POP EBX                             ; 004e400b
    RET                                 ; 004e400c

