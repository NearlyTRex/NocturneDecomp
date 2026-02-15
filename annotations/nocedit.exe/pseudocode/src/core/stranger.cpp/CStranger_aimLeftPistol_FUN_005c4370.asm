; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x9c]:1  local_9c
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc390
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_00653cd4
;   TerminatedCString s_CStranger_aimLeftPistol__00653ce9
;   double DOUBLE_00653d14 = 0.0100000000000000
;   float FLOAT_00663770 = -1.047198
;   float FLOAT_00663774 = 1.221730
;   CDemonSet* g_CDemonSetPtr = 03114278
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonSet g_CDemonSetInstance
;   int INT_03f6bad8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_math.c_acos_FUN_00600162
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4370
        ;   Label: core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370
    PUSH ESI                            ; 005c4371
    PUSH EDI                            ; 005c4372
    PUSH EBP                            ; 005c4373
    MOV EBP,ESP                         ; 005c4374
    SUB ESP,0xd8                        ; 005c4376
    AND ESP,0xfffffff8                  ; 005c437c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c437f
    CMP dword ptr [EBX + 0x1fc2c],0x0   ; 005c4382
    JZ 0x005c4715                       ; 005c4389
        ;   XREF to: 005c4715 (CONDITIONAL_JUMP)  ; LAB_005c4715
    LEA EDX,[ESP + 0x4c]                ; 005c438f
        ;   Label: LAB_005c438f
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c4393
    PUSH EDX                            ; 005c4399
    MOV ESI,dword ptr [EAX + 0x154]     ; 005c439a
    PUSH EAX                            ; 005c43a0
    CALL dword ptr [ESI + 0xf4]         ; 005c43a1
    MOV EAX,0xbfa78d36                  ; 005c43a7
    ADD ESP,0x8                         ; 005c43ac
    MOV dword ptr [ESP + 0xc4],EAX      ; 005c43af
    LEA EAX,[ESP + 0x4c]                ; 005c43b6
    PUSH EAX                            ; 005c43ba
    LEA EAX,[ESP + 0x44]                ; 005c43bb
    PUSH EAX                            ; 005c43bf
    MOV ECX,dword ptr [EBX + 0x1fc2c]   ; 005c43c0
    MOV EDX,0x3f060a92                  ; 005c43c6
    PUSH ECX                            ; 005c43cb
    MOV EDI,dword ptr [0x03f6bad8]      ; 005c43cc | INT_03f6bad8
    MOV dword ptr [ESP + 0xc8],EDX      ; 005c43d2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c43d9
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005c43de
    XOR EAX,EAX                         ; 005c43e1
    MOV dword ptr [ESP + 0xac],EAX      ; 005c43e3
    MOV dword ptr [ESP + 0xb0],EAX      ; 005c43ea
    LEA EAX,[ESP + 0xac]                ; 005c43f1
    MOV ECX,0x447a0000                  ; 005c43f8
    PUSH EAX                            ; 005c43fd
    LEA EAX,[ESP + 0x68]                ; 005c43fe
    MOV dword ptr [ESP + 0xb8],ECX      ; 005c4402
    PUSH EAX                            ; 005c4409
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c440a
    PUSH EAX                            ; 005c4410
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005c4411
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005c4416
    MOV EDX,dword ptr [0x006810c8]      ; 005c4419 | g_CDemonSetInstance | g_CDemonSetPtr
    FLD float ptr [ESP + 0x40]          ; 005c441f
    FLD float ptr [ESP + 0x44]          ; 005c4423
    PUSH 0x0                            ; 005c4427
    FLD float ptr [ESP + 0x4c]          ; 005c4429
    PUSH 0x0                            ; 005c442d
    FXCH ST2                            ; 005c442f
    FADD float ptr [ESP + 0x6c]         ; 005c4431
    FXCH                                ; 005c4435
    FADD float ptr [ESP + 0x70]         ; 005c4437
    FXCH ST2                            ; 005c443b
    FADD float ptr [ESP + 0x74]         ; 005c443d
    PUSH 0xff                           ; 005c4441
    FXCH                                ; 005c4446
    FSTP float ptr [ESP + 0x64]         ; 005c4448
    PUSH 0x1                            ; 005c444c
    FXCH                                ; 005c444e
    FSTP float ptr [ESP + 0x6c]         ; 005c4450
    PUSH EDX                            ; 005c4454 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x74]         ; 005c4455
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270 ; 005c4459
        ;   XREF to: 00574270 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270(CDemonSet * this_ptr, float f1, float f2, float f3, ...)
    ADD ESP,0x14                        ; 005c445e
    MOV ECX,dword ptr [EBX + 0x1fc2c]   ; 005c4461
    PUSH ECX                            ; 005c4467
    MOV EAX,[0x006810c8]                ; 005c4468 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005c446d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c446e
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c4473
    LEA ESI,[EBX + 0x1fc08]             ; 005c4476
    PUSH EBX                            ; 005c447c
    MOV EDX,dword ptr [0x006810c8]      ; 005c447d | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 005c4483 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c4484
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c4489
    LEA EAX,[ESP + 0x58]                ; 005c448c
    PUSH EAX                            ; 005c4490
    LEA EAX,[ESP + 0x44]                ; 005c4491
    PUSH EAX                            ; 005c4495
    MOV ECX,dword ptr [0x006810c8]      ; 005c4496 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 005c449c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 005c449d
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0xe0],EAX      ; 005c44a2
    FLD float ptr [ESP + 0xe0]          ; 005c44a9
    ADD ESP,0xc                         ; 005c44b0
    MOV EAX,[0x006810c8]                ; 005c44b3 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005c44b8 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x30]         ; 005c44b9
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005c44bd
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c44c2
    FLDZ                                ; 005c44c5
    FLD float ptr [ESP + 0x2c]          ; 005c44c7
    FSTP double ptr [ESP + 0x18]        ; 005c44cb
    FCOMP double ptr [ESP + 0x18]       ; 005c44cf
    FNSTSW AX                           ; 005c44d3
    SAHF                                ; 005c44d5
    JBE 0x005c473d                      ; 005c44d6
        ;   XREF to: 005c473d (CONDITIONAL_JUMP)  ; LAB_005c473d
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 005c44dc
        ;   Label: LAB_005c44dc
    FLD float ptr [ESP + 0x2c]          ; 005c44e4
        ;   Label: LAB_005c44e4
    FLD float ptr [ESP + 0x64]          ; 005c44e8
    FMUL ST1                            ; 005c44ec
    FLD float ptr [ESP + 0x68]          ; 005c44ee
    FMUL ST2                            ; 005c44f2
    FLD float ptr [ESP + 0x6c]          ; 005c44f4
    FMULP ST3                           ; 005c44f8
    FLD float ptr [ESP + 0x40]          ; 005c44fa
    FLD float ptr [ESP + 0x44]          ; 005c44fe
    FLD float ptr [ESP + 0x48]          ; 005c4502
    LEA EAX,[ESP + 0x34]                ; 005c4506
    LEA EDX,[ESP + 0x58]                ; 005c450a
    FXCH ST4                            ; 005c450e
    FSTP float ptr [ESP + 0xa0]         ; 005c4510
    FXCH ST2                            ; 005c4517
    FSTP float ptr [ESP + 0xa4]         ; 005c4519
    FXCH ST3                            ; 005c4520
    FSTP float ptr [ESP + 0xa8]         ; 005c4522
    FXCH ST2                            ; 005c4529
    FADD float ptr [ESP + 0xa0]         ; 005c452b
    FXCH ST2                            ; 005c4532
    FADD float ptr [ESP + 0xa4]         ; 005c4534
    FXCH                                ; 005c453b
    FADD float ptr [ESP + 0xa8]         ; 005c453d
    FXCH ST2                            ; 005c4544
    FSTP float ptr [ESP + 0x34]         ; 005c4546
    FSTP float ptr [ESP + 0x38]         ; 005c454a
    FSTP float ptr [ESP + 0x3c]         ; 005c454e
    CMP EDX,EAX                         ; 005c4552
    JZ 0x005c456e                       ; 005c4554
        ;   XREF to: 005c456e (CONDITIONAL_JUMP)  ; LAB_005c456e
    MOV EAX,dword ptr [ESP + 0x34]      ; 005c4556
    MOV dword ptr [ESP + 0x58],EAX      ; 005c455a
    MOV EAX,dword ptr [ESP + 0x38]      ; 005c455e
    MOV dword ptr [ESP + 0x5c],EAX      ; 005c4562
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005c4566
    MOV dword ptr [ESP + 0x60],EAX      ; 005c456a
    PUSH EDI                            ; 005c456e
        ;   Label: LAB_005c456e
    LEA EAX,[ESP + 0x80]                ; 005c456f
    PUSH EAX                            ; 005c4576
    LEA EAX,[EBX + 0x158]               ; 005c4577
    PUSH EAX                            ; 005c457d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005c457e
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005c4583
    LEA EAX,[ESP + 0x58]                ; 005c4586
    PUSH EAX                            ; 005c458a
    LEA EAX,[ESP + 0x8c]                ; 005c458b
    PUSH EAX                            ; 005c4592
    PUSH EBX                            ; 005c4593
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c4594
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005c4599
    LEA EAX,[ESP + 0x70]                ; 005c459c
    FLD float ptr [ESP + 0x88]          ; 005c45a0
    FLD float ptr [ESP + 0x8c]          ; 005c45a7
    FLD float ptr [ESP + 0x90]          ; 005c45ae
    PUSH EAX                            ; 005c45b5
    LEA EAX,[ESP + 0x98]                ; 005c45b6
    FXCH ST2                            ; 005c45bd
    FSUB float ptr [ESP + 0x80]         ; 005c45bf
    FXCH                                ; 005c45c6
    FSUB float ptr [ESP + 0x84]         ; 005c45c8
    FXCH ST2                            ; 005c45cf
    FSUB float ptr [ESP + 0x88]         ; 005c45d1
    FXCH                                ; 005c45d8
    FSTP float ptr [ESP + 0x74]         ; 005c45da
    FXCH                                ; 005c45de
    FSTP float ptr [ESP + 0x78]         ; 005c45e0
    PUSH EAX                            ; 005c45e4
    FSTP float ptr [ESP + 0x80]         ; 005c45e5
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005c45ec
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005c45f1
    FLD float ptr [ESP + 0x74]          ; 005c45f4
    FMUL ST0                            ; 005c45f8
    FLD float ptr [ESP + 0x70]          ; 005c45fa
    FMUL ST0                            ; 005c45fe
    FADDP                               ; 005c4600
    FLD float ptr [ESP + 0x78]          ; 005c4602
    FMUL ST0                            ; 005c4606
    FADDP                               ; 005c4608
    FSQRT                               ; 005c460a
    FST float ptr [ESP + 0x28]          ; 005c460c
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c4610
    FST double ptr [ESP]                ; 005c4614
    MOV dword ptr [ESP + 0x30],EAX      ; 005c4617
    FCOMP double ptr [0x00653d14]       ; 005c461b | DOUBLE_00653d14
    FNSTSW AX                           ; 005c4621
    SAHF                                ; 005c4623
    JBE 0x005c4650                      ; 005c4624
        ;   XREF to: 005c4650 (CONDITIONAL_JUMP)  ; LAB_005c4650
    FLD float ptr [ESP + 0x4c]          ; 005c4626
    FCHS                                ; 005c462a
    FSTP float ptr [ESP + 0xc8]         ; 005c462c
    JNC 0x005c4751                      ; 005c4633
        ;   XREF to: 005c4751 (CONDITIONAL_JUMP)  ; LAB_005c4751
    FLD float ptr [ESP + 0x30]          ; 005c4639
        ;   Label: LAB_005c4639
    FST double ptr [ESP + 0x10]         ; 005c463d
    FCOMP double ptr [0x00653d14]       ; 005c4641 | DOUBLE_00653d14
    FNSTSW AX                           ; 005c4647
    SAHF                                ; 005c4649
    JNC 0x005c47f9                      ; 005c464a
        ;   XREF to: 005c47f9 (CONDITIONAL_JUMP)  ; LAB_005c47f9
    MOV EAX,dword ptr [ESP + 0x98]      ; 005c4650
        ;   Label: LAB_005c4650
    MOV dword ptr [ESP + 0xd0],EAX      ; 005c4657
    MOV EAX,dword ptr [ESP + 0x94]      ; 005c465e
    FLD float ptr [ESP + 0x94]          ; 005c4665
    MOV dword ptr [ESP + 0xcc],EAX      ; 005c466c
    FCOMP float ptr [0x00663770]        ; 005c4673 | FLOAT_00663770
    FNSTSW AX                           ; 005c4679
    SAHF                                ; 005c467b
    JNC 0x005c468a                      ; 005c467c
        ;   XREF to: 005c468a (CONDITIONAL_JUMP)  ; LAB_005c468a
    MOV EAX,[0x00663770]                ; 005c467e | FLOAT_00663770
    MOV dword ptr [ESP + 0xcc],EAX      ; 005c4683
    FLD float ptr [ESP + 0xcc]          ; 005c468a
        ;   Label: LAB_005c468a
    FCOMP float ptr [0x00663774]        ; 005c4691 | FLOAT_00663774
    FNSTSW AX                           ; 005c4697
    SAHF                                ; 005c4699
    JBE 0x005c46a8                      ; 005c469a
        ;   XREF to: 005c46a8 (CONDITIONAL_JUMP)  ; LAB_005c46a8
    MOV EAX,[0x00663774]                ; 005c469c | FLOAT_00663774
    MOV dword ptr [ESP + 0xcc],EAX      ; 005c46a1
    FLD float ptr [ESP + 0xd0]          ; 005c46a8
        ;   Label: LAB_005c46a8
    FCOMP float ptr [ESP + 0xc4]        ; 005c46af
    FNSTSW AX                           ; 005c46b6
    SAHF                                ; 005c46b8
    JNC 0x005c46c9                      ; 005c46b9
        ;   XREF to: 005c46c9 (CONDITIONAL_JUMP)  ; LAB_005c46c9
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005c46bb
    MOV dword ptr [ESP + 0xd0],EAX      ; 005c46c2
    FLD float ptr [ESP + 0xd0]          ; 005c46c9
        ;   Label: LAB_005c46c9
    FCOMP float ptr [ESP + 0xbc]        ; 005c46d0
    FNSTSW AX                           ; 005c46d7
    SAHF                                ; 005c46d9
    JA 0x005c489c                       ; 005c46da
        ;   XREF to: 005c489c (CONDITIONAL_JUMP)  ; LAB_005c489c
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005c46e0
        ;   Label: LAB_005c46e0
    MOV dword ptr [ESI + 0x14],0x3f800000 ; 005c46e7
    MOV dword ptr [ESI + 0xc],EAX       ; 005c46ee
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005c46f1
    MOV dword ptr [ESI + 0x8],EAX       ; 005c46f8
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005c46fb
    MOV dword ptr [ESI + 0x4],EAX       ; 005c4702
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005c4705
    MOV dword ptr [ESI],EAX             ; 005c470c
    MOV ESP,EBP                         ; 005c470e
    POP EBP                             ; 005c4710
    POP EDI                             ; 005c4711
    POP ESI                             ; 005c4712
    POP EBX                             ; 005c4713
    RET                                 ; 005c4714
    MOV ECX,0x653cd4                    ; 005c4715 | = "..\\core\\stranger.cpp"
        ;   Label: LAB_005c4715
    MOV ESI,0x10c0                      ; 005c471a
    PUSH 0x653ce9                       ; 005c471f | = "CStranger::aimLeftPistol - no weapon?"
    MOV dword ptr [0x02f0ca48],ECX      ; 005c4724 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005c472a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005c4730
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005c4735
    JMP 0x005c438f                      ; 005c4738
        ;   XREF to: 005c438f (UNCONDITIONAL_JUMP)  ; LAB_005c438f
    FLD1                                ; 005c473d
        ;   Label: LAB_005c473d
    FCOMP double ptr [ESP + 0x18]       ; 005c473f
    FNSTSW AX                           ; 005c4743
    SAHF                                ; 005c4745
    JC 0x005c44dc                       ; 005c4746
        ;   XREF to: 005c44dc (CONDITIONAL_JUMP)  ; LAB_005c44dc
    JMP 0x005c44e4                      ; 005c474c
        ;   XREF to: 005c44e4 (UNCONDITIONAL_JUMP)  ; LAB_005c44e4
    FLD float ptr [ESP + 0x28]          ; 005c4751
        ;   Label: LAB_005c4751
    FMUL ST0                            ; 005c4755
    FLD float ptr [ESP + 0xc8]          ; 005c4757
    FMUL ST0                            ; 005c475e
    FSUBP                               ; 005c4760
    FSQRT                               ; 005c4762
    FDIV double ptr [ESP]               ; 005c4764
    FLD1                                ; 005c4767
    FXCH                                ; 005c4769
    FSTP double ptr [ESP + 0x20]        ; 005c476b
    FCOMP double ptr [ESP + 0x20]       ; 005c476f
    FNSTSW AX                           ; 005c4773
    SAHF                                ; 005c4775
    JBE 0x005c4639                      ; 005c4776
        ;   XREF to: 005c4639 (CONDITIONAL_JUMP)  ; LAB_005c4639
    FLDZ                                ; 005c477c
    FCOMP double ptr [ESP + 0x20]       ; 005c477e
    FNSTSW AX                           ; 005c4782
    SAHF                                ; 005c4784
    JA 0x005c4639                       ; 005c4785
        ;   XREF to: 005c4639 (CONDITIONAL_JUMP)  ; LAB_005c4639
    FLD double ptr [ESP + 0x20]         ; 005c478b
    CALL crt_math.c_acos_FUN_00600162   ; 005c478f
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FLDZ                                ; 005c4794
    FXCH                                ; 005c4796
    FSTP float ptr [ESP + 0xc0]         ; 005c4798
    FCOMP float ptr [ESP + 0xc8]        ; 005c479f
    FNSTSW AX                           ; 005c47a6
    SAHF                                ; 005c47a8
    JBE 0x005c47e9                      ; 005c47a9
        ;   XREF to: 005c47e9 (CONDITIONAL_JUMP)  ; LAB_005c47e9
    FLD float ptr [ESP + 0x98]          ; 005c47ab
    FSUB float ptr [ESP + 0xc0]         ; 005c47b2
    FSTP float ptr [ESP + 0x98]         ; 005c47b9
        ;   Label: LAB_005c47b9
    PUSH dword ptr [ESP + 0x98]         ; 005c47c0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c47c7
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xd8],EAX      ; 005c47cc
    FLD float ptr [ESP + 0xd8]          ; 005c47d3
    ADD ESP,0x4                         ; 005c47da
    FSTP float ptr [ESP + 0x98]         ; 005c47dd
    JMP 0x005c4639                      ; 005c47e4
        ;   XREF to: 005c4639 (UNCONDITIONAL_JUMP)  ; LAB_005c4639
    FLD float ptr [ESP + 0x98]          ; 005c47e9
        ;   Label: LAB_005c47e9
    FADD float ptr [ESP + 0xc0]         ; 005c47f0
    JMP 0x005c47b9                      ; 005c47f7
        ;   XREF to: 005c47b9 (UNCONDITIONAL_JUMP)  ; LAB_005c47b9
    FLD float ptr [ESP + 0x30]          ; 005c47f9
        ;   Label: LAB_005c47f9
    FMUL ST0                            ; 005c47fd
    FLD float ptr [ESP + 0x50]          ; 005c47ff
    FMUL ST0                            ; 005c4803
    FSUBP                               ; 005c4805
    FSQRT                               ; 005c4807
    FDIV double ptr [ESP + 0x10]        ; 005c4809
    FLD1                                ; 005c480d
    FXCH                                ; 005c480f
    FSTP double ptr [ESP + 0x8]         ; 005c4811
    FCOMP double ptr [ESP + 0x8]        ; 005c4815
    FNSTSW AX                           ; 005c4819
    SAHF                                ; 005c481b
    JBE 0x005c4650                      ; 005c481c
        ;   XREF to: 005c4650 (CONDITIONAL_JUMP)  ; LAB_005c4650
    FLDZ                                ; 005c4822
    FCOMP double ptr [ESP + 0x8]        ; 005c4824
    FNSTSW AX                           ; 005c4828
    SAHF                                ; 005c482a
    JA 0x005c4650                       ; 005c482b
        ;   XREF to: 005c4650 (CONDITIONAL_JUMP)  ; LAB_005c4650
    FLD double ptr [ESP + 0x8]          ; 005c4831
    CALL crt_math.c_acos_FUN_00600162   ; 005c4835
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FLDZ                                ; 005c483a
    FXCH                                ; 005c483c
    FSTP float ptr [ESP + 0xb8]         ; 005c483e
    FCOMP float ptr [ESP + 0x50]        ; 005c4845
    FNSTSW AX                           ; 005c4849
    SAHF                                ; 005c484b
    JBE 0x005c488c                      ; 005c484c
        ;   XREF to: 005c488c (CONDITIONAL_JUMP)  ; LAB_005c488c
    FLD float ptr [ESP + 0x94]          ; 005c484e
    FSUB float ptr [ESP + 0xb8]         ; 005c4855
    FSTP float ptr [ESP + 0x94]         ; 005c485c
        ;   Label: LAB_005c485c
    PUSH dword ptr [ESP + 0x94]         ; 005c4863
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c486a
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xd8],EAX      ; 005c486f
    FLD float ptr [ESP + 0xd8]          ; 005c4876
    ADD ESP,0x4                         ; 005c487d
    FSTP float ptr [ESP + 0x94]         ; 005c4880
    JMP 0x005c4650                      ; 005c4887
        ;   XREF to: 005c4650 (UNCONDITIONAL_JUMP)  ; LAB_005c4650
    FLD float ptr [ESP + 0x94]          ; 005c488c
        ;   Label: LAB_005c488c
    FADD float ptr [ESP + 0xb8]         ; 005c4893
    JMP 0x005c485c                      ; 005c489a
        ;   XREF to: 005c485c (UNCONDITIONAL_JUMP)  ; LAB_005c485c
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005c489c
        ;   Label: LAB_005c489c
    MOV dword ptr [ESP + 0xd0],EAX      ; 005c48a3
    JMP 0x005c46e0                      ; 005c48aa
        ;   XREF to: 005c46e0 (UNCONDITIONAL_JUMP)  ; LAB_005c46e0

