; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041f360(CBoxActor *this_ptr,float delta_time)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_process_FUN_00420420 at 00420439
;
; Referenced Globals:
;   undefined4 DAT_005b74f1
;   undefined4 DAT_005b74f5
;   undefined4 DAT_005b74f9
;   undefined4 DAT_005b7501
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_box.cpp_CBox_process_FUN_0041b410
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_setcolid.cpp_FUN_0053ed10
;   core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;   sound_sndmain.cpp_popSfxOptions_FUN_00556050
;   sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f360
        ;   Label: core_boxactor.cpp_CBoxActor_process_FUN_0041f360
    PUSH ESI                            ; 0041f361
    PUSH EDI                            ; 0041f362
    PUSH EBP                            ; 0041f363
    MOV EBP,ESP                         ; 0041f364
    SUB ESP,0x13c                       ; 0041f366
    AND ESP,0xfffffff8                  ; 0041f36c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041f36f
    CMP byte ptr [EBX + 0x664],0x0      ; 0041f372
    JNZ 0x0041f81d                      ; 0041f379
        ;   XREF to: 0041f81d (CONDITIONAL_JUMP)  ; LAB_0041f81d
    LEA EAX,[EBX + 0x158]               ; 0041f37f
        ;   Label: LAB_0041f37f
    PUSH EAX                            ; 0041f385
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0041f386
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x30c]         ; 0041f38b
    ADD ESP,0x4                         ; 0041f391
    MOV ESI,dword ptr [EAX + 0x100]     ; 0041f394
    FADD float ptr [EBX + 0x310]        ; 0041f39a
    SUB ESP,0x8                         ; 0041f3a0
    FST float ptr [EBX + 0x310]         ; 0041f3a3
    FSTP double ptr [ESP]               ; 0041f3a9
    CALL crt_math.c_floor_FUN_005a3600  ; 0041f3ac
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x12c],EAX     ; 0041f3b1
    MOV dword ptr [ESP + 0x130],EDX     ; 0041f3b8
    FLD double ptr [ESP + 0x12c]        ; 0041f3bf
    ADD ESP,0x8                         ; 0041f3c6
    CALL crt_math.c_round_FUN_005a3120  ; 0041f3c9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x130]       ; 0041f3ce
    MOV EAX,dword ptr [ESP + 0x130]     ; 0041f3d5
    MOV dword ptr [ESP + 0x134],EAX     ; 0041f3dc
    FILD dword ptr [ESP + 0x134]        ; 0041f3e3
    FSUBR float ptr [EBX + 0x310]       ; 0041f3ea
    MOV EDI,ESI                         ; 0041f3f0
    FSTP float ptr [ESP + 0x12c]        ; 0041f3f2
    TEST EAX,EAX                        ; 0041f3f9
    JL 0x0041f860                       ; 0041f3fb
        ;   XREF to: 0041f860 (CONDITIONAL_JUMP)  ; LAB_0041f860
    MOV EDX,EAX                         ; 0041f401
    SAR EDX,0x1f                        ; 0041f403
    IDIV ESI                            ; 0041f406
    MOV dword ptr [ESP + 0x130],EDX     ; 0041f408
    MOV EAX,dword ptr [ESP + 0x130]     ; 0041f40f
        ;   Label: LAB_0041f40f
    MOV dword ptr [ESP + 0x134],EAX     ; 0041f416
    MOV dword ptr [ESP + 0x138],EDI     ; 0041f41d
    FILD dword ptr [ESP + 0x134]        ; 0041f424
    FADD float ptr [ESP + 0x12c]        ; 0041f42b
    FILD dword ptr [ESP + 0x138]        ; 0041f432
    FXCH                                ; 0041f439
    FSTP float ptr [EBX + 0x310]        ; 0041f43b
    FCOMP float ptr [EBX + 0x310]       ; 0041f441
    FNSTSW AX                           ; 0041f447
    SAHF                                ; 0041f449
    JA 0x0041f456                       ; 0041f44a
        ;   XREF to: 0041f456 (CONDITIONAL_JUMP)  ; LAB_0041f456
    MOV dword ptr [EBX + 0x310],0x0     ; 0041f44c
    LEA EAX,[EBX + 0x300]               ; 0041f456
        ;   Label: LAB_0041f456
    FLD float ptr [EBP + 0x18]          ; 0041f45c
    FLD float ptr [EAX]                 ; 0041f45f
    FMUL ST1                            ; 0041f461
    FLD float ptr [EAX + 0x4]           ; 0041f463
    FMUL ST2                            ; 0041f466
    FLD float ptr [EAX + 0x8]           ; 0041f468
    FMULP ST3                           ; 0041f46b
    LEA EDI,[ESP + 0xc4]                ; 0041f46d
    LEA ESI,[ESP + 0x88]                ; 0041f474
    FXCH                                ; 0041f47b
    FSTP float ptr [ESP + 0x88]         ; 0041f47d
    FSTP float ptr [ESP + 0x8c]         ; 0041f484
    FSTP float ptr [ESP + 0x90]         ; 0041f48b
    MOVSD ES:EDI,ESI                    ; 0041f492
    MOVSD ES:EDI,ESI                    ; 0041f493
    MOVSD ES:EDI,ESI                    ; 0041f494
    FLD float ptr [0x005b74f1]          ; 0041f495 | DAT_005b74f1
    FLD float ptr [ESP + 0xc4]          ; 0041f49b
    FMUL ST1                            ; 0041f4a2
    FLD float ptr [ESP + 0xc8]          ; 0041f4a4
    FMUL ST2                            ; 0041f4ab
    FLD float ptr [ESP + 0xcc]          ; 0041f4ad
    FMULP ST3                           ; 0041f4b4
    LEA EAX,[EBX + 0x30]                ; 0041f4b6
    LEA EDI,[ESP + 0xd0]                ; 0041f4b9
    LEA ESI,[ESP + 0xdc]                ; 0041f4c0
    FXCH                                ; 0041f4c7
    FSTP float ptr [ESP + 0xdc]         ; 0041f4c9
    FSTP float ptr [ESP + 0xe0]         ; 0041f4d0
    FSTP float ptr [ESP + 0xe4]         ; 0041f4d7
    MOVSD ES:EDI,ESI                    ; 0041f4de
    MOVSD ES:EDI,ESI                    ; 0041f4df
    MOVSD ES:EDI,ESI                    ; 0041f4e0
    FLD float ptr [EAX]                 ; 0041f4e1
    FLD float ptr [EAX + 0x4]           ; 0041f4e3
    FLD float ptr [EAX + 0x8]           ; 0041f4e6
    FXCH ST2                            ; 0041f4e9
    FADD float ptr [ESP + 0xd0]         ; 0041f4eb
    FXCH                                ; 0041f4f2
    FADD float ptr [ESP + 0xd4]         ; 0041f4f4
    FXCH ST2                            ; 0041f4fb
    FADD float ptr [ESP + 0xd8]         ; 0041f4fd
    FXCH                                ; 0041f504
    FSTP float ptr [EAX]                ; 0041f506
    FXCH                                ; 0041f508
    FSTP float ptr [EAX + 0x4]          ; 0041f50a
    FSTP float ptr [EAX + 0x8]          ; 0041f50d
    PUSH dword ptr [EBX + 0x30]         ; 0041f510
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0041f513
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x13c],EAX     ; 0041f518
    FLD float ptr [ESP + 0x13c]         ; 0041f51f
    ADD ESP,0x4                         ; 0041f526
    PUSH dword ptr [EBX + 0x38]         ; 0041f529
    FSTP float ptr [EBX + 0x30]         ; 0041f52c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0041f52f
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x13c],EAX     ; 0041f534
    FLD float ptr [ESP + 0x13c]         ; 0041f53b
    ADD ESP,0x4                         ; 0041f542
    PUSH dword ptr [EBX + 0x34]         ; 0041f545
    FSTP float ptr [EBX + 0x38]         ; 0041f548
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0041f54b
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x13c],EAX     ; 0041f550
    MOV DL,byte ptr [EBX + 0x2d4]       ; 0041f557
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0041f55d
    MOV dword ptr [EBX + 0x34],EAX      ; 0041f564
    ADD ESP,0x4                         ; 0041f567
    TEST DL,DL                          ; 0041f56a
    JZ 0x0041f58c                       ; 0041f56c
        ;   XREF to: 0041f58c (CONDITIONAL_JUMP)  ; LAB_0041f58c
    MOV ESI,dword ptr [EBX + 0x2fc]     ; 0041f56e
    PUSH ESI                            ; 0041f574
    MOV EDI,dword ptr [0x006045f8]      ; 0041f575 | DAT_006045f8
    PUSH EDI                            ; 0041f57b
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 0041f57c
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0041f581
    TEST EAX,EAX                        ; 0041f584
    JZ 0x0041f877                       ; 0041f586
        ;   XREF to: 0041f877 (CONDITIONAL_JUMP)  ; LAB_0041f877
    CMP dword ptr [EBX + 0x318],0x0     ; 0041f58c
        ;   Label: LAB_0041f58c
    JNZ 0x0041f7e5                      ; 0041f593
        ;   XREF to: 0041f7e5 (CONDITIONAL_JUMP)  ; LAB_0041f7e5
    FLD float ptr [EBX + 0x390]         ; 0041f599
    FLDZ                                ; 0041f59f
    FCOMPP                              ; 0041f5a1
    FNSTSW AX                           ; 0041f5a3
    SAHF                                ; 0041f5a5
    JNC 0x0041f7e5                      ; 0041f5a6
        ;   XREF to: 0041f7e5 (CONDITIONAL_JUMP)  ; LAB_0041f7e5
    PUSH dword ptr [EBP + 0x18]         ; 0041f5ac
    LEA EDI,[ESP + 0xa4]                ; 0041f5af
    LEA EAX,[EBX + 0x394]               ; 0041f5b6
    LEA ESI,[EBX + 0x20]                ; 0041f5bc
    PUSH EAX                            ; 0041f5bf
    MOVSD ES:EDI,ESI                    ; 0041f5c0
    MOVSD ES:EDI,ESI                    ; 0041f5c1
    MOVSD ES:EDI,ESI                    ; 0041f5c2
    CALL core_box.cpp_CBox_process_FUN_0041b410 ; 0041f5c3
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041b410(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x30]                ; 0041f5c8
    LEA ESI,[EBX + 0x3a0]               ; 0041f5cb
    ADD ESP,0x8                         ; 0041f5d1
    CMP EAX,ESI                         ; 0041f5d4
    JZ 0x0041f5e8                       ; 0041f5d6
        ;   XREF to: 0041f5e8 (CONDITIONAL_JUMP)  ; LAB_0041f5e8
    MOV EDX,dword ptr [ESI]             ; 0041f5d8
    MOV dword ptr [EAX],EDX             ; 0041f5da
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041f5dc
    MOV dword ptr [EAX + 0x4],EDX       ; 0041f5df
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041f5e2
    MOV dword ptr [EAX + 0x8],EDX       ; 0041f5e5
    PUSH EBX                            ; 0041f5e8
        ;   Label: LAB_0041f5e8
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0041f5e9
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041f5ee
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041f5f1
    PUSH EBX                            ; 0041f5f7
    LEA ESI,[ESP + 0x44]                ; 0041f5f8
    LEA EDI,[ESP + 0x5c]                ; 0041f5fc
    CALL dword ptr [EAX + 0x1c]         ; 0041f600
    MOV ECX,0x6                         ; 0041f603
    LEA ESI,[ESP + 0x44]                ; 0041f608
    ADD ESP,0x4                         ; 0041f60c
    MOVSD.REP ES:EDI,ESI                ; 0041f60f
    LEA EAX,[ESP + 0x58]                ; 0041f611
    FLD float ptr [ESP + 0x58]          ; 0041f615
    FLD float ptr [ESP + 0x5c]          ; 0041f619
    FLD float ptr [ESP + 0x60]          ; 0041f61d
    LEA EDI,[ESP + 0x94]                ; 0041f621
    LEA ESI,[ESP + 0x118]               ; 0041f628
    FXCH ST2                            ; 0041f62f
    FADD float ptr [EAX + 0xc]          ; 0041f631
    FXCH                                ; 0041f634
    FADD float ptr [EAX + 0x10]         ; 0041f636
    FXCH ST2                            ; 0041f639
    FADD float ptr [EAX + 0x14]         ; 0041f63b
    FXCH                                ; 0041f63e
    FSTP float ptr [ESP + 0x118]        ; 0041f640
    FXCH                                ; 0041f647
    FSTP float ptr [ESP + 0x11c]        ; 0041f649
    FSTP float ptr [ESP + 0x120]        ; 0041f650
    MOVSD ES:EDI,ESI                    ; 0041f657
    MOVSD ES:EDI,ESI                    ; 0041f658
    MOVSD ES:EDI,ESI                    ; 0041f659
    FLD float ptr [0x005b74f5]          ; 0041f65a | DAT_005b74f5
    FLD float ptr [ESP + 0x94]          ; 0041f660
    FMUL ST1                            ; 0041f667
    FLD float ptr [ESP + 0x98]          ; 0041f669
    FMUL ST2                            ; 0041f670
    FLD float ptr [ESP + 0x9c]          ; 0041f672
    FMULP ST3                           ; 0041f679
    LEA EAX,[ESP + 0xac]                ; 0041f67b
    LEA EDI,[ESP + 0x100]               ; 0041f682
    LEA ESI,[ESP + 0xe8]                ; 0041f689
    FXCH                                ; 0041f690
    FSTP float ptr [ESP + 0xe8]         ; 0041f692
    FSTP float ptr [ESP + 0xec]         ; 0041f699
    FSTP float ptr [ESP + 0xf0]         ; 0041f6a0
    MOVSD ES:EDI,ESI                    ; 0041f6a7
    MOVSD ES:EDI,ESI                    ; 0041f6a8
    MOVSD ES:EDI,ESI                    ; 0041f6a9
    PUSH EAX                            ; 0041f6aa
    FLD float ptr [ESP + 0x104]         ; 0041f6ab
    FLD float ptr [ESP + 0x108]         ; 0041f6b2
    FLD float ptr [ESP + 0x10c]         ; 0041f6b9
    LEA EDI,[ESP + 0xb0]                ; 0041f6c0
    LEA ESI,[ESP + 0xbc]                ; 0041f6c7
    FXCH ST2                            ; 0041f6ce
    FCHS                                ; 0041f6d0
    FXCH                                ; 0041f6d2
    FCHS                                ; 0041f6d4
    FXCH ST2                            ; 0041f6d6
    FCHS                                ; 0041f6d8
    FXCH                                ; 0041f6da
    FSTP float ptr [ESP + 0xbc]         ; 0041f6dc
    FXCH                                ; 0041f6e3
    FSTP float ptr [ESP + 0xc0]         ; 0041f6e5
    FSTP float ptr [ESP + 0xc4]         ; 0041f6ec
    MOVSD ES:EDI,ESI                    ; 0041f6f3
    MOVSD ES:EDI,ESI                    ; 0041f6f4
    MOVSD ES:EDI,ESI                    ; 0041f6f5
    PUSH EBX                            ; 0041f6f6
    LEA ESI,[ESP + 0xfc]                ; 0041f6f7
    LEA EDI,[ESP + 0x78]                ; 0041f6fe
    CALL core_actor.cpp_FUN_00408b00    ; 0041f702
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xfc]                ; 0041f707
    ADD ESP,0x8                         ; 0041f70e
    LEA EAX,[EBX + 0x394]               ; 0041f711
    MOVSD ES:EDI,ESI                    ; 0041f717
    MOVSD ES:EDI,ESI                    ; 0041f718
    MOVSD ES:EDI,ESI                    ; 0041f719
    FLD float ptr [EAX]                 ; 0041f71a
    FLD float ptr [EAX + 0x4]           ; 0041f71c
    FLD float ptr [EAX + 0x8]           ; 0041f71f
    LEA EDI,[ESP + 0x7c]                ; 0041f722
    LEA ESI,[ESP + 0x10c]               ; 0041f726
    FXCH ST2                            ; 0041f72d
    FADD float ptr [ESP + 0x70]         ; 0041f72f
    FXCH                                ; 0041f733
    FADD float ptr [ESP + 0x74]         ; 0041f735
    FXCH ST2                            ; 0041f739
    FADD float ptr [ESP + 0x78]         ; 0041f73b
    FXCH                                ; 0041f73f
    FSTP float ptr [ESP + 0x10c]        ; 0041f741
    FXCH                                ; 0041f748
    FSTP float ptr [ESP + 0x110]        ; 0041f74a
    FSTP float ptr [ESP + 0x114]        ; 0041f751
    MOVSD ES:EDI,ESI                    ; 0041f758
    MOVSD ES:EDI,ESI                    ; 0041f759
    MOVSD ES:EDI,ESI                    ; 0041f75a
    LEA ESI,[EBX + 0x20]                ; 0041f75b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0041f75e
    MOV dword ptr [ESI],EAX             ; 0041f762
    MOV EAX,dword ptr [ESP + 0x80]      ; 0041f764
    MOV dword ptr [ESI + 0x4],EAX       ; 0041f76b
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041f76e
    MOV dword ptr [ESI + 0x8],EAX       ; 0041f775
    LEA EAX,[EBX + 0x3d4]               ; 0041f778
    FLD float ptr [EAX + 0x4]           ; 0041f77e
    FMUL ST0                            ; 0041f781
    FLD float ptr [EAX]                 ; 0041f783
    FMUL ST0                            ; 0041f785
    FADDP                               ; 0041f787
    FLD float ptr [EAX + 0x8]           ; 0041f789
    FMUL ST0                            ; 0041f78c
    FADDP                               ; 0041f78e
    FSQRT                               ; 0041f790
    FST float ptr [ESP]                 ; 0041f792
    FCOMP double ptr [0x005b74f9]       ; 0041f795 | DAT_005b74f9
    FNSTSW AX                           ; 0041f79b
    SAHF                                ; 0041f79d
    JBE 0x0041f7e5                      ; 0041f79e
        ;   XREF to: 0041f7e5 (CONDITIONAL_JUMP)  ; LAB_0041f7e5
    LEA EAX,[ESP + 0x4]                 ; 0041f7a0
    PUSH EAX                            ; 0041f7a4
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0041f7a5
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0041f7aa
    LEA EAX,[ESP + 0x4]                 ; 0041f7ad
    FLD float ptr [ESP]                 ; 0041f7b1
    FMUL float ptr [EBX + 0x390]        ; 0041f7b4
    PUSH EAX                            ; 0041f7ba
    FMUL float ptr [0x005b7501]         ; 0041f7bb | DAT_005b7501
    PUSH ESI                            ; 0041f7c1
    LEA EAX,[ESP + 0xa8]                ; 0041f7c2
    MOV EDX,dword ptr [0x00603b28]      ; 0041f7c9 | g_CDemonSetPtr
    PUSH EAX                            ; 0041f7cf
    MOV dword ptr [ESP + 0x44],EBX      ; 0041f7d0
    MOV dword ptr [ESP + 0x48],EBX      ; 0041f7d4
    PUSH EDX                            ; 0041f7d8
    FSTP float ptr [ESP + 0x18]         ; 0041f7d9
    CALL core_setcolid.cpp_FUN_0053ed10 ; 0041f7dd
        ;   XREF to: 0053ed10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ed10()
    ADD ESP,0x10                        ; 0041f7e2
    FLD float ptr [EBX + 0x6dc]         ; 0041f7e5
        ;   Label: LAB_0041f7e5
    FLDZ                                ; 0041f7eb
    FCOMPP                              ; 0041f7ed
    FNSTSW AX                           ; 0041f7ef
    SAHF                                ; 0041f7f1
    JNC 0x0041f803                      ; 0041f7f2
        ;   XREF to: 0041f803 (CONDITIONAL_JUMP)  ; LAB_0041f803
    FLD float ptr [EBX + 0x6dc]         ; 0041f7f4
    FSUB float ptr [EBP + 0x18]         ; 0041f7fa
    FSTP float ptr [EBX + 0x6dc]        ; 0041f7fd
    FLD float ptr [EBX + 0x6dc]         ; 0041f803
        ;   Label: LAB_0041f803
    FLDZ                                ; 0041f809
    FCOMPP                              ; 0041f80b
    FNSTSW AX                           ; 0041f80d
    SAHF                                ; 0041f80f
    JA 0x0041f8cd                       ; 0041f810
        ;   XREF to: 0041f8cd (CONDITIONAL_JUMP)  ; LAB_0041f8cd
    MOV ESP,EBP                         ; 0041f816
    POP EBP                             ; 0041f818
    POP EDI                             ; 0041f819
    POP ESI                             ; 0041f81a
    POP EBX                             ; 0041f81b
    RET                                 ; 0041f81c
    LEA EAX,[EBX + 0x664]               ; 0041f81d
        ;   Label: LAB_0041f81d
    PUSH EAX                            ; 0041f823
    MOV EDX,dword ptr [0x005fba60]      ; 0041f824 | DAT_005fba60
    PUSH EDX                            ; 0041f82a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0041f82b
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0041f830
    TEST EAX,EAX                        ; 0041f833
    JZ 0x0041f37f                       ; 0041f835
        ;   XREF to: 0041f37f (CONDITIONAL_JUMP)  ; LAB_0041f37f
    MOV dword ptr [EBX + 0xfc],0x1      ; 0041f83b
    MOV dword ptr [EBX + 0xf8],0x0      ; 0041f845
    MOV EAX,dword ptr [EBX + 0x6e0]     ; 0041f84f
    MOV dword ptr [EBX + 0x6dc],EAX     ; 0041f855
    JMP 0x0041f37f                      ; 0041f85b
        ;   XREF to: 0041f37f (UNCONDITIONAL_JUMP)  ; LAB_0041f37f
    NEG EAX                             ; 0041f860
        ;   Label: LAB_0041f860
    MOV EDX,EAX                         ; 0041f862
    SAR EDX,0x1f                        ; 0041f864
    IDIV ESI                            ; 0041f867
    SUB ESI,EDX                         ; 0041f869
    MOV dword ptr [ESP + 0x130],ESI     ; 0041f86b
    JMP 0x0041f40f                      ; 0041f872
        ;   XREF to: 0041f40f (UNCONDITIONAL_JUMP)  ; LAB_0041f40f
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0041f877
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
        ;   Label: LAB_0041f877
    PUSH 0x2                            ; 0041f87c
    PUSH 0x3f800000                     ; 0041f87e
    PUSH 0x0                            ; 0041f883
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0041f885
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x144],EAX     ; 0041f88a
    FLD float ptr [ESP + 0x144]         ; 0041f891
    ADD ESP,0x8                         ; 0041f898
    SUB ESP,0x8                         ; 0041f89b
    FSTP double ptr [ESP]               ; 0041f89e
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60 ; 0041f8a1
        ;   XREF to: 00555f60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0041f8a6
    LEA EAX,[EBX + 0x2d4]               ; 0041f8a9
    PUSH EAX                            ; 0041f8af
    MOV EDX,dword ptr [EBX + 0x154]     ; 0041f8b0
    PUSH EBX                            ; 0041f8b6
    CALL dword ptr [EDX + 0x2c]         ; 0041f8b7
    ADD ESP,0x8                         ; 0041f8ba
    MOV dword ptr [EBX + 0x2fc],EAX     ; 0041f8bd
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0041f8c3
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    JMP 0x0041f58c                      ; 0041f8c8
        ;   XREF to: 0041f58c (UNCONDITIONAL_JUMP)  ; LAB_0041f58c
    MOV dword ptr [EBX + 0x6dc],0x0     ; 0041f8cd
        ;   Label: LAB_0041f8cd
    MOV ESP,EBP                         ; 0041f8d7
    POP EBP                             ; 0041f8d9
    POP EDI                             ; 0041f8da
    POP ESI                             ; 0041f8db
    POP EBX                             ; 0041f8dc
    RET                                 ; 0041f8dd

