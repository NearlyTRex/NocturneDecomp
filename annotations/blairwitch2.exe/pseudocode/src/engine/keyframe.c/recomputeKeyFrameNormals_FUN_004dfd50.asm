; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004dfd50(SMRGLHeaderExtended *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004df430
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0
;   engine_model.c_FUN_00500f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dfd50
        ;   Label: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004dfd50
    PUSH ESI                            ; 004dfd51
    PUSH EDI                            ; 004dfd52
    PUSH EBP                            ; 004dfd53
    MOV EAX,dword ptr [ESP + 0x14]      ; 004dfd54
    MOV EBX,EAX                         ; 004dfd58
    MOV EDX,dword ptr [EAX]             ; 004dfd5a
    XOR ESI,ESI                         ; 004dfd5c
    XOR EDI,EDI                         ; 004dfd5e
    TEST EDX,EDX                        ; 004dfd60
    JZ 0x004dfd75                       ; 004dfd62
        ;   XREF to: 004dfd75 (CONDITIONAL_JUMP)  ; LAB_004dfd75
    CMP dword ptr [EBX],0x2             ; 004dfd64
        ;   Label: LAB_004dfd64
    JNZ 0x004dfd6c                      ; 004dfd67
        ;   XREF to: 004dfd6c (CONDITIONAL_JUMP)  ; LAB_004dfd6c
    LEA ESI,[EBX + 0xc]                 ; 004dfd69
    MOV EAX,dword ptr [EBX]             ; 004dfd6c
        ;   Label: LAB_004dfd6c
    CMP EAX,0x18                        ; 004dfd6e
    JNZ 0x004dfdd5                      ; 004dfd71
        ;   XREF to: 004dfdd5 (CONDITIONAL_JUMP)  ; LAB_004dfdd5
    MOV EDI,EBX                         ; 004dfd73
        ;   Label: LAB_004dfd73
    TEST ESI,ESI                        ; 004dfd75
        ;   Label: LAB_004dfd75
    JNZ 0x004dfd9b                      ; 004dfd77
        ;   XREF to: 004dfd9b (CONDITIONAL_JUMP)  ; LAB_004dfd9b
    MOV EBP,0x5dbcce                    ; 004dfd79
    MOV EAX,0x1f5                       ; 004dfd7e
    PUSH 0x5dbce3                       ; 004dfd83
    MOV dword ptr [0x01d046a0],EBP      ; 004dfd88 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004dfd8e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004dfd93
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004dfd98
    TEST EDI,EDI                        ; 004dfd9b
        ;   Label: LAB_004dfd9b
    JZ 0x004dfdff                       ; 004dfd9d
        ;   XREF to: 004dfdff (CONDITIONAL_JUMP)  ; LAB_004dfdff
    MOV EAX,dword ptr [EBX]             ; 004dfd9f
        ;   Label: LAB_004dfd9f
    CMP EAX,0x19                        ; 004dfda1
    JNC 0x004dfe30                      ; 004dfda4
        ;   XREF to: 004dfe30 (CONDITIONAL_JUMP)  ; LAB_004dfe30
    CMP EAX,0x18                        ; 004dfdaa
    JNZ 0x004dfdb9                      ; 004dfdad
        ;   XREF to: 004dfdb9 (CONDITIONAL_JUMP)  ; LAB_004dfdb9
    PUSH EBX                            ; 004dfdaf
        ;   Label: LAB_004dfdaf
    PUSH ESI                            ; 004dfdb0
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0 ; 004dfdb1
        ;   XREF to: 004df5f0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0()
    ADD ESP,0x8                         ; 004dfdb6
        ;   Label: LAB_004dfdb6
    PUSH EBX                            ; 004dfdb9
        ;   Label: LAB_004dfdb9
    CALL engine_model.c_FUN_00500f30    ; 004dfdba
        ;   XREF to: 00500f30 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_00500f30(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004dfdbf
    SHL EAX,0x2                         ; 004dfdc2
    ADD EBX,EAX                         ; 004dfdc5
    MOV EBP,dword ptr [EBX]             ; 004dfdc7
    ADD ESP,0x4                         ; 004dfdc9
    TEST EBP,EBP                        ; 004dfdcc
    JNZ 0x004dfd9f                      ; 004dfdce
        ;   XREF to: 004dfd9f (CONDITIONAL_JUMP)  ; LAB_004dfd9f
    POP EBP                             ; 004dfdd0
    POP EDI                             ; 004dfdd1
    POP ESI                             ; 004dfdd2
    POP EBX                             ; 004dfdd3
    RET                                 ; 004dfdd4
    CMP EAX,0x29                        ; 004dfdd5
        ;   Label: LAB_004dfdd5
    JZ 0x004dfd73                       ; 004dfdd8
        ;   XREF to: 004dfd73 (CONDITIONAL_JUMP)  ; LAB_004dfd73
    CMP EAX,0x19                        ; 004dfdda
    JZ 0x004dfd73                       ; 004dfddd
        ;   XREF to: 004dfd73 (CONDITIONAL_JUMP)  ; LAB_004dfd73
    PUSH EBX                            ; 004dfddf
    CALL engine_model.c_FUN_00500f30    ; 004dfde0
        ;   XREF to: 00500f30 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_00500f30(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004dfde5
    SHL EAX,0x2                         ; 004dfde8
    ADD EBX,EAX                         ; 004dfdeb
    MOV ECX,dword ptr [EBX]             ; 004dfded
    ADD ESP,0x4                         ; 004dfdef
    TEST ECX,ECX                        ; 004dfdf2
    JNZ 0x004dfd64                      ; 004dfdf4
        ;   XREF to: 004dfd64 (CONDITIONAL_JUMP)  ; LAB_004dfd64
    JMP 0x004dfd75                      ; 004dfdfa
        ;   XREF to: 004dfd75 (UNCONDITIONAL_JUMP)  ; LAB_004dfd75
    MOV EDX,0x5dbd0e                    ; 004dfdff
        ;   Label: LAB_004dfdff
    MOV ECX,0x1f6                       ; 004dfe04
    PUSH 0x5dbd23                       ; 004dfe09
    MOV dword ptr [0x01d046a0],EDX      ; 004dfe0e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004dfe14 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004dfe1a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004dfe1f
    JMP 0x004dfd9f                      ; 004dfe22
        ;   XREF to: 004dfd9f (UNCONDITIONAL_JUMP)  ; LAB_004dfd9f
    PUSH EBX                            ; 004dfe27
        ;   Label: LAB_004dfe27
    PUSH ESI                            ; 004dfe28
    CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004df430 ; 004dfe29
        ;   XREF to: 004df430 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004df430()
    JMP 0x004dfdb6                      ; 004dfe2e
        ;   XREF to: 004dfdb6 (UNCONDITIONAL_JUMP)  ; LAB_004dfdb6
    JBE 0x004dfe27                      ; 004dfe30
        ;   XREF to: 004dfe27 (CONDITIONAL_JUMP)  ; LAB_004dfe27
        ;   Label: LAB_004dfe30
    CMP EAX,0x29                        ; 004dfe32
    JZ 0x004dfdaf                       ; 004dfe35
        ;   XREF to: 004dfdaf (CONDITIONAL_JUMP)  ; LAB_004dfdaf
    JMP 0x004dfdb9                      ; 004dfe3b
        ;   XREF to: 004dfdb9 (UNCONDITIONAL_JUMP)  ; LAB_004dfdb9

