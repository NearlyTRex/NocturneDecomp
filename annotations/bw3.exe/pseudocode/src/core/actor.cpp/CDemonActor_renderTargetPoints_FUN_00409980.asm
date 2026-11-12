; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409980(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005dafd0
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_005f2af8
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c69c70
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409980
        ;   Label: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409980
    PUSH ESI                            ; 00409981
    PUSH EDI                            ; 00409982
    PUSH EBP                            ; 00409983
    SUB ESP,0x8c                        ; 00409984
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0040998a
    PUSH 0x5db0f0                       ; 00409991 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00409996
    LEA EAX,[ESP + 0x8]                 ; 00409998
    PUSH EAX                            ; 0040999c
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0040999d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004099a2
    MOV EAX,ESP                         ; 004099a5
    PUSH EAX                            ; 004099a7
    MOV EDX,dword ptr [EBX + 0x154]     ; 004099a8
    PUSH EBX                            ; 004099ae
    CALL dword ptr [EDX + 0x54]         ; 004099af
    ADD ESP,0x8                         ; 004099b2
    XOR EBP,EBP                         ; 004099b5
    MOV dword ptr [ESP + 0x84],EAX      ; 004099b7
    TEST EAX,EAX                        ; 004099be
    JLE 0x00409a37                      ; 004099c0
        ;   XREF to: 00409a37 (CONDITIONAL_JUMP)  ; LAB_00409a37
    MOV EDI,ESP                         ; 004099c2
    XOR EAX,EAX                         ; 004099c4
        ;   Label: LAB_004099c4
    MOV AL,[0x01c69c70]                 ; 004099c6 | DAT_01c69c70
    LEA EBX,[ESP + 0x78]                ; 004099cb
    MOV dword ptr [ESP + 0x88],EAX      ; 004099cf
    MOV EAX,EDI                         ; 004099d6
    MOV EDX,dword ptr [0x005f2af8]      ; 004099d8 | DAT_005f2af8
    FLD float ptr [EAX]                 ; 004099de
    FMUL float ptr [0x005dafd0]         ; 004099e0 | DAT_005dafd0
    FISTP dword ptr [EBX]               ; 004099e6
    FLD float ptr [EAX + 0x4]           ; 004099e8
    FMUL float ptr [0x005dafd0]         ; 004099eb | DAT_005dafd0
    FISTP dword ptr [EBX + 0x4]         ; 004099f1
    FLD float ptr [EAX + 0x8]           ; 004099f4
    FMUL float ptr [0x005dafd0]         ; 004099f7 | DAT_005dafd0
    FISTP dword ptr [EBX + 0x8]         ; 004099fd
    LEA EAX,[ESP + 0x78]                ; 00409a00
    PUSH EAX                            ; 00409a04
    MOV EAX,dword ptr [EDX]             ; 00409a05 | DAT_01bdd7e4
    ADD EAX,0x124f50                    ; 00409a07
    PUSH EAX                            ; 00409a0c
    CALL engine_special.cpp_FUN_005632a3 ; 00409a0d
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005f2af8]      ; 00409a12 | DAT_005f2af8
    MOV ESI,dword ptr [ESI]             ; 00409a18 | DAT_01bdd7e4
    MOV AH,byte ptr [ESI + 0x124f63]    ; 00409a1a
    ADD ESP,0x8                         ; 00409a20
    TEST AH,0x80                        ; 00409a23
    JZ 0x00409a42                       ; 00409a26
        ;   XREF to: 00409a42 (CONDITIONAL_JUMP)  ; LAB_00409a42
    MOV EDX,dword ptr [ESP + 0x84]      ; 00409a28
        ;   Label: LAB_00409a28
    INC EBP                             ; 00409a2f
    ADD EDI,0xc                         ; 00409a30
    CMP EBP,EDX                         ; 00409a33
    JL 0x004099c4                       ; 00409a35
        ;   XREF to: 004099c4 (CONDITIONAL_JUMP)  ; LAB_004099c4
    ADD ESP,0x8c                        ; 00409a37
        ;   Label: LAB_00409a37
    POP EBP                             ; 00409a3d
    POP EDI                             ; 00409a3e
    POP ESI                             ; 00409a3f
    POP EBX                             ; 00409a40
    RET                                 ; 00409a41
    MOV EBX,dword ptr [ESI + 0x124f60]  ; 00409a42
        ;   Label: LAB_00409a42
    MOV EAX,dword ptr [ESP + 0x88]      ; 00409a48
    SAR EBX,0x10                        ; 00409a4f
    MOV ESI,dword ptr [ESI + 0x124f64]  ; 00409a52
    MOV [0x01c6b5c0],EAX                ; 00409a58 | DAT_01c6b5c0
    SAR ESI,0x10                        ; 00409a5d
    TEST EBX,EBX                        ; 00409a60
    JL 0x00409a74                       ; 00409a62
        ;   XREF to: 00409a74 (CONDITIONAL_JUMP)  ; LAB_00409a74
    TEST ESI,ESI                        ; 00409a64
    JL 0x00409a74                       ; 00409a66
        ;   XREF to: 00409a74 (CONDITIONAL_JUMP)  ; LAB_00409a74
    CMP EBX,dword ptr [0x005fba18]      ; 00409a68 | DAT_005fba18
    JL 0x00409b67                       ; 00409a6e
        ;   XREF to: 00409b67 (CONDITIONAL_JUMP)  ; LAB_00409b67
    LEA EAX,[EBX + -0x1]                ; 00409a74
        ;   Label: LAB_00409a74
    LEA EDX,[ESI + -0x1]                ; 00409a77
    TEST EAX,EAX                        ; 00409a7a
    JL 0x00409a8e                       ; 00409a7c
        ;   XREF to: 00409a8e (CONDITIONAL_JUMP)  ; LAB_00409a8e
    TEST EDX,EDX                        ; 00409a7e
    JL 0x00409a8e                       ; 00409a80
        ;   XREF to: 00409a8e (CONDITIONAL_JUMP)  ; LAB_00409a8e
    CMP EAX,dword ptr [0x005fba18]      ; 00409a82 | DAT_005fba18
    JL 0x00409b82                       ; 00409a88
        ;   XREF to: 00409b82 (CONDITIONAL_JUMP)  ; LAB_00409b82
    LEA EAX,[EBX + -0x1]                ; 00409a8e
        ;   Label: LAB_00409a8e
    LEA EDX,[ESI + 0x1]                 ; 00409a91
    TEST EAX,EAX                        ; 00409a94
    JL 0x00409aa8                       ; 00409a96
        ;   XREF to: 00409aa8 (CONDITIONAL_JUMP)  ; LAB_00409aa8
    TEST EDX,EDX                        ; 00409a98
    JL 0x00409aa8                       ; 00409a9a
        ;   XREF to: 00409aa8 (CONDITIONAL_JUMP)  ; LAB_00409aa8
    CMP EAX,dword ptr [0x005fba18]      ; 00409a9c | DAT_005fba18
    JL 0x00409b9d                       ; 00409aa2
        ;   XREF to: 00409b9d (CONDITIONAL_JUMP)  ; LAB_00409b9d
    LEA EAX,[EBX + 0x1]                 ; 00409aa8
        ;   Label: LAB_00409aa8
    LEA EDX,[ESI + -0x1]                ; 00409aab
    TEST EAX,EAX                        ; 00409aae
    JL 0x00409ac2                       ; 00409ab0
        ;   XREF to: 00409ac2 (CONDITIONAL_JUMP)  ; LAB_00409ac2
    TEST EDX,EDX                        ; 00409ab2
    JL 0x00409ac2                       ; 00409ab4
        ;   XREF to: 00409ac2 (CONDITIONAL_JUMP)  ; LAB_00409ac2
    CMP EAX,dword ptr [0x005fba18]      ; 00409ab6 | DAT_005fba18
    JL 0x00409bb8                       ; 00409abc
        ;   XREF to: 00409bb8 (CONDITIONAL_JUMP)  ; LAB_00409bb8
    LEA EDX,[EBX + 0x1]                 ; 00409ac2
        ;   Label: LAB_00409ac2
    LEA EAX,[ESI + 0x1]                 ; 00409ac5
    TEST EDX,EDX                        ; 00409ac8
    JL 0x00409adc                       ; 00409aca
        ;   XREF to: 00409adc (CONDITIONAL_JUMP)  ; LAB_00409adc
    TEST EAX,EAX                        ; 00409acc
    JL 0x00409adc                       ; 00409ace
        ;   XREF to: 00409adc (CONDITIONAL_JUMP)  ; LAB_00409adc
    CMP EDX,dword ptr [0x005fba18]      ; 00409ad0 | DAT_005fba18
    JL 0x00409bd3                       ; 00409ad6
        ;   XREF to: 00409bd3 (CONDITIONAL_JUMP)  ; LAB_00409bd3
    LEA EAX,[EBX + -0x2]                ; 00409adc
        ;   Label: LAB_00409adc
    LEA EDX,[ESI + -0x2]                ; 00409adf
    TEST EAX,EAX                        ; 00409ae2
    JL 0x00409af6                       ; 00409ae4
        ;   XREF to: 00409af6 (CONDITIONAL_JUMP)  ; LAB_00409af6
    TEST EDX,EDX                        ; 00409ae6
    JL 0x00409af6                       ; 00409ae8
        ;   XREF to: 00409af6 (CONDITIONAL_JUMP)  ; LAB_00409af6
    CMP EAX,dword ptr [0x005fba18]      ; 00409aea | DAT_005fba18
    JL 0x00409bee                       ; 00409af0
        ;   XREF to: 00409bee (CONDITIONAL_JUMP)  ; LAB_00409bee
    LEA EAX,[EBX + -0x2]                ; 00409af6
        ;   Label: LAB_00409af6
    LEA EDX,[ESI + 0x2]                 ; 00409af9
    TEST EAX,EAX                        ; 00409afc
    JL 0x00409b10                       ; 00409afe
        ;   XREF to: 00409b10 (CONDITIONAL_JUMP)  ; LAB_00409b10
    TEST EDX,EDX                        ; 00409b00
    JL 0x00409b10                       ; 00409b02
        ;   XREF to: 00409b10 (CONDITIONAL_JUMP)  ; LAB_00409b10
    CMP EAX,dword ptr [0x005fba18]      ; 00409b04 | DAT_005fba18
    JL 0x00409c09                       ; 00409b0a
        ;   XREF to: 00409c09 (CONDITIONAL_JUMP)  ; LAB_00409c09
    LEA EAX,[EBX + 0x2]                 ; 00409b10
        ;   Label: LAB_00409b10
    LEA EDX,[ESI + -0x2]                ; 00409b13
    TEST EAX,EAX                        ; 00409b16
    JL 0x00409b2a                       ; 00409b18
        ;   XREF to: 00409b2a (CONDITIONAL_JUMP)  ; LAB_00409b2a
    TEST EDX,EDX                        ; 00409b1a
    JL 0x00409b2a                       ; 00409b1c
        ;   XREF to: 00409b2a (CONDITIONAL_JUMP)  ; LAB_00409b2a
    CMP EAX,dword ptr [0x005fba18]      ; 00409b1e | DAT_005fba18
    JL 0x00409c24                       ; 00409b24
        ;   XREF to: 00409c24 (CONDITIONAL_JUMP)  ; LAB_00409c24
    ADD EBX,0x2                         ; 00409b2a
        ;   Label: LAB_00409b2a
    ADD ESI,0x2                         ; 00409b2d
    TEST EBX,EBX                        ; 00409b30
    JL 0x00409a28                       ; 00409b32
        ;   XREF to: 00409a28 (CONDITIONAL_JUMP)  ; LAB_00409a28
    TEST ESI,ESI                        ; 00409b38
    JL 0x00409a28                       ; 00409b3a
        ;   XREF to: 00409a28 (CONDITIONAL_JUMP)  ; LAB_00409a28
    CMP EBX,dword ptr [0x005fba18]      ; 00409b40 | DAT_005fba18
    JGE 0x00409a28                      ; 00409b46
        ;   XREF to: 00409a28 (CONDITIONAL_JUMP)  ; LAB_00409a28
    CMP ESI,dword ptr [0x005fba1c]      ; 00409b4c | DAT_005fba1c
    JGE 0x00409a28                      ; 00409b52
        ;   XREF to: 00409a28 (CONDITIONAL_JUMP)  ; LAB_00409a28
    PUSH ESI                            ; 00409b58
    PUSH EBX                            ; 00409b59
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409b5a
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409b5f
    JMP 0x00409a28                      ; 00409b62
        ;   XREF to: 00409a28 (UNCONDITIONAL_JUMP)  ; LAB_00409a28
    CMP ESI,dword ptr [0x005fba1c]      ; 00409b67 | DAT_005fba1c
        ;   Label: LAB_00409b67
    JGE 0x00409a74                      ; 00409b6d
        ;   XREF to: 00409a74 (CONDITIONAL_JUMP)  ; LAB_00409a74
    PUSH ESI                            ; 00409b73
    PUSH EBX                            ; 00409b74
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409b75
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409b7a
    JMP 0x00409a74                      ; 00409b7d
        ;   XREF to: 00409a74 (UNCONDITIONAL_JUMP)  ; LAB_00409a74
    CMP EDX,dword ptr [0x005fba1c]      ; 00409b82 | DAT_005fba1c
        ;   Label: LAB_00409b82
    JGE 0x00409a8e                      ; 00409b88
        ;   XREF to: 00409a8e (CONDITIONAL_JUMP)  ; LAB_00409a8e
    PUSH EDX                            ; 00409b8e
    PUSH EAX                            ; 00409b8f
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409b90
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409b95
    JMP 0x00409a8e                      ; 00409b98
        ;   XREF to: 00409a8e (UNCONDITIONAL_JUMP)  ; LAB_00409a8e
    CMP EDX,dword ptr [0x005fba1c]      ; 00409b9d | DAT_005fba1c
        ;   Label: LAB_00409b9d
    JGE 0x00409aa8                      ; 00409ba3
        ;   XREF to: 00409aa8 (CONDITIONAL_JUMP)  ; LAB_00409aa8
    PUSH EDX                            ; 00409ba9
    PUSH EAX                            ; 00409baa
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409bab
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409bb0
    JMP 0x00409aa8                      ; 00409bb3
        ;   XREF to: 00409aa8 (UNCONDITIONAL_JUMP)  ; LAB_00409aa8
    CMP EDX,dword ptr [0x005fba1c]      ; 00409bb8 | DAT_005fba1c
        ;   Label: LAB_00409bb8
    JGE 0x00409ac2                      ; 00409bbe
        ;   XREF to: 00409ac2 (CONDITIONAL_JUMP)  ; LAB_00409ac2
    PUSH EDX                            ; 00409bc4
    PUSH EAX                            ; 00409bc5
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409bc6
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409bcb
    JMP 0x00409ac2                      ; 00409bce
        ;   XREF to: 00409ac2 (UNCONDITIONAL_JUMP)  ; LAB_00409ac2
    CMP EAX,dword ptr [0x005fba1c]      ; 00409bd3 | DAT_005fba1c
        ;   Label: LAB_00409bd3
    JGE 0x00409adc                      ; 00409bd9
        ;   XREF to: 00409adc (CONDITIONAL_JUMP)  ; LAB_00409adc
    PUSH EAX                            ; 00409bdf
    PUSH EDX                            ; 00409be0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409be1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409be6
    JMP 0x00409adc                      ; 00409be9
        ;   XREF to: 00409adc (UNCONDITIONAL_JUMP)  ; LAB_00409adc
    CMP EDX,dword ptr [0x005fba1c]      ; 00409bee | DAT_005fba1c
        ;   Label: LAB_00409bee
    JGE 0x00409af6                      ; 00409bf4
        ;   XREF to: 00409af6 (CONDITIONAL_JUMP)  ; LAB_00409af6
    PUSH EDX                            ; 00409bfa
    PUSH EAX                            ; 00409bfb
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409bfc
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409c01
    JMP 0x00409af6                      ; 00409c04
        ;   XREF to: 00409af6 (UNCONDITIONAL_JUMP)  ; LAB_00409af6
    CMP EDX,dword ptr [0x005fba1c]      ; 00409c09 | DAT_005fba1c
        ;   Label: LAB_00409c09
    JGE 0x00409b10                      ; 00409c0f
        ;   XREF to: 00409b10 (CONDITIONAL_JUMP)  ; LAB_00409b10
    PUSH EDX                            ; 00409c15
    PUSH EAX                            ; 00409c16
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409c17
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409c1c
    JMP 0x00409b10                      ; 00409c1f
        ;   XREF to: 00409b10 (UNCONDITIONAL_JUMP)  ; LAB_00409b10
    CMP EDX,dword ptr [0x005fba1c]      ; 00409c24 | DAT_005fba1c
        ;   Label: LAB_00409c24
    JGE 0x00409b2a                      ; 00409c2a
        ;   XREF to: 00409b2a (CONDITIONAL_JUMP)  ; LAB_00409b2a
    PUSH EDX                            ; 00409c30
    PUSH EAX                            ; 00409c31
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409c32
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409c37
    JMP 0x00409b2a                      ; 00409c3a
        ;   XREF to: 00409b2a (UNCONDITIONAL_JUMP)  ; LAB_00409b2a

