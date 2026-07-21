; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_004f3430(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_pendulum.cpp_CPendulum_process_FUN_004f3a20 at 004f3a74
;
; Referenced Globals:
;   undefined4 DAT_0058d034
;   undefined4 DAT_0058d038
;   undefined4 DAT_0058d040
;   undefined4 DAT_0058d048
;   undefined4 DAT_0058d050
;   undefined4 DAT_0058d058
;   undefined4 DAT_0058d060
;   undefined4 DAT_0058d068
;   undefined4 DAT_0058d070
;   undefined4 DAT_0058d078
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
;   crt_math.c_floor_FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3430
        ;   Label: core_pendulum.cpp_CPendulum_updateSwing_FUN_004f3430
    PUSH ESI                            ; 004f3431
    PUSH EDI                            ; 004f3432
    PUSH EBP                            ; 004f3433
    MOV EBP,ESP                         ; 004f3434
    SUB ESP,0x58                        ; 004f3436
    AND ESP,0xfffffff8                  ; 004f3439
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f343c
    FLD float ptr [EBX + 0x398]         ; 004f343f
    FSTP double ptr [ESP + 0x44]        ; 004f3445
    MOV EDX,dword ptr [ESP + 0x48]      ; 004f3449
    PUSH EDX                            ; 004f344d
    MOV ECX,dword ptr [ESP + 0x48]      ; 004f344e
    PUSH ECX                            ; 004f3452
    CALL crt_math.c_floor_FUN_005648c0  ; 004f3453
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 004f3458
    MOV dword ptr [ESP + 0x58],EDX      ; 004f345c
    FLD double ptr [ESP + 0x54]         ; 004f3460
    ADD ESP,0x8                         ; 004f3464
    FLD float ptr [EBP + 0x18]          ; 004f3467
    FDIV float ptr [EBX + 0x39c]        ; 004f346a
    MOV ESI,dword ptr [EBX + 0x434]     ; 004f3470
    FXCH                                ; 004f3476
    FSUBR double ptr [ESP + 0x44]       ; 004f3478
    FXCH                                ; 004f347c
    FADD float ptr [EBX + 0x398]        ; 004f347e
    FXCH                                ; 004f3484
    FSTP float ptr [ESP + 0x24]         ; 004f3486
    FSTP float ptr [EBX + 0x398]        ; 004f348a
    TEST ESI,ESI                        ; 004f3490
    JZ 0x004f34b5                       ; 004f3492
        ;   XREF to: 004f34b5 (CONDITIONAL_JUMP)  ; LAB_004f34b5
    FLD float ptr [EBX + 0x398]         ; 004f3494
    FLD1                                ; 004f349a
    FCOMPP                              ; 004f349c
    FNSTSW AX                           ; 004f349e
    SAHF                                ; 004f34a0
    JNC 0x004f34b5                      ; 004f34a1
        ;   XREF to: 004f34b5 (CONDITIONAL_JUMP)  ; LAB_004f34b5
    FLD float ptr [EBX + 0x398]         ; 004f34a3
    FADD float ptr [0x0058d034]         ; 004f34a9 | DAT_0058d034
    FSTP float ptr [EBX + 0x398]        ; 004f34af
    SUB ESP,0x8                         ; 004f34b5
        ;   Label: LAB_004f34b5
    FLD float ptr [EBX + 0x398]         ; 004f34b8
    FSTP double ptr [ESP]               ; 004f34be
    CALL crt_math.c_floor_FUN_005648c0  ; 004f34c1
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 004f34c6
    MOV dword ptr [ESP + 0x58],EDX      ; 004f34ca
    FLD double ptr [ESP + 0x54]         ; 004f34ce
    ADD ESP,0x8                         ; 004f34d2
    FSUBR float ptr [EBX + 0x398]       ; 004f34d5
    FST float ptr [EBX + 0x398]         ; 004f34db
    FMUL double ptr [0x0058d038]        ; 004f34e1 | DAT_0058d038
    FMUL double ptr [0x0058d040]        ; 004f34e7 | DAT_0058d040
    FSIN                                ; 004f34ed
    FMUL float ptr [EBX + 0x3a0]        ; 004f34ef
    FLD float ptr [EBX + 0x42c]         ; 004f34f5
    FADD float ptr [EBP + 0x18]         ; 004f34fb
    FLD float ptr [EBX + 0x428]         ; 004f34fe
    FMUL double ptr [0x0058d048]        ; 004f3504 | DAT_0058d048
    FXCH                                ; 004f350a
    FST float ptr [EBX + 0x42c]         ; 004f350c
    FMULP                               ; 004f3512
    FLD1                                ; 004f3514
    FLDL2E                              ; 004f3516
    FMUL ST2                            ; 004f3518
    FST ST2                             ; 004f351a
    FPREM                               ; 004f351c
    F2XM1                               ; 004f351e
    FADDP                               ; 004f3520
    FSCALE                              ; 004f3522
    FSTP ST1                            ; 004f3524
    FMULP                               ; 004f3526
    PUSH EBX                            ; 004f3528
    FSTP float ptr [EBX + 0x38]         ; 004f3529
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004f352c
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 004f3531
    LEA EAX,[EBX + 0x408]               ; 004f3534
    PUSH EAX                            ; 004f353a
    LEA EAX,[ESP + 0x3c]                ; 004f353b
    PUSH EAX                            ; 004f353f
    PUSH EBX                            ; 004f3540
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004f3541
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    LEA EDX,[EBX + 0x414]               ; 004f3546
    ADD ESP,0xc                         ; 004f354c
    CMP EDX,EAX                         ; 004f354f
    JZ 0x004f3563                       ; 004f3551
        ;   XREF to: 004f3563 (CONDITIONAL_JUMP)  ; LAB_004f3563
    MOV ECX,dword ptr [EAX]             ; 004f3553
    MOV dword ptr [EDX],ECX             ; 004f3555
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f3557
    MOV dword ptr [EDX + 0x4],ECX       ; 004f355a
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f355d
    MOV dword ptr [EDX + 0x8],ECX       ; 004f3560
    FLD float ptr [EBX + 0x428]         ; 004f3563
        ;   Label: LAB_004f3563
    FMUL double ptr [0x0058d048]        ; 004f3569 | DAT_0058d048
    FMUL float ptr [EBX + 0x42c]        ; 004f356f
    FLD1                                ; 004f3575
    FLDL2E                              ; 004f3577
    FMUL ST2                            ; 004f3579
    FST ST2                             ; 004f357b
    FPREM                               ; 004f357d
    F2XM1                               ; 004f357f
    FADDP                               ; 004f3581
    FSCALE                              ; 004f3583
    FSTP ST1                            ; 004f3585
    FLD float ptr [EBP + 0x18]          ; 004f3587
    FLDZ                                ; 004f358a
    FXCH ST2                            ; 004f358c
    FSTP float ptr [ESP + 0xc]          ; 004f358e
    FXCH                                ; 004f3592
    FCOMPP                              ; 004f3594
    FNSTSW AX                           ; 004f3596
    SAHF                                ; 004f3598
    JNC 0x004f37ec                      ; 004f3599
        ;   XREF to: 004f37ec (CONDITIONAL_JUMP)  ; LAB_004f37ec
    FLD float ptr [ESP + 0xc]           ; 004f359f
    FCOMP double ptr [0x0058d050]       ; 004f35a3 | DAT_0058d050
    FNSTSW AX                           ; 004f35a9
    SAHF                                ; 004f35ab
    JBE 0x004f37ec                      ; 004f35ac
        ;   XREF to: 004f37ec (CONDITIONAL_JUMP)  ; LAB_004f37ec
    FLD float ptr [ESP + 0x24]          ; 004f35b2
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f35b6
    XOR EDI,EDI                         ; 004f35ba
    MOV dword ptr [ESP + 0x20],EAX      ; 004f35bc
    MOV EAX,dword ptr [EBX + 0x398]     ; 004f35c0
    MOV dword ptr [ESP + 0x34],EDI      ; 004f35c6
    MOV dword ptr [ESP + 0x28],EAX      ; 004f35ca
    FCOMP double ptr [0x0058d058]       ; 004f35ce | DAT_0058d058
    FNSTSW AX                           ; 004f35d4
    SAHF                                ; 004f35d6
    JC 0x004f37f3                       ; 004f35d7
        ;   XREF to: 004f37f3 (CONDITIONAL_JUMP)  ; LAB_004f37f3
    FLD float ptr [ESP + 0x34]          ; 004f35dd
        ;   Label: LAB_004f35dd
    FADD double ptr [0x0058d060]        ; 004f35e1 | DAT_0058d060
    FLD float ptr [ESP + 0x20]          ; 004f35e7
    FCOMPP                              ; 004f35eb
    FNSTSW AX                           ; 004f35ed
    SAHF                                ; 004f35ef
    JBE 0x004f3600                      ; 004f35f0
        ;   XREF to: 004f3600 (CONDITIONAL_JUMP)  ; LAB_004f3600
    FLD float ptr [ESP + 0x20]          ; 004f35f2
    FADD float ptr [0x0058d068]         ; 004f35f6 | DAT_0058d068
    FSTP float ptr [ESP + 0x20]         ; 004f35fc
    FLD float ptr [ESP + 0x20]          ; 004f3600
        ;   Label: LAB_004f3600
    FCOMP float ptr [ESP + 0x34]        ; 004f3604
    FNSTSW AX                           ; 004f3608
    SAHF                                ; 004f360a
    JBE 0x004f3802                      ; 004f360b
        ;   XREF to: 004f3802 (CONDITIONAL_JUMP)  ; LAB_004f3802
    FLD float ptr [EBX + 0x3c4]         ; 004f3611
        ;   Label: LAB_004f3611
    FADD double ptr [0x0058d070]        ; 004f3617 | DAT_0058d070
    FSTP float ptr [ESP + 0x54]         ; 004f361d
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f3621
    FLD float ptr [ESP + 0x54]          ; 004f3625
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f3629
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f362d
    FADD double ptr [0x0058d058]        ; 004f3631 | DAT_0058d058
    MOV dword ptr [ESP + 0x14],EAX      ; 004f3637
    MOV EAX,dword ptr [EBX + 0x398]     ; 004f363b
    FLD float ptr [ESP + 0x24]          ; 004f3641
    MOV dword ptr [ESP + 0x4],EAX       ; 004f3645
    FCOMPP                              ; 004f3649
    FNSTSW AX                           ; 004f364b
    SAHF                                ; 004f364d
    JNC 0x004f365a                      ; 004f364e
        ;   XREF to: 004f365a (CONDITIONAL_JUMP)  ; LAB_004f365a
    FLD1                                ; 004f3650
    FADD float ptr [ESP + 0x24]         ; 004f3652
    FSTP float ptr [ESP + 0x14]         ; 004f3656
    FLD float ptr [ESP + 0x2c]          ; 004f365a
        ;   Label: LAB_004f365a
    FADD double ptr [0x0058d060]        ; 004f365e | DAT_0058d060
    FLD float ptr [ESP + 0x14]          ; 004f3664
    FCOMPP                              ; 004f3668
    FNSTSW AX                           ; 004f366a
    SAHF                                ; 004f366c
    JBE 0x004f367d                      ; 004f366d
        ;   XREF to: 004f367d (CONDITIONAL_JUMP)  ; LAB_004f367d
    FLD float ptr [ESP + 0x14]          ; 004f366f
    FADD float ptr [0x0058d068]         ; 004f3673 | DAT_0058d068
    FSTP float ptr [ESP + 0x14]         ; 004f3679
    FLD float ptr [ESP + 0x14]          ; 004f367d
        ;   Label: LAB_004f367d
    FCOMP float ptr [ESP + 0x2c]        ; 004f3681
    FNSTSW AX                           ; 004f3685
    SAHF                                ; 004f3687
    JBE 0x004f38a4                      ; 004f3688
        ;   XREF to: 004f38a4 (CONDITIONAL_JUMP)  ; LAB_004f38a4
    FLD float ptr [ESP + 0x24]          ; 004f368e
        ;   Label: LAB_004f368e
    MOV EDX,0x3f000000                  ; 004f3692
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f3697
    FLDZ                                ; 004f369b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f369d
    MOV EAX,dword ptr [EBX + 0x398]     ; 004f36a1
    MOV dword ptr [ESP + 0x10],EDX      ; 004f36a7
    MOV dword ptr [ESP + 0x8],EAX       ; 004f36ab
    FCOMPP                              ; 004f36af
    FNSTSW AX                           ; 004f36b1
    SAHF                                ; 004f36b3
    JBE 0x004f36c0                      ; 004f36b4
        ;   XREF to: 004f36c0 (CONDITIONAL_JUMP)  ; LAB_004f36c0
    FLD1                                ; 004f36b6
    FADD float ptr [ESP + 0x24]         ; 004f36b8
    FSTP float ptr [ESP + 0x1c]         ; 004f36bc
    FLD float ptr [ESP + 0x10]          ; 004f36c0
        ;   Label: LAB_004f36c0
    FADD double ptr [0x0058d060]        ; 004f36c4 | DAT_0058d060
    FLD float ptr [ESP + 0x1c]          ; 004f36ca
    FCOMPP                              ; 004f36ce
    FNSTSW AX                           ; 004f36d0
    SAHF                                ; 004f36d2
    JBE 0x004f36e3                      ; 004f36d3
        ;   XREF to: 004f36e3 (CONDITIONAL_JUMP)  ; LAB_004f36e3
    FLD float ptr [ESP + 0x1c]          ; 004f36d5
    FADD float ptr [0x0058d068]         ; 004f36d9 | DAT_0058d068
    FSTP float ptr [ESP + 0x1c]         ; 004f36df
    FLD float ptr [ESP + 0x1c]          ; 004f36e3
        ;   Label: LAB_004f36e3
    FCOMP float ptr [ESP + 0x10]        ; 004f36e7
    FNSTSW AX                           ; 004f36eb
    SAHF                                ; 004f36ed
    JBE 0x004f394f                      ; 004f36ee
        ;   XREF to: 004f394f (CONDITIONAL_JUMP)  ; LAB_004f394f
    FLD float ptr [EBX + 0x3c4]         ; 004f36f4
        ;   Label: LAB_004f36f4
    FADD double ptr [0x0058d078]        ; 004f36fa | DAT_0058d078
    FSTP float ptr [ESP + 0x54]         ; 004f3700
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f3704
    FLD float ptr [ESP + 0x54]          ; 004f3708
    MOV dword ptr [ESP + 0x30],EAX      ; 004f370c
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f3710
    FADD double ptr [0x0058d058]        ; 004f3714 | DAT_0058d058
    MOV dword ptr [ESP + 0x18],EAX      ; 004f371a
    MOV EAX,dword ptr [EBX + 0x398]     ; 004f371e
    FLD float ptr [ESP + 0x24]          ; 004f3724
    MOV dword ptr [ESP],EAX             ; 004f3728
    FCOMPP                              ; 004f372b
    FNSTSW AX                           ; 004f372d
    SAHF                                ; 004f372f
    JNC 0x004f373c                      ; 004f3730
        ;   XREF to: 004f373c (CONDITIONAL_JUMP)  ; LAB_004f373c
    FLD1                                ; 004f3732
    FADD float ptr [ESP + 0x24]         ; 004f3734
    FSTP float ptr [ESP + 0x18]         ; 004f3738
    FLD float ptr [ESP + 0x30]          ; 004f373c
        ;   Label: LAB_004f373c
    FADD double ptr [0x0058d060]        ; 004f3740 | DAT_0058d060
    FLD float ptr [ESP + 0x18]          ; 004f3746
    FCOMPP                              ; 004f374a
    FNSTSW AX                           ; 004f374c
    SAHF                                ; 004f374e
    JBE 0x004f375f                      ; 004f374f
        ;   XREF to: 004f375f (CONDITIONAL_JUMP)  ; LAB_004f375f
    FLD float ptr [ESP + 0x18]          ; 004f3751
    FADD float ptr [0x0058d068]         ; 004f3755 | DAT_0058d068
    FSTP float ptr [ESP + 0x18]         ; 004f375b
    FLD float ptr [ESP + 0x18]          ; 004f375f
        ;   Label: LAB_004f375f
    FCOMP float ptr [ESP + 0x30]        ; 004f3763
    FNSTSW AX                           ; 004f3767
    SAHF                                ; 004f3769
    JA 0x004f37ec                       ; 004f376a
        ;   XREF to: 004f37ec (CONDITIONAL_JUMP)  ; LAB_004f37ec
    FLD float ptr [ESP]                 ; 004f3770
    FCOMP float ptr [ESP + 0x18]        ; 004f3773
    FNSTSW AX                           ; 004f3777
    SAHF                                ; 004f3779
    JNC 0x004f3784                      ; 004f377a
        ;   XREF to: 004f3784 (CONDITIONAL_JUMP)  ; LAB_004f3784
    FLD1                                ; 004f377c
    FADD float ptr [ESP]                ; 004f377e
    FSTP float ptr [ESP]                ; 004f3781
    FLD float ptr [ESP]                 ; 004f3784
        ;   Label: LAB_004f3784
    FCOMP float ptr [ESP + 0x18]        ; 004f3787
    FNSTSW AX                           ; 004f378b
    SAHF                                ; 004f378d
    JNC 0x004f3798                      ; 004f378e
        ;   XREF to: 004f3798 (CONDITIONAL_JUMP)  ; LAB_004f3798
    FLD1                                ; 004f3790
    FADD float ptr [ESP]                ; 004f3792
    FSTP float ptr [ESP]                ; 004f3795
    FLD float ptr [ESP + 0x18]          ; 004f3798
        ;   Label: LAB_004f3798
    FLD1                                ; 004f379c
    FADDP                               ; 004f379e
    FLD float ptr [ESP]                 ; 004f37a0
    FCOMPP                              ; 004f37a3
    FNSTSW AX                           ; 004f37a5
    SAHF                                ; 004f37a7
    JBE 0x004f37b6                      ; 004f37a8
        ;   XREF to: 004f37b6 (CONDITIONAL_JUMP)  ; LAB_004f37b6
    FLD float ptr [ESP]                 ; 004f37aa
    FADD float ptr [0x0058d068]         ; 004f37ad | DAT_0058d068
    FSTP float ptr [ESP]                ; 004f37b3
    FLD float ptr [ESP + 0x18]          ; 004f37b6
        ;   Label: LAB_004f37b6
    FLD1                                ; 004f37ba
    FADDP                               ; 004f37bc
    FLD float ptr [ESP]                 ; 004f37be
    FCOMPP                              ; 004f37c1
    FNSTSW AX                           ; 004f37c3
    SAHF                                ; 004f37c5
    JBE 0x004f37d4                      ; 004f37c6
        ;   XREF to: 004f37d4 (CONDITIONAL_JUMP)  ; LAB_004f37d4
    FLD float ptr [ESP]                 ; 004f37c8
    FADD float ptr [0x0058d068]         ; 004f37cb | DAT_0058d068
    FSTP float ptr [ESP]                ; 004f37d1
    FLD float ptr [ESP]                 ; 004f37d4
        ;   Label: LAB_004f37d4
    FCOMP float ptr [ESP + 0x30]        ; 004f37d7
    FNSTSW AX                           ; 004f37db
    SAHF                                ; 004f37dd
    SETA AL                             ; 004f37de
    AND EAX,0xff                        ; 004f37e1
    JNZ 0x004f39f1                      ; 004f37e6
        ;   XREF to: 004f39f1 (CONDITIONAL_JUMP)  ; LAB_004f39f1
    MOV ESP,EBP                         ; 004f37ec
        ;   Label: LAB_004f37ec
    POP EBP                             ; 004f37ee
    POP EDI                             ; 004f37ef
    POP ESI                             ; 004f37f0
    POP EBX                             ; 004f37f1
    RET                                 ; 004f37f2
    FLD1                                ; 004f37f3
        ;   Label: LAB_004f37f3
    FADD float ptr [ESP + 0x24]         ; 004f37f5
    FSTP float ptr [ESP + 0x20]         ; 004f37f9
    JMP 0x004f35dd                      ; 004f37fd
        ;   XREF to: 004f35dd (UNCONDITIONAL_JUMP)  ; LAB_004f35dd
    FLD float ptr [ESP + 0x28]          ; 004f3802
        ;   Label: LAB_004f3802
    FCOMP float ptr [ESP + 0x20]        ; 004f3806
    FNSTSW AX                           ; 004f380a
    SAHF                                ; 004f380c
    JNC 0x004f3819                      ; 004f380d
        ;   XREF to: 004f3819 (CONDITIONAL_JUMP)  ; LAB_004f3819
    FLD1                                ; 004f380f
    FADD float ptr [ESP + 0x28]         ; 004f3811
    FSTP float ptr [ESP + 0x28]         ; 004f3815
    FLD float ptr [ESP + 0x28]          ; 004f3819
        ;   Label: LAB_004f3819
    FCOMP float ptr [ESP + 0x20]        ; 004f381d
    FNSTSW AX                           ; 004f3821
    SAHF                                ; 004f3823
    JNC 0x004f3830                      ; 004f3824
        ;   XREF to: 004f3830 (CONDITIONAL_JUMP)  ; LAB_004f3830
    FLD1                                ; 004f3826
    FADD float ptr [ESP + 0x28]         ; 004f3828
    FSTP float ptr [ESP + 0x28]         ; 004f382c
    FLD float ptr [ESP + 0x20]          ; 004f3830
        ;   Label: LAB_004f3830
    FLD1                                ; 004f3834
    FADDP                               ; 004f3836
    FLD float ptr [ESP + 0x28]          ; 004f3838
    FCOMPP                              ; 004f383c
    FNSTSW AX                           ; 004f383e
    SAHF                                ; 004f3840
    JBE 0x004f3851                      ; 004f3841
        ;   XREF to: 004f3851 (CONDITIONAL_JUMP)  ; LAB_004f3851
    FLD float ptr [ESP + 0x28]          ; 004f3843
    FADD float ptr [0x0058d068]         ; 004f3847 | DAT_0058d068
    FSTP float ptr [ESP + 0x28]         ; 004f384d
    FLD float ptr [ESP + 0x20]          ; 004f3851
        ;   Label: LAB_004f3851
    FLD1                                ; 004f3855
    FADDP                               ; 004f3857
    FLD float ptr [ESP + 0x28]          ; 004f3859
    FCOMPP                              ; 004f385d
    FNSTSW AX                           ; 004f385f
    SAHF                                ; 004f3861
    JBE 0x004f3872                      ; 004f3862
        ;   XREF to: 004f3872 (CONDITIONAL_JUMP)  ; LAB_004f3872
    FLD float ptr [ESP + 0x28]          ; 004f3864
    FADD float ptr [0x0058d068]         ; 004f3868 | DAT_0058d068
    FSTP float ptr [ESP + 0x28]         ; 004f386e
    FLD float ptr [ESP + 0x28]          ; 004f3872
        ;   Label: LAB_004f3872
    FCOMP float ptr [ESP + 0x34]        ; 004f3876
    FNSTSW AX                           ; 004f387a
    SAHF                                ; 004f387c
    SETA AL                             ; 004f387d
    AND EAX,0xff                        ; 004f3880
    JZ 0x004f3611                       ; 004f3885
        ;   XREF to: 004f3611 (CONDITIONAL_JUMP)  ; LAB_004f3611
    LEA EAX,[EBX + 0x3c8]               ; 004f388b
    PUSH EAX                            ; 004f3891
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004f3892
    PUSH EBX                            ; 004f3898
    CALL dword ptr [EDX + 0x24]         ; 004f3899
    ADD ESP,0x8                         ; 004f389c
    JMP 0x004f3611                      ; 004f389f
        ;   XREF to: 004f3611 (UNCONDITIONAL_JUMP)  ; LAB_004f3611
    FLD float ptr [ESP + 0x4]           ; 004f38a4
        ;   Label: LAB_004f38a4
    FCOMP float ptr [ESP + 0x14]        ; 004f38a8
    FNSTSW AX                           ; 004f38ac
    SAHF                                ; 004f38ae
    JNC 0x004f38bb                      ; 004f38af
        ;   XREF to: 004f38bb (CONDITIONAL_JUMP)  ; LAB_004f38bb
    FLD1                                ; 004f38b1
    FADD float ptr [ESP + 0x4]          ; 004f38b3
    FSTP float ptr [ESP + 0x4]          ; 004f38b7
    FLD float ptr [ESP + 0x4]           ; 004f38bb
        ;   Label: LAB_004f38bb
    FCOMP float ptr [ESP + 0x14]        ; 004f38bf
    FNSTSW AX                           ; 004f38c3
    SAHF                                ; 004f38c5
    JNC 0x004f38d2                      ; 004f38c6
        ;   XREF to: 004f38d2 (CONDITIONAL_JUMP)  ; LAB_004f38d2
    FLD1                                ; 004f38c8
    FADD float ptr [ESP + 0x4]          ; 004f38ca
    FSTP float ptr [ESP + 0x4]          ; 004f38ce
    FLD float ptr [ESP + 0x14]          ; 004f38d2
        ;   Label: LAB_004f38d2
    FLD1                                ; 004f38d6
    FADDP                               ; 004f38d8
    FLD float ptr [ESP + 0x4]           ; 004f38da
    FCOMPP                              ; 004f38de
    FNSTSW AX                           ; 004f38e0
    SAHF                                ; 004f38e2
    JBE 0x004f38f3                      ; 004f38e3
        ;   XREF to: 004f38f3 (CONDITIONAL_JUMP)  ; LAB_004f38f3
    FLD float ptr [ESP + 0x4]           ; 004f38e5
    FADD float ptr [0x0058d068]         ; 004f38e9 | DAT_0058d068
    FSTP float ptr [ESP + 0x4]          ; 004f38ef
    FLD float ptr [ESP + 0x14]          ; 004f38f3
        ;   Label: LAB_004f38f3
    FLD1                                ; 004f38f7
    FADDP                               ; 004f38f9
    FLD float ptr [ESP + 0x4]           ; 004f38fb
    FCOMPP                              ; 004f38ff
    FNSTSW AX                           ; 004f3901
    SAHF                                ; 004f3903
    JBE 0x004f3914                      ; 004f3904
        ;   XREF to: 004f3914 (CONDITIONAL_JUMP)  ; LAB_004f3914
    FLD float ptr [ESP + 0x4]           ; 004f3906
    FADD float ptr [0x0058d068]         ; 004f390a | DAT_0058d068
    FSTP float ptr [ESP + 0x4]          ; 004f3910
    FLD float ptr [ESP + 0x4]           ; 004f3914
        ;   Label: LAB_004f3914
    FCOMP float ptr [ESP + 0x2c]        ; 004f3918
    FNSTSW AX                           ; 004f391c
    SAHF                                ; 004f391e
    SETA AL                             ; 004f391f
    AND EAX,0xff                        ; 004f3922
    JZ 0x004f368e                       ; 004f3927
        ;   XREF to: 004f368e (CONDITIONAL_JUMP)  ; LAB_004f368e
    LEA EAX,[EBX + 0x414]               ; 004f392d
    PUSH EAX                            ; 004f3933
    LEA EAX,[EBX + 0x3a4]               ; 004f3934
    PUSH EAX                            ; 004f393a
    PUSH EBX                            ; 004f393b
    MOV EAX,[0x005bed68]                ; 004f393c | DAT_005bed68
    PUSH EAX                            ; 004f3941
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90 ; 004f3942
        ;   XREF to: 0052ea90 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90()
    ADD ESP,0x10                        ; 004f3947
    JMP 0x004f368e                      ; 004f394a
        ;   XREF to: 004f368e (UNCONDITIONAL_JUMP)  ; LAB_004f368e
    FLD float ptr [ESP + 0x8]           ; 004f394f
        ;   Label: LAB_004f394f
    FCOMP float ptr [ESP + 0x1c]        ; 004f3953
    FNSTSW AX                           ; 004f3957
    SAHF                                ; 004f3959
    JNC 0x004f3966                      ; 004f395a
        ;   XREF to: 004f3966 (CONDITIONAL_JUMP)  ; LAB_004f3966
    FLD1                                ; 004f395c
    FADD float ptr [ESP + 0x8]          ; 004f395e
    FSTP float ptr [ESP + 0x8]          ; 004f3962
    FLD float ptr [ESP + 0x8]           ; 004f3966
        ;   Label: LAB_004f3966
    FCOMP float ptr [ESP + 0x1c]        ; 004f396a
    FNSTSW AX                           ; 004f396e
    SAHF                                ; 004f3970
    JNC 0x004f397d                      ; 004f3971
        ;   XREF to: 004f397d (CONDITIONAL_JUMP)  ; LAB_004f397d
    FLD1                                ; 004f3973
    FADD float ptr [ESP + 0x8]          ; 004f3975
    FSTP float ptr [ESP + 0x8]          ; 004f3979
    FLD float ptr [ESP + 0x1c]          ; 004f397d
        ;   Label: LAB_004f397d
    FLD1                                ; 004f3981
    FADDP                               ; 004f3983
    FLD float ptr [ESP + 0x8]           ; 004f3985
    FCOMPP                              ; 004f3989
    FNSTSW AX                           ; 004f398b
    SAHF                                ; 004f398d
    JBE 0x004f399e                      ; 004f398e
        ;   XREF to: 004f399e (CONDITIONAL_JUMP)  ; LAB_004f399e
    FLD float ptr [ESP + 0x8]           ; 004f3990
    FADD float ptr [0x0058d068]         ; 004f3994 | DAT_0058d068
    FSTP float ptr [ESP + 0x8]          ; 004f399a
    FLD float ptr [ESP + 0x1c]          ; 004f399e
        ;   Label: LAB_004f399e
    FLD1                                ; 004f39a2
    FADDP                               ; 004f39a4
    FLD float ptr [ESP + 0x8]           ; 004f39a6
    FCOMPP                              ; 004f39aa
    FNSTSW AX                           ; 004f39ac
    SAHF                                ; 004f39ae
    JBE 0x004f39bf                      ; 004f39af
        ;   XREF to: 004f39bf (CONDITIONAL_JUMP)  ; LAB_004f39bf
    FLD float ptr [ESP + 0x8]           ; 004f39b1
    FADD float ptr [0x0058d068]         ; 004f39b5 | DAT_0058d068
    FSTP float ptr [ESP + 0x8]          ; 004f39bb
    FLD float ptr [ESP + 0x8]           ; 004f39bf
        ;   Label: LAB_004f39bf
    FCOMP float ptr [ESP + 0x10]        ; 004f39c3
    FNSTSW AX                           ; 004f39c7
    SAHF                                ; 004f39c9
    SETA AL                             ; 004f39ca
    AND EAX,0xff                        ; 004f39cd
    JZ 0x004f36f4                       ; 004f39d2
        ;   XREF to: 004f36f4 (CONDITIONAL_JUMP)  ; LAB_004f36f4
    LEA EAX,[EBX + 0x3e8]               ; 004f39d8
    PUSH EAX                            ; 004f39de
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004f39df
    PUSH EBX                            ; 004f39e5
    CALL dword ptr [EDX + 0x24]         ; 004f39e6
    ADD ESP,0x8                         ; 004f39e9
    JMP 0x004f36f4                      ; 004f39ec
        ;   XREF to: 004f36f4 (UNCONDITIONAL_JUMP)  ; LAB_004f36f4
    LEA EAX,[EBX + 0x414]               ; 004f39f1
        ;   Label: LAB_004f39f1
    PUSH EAX                            ; 004f39f7
    LEA EAX,[EBX + 0x3a4]               ; 004f39f8
    PUSH EAX                            ; 004f39fe
    PUSH EBX                            ; 004f39ff
    MOV ECX,dword ptr [0x005bed68]      ; 004f3a00 | DAT_005bed68
    PUSH ECX                            ; 004f3a06
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90 ; 004f3a07
        ;   XREF to: 0052ea90 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90()
    ADD ESP,0x10                        ; 004f3a0c
    MOV ESP,EBP                         ; 004f3a0f
    POP EBP                             ; 004f3a11
    POP EDI                             ; 004f3a12
    POP ESI                             ; 004f3a13
    POP EBX                             ; 004f3a14
    RET                                 ; 004f3a15

