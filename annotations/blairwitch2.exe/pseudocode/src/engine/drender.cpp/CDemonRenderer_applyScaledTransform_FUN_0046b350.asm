; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; CVector3f *      Stack[0xc]:4   translation
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[56]:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 at 004089f8
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_0040ec10 at 0040ec4a
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 0041073f
;   core_battery.cpp_CBattery_renderOpaque_FUN_00414810 at 0041483a
;   core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_0059bb60 at 0059bd55
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00415b60 at 00415c3a
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041c580 at 0041c5f5
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041c690 at 0041c6dd
;   core_bugs.cpp_CBugs_renderOpaque_FUN_0041f450 at 0041f520
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0 at 00425b7d
;   ... and 46 more
;
; Referenced Globals:
;   undefined4 DAT_005d158b
;   undefined4 DAT_005d1593
;   undefined4 DAT_005d159b
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b350
        ;   Label: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
    PUSH EBP                            ; 0046b351
    SUB ESP,0xc                         ; 0046b352
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046b355
    MOV EDX,dword ptr [ESP + 0x20]      ; 0046b359
    TEST EDX,EDX                        ; 0046b35d
    JNZ 0x0046b3cc                      ; 0046b35f
        ;   XREF to: 0046b3cc (CONDITIONAL_JUMP)  ; LAB_0046b3cc
    FLD float ptr [0x005d1593]          ; 0046b361 | DAT_005d1593
    FLD float ptr [EAX + 0x4]           ; 0046b367
    FMUL ST1                            ; 0046b36a
    FLD float ptr [EAX + 0x8]           ; 0046b36c
    FMUL ST2                            ; 0046b36f
    FLD float ptr [EAX]                 ; 0046b371
    FMULP ST3                           ; 0046b373
    FXCH                                ; 0046b375
    FLD double ptr [0x005d159b]         ; 0046b377 | DAT_005d159b
    FXCH                                ; 0046b37d
    FMUL ST1                            ; 0046b37f
    PUSH EDX                            ; 0046b381
    FXCH ST2                            ; 0046b382
    FMUL ST1                            ; 0046b384
    PUSH EDX                            ; 0046b386
    FXCH ST3                            ; 0046b387
    FMULP                               ; 0046b389
    PUSH EDX                            ; 0046b38b
    FXCH                                ; 0046b38c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b38e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0046b393
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b395
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0046b39a
    FISTP dword ptr [ESP + 0x10]        ; 0046b39c
    FXCH                                ; 0046b3a0
    FISTP dword ptr [ESP + 0xc]         ; 0046b3a2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0046b3a6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046b3aa
    PUSH EDX                            ; 0046b3ae
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b3af
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 0046b3b4
    FISTP dword ptr [ESP + 0x14]        ; 0046b3b5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046b3b9
    PUSH EBX                            ; 0046b3bd
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0 ; 0046b3be
        ;   XREF to: 004e8fd0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0046b3c3
    ADD ESP,0xc                         ; 0046b3c6
    POP EBP                             ; 0046b3c9
    POP EBX                             ; 0046b3ca
    RET                                 ; 0046b3cb
    PUSH EDI                            ; 0046b3cc
        ;   Label: LAB_0046b3cc
    PUSH ESI                            ; 0046b3cd
    FLD double ptr [0x005d158b]         ; 0046b3ce | DAT_005d158b
    FLD float ptr [EDX + 0x8]           ; 0046b3d4
    FMUL ST1                            ; 0046b3d7
    FLD float ptr [EDX + 0x4]           ; 0046b3d9
    FMUL ST2                            ; 0046b3dc
    FLD float ptr [EDX]                 ; 0046b3de
    FMULP ST3                           ; 0046b3e0
    FLD float ptr [0x005d1593]          ; 0046b3e2 | DAT_005d1593
    FLD float ptr [EAX + 0x4]           ; 0046b3e8
    FMUL ST1                            ; 0046b3eb
    FLD float ptr [EAX + 0x8]           ; 0046b3ed
    FMUL ST2                            ; 0046b3f0
    FLD float ptr [EAX]                 ; 0046b3f2
    FMULP ST3                           ; 0046b3f4
    FXCH                                ; 0046b3f6
    FLD double ptr [0x005d159b]         ; 0046b3f8 | DAT_005d159b
    FXCH                                ; 0046b3fe
    FMUL ST1                            ; 0046b400
    FXCH ST2                            ; 0046b402
    FMUL ST1                            ; 0046b404
    FXCH ST3                            ; 0046b406
    FMULP                               ; 0046b408
    FXCH ST4                            ; 0046b40a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b40c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 0046b411
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b413
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST5                            ; 0046b418
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b41a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 0046b41f
    FISTP dword ptr [ESP + 0x8]         ; 0046b421
    FXCH ST4                            ; 0046b425
    FISTP dword ptr [ESP + 0x10]        ; 0046b427
    FXCH                                ; 0046b42b
    FISTP dword ptr [ESP + 0xc]         ; 0046b42d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0046b431
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046b435
    MOV ESI,dword ptr [ESP + 0xc]       ; 0046b439
    FXCH ST2                            ; 0046b43d
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b43f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0046b444
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b446
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 0046b44b
    FXCH ST2                            ; 0046b44c
    FISTP dword ptr [ESP + 0x10]        ; 0046b44e
    PUSH EBX                            ; 0046b452
    FXCH                                ; 0046b453
    FISTP dword ptr [ESP + 0x18]        ; 0046b455
    PUSH ESI                            ; 0046b459
    MOV EDI,dword ptr [ESP + 0x18]      ; 0046b45a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046b45e
    PUSH EDI                            ; 0046b462
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b463
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EBP                            ; 0046b468
    FISTP dword ptr [ESP + 0x24]        ; 0046b469
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046b46d
    PUSH EAX                            ; 0046b471
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0 ; 0046b472
        ;   XREF to: 004e8fd0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0046b477
    POP ESI                             ; 0046b47a
    POP EDI                             ; 0046b47b
    ADD ESP,0xc                         ; 0046b47c
    POP EBP                             ; 0046b47f
    POP EBX                             ; 0046b480
    RET                                 ; 0046b481

