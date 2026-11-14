; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_captureDebugMovieFrame_FUN_004cb950(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061d96c
;   undefined4 DAT_0061d970
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01cd0c38
;   undefined4 DAT_01cd0c3c
;   undefined4 DAT_01cd0c40
;   undefined4 DAT_01cd0c44
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fputc_FUN_005c2f00
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb950
        ;   Label: core_game.cpp_captureDebugMovieFrame_FUN_004cb950
    PUSH ESI                            ; 004cb951
    PUSH EDI                            ; 004cb952
    PUSH EBP                            ; 004cb953
    SUB ESP,0x150                       ; 004cb954
    CMP dword ptr [0x01cd0c38],0x0      ; 004cb95a | DAT_01cd0c38
    JNZ 0x004cb96e                      ; 004cb961
        ;   XREF to: 004cb96e (CONDITIONAL_JUMP)  ; LAB_004cb96e
    ADD ESP,0x150                       ; 004cb963
        ;   Label: LAB_004cb963
    POP EBP                             ; 004cb969
    POP EDI                             ; 004cb96a
    POP ESI                             ; 004cb96b
    POP EBX                             ; 004cb96c
    RET                                 ; 004cb96d
    PUSH 0x1d                           ; 004cb96e
        ;   Label: LAB_004cb96e
    MOV EAX,[0x0061f2a4]                ; 004cb970 | DAT_0061f2a4
    PUSH EAX                            ; 004cb975
    MOV EDX,dword ptr [EAX]             ; 004cb976
    CALL dword ptr [EDX]                ; 004cb978
    ADD ESP,0x8                         ; 004cb97a
    TEST EAX,EAX                        ; 004cb97d
    JZ 0x004cb9ab                       ; 004cb97f
        ;   XREF to: 004cb9ab (CONDITIONAL_JUMP)  ; LAB_004cb9ab
    PUSH 0x2f                           ; 004cb981
    MOV EAX,[0x0061f2a4]                ; 004cb983 | DAT_0061f2a4
    PUSH EAX                            ; 004cb988
    MOV EDX,dword ptr [EAX]             ; 004cb989
    CALL dword ptr [EDX + 0x4]          ; 004cb98b
    ADD ESP,0x8                         ; 004cb98e
    TEST EAX,EAX                        ; 004cb991
    JZ 0x004cb9ab                       ; 004cb993
        ;   XREF to: 004cb9ab (CONDITIONAL_JUMP)  ; LAB_004cb9ab
    MOV ECX,dword ptr [0x01cd0c3c]      ; 004cb995 | DAT_01cd0c3c
    TEST ECX,ECX                        ; 004cb99b
    JZ 0x004cbc4d                       ; 004cb99d
        ;   XREF to: 004cbc4d (CONDITIONAL_JUMP)  ; LAB_004cbc4d
    XOR EDI,EDI                         ; 004cb9a3
    MOV dword ptr [0x01cd0c3c],EDI      ; 004cb9a5 | DAT_01cd0c3c
    MOV EBP,dword ptr [0x01cd0c40]      ; 004cb9ab | DAT_01cd0c40
        ;   Label: LAB_004cb9ab
    TEST EBP,EBP                        ; 004cb9b1
    JLE 0x004cb9c1                      ; 004cb9b3
        ;   XREF to: 004cb9c1 (CONDITIONAL_JUMP)  ; LAB_004cb9c1
    CMP EBP,dword ptr [0x01cd0c44]      ; 004cb9b5 | DAT_01cd0c44
    JLE 0x004cbc63                      ; 004cb9bb
        ;   XREF to: 004cbc63 (CONDITIONAL_JUMP)  ; LAB_004cbc63
    CMP dword ptr [0x01cd0c3c],0x0      ; 004cb9c1 | DAT_01cd0c3c
        ;   Label: LAB_004cb9c1
    JZ 0x004cb963                       ; 004cb9c8
        ;   XREF to: 004cb963 (CONDITIONAL_JUMP)  ; LAB_004cb963
    MOV EBX,dword ptr [0x01cd0c44]      ; 004cb9ca | DAT_01cd0c44
    PUSH EBX                            ; 004cb9d0
    PUSH 0x5e1330                       ; 004cb9d1
    LEA EAX,[ESP + 0xd0]                ; 004cb9d6
    PUSH EAX                            ; 004cb9dd
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004cb9de
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004cb9e3
    LEA EAX,[ESP + 0xc8]                ; 004cb9e6
    PUSH EAX                            ; 004cb9ed
    PUSH 0x5e133c                       ; 004cb9ee
    LEA EAX,[ESP + 0x8]                 ; 004cb9f3
    PUSH EAX                            ; 004cb9f7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004cb9f8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004cb9fd
    PUSH 0x5e135d                       ; 004cba00
    LEA EAX,[ESP + 0xcc]                ; 004cba05
    PUSH EAX                            ; 004cba0c
    PUSH 0x5e1360                       ; 004cba0d
    CALL engine_dosio.cpp_FUN_00479180  ; 004cba12
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004cba17
    MOV dword ptr [ESP + 0x134],EAX     ; 004cba1a
    TEST EAX,EAX                        ; 004cba21
    JZ 0x004cb963                       ; 004cba23
        ;   XREF to: 004cb963 (CONDITIONAL_JUMP)  ; LAB_004cb963
    XOR ESI,ESI                         ; 004cba29
    MOV EDI,dword ptr [0x0061d970]      ; 004cba2b | DAT_0061d970
    MOV dword ptr [ESP + 0x130],ESI     ; 004cba31
    TEST EDI,EDI                        ; 004cba38
    JLE 0x004cbc14                      ; 004cba3a
        ;   XREF to: 004cbc14 (CONDITIONAL_JUMP)  ; LAB_004cbc14
    XOR ESI,ESI                         ; 004cba40
        ;   Label: LAB_004cba40
    MOV EDI,dword ptr [0x0061d96c]      ; 004cba42 | DAT_0061d96c
    MOV dword ptr [ESP + 0x138],ESI     ; 004cba48
    TEST EDI,EDI                        ; 004cba4f
    JLE 0x004cbbf7                      ; 004cba51
        ;   XREF to: 004cbbf7 (CONDITIONAL_JUMP)  ; LAB_004cbbf7
    MOV EAX,dword ptr [ESP + 0x130]     ; 004cba57
    INC EAX                             ; 004cba5e
    MOV dword ptr [ESP + 0x12c],EAX     ; 004cba5f
    MOV EDX,dword ptr [ESP + 0x138]     ; 004cba66
        ;   Label: LAB_004cba66
    MOV ESI,dword ptr [0x0061b498]      ; 004cba6d | DAT_0061b498
    IMUL EDX,ESI                        ; 004cba73
    MOV EDI,dword ptr [0x0061d96c]      ; 004cba76 | DAT_0061d96c
    MOV EAX,EDX                         ; 004cba7c
    SAR EDX,0x1f                        ; 004cba7e
    IDIV EDI                            ; 004cba81
    MOV EDX,dword ptr [ESP + 0x138]     ; 004cba83
    INC EDX                             ; 004cba8a
    IMUL EDX,ESI                        ; 004cba8b
    MOV dword ptr [ESP + 0x140],EAX     ; 004cba8e
    MOV EAX,EDX                         ; 004cba95
    SAR EDX,0x1f                        ; 004cba97
    IDIV EDI                            ; 004cba9a
    MOV EBX,dword ptr [0x0061b49c]      ; 004cba9c | DAT_0061b49c
    MOV EDX,dword ptr [ESP + 0x130]     ; 004cbaa2
    IMUL EDX,EBX                        ; 004cbaa9
    MOV ESI,dword ptr [0x0061d970]      ; 004cbaac | DAT_0061d970
    MOV dword ptr [ESP + 0x148],EAX     ; 004cbab2
    MOV EAX,EDX                         ; 004cbab9
    SAR EDX,0x1f                        ; 004cbabb
    IDIV ESI                            ; 004cbabe
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004cbac0
    IMUL EDX,EBX                        ; 004cbac7
    MOV ECX,EAX                         ; 004cbaca
    MOV EAX,EDX                         ; 004cbacc
    SAR EDX,0x1f                        ; 004cbace
    IDIV ESI                            ; 004cbad1
    XOR EDI,EDI                         ; 004cbad3
    XOR EBX,EBX                         ; 004cbad5
    MOV EDX,EAX                         ; 004cbad7
    XOR EAX,EAX                         ; 004cbad9
    XOR ESI,ESI                         ; 004cbadb
    MOV dword ptr [ESP + 0x14c],EAX     ; 004cbadd
    CMP ECX,EDX                         ; 004cbae4
    JGE 0x004cbb8d                      ; 004cbae6
        ;   XREF to: 004cbb8d (CONDITIONAL_JUMP)  ; LAB_004cbb8d
    LEA EAX,[ECX*0x4 + 0x0]             ; 004cbaec
    SHL EDX,0x2                         ; 004cbaf3
    MOV dword ptr [ESP + 0x144],EAX     ; 004cbaf6
    MOV dword ptr [ESP + 0x13c],EDX     ; 004cbafd
    MOV EBP,dword ptr [ESP + 0x148]     ; 004cbb04
        ;   Label: LAB_004cbb04
    MOV ECX,dword ptr [ESP + 0x140]     ; 004cbb0b
    CMP ECX,EBP                         ; 004cbb12
    JGE 0x004cbb6d                      ; 004cbb14
        ;   XREF to: 004cbb6d (CONDITIONAL_JUMP)  ; LAB_004cbb6d
    MOV EAX,dword ptr [ESP + 0x144]     ; 004cbb16
    LEA EDX,[ECX*0x4 + 0x0]             ; 004cbb1d
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 004cbb24
    ADD EDX,EAX                         ; 004cbb2a
    MOV EAX,dword ptr [EDX]             ; 004cbb2c
        ;   Label: LAB_004cbb2c
    MOV EBP,EAX                         ; 004cbb2e
    SHR EBP,0x10                        ; 004cbb30
    AND EBP,0xff                        ; 004cbb33
    ADD EDX,0x4                         ; 004cbb39
    ADD EBX,EBP                         ; 004cbb3c
    MOV EBP,EAX                         ; 004cbb3e
    INC ECX                             ; 004cbb40
    SHR EBP,0x8                         ; 004cbb41
    AND EAX,0xff                        ; 004cbb44
    ADD EDI,EAX                         ; 004cbb49
    AND EBP,0xff                        ; 004cbb4b
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004cbb51
    INC EAX                             ; 004cbb58
    ADD ESI,EBP                         ; 004cbb59
    MOV EBP,dword ptr [ESP + 0x148]     ; 004cbb5b
    MOV dword ptr [ESP + 0x14c],EAX     ; 004cbb62
    CMP ECX,EBP                         ; 004cbb69
    JL 0x004cbb2c                       ; 004cbb6b
        ;   XREF to: 004cbb2c (CONDITIONAL_JUMP)  ; LAB_004cbb2c
    MOV EDX,dword ptr [ESP + 0x144]     ; 004cbb6d
        ;   Label: LAB_004cbb6d
    ADD EDX,0x4                         ; 004cbb74
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004cbb77
    MOV dword ptr [ESP + 0x144],EDX     ; 004cbb7e
    CMP EDX,ECX                         ; 004cbb85
    JL 0x004cbb04                       ; 004cbb87
        ;   XREF to: 004cbb04 (CONDITIONAL_JUMP)  ; LAB_004cbb04
    MOV EBP,dword ptr [ESP + 0x14c]     ; 004cbb8d
        ;   Label: LAB_004cbb8d
    MOV EDX,EBX                         ; 004cbb94
    MOV EAX,EBX                         ; 004cbb96
    SAR EDX,0x1f                        ; 004cbb98
    IDIV EBP                            ; 004cbb9b
    MOV EBX,EAX                         ; 004cbb9d
    MOV EDX,ESI                         ; 004cbb9f
    MOV EAX,ESI                         ; 004cbba1
    SAR EDX,0x1f                        ; 004cbba3
    IDIV EBP                            ; 004cbba6
    MOV ESI,EAX                         ; 004cbba8
    MOV EDX,EDI                         ; 004cbbaa
    MOV EAX,EDI                         ; 004cbbac
    SAR EDX,0x1f                        ; 004cbbae
    IDIV EBP                            ; 004cbbb1
    MOV EBP,dword ptr [ESP + 0x134]     ; 004cbbb3
    PUSH EBP                            ; 004cbbba
    PUSH EBX                            ; 004cbbbb
    MOV EDI,EAX                         ; 004cbbbc
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 004cbbbe
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005c2f00(int character, _FILE * file)
    ADD ESP,0x8                         ; 004cbbc3
    PUSH EBP                            ; 004cbbc6
    PUSH ESI                            ; 004cbbc7
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 004cbbc8
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005c2f00(int character, _FILE * file)
    ADD ESP,0x8                         ; 004cbbcd
    PUSH EBP                            ; 004cbbd0
    PUSH EDI                            ; 004cbbd1
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 004cbbd2
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005c2f00(int character, _FILE * file)
    ADD ESP,0x8                         ; 004cbbd7
    MOV ECX,dword ptr [ESP + 0x138]     ; 004cbbda
    INC ECX                             ; 004cbbe1
    MOV EBX,dword ptr [0x0061d96c]      ; 004cbbe2 | DAT_0061d96c
    MOV dword ptr [ESP + 0x138],ECX     ; 004cbbe8
    CMP ECX,EBX                         ; 004cbbef
    JL 0x004cba66                       ; 004cbbf1
        ;   XREF to: 004cba66 (CONDITIONAL_JUMP)  ; LAB_004cba66
    MOV EAX,dword ptr [ESP + 0x130]     ; 004cbbf7
        ;   Label: LAB_004cbbf7
    INC EAX                             ; 004cbbfe
    MOV EDX,dword ptr [0x0061d970]      ; 004cbbff | DAT_0061d970
    MOV dword ptr [ESP + 0x130],EAX     ; 004cbc05
    CMP EAX,EDX                         ; 004cbc0c
    JL 0x004cba40                       ; 004cbc0e
        ;   XREF to: 004cba40 (CONDITIONAL_JUMP)  ; LAB_004cba40
    MOV ECX,dword ptr [ESP + 0x134]     ; 004cbc14
        ;   Label: LAB_004cbc14
    PUSH ECX                            ; 004cbc1b
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004cbc1c
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004cbc21
    PUSH 0x0                            ; 004cbc24
    PUSH 0x0                            ; 004cbc26
    LEA EAX,[ESP + 0x8]                 ; 004cbc28
    PUSH EAX                            ; 004cbc2c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004cbc2d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EBX,dword ptr [0x01cd0c44]      ; 004cbc32 | DAT_01cd0c44
    INC EBX                             ; 004cbc38
    ADD ESP,0xc                         ; 004cbc39
    MOV dword ptr [0x01cd0c44],EBX      ; 004cbc3c | DAT_01cd0c44
    ADD ESP,0x150                       ; 004cbc42
    POP EBP                             ; 004cbc48
    POP EDI                             ; 004cbc49
    POP ESI                             ; 004cbc4a
    POP EBX                             ; 004cbc4b
    RET                                 ; 004cbc4c
    MOV ESI,0x1                         ; 004cbc4d
        ;   Label: LAB_004cbc4d
    MOV dword ptr [0x01cd0c44],ECX      ; 004cbc52 | DAT_01cd0c44
    MOV dword ptr [0x01cd0c3c],ESI      ; 004cbc58 | DAT_01cd0c3c
    JMP 0x004cb9ab                      ; 004cbc5e
        ;   XREF to: 004cb9ab (UNCONDITIONAL_JUMP)  ; LAB_004cb9ab
    XOR EBP,EBP                         ; 004cbc63
        ;   Label: LAB_004cbc63
    MOV dword ptr [0x01cd0c3c],EBP      ; 004cbc65 | DAT_01cd0c3c
    ADD ESP,0x150                       ; 004cbc6b
    POP EBP                             ; 004cbc71
    POP EDI                             ; 004cbc72
    POP ESI                             ; 004cbc73
    POP EBX                             ; 004cbc74
    RET                                 ; 004cbc75

