; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_finishAct_FUN_004d8a90(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x53c]:1  local_53c
; undefined1       Stack[-0x53b]:1  local_53b
; undefined        Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x13b]:1  local_13b
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bc6e
;
; Referenced Globals:
;   TerminatedCString s_stats_005e3514
;   TerminatedCString s_Mission_time_005e351a
;   undefined1 DAT_005e3527
;   undefined1 DAT_005e3528
;   undefined1 DAT_005e3529
;   TerminatedCString s_s_2d_2d_2d_2d_005e352a
;   TerminatedCString s_Total_body_count_005e353c
;   undefined1 DAT_005e354d
;   undefined1 DAT_005e354e
;   undefined1 DAT_005e354f
;   undefined1 DAT_005e3550
;   undefined4 DAT_005e355c
;   undefined4 DAT_005e3564
;   undefined4 DAT_005e356c
;   undefined4 DAT_005e3574
;   ... and 2 more
;
; Called Functions:
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_FUN_004c4260
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004d8a90
        ;   Label: core_game.cpp_CGame_finishAct_FUN_004d8a90
    SUB ESP,0x538                       ; 004d8a91
    MOV EBP,dword ptr [ESP + 0x540]     ; 004d8a97
    CMP dword ptr [EBP + 0x27c],0x2     ; 004d8a9e
    JZ 0x004d8c81                       ; 004d8aa5
        ;   XREF to: 004d8c81 (CONDITIONAL_JUMP)  ; LAB_004d8c81
    PUSH EDI                            ; 004d8aab
    PUSH ESI                            ; 004d8aac
    PUSH EBX                            ; 004d8aad
    MOV EAX,dword ptr [EBP + 0x26c]     ; 004d8aae
    MOV ECX,dword ptr [EBP + 0x274]     ; 004d8ab4
    FLD float ptr [EBP + 0x270]         ; 004d8aba
    ADD ECX,EAX                         ; 004d8ac0
    LEA EAX,[ESP + 0x50c]               ; 004d8ac2
    FADD float ptr [EBP + 0x268]        ; 004d8ac9
    PUSH EAX                            ; 004d8acf
    FSTP float ptr [EBP + 0x268]        ; 004d8ad0
    MOV dword ptr [EBP + 0x274],ECX     ; 004d8ad6
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004d8adc
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004d8ae1
    PUSH 0x1e0                          ; 004d8ae4
    PUSH 0x280                          ; 004d8ae9
    PUSH 0x5e3514                       ; 004d8aee | = "stats"
    LEA EAX,[ESP + 0x518]               ; 004d8af3
    PUSH EAX                            ; 004d8afa
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004d8afb
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004d8b00
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 004d8b03
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0xffff                         ; 004d8b08
    PUSH 0x0                            ; 004d8b0d
    PUSH 0x0                            ; 004d8b0f
    LEA EAX,[ESP + 0x518]               ; 004d8b11
    PUSH EAX                            ; 004d8b18
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004d8b19
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004d8b1e
    FLD float ptr [EBP + 0x268]         ; 004d8b21
    FLD ST0                             ; 004d8b27
    FMUL double ptr [0x005e355c]        ; 004d8b29 | DAT_005e355c
    CALL crt_math.c_round_FUN_005c03a0  ; 004d8b2f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x52c]       ; 004d8b34
    MOV EAX,dword ptr [ESP + 0x52c]     ; 004d8b3b
    MOV dword ptr [ESP + 0x540],EAX     ; 004d8b42
    FILD dword ptr [ESP + 0x540]        ; 004d8b49
    FMUL double ptr [0x005e3564]        ; 004d8b50 | DAT_005e3564
    FSUBP                               ; 004d8b56
    FLD ST0                             ; 004d8b58
    FMUL double ptr [0x005e356c]        ; 004d8b5a | DAT_005e356c
    CALL crt_math.c_round_FUN_005c03a0  ; 004d8b60
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x528]       ; 004d8b65
    MOV EAX,dword ptr [ESP + 0x528]     ; 004d8b6c
    MOV dword ptr [ESP + 0x540],EAX     ; 004d8b73
    FILD dword ptr [ESP + 0x540]        ; 004d8b7a
    FMUL double ptr [0x005e3574]        ; 004d8b81 | DAT_005e3574
    FSUBP                               ; 004d8b87
    FST float ptr [EBP + 0x268]         ; 004d8b89
    CALL crt_math.c_round_FUN_005c03a0  ; 004d8b8f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x534]       ; 004d8b94
    MOV EAX,dword ptr [ESP + 0x534]     ; 004d8b9b
    MOV dword ptr [ESP + 0x540],EAX     ; 004d8ba2
    FILD dword ptr [ESP + 0x540]        ; 004d8ba9
    FSUBR float ptr [EBP + 0x268]       ; 004d8bb0
    FST float ptr [EBP + 0x268]         ; 004d8bb6
    FMUL double ptr [0x005e357c]        ; 004d8bbc | DAT_005e357c
    PUSH 0x5e351a                       ; 004d8bc2 | = "Mission time"
    CALL crt_math.c_round_FUN_005c03a0  ; 004d8bc7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x534]       ; 004d8bcc
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d8bd3
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d8bd8
    LEA EDI,[ESP + 0xc]                 ; 004d8bdb
    MOV ESI,EAX                         ; 004d8bdf
    PUSH EDI                            ; 004d8be1
    MOV AL,byte ptr [ESI]               ; 004d8be2
        ;   Label: LAB_004d8be2
    MOV byte ptr [EDI],AL               ; 004d8be4
    CMP AL,0x0                          ; 004d8be6
    JZ 0x004d8bfa                       ; 004d8be8
        ;   XREF to: 004d8bfa (CONDITIONAL_JUMP)  ; LAB_004d8bfa
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8bea
    ADD ESI,0x2                         ; 004d8bed
    MOV byte ptr [EDI + 0x1],AL         ; 004d8bf0
    ADD EDI,0x2                         ; 004d8bf3
    CMP AL,0x0                          ; 004d8bf6
    JNZ 0x004d8be2                      ; 004d8bf8
        ;   XREF to: 004d8be2 (CONDITIONAL_JUMP)  ; LAB_004d8be2
    POP EDI                             ; 004d8bfa
        ;   Label: LAB_004d8bfa
    MOV ESI,0x5e3527                    ; 004d8bfb | DAT_005e3527
    LEA EDI,[ESP + 0xc]                 ; 004d8c00
    MOV EBX,dword ptr [ESP + 0x530]     ; 004d8c04
    PUSH EDI                            ; 004d8c0b
    SUB ECX,ECX                         ; 004d8c0c
    DEC ECX                             ; 004d8c0e
    MOV AL,0x0                          ; 004d8c0f
    SCASB.REPNE ES:EDI                  ; 004d8c11
    DEC EDI                             ; 004d8c13
    MOV AL,byte ptr [ESI]               ; 004d8c14 | DAT_005e3527 | DAT_005e3529
        ;   Label: LAB_004d8c14
    MOV byte ptr [EDI],AL               ; 004d8c16
    CMP AL,0x0                          ; 004d8c18
    JZ 0x004d8c2c                       ; 004d8c1a
        ;   XREF to: 004d8c2c (CONDITIONAL_JUMP)  ; LAB_004d8c2c
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8c1c | DAT_005e3528 | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004d8c1f
    MOV byte ptr [EDI + 0x1],AL         ; 004d8c22
    ADD EDI,0x2                         ; 004d8c25
    CMP AL,0x0                          ; 004d8c28
    JNZ 0x004d8c14                      ; 004d8c2a
        ;   XREF to: 004d8c14 (CONDITIONAL_JUMP)  ; LAB_004d8c14
    POP EDI                             ; 004d8c2c
        ;   Label: LAB_004d8c2c
    PUSH EBX                            ; 004d8c2d
    MOV ESI,dword ptr [ESP + 0x538]     ; 004d8c2e
    PUSH ESI                            ; 004d8c35
    MOV EDI,dword ptr [ESP + 0x530]     ; 004d8c36
    PUSH EDI                            ; 004d8c3d
    MOV EAX,dword ptr [ESP + 0x538]     ; 004d8c3e
    PUSH EAX                            ; 004d8c45
    PUSH 0x5e352a                       ; 004d8c46 | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x420]               ; 004d8c4b
    PUSH EAX                            ; 004d8c52
    XOR ESI,ESI                         ; 004d8c53
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004d8c55
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV DL,0x30                         ; 004d8c5a
    ADD ESP,0x18                        ; 004d8c5c
    LEA EDI,[ESP + 0x40c]               ; 004d8c5f
        ;   Label: LAB_004d8c5f
    SUB ECX,ECX                         ; 004d8c66
    DEC ECX                             ; 004d8c68
    XOR EAX,EAX                         ; 004d8c69
    SCASB.REPNE ES:EDI                  ; 004d8c6b
    NOT ECX                             ; 004d8c6d
    DEC ECX                             ; 004d8c6f
    CMP ESI,ECX                         ; 004d8c70
    JNC 0x004d8ca0                      ; 004d8c72
        ;   XREF to: 004d8ca0 (CONDITIONAL_JUMP)  ; LAB_004d8ca0
    CMP byte ptr [ESP + ESI*0x1 + 0x40c],0x20 ; 004d8c74
    JZ 0x004d8c97                       ; 004d8c7c
        ;   XREF to: 004d8c97 (CONDITIONAL_JUMP)  ; LAB_004d8c97
    INC ESI                             ; 004d8c7e
        ;   Label: LAB_004d8c7e
    JMP 0x004d8c5f                      ; 004d8c7f
        ;   XREF to: 004d8c5f (UNCONDITIONAL_JUMP)  ; LAB_004d8c5f
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d8c81
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_004d8c81
    PUSH EBP                            ; 004d8c86
    CALL core_game.cpp_CGame_rollCredits_FUN_004d8e50 ; 004d8c87
        ;   XREF to: 004d8e50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_rollCredits_FUN_004d8e50(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d8c8c
    ADD ESP,0x538                       ; 004d8c8f
    POP EBP                             ; 004d8c95
    RET                                 ; 004d8c96
    MOV byte ptr [ESP + ESI*0x1 + 0x40c],DL ; 004d8c97
        ;   Label: LAB_004d8c97
    JMP 0x004d8c7e                      ; 004d8c9e
        ;   XREF to: 004d8c7e (UNCONDITIONAL_JUMP)  ; LAB_004d8c7e
    LEA ESI,[ESP + 0x40c]               ; 004d8ca0
        ;   Label: LAB_004d8ca0
    LEA EDI,[ESP + 0xc]                 ; 004d8ca7
    PUSH EDI                            ; 004d8cab
    SUB ECX,ECX                         ; 004d8cac
    DEC ECX                             ; 004d8cae
    MOV AL,0x0                          ; 004d8caf
    SCASB.REPNE ES:EDI                  ; 004d8cb1
    DEC EDI                             ; 004d8cb3
    MOV AL,byte ptr [ESI]               ; 004d8cb4
        ;   Label: LAB_004d8cb4
    MOV byte ptr [EDI],AL               ; 004d8cb6
    CMP AL,0x0                          ; 004d8cb8
    JZ 0x004d8ccc                       ; 004d8cba
        ;   XREF to: 004d8ccc (CONDITIONAL_JUMP)  ; LAB_004d8ccc
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8cbc
    ADD ESI,0x2                         ; 004d8cbf
    MOV byte ptr [EDI + 0x1],AL         ; 004d8cc2
    ADD EDI,0x2                         ; 004d8cc5
    CMP AL,0x0                          ; 004d8cc8
    JNZ 0x004d8cb4                      ; 004d8cca
        ;   XREF to: 004d8cb4 (CONDITIONAL_JUMP)  ; LAB_004d8cb4
    POP EDI                             ; 004d8ccc
        ;   Label: LAB_004d8ccc
    PUSH 0x5e353c                       ; 004d8ccd | = "Total body count"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d8cd2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d8cd7
    LEA EDI,[ESP + 0xc]                 ; 004d8cda
    MOV ESI,EAX                         ; 004d8cde
    PUSH EDI                            ; 004d8ce0
    SUB ECX,ECX                         ; 004d8ce1
    DEC ECX                             ; 004d8ce3
    MOV AL,0x0                          ; 004d8ce4
    SCASB.REPNE ES:EDI                  ; 004d8ce6
    DEC EDI                             ; 004d8ce8
    MOV AL,byte ptr [ESI]               ; 004d8ce9
        ;   Label: LAB_004d8ce9
    MOV byte ptr [EDI],AL               ; 004d8ceb
    CMP AL,0x0                          ; 004d8ced
    JZ 0x004d8d01                       ; 004d8cef
        ;   XREF to: 004d8d01 (CONDITIONAL_JUMP)  ; LAB_004d8d01
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8cf1
    ADD ESI,0x2                         ; 004d8cf4
    MOV byte ptr [EDI + 0x1],AL         ; 004d8cf7
    ADD EDI,0x2                         ; 004d8cfa
    CMP AL,0x0                          ; 004d8cfd
    JNZ 0x004d8ce9                      ; 004d8cff
        ;   XREF to: 004d8ce9 (CONDITIONAL_JUMP)  ; LAB_004d8ce9
    POP EDI                             ; 004d8d01
        ;   Label: LAB_004d8d01
    MOV ESI,0x5e354d                    ; 004d8d02 | DAT_005e354d
    LEA EDI,[ESP + 0xc]                 ; 004d8d07
    PUSH EDI                            ; 004d8d0b
    SUB ECX,ECX                         ; 004d8d0c
    DEC ECX                             ; 004d8d0e
    MOV AL,0x0                          ; 004d8d0f
    SCASB.REPNE ES:EDI                  ; 004d8d11
    DEC EDI                             ; 004d8d13
    MOV AL,byte ptr [ESI]               ; 004d8d14 | DAT_005e354d | DAT_005e354f
        ;   Label: LAB_004d8d14
    MOV byte ptr [EDI],AL               ; 004d8d16
    CMP AL,0x0                          ; 004d8d18
    JZ 0x004d8d2c                       ; 004d8d1a
        ;   XREF to: 004d8d2c (CONDITIONAL_JUMP)  ; LAB_004d8d2c
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8d1c | DAT_005e354e | DAT_005e3550
    ADD ESI,0x2                         ; 004d8d1f
    MOV byte ptr [EDI + 0x1],AL         ; 004d8d22
    ADD EDI,0x2                         ; 004d8d25
    CMP AL,0x0                          ; 004d8d28
    JNZ 0x004d8d14                      ; 004d8d2a
        ;   XREF to: 004d8d14 (CONDITIONAL_JUMP)  ; LAB_004d8d14
    POP EDI                             ; 004d8d2c
        ;   Label: LAB_004d8d2c
    MOV EDX,dword ptr [EBP + 0x274]     ; 004d8d2d
    PUSH EDX                            ; 004d8d33
    PUSH 0x5e3550                       ; 004d8d34 | DAT_005e3550
    LEA EAX,[ESP + 0x414]               ; 004d8d39
    PUSH EAX                            ; 004d8d40
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004d8d41
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004d8d46
    LEA ESI,[ESP + 0x40c]               ; 004d8d49
    LEA EDI,[ESP + 0xc]                 ; 004d8d50
    PUSH EDI                            ; 004d8d54
    SUB ECX,ECX                         ; 004d8d55
    DEC ECX                             ; 004d8d57
    MOV AL,0x0                          ; 004d8d58
    SCASB.REPNE ES:EDI                  ; 004d8d5a
    DEC EDI                             ; 004d8d5c
    MOV AL,byte ptr [ESI]               ; 004d8d5d
        ;   Label: LAB_004d8d5d
    MOV byte ptr [EDI],AL               ; 004d8d5f
    CMP AL,0x0                          ; 004d8d61
    JZ 0x004d8d75                       ; 004d8d63
        ;   XREF to: 004d8d75 (CONDITIONAL_JUMP)  ; LAB_004d8d75
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8d65
    ADD ESI,0x2                         ; 004d8d68
    MOV byte ptr [EDI + 0x1],AL         ; 004d8d6b
    ADD EDI,0x2                         ; 004d8d6e
    CMP AL,0x0                          ; 004d8d71
    JNZ 0x004d8d5d                      ; 004d8d73
        ;   XREF to: 004d8d5d (CONDITIONAL_JUMP)  ; LAB_004d8d5d
    POP EDI                             ; 004d8d75
        ;   Label: LAB_004d8d75
    PUSH 0xffff                         ; 004d8d76
    MOV EBP,dword ptr [0x0152d244]      ; 004d8d7b | DAT_0152d244
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 004d8d81
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 004d8d86
    PUSH 0xc0                           ; 004d8d89
    PUSH 0x100                          ; 004d8d8e
    PUSH 0x14                           ; 004d8d93
    PUSH 0x1ccafb0                      ; 004d8d95
    LEA EAX,[ESP + 0x1c]                ; 004d8d9a
    PUSH EAX                            ; 004d8d9e
    PUSH EBP                            ; 004d8d9f
    CALL engine_font.cpp_FUN_004c4260   ; 004d8da0
        ;   XREF to: 004c4260 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c4260()
    ADD ESP,0x18                        ; 004d8da5
    PUSH 0x58                           ; 004d8da8
    XOR EBX,EBX                         ; 004d8daa
    PUSH EBP                            ; 004d8dac
    MOV EDI,EAX                         ; 004d8dad
    MOV dword ptr [ESP + 0x544],EAX     ; 004d8daf
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004d8db6
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d8dbb
    MOV ESI,0xf0                        ; 004d8dbe
    MOV dword ptr [ESP + 0x538],EAX     ; 004d8dc3
    TEST EDI,EDI                        ; 004d8dca
    JLE 0x004d8e10                      ; 004d8dcc
        ;   XREF to: 004d8e10 (CONDITIONAL_JUMP)  ; LAB_004d8e10
    MOV EDI,0x1ccafb0                   ; 004d8dce
    PUSH EDI                            ; 004d8dd3
        ;   Label: LAB_004d8dd3
    PUSH 0x0                            ; 004d8dd4
    PUSH 0xf8                           ; 004d8dd6
    PUSH ESI                            ; 004d8ddb
    PUSH 0x27f                          ; 004d8ddc
    PUSH 0x1c0                          ; 004d8de1
    PUSH EBP                            ; 004d8de6
    INC EBX                             ; 004d8de7
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350 ; 004d8de8
        ;   XREF to: 004c2350 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004d8ded
    ADD EDI,0x100                       ; 004d8df0
    MOV ECX,dword ptr [ESP + 0x538]     ; 004d8df6
    MOV EAX,dword ptr [ESP + 0x53c]     ; 004d8dfd
    ADD ESI,ECX                         ; 004d8e04
    CMP EBX,EAX                         ; 004d8e06
    JL 0x004d8dd3                       ; 004d8e08
        ;   XREF to: 004d8dd3 (CONDITIONAL_JUMP)  ; LAB_004d8dd3
    LEA EAX,[EAX]                       ; 004d8e0a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 004d8e10
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_004d8e10
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d8e15
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005b2510 ; 004d8e1a
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005b2510()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d8e1f
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    PUSH 0x0                            ; 004d8e24
    LEA EAX,[ESP + 0x510]               ; 004d8e26
    PUSH EAX                            ; 004d8e2d
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 004d8e2e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d8e33
    POP EBX                             ; 004d8e36
    POP ESI                             ; 004d8e37
    POP EDI                             ; 004d8e38
    ADD ESP,0x538                       ; 004d8e39
    POP EBP                             ; 004d8e3f
    RET                                 ; 004d8e40

