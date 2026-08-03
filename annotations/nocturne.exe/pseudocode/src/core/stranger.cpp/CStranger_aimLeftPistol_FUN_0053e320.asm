; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_0053e320(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x9c]:1  local_9c
;
; XREF[1]:
;   core_stranger.cpp_FUN_00535900 at 0053632e
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_00595cf7
;   TerminatedCString s_CStranger_aimLeftPistol_00595d0c
;   double DOUBLE_00595d37 = 0.0100000000000000
;   float FLOAT_005a2730 = -1.047198
;   float FLOAT_005a2734 = 1.221730
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 DAT_02dc9f5c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_main.c_FUN_004c8440
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_math.c_acos_FUN_00565ca4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e320
        ;   Label: core_stranger.cpp_CStranger_aimLeftPistol_FUN_0053e320
    PUSH ESI                            ; 0053e321
    PUSH EDI                            ; 0053e322
    PUSH EBP                            ; 0053e323
    MOV EBP,ESP                         ; 0053e324
    SUB ESP,0xd8                        ; 0053e326
    AND ESP,0xfffffff8                  ; 0053e32c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053e32f
    CMP dword ptr [EBX + 0x1fa94],0x0   ; 0053e332
    JZ 0x0053e6c5                       ; 0053e339
        ;   XREF to: 0053e6c5 (CONDITIONAL_JUMP)  ; LAB_0053e6c5
    LEA EDX,[ESP + 0x4c]                ; 0053e33f
        ;   Label: LAB_0053e33f
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053e343
    PUSH EDX                            ; 0053e349
    MOV ESI,dword ptr [EAX + 0x14c]     ; 0053e34a
    PUSH EAX                            ; 0053e350
    CALL dword ptr [ESI + 0xd8]         ; 0053e351
    MOV EAX,0xbfa78d36                  ; 0053e357
    ADD ESP,0x8                         ; 0053e35c
    MOV dword ptr [ESP + 0xc4],EAX      ; 0053e35f
    LEA EAX,[ESP + 0x4c]                ; 0053e366
    PUSH EAX                            ; 0053e36a
    LEA EAX,[ESP + 0x44]                ; 0053e36b
    PUSH EAX                            ; 0053e36f
    MOV ECX,dword ptr [EBX + 0x1fa94]   ; 0053e370
    MOV EDX,0x3f060a92                  ; 0053e376
    PUSH ECX                            ; 0053e37b
    MOV EDI,dword ptr [0x02dc9f5c]      ; 0053e37c | DAT_02dc9f5c
    MOV dword ptr [ESP + 0xc8],EDX      ; 0053e382
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053e389
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0053e38e
    XOR EAX,EAX                         ; 0053e391
    MOV dword ptr [ESP + 0xac],EAX      ; 0053e393
    MOV dword ptr [ESP + 0xb0],EAX      ; 0053e39a
    LEA EAX,[ESP + 0xac]                ; 0053e3a1
    MOV ECX,0x447a0000                  ; 0053e3a8
    PUSH EAX                            ; 0053e3ad
    LEA EAX,[ESP + 0x68]                ; 0053e3ae
    MOV dword ptr [ESP + 0xb8],ECX      ; 0053e3b2
    PUSH EAX                            ; 0053e3b9
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053e3ba
    PUSH EAX                            ; 0053e3c0
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0053e3c1
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0053e3c6
    MOV EDX,dword ptr [0x005be368]      ; 0053e3c9 | g_CDemonSet_PTR_005be368
    FLD float ptr [ESP + 0x40]          ; 0053e3cf
    FLD float ptr [ESP + 0x44]          ; 0053e3d3
    PUSH 0x0                            ; 0053e3d7
    FLD float ptr [ESP + 0x4c]          ; 0053e3d9
    PUSH 0x0                            ; 0053e3dd
    FXCH ST2                            ; 0053e3df
    FADD float ptr [ESP + 0x6c]         ; 0053e3e1
    FXCH                                ; 0053e3e5
    FADD float ptr [ESP + 0x70]         ; 0053e3e7
    FXCH ST2                            ; 0053e3eb
    FADD float ptr [ESP + 0x74]         ; 0053e3ed
    PUSH 0xff                           ; 0053e3f1
    FXCH                                ; 0053e3f6
    FSTP float ptr [ESP + 0x64]         ; 0053e3f8
    PUSH 0x1                            ; 0053e3fc
    FXCH                                ; 0053e3fe
    FSTP float ptr [ESP + 0x6c]         ; 0053e400
    PUSH EDX                            ; 0053e404 | g_CDemonSet_01e57284
    FSTP float ptr [ESP + 0x74]         ; 0053e405
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840 ; 0053e409
        ;   XREF to: 00511840 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 0053e40e
    MOV ECX,dword ptr [EBX + 0x1fa94]   ; 0053e411
    PUSH ECX                            ; 0053e417
    MOV EAX,[0x005be368]                ; 0053e418 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0053e41d | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0053e41e
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053e423
    LEA ESI,[EBX + 0x1fa70]             ; 0053e426
    PUSH EBX                            ; 0053e42c
    MOV EDX,dword ptr [0x005be368]      ; 0053e42d | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 0053e433 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0053e434
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053e439
    LEA EAX,[ESP + 0x58]                ; 0053e43c
    PUSH EAX                            ; 0053e440
    LEA EAX,[ESP + 0x44]                ; 0053e441
    PUSH EAX                            ; 0053e445
    MOV ECX,dword ptr [0x005be368]      ; 0053e446 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0053e44c | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 0053e44d
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0xe0],EAX      ; 0053e452
    FLD float ptr [ESP + 0xe0]          ; 0053e459
    ADD ESP,0xc                         ; 0053e460
    MOV EAX,[0x005be368]                ; 0053e463 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0053e468 | g_CDemonSet_01e57284
    FSTP float ptr [ESP + 0x30]         ; 0053e469
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0053e46d
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053e472
    FLDZ                                ; 0053e475
    FLD float ptr [ESP + 0x2c]          ; 0053e477
    FSTP double ptr [ESP + 0x18]        ; 0053e47b
    FCOMP double ptr [ESP + 0x18]       ; 0053e47f
    FNSTSW AX                           ; 0053e483
    SAHF                                ; 0053e485
    JBE 0x0053e6ed                      ; 0053e486
        ;   XREF to: 0053e6ed (CONDITIONAL_JUMP)  ; LAB_0053e6ed
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 0053e48c
        ;   Label: LAB_0053e48c
    FLD float ptr [ESP + 0x2c]          ; 0053e494
        ;   Label: LAB_0053e494
    FLD float ptr [ESP + 0x64]          ; 0053e498
    FMUL ST1                            ; 0053e49c
    FLD float ptr [ESP + 0x68]          ; 0053e49e
    FMUL ST2                            ; 0053e4a2
    FLD float ptr [ESP + 0x6c]          ; 0053e4a4
    FMULP ST3                           ; 0053e4a8
    FLD float ptr [ESP + 0x40]          ; 0053e4aa
    FLD float ptr [ESP + 0x44]          ; 0053e4ae
    FLD float ptr [ESP + 0x48]          ; 0053e4b2
    LEA EAX,[ESP + 0x34]                ; 0053e4b6
    LEA EDX,[ESP + 0x58]                ; 0053e4ba
    FXCH ST4                            ; 0053e4be
    FSTP float ptr [ESP + 0xa0]         ; 0053e4c0
    FXCH ST2                            ; 0053e4c7
    FSTP float ptr [ESP + 0xa4]         ; 0053e4c9
    FXCH ST3                            ; 0053e4d0
    FSTP float ptr [ESP + 0xa8]         ; 0053e4d2
    FXCH ST2                            ; 0053e4d9
    FADD float ptr [ESP + 0xa0]         ; 0053e4db
    FXCH ST2                            ; 0053e4e2
    FADD float ptr [ESP + 0xa4]         ; 0053e4e4
    FXCH                                ; 0053e4eb
    FADD float ptr [ESP + 0xa8]         ; 0053e4ed
    FXCH ST2                            ; 0053e4f4
    FSTP float ptr [ESP + 0x34]         ; 0053e4f6
    FSTP float ptr [ESP + 0x38]         ; 0053e4fa
    FSTP float ptr [ESP + 0x3c]         ; 0053e4fe
    CMP EDX,EAX                         ; 0053e502
    JZ 0x0053e51e                       ; 0053e504
        ;   XREF to: 0053e51e (CONDITIONAL_JUMP)  ; LAB_0053e51e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0053e506
    MOV dword ptr [ESP + 0x58],EAX      ; 0053e50a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0053e50e
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053e512
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053e516
    MOV dword ptr [ESP + 0x60],EAX      ; 0053e51a
    PUSH EDI                            ; 0053e51e
        ;   Label: LAB_0053e51e
    LEA EAX,[ESP + 0x80]                ; 0053e51f
    PUSH EAX                            ; 0053e526
    LEA EAX,[EBX + 0x150]               ; 0053e527
    PUSH EAX                            ; 0053e52d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0053e52e
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0053e533
    LEA EAX,[ESP + 0x58]                ; 0053e536
    PUSH EAX                            ; 0053e53a
    LEA EAX,[ESP + 0x8c]                ; 0053e53b
    PUSH EAX                            ; 0053e542
    PUSH EBX                            ; 0053e543
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053e544
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0053e549
    LEA EAX,[ESP + 0x70]                ; 0053e54c
    FLD float ptr [ESP + 0x88]          ; 0053e550
    FLD float ptr [ESP + 0x8c]          ; 0053e557
    FLD float ptr [ESP + 0x90]          ; 0053e55e
    PUSH EAX                            ; 0053e565
    LEA EAX,[ESP + 0x98]                ; 0053e566
    FXCH ST2                            ; 0053e56d
    FSUB float ptr [ESP + 0x80]         ; 0053e56f
    FXCH                                ; 0053e576
    FSUB float ptr [ESP + 0x84]         ; 0053e578
    FXCH ST2                            ; 0053e57f
    FSUB float ptr [ESP + 0x88]         ; 0053e581
    FXCH                                ; 0053e588
    FSTP float ptr [ESP + 0x74]         ; 0053e58a
    FXCH                                ; 0053e58e
    FSTP float ptr [ESP + 0x78]         ; 0053e590
    PUSH EAX                            ; 0053e594
    FSTP float ptr [ESP + 0x80]         ; 0053e595
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0053e59c
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0053e5a1
    FLD float ptr [ESP + 0x74]          ; 0053e5a4
    FMUL ST0                            ; 0053e5a8
    FLD float ptr [ESP + 0x70]          ; 0053e5aa
    FMUL ST0                            ; 0053e5ae
    FADDP                               ; 0053e5b0
    FLD float ptr [ESP + 0x78]          ; 0053e5b2
    FMUL ST0                            ; 0053e5b6
    FADDP                               ; 0053e5b8
    FSQRT                               ; 0053e5ba
    FST float ptr [ESP + 0x28]          ; 0053e5bc
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053e5c0
    FST double ptr [ESP]                ; 0053e5c4
    MOV dword ptr [ESP + 0x30],EAX      ; 0053e5c7
    FCOMP double ptr [0x00595d37]       ; 0053e5cb | DOUBLE_00595d37
    FNSTSW AX                           ; 0053e5d1
    SAHF                                ; 0053e5d3
    JBE 0x0053e600                      ; 0053e5d4
        ;   XREF to: 0053e600 (CONDITIONAL_JUMP)  ; LAB_0053e600
    FLD float ptr [ESP + 0x4c]          ; 0053e5d6
    FCHS                                ; 0053e5da
    FSTP float ptr [ESP + 0xc8]         ; 0053e5dc
    JNC 0x0053e701                      ; 0053e5e3
        ;   XREF to: 0053e701 (CONDITIONAL_JUMP)  ; LAB_0053e701
    FLD float ptr [ESP + 0x30]          ; 0053e5e9
        ;   Label: LAB_0053e5e9
    FST double ptr [ESP + 0x10]         ; 0053e5ed
    FCOMP double ptr [0x00595d37]       ; 0053e5f1 | DOUBLE_00595d37
    FNSTSW AX                           ; 0053e5f7
    SAHF                                ; 0053e5f9
    JNC 0x0053e7a9                      ; 0053e5fa
        ;   XREF to: 0053e7a9 (CONDITIONAL_JUMP)  ; LAB_0053e7a9
    MOV EAX,dword ptr [ESP + 0x98]      ; 0053e600
        ;   Label: LAB_0053e600
    MOV dword ptr [ESP + 0xd0],EAX      ; 0053e607
    MOV EAX,dword ptr [ESP + 0x94]      ; 0053e60e
    FLD float ptr [ESP + 0x94]          ; 0053e615
    MOV dword ptr [ESP + 0xcc],EAX      ; 0053e61c
    FCOMP float ptr [0x005a2730]        ; 0053e623 | FLOAT_005a2730
    FNSTSW AX                           ; 0053e629
    SAHF                                ; 0053e62b
    JNC 0x0053e63a                      ; 0053e62c
        ;   XREF to: 0053e63a (CONDITIONAL_JUMP)  ; LAB_0053e63a
    MOV EAX,[0x005a2730]                ; 0053e62e | FLOAT_005a2730
    MOV dword ptr [ESP + 0xcc],EAX      ; 0053e633
    FLD float ptr [ESP + 0xcc]          ; 0053e63a
        ;   Label: LAB_0053e63a
    FCOMP float ptr [0x005a2734]        ; 0053e641 | FLOAT_005a2734
    FNSTSW AX                           ; 0053e647
    SAHF                                ; 0053e649
    JBE 0x0053e658                      ; 0053e64a
        ;   XREF to: 0053e658 (CONDITIONAL_JUMP)  ; LAB_0053e658
    MOV EAX,[0x005a2734]                ; 0053e64c | FLOAT_005a2734
    MOV dword ptr [ESP + 0xcc],EAX      ; 0053e651
    FLD float ptr [ESP + 0xd0]          ; 0053e658
        ;   Label: LAB_0053e658
    FCOMP float ptr [ESP + 0xc4]        ; 0053e65f
    FNSTSW AX                           ; 0053e666
    SAHF                                ; 0053e668
    JNC 0x0053e679                      ; 0053e669
        ;   XREF to: 0053e679 (CONDITIONAL_JUMP)  ; LAB_0053e679
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0053e66b
    MOV dword ptr [ESP + 0xd0],EAX      ; 0053e672
    FLD float ptr [ESP + 0xd0]          ; 0053e679
        ;   Label: LAB_0053e679
    FCOMP float ptr [ESP + 0xbc]        ; 0053e680
    FNSTSW AX                           ; 0053e687
    SAHF                                ; 0053e689
    JA 0x0053e84c                       ; 0053e68a
        ;   XREF to: 0053e84c (CONDITIONAL_JUMP)  ; LAB_0053e84c
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0053e690
        ;   Label: LAB_0053e690
    MOV dword ptr [ESI + 0x14],0x3f800000 ; 0053e697
    MOV dword ptr [ESI + 0xc],EAX       ; 0053e69e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0053e6a1
    MOV dword ptr [ESI + 0x8],EAX       ; 0053e6a8
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0053e6ab
    MOV dword ptr [ESI + 0x4],EAX       ; 0053e6b2
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0053e6b5
    MOV dword ptr [ESI],EAX             ; 0053e6bc
    MOV ESP,EBP                         ; 0053e6be
    POP EBP                             ; 0053e6c0
    POP EDI                             ; 0053e6c1
    POP ESI                             ; 0053e6c2
    POP EBX                             ; 0053e6c3
    RET                                 ; 0053e6c4
    MOV ECX,0x595cf7                    ; 0053e6c5 | = "..\\core\\stranger.cpp"
        ;   Label: LAB_0053e6c5
    MOV ESI,0x10b4                      ; 0053e6ca
    PUSH 0x595d0c                       ; 0053e6cf | = "CStranger::aimLeftPistol - no weapon?"
    MOV dword ptr [0x01cc4800],ECX      ; 0053e6d4 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0053e6da | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0053e6e0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0053e6e5
    JMP 0x0053e33f                      ; 0053e6e8
        ;   XREF to: 0053e33f (UNCONDITIONAL_JUMP)  ; LAB_0053e33f
    FLD1                                ; 0053e6ed
        ;   Label: LAB_0053e6ed
    FCOMP double ptr [ESP + 0x18]       ; 0053e6ef
    FNSTSW AX                           ; 0053e6f3
    SAHF                                ; 0053e6f5
    JC 0x0053e48c                       ; 0053e6f6
        ;   XREF to: 0053e48c (CONDITIONAL_JUMP)  ; LAB_0053e48c
    JMP 0x0053e494                      ; 0053e6fc
        ;   XREF to: 0053e494 (UNCONDITIONAL_JUMP)  ; LAB_0053e494
    FLD float ptr [ESP + 0x28]          ; 0053e701
        ;   Label: LAB_0053e701
    FMUL ST0                            ; 0053e705
    FLD float ptr [ESP + 0xc8]          ; 0053e707
    FMUL ST0                            ; 0053e70e
    FSUBP                               ; 0053e710
    FSQRT                               ; 0053e712
    FDIV double ptr [ESP]               ; 0053e714
    FLD1                                ; 0053e717
    FXCH                                ; 0053e719
    FSTP double ptr [ESP + 0x20]        ; 0053e71b
    FCOMP double ptr [ESP + 0x20]       ; 0053e71f
    FNSTSW AX                           ; 0053e723
    SAHF                                ; 0053e725
    JBE 0x0053e5e9                      ; 0053e726
        ;   XREF to: 0053e5e9 (CONDITIONAL_JUMP)  ; LAB_0053e5e9
    FLDZ                                ; 0053e72c
    FCOMP double ptr [ESP + 0x20]       ; 0053e72e
    FNSTSW AX                           ; 0053e732
    SAHF                                ; 0053e734
    JA 0x0053e5e9                       ; 0053e735
        ;   XREF to: 0053e5e9 (CONDITIONAL_JUMP)  ; LAB_0053e5e9
    FLD double ptr [ESP + 0x20]         ; 0053e73b
    CALL crt_math.c_acos_FUN_00565ca4   ; 0053e73f
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FLDZ                                ; 0053e744
    FXCH                                ; 0053e746
    FSTP float ptr [ESP + 0xc0]         ; 0053e748
    FCOMP float ptr [ESP + 0xc8]        ; 0053e74f
    FNSTSW AX                           ; 0053e756
    SAHF                                ; 0053e758
    JBE 0x0053e799                      ; 0053e759
        ;   XREF to: 0053e799 (CONDITIONAL_JUMP)  ; LAB_0053e799
    FLD float ptr [ESP + 0x98]          ; 0053e75b
    FSUB float ptr [ESP + 0xc0]         ; 0053e762
    FSTP float ptr [ESP + 0x98]         ; 0053e769
        ;   Label: LAB_0053e769
    PUSH dword ptr [ESP + 0x98]         ; 0053e770
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053e777
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0xd8],EAX      ; 0053e77c
    FLD float ptr [ESP + 0xd8]          ; 0053e783
    ADD ESP,0x4                         ; 0053e78a
    FSTP float ptr [ESP + 0x98]         ; 0053e78d
    JMP 0x0053e5e9                      ; 0053e794
        ;   XREF to: 0053e5e9 (UNCONDITIONAL_JUMP)  ; LAB_0053e5e9
    FLD float ptr [ESP + 0x98]          ; 0053e799
        ;   Label: LAB_0053e799
    FADD float ptr [ESP + 0xc0]         ; 0053e7a0
    JMP 0x0053e769                      ; 0053e7a7
        ;   XREF to: 0053e769 (UNCONDITIONAL_JUMP)  ; LAB_0053e769
    FLD float ptr [ESP + 0x30]          ; 0053e7a9
        ;   Label: LAB_0053e7a9
    FMUL ST0                            ; 0053e7ad
    FLD float ptr [ESP + 0x50]          ; 0053e7af
    FMUL ST0                            ; 0053e7b3
    FSUBP                               ; 0053e7b5
    FSQRT                               ; 0053e7b7
    FDIV double ptr [ESP + 0x10]        ; 0053e7b9
    FLD1                                ; 0053e7bd
    FXCH                                ; 0053e7bf
    FSTP double ptr [ESP + 0x8]         ; 0053e7c1
    FCOMP double ptr [ESP + 0x8]        ; 0053e7c5
    FNSTSW AX                           ; 0053e7c9
    SAHF                                ; 0053e7cb
    JBE 0x0053e600                      ; 0053e7cc
        ;   XREF to: 0053e600 (CONDITIONAL_JUMP)  ; LAB_0053e600
    FLDZ                                ; 0053e7d2
    FCOMP double ptr [ESP + 0x8]        ; 0053e7d4
    FNSTSW AX                           ; 0053e7d8
    SAHF                                ; 0053e7da
    JA 0x0053e600                       ; 0053e7db
        ;   XREF to: 0053e600 (CONDITIONAL_JUMP)  ; LAB_0053e600
    FLD double ptr [ESP + 0x8]          ; 0053e7e1
    CALL crt_math.c_acos_FUN_00565ca4   ; 0053e7e5
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FLDZ                                ; 0053e7ea
    FXCH                                ; 0053e7ec
    FSTP float ptr [ESP + 0xb8]         ; 0053e7ee
    FCOMP float ptr [ESP + 0x50]        ; 0053e7f5
    FNSTSW AX                           ; 0053e7f9
    SAHF                                ; 0053e7fb
    JBE 0x0053e83c                      ; 0053e7fc
        ;   XREF to: 0053e83c (CONDITIONAL_JUMP)  ; LAB_0053e83c
    FLD float ptr [ESP + 0x94]          ; 0053e7fe
    FSUB float ptr [ESP + 0xb8]         ; 0053e805
    FSTP float ptr [ESP + 0x94]         ; 0053e80c
        ;   Label: LAB_0053e80c
    PUSH dword ptr [ESP + 0x94]         ; 0053e813
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053e81a
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0xd8],EAX      ; 0053e81f
    FLD float ptr [ESP + 0xd8]          ; 0053e826
    ADD ESP,0x4                         ; 0053e82d
    FSTP float ptr [ESP + 0x94]         ; 0053e830
    JMP 0x0053e600                      ; 0053e837
        ;   XREF to: 0053e600 (UNCONDITIONAL_JUMP)  ; LAB_0053e600
    FLD float ptr [ESP + 0x94]          ; 0053e83c
        ;   Label: LAB_0053e83c
    FADD float ptr [ESP + 0xb8]         ; 0053e843
    JMP 0x0053e80c                      ; 0053e84a
        ;   XREF to: 0053e80c (UNCONDITIONAL_JUMP)  ; LAB_0053e80c
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0053e84c
        ;   Label: LAB_0053e84c
    MOV dword ptr [ESP + 0xd0],EAX      ; 0053e853
    JMP 0x0053e690                      ; 0053e85a
        ;   XREF to: 0053e690 (UNCONDITIONAL_JUMP)  ; LAB_0053e690

