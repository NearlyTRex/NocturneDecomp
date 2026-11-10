; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409940(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fb310
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_0061255c
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4d6d0
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409940
        ;   Label: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409940
    PUSH ESI                            ; 00409941
    PUSH EDI                            ; 00409942
    PUSH EBP                            ; 00409943
    SUB ESP,0x8c                        ; 00409944
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0040994a
    PUSH 0x5fb430                       ; 00409951 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00409956
    LEA EAX,[ESP + 0x8]                 ; 00409958
    PUSH EAX                            ; 0040995c
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0040995d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00409962
    MOV EAX,ESP                         ; 00409965
    PUSH EAX                            ; 00409967
    MOV EDX,dword ptr [EBX + 0x154]     ; 00409968
    PUSH EBX                            ; 0040996e
    CALL dword ptr [EDX + 0x54]         ; 0040996f
    ADD ESP,0x8                         ; 00409972
    XOR EBP,EBP                         ; 00409975
    MOV dword ptr [ESP + 0x84],EAX      ; 00409977
    TEST EAX,EAX                        ; 0040997e
    JLE 0x004099f7                      ; 00409980
        ;   XREF to: 004099f7 (CONDITIONAL_JUMP)  ; LAB_004099f7
    MOV EDI,ESP                         ; 00409982
    XOR EAX,EAX                         ; 00409984
        ;   Label: LAB_00409984
    MOV AL,[0x01c4d6d0]                 ; 00409986 | DAT_01c4d6d0
    LEA EBX,[ESP + 0x78]                ; 0040998b
    MOV dword ptr [ESP + 0x88],EAX      ; 0040998f
    MOV EAX,EDI                         ; 00409996
    MOV EDX,dword ptr [0x0061255c]      ; 00409998 | DAT_0061255c
    FLD float ptr [EAX]                 ; 0040999e
    FMUL float ptr [0x005fb310]         ; 004099a0 | DAT_005fb310
    FISTP dword ptr [EBX]               ; 004099a6
    FLD float ptr [EAX + 0x4]           ; 004099a8
    FMUL float ptr [0x005fb310]         ; 004099ab | DAT_005fb310
    FISTP dword ptr [EBX + 0x4]         ; 004099b1
    FLD float ptr [EAX + 0x8]           ; 004099b4
    FMUL float ptr [0x005fb310]         ; 004099b7 | DAT_005fb310
    FISTP dword ptr [EBX + 0x8]         ; 004099bd
    LEA EAX,[ESP + 0x78]                ; 004099c0
    PUSH EAX                            ; 004099c4
    MOV EAX,dword ptr [EDX]             ; 004099c5 | DAT_01bc120c
    ADD EAX,0xea5d0                     ; 004099c7
    PUSH EAX                            ; 004099cc
    CALL engine_special.cpp_FUN_00580173 ; 004099cd
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x0061255c]      ; 004099d2 | DAT_0061255c
    MOV ESI,dword ptr [ESI]             ; 004099d8 | DAT_01bc120c
    MOV AH,byte ptr [ESI + 0xea5e3]     ; 004099da
    ADD ESP,0x8                         ; 004099e0
    TEST AH,0x80                        ; 004099e3
    JZ 0x00409a02                       ; 004099e6
        ;   XREF to: 00409a02 (CONDITIONAL_JUMP)  ; LAB_00409a02
    MOV EDX,dword ptr [ESP + 0x84]      ; 004099e8
        ;   Label: LAB_004099e8
    INC EBP                             ; 004099ef
    ADD EDI,0xc                         ; 004099f0
    CMP EBP,EDX                         ; 004099f3
    JL 0x00409984                       ; 004099f5
        ;   XREF to: 00409984 (CONDITIONAL_JUMP)  ; LAB_00409984
    ADD ESP,0x8c                        ; 004099f7
        ;   Label: LAB_004099f7
    POP EBP                             ; 004099fd
    POP EDI                             ; 004099fe
    POP ESI                             ; 004099ff
    POP EBX                             ; 00409a00
    RET                                 ; 00409a01
    MOV EBX,dword ptr [ESI + 0xea5e0]   ; 00409a02
        ;   Label: LAB_00409a02
    MOV EAX,dword ptr [ESP + 0x88]      ; 00409a08
    SAR EBX,0x10                        ; 00409a0f
    MOV ESI,dword ptr [ESI + 0xea5e4]   ; 00409a12
    MOV [0x01c4f020],EAX                ; 00409a18 | DAT_01c4f020
    SAR ESI,0x10                        ; 00409a1d
    TEST EBX,EBX                        ; 00409a20
    JL 0x00409a34                       ; 00409a22
        ;   XREF to: 00409a34 (CONDITIONAL_JUMP)  ; LAB_00409a34
    TEST ESI,ESI                        ; 00409a24
    JL 0x00409a34                       ; 00409a26
        ;   XREF to: 00409a34 (CONDITIONAL_JUMP)  ; LAB_00409a34
    CMP EBX,dword ptr [0x0061b498]      ; 00409a28 | DAT_0061b498
    JL 0x00409b27                       ; 00409a2e
        ;   XREF to: 00409b27 (CONDITIONAL_JUMP)  ; LAB_00409b27
    LEA EAX,[EBX + -0x1]                ; 00409a34
        ;   Label: LAB_00409a34
    LEA EDX,[ESI + -0x1]                ; 00409a37
    TEST EAX,EAX                        ; 00409a3a
    JL 0x00409a4e                       ; 00409a3c
        ;   XREF to: 00409a4e (CONDITIONAL_JUMP)  ; LAB_00409a4e
    TEST EDX,EDX                        ; 00409a3e
    JL 0x00409a4e                       ; 00409a40
        ;   XREF to: 00409a4e (CONDITIONAL_JUMP)  ; LAB_00409a4e
    CMP EAX,dword ptr [0x0061b498]      ; 00409a42 | DAT_0061b498
    JL 0x00409b42                       ; 00409a48
        ;   XREF to: 00409b42 (CONDITIONAL_JUMP)  ; LAB_00409b42
    LEA EAX,[EBX + -0x1]                ; 00409a4e
        ;   Label: LAB_00409a4e
    LEA EDX,[ESI + 0x1]                 ; 00409a51
    TEST EAX,EAX                        ; 00409a54
    JL 0x00409a68                       ; 00409a56
        ;   XREF to: 00409a68 (CONDITIONAL_JUMP)  ; LAB_00409a68
    TEST EDX,EDX                        ; 00409a58
    JL 0x00409a68                       ; 00409a5a
        ;   XREF to: 00409a68 (CONDITIONAL_JUMP)  ; LAB_00409a68
    CMP EAX,dword ptr [0x0061b498]      ; 00409a5c | DAT_0061b498
    JL 0x00409b5d                       ; 00409a62
        ;   XREF to: 00409b5d (CONDITIONAL_JUMP)  ; LAB_00409b5d
    LEA EAX,[EBX + 0x1]                 ; 00409a68
        ;   Label: LAB_00409a68
    LEA EDX,[ESI + -0x1]                ; 00409a6b
    TEST EAX,EAX                        ; 00409a6e
    JL 0x00409a82                       ; 00409a70
        ;   XREF to: 00409a82 (CONDITIONAL_JUMP)  ; LAB_00409a82
    TEST EDX,EDX                        ; 00409a72
    JL 0x00409a82                       ; 00409a74
        ;   XREF to: 00409a82 (CONDITIONAL_JUMP)  ; LAB_00409a82
    CMP EAX,dword ptr [0x0061b498]      ; 00409a76 | DAT_0061b498
    JL 0x00409b78                       ; 00409a7c
        ;   XREF to: 00409b78 (CONDITIONAL_JUMP)  ; LAB_00409b78
    LEA EDX,[EBX + 0x1]                 ; 00409a82
        ;   Label: LAB_00409a82
    LEA EAX,[ESI + 0x1]                 ; 00409a85
    TEST EDX,EDX                        ; 00409a88
    JL 0x00409a9c                       ; 00409a8a
        ;   XREF to: 00409a9c (CONDITIONAL_JUMP)  ; LAB_00409a9c
    TEST EAX,EAX                        ; 00409a8c
    JL 0x00409a9c                       ; 00409a8e
        ;   XREF to: 00409a9c (CONDITIONAL_JUMP)  ; LAB_00409a9c
    CMP EDX,dword ptr [0x0061b498]      ; 00409a90 | DAT_0061b498
    JL 0x00409b93                       ; 00409a96
        ;   XREF to: 00409b93 (CONDITIONAL_JUMP)  ; LAB_00409b93
    LEA EAX,[EBX + -0x2]                ; 00409a9c
        ;   Label: LAB_00409a9c
    LEA EDX,[ESI + -0x2]                ; 00409a9f
    TEST EAX,EAX                        ; 00409aa2
    JL 0x00409ab6                       ; 00409aa4
        ;   XREF to: 00409ab6 (CONDITIONAL_JUMP)  ; LAB_00409ab6
    TEST EDX,EDX                        ; 00409aa6
    JL 0x00409ab6                       ; 00409aa8
        ;   XREF to: 00409ab6 (CONDITIONAL_JUMP)  ; LAB_00409ab6
    CMP EAX,dword ptr [0x0061b498]      ; 00409aaa | DAT_0061b498
    JL 0x00409bae                       ; 00409ab0
        ;   XREF to: 00409bae (CONDITIONAL_JUMP)  ; LAB_00409bae
    LEA EAX,[EBX + -0x2]                ; 00409ab6
        ;   Label: LAB_00409ab6
    LEA EDX,[ESI + 0x2]                 ; 00409ab9
    TEST EAX,EAX                        ; 00409abc
    JL 0x00409ad0                       ; 00409abe
        ;   XREF to: 00409ad0 (CONDITIONAL_JUMP)  ; LAB_00409ad0
    TEST EDX,EDX                        ; 00409ac0
    JL 0x00409ad0                       ; 00409ac2
        ;   XREF to: 00409ad0 (CONDITIONAL_JUMP)  ; LAB_00409ad0
    CMP EAX,dword ptr [0x0061b498]      ; 00409ac4 | DAT_0061b498
    JL 0x00409bc9                       ; 00409aca
        ;   XREF to: 00409bc9 (CONDITIONAL_JUMP)  ; LAB_00409bc9
    LEA EAX,[EBX + 0x2]                 ; 00409ad0
        ;   Label: LAB_00409ad0
    LEA EDX,[ESI + -0x2]                ; 00409ad3
    TEST EAX,EAX                        ; 00409ad6
    JL 0x00409aea                       ; 00409ad8
        ;   XREF to: 00409aea (CONDITIONAL_JUMP)  ; LAB_00409aea
    TEST EDX,EDX                        ; 00409ada
    JL 0x00409aea                       ; 00409adc
        ;   XREF to: 00409aea (CONDITIONAL_JUMP)  ; LAB_00409aea
    CMP EAX,dword ptr [0x0061b498]      ; 00409ade | DAT_0061b498
    JL 0x00409be4                       ; 00409ae4
        ;   XREF to: 00409be4 (CONDITIONAL_JUMP)  ; LAB_00409be4
    ADD EBX,0x2                         ; 00409aea
        ;   Label: LAB_00409aea
    ADD ESI,0x2                         ; 00409aed
    TEST EBX,EBX                        ; 00409af0
    JL 0x004099e8                       ; 00409af2
        ;   XREF to: 004099e8 (CONDITIONAL_JUMP)  ; LAB_004099e8
    TEST ESI,ESI                        ; 00409af8
    JL 0x004099e8                       ; 00409afa
        ;   XREF to: 004099e8 (CONDITIONAL_JUMP)  ; LAB_004099e8
    CMP EBX,dword ptr [0x0061b498]      ; 00409b00 | DAT_0061b498
    JGE 0x004099e8                      ; 00409b06
        ;   XREF to: 004099e8 (CONDITIONAL_JUMP)  ; LAB_004099e8
    CMP ESI,dword ptr [0x0061b49c]      ; 00409b0c | DAT_0061b49c
    JGE 0x004099e8                      ; 00409b12
        ;   XREF to: 004099e8 (CONDITIONAL_JUMP)  ; LAB_004099e8
    PUSH ESI                            ; 00409b18
    PUSH EBX                            ; 00409b19
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409b1a
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409b1f
    JMP 0x004099e8                      ; 00409b22
        ;   XREF to: 004099e8 (UNCONDITIONAL_JUMP)  ; LAB_004099e8
    CMP ESI,dword ptr [0x0061b49c]      ; 00409b27 | DAT_0061b49c
        ;   Label: LAB_00409b27
    JGE 0x00409a34                      ; 00409b2d
        ;   XREF to: 00409a34 (CONDITIONAL_JUMP)  ; LAB_00409a34
    PUSH ESI                            ; 00409b33
    PUSH EBX                            ; 00409b34
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409b35
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409b3a
    JMP 0x00409a34                      ; 00409b3d
        ;   XREF to: 00409a34 (UNCONDITIONAL_JUMP)  ; LAB_00409a34
    CMP EDX,dword ptr [0x0061b49c]      ; 00409b42 | DAT_0061b49c
        ;   Label: LAB_00409b42
    JGE 0x00409a4e                      ; 00409b48
        ;   XREF to: 00409a4e (CONDITIONAL_JUMP)  ; LAB_00409a4e
    PUSH EDX                            ; 00409b4e
    PUSH EAX                            ; 00409b4f
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409b50
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409b55
    JMP 0x00409a4e                      ; 00409b58
        ;   XREF to: 00409a4e (UNCONDITIONAL_JUMP)  ; LAB_00409a4e
    CMP EDX,dword ptr [0x0061b49c]      ; 00409b5d | DAT_0061b49c
        ;   Label: LAB_00409b5d
    JGE 0x00409a68                      ; 00409b63
        ;   XREF to: 00409a68 (CONDITIONAL_JUMP)  ; LAB_00409a68
    PUSH EDX                            ; 00409b69
    PUSH EAX                            ; 00409b6a
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409b6b
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409b70
    JMP 0x00409a68                      ; 00409b73
        ;   XREF to: 00409a68 (UNCONDITIONAL_JUMP)  ; LAB_00409a68
    CMP EDX,dword ptr [0x0061b49c]      ; 00409b78 | DAT_0061b49c
        ;   Label: LAB_00409b78
    JGE 0x00409a82                      ; 00409b7e
        ;   XREF to: 00409a82 (CONDITIONAL_JUMP)  ; LAB_00409a82
    PUSH EDX                            ; 00409b84
    PUSH EAX                            ; 00409b85
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409b86
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409b8b
    JMP 0x00409a82                      ; 00409b8e
        ;   XREF to: 00409a82 (UNCONDITIONAL_JUMP)  ; LAB_00409a82
    CMP EAX,dword ptr [0x0061b49c]      ; 00409b93 | DAT_0061b49c
        ;   Label: LAB_00409b93
    JGE 0x00409a9c                      ; 00409b99
        ;   XREF to: 00409a9c (CONDITIONAL_JUMP)  ; LAB_00409a9c
    PUSH EAX                            ; 00409b9f
    PUSH EDX                            ; 00409ba0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409ba1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409ba6
    JMP 0x00409a9c                      ; 00409ba9
        ;   XREF to: 00409a9c (UNCONDITIONAL_JUMP)  ; LAB_00409a9c
    CMP EDX,dword ptr [0x0061b49c]      ; 00409bae | DAT_0061b49c
        ;   Label: LAB_00409bae
    JGE 0x00409ab6                      ; 00409bb4
        ;   XREF to: 00409ab6 (CONDITIONAL_JUMP)  ; LAB_00409ab6
    PUSH EDX                            ; 00409bba
    PUSH EAX                            ; 00409bbb
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409bbc
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409bc1
    JMP 0x00409ab6                      ; 00409bc4
        ;   XREF to: 00409ab6 (UNCONDITIONAL_JUMP)  ; LAB_00409ab6
    CMP EDX,dword ptr [0x0061b49c]      ; 00409bc9 | DAT_0061b49c
        ;   Label: LAB_00409bc9
    JGE 0x00409ad0                      ; 00409bcf
        ;   XREF to: 00409ad0 (CONDITIONAL_JUMP)  ; LAB_00409ad0
    PUSH EDX                            ; 00409bd5
    PUSH EAX                            ; 00409bd6
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409bd7
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409bdc
    JMP 0x00409ad0                      ; 00409bdf
        ;   XREF to: 00409ad0 (UNCONDITIONAL_JUMP)  ; LAB_00409ad0
    CMP EDX,dword ptr [0x0061b49c]      ; 00409be4 | DAT_0061b49c
        ;   Label: LAB_00409be4
    JGE 0x00409aea                      ; 00409bea
        ;   XREF to: 00409aea (CONDITIONAL_JUMP)  ; LAB_00409aea
    PUSH EDX                            ; 00409bf0
    PUSH EAX                            ; 00409bf1
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409bf2
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409bf7
    JMP 0x00409aea                      ; 00409bfa
        ;   XREF to: 00409aea (UNCONDITIONAL_JUMP)  ; LAB_00409aea

