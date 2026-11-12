; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047fd00(undefined4 param_1,float param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_cloth.cpp_FUN_005b0ce0 at 005b0edd
;   core_skeleton.cpp_FUN_005424b0 at 0054267c
;   shape_edittool.cpp_FUN_0047ff4e at 0047ffe0
;
; Referenced Globals:
;   undefined4 DAT_005d24df
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c263d4
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_FUN_004a8df0
;   engine_matrix.c_transformToCache_FUN_004e8e60
;   engine_mini3d.cpp_FUN_004f3570
;   engine_mini3d.cpp_FUN_004f8e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fd00
        ;   Label: shape_edittool.cpp_FUN_0047fd00
    PUSH ESI                            ; 0047fd01
    PUSH EDI                            ; 0047fd02
    PUSH EBP                            ; 0047fd03
    SUB ESP,0x24                        ; 0047fd04
    MOV ESI,dword ptr [ESP + 0x40]      ; 0047fd07
    CMP dword ptr [0x01c25590],0x0      ; 0047fd0b | DAT_01c25590
    JZ 0x0047feb3                       ; 0047fd12
        ;   XREF to: 0047feb3 (CONDITIONAL_JUMP)  ; LAB_0047feb3
    MOV EAX,[0x01c25590]                ; 0047fd18 | DAT_01c25590
        ;   Label: LAB_0047fd18
    PUSH 0x6a                           ; 0047fd1d
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 0047fd1f
    PUSH EAX                            ; 0047fd25
    MOV dword ptr [0x01c25f78],EBX      ; 0047fd26 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047fd2c
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047fd31
    FLD float ptr [ESP + 0x3c]          ; 0047fd34
    FMUL double ptr [0x005d24df]        ; 0047fd38 | DAT_005d24df
    MOV EDI,dword ptr [0x01c25f84]      ; 0047fd3e | DAT_01c25f84
    MOV [0x01c25f7c],EAX                ; 0047fd44 | DAT_01c25f7c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047fd49
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x20]        ; 0047fd4e
    TEST EDI,EDI                        ; 0047fd52
    JZ 0x0047fedb                       ; 0047fd54
        ;   XREF to: 0047fedb (CONDITIONAL_JUMP)  ; LAB_0047fedb
    MOV EBX,ESI                         ; 0047fd5a
    AND EBX,0xff                        ; 0047fd5c
    LEA EAX,[EBX*0x4 + 0x0]             ; 0047fd62
    SUB EAX,EBX                         ; 0047fd69
    XOR EBX,EBX                         ; 0047fd6b
    MOV BL,byte ptr [EAX + 0x1c35839]   ; 0047fd6d
    MOV ESI,EBX                         ; 0047fd73
    XOR EBX,EBX                         ; 0047fd75
    MOV BL,byte ptr [EAX + 0x1c35838]   ; 0047fd77
    SHL ESI,0x8                         ; 0047fd7d
    SHL EBX,0x10                        ; 0047fd80
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047fd83
    OR EBX,ESI                          ; 0047fd89
    AND EAX,0xff                        ; 0047fd8b
    OR EBX,EAX                          ; 0047fd90
    PUSH EBX                            ; 0047fd92
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047fd93
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047fd98
    LEA EAX,[ESP + 0x14]                ; 0047fd9b
        ;   Label: LAB_0047fd9b
    XOR EBP,EBP                         ; 0047fd9f
    PUSH EAX                            ; 0047fda1
    MOV dword ptr [ESP + 0x18],EBP      ; 0047fda2
    PUSH EBP                            ; 0047fda6
    MOV dword ptr [ESP + 0x20],EBP      ; 0047fda7
    MOV dword ptr [ESP + 0x24],EBP      ; 0047fdab
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 0047fdaf
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0047fdb4
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047fdb7
    MOV dword ptr [ESP + 0x14],EAX      ; 0047fdbb
    LEA EAX,[ESP + 0x14]                ; 0047fdbf
    PUSH EAX                            ; 0047fdc3
    PUSH 0x1                            ; 0047fdc4
    MOV dword ptr [ESP + 0x20],EBP      ; 0047fdc6
    MOV dword ptr [ESP + 0x24],EBP      ; 0047fdca
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 0047fdce
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0047fdd3
    MOV ESI,0x622044                    ; 0047fdd6
    SUB ESP,0x30                        ; 0047fddb
    MOV ECX,0xc                         ; 0047fdde
    MOV EDI,ESP                         ; 0047fde3
    MOVSD.REP ES:EDI,ESI                ; 0047fde5
    SUB ESP,0x30                        ; 0047fde7
    MOV ECX,0xc                         ; 0047fdea
    MOV ESI,0x622014                    ; 0047fdef
    MOV EDI,ESP                         ; 0047fdf4
    MOVSD.REP ES:EDI,ESI                ; 0047fdf6
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 0047fdf8
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407cc0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0047fdfd
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047fe00
    MOV dword ptr [ESP + 0x18],EAX      ; 0047fe04
    LEA EAX,[ESP + 0x14]                ; 0047fe08
    PUSH EAX                            ; 0047fe0c
    PUSH 0x2                            ; 0047fe0d
    MOV dword ptr [ESP + 0x1c],EBP      ; 0047fe0f
    MOV dword ptr [ESP + 0x24],EBP      ; 0047fe13
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 0047fe17
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0047fe1c
    MOV ESI,0x622074                    ; 0047fe1f
    SUB ESP,0x30                        ; 0047fe24
    MOV ECX,0xc                         ; 0047fe27
    MOV EDI,ESP                         ; 0047fe2c
    MOVSD.REP ES:EDI,ESI                ; 0047fe2e
    SUB ESP,0x30                        ; 0047fe30
    MOV ECX,0xc                         ; 0047fe33
    MOV ESI,0x622014                    ; 0047fe38
    MOV EDI,ESP                         ; 0047fe3d
    MOVSD.REP ES:EDI,ESI                ; 0047fe3f
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 0047fe41
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407cc0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0047fe46
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047fe49
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047fe4d
    LEA EAX,[ESP + 0x14]                ; 0047fe51
    PUSH EAX                            ; 0047fe55
    PUSH 0x3                            ; 0047fe56
    MOV dword ptr [ESP + 0x1c],EBP      ; 0047fe58
    MOV dword ptr [ESP + 0x20],EBP      ; 0047fe5c
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 0047fe60
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0047fe65
    MOV ESI,0x6220a4                    ; 0047fe68
    SUB ESP,0x30                        ; 0047fe6d
    MOV ECX,0xc                         ; 0047fe70
    MOV EDI,ESP                         ; 0047fe75
    MOV EBX,0x622014                    ; 0047fe77
    MOVSD.REP ES:EDI,ESI                ; 0047fe7c
    SUB ESP,0x30                        ; 0047fe7e
    MOV ECX,0xc                         ; 0047fe81
    MOV ESI,0x622014                    ; 0047fe86
    MOV EDI,ESP                         ; 0047fe8b
    ADD EBX,0x30                        ; 0047fe8d
    MOVSD.REP ES:EDI,ESI                ; 0047fe90
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 0047fe92
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407cc0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0047fe97
    XOR ESI,ESI                         ; 0047fe9a
    TEST byte ptr [EBX + 0x13],0x80     ; 0047fe9c
        ;   Label: LAB_0047fe9c
    JZ 0x0047fee6                       ; 0047fea0
        ;   XREF to: 0047fee6 (CONDITIONAL_JUMP)  ; LAB_0047fee6
    INC ESI                             ; 0047fea2
        ;   Label: LAB_0047fea2
    ADD EBX,0x30                        ; 0047fea3
    CMP ESI,0x3                         ; 0047fea6
    JL 0x0047fe9c                       ; 0047fea9
        ;   XREF to: 0047fe9c (CONDITIONAL_JUMP)  ; LAB_0047fe9c
    ADD ESP,0x24                        ; 0047feab
    POP EBP                             ; 0047feae
    POP EDI                             ; 0047feaf
    POP ESI                             ; 0047feb0
    POP EBX                             ; 0047feb1
    RET                                 ; 0047feb2
    MOV ECX,0x5d1e6f                    ; 0047feb3
        ;   Label: LAB_0047feb3
    MOV EBX,0xa0                        ; 0047feb8
    PUSH 0x5d1e85                       ; 0047febd
    MOV dword ptr [0x01d046a0],ECX      ; 0047fec2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047fec8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047fece
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047fed3
    JMP 0x0047fd18                      ; 0047fed6
        ;   XREF to: 0047fd18 (UNCONDITIONAL_JUMP)  ; LAB_0047fd18
    MOV dword ptr [0x01c35e60],ESI      ; 0047fedb | DAT_01c35e60
        ;   Label: LAB_0047fedb
    JMP 0x0047fd9b                      ; 0047fee1
        ;   XREF to: 0047fd9b (UNCONDITIONAL_JUMP)  ; LAB_0047fd9b
    XOR EAX,EAX                         ; 0047fee6
        ;   Label: LAB_0047fee6
    MOV AL,byte ptr [ESI + 0x5d24d1]    ; 0047fee8
    PUSH EAX                            ; 0047feee
    PUSH 0x5d24d5                       ; 0047feef
    LEA EAX,[ESP + 0x8]                 ; 0047fef4
    PUSH EAX                            ; 0047fef8
    MOV EDI,dword ptr [EBX + 0x10]      ; 0047fef9
    MOV EBP,dword ptr [EBX + 0x14]      ; 0047fefc
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0047feff
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047ff04
    PUSH 0xffff                         ; 0047ff07
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047ff0c
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047ff11
    PUSH 0x3f800000                     ; 0047ff14
    CALL engine_mini3d.cpp_FUN_004f3570 ; 0047ff19
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3570()
    ADD ESP,0x4                         ; 0047ff1e
    PUSH -0x1                           ; 0047ff21
    MOV EDX,dword ptr [0x01c263d4]      ; 0047ff23 | DAT_01c263d4
    PUSH EDX                            ; 0047ff29
    SAR EBP,0x10                        ; 0047ff2a
    PUSH EBP                            ; 0047ff2d
    SAR EDI,0x10                        ; 0047ff2e
    PUSH EDI                            ; 0047ff31
    LEA EAX,[ESP + 0x10]                ; 0047ff32
    PUSH EAX                            ; 0047ff36
    MOV ECX,dword ptr [0x01c25590]      ; 0047ff37 | DAT_01c25590
    PUSH ECX                            ; 0047ff3d
    CALL engine_font.cpp_FUN_004a8df0   ; 0047ff3e
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 0047ff43
    JMP 0x0047fea2                      ; 0047ff46
        ;   XREF to: 0047fea2 (UNCONDITIONAL_JUMP)  ; LAB_0047fea2

