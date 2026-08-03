; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_finishAct_FUN_004a6a10(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x550]:4  local_550
; undefined        Stack[-0x54c]:1  local_54c
; undefined1       Stack[-0x54b]:1  local_54b
; undefined        Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x14b]:1  local_14b
; undefined        Stack[-0x4c]:1  local_4c
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
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d9637
;
; Referenced Globals:
;   TerminatedCString s_To_be_continued_005845f2
;   TerminatedCString s_stats_00584605
;   TerminatedCString s_Mission_time_0058460b
;   TerminatedCString s_anon_00584618
;   undefined4 s_anon_00584618+1
;   undefined4 s_anon_00584618+2
;   TerminatedCString s_s_2d_2d_2d_2d_0058461b
;   TerminatedCString s_Total_body_count_0058462d
;   TerminatedCString s_anon_0058463e
;   undefined4 s_anon_0058463e+1
;   undefined4 s_anon_0058463e+2
;   TerminatedCString s_d_00584641
;   double DOUBLE_0058464a = 0.000277777777777778
;   double DOUBLE_00584652 = 3600
;   double DOUBLE_0058465a = 0.0166666666666667
;   ... and 7 more
;
; Called Functions:
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890
;   core_game.cpp_CGame_updateDT_FUN_0049a8a0
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_wrapText_FUN_00492f30
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6a10
        ;   Label: core_game.cpp_CGame_finishAct_FUN_004a6a10
    PUSH ESI                            ; 004a6a11
    PUSH EDI                            ; 004a6a12
    PUSH EBP                            ; 004a6a13
    MOV EBP,ESP                         ; 004a6a14
    SUB ESP,0x540                       ; 004a6a16
    AND ESP,0xfffffff8                  ; 004a6a1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6a1f
    CMP dword ptr [EAX + 0x258],0x2     ; 004a6a22
    JNZ 0x004a6aec                      ; 004a6a29
        ;   XREF to: 004a6aec (CONDITIONAL_JUMP)  ; LAB_004a6aec
    MOV EAX,[0x01fb8644]                ; 004a6a2f | g_CDemonCamera_01fb8508.screen_width
    MOV EDI,dword ptr [0x014b9900]      ; 004a6a34 | g_CBitFont_PTR_014b9900
    CMP EAX,0x1e0                       ; 004a6a3a
    JGE 0x004a6a47                      ; 004a6a3f
        ;   XREF to: 004a6a47 (CONDITIONAL_JUMP)  ; LAB_004a6a47
    MOV EDI,dword ptr [0x014b9904]      ; 004a6a41 | g_CBitFont_PTR_014b9904
    PUSH 0x58                           ; 004a6a47
        ;   Label: LAB_004a6a47
    PUSH EDI                            ; 004a6a49
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004a6a4a
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a6a4f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a6a52
    PUSH EDX                            ; 004a6a55
    MOV ESI,EAX                         ; 004a6a56
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 004a6a58
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_0049a890(CGame * this_ptr)
    MOV ECX,0x40a00000                  ; 004a6a5d
    ADD ESP,0x4                         ; 004a6a62
    MOV dword ptr [ESP],ECX             ; 004a6a65
    FLD float ptr [ESP]                 ; 004a6a68
        ;   Label: LAB_004a6a68
    FLDZ                                ; 004a6a6b
    FCOMPP                              ; 004a6a6d
    FNSTSW AX                           ; 004a6a6f
    SAHF                                ; 004a6a71
    JNC 0x004a6ad4                      ; 004a6a72
        ;   XREF to: 004a6ad4 (CONDITIONAL_JUMP)  ; LAB_004a6ad4
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004a6a74
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    PUSH 0x5845f2                       ; 004a6a79 | = "To be continued..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a6a7e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV EDX,dword ptr [0x005b7620]      ; 004a6a83 | DAT_005b7620
    ADD ESP,0x4                         ; 004a6a89
    SUB EDX,ESI                         ; 004a6a8c
    PUSH EAX                            ; 004a6a8e
    MOV EAX,EDX                         ; 004a6a8f
    SAR EDX,0x1f                        ; 004a6a91
    SUB EAX,EDX                         ; 004a6a94
    SAR EAX,0x1                         ; 004a6a96
    PUSH 0x0                            ; 004a6a98
    PUSH 0xf8                           ; 004a6a9a
    PUSH EAX                            ; 004a6a9f
    MOV EAX,[0x005b761c]                ; 004a6aa0 | DAT_005b761c
    DEC EAX                             ; 004a6aa5
    PUSH EAX                            ; 004a6aa6
    PUSH 0x0                            ; 004a6aa7
    PUSH EDI                            ; 004a6aa9
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0 ; 004a6aaa
        ;   XREF to: 00490de0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004a6aaf
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004a6ab2
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6ab7
    PUSH EAX                            ; 004a6aba
    CALL core_game.cpp_CGame_updateDT_FUN_0049a8a0 ; 004a6abb
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_0049a8a0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004a6ac0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6ac3
    FLD float ptr [ESP]                 ; 004a6ac6
    FSUB float ptr [EAX + 0x264]        ; 004a6ac9
    FSTP float ptr [ESP]                ; 004a6acf
    JMP 0x004a6a68                      ; 004a6ad2
        ;   XREF to: 004a6a68 (UNCONDITIONAL_JUMP)  ; LAB_004a6a68
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a6ad4
        ;   Label: LAB_004a6ad4
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004a6ad7
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    PUSH EBX                            ; 004a6adc
    CALL core_game.cpp_CGame_rollCredits_FUN_004a6e90 ; 004a6add
        ;   XREF to: 004a6e90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_rollCredits_FUN_004a6e90(CGame * this_ptr)
    ADD ESP,0x4                         ; 004a6ae2
    MOV ESP,EBP                         ; 004a6ae5
    POP EBP                             ; 004a6ae7
    POP EDI                             ; 004a6ae8
    POP ESI                             ; 004a6ae9
    POP EBX                             ; 004a6aea
    RET                                 ; 004a6aeb
    FLD float ptr [EAX + 0x250]         ; 004a6aec
        ;   Label: LAB_004a6aec
    FADD float ptr [EAX + 0x248]        ; 004a6af2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a6af8
    FSTP float ptr [EAX + 0x248]        ; 004a6afb
    MOV EAX,dword ptr [EAX + 0x24c]     ; 004a6b01
    MOV ECX,dword ptr [EDX + 0x254]     ; 004a6b07
    ADD ECX,EAX                         ; 004a6b0d
    LEA EAX,[ESP + 0x504]               ; 004a6b0f
    PUSH EAX                            ; 004a6b16
    MOV dword ptr [EDX + 0x254],ECX     ; 004a6b17
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004a6b1d
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a6b22
    PUSH 0x1e0                          ; 004a6b25
    PUSH 0x280                          ; 004a6b2a
    PUSH 0x584605                       ; 004a6b2f | = "stats"
    LEA EAX,[ESP + 0x510]               ; 004a6b34
    PUSH EAX                            ; 004a6b3b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004a6b3c
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a6b41
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004a6b44
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    PUSH 0xffff                         ; 004a6b49
    PUSH 0x0                            ; 004a6b4e
    PUSH 0x0                            ; 004a6b50
    LEA EAX,[ESP + 0x510]               ; 004a6b52
    PUSH EAX                            ; 004a6b59
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004a6b5a
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a6b5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6b62
    FLD float ptr [EAX + 0x248]         ; 004a6b65
    FLD ST0                             ; 004a6b6b
    FMUL double ptr [0x0058464a]        ; 004a6b6d | DOUBLE_0058464a
    CALL crt_math.c_round_FUN_00563a30  ; 004a6b73
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x528]       ; 004a6b78
    MOV EAX,dword ptr [ESP + 0x528]     ; 004a6b7f
    MOV dword ptr [ESP + 0x53c],EAX     ; 004a6b86
    FILD dword ptr [ESP + 0x53c]        ; 004a6b8d
    FMUL double ptr [0x00584652]        ; 004a6b94 | DOUBLE_00584652
    FSUBP                               ; 004a6b9a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6b9c
    FST float ptr [EAX + 0x248]         ; 004a6b9f
    FLD ST0                             ; 004a6ba5
    FMUL double ptr [0x0058465a]        ; 004a6ba7 | DOUBLE_0058465a
    CALL crt_math.c_round_FUN_00563a30  ; 004a6bad
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x520]       ; 004a6bb2
    MOV EAX,dword ptr [ESP + 0x520]     ; 004a6bb9
    MOV dword ptr [ESP + 0x53c],EAX     ; 004a6bc0
    FILD dword ptr [ESP + 0x53c]        ; 004a6bc7
    FMUL double ptr [0x00584662]        ; 004a6bce | DOUBLE_00584662
    FSUBP                               ; 004a6bd4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6bd6
    FST float ptr [EAX + 0x248]         ; 004a6bd9
    CALL crt_math.c_round_FUN_00563a30  ; 004a6bdf
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x538]       ; 004a6be4
    MOV EAX,dword ptr [ESP + 0x538]     ; 004a6beb
    MOV dword ptr [ESP + 0x53c],EAX     ; 004a6bf2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6bf9
    FILD dword ptr [ESP + 0x53c]        ; 004a6bfc
    FSUBR float ptr [EAX + 0x248]       ; 004a6c03
    FST float ptr [EAX + 0x248]         ; 004a6c09
    FMUL double ptr [0x0058466a]        ; 004a6c0f | DOUBLE_0058466a
    PUSH 0x58460b                       ; 004a6c15 | = "Mission time"
    CALL crt_math.c_round_FUN_00563a30  ; 004a6c1a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x528]       ; 004a6c1f
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a6c26
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a6c2b
    LEA EDI,[ESP + 0x4]                 ; 004a6c2e
    MOV ESI,EAX                         ; 004a6c32
    PUSH EDI                            ; 004a6c34
    MOV AL,byte ptr [ESI]               ; 004a6c35
        ;   Label: LAB_004a6c35
    MOV byte ptr [EDI],AL               ; 004a6c37
    CMP AL,0x0                          ; 004a6c39
    JZ 0x004a6c4d                       ; 004a6c3b
        ;   XREF to: 004a6c4d (CONDITIONAL_JUMP)  ; LAB_004a6c4d
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6c3d
    ADD ESI,0x2                         ; 004a6c40
    MOV byte ptr [EDI + 0x1],AL         ; 004a6c43
    ADD EDI,0x2                         ; 004a6c46
    CMP AL,0x0                          ; 004a6c49
    JNZ 0x004a6c35                      ; 004a6c4b
        ;   XREF to: 004a6c35 (CONDITIONAL_JUMP)  ; LAB_004a6c35
    POP EDI                             ; 004a6c4d
        ;   Label: LAB_004a6c4d
    MOV ESI,0x584618                    ; 004a6c4e | = "\n\n"
    LEA EDI,[ESP + 0x4]                 ; 004a6c53
    MOV EBX,dword ptr [ESP + 0x524]     ; 004a6c57
    PUSH EDI                            ; 004a6c5e
    SUB ECX,ECX                         ; 004a6c5f
    DEC ECX                             ; 004a6c61
    MOV AL,0x0                          ; 004a6c62
    SCASB.REPNE ES:EDI                  ; 004a6c64
    DEC EDI                             ; 004a6c66
    MOV AL,byte ptr [ESI]               ; 004a6c67 | = "\n\n" | s_anon_00584618+2
        ;   Label: LAB_004a6c67
    MOV byte ptr [EDI],AL               ; 004a6c69
    CMP AL,0x0                          ; 004a6c6b
    JZ 0x004a6c7f                       ; 004a6c6d
        ;   XREF to: 004a6c7f (CONDITIONAL_JUMP)  ; LAB_004a6c7f
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6c6f | s_anon_00584618+1 | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004a6c72
    MOV byte ptr [EDI + 0x1],AL         ; 004a6c75
    ADD EDI,0x2                         ; 004a6c78
    CMP AL,0x0                          ; 004a6c7b
    JNZ 0x004a6c67                      ; 004a6c7d
        ;   XREF to: 004a6c67 (CONDITIONAL_JUMP)  ; LAB_004a6c67
    POP EDI                             ; 004a6c7f
        ;   Label: LAB_004a6c7f
    PUSH EBX                            ; 004a6c80
    MOV ESI,dword ptr [ESP + 0x53c]     ; 004a6c81
    PUSH ESI                            ; 004a6c88
    MOV EDI,dword ptr [ESP + 0x528]     ; 004a6c89
    PUSH EDI                            ; 004a6c90
    MOV EAX,dword ptr [ESP + 0x534]     ; 004a6c91
    PUSH EAX                            ; 004a6c98
    PUSH 0x58461b                       ; 004a6c99 | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x418]               ; 004a6c9e
    PUSH EAX                            ; 004a6ca5
    XOR ESI,ESI                         ; 004a6ca6
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004a6ca8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV DL,0x30                         ; 004a6cad
    ADD ESP,0x18                        ; 004a6caf
    LEA EDI,[ESP + 0x404]               ; 004a6cb2
        ;   Label: LAB_004a6cb2
    SUB ECX,ECX                         ; 004a6cb9
    DEC ECX                             ; 004a6cbb
    XOR EAX,EAX                         ; 004a6cbc
    SCASB.REPNE ES:EDI                  ; 004a6cbe
    NOT ECX                             ; 004a6cc0
    DEC ECX                             ; 004a6cc2
    CMP ESI,ECX                         ; 004a6cc3
    JNC 0x004a6cdd                      ; 004a6cc5
        ;   XREF to: 004a6cdd (CONDITIONAL_JUMP)  ; LAB_004a6cdd
    CMP byte ptr [ESP + ESI*0x1 + 0x404],0x20 ; 004a6cc7
    JZ 0x004a6cd4                       ; 004a6ccf
        ;   XREF to: 004a6cd4 (CONDITIONAL_JUMP)  ; LAB_004a6cd4
    INC ESI                             ; 004a6cd1
        ;   Label: LAB_004a6cd1
    JMP 0x004a6cb2                      ; 004a6cd2
        ;   XREF to: 004a6cb2 (UNCONDITIONAL_JUMP)  ; LAB_004a6cb2
    MOV byte ptr [ESP + ESI*0x1 + 0x404],DL ; 004a6cd4
        ;   Label: LAB_004a6cd4
    JMP 0x004a6cd1                      ; 004a6cdb
        ;   XREF to: 004a6cd1 (UNCONDITIONAL_JUMP)  ; LAB_004a6cd1
    LEA ESI,[ESP + 0x404]               ; 004a6cdd
        ;   Label: LAB_004a6cdd
    LEA EDI,[ESP + 0x4]                 ; 004a6ce4
    PUSH EDI                            ; 004a6ce8
    SUB ECX,ECX                         ; 004a6ce9
    DEC ECX                             ; 004a6ceb
    MOV AL,0x0                          ; 004a6cec
    SCASB.REPNE ES:EDI                  ; 004a6cee
    DEC EDI                             ; 004a6cf0
    MOV AL,byte ptr [ESI]               ; 004a6cf1
        ;   Label: LAB_004a6cf1
    MOV byte ptr [EDI],AL               ; 004a6cf3
    CMP AL,0x0                          ; 004a6cf5
    JZ 0x004a6d09                       ; 004a6cf7
        ;   XREF to: 004a6d09 (CONDITIONAL_JUMP)  ; LAB_004a6d09
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6cf9
    ADD ESI,0x2                         ; 004a6cfc
    MOV byte ptr [EDI + 0x1],AL         ; 004a6cff
    ADD EDI,0x2                         ; 004a6d02
    CMP AL,0x0                          ; 004a6d05
    JNZ 0x004a6cf1                      ; 004a6d07
        ;   XREF to: 004a6cf1 (CONDITIONAL_JUMP)  ; LAB_004a6cf1
    POP EDI                             ; 004a6d09
        ;   Label: LAB_004a6d09
    PUSH 0x58462d                       ; 004a6d0a | = "Total body count"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a6d0f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a6d14
    LEA EDI,[ESP + 0x4]                 ; 004a6d17
    MOV ESI,EAX                         ; 004a6d1b
    PUSH EDI                            ; 004a6d1d
    SUB ECX,ECX                         ; 004a6d1e
    DEC ECX                             ; 004a6d20
    MOV AL,0x0                          ; 004a6d21
    SCASB.REPNE ES:EDI                  ; 004a6d23
    DEC EDI                             ; 004a6d25
    MOV AL,byte ptr [ESI]               ; 004a6d26
        ;   Label: LAB_004a6d26
    MOV byte ptr [EDI],AL               ; 004a6d28
    CMP AL,0x0                          ; 004a6d2a
    JZ 0x004a6d3e                       ; 004a6d2c
        ;   XREF to: 004a6d3e (CONDITIONAL_JUMP)  ; LAB_004a6d3e
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6d2e
    ADD ESI,0x2                         ; 004a6d31
    MOV byte ptr [EDI + 0x1],AL         ; 004a6d34
    ADD EDI,0x2                         ; 004a6d37
    CMP AL,0x0                          ; 004a6d3a
    JNZ 0x004a6d26                      ; 004a6d3c
        ;   XREF to: 004a6d26 (CONDITIONAL_JUMP)  ; LAB_004a6d26
    POP EDI                             ; 004a6d3e
        ;   Label: LAB_004a6d3e
    MOV ESI,0x58463e                    ; 004a6d3f | = "\n\n"
    LEA EDI,[ESP + 0x4]                 ; 004a6d44
    PUSH EDI                            ; 004a6d48
    SUB ECX,ECX                         ; 004a6d49
    DEC ECX                             ; 004a6d4b
    MOV AL,0x0                          ; 004a6d4c
    SCASB.REPNE ES:EDI                  ; 004a6d4e
    DEC EDI                             ; 004a6d50
    MOV AL,byte ptr [ESI]               ; 004a6d51 | = "\n\n" | s_anon_0058463e+2
        ;   Label: LAB_004a6d51
    MOV byte ptr [EDI],AL               ; 004a6d53
    CMP AL,0x0                          ; 004a6d55
    JZ 0x004a6d69                       ; 004a6d57
        ;   XREF to: 004a6d69 (CONDITIONAL_JUMP)  ; LAB_004a6d69
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6d59 | s_anon_0058463e+1 | = "%d\n\n"
    ADD ESI,0x2                         ; 004a6d5c
    MOV byte ptr [EDI + 0x1],AL         ; 004a6d5f
    ADD EDI,0x2                         ; 004a6d62
    CMP AL,0x0                          ; 004a6d65
    JNZ 0x004a6d51                      ; 004a6d67
        ;   XREF to: 004a6d51 (CONDITIONAL_JUMP)  ; LAB_004a6d51
    POP EDI                             ; 004a6d69
        ;   Label: LAB_004a6d69
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6d6a
    MOV EBX,dword ptr [EAX + 0x254]     ; 004a6d6d
    PUSH EBX                            ; 004a6d73
    PUSH 0x584641                       ; 004a6d74 | = "%d\n\n"
    LEA EAX,[ESP + 0x40c]               ; 004a6d79
    PUSH EAX                            ; 004a6d80
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004a6d81
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004a6d86
    LEA ESI,[ESP + 0x404]               ; 004a6d89
    LEA EDI,[ESP + 0x4]                 ; 004a6d90
    PUSH EDI                            ; 004a6d94
    SUB ECX,ECX                         ; 004a6d95
    DEC ECX                             ; 004a6d97
    MOV AL,0x0                          ; 004a6d98
    SCASB.REPNE ES:EDI                  ; 004a6d9a
    DEC EDI                             ; 004a6d9c
    MOV AL,byte ptr [ESI]               ; 004a6d9d
        ;   Label: LAB_004a6d9d
    MOV byte ptr [EDI],AL               ; 004a6d9f
    CMP AL,0x0                          ; 004a6da1
    JZ 0x004a6db5                       ; 004a6da3
        ;   XREF to: 004a6db5 (CONDITIONAL_JUMP)  ; LAB_004a6db5
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6da5
    ADD ESI,0x2                         ; 004a6da8
    MOV byte ptr [EDI + 0x1],AL         ; 004a6dab
    ADD EDI,0x2                         ; 004a6dae
    CMP AL,0x0                          ; 004a6db1
    JNZ 0x004a6d9d                      ; 004a6db3
        ;   XREF to: 004a6d9d (CONDITIONAL_JUMP)  ; LAB_004a6d9d
    POP EDI                             ; 004a6db5
        ;   Label: LAB_004a6db5
    MOV EAX,[0x014b9900]                ; 004a6db6 | g_CBitFont_PTR_014b9900
    PUSH 0xffff                         ; 004a6dbb
    MOV dword ptr [ESP + 0x538],EAX     ; 004a6dc0
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004a6dc7
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 004a6dcc
    PUSH 0xc0                           ; 004a6dcf
    PUSH 0x100                          ; 004a6dd4
    PUSH 0x14                           ; 004a6dd9
    PUSH 0x1c73240                      ; 004a6ddb
    LEA EAX,[ESP + 0x14]                ; 004a6de0
    PUSH EAX                            ; 004a6de4
    MOV ESI,dword ptr [ESP + 0x548]     ; 004a6de5
    PUSH ESI                            ; 004a6dec
    CALL engine_font.cpp_CBitFont_wrapText_FUN_00492f30 ; 004a6ded
        ;   XREF to: 00492f30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_wrapText_FUN_00492f30(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
    ADD ESP,0x18                        ; 004a6df2
    PUSH 0x58                           ; 004a6df5
    XOR EDI,EDI                         ; 004a6df7
    PUSH ESI                            ; 004a6df9
    MOV EBX,EAX                         ; 004a6dfa
    MOV dword ptr [ESP + 0x534],EAX     ; 004a6dfc
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004a6e03
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a6e08
    MOV ESI,0xf0                        ; 004a6e0b
    MOV dword ptr [ESP + 0x530],EAX     ; 004a6e10
    TEST EBX,EBX                        ; 004a6e17
    JLE 0x004a6e60                      ; 004a6e19
        ;   XREF to: 004a6e60 (CONDITIONAL_JUMP)  ; LAB_004a6e60
    MOV EBX,0x1c73240                   ; 004a6e1b
    PUSH EBX                            ; 004a6e20
        ;   Label: LAB_004a6e20
    PUSH 0x0                            ; 004a6e21
    PUSH 0xf8                           ; 004a6e23
    PUSH ESI                            ; 004a6e28
    PUSH 0x27f                          ; 004a6e29
    PUSH 0x1c0                          ; 004a6e2e
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004a6e33
    PUSH EAX                            ; 004a6e3a
    INC EDI                             ; 004a6e3b
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0 ; 004a6e3c
        ;   XREF to: 00490de0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004a6e41
    ADD EBX,0x100                       ; 004a6e44
    MOV EDX,dword ptr [ESP + 0x530]     ; 004a6e4a
    MOV ECX,dword ptr [ESP + 0x52c]     ; 004a6e51
    ADD ESI,EDX                         ; 004a6e58
    CMP EDI,ECX                         ; 004a6e5a
    JL 0x004a6e20                       ; 004a6e5c
        ;   XREF to: 004a6e20 (CONDITIONAL_JUMP)  ; LAB_004a6e20
    MOV EAX,EAX                         ; 004a6e5e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004a6e60
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004a6e60
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004a6e65
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 004a6e6a
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004a6e6f
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    PUSH 0x0                            ; 004a6e74
    LEA EAX,[ESP + 0x508]               ; 004a6e76
    PUSH EAX                            ; 004a6e7d
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 ; 004a6e7e
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a6e83
    MOV ESP,EBP                         ; 004a6e86
    POP EBP                             ; 004a6e88
    POP EDI                             ; 004a6e89
    POP ESI                             ; 004a6e8a
    POP EBX                             ; 004a6e8b
    RET                                 ; 004a6e8c

