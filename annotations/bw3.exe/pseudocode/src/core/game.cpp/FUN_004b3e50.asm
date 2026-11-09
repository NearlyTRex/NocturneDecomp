; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b3e50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fe9ec
;   undefined4 DAT_005fe9f0
;   undefined4 DAT_00600284
;   undefined4 DAT_01d22c40
;   undefined4 DAT_01d22c44
;   undefined4 DAT_01d22c48
;   undefined4 DAT_01d22c4c
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fputc_FUN_005a5d70
;   crt_unknown.c_FUN_005a28c0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3e50
        ;   Label: core_game.cpp_FUN_004b3e50
    PUSH ESI                            ; 004b3e51
    PUSH EDI                            ; 004b3e52
    PUSH EBP                            ; 004b3e53
    SUB ESP,0x150                       ; 004b3e54
    CMP dword ptr [0x01d22c40],0x0      ; 004b3e5a | DAT_01d22c40
    JNZ 0x004b3e6e                      ; 004b3e61
        ;   XREF to: 004b3e6e (CONDITIONAL_JUMP)  ; LAB_004b3e6e
    ADD ESP,0x150                       ; 004b3e63
        ;   Label: LAB_004b3e63
    POP EBP                             ; 004b3e69
    POP EDI                             ; 004b3e6a
    POP ESI                             ; 004b3e6b
    POP EBX                             ; 004b3e6c
    RET                                 ; 004b3e6d
    PUSH 0x1d                           ; 004b3e6e
        ;   Label: LAB_004b3e6e
    MOV EAX,[0x00600284]                ; 004b3e70 | DAT_00600284
    PUSH EAX                            ; 004b3e75
    MOV EDX,dword ptr [EAX]             ; 004b3e76
    CALL dword ptr [EDX]                ; 004b3e78
    ADD ESP,0x8                         ; 004b3e7a
    TEST EAX,EAX                        ; 004b3e7d
    JZ 0x004b3eab                       ; 004b3e7f
        ;   XREF to: 004b3eab (CONDITIONAL_JUMP)  ; LAB_004b3eab
    PUSH 0x2f                           ; 004b3e81
    MOV EAX,[0x00600284]                ; 004b3e83 | DAT_00600284
    PUSH EAX                            ; 004b3e88
    MOV EDX,dword ptr [EAX]             ; 004b3e89
    CALL dword ptr [EDX + 0x4]          ; 004b3e8b
    ADD ESP,0x8                         ; 004b3e8e
    TEST EAX,EAX                        ; 004b3e91
    JZ 0x004b3eab                       ; 004b3e93
        ;   XREF to: 004b3eab (CONDITIONAL_JUMP)  ; LAB_004b3eab
    MOV ECX,dword ptr [0x01d22c44]      ; 004b3e95 | DAT_01d22c44
    TEST ECX,ECX                        ; 004b3e9b
    JZ 0x004b414d                       ; 004b3e9d
        ;   XREF to: 004b414d (CONDITIONAL_JUMP)  ; LAB_004b414d
    XOR EDI,EDI                         ; 004b3ea3
    MOV dword ptr [0x01d22c44],EDI      ; 004b3ea5 | DAT_01d22c44
    MOV EBP,dword ptr [0x01d22c48]      ; 004b3eab | DAT_01d22c48
        ;   Label: LAB_004b3eab
    TEST EBP,EBP                        ; 004b3eb1
    JLE 0x004b3ec1                      ; 004b3eb3
        ;   XREF to: 004b3ec1 (CONDITIONAL_JUMP)  ; LAB_004b3ec1
    CMP EBP,dword ptr [0x01d22c4c]      ; 004b3eb5 | DAT_01d22c4c
    JLE 0x004b4163                      ; 004b3ebb
        ;   XREF to: 004b4163 (CONDITIONAL_JUMP)  ; LAB_004b4163
    CMP dword ptr [0x01d22c44],0x0      ; 004b3ec1 | DAT_01d22c44
        ;   Label: LAB_004b3ec1
    JZ 0x004b3e63                       ; 004b3ec8
        ;   XREF to: 004b3e63 (CONDITIONAL_JUMP)  ; LAB_004b3e63
    MOV EBX,dword ptr [0x01d22c4c]      ; 004b3eca | DAT_01d22c4c
    PUSH EBX                            ; 004b3ed0
    PUSH 0x5c21ac                       ; 004b3ed1
    LEA EAX,[ESP + 0xd0]                ; 004b3ed6
    PUSH EAX                            ; 004b3edd
    CALL crt_unknown.c_FUN_005a28c0     ; 004b3ede
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004b3ee3
    LEA EAX,[ESP + 0xc8]                ; 004b3ee6
    PUSH EAX                            ; 004b3eed
    PUSH 0x5c21b8                       ; 004b3eee
    LEA EAX,[ESP + 0x8]                 ; 004b3ef3
    PUSH EAX                            ; 004b3ef7
    CALL crt_unknown.c_FUN_005a28c0     ; 004b3ef8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004b3efd
    PUSH 0x5c21d9                       ; 004b3f00
    LEA EAX,[ESP + 0xcc]                ; 004b3f05
    PUSH EAX                            ; 004b3f0c
    PUSH 0x5c21dc                       ; 004b3f0d
    CALL engine_dosio.cpp_FUN_004659c0  ; 004b3f12
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004b3f17
    MOV dword ptr [ESP + 0x134],EAX     ; 004b3f1a
    TEST EAX,EAX                        ; 004b3f21
    JZ 0x004b3e63                       ; 004b3f23
        ;   XREF to: 004b3e63 (CONDITIONAL_JUMP)  ; LAB_004b3e63
    XOR ESI,ESI                         ; 004b3f29
    MOV EDI,dword ptr [0x005fe9f0]      ; 004b3f2b | DAT_005fe9f0
    MOV dword ptr [ESP + 0x130],ESI     ; 004b3f31
    TEST EDI,EDI                        ; 004b3f38
    JLE 0x004b4114                      ; 004b3f3a
        ;   XREF to: 004b4114 (CONDITIONAL_JUMP)  ; LAB_004b4114
    XOR ESI,ESI                         ; 004b3f40
        ;   Label: LAB_004b3f40
    MOV EDI,dword ptr [0x005fe9ec]      ; 004b3f42 | DAT_005fe9ec
    MOV dword ptr [ESP + 0x138],ESI     ; 004b3f48
    TEST EDI,EDI                        ; 004b3f4f
    JLE 0x004b40f7                      ; 004b3f51
        ;   XREF to: 004b40f7 (CONDITIONAL_JUMP)  ; LAB_004b40f7
    MOV EAX,dword ptr [ESP + 0x130]     ; 004b3f57
    INC EAX                             ; 004b3f5e
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b3f5f
    MOV EDX,dword ptr [ESP + 0x138]     ; 004b3f66
        ;   Label: LAB_004b3f66
    MOV ESI,dword ptr [0x005fba18]      ; 004b3f6d | DAT_005fba18
    IMUL EDX,ESI                        ; 004b3f73
    MOV EDI,dword ptr [0x005fe9ec]      ; 004b3f76 | DAT_005fe9ec
    MOV EAX,EDX                         ; 004b3f7c
    SAR EDX,0x1f                        ; 004b3f7e
    IDIV EDI                            ; 004b3f81
    MOV EDX,dword ptr [ESP + 0x138]     ; 004b3f83
    INC EDX                             ; 004b3f8a
    IMUL EDX,ESI                        ; 004b3f8b
    MOV dword ptr [ESP + 0x140],EAX     ; 004b3f8e
    MOV EAX,EDX                         ; 004b3f95
    SAR EDX,0x1f                        ; 004b3f97
    IDIV EDI                            ; 004b3f9a
    MOV EBX,dword ptr [0x005fba1c]      ; 004b3f9c | DAT_005fba1c
    MOV EDX,dword ptr [ESP + 0x130]     ; 004b3fa2
    IMUL EDX,EBX                        ; 004b3fa9
    MOV ESI,dword ptr [0x005fe9f0]      ; 004b3fac | DAT_005fe9f0
    MOV dword ptr [ESP + 0x148],EAX     ; 004b3fb2
    MOV EAX,EDX                         ; 004b3fb9
    SAR EDX,0x1f                        ; 004b3fbb
    IDIV ESI                            ; 004b3fbe
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004b3fc0
    IMUL EDX,EBX                        ; 004b3fc7
    MOV ECX,EAX                         ; 004b3fca
    MOV EAX,EDX                         ; 004b3fcc
    SAR EDX,0x1f                        ; 004b3fce
    IDIV ESI                            ; 004b3fd1
    XOR EDI,EDI                         ; 004b3fd3
    XOR EBX,EBX                         ; 004b3fd5
    MOV EDX,EAX                         ; 004b3fd7
    XOR EAX,EAX                         ; 004b3fd9
    XOR ESI,ESI                         ; 004b3fdb
    MOV dword ptr [ESP + 0x14c],EAX     ; 004b3fdd
    CMP ECX,EDX                         ; 004b3fe4
    JGE 0x004b408d                      ; 004b3fe6
        ;   XREF to: 004b408d (CONDITIONAL_JUMP)  ; LAB_004b408d
    LEA EAX,[ECX*0x4 + 0x0]             ; 004b3fec
    SHL EDX,0x2                         ; 004b3ff3
    MOV dword ptr [ESP + 0x144],EAX     ; 004b3ff6
    MOV dword ptr [ESP + 0x13c],EDX     ; 004b3ffd
    MOV EBP,dword ptr [ESP + 0x148]     ; 004b4004
        ;   Label: LAB_004b4004
    MOV ECX,dword ptr [ESP + 0x140]     ; 004b400b
    CMP ECX,EBP                         ; 004b4012
    JGE 0x004b406d                      ; 004b4014
        ;   XREF to: 004b406d (CONDITIONAL_JUMP)  ; LAB_004b406d
    MOV EAX,dword ptr [ESP + 0x144]     ; 004b4016
    LEA EDX,[ECX*0x4 + 0x0]             ; 004b401d
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 004b4024
    ADD EDX,EAX                         ; 004b402a
    MOV EAX,dword ptr [EDX]             ; 004b402c
        ;   Label: LAB_004b402c
    MOV EBP,EAX                         ; 004b402e
    SHR EBP,0x10                        ; 004b4030
    AND EBP,0xff                        ; 004b4033
    ADD EDX,0x4                         ; 004b4039
    ADD EBX,EBP                         ; 004b403c
    MOV EBP,EAX                         ; 004b403e
    INC ECX                             ; 004b4040
    SHR EBP,0x8                         ; 004b4041
    AND EAX,0xff                        ; 004b4044
    ADD EDI,EAX                         ; 004b4049
    AND EBP,0xff                        ; 004b404b
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004b4051
    INC EAX                             ; 004b4058
    ADD ESI,EBP                         ; 004b4059
    MOV EBP,dword ptr [ESP + 0x148]     ; 004b405b
    MOV dword ptr [ESP + 0x14c],EAX     ; 004b4062
    CMP ECX,EBP                         ; 004b4069
    JL 0x004b402c                       ; 004b406b
        ;   XREF to: 004b402c (CONDITIONAL_JUMP)  ; LAB_004b402c
    MOV EDX,dword ptr [ESP + 0x144]     ; 004b406d
        ;   Label: LAB_004b406d
    ADD EDX,0x4                         ; 004b4074
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004b4077
    MOV dword ptr [ESP + 0x144],EDX     ; 004b407e
    CMP EDX,ECX                         ; 004b4085
    JL 0x004b4004                       ; 004b4087
        ;   XREF to: 004b4004 (CONDITIONAL_JUMP)  ; LAB_004b4004
    MOV EBP,dword ptr [ESP + 0x14c]     ; 004b408d
        ;   Label: LAB_004b408d
    MOV EDX,EBX                         ; 004b4094
    MOV EAX,EBX                         ; 004b4096
    SAR EDX,0x1f                        ; 004b4098
    IDIV EBP                            ; 004b409b
    MOV EBX,EAX                         ; 004b409d
    MOV EDX,ESI                         ; 004b409f
    MOV EAX,ESI                         ; 004b40a1
    SAR EDX,0x1f                        ; 004b40a3
    IDIV EBP                            ; 004b40a6
    MOV ESI,EAX                         ; 004b40a8
    MOV EDX,EDI                         ; 004b40aa
    MOV EAX,EDI                         ; 004b40ac
    SAR EDX,0x1f                        ; 004b40ae
    IDIV EBP                            ; 004b40b1
    MOV EBP,dword ptr [ESP + 0x134]     ; 004b40b3
    PUSH EBP                            ; 004b40ba
    PUSH EBX                            ; 004b40bb
    MOV EDI,EAX                         ; 004b40bc
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 004b40be
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    ADD ESP,0x8                         ; 004b40c3
    PUSH EBP                            ; 004b40c6
    PUSH ESI                            ; 004b40c7
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 004b40c8
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    ADD ESP,0x8                         ; 004b40cd
    PUSH EBP                            ; 004b40d0
    PUSH EDI                            ; 004b40d1
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 004b40d2
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    ADD ESP,0x8                         ; 004b40d7
    MOV ECX,dword ptr [ESP + 0x138]     ; 004b40da
    INC ECX                             ; 004b40e1
    MOV EBX,dword ptr [0x005fe9ec]      ; 004b40e2 | DAT_005fe9ec
    MOV dword ptr [ESP + 0x138],ECX     ; 004b40e8
    CMP ECX,EBX                         ; 004b40ef
    JL 0x004b3f66                       ; 004b40f1
        ;   XREF to: 004b3f66 (CONDITIONAL_JUMP)  ; LAB_004b3f66
    MOV EAX,dword ptr [ESP + 0x130]     ; 004b40f7
        ;   Label: LAB_004b40f7
    INC EAX                             ; 004b40fe
    MOV EDX,dword ptr [0x005fe9f0]      ; 004b40ff | DAT_005fe9f0
    MOV dword ptr [ESP + 0x130],EAX     ; 004b4105
    CMP EAX,EDX                         ; 004b410c
    JL 0x004b3f40                       ; 004b410e
        ;   XREF to: 004b3f40 (CONDITIONAL_JUMP)  ; LAB_004b3f40
    MOV ECX,dword ptr [ESP + 0x134]     ; 004b4114
        ;   Label: LAB_004b4114
    PUSH ECX                            ; 004b411b
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004b411c
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004b4121
    PUSH 0x0                            ; 004b4124
    PUSH 0x0                            ; 004b4126
    LEA EAX,[ESP + 0x8]                 ; 004b4128
    PUSH EAX                            ; 004b412c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b412d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EBX,dword ptr [0x01d22c4c]      ; 004b4132 | DAT_01d22c4c
    INC EBX                             ; 004b4138
    ADD ESP,0xc                         ; 004b4139
    MOV dword ptr [0x01d22c4c],EBX      ; 004b413c | DAT_01d22c4c
    ADD ESP,0x150                       ; 004b4142
    POP EBP                             ; 004b4148
    POP EDI                             ; 004b4149
    POP ESI                             ; 004b414a
    POP EBX                             ; 004b414b
    RET                                 ; 004b414c
    MOV ESI,0x1                         ; 004b414d
        ;   Label: LAB_004b414d
    MOV dword ptr [0x01d22c4c],ECX      ; 004b4152 | DAT_01d22c4c
    MOV dword ptr [0x01d22c44],ESI      ; 004b4158 | DAT_01d22c44
    JMP 0x004b3eab                      ; 004b415e
        ;   XREF to: 004b3eab (UNCONDITIONAL_JUMP)  ; LAB_004b3eab
    XOR EBP,EBP                         ; 004b4163
        ;   Label: LAB_004b4163
    MOV dword ptr [0x01d22c44],EBP      ; 004b4165 | DAT_01d22c44
    ADD ESP,0x150                       ; 004b416b
    POP EBP                             ; 004b4171
    POP EDI                             ; 004b4172
    POP ESI                             ; 004b4173
    POP EBX                             ; 004b4174
    RET                                 ; 004b4175

