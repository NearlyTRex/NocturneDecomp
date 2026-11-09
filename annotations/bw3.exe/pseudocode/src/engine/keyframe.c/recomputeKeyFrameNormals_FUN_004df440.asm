; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004df440(SMRGLHeaderExtended *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004deb20
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0
;   engine_model.c_FUN_004f8730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df440
        ;   Label: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004df440
    PUSH ESI                            ; 004df441
    PUSH EDI                            ; 004df442
    PUSH EBP                            ; 004df443
    MOV EAX,dword ptr [ESP + 0x14]      ; 004df444
    MOV EBX,EAX                         ; 004df448
    MOV EDX,dword ptr [EAX]             ; 004df44a
    XOR ESI,ESI                         ; 004df44c
    XOR EDI,EDI                         ; 004df44e
    TEST EDX,EDX                        ; 004df450
    JZ 0x004df465                       ; 004df452
        ;   XREF to: 004df465 (CONDITIONAL_JUMP)  ; LAB_004df465
    CMP dword ptr [EBX],0x2             ; 004df454
        ;   Label: LAB_004df454
    JNZ 0x004df45c                      ; 004df457
        ;   XREF to: 004df45c (CONDITIONAL_JUMP)  ; LAB_004df45c
    LEA ESI,[EBX + 0xc]                 ; 004df459
    MOV EAX,dword ptr [EBX]             ; 004df45c
        ;   Label: LAB_004df45c
    CMP EAX,0x18                        ; 004df45e
    JNZ 0x004df4c5                      ; 004df461
        ;   XREF to: 004df4c5 (CONDITIONAL_JUMP)  ; LAB_004df4c5
    MOV EDI,EBX                         ; 004df463
        ;   Label: LAB_004df463
    TEST ESI,ESI                        ; 004df465
        ;   Label: LAB_004df465
    JNZ 0x004df48b                      ; 004df467
        ;   XREF to: 004df48b (CONDITIONAL_JUMP)  ; LAB_004df48b
    MOV EBP,0x5c67bd                    ; 004df469
    MOV EAX,0x1f5                       ; 004df46e
    PUSH 0x5c67d2                       ; 004df473
    MOV dword ptr [0x01d71de0],EBP      ; 004df478 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004df47e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004df483
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004df488
    TEST EDI,EDI                        ; 004df48b
        ;   Label: LAB_004df48b
    JZ 0x004df4ef                       ; 004df48d
        ;   XREF to: 004df4ef (CONDITIONAL_JUMP)  ; LAB_004df4ef
    MOV EAX,dword ptr [EBX]             ; 004df48f
        ;   Label: LAB_004df48f
    CMP EAX,0x19                        ; 004df491
    JNC 0x004df520                      ; 004df494
        ;   XREF to: 004df520 (CONDITIONAL_JUMP)  ; LAB_004df520
    CMP EAX,0x18                        ; 004df49a
    JNZ 0x004df4a9                      ; 004df49d
        ;   XREF to: 004df4a9 (CONDITIONAL_JUMP)  ; LAB_004df4a9
    PUSH EBX                            ; 004df49f
        ;   Label: LAB_004df49f
    PUSH ESI                            ; 004df4a0
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0 ; 004df4a1
        ;   XREF to: 004dece0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0()
    ADD ESP,0x8                         ; 004df4a6
        ;   Label: LAB_004df4a6
    PUSH EBX                            ; 004df4a9
        ;   Label: LAB_004df4a9
    CALL engine_model.c_FUN_004f8730    ; 004df4aa
        ;   XREF to: 004f8730 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_004f8730(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004df4af
    SHL EAX,0x2                         ; 004df4b2
    ADD EBX,EAX                         ; 004df4b5
    MOV EBP,dword ptr [EBX]             ; 004df4b7
    ADD ESP,0x4                         ; 004df4b9
    TEST EBP,EBP                        ; 004df4bc
    JNZ 0x004df48f                      ; 004df4be
        ;   XREF to: 004df48f (CONDITIONAL_JUMP)  ; LAB_004df48f
    POP EBP                             ; 004df4c0
    POP EDI                             ; 004df4c1
    POP ESI                             ; 004df4c2
    POP EBX                             ; 004df4c3
    RET                                 ; 004df4c4
    CMP EAX,0x29                        ; 004df4c5
        ;   Label: LAB_004df4c5
    JZ 0x004df463                       ; 004df4c8
        ;   XREF to: 004df463 (CONDITIONAL_JUMP)  ; LAB_004df463
    CMP EAX,0x19                        ; 004df4ca
    JZ 0x004df463                       ; 004df4cd
        ;   XREF to: 004df463 (CONDITIONAL_JUMP)  ; LAB_004df463
    PUSH EBX                            ; 004df4cf
    CALL engine_model.c_FUN_004f8730    ; 004df4d0
        ;   XREF to: 004f8730 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_004f8730(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004df4d5
    SHL EAX,0x2                         ; 004df4d8
    ADD EBX,EAX                         ; 004df4db
    MOV ECX,dword ptr [EBX]             ; 004df4dd
    ADD ESP,0x4                         ; 004df4df
    TEST ECX,ECX                        ; 004df4e2
    JNZ 0x004df454                      ; 004df4e4
        ;   XREF to: 004df454 (CONDITIONAL_JUMP)  ; LAB_004df454
    JMP 0x004df465                      ; 004df4ea
        ;   XREF to: 004df465 (UNCONDITIONAL_JUMP)  ; LAB_004df465
    MOV EDX,0x5c67fd                    ; 004df4ef
        ;   Label: LAB_004df4ef
    MOV ECX,0x1f6                       ; 004df4f4
    PUSH 0x5c6812                       ; 004df4f9
    MOV dword ptr [0x01d71de0],EDX      ; 004df4fe | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004df504 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004df50a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004df50f
    JMP 0x004df48f                      ; 004df512
        ;   XREF to: 004df48f (UNCONDITIONAL_JUMP)  ; LAB_004df48f
    PUSH EBX                            ; 004df517
        ;   Label: LAB_004df517
    PUSH ESI                            ; 004df518
    CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004deb20 ; 004df519
        ;   XREF to: 004deb20 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004deb20()
    JMP 0x004df4a6                      ; 004df51e
        ;   XREF to: 004df4a6 (UNCONDITIONAL_JUMP)  ; LAB_004df4a6
    JBE 0x004df517                      ; 004df520
        ;   XREF to: 004df517 (CONDITIONAL_JUMP)  ; LAB_004df517
        ;   Label: LAB_004df520
    CMP EAX,0x29                        ; 004df522
    JZ 0x004df49f                       ; 004df525
        ;   XREF to: 004df49f (CONDITIONAL_JUMP)  ; LAB_004df49f
    JMP 0x004df4a9                      ; 004df52b
        ;   XREF to: 004df4a9 (UNCONDITIONAL_JUMP)  ; LAB_004df4a9

