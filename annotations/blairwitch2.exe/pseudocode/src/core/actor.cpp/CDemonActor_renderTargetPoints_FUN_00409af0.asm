; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409af0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2160
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_0060b27c
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c34510
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409af0
        ;   Label: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409af0
    PUSH ESI                            ; 00409af1
    PUSH EDI                            ; 00409af2
    PUSH EBP                            ; 00409af3
    SUB ESP,0x8c                        ; 00409af4
    MOV EBX,dword ptr [ESP + 0xa0]      ; 00409afa
    PUSH 0x5f22b0                       ; 00409b01 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00409b06
    LEA EAX,[ESP + 0x8]                 ; 00409b08
    PUSH EAX                            ; 00409b0c
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00409b0d
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00409b12
    MOV EAX,ESP                         ; 00409b15
    PUSH EAX                            ; 00409b17
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00409b18
    PUSH EBX                            ; 00409b1e
    CALL dword ptr [EDX + 0x5c]         ; 00409b1f
    ADD ESP,0x8                         ; 00409b22
    XOR EBP,EBP                         ; 00409b25
    MOV dword ptr [ESP + 0x84],EAX      ; 00409b27
    TEST EAX,EAX                        ; 00409b2e
    JLE 0x00409ba7                      ; 00409b30
        ;   XREF to: 00409ba7 (CONDITIONAL_JUMP)  ; LAB_00409ba7
    MOV EDI,ESP                         ; 00409b32
    XOR EAX,EAX                         ; 00409b34
        ;   Label: LAB_00409b34
    MOV AL,[0x01c34510]                 ; 00409b36 | DAT_01c34510
    LEA EBX,[ESP + 0x78]                ; 00409b3b
    MOV dword ptr [ESP + 0x88],EAX      ; 00409b3f
    MOV EAX,EDI                         ; 00409b46
    MOV EDX,dword ptr [0x0060b27c]      ; 00409b48 | DAT_0060b27c
    FLD float ptr [EAX]                 ; 00409b4e
    FMUL float ptr [0x005f2160]         ; 00409b50 | DAT_005f2160
    FISTP dword ptr [EBX]               ; 00409b56
    FLD float ptr [EAX + 0x4]           ; 00409b58
    FMUL float ptr [0x005f2160]         ; 00409b5b | DAT_005f2160
    FISTP dword ptr [EBX + 0x4]         ; 00409b61
    FLD float ptr [EAX + 0x8]           ; 00409b64
    FMUL float ptr [0x005f2160]         ; 00409b67 | DAT_005f2160
    FISTP dword ptr [EBX + 0x8]         ; 00409b6d
    LEA EAX,[ESP + 0x78]                ; 00409b70
    PUSH EAX                            ; 00409b74
    MOV EAX,dword ptr [EDX]             ; 00409b75 | DAT_01ba5c50
    ADD EAX,0xea5d0                     ; 00409b77
    PUSH EAX                            ; 00409b7c
    CALL engine_special.cpp_FUN_0055d723 ; 00409b7d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x0060b27c]      ; 00409b82 | DAT_0060b27c
    MOV ESI,dword ptr [ESI]             ; 00409b88 | DAT_01ba5c50
    MOV AH,byte ptr [ESI + 0xea5e3]     ; 00409b8a
    ADD ESP,0x8                         ; 00409b90
    TEST AH,0x80                        ; 00409b93
    JZ 0x00409bb2                       ; 00409b96
        ;   XREF to: 00409bb2 (CONDITIONAL_JUMP)  ; LAB_00409bb2
    MOV EDX,dword ptr [ESP + 0x84]      ; 00409b98
        ;   Label: LAB_00409b98
    INC EBP                             ; 00409b9f
    ADD EDI,0xc                         ; 00409ba0
    CMP EBP,EDX                         ; 00409ba3
    JL 0x00409b34                       ; 00409ba5
        ;   XREF to: 00409b34 (CONDITIONAL_JUMP)  ; LAB_00409b34
    ADD ESP,0x8c                        ; 00409ba7
        ;   Label: LAB_00409ba7
    POP EBP                             ; 00409bad
    POP EDI                             ; 00409bae
    POP ESI                             ; 00409baf
    POP EBX                             ; 00409bb0
    RET                                 ; 00409bb1
    MOV EBX,dword ptr [ESI + 0xea5e0]   ; 00409bb2
        ;   Label: LAB_00409bb2
    MOV EAX,dword ptr [ESP + 0x88]      ; 00409bb8
    SAR EBX,0x10                        ; 00409bbf
    MOV ESI,dword ptr [ESI + 0xea5e4]   ; 00409bc2
    MOV [0x01c35e60],EAX                ; 00409bc8 | DAT_01c35e60
    SAR ESI,0x10                        ; 00409bcd
    TEST EBX,EBX                        ; 00409bd0
    JL 0x00409be4                       ; 00409bd2
        ;   XREF to: 00409be4 (CONDITIONAL_JUMP)  ; LAB_00409be4
    TEST ESI,ESI                        ; 00409bd4
    JL 0x00409be4                       ; 00409bd6
        ;   XREF to: 00409be4 (CONDITIONAL_JUMP)  ; LAB_00409be4
    CMP EBX,dword ptr [0x006141b8]      ; 00409bd8 | DAT_006141b8
    JL 0x00409cd7                       ; 00409bde
        ;   XREF to: 00409cd7 (CONDITIONAL_JUMP)  ; LAB_00409cd7
    LEA EAX,[EBX + -0x1]                ; 00409be4
        ;   Label: LAB_00409be4
    LEA EDX,[ESI + -0x1]                ; 00409be7
    TEST EAX,EAX                        ; 00409bea
    JL 0x00409bfe                       ; 00409bec
        ;   XREF to: 00409bfe (CONDITIONAL_JUMP)  ; LAB_00409bfe
    TEST EDX,EDX                        ; 00409bee
    JL 0x00409bfe                       ; 00409bf0
        ;   XREF to: 00409bfe (CONDITIONAL_JUMP)  ; LAB_00409bfe
    CMP EAX,dword ptr [0x006141b8]      ; 00409bf2 | DAT_006141b8
    JL 0x00409cf2                       ; 00409bf8
        ;   XREF to: 00409cf2 (CONDITIONAL_JUMP)  ; LAB_00409cf2
    LEA EAX,[EBX + -0x1]                ; 00409bfe
        ;   Label: LAB_00409bfe
    LEA EDX,[ESI + 0x1]                 ; 00409c01
    TEST EAX,EAX                        ; 00409c04
    JL 0x00409c18                       ; 00409c06
        ;   XREF to: 00409c18 (CONDITIONAL_JUMP)  ; LAB_00409c18
    TEST EDX,EDX                        ; 00409c08
    JL 0x00409c18                       ; 00409c0a
        ;   XREF to: 00409c18 (CONDITIONAL_JUMP)  ; LAB_00409c18
    CMP EAX,dword ptr [0x006141b8]      ; 00409c0c | DAT_006141b8
    JL 0x00409d0d                       ; 00409c12
        ;   XREF to: 00409d0d (CONDITIONAL_JUMP)  ; LAB_00409d0d
    LEA EAX,[EBX + 0x1]                 ; 00409c18
        ;   Label: LAB_00409c18
    LEA EDX,[ESI + -0x1]                ; 00409c1b
    TEST EAX,EAX                        ; 00409c1e
    JL 0x00409c32                       ; 00409c20
        ;   XREF to: 00409c32 (CONDITIONAL_JUMP)  ; LAB_00409c32
    TEST EDX,EDX                        ; 00409c22
    JL 0x00409c32                       ; 00409c24
        ;   XREF to: 00409c32 (CONDITIONAL_JUMP)  ; LAB_00409c32
    CMP EAX,dword ptr [0x006141b8]      ; 00409c26 | DAT_006141b8
    JL 0x00409d28                       ; 00409c2c
        ;   XREF to: 00409d28 (CONDITIONAL_JUMP)  ; LAB_00409d28
    LEA EDX,[EBX + 0x1]                 ; 00409c32
        ;   Label: LAB_00409c32
    LEA EAX,[ESI + 0x1]                 ; 00409c35
    TEST EDX,EDX                        ; 00409c38
    JL 0x00409c4c                       ; 00409c3a
        ;   XREF to: 00409c4c (CONDITIONAL_JUMP)  ; LAB_00409c4c
    TEST EAX,EAX                        ; 00409c3c
    JL 0x00409c4c                       ; 00409c3e
        ;   XREF to: 00409c4c (CONDITIONAL_JUMP)  ; LAB_00409c4c
    CMP EDX,dword ptr [0x006141b8]      ; 00409c40 | DAT_006141b8
    JL 0x00409d43                       ; 00409c46
        ;   XREF to: 00409d43 (CONDITIONAL_JUMP)  ; LAB_00409d43
    LEA EAX,[EBX + -0x2]                ; 00409c4c
        ;   Label: LAB_00409c4c
    LEA EDX,[ESI + -0x2]                ; 00409c4f
    TEST EAX,EAX                        ; 00409c52
    JL 0x00409c66                       ; 00409c54
        ;   XREF to: 00409c66 (CONDITIONAL_JUMP)  ; LAB_00409c66
    TEST EDX,EDX                        ; 00409c56
    JL 0x00409c66                       ; 00409c58
        ;   XREF to: 00409c66 (CONDITIONAL_JUMP)  ; LAB_00409c66
    CMP EAX,dword ptr [0x006141b8]      ; 00409c5a | DAT_006141b8
    JL 0x00409d5e                       ; 00409c60
        ;   XREF to: 00409d5e (CONDITIONAL_JUMP)  ; LAB_00409d5e
    LEA EAX,[EBX + -0x2]                ; 00409c66
        ;   Label: LAB_00409c66
    LEA EDX,[ESI + 0x2]                 ; 00409c69
    TEST EAX,EAX                        ; 00409c6c
    JL 0x00409c80                       ; 00409c6e
        ;   XREF to: 00409c80 (CONDITIONAL_JUMP)  ; LAB_00409c80
    TEST EDX,EDX                        ; 00409c70
    JL 0x00409c80                       ; 00409c72
        ;   XREF to: 00409c80 (CONDITIONAL_JUMP)  ; LAB_00409c80
    CMP EAX,dword ptr [0x006141b8]      ; 00409c74 | DAT_006141b8
    JL 0x00409d79                       ; 00409c7a
        ;   XREF to: 00409d79 (CONDITIONAL_JUMP)  ; LAB_00409d79
    LEA EAX,[EBX + 0x2]                 ; 00409c80
        ;   Label: LAB_00409c80
    LEA EDX,[ESI + -0x2]                ; 00409c83
    TEST EAX,EAX                        ; 00409c86
    JL 0x00409c9a                       ; 00409c88
        ;   XREF to: 00409c9a (CONDITIONAL_JUMP)  ; LAB_00409c9a
    TEST EDX,EDX                        ; 00409c8a
    JL 0x00409c9a                       ; 00409c8c
        ;   XREF to: 00409c9a (CONDITIONAL_JUMP)  ; LAB_00409c9a
    CMP EAX,dword ptr [0x006141b8]      ; 00409c8e | DAT_006141b8
    JL 0x00409d94                       ; 00409c94
        ;   XREF to: 00409d94 (CONDITIONAL_JUMP)  ; LAB_00409d94
    ADD EBX,0x2                         ; 00409c9a
        ;   Label: LAB_00409c9a
    ADD ESI,0x2                         ; 00409c9d
    TEST EBX,EBX                        ; 00409ca0
    JL 0x00409b98                       ; 00409ca2
        ;   XREF to: 00409b98 (CONDITIONAL_JUMP)  ; LAB_00409b98
    TEST ESI,ESI                        ; 00409ca8
    JL 0x00409b98                       ; 00409caa
        ;   XREF to: 00409b98 (CONDITIONAL_JUMP)  ; LAB_00409b98
    CMP EBX,dword ptr [0x006141b8]      ; 00409cb0 | DAT_006141b8
    JGE 0x00409b98                      ; 00409cb6
        ;   XREF to: 00409b98 (CONDITIONAL_JUMP)  ; LAB_00409b98
    CMP ESI,dword ptr [0x006141bc]      ; 00409cbc | DAT_006141bc
    JGE 0x00409b98                      ; 00409cc2
        ;   XREF to: 00409b98 (CONDITIONAL_JUMP)  ; LAB_00409b98
    PUSH ESI                            ; 00409cc8
    PUSH EBX                            ; 00409cc9
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409cca
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409ccf
    JMP 0x00409b98                      ; 00409cd2
        ;   XREF to: 00409b98 (UNCONDITIONAL_JUMP)  ; LAB_00409b98
    CMP ESI,dword ptr [0x006141bc]      ; 00409cd7 | DAT_006141bc
        ;   Label: LAB_00409cd7
    JGE 0x00409be4                      ; 00409cdd
        ;   XREF to: 00409be4 (CONDITIONAL_JUMP)  ; LAB_00409be4
    PUSH ESI                            ; 00409ce3
    PUSH EBX                            ; 00409ce4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409ce5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409cea
    JMP 0x00409be4                      ; 00409ced
        ;   XREF to: 00409be4 (UNCONDITIONAL_JUMP)  ; LAB_00409be4
    CMP EDX,dword ptr [0x006141bc]      ; 00409cf2 | DAT_006141bc
        ;   Label: LAB_00409cf2
    JGE 0x00409bfe                      ; 00409cf8
        ;   XREF to: 00409bfe (CONDITIONAL_JUMP)  ; LAB_00409bfe
    PUSH EDX                            ; 00409cfe
    PUSH EAX                            ; 00409cff
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409d00
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409d05
    JMP 0x00409bfe                      ; 00409d08
        ;   XREF to: 00409bfe (UNCONDITIONAL_JUMP)  ; LAB_00409bfe
    CMP EDX,dword ptr [0x006141bc]      ; 00409d0d | DAT_006141bc
        ;   Label: LAB_00409d0d
    JGE 0x00409c18                      ; 00409d13
        ;   XREF to: 00409c18 (CONDITIONAL_JUMP)  ; LAB_00409c18
    PUSH EDX                            ; 00409d19
    PUSH EAX                            ; 00409d1a
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409d1b
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409d20
    JMP 0x00409c18                      ; 00409d23
        ;   XREF to: 00409c18 (UNCONDITIONAL_JUMP)  ; LAB_00409c18
    CMP EDX,dword ptr [0x006141bc]      ; 00409d28 | DAT_006141bc
        ;   Label: LAB_00409d28
    JGE 0x00409c32                      ; 00409d2e
        ;   XREF to: 00409c32 (CONDITIONAL_JUMP)  ; LAB_00409c32
    PUSH EDX                            ; 00409d34
    PUSH EAX                            ; 00409d35
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409d36
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409d3b
    JMP 0x00409c32                      ; 00409d3e
        ;   XREF to: 00409c32 (UNCONDITIONAL_JUMP)  ; LAB_00409c32
    CMP EAX,dword ptr [0x006141bc]      ; 00409d43 | DAT_006141bc
        ;   Label: LAB_00409d43
    JGE 0x00409c4c                      ; 00409d49
        ;   XREF to: 00409c4c (CONDITIONAL_JUMP)  ; LAB_00409c4c
    PUSH EAX                            ; 00409d4f
    PUSH EDX                            ; 00409d50
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409d51
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409d56
    JMP 0x00409c4c                      ; 00409d59
        ;   XREF to: 00409c4c (UNCONDITIONAL_JUMP)  ; LAB_00409c4c
    CMP EDX,dword ptr [0x006141bc]      ; 00409d5e | DAT_006141bc
        ;   Label: LAB_00409d5e
    JGE 0x00409c66                      ; 00409d64
        ;   XREF to: 00409c66 (CONDITIONAL_JUMP)  ; LAB_00409c66
    PUSH EDX                            ; 00409d6a
    PUSH EAX                            ; 00409d6b
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409d6c
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409d71
    JMP 0x00409c66                      ; 00409d74
        ;   XREF to: 00409c66 (UNCONDITIONAL_JUMP)  ; LAB_00409c66
    CMP EDX,dword ptr [0x006141bc]      ; 00409d79 | DAT_006141bc
        ;   Label: LAB_00409d79
    JGE 0x00409c80                      ; 00409d7f
        ;   XREF to: 00409c80 (CONDITIONAL_JUMP)  ; LAB_00409c80
    PUSH EDX                            ; 00409d85
    PUSH EAX                            ; 00409d86
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409d87
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409d8c
    JMP 0x00409c80                      ; 00409d8f
        ;   XREF to: 00409c80 (UNCONDITIONAL_JUMP)  ; LAB_00409c80
    CMP EDX,dword ptr [0x006141bc]      ; 00409d94 | DAT_006141bc
        ;   Label: LAB_00409d94
    JGE 0x00409c9a                      ; 00409d9a
        ;   XREF to: 00409c9a (CONDITIONAL_JUMP)  ; LAB_00409c9a
    PUSH EDX                            ; 00409da0
    PUSH EAX                            ; 00409da1
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409da2
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409da7
    JMP 0x00409c9a                      ; 00409daa
        ;   XREF to: 00409c9a (UNCONDITIONAL_JUMP)  ; LAB_00409c9a

