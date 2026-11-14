; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004bdc20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d8993
;   undefined4 DAT_005d899b
;   undefined4 DAT_005d89a3
;   undefined4 DAT_005d89ab
;   undefined4 DAT_005d89b3
;   undefined4 DAT_01511cc0
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_FUN_004ab2b0
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdc20
        ;   Label: core_game.cpp_FUN_004bdc20
    PUSH ESI                            ; 004bdc21
    PUSH EDI                            ; 004bdc22
    PUSH EBP                            ; 004bdc23
    SUB ESP,0x538                       ; 004bdc24
    LEA EAX,[ESP + 0x500]               ; 004bdc2a
    PUSH EAX                            ; 004bdc31
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004bdc32
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdc37
    PUSH 0x1e0                          ; 004bdc3a
    PUSH 0x280                          ; 004bdc3f
    PUSH 0x5d8953                       ; 004bdc44
    LEA EAX,[ESP + 0x50c]               ; 004bdc49
    PUSH EAX                            ; 004bdc50
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004bdc51
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004bdc56
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004bdc59
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    PUSH 0xffff                         ; 004bdc5e
    PUSH 0x0                            ; 004bdc63
    PUSH 0x0                            ; 004bdc65
    LEA EAX,[ESP + 0x50c]               ; 004bdc67
    PUSH EAX                            ; 004bdc6e
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004bdc6f
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004bdc74
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004bdc77
    FLD float ptr [EAX + 0x270]         ; 004bdc7e
    FADD float ptr [EAX + 0x268]        ; 004bdc84
    MOV ECX,dword ptr [ESP + 0x54c]     ; 004bdc8a
    FSTP float ptr [EAX + 0x268]        ; 004bdc91
    FLD float ptr [ECX + 0x270]         ; 004bdc97
    MOV EAX,dword ptr [EAX + 0x26c]     ; 004bdc9d
    MOV EDX,dword ptr [ECX + 0x274]     ; 004bdca3
    FLD ST0                             ; 004bdca9
    FMUL double ptr [0x005d8993]        ; 004bdcab | DAT_005d8993
    ADD EDX,EAX                         ; 004bdcb1
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bdcb3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x528]       ; 004bdcb8
    MOV EAX,dword ptr [ESP + 0x528]     ; 004bdcbf
    MOV dword ptr [ESP + 0x534],EAX     ; 004bdcc6
    FILD dword ptr [ESP + 0x534]        ; 004bdccd
    FMUL double ptr [0x005d899b]        ; 004bdcd4 | DAT_005d899b
    FSUBP                               ; 004bdcda
    FLD ST0                             ; 004bdcdc
    FMUL double ptr [0x005d89a3]        ; 004bdcde | DAT_005d89a3
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bdce4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x51c]       ; 004bdce9
    MOV EAX,dword ptr [ESP + 0x51c]     ; 004bdcf0
    MOV dword ptr [ESP + 0x534],EAX     ; 004bdcf7
    FILD dword ptr [ESP + 0x534]        ; 004bdcfe
    FMUL double ptr [0x005d89ab]        ; 004bdd05 | DAT_005d89ab
    FSUBP                               ; 004bdd0b
    FST float ptr [ECX + 0x270]         ; 004bdd0d
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bdd13
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x520]       ; 004bdd18
    MOV EAX,dword ptr [ESP + 0x520]     ; 004bdd1f
    MOV dword ptr [ESP + 0x534],EAX     ; 004bdd26
    FILD dword ptr [ESP + 0x534]        ; 004bdd2d
    FSUBR float ptr [ECX + 0x270]       ; 004bdd34
    FST float ptr [ECX + 0x270]         ; 004bdd3a
    FMUL double ptr [0x005d89b3]        ; 004bdd40 | DAT_005d89b3
    PUSH 0x5d895d                       ; 004bdd46
    MOV dword ptr [ECX + 0x274],EDX     ; 004bdd4b
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bdd51
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x528]       ; 004bdd56
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bdd5d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bdd62
    MOV EDI,ESP                         ; 004bdd65
    MOV ESI,EAX                         ; 004bdd67
    PUSH EDI                            ; 004bdd69
    MOV AL,byte ptr [ESI]               ; 004bdd6a
        ;   Label: LAB_004bdd6a
    MOV byte ptr [EDI],AL               ; 004bdd6c
    CMP AL,0x0                          ; 004bdd6e
    JZ 0x004bdd82                       ; 004bdd70
        ;   XREF to: 004bdd82 (CONDITIONAL_JUMP)  ; LAB_004bdd82
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdd72
    ADD ESI,0x2                         ; 004bdd75
    MOV byte ptr [EDI + 0x1],AL         ; 004bdd78
    ADD EDI,0x2                         ; 004bdd7b
    CMP AL,0x0                          ; 004bdd7e
    JNZ 0x004bdd6a                      ; 004bdd80
        ;   XREF to: 004bdd6a (CONDITIONAL_JUMP)  ; LAB_004bdd6a
    POP EDI                             ; 004bdd82
        ;   Label: LAB_004bdd82
    MOV ESI,0x5d8968                    ; 004bdd83
    MOV EDI,ESP                         ; 004bdd88
    PUSH EDI                            ; 004bdd8a
    SUB ECX,ECX                         ; 004bdd8b
    DEC ECX                             ; 004bdd8d
    MOV AL,0x0                          ; 004bdd8e
    SCASB.REPNE ES:EDI                  ; 004bdd90
    DEC EDI                             ; 004bdd92
    MOV AL,byte ptr [ESI]               ; 004bdd93
        ;   Label: LAB_004bdd93
    MOV byte ptr [EDI],AL               ; 004bdd95
    CMP AL,0x0                          ; 004bdd97
    JZ 0x004bddab                       ; 004bdd99
        ;   XREF to: 004bddab (CONDITIONAL_JUMP)  ; LAB_004bddab
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdd9b
    ADD ESI,0x2                         ; 004bdd9e
    MOV byte ptr [EDI + 0x1],AL         ; 004bdda1
    ADD EDI,0x2                         ; 004bdda4
    CMP AL,0x0                          ; 004bdda7
    JNZ 0x004bdd93                      ; 004bdda9
        ;   XREF to: 004bdd93 (CONDITIONAL_JUMP)  ; LAB_004bdd93
    POP EDI                             ; 004bddab
        ;   Label: LAB_004bddab
    MOV ECX,dword ptr [ESP + 0x524]     ; 004bddac
    PUSH ECX                            ; 004bddb3
    MOV EBX,dword ptr [ESP + 0x524]     ; 004bddb4
    PUSH EBX                            ; 004bddbb
    MOV ESI,dword ptr [ESP + 0x524]     ; 004bddbc
    PUSH ESI                            ; 004bddc3
    MOV EDI,dword ptr [ESP + 0x534]     ; 004bddc4
    PUSH EDI                            ; 004bddcb
    PUSH 0x5d896b                       ; 004bddcc
    LEA EAX,[ESP + 0x414]               ; 004bddd1
    PUSH EAX                            ; 004bddd8
    XOR ESI,ESI                         ; 004bddd9
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004bdddb
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV DL,0x30                         ; 004bdde0
    ADD ESP,0x18                        ; 004bdde2
    LEA EDI,[ESP + 0x400]               ; 004bdde5
        ;   Label: LAB_004bdde5
    SUB ECX,ECX                         ; 004bddec
    DEC ECX                             ; 004bddee
    XOR EAX,EAX                         ; 004bddef
    SCASB.REPNE ES:EDI                  ; 004bddf1
    NOT ECX                             ; 004bddf3
    DEC ECX                             ; 004bddf5
    CMP ESI,ECX                         ; 004bddf6
    JNC 0x004bde10                      ; 004bddf8
        ;   XREF to: 004bde10 (CONDITIONAL_JUMP)  ; LAB_004bde10
    CMP byte ptr [ESP + ESI*0x1 + 0x400],0x20 ; 004bddfa
    JZ 0x004bde07                       ; 004bde02
        ;   XREF to: 004bde07 (CONDITIONAL_JUMP)  ; LAB_004bde07
    INC ESI                             ; 004bde04
        ;   Label: LAB_004bde04
    JMP 0x004bdde5                      ; 004bde05
        ;   XREF to: 004bdde5 (UNCONDITIONAL_JUMP)  ; LAB_004bdde5
    MOV byte ptr [ESP + ESI*0x1 + 0x400],DL ; 004bde07
        ;   Label: LAB_004bde07
    JMP 0x004bde04                      ; 004bde0e
        ;   XREF to: 004bde04 (UNCONDITIONAL_JUMP)  ; LAB_004bde04
    LEA ESI,[ESP + 0x400]               ; 004bde10
        ;   Label: LAB_004bde10
    MOV EDI,ESP                         ; 004bde17
    PUSH EDI                            ; 004bde19
    SUB ECX,ECX                         ; 004bde1a
    DEC ECX                             ; 004bde1c
    MOV AL,0x0                          ; 004bde1d
    SCASB.REPNE ES:EDI                  ; 004bde1f
    DEC EDI                             ; 004bde21
    MOV AL,byte ptr [ESI]               ; 004bde22
        ;   Label: LAB_004bde22
    MOV byte ptr [EDI],AL               ; 004bde24
    CMP AL,0x0                          ; 004bde26
    JZ 0x004bde3a                       ; 004bde28
        ;   XREF to: 004bde3a (CONDITIONAL_JUMP)  ; LAB_004bde3a
    MOV AL,byte ptr [ESI + 0x1]         ; 004bde2a
    ADD ESI,0x2                         ; 004bde2d
    MOV byte ptr [EDI + 0x1],AL         ; 004bde30
    ADD EDI,0x2                         ; 004bde33
    CMP AL,0x0                          ; 004bde36
    JNZ 0x004bde22                      ; 004bde38
        ;   XREF to: 004bde22 (CONDITIONAL_JUMP)  ; LAB_004bde22
    POP EDI                             ; 004bde3a
        ;   Label: LAB_004bde3a
    PUSH 0x5d897d                       ; 004bde3b
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bde40
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bde45
    MOV EDI,ESP                         ; 004bde48
    MOV ESI,EAX                         ; 004bde4a
    PUSH EDI                            ; 004bde4c
    SUB ECX,ECX                         ; 004bde4d
    DEC ECX                             ; 004bde4f
    MOV AL,0x0                          ; 004bde50
    SCASB.REPNE ES:EDI                  ; 004bde52
    DEC EDI                             ; 004bde54
    MOV AL,byte ptr [ESI]               ; 004bde55
        ;   Label: LAB_004bde55
    MOV byte ptr [EDI],AL               ; 004bde57
    CMP AL,0x0                          ; 004bde59
    JZ 0x004bde6d                       ; 004bde5b
        ;   XREF to: 004bde6d (CONDITIONAL_JUMP)  ; LAB_004bde6d
    MOV AL,byte ptr [ESI + 0x1]         ; 004bde5d
    ADD ESI,0x2                         ; 004bde60
    MOV byte ptr [EDI + 0x1],AL         ; 004bde63
    ADD EDI,0x2                         ; 004bde66
    CMP AL,0x0                          ; 004bde69
    JNZ 0x004bde55                      ; 004bde6b
        ;   XREF to: 004bde55 (CONDITIONAL_JUMP)  ; LAB_004bde55
    POP EDI                             ; 004bde6d
        ;   Label: LAB_004bde6d
    MOV ESI,0x5d8988                    ; 004bde6e
    MOV EDI,ESP                         ; 004bde73
    PUSH EDI                            ; 004bde75
    SUB ECX,ECX                         ; 004bde76
    DEC ECX                             ; 004bde78
    MOV AL,0x0                          ; 004bde79
    SCASB.REPNE ES:EDI                  ; 004bde7b
    DEC EDI                             ; 004bde7d
    MOV AL,byte ptr [ESI]               ; 004bde7e
        ;   Label: LAB_004bde7e
    MOV byte ptr [EDI],AL               ; 004bde80
    CMP AL,0x0                          ; 004bde82
    JZ 0x004bde96                       ; 004bde84
        ;   XREF to: 004bde96 (CONDITIONAL_JUMP)  ; LAB_004bde96
    MOV AL,byte ptr [ESI + 0x1]         ; 004bde86
    ADD ESI,0x2                         ; 004bde89
    MOV byte ptr [EDI + 0x1],AL         ; 004bde8c
    ADD EDI,0x2                         ; 004bde8f
    CMP AL,0x0                          ; 004bde92
    JNZ 0x004bde7e                      ; 004bde94
        ;   XREF to: 004bde7e (CONDITIONAL_JUMP)  ; LAB_004bde7e
    POP EDI                             ; 004bde96
        ;   Label: LAB_004bde96
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004bde97
    MOV EBP,dword ptr [EAX + 0x26c]     ; 004bde9e
    PUSH EBP                            ; 004bdea4
    PUSH 0x5d898b                       ; 004bdea5
    LEA EAX,[ESP + 0x408]               ; 004bdeaa
    PUSH EAX                            ; 004bdeb1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004bdeb2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bdeb7
    LEA ESI,[ESP + 0x400]               ; 004bdeba
    MOV EDI,ESP                         ; 004bdec1
    PUSH EDI                            ; 004bdec3
    SUB ECX,ECX                         ; 004bdec4
    DEC ECX                             ; 004bdec6
    MOV AL,0x0                          ; 004bdec7
    SCASB.REPNE ES:EDI                  ; 004bdec9
    DEC EDI                             ; 004bdecb
    MOV AL,byte ptr [ESI]               ; 004bdecc
        ;   Label: LAB_004bdecc
    MOV byte ptr [EDI],AL               ; 004bdece
    CMP AL,0x0                          ; 004bded0
    JZ 0x004bdee4                       ; 004bded2
        ;   XREF to: 004bdee4 (CONDITIONAL_JUMP)  ; LAB_004bdee4
    MOV AL,byte ptr [ESI + 0x1]         ; 004bded4
    ADD ESI,0x2                         ; 004bded7
    MOV byte ptr [EDI + 0x1],AL         ; 004bdeda
    ADD EDI,0x2                         ; 004bdedd
    CMP AL,0x0                          ; 004bdee0
    JNZ 0x004bdecc                      ; 004bdee2
        ;   XREF to: 004bdecc (CONDITIONAL_JUMP)  ; LAB_004bdecc
    POP EDI                             ; 004bdee4
        ;   Label: LAB_004bdee4
    PUSH 0xffff                         ; 004bdee5
    MOV EBP,dword ptr [0x01511cc0]      ; 004bdeea | DAT_01511cc0
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004bdef0
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 004bdef5
    PUSH 0xc0                           ; 004bdef8
    PUSH 0x100                          ; 004bdefd
    PUSH 0x14                           ; 004bdf02
    PUSH 0x1cb1120                      ; 004bdf04
    LEA EAX,[ESP + 0x10]                ; 004bdf09
    PUSH EAX                            ; 004bdf0d
    PUSH EBP                            ; 004bdf0e
    CALL engine_font.cpp_FUN_004ab2b0   ; 004bdf0f
        ;   XREF to: 004ab2b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab2b0()
    ADD ESP,0x18                        ; 004bdf14
    PUSH 0x58                           ; 004bdf17
    XOR EBX,EBX                         ; 004bdf19
    PUSH EBP                            ; 004bdf1b
    MOV EDI,EAX                         ; 004bdf1c
    MOV dword ptr [ESP + 0x538],EAX     ; 004bdf1e
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004bdf25
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004bdf2a
    MOV ESI,0xf0                        ; 004bdf2d
    MOV dword ptr [ESP + 0x52c],EAX     ; 004bdf32
    TEST EDI,EDI                        ; 004bdf39
    JLE 0x004bdf80                      ; 004bdf3b
        ;   XREF to: 004bdf80 (CONDITIONAL_JUMP)  ; LAB_004bdf80
    MOV EDI,0x1cb1120                   ; 004bdf3d
    PUSH EDI                            ; 004bdf42
        ;   Label: LAB_004bdf42
    PUSH 0x0                            ; 004bdf43
    PUSH 0xf8                           ; 004bdf45
    PUSH ESI                            ; 004bdf4a
    PUSH 0x27f                          ; 004bdf4b
    PUSH 0x1c0                          ; 004bdf50
    PUSH EBP                            ; 004bdf55
    INC EBX                             ; 004bdf56
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0 ; 004bdf57
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004bdf5c
    ADD EDI,0x100                       ; 004bdf5f
    MOV EAX,dword ptr [ESP + 0x52c]     ; 004bdf65
    MOV EDX,dword ptr [ESP + 0x530]     ; 004bdf6c
    ADD ESI,EAX                         ; 004bdf73
    CMP EBX,EDX                         ; 004bdf75
    JL 0x004bdf42                       ; 004bdf77
        ;   XREF to: 004bdf42 (CONDITIONAL_JUMP)  ; LAB_004bdf42
    LEA EAX,[EAX]                       ; 004bdf79
    NOP                                 ; 004bdf7f
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004bdf80
        ;   Label: LAB_004bdf80
    PUSH 0x0                            ; 004bdf87
    MOV dword ptr [EAX + 0x270],0x0     ; 004bdf89
    LEA EAX,[ESP + 0x504]               ; 004bdf93
    PUSH EAX                            ; 004bdf9a
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 004bdf9b
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bdfa0
    ADD ESP,0x538                       ; 004bdfa3
    POP EBP                             ; 004bdfa9
    POP EDI                             ; 004bdfaa
    POP ESI                             ; 004bdfab
    POP EBX                             ; 004bdfac
    RET                                 ; 004bdfad

