; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   position
; CVector3i *      Stack[0xc]:4   rotation
;
; XREF[62]:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 at 00408b28
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_00411ec0 at 00411efa
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413baf
;   core_battery.cpp_CBattery_renderOpaque_FUN_00417f80 at 00417fa9
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0 at 00419576
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_00421e00 at 00421e70
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_00421ef0 at 00421f3d
;   core_bugs.cpp_CBugs_renderOpaque_FUN_004251b0 at 0042525c
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420 at 0042a4e7
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043cac5
;   ... and 52 more
;
; Referenced Globals:
;   double DOUBLE_0062201d = 256
;   double DOUBLE_00622025 = 0.318309886192889
;   double DOUBLE_0062202d = 32768
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c4f0
        ;   Label: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
    PUSH EBP                            ; 0048c4f1
    SUB ESP,0xc                         ; 0048c4f2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048c4f5
    MOV EDX,dword ptr [ESP + 0x20]      ; 0048c4f9
    TEST EDX,EDX                        ; 0048c4fd
    JNZ 0x0048c56c                      ; 0048c4ff
        ;   XREF to: 0048c56c (CONDITIONAL_JUMP)  ; LAB_0048c56c
    FLD double ptr [0x00622025]         ; 0048c501 | DOUBLE_00622025
    FLD float ptr [EAX + 0x4]           ; 0048c507
    FMUL ST1                            ; 0048c50a
    FLD float ptr [EAX + 0x8]           ; 0048c50c
    FMUL ST2                            ; 0048c50f
    FLD float ptr [EAX]                 ; 0048c511
    FMULP ST3                           ; 0048c513
    FXCH                                ; 0048c515
    FLD double ptr [0x0062202d]         ; 0048c517 | DOUBLE_0062202d
    FXCH                                ; 0048c51d
    FMUL ST1                            ; 0048c51f
    PUSH EDX                            ; 0048c521
    FXCH ST2                            ; 0048c522
    FMUL ST1                            ; 0048c524
    PUSH EDX                            ; 0048c526
    FXCH ST3                            ; 0048c527
    FMULP                               ; 0048c529
    PUSH EDX                            ; 0048c52b
    FXCH                                ; 0048c52c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c52e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0048c533
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c535
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0048c53a
    FISTP dword ptr [ESP + 0x10]        ; 0048c53c
    FXCH                                ; 0048c540
    FISTP dword ptr [ESP + 0xc]         ; 0048c542
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048c546
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048c54a
    PUSH EDX                            ; 0048c54e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c54f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 0048c554
    FISTP dword ptr [ESP + 0x14]        ; 0048c555
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048c559
    PUSH EBX                            ; 0048c55d
    CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 ; 0048c55e
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0048c563
    ADD ESP,0xc                         ; 0048c566
    POP EBP                             ; 0048c569
    POP EBX                             ; 0048c56a
    RET                                 ; 0048c56b
    PUSH EDI                            ; 0048c56c
        ;   Label: LAB_0048c56c
    PUSH ESI                            ; 0048c56d
    FLD double ptr [0x0062201d]         ; 0048c56e | DOUBLE_0062201d
    FLD float ptr [EDX + 0x8]           ; 0048c574
    FMUL ST1                            ; 0048c577
    FLD float ptr [EDX + 0x4]           ; 0048c579
    FMUL ST2                            ; 0048c57c
    FLD float ptr [EDX]                 ; 0048c57e
    FMULP ST3                           ; 0048c580
    FLD double ptr [0x00622025]         ; 0048c582 | DOUBLE_00622025
    FLD float ptr [EAX + 0x4]           ; 0048c588
    FMUL ST1                            ; 0048c58b
    FLD float ptr [EAX + 0x8]           ; 0048c58d
    FMUL ST2                            ; 0048c590
    FLD float ptr [EAX]                 ; 0048c592
    FMULP ST3                           ; 0048c594
    FXCH                                ; 0048c596
    FLD double ptr [0x0062202d]         ; 0048c598 | DOUBLE_0062202d
    FXCH                                ; 0048c59e
    FMUL ST1                            ; 0048c5a0
    FXCH ST2                            ; 0048c5a2
    FMUL ST1                            ; 0048c5a4
    FXCH ST3                            ; 0048c5a6
    FMULP                               ; 0048c5a8
    FXCH ST4                            ; 0048c5aa
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c5ac
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 0048c5b1
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c5b3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST5                            ; 0048c5b8
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c5ba
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 0048c5bf
    FISTP dword ptr [ESP + 0x8]         ; 0048c5c1
    FXCH ST4                            ; 0048c5c5
    FISTP dword ptr [ESP + 0x10]        ; 0048c5c7
    FXCH                                ; 0048c5cb
    FISTP dword ptr [ESP + 0xc]         ; 0048c5cd
    MOV ECX,dword ptr [ESP + 0x8]       ; 0048c5d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048c5d5
    MOV ESI,dword ptr [ESP + 0xc]       ; 0048c5d9
    FXCH ST2                            ; 0048c5dd
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c5df
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0048c5e4
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c5e6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 0048c5eb
    FXCH ST2                            ; 0048c5ec
    FISTP dword ptr [ESP + 0x10]        ; 0048c5ee
    PUSH EBX                            ; 0048c5f2
    FXCH                                ; 0048c5f3
    FISTP dword ptr [ESP + 0x18]        ; 0048c5f5
    PUSH ESI                            ; 0048c5f9
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048c5fa
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048c5fe
    PUSH EDI                            ; 0048c602
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c603
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EBP                            ; 0048c608
    FISTP dword ptr [ESP + 0x24]        ; 0048c609
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048c60d
    PUSH EAX                            ; 0048c611
    CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 ; 0048c612
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0048c617
    POP ESI                             ; 0048c61a
    POP EDI                             ; 0048c61b
    ADD ESP,0xc                         ; 0048c61c
    POP EBP                             ; 0048c61f
    POP EBX                             ; 0048c620
    RET                                 ; 0048c621

