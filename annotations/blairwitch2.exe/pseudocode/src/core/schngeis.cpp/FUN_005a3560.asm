; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_schngeis_cpp_FUN_005a3560(CDemonActor *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0196
;   TerminatedCString s_Animation_005f019c
;   TerminatedCString s_Chasing_005f01a6
;   TerminatedCString s_LeapAttack_005f01ae
;   undefined4 DAT_005f01ba
;   undefined4 DAT_005f01be
;   undefined4 DAT_005f01c2
;   undefined4 DAT_005f01c6
;   undefined4 DAT_005f01ce
;   undefined4 DAT_005f01d6
;   undefined4 DAT_005ff350
;   undefined4 DAT_005ff354
;   undefined4 DAT_00614d30
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_FUN_00546a90
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   core_xform.cpp_FUN_00591530
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3560
        ;   Label: core_schngeis.cpp_FUN_005a3560
    PUSH ESI                            ; 005a3561
    PUSH EDI                            ; 005a3562
    PUSH EBP                            ; 005a3563
    MOV EBP,ESP                         ; 005a3564
    SUB ESP,0x190                       ; 005a3566
    SUB EBP,0xe2                        ; 005a356c
    MOV EBX,dword ptr [EBP + 0xf6]      ; 005a3572
    PUSH 0x5f0196                       ; 005a3578 | = "Death"
    LEA ESI,[EBX + 0x10af8]             ; 005a357d
    PUSH ESI                            ; 005a3583
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a3584
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a3589
    TEST EAX,EAX                        ; 005a358c
    JNZ 0x005a38c9                      ; 005a358e
        ;   XREF to: 005a38c9 (CONDITIONAL_JUMP)  ; LAB_005a38c9
    PUSH EBX                            ; 005a3594
        ;   Label: LAB_005a3594
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a3595
    CALL dword ptr [EAX + 0x17c]        ; 005a359b
    ADD ESP,0x4                         ; 005a35a1
    MOV EDX,dword ptr [EBX + 0x11850]   ; 005a35a4
        ;   Label: LAB_005a35a4
    PUSH EDX                            ; 005a35aa
    LEA EAX,[EBX + 0x2b4]               ; 005a35ab
    LEA ESI,[EBP + 0x1e]                ; 005a35b1
    PUSH EAX                            ; 005a35b4
    LEA EDI,[EBP + 0xffffff6a]          ; 005a35b5
    MOV dword ptr [EBP + 0xde],EAX      ; 005a35bb
    CALL core_skeleton.cpp_FUN_00546a90 ; 005a35c1
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 005a35c6
    LEA EAX,[EBP + 0xffffff6a]          ; 005a35c9
    LEA ESI,[EBP + 0x1e]                ; 005a35cf
    PUSH EAX                            ; 005a35d2
    MOVSD ES:EDI,ESI                    ; 005a35d3
    MOVSD ES:EDI,ESI                    ; 005a35d4
    MOVSD ES:EDI,ESI                    ; 005a35d5
    PUSH EBX                            ; 005a35d6
    LEA ESI,[EBP + 0x2a]                ; 005a35d7
    LEA EDI,[EBP + -0x7e]               ; 005a35da
    CALL core_actor.cpp_FUN_00408d70    ; 005a35dd
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0x2a]                ; 005a35e2
    MOVSD ES:EDI,ESI                    ; 005a35e5
    MOVSD ES:EDI,ESI                    ; 005a35e6
    MOVSD ES:EDI,ESI                    ; 005a35e7
    ADD ESP,0x8                         ; 005a35e8
    MOV ESI,dword ptr [EBX + 0x11854]   ; 005a35eb
    PUSH ESI                            ; 005a35f1
    MOV EDI,dword ptr [EBP + 0xde]      ; 005a35f2
    PUSH EDI                            ; 005a35f8
    LEA ESI,[EBP + 0x36]                ; 005a35f9
    CALL core_skeleton.cpp_FUN_00546a90 ; 005a35fc
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EDI,[EBP + 0xffffff76]          ; 005a3601
    ADD ESP,0x8                         ; 005a3607
    LEA EAX,[EBP + 0xffffff76]          ; 005a360a
    LEA ESI,[EBP + 0x36]                ; 005a3610
    PUSH EAX                            ; 005a3613
    MOVSD ES:EDI,ESI                    ; 005a3614
    MOVSD ES:EDI,ESI                    ; 005a3615
    MOVSD ES:EDI,ESI                    ; 005a3616
    PUSH EBX                            ; 005a3617
    LEA ESI,[EBP + 0x6]                 ; 005a3618
    LEA EDI,[EBP + 0xba]                ; 005a361b
    CALL core_actor.cpp_FUN_00408d70    ; 005a3621
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0x6]                 ; 005a3626
    MOVSD ES:EDI,ESI                    ; 005a3629
    MOVSD ES:EDI,ESI                    ; 005a362a
    MOVSD ES:EDI,ESI                    ; 005a362b
    FLD float ptr [EBP + 0xba]          ; 005a362c
    FLD float ptr [EBP + 0xbe]          ; 005a3632
    FLD float ptr [EBP + 0xc2]          ; 005a3638
    LEA EDI,[EBP + -0x72]               ; 005a363e
    LEA ESI,[EBP + 0xa2]                ; 005a3641
    FXCH ST2                            ; 005a3647
    FSUB float ptr [EBP + -0x7e]        ; 005a3649
    FXCH                                ; 005a364c
    FSUB float ptr [EBP + -0x7a]        ; 005a364e
    FXCH ST2                            ; 005a3651
    FSUB float ptr [EBP + -0x76]        ; 005a3653
    FXCH                                ; 005a3656
    FSTP float ptr [EBP + 0xa2]         ; 005a3658
    FXCH                                ; 005a365e
    FSTP float ptr [EBP + 0xa6]         ; 005a3660
    FSTP float ptr [EBP + 0xaa]         ; 005a3666
    MOVSD ES:EDI,ESI                    ; 005a366c
    MOVSD ES:EDI,ESI                    ; 005a366d
    MOVSD ES:EDI,ESI                    ; 005a366e
    FLD float ptr [EBP + -0x6e]         ; 005a366f
    FMUL ST0                            ; 005a3672
    FLD float ptr [EBP + -0x72]         ; 005a3674
    FMUL ST0                            ; 005a3677
    FADDP                               ; 005a3679
    FLD float ptr [EBP + -0x6a]         ; 005a367b
    FMUL ST0                            ; 005a367e
    FADDP                               ; 005a3680
    FSQRT                               ; 005a3682
    FLD float ptr [0x005f01ba]          ; 005a3684 | DAT_005f01ba
    FLD float ptr [EBP + -0x72]         ; 005a368a
    FMUL ST1                            ; 005a368d
    FLD float ptr [EBP + -0x6e]         ; 005a368f
    FMUL ST2                            ; 005a3692
    FLD float ptr [EBP + -0x6a]         ; 005a3694
    FMULP ST3                           ; 005a3697
    FLD float ptr [EBP + -0x7e]         ; 005a3699
    FXCH ST2                            ; 005a369c
    FSTP float ptr [EBP + 0x66]         ; 005a369e
    FLD float ptr [EBP + -0x7a]         ; 005a36a1
    FXCH                                ; 005a36a4
    FSTP float ptr [EBP + 0x6a]         ; 005a36a6
    FLD float ptr [EBP + -0x76]         ; 005a36a9
    LEA EDI,[EBP + 0x12]                ; 005a36ac
    LEA ESI,[EBP + 0x66]                ; 005a36af
    FXCH ST3                            ; 005a36b2
    FSTP float ptr [EBP + 0x6e]         ; 005a36b4
    FLDZ                                ; 005a36b7
    MOVSD ES:EDI,ESI                    ; 005a36b9
    MOVSD ES:EDI,ESI                    ; 005a36ba
    MOVSD ES:EDI,ESI                    ; 005a36bb
    ADD ESP,0x8                         ; 005a36bc
    LEA EDI,[EBP + -0x4e]               ; 005a36bf
    LEA ESI,[EBP + 0x5a]                ; 005a36c2
    FXCH ST2                            ; 005a36c5
    FADD float ptr [EBP + 0x12]         ; 005a36c7
    FXCH                                ; 005a36ca
    FADD float ptr [EBP + 0x16]         ; 005a36cc
    FXCH ST3                            ; 005a36cf
    FADD float ptr [EBP + 0x1a]         ; 005a36d1
    FXCH                                ; 005a36d4
    FSTP float ptr [EBP + 0x5a]         ; 005a36d6
    FXCH ST2                            ; 005a36d9
    FSTP float ptr [EBP + 0x5e]         ; 005a36db
    FXCH                                ; 005a36de
    FSTP float ptr [EBP + 0x62]         ; 005a36e0
    MOVSD ES:EDI,ESI                    ; 005a36e3
    MOVSD ES:EDI,ESI                    ; 005a36e4
    MOVSD ES:EDI,ESI                    ; 005a36e5
    FXCH                                ; 005a36e6
    FSTP float ptr [EBP + 0xd6]         ; 005a36e8
    FCOMP float ptr [EBP + 0xd6]        ; 005a36ee
    FNSTSW AX                           ; 005a36f4
    SAHF                                ; 005a36f6
    JNC 0x005a38e4                      ; 005a36f7
        ;   XREF to: 005a38e4 (CONDITIONAL_JUMP)  ; LAB_005a38e4
    FLD1                                ; 005a36fd
    FLD float ptr [EBP + -0x72]         ; 005a36ff
    FXCH                                ; 005a3702
    FDIV float ptr [EBP + 0xd6]         ; 005a3704
    FXCH                                ; 005a370a
    FMUL ST1                            ; 005a370c
    FLD float ptr [EBP + -0x6e]         ; 005a370e
    FMUL ST2                            ; 005a3711
    FLD float ptr [EBP + -0x6a]         ; 005a3713
    FMULP ST3                           ; 005a3716
    FXCH                                ; 005a3718
    FSTP float ptr [EBP + -0x72]        ; 005a371a
    FSTP float ptr [EBP + -0x6e]        ; 005a371d
    FSTP float ptr [EBP + -0x6a]        ; 005a3720
    FLD float ptr [0x005f01be]          ; 005a3723 | DAT_005f01be
        ;   Label: LAB_005a3723
    FLD float ptr [EBP + -0x72]         ; 005a3729
    FMUL ST1                            ; 005a372c
    FLD float ptr [EBP + -0x6e]         ; 005a372e
    FMUL ST2                            ; 005a3731
    FLD float ptr [EBP + -0x6a]         ; 005a3733
    FMULP ST3                           ; 005a3736
    MOV EDI,0xbf800000                  ; 005a3738
    XOR ESI,ESI                         ; 005a373d
    LEA EAX,[EBP + -0x72]               ; 005a373f
    MOV dword ptr [EBP + -0x42],ESI     ; 005a3742
    MOV dword ptr [EBP + -0x3e],EDI     ; 005a3745
    MOV dword ptr [EBP + -0x3a],ESI     ; 005a3748
    FSTP float ptr [EBP + -0x6e]        ; 005a374b
    FXCH                                ; 005a374e
    FSTP float ptr [EBP + -0x6a]        ; 005a3750
    LEA ESI,[EBP + -0x42]               ; 005a3753
    FSTP float ptr [EBP + -0x72]        ; 005a3756
    CMP EAX,ESI                         ; 005a3759
    JZ 0x005a3768                       ; 005a375b
        ;   XREF to: 005a3768 (CONDITIONAL_JUMP)  ; LAB_005a3768
    XOR EDX,EDX                         ; 005a375d
    MOV dword ptr [EBP + -0x6e],EDI     ; 005a375f
    MOV dword ptr [EBP + -0x6a],EDX     ; 005a3762
    MOV dword ptr [EBP + -0x72],EDX     ; 005a3765
    LEA EAX,[EBX + 0x11354]             ; 005a3768
        ;   Label: LAB_005a3768
    FLD float ptr [EBP + 0xfa]          ; 005a376e
    FLD float ptr [EAX]                 ; 005a3774
    FMUL ST1                            ; 005a3776
    FLD float ptr [EAX + 0x4]           ; 005a3778
    FMUL ST2                            ; 005a377b
    FLD float ptr [EAX + 0x8]           ; 005a377d
    FMULP ST3                           ; 005a3780
    LEA EDI,[EBP + -0x36]               ; 005a3782
    LEA ESI,[EBP + 0xae]                ; 005a3785
    FXCH                                ; 005a378b
    FSTP float ptr [EBP + 0xae]         ; 005a378d
    FSTP float ptr [EBP + 0xb2]         ; 005a3793
    FSTP float ptr [EBP + 0xb6]         ; 005a3799
    MOVSD ES:EDI,ESI                    ; 005a379f
    MOVSD ES:EDI,ESI                    ; 005a37a0
    MOVSD ES:EDI,ESI                    ; 005a37a1
    FLD float ptr [0x005f01c2]          ; 005a37a2 | DAT_005f01c2
    FLD float ptr [EBP + -0x36]         ; 005a37a8
    FMUL ST1                            ; 005a37ab
    FLD float ptr [EBP + -0x32]         ; 005a37ad
    FMUL ST2                            ; 005a37b0
    FLD float ptr [EBP + -0x2e]         ; 005a37b2
    FMULP ST3                           ; 005a37b5
    LEA EDI,[EBP + -0x1e]               ; 005a37b7
    LEA ESI,[EBP + 0xffffff5e]          ; 005a37ba
    FXCH                                ; 005a37c0
    FSTP float ptr [EBP + 0xffffff5e]   ; 005a37c2
    FSTP float ptr [EBP + 0xffffff62]   ; 005a37c8
    FSTP float ptr [EBP + 0xffffff66]   ; 005a37ce
    MOVSD ES:EDI,ESI                    ; 005a37d4
    MOVSD ES:EDI,ESI                    ; 005a37d5
    MOVSD ES:EDI,ESI                    ; 005a37d6
    FLD float ptr [EBP + -0x1a]         ; 005a37d7
    FMUL ST0                            ; 005a37da
    FLD float ptr [EBP + -0x1e]         ; 005a37dc
    FMUL ST0                            ; 005a37df
    FADDP                               ; 005a37e1
    FLD float ptr [EBP + -0x16]         ; 005a37e3
    FMUL ST0                            ; 005a37e6
    FADDP                               ; 005a37e8
    FSQRT                               ; 005a37ea
    FADD double ptr [0x005f01c6]        ; 005a37ec | DAT_005f01c6
    SUB ESP,0x4                         ; 005a37f2
    FSTP float ptr [ESP]                ; 005a37f5
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 005a37f8
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 005a37fd
    TEST EAX,EAX                        ; 005a3800
    JZ 0x005a381d                       ; 005a3802
        ;   XREF to: 005a381d (CONDITIONAL_JUMP)  ; LAB_005a381d
    PUSH 0x1                            ; 005a3804
    LEA EAX,[EBP + -0x72]               ; 005a3806
    PUSH EAX                            ; 005a3809
    LEA EAX,[EBP + -0x4e]               ; 005a380a
    PUSH EAX                            ; 005a380d
    MOV EDI,dword ptr [0x006167e0]      ; 005a380e | g_CGorePtr
    PUSH EDI                            ; 005a3814
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730 ; 005a3815
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 005a381a
    MOV EAX,dword ptr [EBX + 0x11868]   ; 005a381d
        ;   Label: LAB_005a381d
    DEC EAX                             ; 005a3823
    MOV EDX,dword ptr [EBX + 0x11864]   ; 005a3824
    MOV dword ptr [EBX + 0x11868],EAX   ; 005a382a
    TEST EDX,EDX                        ; 005a3830
    JZ 0x005a383c                       ; 005a3832
        ;   XREF to: 005a383c (CONDITIONAL_JUMP)  ; LAB_005a383c
    TEST EAX,EAX                        ; 005a3834
    JZ 0x005a38f4                       ; 005a3836
        ;   XREF to: 005a38f4 (CONDITIONAL_JUMP)  ; LAB_005a38f4
    CMP dword ptr [EBX + 0x11868],0x0   ; 005a383c
        ;   Label: LAB_005a383c
    JZ 0x005a39c7                       ; 005a3843
        ;   XREF to: 005a39c7 (CONDITIONAL_JUMP)  ; LAB_005a39c7
    LEA EAX,[EBX + 0x2b4]               ; 005a3849
        ;   Label: LAB_005a3849
    PUSH EAX                            ; 005a384f
    CALL core_motion.cpp_FUN_005035c0   ; 005a3850
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a3855
    ADD ESP,0x4                         ; 005a3858
    TEST EAX,EAX                        ; 005a385b
    JNZ 0x005a39ea                      ; 005a385d
        ;   XREF to: 005a39ea (CONDITIONAL_JUMP)  ; LAB_005a39ea
    CMP byte ptr [EBX + 0x11741],0x0    ; 005a3863
    JZ 0x005a39d6                       ; 005a386a
        ;   XREF to: 005a39d6 (CONDITIONAL_JUMP)  ; LAB_005a39d6
    FLD float ptr [EBX + 0x11840]       ; 005a3870
    FSUB float ptr [EBP + 0xfa]         ; 005a3876
    FST float ptr [EBX + 0x11840]       ; 005a387c
    FLDZ                                ; 005a3882
    FCOMPP                              ; 005a3884
    FNSTSW AX                           ; 005a3886
    SAHF                                ; 005a3888
    JC 0x005a38b1                       ; 005a3889
        ;   XREF to: 005a38b1 (CONDITIONAL_JUMP)  ; LAB_005a38b1
    LEA EAX,[EBX + 0x11741]             ; 005a388b
    PUSH EAX                            ; 005a3891
    FLD float ptr [EBX + 0x11844]       ; 005a3892
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 005a3898
    PUSH EBX                            ; 005a389e
    FSTP float ptr [EBX + 0x11840]      ; 005a389f
    CALL dword ptr [ESI + 0x34]         ; 005a38a5
    ADD ESP,0x8                         ; 005a38a8
    MOV dword ptr [EBX + 0x11848],EAX   ; 005a38ab
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005a38b1
        ;   Label: LAB_005a38b1
    JNZ 0x005a39fe                      ; 005a38b8
        ;   XREF to: 005a39fe (CONDITIONAL_JUMP)  ; LAB_005a39fe
    LEA ESP,[EBP + 0xe2]                ; 005a38be
        ;   Label: LAB_005a38be
    POP EBP                             ; 005a38c4
    POP EDI                             ; 005a38c5
    POP ESI                             ; 005a38c6
    POP EBX                             ; 005a38c7
    RET                                 ; 005a38c8
    PUSH 0x5f019c                       ; 005a38c9 | = "Animation"
        ;   Label: LAB_005a38c9
    PUSH ESI                            ; 005a38ce
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a38cf
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a38d4
    TEST EAX,EAX                        ; 005a38d7
    JNZ 0x005a35a4                      ; 005a38d9
        ;   XREF to: 005a35a4 (CONDITIONAL_JUMP)  ; LAB_005a35a4
    JMP 0x005a3594                      ; 005a38df
        ;   XREF to: 005a3594 (UNCONDITIONAL_JUMP)  ; LAB_005a3594
    XOR EAX,EAX                         ; 005a38e4
        ;   Label: LAB_005a38e4
    MOV dword ptr [EBP + -0x6e],EAX     ; 005a38e6
    MOV dword ptr [EBP + -0x72],EAX     ; 005a38e9
    MOV dword ptr [EBP + -0x6a],EAX     ; 005a38ec
    JMP 0x005a3723                      ; 005a38ef
        ;   XREF to: 005a3723 (UNCONDITIONAL_JUMP)  ; LAB_005a3723
    PUSH EBX                            ; 005a38f4
        ;   Label: LAB_005a38f4
    MOV EDI,0xbf000000                  ; 005a38f5
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 005a38fa
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    MOV EAX,0x40000000                  ; 005a38ff
    ADD ESP,0x4                         ; 005a3904
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 005a3907
    LEA EAX,[EBP + 0xffffff52]          ; 005a390d
    XOR ESI,ESI                         ; 005a3913
    PUSH EAX                            ; 005a3915
    MOV dword ptr [EBP + 0xffffff52],ESI ; 005a3916
    MOV dword ptr [EBP + 0xffffff56],EDI ; 005a391c
    PUSH EBX                            ; 005a3922
    LEA ESI,[EBP + 0x42]                ; 005a3923
    LEA EDI,[EBP + 0x7e]                ; 005a3926
    CALL core_actor.cpp_FUN_00408cf0    ; 005a3929
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + 0x42]                ; 005a392e
    MOVSD ES:EDI,ESI                    ; 005a3931
    MOVSD ES:EDI,ESI                    ; 005a3932
    MOVSD ES:EDI,ESI                    ; 005a3933
    MOV ECX,0x3e4ccccd                  ; 005a3934
    MOV ESI,dword ptr [EBX + 0x11850]   ; 005a3939
    ADD ESP,0x8                         ; 005a393f
    LEA EAX,[ESI*0x4 + 0x0]             ; 005a3942
    XOR EDX,EDX                         ; 005a3949
    SUB EAX,ESI                         ; 005a394b
    LEA EDI,[EBP + -0x5a]               ; 005a394d
    SHL EAX,0x4                         ; 005a3950
    LEA ESI,[EBX + 0x1134]              ; 005a3953
    MOV dword ptr [EBP + -0x66],EDX     ; 005a3959
    ADD EAX,ESI                         ; 005a395c
    MOV ESI,0x3f000000                  ; 005a395e
    PUSH EAX                            ; 005a3963
    LEA EAX,[EBP + -0x66]               ; 005a3964
    MOV dword ptr [EBP + -0x5e],ESI     ; 005a3967
    PUSH EAX                            ; 005a396a
    LEA ESI,[EBP + -0x2a]               ; 005a396b
    MOV dword ptr [EBP + -0x62],ECX     ; 005a396e
    CALL core_xform.cpp_FUN_00591530    ; 005a3971
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 005a3976
    LEA EAX,[EBP + -0x5a]               ; 005a3979
    LEA ESI,[EBP + -0x2a]               ; 005a397c
    PUSH EAX                            ; 005a397f
    MOVSD ES:EDI,ESI                    ; 005a3980
    MOVSD ES:EDI,ESI                    ; 005a3981
    MOVSD ES:EDI,ESI                    ; 005a3982
    PUSH EBX                            ; 005a3983
    LEA ESI,[EBP + -0x12]               ; 005a3984
    CALL core_actor.cpp_FUN_00408d70    ; 005a3987
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 005a398c
    PUSH 0x4000                         ; 005a398f
    LEA EAX,[EBP + 0x7e]                ; 005a3994
    PUSH EAX                            ; 005a3997
    LEA EDI,[EBP + 0x72]                ; 005a3998
    LEA ESI,[EBP + -0x12]               ; 005a399b
    PUSH 0x3fc00000                     ; 005a399e
    LEA EAX,[EBP + 0x72]                ; 005a39a3
    MOVSD ES:EDI,ESI                    ; 005a39a6
    MOVSD ES:EDI,ESI                    ; 005a39a7
    MOVSD ES:EDI,ESI                    ; 005a39a8
    PUSH EAX                            ; 005a39a9
    MOV EDI,dword ptr [0x00614d30]      ; 005a39aa | DAT_00614d30
    PUSH EDI                            ; 005a39b0
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 005a39b1
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 005a39b6
    PUSH EBX                            ; 005a39b9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 005a39ba
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a39bf
    JMP 0x005a383c                      ; 005a39c2
        ;   XREF to: 005a383c (UNCONDITIONAL_JUMP)  ; LAB_005a383c
    MOV dword ptr [EBX + 0x11868],0x2   ; 005a39c7
        ;   Label: LAB_005a39c7
    JMP 0x005a3849                      ; 005a39d1
        ;   XREF to: 005a3849 (UNCONDITIONAL_JUMP)  ; LAB_005a3849
    MOV ECX,dword ptr [EBX + 0x11848]   ; 005a39d6
        ;   Label: LAB_005a39d6
    PUSH ECX                            ; 005a39dc
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 005a39dd
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 005a39e2
    JMP 0x005a38b1                      ; 005a39e5
        ;   XREF to: 005a38b1 (UNCONDITIONAL_JUMP)  ; LAB_005a38b1
    MOV EDX,dword ptr [EBX + 0x11848]   ; 005a39ea
        ;   Label: LAB_005a39ea
    PUSH EDX                            ; 005a39f0
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 005a39f1
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 005a39f6
    JMP 0x005a38b1                      ; 005a39f9
        ;   XREF to: 005a38b1 (UNCONDITIONAL_JUMP)  ; LAB_005a38b1
    PUSH 0x5f01a6                       ; 005a39fe | = "Chasing"
        ;   Label: LAB_005a39fe
    LEA EAX,[EBX + 0x10af8]             ; 005a3a03
    PUSH EAX                            ; 005a3a09
    MOV dword ptr [EBP + 0xd2],EAX      ; 005a3a0a
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a3a10
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a3a15
    TEST EAX,EAX                        ; 005a3a18
    JZ 0x005a38be                       ; 005a3a1a
        ;   XREF to: 005a38be (CONDITIONAL_JUMP)  ; LAB_005a38be
    LEA ESI,[EBX + 0x20]                ; 005a3a20
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a3a23
    FLD float ptr [ESI]                 ; 005a3a29
    FSUB float ptr [EAX + 0x20]         ; 005a3a2b
    FMUL ST0                            ; 005a3a2e
    FLD float ptr [ESI + 0x8]           ; 005a3a30
    FSUB float ptr [EAX + 0x28]         ; 005a3a33
    FMUL ST0                            ; 005a3a36
    FADDP                               ; 005a3a38
    FSQRT                               ; 005a3a3a
    FST float ptr [EBP + 0xce]          ; 005a3a3c
    FCOMP float ptr [0x005ff350]        ; 005a3a42 | DAT_005ff350
    FNSTSW AX                           ; 005a3a48
    SAHF                                ; 005a3a4a
    JBE 0x005a38be                      ; 005a3a4b
        ;   XREF to: 005a38be (CONDITIONAL_JUMP)  ; LAB_005a38be
    FLD float ptr [EBP + 0xce]          ; 005a3a51
    FCOMP float ptr [0x005ff354]        ; 005a3a57 | DAT_005ff354
    FNSTSW AX                           ; 005a3a5d
    SAHF                                ; 005a3a5f
    JA 0x005a38be                       ; 005a3a60
        ;   XREF to: 005a38be (CONDITIONAL_JUMP)  ; LAB_005a38be
    PUSH 0x3f800000                     ; 005a3a66
    PUSH 0x0                            ; 005a3a6b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005a3a6d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0xde],EAX      ; 005a3a72
    ADD ESP,0x8                         ; 005a3a78
    FLD float ptr [EBP + 0xde]          ; 005a3a7b
    FCOMP double ptr [0x005f01ce]       ; 005a3a81 | DAT_005f01ce
    FNSTSW AX                           ; 005a3a87
    SAHF                                ; 005a3a89
    JBE 0x005a38be                      ; 005a3a8a
        ;   XREF to: 005a38be (CONDITIONAL_JUMP)  ; LAB_005a38be
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a3a90
    ADD EAX,0x20                        ; 005a3a96
    PUSH EAX                            ; 005a3a99
    PUSH EBX                            ; 005a3a9a
    LEA ESI,[EBP + 0x8a]                ; 005a3a9b
    LEA EDI,[EBP + -0x6]                ; 005a3aa1
    CALL core_actor.cpp_FUN_00408de0    ; 005a3aa4
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0x8a]                ; 005a3aa9
    XOR EAX,EAX                         ; 005a3aaf
    MOVSD ES:EDI,ESI                    ; 005a3ab1
    MOVSD ES:EDI,ESI                    ; 005a3ab2
    MOVSD ES:EDI,ESI                    ; 005a3ab3
    ADD ESP,0x8                         ; 005a3ab4
    MOV dword ptr [EBP + -0x2],EAX      ; 005a3ab7
    LEA EAX,[EBP + -0x6]                ; 005a3aba
    PUSH EAX                            ; 005a3abd
    LEA ESI,[EBP + 0x4e]                ; 005a3abe
    LEA EDI,[EBP + 0x96]                ; 005a3ac1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 005a3ac7
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0x4e]                ; 005a3acc
    MOVSD ES:EDI,ESI                    ; 005a3acf
    MOVSD ES:EDI,ESI                    ; 005a3ad0
    MOVSD ES:EDI,ESI                    ; 005a3ad1
    FLD float ptr [EBP + 0x9a]          ; 005a3ad2
    FABS                                ; 005a3ad8
    ADD ESP,0x4                         ; 005a3ada
    FCOMP double ptr [0x005f01d6]       ; 005a3add | DAT_005f01d6
    FNSTSW AX                           ; 005a3ae3
    SAHF                                ; 005a3ae5
    JNC 0x005a38be                      ; 005a3ae6
        ;   XREF to: 005a38be (CONDITIONAL_JUMP)  ; LAB_005a38be
    PUSH 0x5f01ae                       ; 005a3aec | = "LeapAttack"
    MOV EDX,dword ptr [EBP + 0xd2]      ; 005a3af1
    PUSH EDX                            ; 005a3af7
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005a3af8
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a3afd
    LEA ESP,[EBP + 0xe2]                ; 005a3b00
    POP EBP                             ; 005a3b06
    POP EDI                             ; 005a3b07
    POP ESI                             ; 005a3b08
    POP EBX                             ; 005a3b09
    RET                                 ; 005a3b0a

