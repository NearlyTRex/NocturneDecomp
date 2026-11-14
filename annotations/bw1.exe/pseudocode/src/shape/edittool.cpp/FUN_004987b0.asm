; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004987b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc288
;   undefined4 DAT_005dc28c
;   undefined4 DAT_005ff7ec
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0
;   engine_matrix.c_transformToCache_FUN_00507b00
;   engine_mini3d.cpp_setColor_FUN_00517d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004987b0
        ;   Label: shape_edittool.cpp_FUN_004987b0
    PUSH ESI                            ; 004987b1
    PUSH EDI                            ; 004987b2
    PUSH EBP                            ; 004987b3
    SUB ESP,0x16c                       ; 004987b4
    MOV EBX,dword ptr [ESP + 0x184]     ; 004987ba
    MOV ESI,dword ptr [ESP + 0x188]     ; 004987c1
    MOV EBP,dword ptr [ESP + 0x18c]     ; 004987c8
    PUSH 0x5fb430                       ; 004987cf
    PUSH 0x8                            ; 004987d4
    LEA EAX,[ESP + 0x8]                 ; 004987d6
    PUSH EAX                            ; 004987da
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004987db
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004987e0
    XOR EAX,EAX                         ; 004987e3
    MOV EDX,dword ptr [ESI]             ; 004987e5
        ;   Label: LAB_004987e5
    MOV dword ptr [ESP + 0x160],EDX     ; 004987e7
    IMUL EDX,EAX,0xc                    ; 004987ee
    MOV EDI,dword ptr [ESP + 0x160]     ; 004987f1
        ;   Label: LAB_004987f1
    MOV dword ptr [ESP + EDX*0x1],EDI   ; 004987f8
    TEST AL,0x2                         ; 004987fb
    JNZ 0x00498845                      ; 004987fd
        ;   XREF to: 00498845 (CONDITIONAL_JUMP)  ; LAB_00498845
    MOV EDI,dword ptr [ESI + 0x4]       ; 004987ff
    MOV dword ptr [ESP + 0x164],EDI     ; 00498802
        ;   Label: LAB_00498802
    MOV EDI,dword ptr [ESP + 0x164]     ; 00498809
    MOV dword ptr [ESP + EDX*0x1 + 0x4],EDI ; 00498810
    TEST AL,0x4                         ; 00498814
    JZ 0x0049884a                       ; 00498816
        ;   XREF to: 0049884a (CONDITIONAL_JUMP)  ; LAB_0049884a
    MOV EDI,dword ptr [EBX + 0x8]       ; 00498818
    MOV dword ptr [ESP + 0x168],EDI     ; 0049881b
        ;   Label: LAB_0049881b
    ADD EDX,0xc                         ; 00498822
    MOV EDI,dword ptr [ESP + 0x168]     ; 00498825
    INC EAX                             ; 0049882c
    MOV dword ptr [ESP + EDX*0x1 + -0x4],EDI ; 0049882d
    CMP EAX,0x8                         ; 00498831
    JGE 0x0049884f                      ; 00498834
        ;   XREF to: 0049884f (CONDITIONAL_JUMP)  ; LAB_0049884f
    TEST AL,0x1                         ; 00498836
    JZ 0x004987e5                       ; 00498838
        ;   XREF to: 004987e5 (CONDITIONAL_JUMP)  ; LAB_004987e5
    MOV EDI,dword ptr [EBX]             ; 0049883a
    MOV dword ptr [ESP + 0x160],EDI     ; 0049883c
    JMP 0x004987f1                      ; 00498843
        ;   XREF to: 004987f1 (UNCONDITIONAL_JUMP)  ; LAB_004987f1
    MOV EDI,dword ptr [EBX + 0x4]       ; 00498845
        ;   Label: LAB_00498845
    JMP 0x00498802                      ; 00498848
        ;   XREF to: 00498802 (UNCONDITIONAL_JUMP)  ; LAB_00498802
    MOV EDI,dword ptr [ESI + 0x8]       ; 0049884a
        ;   Label: LAB_0049884a
    JMP 0x0049881b                      ; 0049884d
        ;   XREF to: 0049881b (UNCONDITIONAL_JUMP)  ; LAB_0049881b
    CMP dword ptr [0x01c3f544],0x0      ; 0049884f | DAT_01c3f544
        ;   Label: LAB_0049884f
    JZ 0x00498d6c                       ; 00498856
        ;   XREF to: 00498d6c (CONDITIONAL_JUMP)  ; LAB_00498d6c
    MOV EDX,EBP                         ; 0049885c
    AND EDX,0xff                        ; 0049885e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00498864
    SUB EAX,EDX                         ; 0049886b
    XOR EBX,EBX                         ; 0049886d
    XOR EDX,EDX                         ; 0049886f
    MOV BL,byte ptr [EAX + 0x1c4e9f9]   ; 00498871
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00498877
    SHL EBX,0x8                         ; 0049887d
    SHL EDX,0x10                        ; 00498880
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00498883
    OR EDX,EBX                          ; 00498889
    AND EAX,0xff                        ; 0049888b
    OR EAX,EDX                          ; 00498890
    PUSH EAX                            ; 00498892
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 00498893
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 00498898
    XOR ECX,ECX                         ; 0049889b
        ;   Label: LAB_0049889b
    MOV EBP,ESP                         ; 0049889d
    MOV dword ptr [ESP + 0x15c],ECX     ; 0049889f
    MOV ESI,dword ptr [ESP + 0x15c]     ; 004988a6
        ;   Label: LAB_004988a6
    XOR SI,0x1                          ; 004988ad
    IMUL ESI,ESI,0xc                    ; 004988b1
    MOV EAX,ESP                         ; 004988b4
    LEA EBX,[ESP + 0xe4]                ; 004988b6
    ADD ESI,EAX                         ; 004988bd
    MOV EAX,EBP                         ; 004988bf
    FLD float ptr [EAX]                 ; 004988c1
    FMUL float ptr [0x005ff7ec]         ; 004988c3 | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 004988c9
    FLD float ptr [EAX + 0x4]           ; 004988cb
    FMUL float ptr [0x005ff7ec]         ; 004988ce | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 004988d4
    FLD float ptr [EAX + 0x8]           ; 004988d7
    FMUL float ptr [0x005ff7ec]         ; 004988da | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 004988e0
    LEA EAX,[ESP + 0xe4]                ; 004988e3
    PUSH EAX                            ; 004988ea
    PUSH 0x0                            ; 004988eb
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 004988ed
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 004988f2
    FMUL float ptr [0x005dc288]         ; 004988f4 | DAT_005dc288
    FLD float ptr [ESI + 0x4]           ; 004988fa
    FMUL float ptr [0x005dc288]         ; 004988fd | DAT_005dc288
    FLD float ptr [ESI + 0x8]           ; 00498903
    FMUL float ptr [0x005dc288]         ; 00498906 | DAT_005dc288
    LEA EDI,[ESP + 0x11c]               ; 0049890c
    ADD ESP,0x8                         ; 00498913
    LEA ESI,[ESP + 0xfc]                ; 00498916
    FXCH ST2                            ; 0049891d
    FSTP float ptr [ESP + 0xfc]         ; 0049891f
    FSTP float ptr [ESP + 0x100]        ; 00498926
    FSTP float ptr [ESP + 0x104]        ; 0049892d
    MOVSD ES:EDI,ESI                    ; 00498934
    MOVSD ES:EDI,ESI                    ; 00498935
    MOVSD ES:EDI,ESI                    ; 00498936
    FLD float ptr [EBP]                 ; 00498937
    FMUL float ptr [0x005dc28c]         ; 0049893a | DAT_005dc28c
    FLD float ptr [EBP + 0x4]           ; 00498940
    FMUL float ptr [0x005dc28c]         ; 00498943 | DAT_005dc28c
    FLD float ptr [EBP + 0x8]           ; 00498949
    FMUL float ptr [0x005dc28c]         ; 0049894c | DAT_005dc28c
    LEA EBX,[ESP + 0xe4]                ; 00498952
    LEA EDI,[ESP + 0x90]                ; 00498959
    LEA ESI,[ESP + 0x60]                ; 00498960
    FXCH ST2                            ; 00498964
    FSTP float ptr [ESP + 0x60]         ; 00498966
    FSTP float ptr [ESP + 0x64]         ; 0049896a
    FSTP float ptr [ESP + 0x68]         ; 0049896e
    MOVSD ES:EDI,ESI                    ; 00498972
    MOVSD ES:EDI,ESI                    ; 00498973
    MOVSD ES:EDI,ESI                    ; 00498974
    LEA EAX,[ESP + 0xf0]                ; 00498975
    FLD float ptr [ESP + 0x90]          ; 0049897c
    FLD float ptr [ESP + 0x94]          ; 00498983
    FLD float ptr [ESP + 0x98]          ; 0049898a
    LEA EDI,[ESP + 0xf0]                ; 00498991
    LEA ESI,[ESP + 0x108]               ; 00498998
    FXCH ST2                            ; 0049899f
    FADD float ptr [ESP + 0x114]        ; 004989a1
    FXCH                                ; 004989a8
    FADD float ptr [ESP + 0x118]        ; 004989aa
    FXCH ST2                            ; 004989b1
    FADD float ptr [ESP + 0x11c]        ; 004989b3
    FXCH                                ; 004989ba
    FSTP float ptr [ESP + 0x108]        ; 004989bc
    FXCH                                ; 004989c3
    FSTP float ptr [ESP + 0x10c]        ; 004989c5
    FSTP float ptr [ESP + 0x110]        ; 004989cc
    MOVSD ES:EDI,ESI                    ; 004989d3
    MOVSD ES:EDI,ESI                    ; 004989d4
    MOVSD ES:EDI,ESI                    ; 004989d5
    FLD float ptr [EAX]                 ; 004989d6
    FMUL float ptr [0x005ff7ec]         ; 004989d8 | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 004989de
    FLD float ptr [EAX + 0x4]           ; 004989e0
    FMUL float ptr [0x005ff7ec]         ; 004989e3 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 004989e9
    FLD float ptr [EAX + 0x8]           ; 004989ec
    FMUL float ptr [0x005ff7ec]         ; 004989ef | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 004989f5
    LEA EAX,[ESP + 0xe4]                ; 004989f8
    PUSH EAX                            ; 004989ff
    PUSH 0x1                            ; 00498a00
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 00498a02
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00498a07
    MOV ESI,0x629044                    ; 00498a0a
    SUB ESP,0x30                        ; 00498a0f
    MOV ECX,0xc                         ; 00498a12
    MOV EDI,ESP                         ; 00498a17
    MOVSD.REP ES:EDI,ESI                ; 00498a19
    SUB ESP,0x30                        ; 00498a1b
    MOV ECX,0xc                         ; 00498a1e
    MOV ESI,0x629014                    ; 00498a23
    MOV EDI,ESP                         ; 00498a28
    MOVSD.REP ES:EDI,ESI                ; 00498a2a
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 00498a2c
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407af0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00498a31
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00498a34
    XOR AL,0x2                          ; 00498a3b
    IMUL EAX,EAX,0xc                    ; 00498a3d
    MOV ESI,ESP                         ; 00498a40
    LEA EBX,[ESP + 0x144]               ; 00498a42
    ADD ESI,EAX                         ; 00498a49
    MOV EAX,EBP                         ; 00498a4b
    FLD float ptr [EAX]                 ; 00498a4d
    FMUL float ptr [0x005ff7ec]         ; 00498a4f | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 00498a55
    FLD float ptr [EAX + 0x4]           ; 00498a57
    FMUL float ptr [0x005ff7ec]         ; 00498a5a | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 00498a60
    FLD float ptr [EAX + 0x8]           ; 00498a63
    FMUL float ptr [0x005ff7ec]         ; 00498a66 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 00498a6c
    LEA EAX,[ESP + 0x144]               ; 00498a6f
    PUSH EAX                            ; 00498a76
    PUSH 0x0                            ; 00498a77
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 00498a79
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 00498a7e
    FMUL float ptr [0x005dc288]         ; 00498a80 | DAT_005dc288
    FLD float ptr [ESI + 0x4]           ; 00498a86
    FMUL float ptr [0x005dc288]         ; 00498a89 | DAT_005dc288
    FLD float ptr [ESI + 0x8]           ; 00498a8f
    FMUL float ptr [0x005dc288]         ; 00498a92 | DAT_005dc288
    LEA EDI,[ESP + 0x80]                ; 00498a98
    ADD ESP,0x8                         ; 00498a9f
    LEA ESI,[ESP + 0xcc]                ; 00498aa2
    FXCH ST2                            ; 00498aa9
    FSTP float ptr [ESP + 0xcc]         ; 00498aab
    FSTP float ptr [ESP + 0xd0]         ; 00498ab2
    FSTP float ptr [ESP + 0xd4]         ; 00498ab9
    MOVSD ES:EDI,ESI                    ; 00498ac0
    MOVSD ES:EDI,ESI                    ; 00498ac1
    MOVSD ES:EDI,ESI                    ; 00498ac2
    FLD float ptr [EBP]                 ; 00498ac3
    FMUL float ptr [0x005dc28c]         ; 00498ac6 | DAT_005dc28c
    FLD float ptr [EBP + 0x4]           ; 00498acc
    FMUL float ptr [0x005dc28c]         ; 00498acf | DAT_005dc28c
    FLD float ptr [EBP + 0x8]           ; 00498ad5
    FMUL float ptr [0x005dc28c]         ; 00498ad8 | DAT_005dc28c
    LEA EDI,[ESP + 0x150]               ; 00498ade
    LEA ESI,[ESP + 0x138]               ; 00498ae5
    FXCH ST2                            ; 00498aec
    FSTP float ptr [ESP + 0x138]        ; 00498aee
    FSTP float ptr [ESP + 0x13c]        ; 00498af5
    FSTP float ptr [ESP + 0x140]        ; 00498afc
    MOVSD ES:EDI,ESI                    ; 00498b03
    MOVSD ES:EDI,ESI                    ; 00498b04
    MOVSD ES:EDI,ESI                    ; 00498b05
    FLD float ptr [ESP + 0x150]         ; 00498b06
    FLD float ptr [ESP + 0x154]         ; 00498b0d
    FLD float ptr [ESP + 0x158]         ; 00498b14
    LEA EDI,[ESP + 0xb4]                ; 00498b1b
    LEA ESI,[ESP + 0x12c]               ; 00498b22
    FXCH ST2                            ; 00498b29
    FADD float ptr [ESP + 0x78]         ; 00498b2b
    FXCH                                ; 00498b2f
    FADD float ptr [ESP + 0x7c]         ; 00498b31
    FXCH ST2                            ; 00498b35
    FADD float ptr [ESP + 0x80]         ; 00498b37
    FXCH                                ; 00498b3e
    FSTP float ptr [ESP + 0x12c]        ; 00498b40
    FXCH                                ; 00498b47
    FSTP float ptr [ESP + 0x130]        ; 00498b49
    FSTP float ptr [ESP + 0x134]        ; 00498b50
    MOVSD ES:EDI,ESI                    ; 00498b57
    MOVSD ES:EDI,ESI                    ; 00498b58
    MOVSD ES:EDI,ESI                    ; 00498b59
    LEA EBX,[ESP + 0x144]               ; 00498b5a
    LEA EAX,[ESP + 0xb4]                ; 00498b61
    FLD float ptr [EAX]                 ; 00498b68
    FMUL float ptr [0x005ff7ec]         ; 00498b6a | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 00498b70
    FLD float ptr [EAX + 0x4]           ; 00498b72
    FMUL float ptr [0x005ff7ec]         ; 00498b75 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 00498b7b
    FLD float ptr [EAX + 0x8]           ; 00498b7e
    FMUL float ptr [0x005ff7ec]         ; 00498b81 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 00498b87
    LEA EAX,[ESP + 0x144]               ; 00498b8a
    PUSH EAX                            ; 00498b91
    PUSH 0x1                            ; 00498b92
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 00498b94
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00498b99
    MOV ESI,0x629044                    ; 00498b9c
    SUB ESP,0x30                        ; 00498ba1
    MOV ECX,0xc                         ; 00498ba4
    MOV EDI,ESP                         ; 00498ba9
    MOVSD.REP ES:EDI,ESI                ; 00498bab
    SUB ESP,0x30                        ; 00498bad
    MOV ECX,0xc                         ; 00498bb0
    MOV ESI,0x629014                    ; 00498bb5
    MOV EDI,ESP                         ; 00498bba
    MOVSD.REP ES:EDI,ESI                ; 00498bbc
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 00498bbe
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407af0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00498bc3
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00498bc6
    XOR AL,0x4                          ; 00498bcd
    IMUL EAX,EAX,0xc                    ; 00498bcf
    MOV ESI,ESP                         ; 00498bd2
    LEA EBX,[ESP + 0x6c]                ; 00498bd4
    ADD ESI,EAX                         ; 00498bd8
    MOV EAX,EBP                         ; 00498bda
    FLD float ptr [EAX]                 ; 00498bdc
    FMUL float ptr [0x005ff7ec]         ; 00498bde | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 00498be4
    FLD float ptr [EAX + 0x4]           ; 00498be6
    FMUL float ptr [0x005ff7ec]         ; 00498be9 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 00498bef
    FLD float ptr [EAX + 0x8]           ; 00498bf2
    FMUL float ptr [0x005ff7ec]         ; 00498bf5 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 00498bfb
    LEA EAX,[ESP + 0x6c]                ; 00498bfe
    PUSH EAX                            ; 00498c02
    PUSH 0x0                            ; 00498c03
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 00498c05
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x005dc288]          ; 00498c0a | DAT_005dc288
    FLD float ptr [ESI]                 ; 00498c10
    FMUL ST1                            ; 00498c12
    FLD float ptr [ESI + 0x4]           ; 00498c14
    FMUL ST2                            ; 00498c17
    FLD float ptr [ESI + 0x8]           ; 00498c19
    FMULP ST3                           ; 00498c1c
    LEA EDI,[ESP + 0xa4]                ; 00498c1e
    ADD ESP,0x8                         ; 00498c25
    LEA ESI,[ESP + 0xa8]                ; 00498c28
    FXCH                                ; 00498c2f
    FSTP float ptr [ESP + 0xa8]         ; 00498c31
    FSTP float ptr [ESP + 0xac]         ; 00498c38
    FSTP float ptr [ESP + 0xb0]         ; 00498c3f
    MOVSD ES:EDI,ESI                    ; 00498c46
    MOVSD ES:EDI,ESI                    ; 00498c47
    MOVSD ES:EDI,ESI                    ; 00498c48
    FLD float ptr [0x005dc28c]          ; 00498c49 | DAT_005dc28c
    FLD float ptr [EBP]                 ; 00498c4f
    FMUL ST1                            ; 00498c52
    FLD float ptr [EBP + 0x4]           ; 00498c54
    FMUL ST2                            ; 00498c57
    FLD float ptr [EBP + 0x8]           ; 00498c59
    FMULP ST3                           ; 00498c5c
    LEA EBX,[ESP + 0x6c]                ; 00498c5e
    LEA EDI,[ESP + 0x120]               ; 00498c62
    LEA ESI,[ESP + 0xd8]                ; 00498c69
    FXCH                                ; 00498c70
    FSTP float ptr [ESP + 0xd8]         ; 00498c72
    FSTP float ptr [ESP + 0xdc]         ; 00498c79
    FSTP float ptr [ESP + 0xe0]         ; 00498c80
    MOVSD ES:EDI,ESI                    ; 00498c87
    MOVSD ES:EDI,ESI                    ; 00498c88
    MOVSD ES:EDI,ESI                    ; 00498c89
    LEA EAX,[ESP + 0x84]                ; 00498c8a
    FLD float ptr [ESP + 0x120]         ; 00498c91
    FLD float ptr [ESP + 0x124]         ; 00498c98
    FLD float ptr [ESP + 0x128]         ; 00498c9f
    LEA EDI,[ESP + 0x84]                ; 00498ca6
    LEA ESI,[ESP + 0xc0]                ; 00498cad
    FXCH ST2                            ; 00498cb4
    FADD float ptr [ESP + 0x9c]         ; 00498cb6
    FXCH                                ; 00498cbd
    FADD float ptr [ESP + 0xa0]         ; 00498cbf
    FXCH ST2                            ; 00498cc6
    FADD float ptr [ESP + 0xa4]         ; 00498cc8
    FXCH                                ; 00498ccf
    FSTP float ptr [ESP + 0xc0]         ; 00498cd1
    FXCH                                ; 00498cd8
    FSTP float ptr [ESP + 0xc4]         ; 00498cda
    FSTP float ptr [ESP + 0xc8]         ; 00498ce1
    MOVSD ES:EDI,ESI                    ; 00498ce8
    MOVSD ES:EDI,ESI                    ; 00498ce9
    MOVSD ES:EDI,ESI                    ; 00498cea
    FLD float ptr [EAX]                 ; 00498ceb
    FMUL float ptr [0x005ff7ec]         ; 00498ced | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 00498cf3
    FLD float ptr [EAX + 0x4]           ; 00498cf5
    FMUL float ptr [0x005ff7ec]         ; 00498cf8 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 00498cfe
    FLD float ptr [EAX + 0x8]           ; 00498d01
    FMUL float ptr [0x005ff7ec]         ; 00498d04 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 00498d0a
    LEA EAX,[ESP + 0x6c]                ; 00498d0d
    PUSH EAX                            ; 00498d11
    PUSH 0x1                            ; 00498d12
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 00498d14
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00498d19
    MOV ESI,0x629044                    ; 00498d1c
    SUB ESP,0x30                        ; 00498d21
    MOV ECX,0xc                         ; 00498d24
    MOV EDI,ESP                         ; 00498d29
    MOVSD.REP ES:EDI,ESI                ; 00498d2b
    SUB ESP,0x30                        ; 00498d2d
    MOV ECX,0xc                         ; 00498d30
    MOV ESI,0x629014                    ; 00498d35
    MOV EDI,ESP                         ; 00498d3a
    MOVSD.REP ES:EDI,ESI                ; 00498d3c
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 00498d3e
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407af0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00498d43
    MOV EBX,dword ptr [ESP + 0x15c]     ; 00498d46
    INC EBX                             ; 00498d4d
    ADD EBP,0xc                         ; 00498d4e
    MOV dword ptr [ESP + 0x15c],EBX     ; 00498d51
    CMP EBX,0x8                         ; 00498d58
    JL 0x004988a6                       ; 00498d5b
        ;   XREF to: 004988a6 (CONDITIONAL_JUMP)  ; LAB_004988a6
    ADD ESP,0x16c                       ; 00498d61
    POP EBP                             ; 00498d67
    POP EDI                             ; 00498d68
    POP ESI                             ; 00498d69
    POP EBX                             ; 00498d6a
    RET                                 ; 00498d6b
    MOV dword ptr [0x01c4f020],EBP      ; 00498d6c | DAT_01c4f020
        ;   Label: LAB_00498d6c
    JMP 0x0049889b                      ; 00498d72
        ;   XREF to: 0049889b (UNCONDITIONAL_JUMP)  ; LAB_0049889b

