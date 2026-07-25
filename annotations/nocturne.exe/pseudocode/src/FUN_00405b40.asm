; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * FUN_00405b40(uint *param_1)
;
;
; XREF[1]:
;   FUN_00405b30 at 00405b32
;
; Referenced Globals:
;   undefined4 DAT_005acaac
;   undefined4 DAT_006b0264
;   undefined4 DAT_006b0268
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b0288
;   undefined4 DAT_006b415c
;   undefined4 DAT_006b4160
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;
; Called Functions:
;   crt_stdlib.c__qsort_FUN_00563db8
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90
;   engine_model.c_getMRGLSize_FUN_004dd520
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;   FUN_00405340
;   FUN_00405ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405b40
        ;   Label: FUN_00405b40
    PUSH ESI                            ; 00405b41
    PUSH EDI                            ; 00405b42
    PUSH EBP                            ; 00405b43
    MOV EAX,dword ptr [ESP + 0x14]      ; 00405b44
    XOR ESI,ESI                         ; 00405b48
    TEST EAX,EAX                        ; 00405b4a
    JNZ 0x00405b53                      ; 00405b4c
        ;   XREF to: 00405b53 (CONDITIONAL_JUMP)  ; LAB_00405b53
    MOV EAX,0x6b0288                    ; 00405b4e | DAT_006b0288
    MOV EDX,dword ptr [EAX]             ; 00405b53 | DAT_006b0288
        ;   Label: LAB_00405b53
    MOV EBX,EAX                         ; 00405b55
    TEST EDX,EDX                        ; 00405b57
    JZ 0x00405b84                       ; 00405b59
        ;   XREF to: 00405b84 (CONDITIONAL_JUMP)  ; LAB_00405b84
    MOV EAX,dword ptr [EBX]             ; 00405b5b | DAT_006b0288
        ;   Label: LAB_00405b5b
    CMP EAX,0xd                         ; 00405b5d
    JNC 0x00405be6                      ; 00405b60
        ;   XREF to: 00405be6 (CONDITIONAL_JUMP)  ; LAB_00405be6
    CMP EAX,0xa                         ; 00405b66
    JNZ 0x00405b6d                      ; 00405b69
        ;   XREF to: 00405b6d (CONDITIONAL_JUMP)  ; LAB_00405b6d
    MOV EDI,EBX                         ; 00405b6b
    PUSH EBX                            ; 00405b6d | DAT_006b0288
        ;   Label: LAB_00405b6d
    CALL engine_model.c_getMRGLSize_FUN_004dd520 ; 00405b6e
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_getMRGLSize_FUN_004dd520()
    SHR EAX,0x2                         ; 00405b73
    SHL EAX,0x2                         ; 00405b76
    ADD EBX,EAX                         ; 00405b79
    MOV ECX,dword ptr [EBX]             ; 00405b7b | DAT_006b0288
    ADD ESP,0x4                         ; 00405b7d
    TEST ECX,ECX                        ; 00405b80
    JNZ 0x00405b5b                      ; 00405b82
        ;   XREF to: 00405b5b (CONDITIONAL_JUMP)  ; LAB_00405b5b
    CMP dword ptr [0x005acaac],0x0      ; 00405b84 | DAT_005acaac
        ;   Label: LAB_00405b84
    JZ 0x00405bd0                       ; 00405b8b
        ;   XREF to: 00405bd0 (CONDITIONAL_JUMP)  ; LAB_00405bd0
    MOV ESI,dword ptr [0x006b0278]      ; 00405b8d | DAT_006b0278
    TEST ESI,ESI                        ; 00405b93
    JZ 0x00405bf2                       ; 00405b95
        ;   XREF to: 00405bf2 (CONDITIONAL_JUMP)  ; LAB_00405bf2
    MOV EDI,dword ptr [0x006b0268]      ; 00405b97 | DAT_006b0268
    XOR ESI,ESI                         ; 00405b9d
    TEST EDI,EDI                        ; 00405b9f
    JLE 0x00405bd0                      ; 00405ba1
        ;   XREF to: 00405bd0 (CONDITIONAL_JUMP)  ; LAB_00405bd0
    XOR EBX,EBX                         ; 00405ba3
    MOV EAX,dword ptr [EBX + 0x6b415c]  ; 00405ba5 | DAT_006b415c | DAT_006b4160
        ;   Label: LAB_00405ba5
    ADD EBX,0x4                         ; 00405bab
    MOV EDX,dword ptr [EAX]             ; 00405bae
    MOV EDI,dword ptr [EAX + 0x10]      ; 00405bb0
    PUSH EDX                            ; 00405bb3
    INC ESI                             ; 00405bb4
    MOV dword ptr [0x006b0264],EDI      ; 00405bb5 | DAT_006b0264
    CALL engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90 ; 00405bbb
        ;   XREF to: 00405c90 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90()
    MOV ECX,dword ptr [0x006b0268]      ; 00405bc0 | DAT_006b0268
    ADD ESP,0x4                         ; 00405bc6
    CMP ESI,ECX                         ; 00405bc9
    JL 0x00405ba5                       ; 00405bcb
        ;   XREF to: 00405ba5 (CONDITIONAL_JUMP)  ; LAB_00405ba5
    LEA EAX,[EAX]                       ; 00405bcd
    POP EBP                             ; 00405bd0
        ;   Label: LAB_00405bd0
    POP EDI                             ; 00405bd1
    POP ESI                             ; 00405bd2
    POP EBX                             ; 00405bd3
    RET                                 ; 00405bd4
    MOV ESI,EBX                         ; 00405bd5
        ;   Label: LAB_00405bd5
    JMP 0x00405b6d                      ; 00405bd7
        ;   XREF to: 00405b6d (UNCONDITIONAL_JUMP)  ; LAB_00405b6d
    PUSH EDI                            ; 00405bd9 | DAT_006b0288
        ;   Label: LAB_00405bd9
    PUSH ESI                            ; 00405bda
    PUSH EBX                            ; 00405bdb
    CALL FUN_00405ab0                   ; 00405bdc
        ;   XREF to: 00405ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00405ab0()
    ADD ESP,0xc                         ; 00405be1
    JMP 0x00405b6d                      ; 00405be4
        ;   XREF to: 00405b6d (UNCONDITIONAL_JUMP)  ; LAB_00405b6d
    JBE 0x00405bd5                      ; 00405be6
        ;   XREF to: 00405bd5 (CONDITIONAL_JUMP)  ; LAB_00405bd5
        ;   Label: LAB_00405be6
    CMP EAX,0x18                        ; 00405be8
    JZ 0x00405bd9                       ; 00405beb
        ;   XREF to: 00405bd9 (CONDITIONAL_JUMP)  ; LAB_00405bd9
    JMP 0x00405b6d                      ; 00405bed
        ;   XREF to: 00405b6d (UNCONDITIONAL_JUMP)  ; LAB_00405b6d
    PUSH 0x405a60                       ; 00405bf2
        ;   Label: LAB_00405bf2
    PUSH 0x4                            ; 00405bf7
    MOV EBP,dword ptr [0x006b0268]      ; 00405bf9 | DAT_006b0268
    PUSH EBP                            ; 00405bff
    PUSH 0x6b415c                       ; 00405c00 | DAT_006b415c
    XOR EDI,EDI                         ; 00405c05
    CALL crt_stdlib.c__qsort_FUN_00563db8 ; 00405c07
        ;   XREF to: 00563db8 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_00563db8()
    XOR EBP,EBP                         ; 00405c0c
    MOV EAX,[0x006b0268]                ; 00405c0e | DAT_006b0268
    ADD ESP,0x10                        ; 00405c13
    TEST EAX,EAX                        ; 00405c16
    JLE 0x00405bd0                      ; 00405c18
        ;   XREF to: 00405bd0 (CONDITIONAL_JUMP)  ; LAB_00405bd0
    MOV EAX,dword ptr [ESI + 0x6b415c]  ; 00405c1a | DAT_006b415c | DAT_006b4160
        ;   Label: LAB_00405c1a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00405c20
    TEST ECX,ECX                        ; 00405c23
    JZ 0x00405c3d                       ; 00405c25
        ;   XREF to: 00405c3d (CONDITIONAL_JUMP)  ; LAB_00405c3d
    CMP EBP,ECX                         ; 00405c27
    JZ 0x00405c3d                       ; 00405c29
        ;   XREF to: 00405c3d (CONDITIONAL_JUMP)  ; LAB_00405c3d
    PUSH ECX                            ; 00405c2b
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 00405c2c
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_ensureTextureLoaded_FUN_00545920()
    MOV EBP,dword ptr [ESI + 0x6b415c]  ; 00405c31 | DAT_006b415c
    ADD ESP,0x4                         ; 00405c37
    MOV EBP,dword ptr [EBP + 0x4]       ; 00405c3a
    MOV EBX,dword ptr [ESI + 0x6b415c]  ; 00405c3d | DAT_006b415c | DAT_006b4160
        ;   Label: LAB_00405c3d
    MOV EAX,dword ptr [EBX + 0x10]      ; 00405c43
    MOV [0x006b0264],EAX                ; 00405c46 | DAT_006b0264
    MOV EAX,dword ptr [EBX + 0x14]      ; 00405c4b
    MOV [0x01c039dc],EAX                ; 00405c4e | DAT_01c039dc
    MOV EAX,dword ptr [EBX + 0x18]      ; 00405c53
    MOV [0x01c039e0],EAX                ; 00405c56 | DAT_01c039e0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00405c5b
    MOV [0x01c039e4],EAX                ; 00405c5e | DAT_01c039e4
    MOV EAX,dword ptr [EBX]             ; 00405c63
    PUSH EAX                            ; 00405c65
    ADD ESI,0x4                         ; 00405c66
    INC EDI                             ; 00405c69
    CALL FUN_00405340                   ; 00405c6a
        ;   XREF to: 00405340 (UNCONDITIONAL_CALL)  ; undefined FUN_00405340()
    MOV EDX,dword ptr [0x006b0268]      ; 00405c6f | DAT_006b0268
    ADD ESP,0x4                         ; 00405c75
    CMP EDI,EDX                         ; 00405c78
    JGE 0x00405bd0                      ; 00405c7a
        ;   XREF to: 00405bd0 (CONDITIONAL_JUMP)  ; LAB_00405bd0
    JMP 0x00405c1a                      ; 00405c80
        ;   XREF to: 00405c1a (UNCONDITIONAL_JUMP)  ; LAB_00405c1a

