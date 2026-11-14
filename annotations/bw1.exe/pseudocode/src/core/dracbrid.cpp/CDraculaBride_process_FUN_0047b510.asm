; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_0047b510(CDraculaBride *this_ptr,float delta_time)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0047b494 = 0047ba5d
;   undefined1* switchdataD_0047b4a4 = 0047c869
;   TerminatedCString s_brideexplosion_wav_005dad6f
;   TerminatedCString s_s_confused_while_walking_005dad82
;   TerminatedCString s_bride_d_wav_005dadac
;   TerminatedCString s_hotbride_disappear_wav_005dadba
;   TerminatedCString s_bride_d_wav_005dadd1
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005daddf
;   TerminatedCString s_hotbride_bite_wav_005dae00
;   TerminatedCString s_CHero_005dae13
;   TerminatedCString s_bride_d_wav_005dae19
;   TerminatedCString s_hotbride_disappear_wav_005dae27
;   TerminatedCString s_bride_d_wav_005dae3e
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005dae4c
;   TerminatedCString s_hotbride_swipe_wav_005dae6d
;   ... and 29 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b510
        ;   Label: core_dracbrid.cpp_CDraculaBride_process_FUN_0047b510
    PUSH ESI                            ; 0047b511
    PUSH EDI                            ; 0047b512
    PUSH EBP                            ; 0047b513
    MOV EBP,ESP                         ; 0047b514
    SUB ESP,0x5e8                       ; 0047b516
    SUB EBP,0x7a                        ; 0047b51c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0047b51f
    CMP dword ptr [EBX + 0xc408],0x0    ; 0047b525
    JZ 0x0047b5a0                       ; 0047b52c
        ;   XREF to: 0047b5a0 (CONDITIONAL_JUMP)  ; LAB_0047b5a0
    FLD float ptr [EBX + 0xc40c]        ; 0047b52e
    FSUB float ptr [EBP + 0x92]         ; 0047b534
    FST float ptr [EBX + 0xc40c]        ; 0047b53a
    FLDZ                                ; 0047b540
    FCOMPP                              ; 0047b542
    FNSTSW AX                           ; 0047b544
    SAHF                                ; 0047b546
    JBE 0x0047b6c0                      ; 0047b547
        ;   XREF to: 0047b6c0 (CONDITIONAL_JUMP)  ; LAB_0047b6c0
    MOV dword ptr [EBX + 0xc408],0x0    ; 0047b54d
    MOV dword ptr [EBX + 0x70],0x2      ; 0047b557
    MOV ESI,dword ptr [EBX + 0xc314]    ; 0047b55e
    MOV dword ptr [EBX + 0xc40c],0x0    ; 0047b564
    XOR EAX,EAX                         ; 0047b56e
    TEST ESI,ESI                        ; 0047b570
    JLE 0x0047b5a0                      ; 0047b572
        ;   XREF to: 0047b5a0 (CONDITIONAL_JUMP)  ; LAB_0047b5a0
    MOV EDX,EBX                         ; 0047b574
    MOV ESI,dword ptr [EDX + 0xc318]    ; 0047b576
        ;   Label: LAB_0047b576
    MOV dword ptr [ESI + 0x70],0x2      ; 0047b57c
    INC EAX                             ; 0047b583
    MOV ECX,dword ptr [EBX + 0xc314]    ; 0047b584
    ADD EDX,0x4                         ; 0047b58a
    CMP EAX,ECX                         ; 0047b58d
    JL 0x0047b576                       ; 0047b58f
        ;   XREF to: 0047b576 (CONDITIONAL_JUMP)  ; LAB_0047b576
    LEA EAX,[EAX]                       ; 0047b591
    LEA EDX,[EDX]                       ; 0047b597
    LEA EAX,[EAX]                       ; 0047b59d
    PUSH dword ptr [EBP + 0x92]         ; 0047b5a0
        ;   Label: LAB_0047b5a0
    PUSH EBX                            ; 0047b5a6
    CALL core_dracbrid.cpp_FUN_0047de00 ; 0047b5a7
        ;   XREF to: 0047de00 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047de00(CDraculaBride * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047b5ac
    PUSH dword ptr [EBP + 0x92]         ; 0047b5af
    PUSH EBX                            ; 0047b5b5
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0047b5b6
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047b5bb
    TEST EAX,EAX                        ; 0047b5be
    JZ 0x0047b9c8                       ; 0047b5c0
        ;   XREF to: 0047b9c8 (CONDITIONAL_JUMP)  ; LAB_0047b9c8
    FLD float ptr [EBX + 0xc300]        ; 0047b5c6
    FLDZ                                ; 0047b5cc
    FCOMPP                              ; 0047b5ce
    FNSTSW AX                           ; 0047b5d0
    SAHF                                ; 0047b5d2
    JBE 0x0047b724                      ; 0047b5d3
        ;   XREF to: 0047b724 (CONDITIONAL_JUMP)  ; LAB_0047b724
    LEA EAX,[EBX + 0x249c]              ; 0047b5d9
        ;   Label: LAB_0047b5d9
    MOV dword ptr [EAX + 0x8],0x0       ; 0047b5df
    FLD float ptr [EBP + 0x92]          ; 0047b5e6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047b5ec
    MOV dword ptr [EAX + 0x4],EDX       ; 0047b5ef
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047b5f2
    MOV dword ptr [EAX],EDX             ; 0047b5f5
    FMUL float ptr [EBX + 0xc1d0]       ; 0047b5f7
    LEA EAX,[EBX + 0x158]               ; 0047b5fd
    FSTP float ptr [EBP + 0x3e]         ; 0047b603
    MOV dword ptr [EBP + 0x5a],EAX      ; 0047b606
    FLD float ptr [EBP + 0x3e]          ; 0047b609
        ;   Label: LAB_0047b609
    FLDZ                                ; 0047b60c
    FCOMPP                              ; 0047b60e
    FNSTSW AX                           ; 0047b610
    SAHF                                ; 0047b612
    JNC 0x0047b74a                      ; 0047b613
        ;   XREF to: 0047b74a (CONDITIONAL_JUMP)  ; LAB_0047b74a
    LEA EAX,[EBP + 0x3e]                ; 0047b619
    PUSH EAX                            ; 0047b61c
    MOV EDI,dword ptr [EBP + 0x5a]      ; 0047b61d
    PUSH EDI                            ; 0047b620
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0047b621
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0047b626
    CMP EAX,0x29a                       ; 0047b629
    JNZ 0x0047b73b                      ; 0047b62e
        ;   XREF to: 0047b73b (CONDITIONAL_JUMP)  ; LAB_0047b73b
    MOV dword ptr [EBX + 0x3004],0x0    ; 0047b634
    XOR EAX,EAX                         ; 0047b63e
    MOV dword ptr [EBP + 0xfffffdba],EAX ; 0047b640
    LEA EAX,[EBP + 0xfffffdba]          ; 0047b646
    PUSH EAX                            ; 0047b64c
    MOV EDX,0x41a00000                  ; 0047b64d
    LEA ESI,[EBP + 0xfffffeb6]          ; 0047b652
    PUSH EBX                            ; 0047b658
    MOV dword ptr [EBP + 0xfffffdbe],EDX ; 0047b659
    MOV dword ptr [EBP + 0xfffffdc2],EDX ; 0047b65f
    CALL core_actor.cpp_FUN_00408ac0    ; 0047b665
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 0047b66a
    PUSH 0x1                            ; 0047b66d
    LEA EAX,[EBP + 0xfffffe7a]          ; 0047b66f
    PUSH 0xbf800000                     ; 0047b675
    PUSH EAX                            ; 0047b67a
    LEA EDI,[EBP + 0xfffffe7a]          ; 0047b67b
    LEA ESI,[EBP + 0xfffffeb6]          ; 0047b681
    PUSH EBX                            ; 0047b687
    MOVSD ES:EDI,ESI                    ; 0047b688
    MOVSD ES:EDI,ESI                    ; 0047b689
    MOVSD ES:EDI,ESI                    ; 0047b68a
    CALL core_dracbrid.cpp_CDraculaBride_explode_FUN_0047cc20 ; 0047b68b
        ;   XREF to: 0047cc20 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_explode_FUN_0047cc20(CDraculaBride * this_ptr, CVector3f * direction, float spread_angle, int render_in_background)
    ADD ESP,0x10                        ; 0047b690
    MOV dword ptr [EBX + 0xc408],0x1    ; 0047b693
    PUSH 0x5dad6f                       ; 0047b69d | = "brideexplosion.wav"
    FLD float ptr [0x005ff1a0]          ; 0047b6a2 | DAT_005ff1a0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047b6a8
    PUSH EBX                            ; 0047b6ae
    FSTP float ptr [EBX + 0xc40c]       ; 0047b6af
    CALL dword ptr [EAX + 0x30]         ; 0047b6b5
    ADD ESP,0x8                         ; 0047b6b8
    JMP 0x0047b609                      ; 0047b6bb
        ;   XREF to: 0047b609 (UNCONDITIONAL_JUMP)  ; LAB_0047b609
    MOV ECX,dword ptr [EBX + 0xc314]    ; 0047b6c0
        ;   Label: LAB_0047b6c0
    XOR EDX,EDX                         ; 0047b6c6
    TEST ECX,ECX                        ; 0047b6c8
    JLE 0x0047b5a0                      ; 0047b6ca
        ;   XREF to: 0047b5a0 (CONDITIONAL_JUMP)  ; LAB_0047b5a0
    FLD float ptr [0x005ff1a0]          ; 0047b6d0 | DAT_005ff1a0
    FLD double ptr [0x005dae85]         ; 0047b6d6 | DAT_005dae85
    MOV ESI,EBX                         ; 0047b6dc
    MOV EAX,dword ptr [ESI + 0xc318]    ; 0047b6de
        ;   Label: LAB_0047b6de
    MOV dword ptr [EAX + 0xfc],0x1      ; 0047b6e4
    MOV dword ptr [EAX + 0xcb4],0x1     ; 0047b6ee
    FLD float ptr [EBX + 0xc40c]        ; 0047b6f8
    FMUL ST1                            ; 0047b6fe
    FDIV ST0,ST2                        ; 0047b700
    INC EDX                             ; 0047b702
    CALL crt_math.c_round_FUN_005c03a0  ; 0047b703
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EAX + 0xcc0]       ; 0047b708
    MOV EDI,dword ptr [EBX + 0xc314]    ; 0047b70e
    ADD ESI,0x4                         ; 0047b714
    CMP EDX,EDI                         ; 0047b717
    JL 0x0047b6de                       ; 0047b719
        ;   XREF to: 0047b6de (CONDITIONAL_JUMP)  ; LAB_0047b6de
    FSTP ST0                            ; 0047b71b
    FSTP ST0                            ; 0047b71d
    JMP 0x0047b5a0                      ; 0047b71f
        ;   XREF to: 0047b5a0 (UNCONDITIONAL_JUMP)  ; LAB_0047b5a0
    FLD float ptr [EBX + 0xc300]        ; 0047b724
        ;   Label: LAB_0047b724
    FSUB float ptr [EBP + 0x92]         ; 0047b72a
    FSTP float ptr [EBX + 0xc300]       ; 0047b730
    JMP 0x0047b5d9                      ; 0047b736
        ;   XREF to: 0047b5d9 (UNCONDITIONAL_JUMP)  ; LAB_0047b5d9
    PUSH EAX                            ; 0047b73b
        ;   Label: LAB_0047b73b
    PUSH EBX                            ; 0047b73c
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0047b73d
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0047b742
    JMP 0x0047b609                      ; 0047b745
        ;   XREF to: 0047b609 (UNCONDITIONAL_JUMP)  ; LAB_0047b609
    MOV ESI,dword ptr [EBP + 0x5a]      ; 0047b74a
        ;   Label: LAB_0047b74a
    PUSH ESI                            ; 0047b74d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0047b74e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047b753
    ADD ESP,0x4                         ; 0047b756
    MOV ESI,EAX                         ; 0047b759
    CMP EAX,0x9                         ; 0047b75b
    JNZ 0x0047b9d0                      ; 0047b75e
        ;   XREF to: 0047b9d0 (CONDITIONAL_JUMP)  ; LAB_0047b9d0
    FLD float ptr [EBP + 0x92]          ; 0047b764
    FLD float ptr [0x005ff198]          ; 0047b76a | DAT_005ff198
    FMUL ST1                            ; 0047b770
    FLD float ptr [0x005ff194]          ; 0047b772 | DAT_005ff194
    FMULP ST2                           ; 0047b778
    FMUL float ptr [EBX + 0xc1d0]       ; 0047b77a
    FLD float ptr [EBX + 0xc1d0]        ; 0047b780
    FMULP ST2                           ; 0047b786
    FSTP float ptr [EBX + 0x2528]       ; 0047b788
    FSTP float ptr [EBX + 0x2524]       ; 0047b78e
    PUSH dword ptr [EBP + 0x92]         ; 0047b794
        ;   Label: LAB_0047b794
    PUSH EBX                            ; 0047b79a
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0047b79b
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047b7a0
    TEST EAX,EAX                        ; 0047b7a3
    JZ 0x0047cbf2                       ; 0047b7a5
        ;   XREF to: 0047cbf2 (CONDITIONAL_JUMP)  ; LAB_0047cbf2
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0047b7ab
    CMP EAX,0x2                         ; 0047b7b1
    JNC 0x0047ba24                      ; 0047b7b4
        ;   XREF to: 0047ba24 (CONDITIONAL_JUMP)  ; LAB_0047ba24
    CMP EAX,0x1                         ; 0047b7ba
    JNZ 0x0047ba2f                      ; 0047b7bd
        ;   XREF to: 0047ba2f (CONDITIONAL_JUMP)  ; LAB_0047ba2f
    PUSH 0x1                            ; 0047b7c3
        ;   Label: LAB_0047b7c3
    PUSH 0xe                            ; 0047b7c5
    LEA EAX,[EBX + 0x158]               ; 0047b7c7
        ;   Label: LAB_0047b7c7
    PUSH EAX                            ; 0047b7cd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047b7ce
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047b7d3
        ;   Label: LAB_0047b7d3
    LEA EAX,[EBX + 0x249c]              ; 0047b7d6
    MOV dword ptr [EAX + 0x8],0x0       ; 0047b7dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047b7e3
    MOV dword ptr [EAX + 0x4],EDX       ; 0047b7e6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047b7e9
    MOV dword ptr [EAX],EDX             ; 0047b7ec
    MOV EAX,EAX                         ; 0047b7ee
    FLD float ptr [EBX + 0xc1e4]        ; 0047b7f0
        ;   Label: default
    FLDZ                                ; 0047b7f6
    FCOMPP                              ; 0047b7f8
    FNSTSW AX                           ; 0047b7fa
    SAHF                                ; 0047b7fc
    JNC 0x0047b811                      ; 0047b7fd
        ;   XREF to: 0047b811 (CONDITIONAL_JUMP)  ; LAB_0047b811
    FLD float ptr [EBX + 0xc1e4]        ; 0047b7ff
    FSUB float ptr [EBP + 0x92]         ; 0047b805
    FSTP float ptr [EBX + 0xc1e4]       ; 0047b80b
    LEA EAX,[EBX + 0x158]               ; 0047b811
        ;   Label: LAB_0047b811
    PUSH EAX                            ; 0047b817
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0047b818
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047b81d
    ADD ESP,0x4                         ; 0047b820
    MOV dword ptr [EBP + 0x4a],EAX      ; 0047b823
    CMP EAX,0x11                        ; 0047b826
    JZ 0x0047cc02                       ; 0047b829
        ;   XREF to: 0047cc02 (CONDITIONAL_JUMP)  ; LAB_0047cc02
    CMP EAX,0x10                        ; 0047b82f
    JZ 0x0047cc02                       ; 0047b832
        ;   XREF to: 0047cc02 (CONDITIONAL_JUMP)  ; LAB_0047cc02
    CMP EAX,0xf                         ; 0047b838
    JZ 0x0047cc02                       ; 0047b83b
        ;   XREF to: 0047cc02 (CONDITIONAL_JUMP)  ; LAB_0047cc02
    CMP dword ptr [EBP + 0x4a],0x3      ; 0047b841
        ;   Label: LAB_0047b841
    JNZ 0x0047b85d                      ; 0047b845
        ;   XREF to: 0047b85d (CONDITIONAL_JUMP)  ; LAB_0047b85d
    FLD float ptr [EBX + 0x24a4]        ; 0047b847
    FLD ST0                             ; 0047b84d
    FMUL double ptr [0x005daea5]        ; 0047b84f | DAT_005daea5
    FSTP ST1                            ; 0047b855
    FSTP float ptr [EBX + 0x24a4]       ; 0047b857
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0047b85d
        ;   Label: LAB_0047b85d
    TEST ESI,ESI                        ; 0047b863
    JZ 0x0047b890                       ; 0047b865
        ;   XREF to: 0047b890 (CONDITIONAL_JUMP)  ; LAB_0047b890
    PUSH ESI                            ; 0047b867
    MOV EDX,dword ptr [ESI + 0x154]     ; 0047b868
    CALL dword ptr [EDX + 0xf4]         ; 0047b86e
    ADD ESP,0x4                         ; 0047b874
    CMP EAX,EBX                         ; 0047b877
    JNZ 0x0047b890                      ; 0047b879
        ;   XREF to: 0047b890 (CONDITIONAL_JUMP)  ; LAB_0047b890
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0047b87b
    PUSH EDI                            ; 0047b881
    MOV EAX,[0x00622c18]                ; 0047b882 | g_CDemonSetPtr
    PUSH EAX                            ; 0047b887 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0047b888
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0047b88d
    PUSH dword ptr [EBP + 0x92]         ; 0047b890
        ;   Label: LAB_0047b890
    PUSH EBX                            ; 0047b896
    LEA ESI,[EBX + 0x2518]              ; 0047b897
    CALL core_charactr.cpp_FUN_0042d700 ; 0047b89d
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 0047b8a2
    FMUL float ptr [EBP + 0x92]         ; 0047b8a4
    FLD float ptr [ESI + 0x4]           ; 0047b8aa
    FMUL float ptr [EBP + 0x92]         ; 0047b8ad
    FLD float ptr [ESI + 0x8]           ; 0047b8b3
    FMUL float ptr [EBP + 0x92]         ; 0047b8b6
    LEA EDI,[EBP + -0x5a]               ; 0047b8bc
    LEA ESI,[EBP + 0xfffffdae]          ; 0047b8bf
    FXCH ST2                            ; 0047b8c5
    FSTP float ptr [EBP + 0xfffffdae]   ; 0047b8c7
    FSTP float ptr [EBP + 0xfffffdb2]   ; 0047b8cd
    FSTP float ptr [EBP + 0xfffffdb6]   ; 0047b8d3
    MOVSD ES:EDI,ESI                    ; 0047b8d9
    MOVSD ES:EDI,ESI                    ; 0047b8da
    MOVSD ES:EDI,ESI                    ; 0047b8db
    LEA EAX,[EBX + 0x250c]              ; 0047b8dc
    FLD float ptr [EBP + -0x5a]         ; 0047b8e2
    FLD float ptr [EBP + -0x56]         ; 0047b8e5
    FLD float ptr [EBP + -0x52]         ; 0047b8e8
    LEA EDI,[EBP + 0x2a]                ; 0047b8eb
    LEA ESI,[EBP + 0xffffff0a]          ; 0047b8ee
    FXCH ST2                            ; 0047b8f4
    FADD float ptr [EAX]                ; 0047b8f6
    FXCH                                ; 0047b8f8
    FADD float ptr [EAX + 0x4]          ; 0047b8fa
    FXCH ST2                            ; 0047b8fd
    FADD float ptr [EAX + 0x8]          ; 0047b8ff
    FXCH                                ; 0047b902
    FSTP float ptr [EBP + 0xffffff0a]   ; 0047b904
    FXCH                                ; 0047b90a
    FSTP float ptr [EBP + 0xffffff0e]   ; 0047b90c
    FSTP float ptr [EBP + 0xffffff12]   ; 0047b912
    MOVSD ES:EDI,ESI                    ; 0047b918
    MOVSD ES:EDI,ESI                    ; 0047b919
    MOVSD ES:EDI,ESI                    ; 0047b91a
    LEA EDX,[EBX + 0x249c]              ; 0047b91b
    FLD float ptr [EBP + 0x2a]          ; 0047b921
    FLD float ptr [EBP + 0x2e]          ; 0047b924
    FLD float ptr [EBP + 0x32]          ; 0047b927
    LEA EDI,[EBP + 0xfffffd66]          ; 0047b92a
    LEA ESI,[EBP + 0xfffffdc6]          ; 0047b930
    FXCH ST2                            ; 0047b936
    FADD float ptr [EDX]                ; 0047b938
    FXCH                                ; 0047b93a
    FADD float ptr [EDX + 0x4]          ; 0047b93c
    FXCH ST2                            ; 0047b93f
    FADD float ptr [EDX + 0x8]          ; 0047b941
    FXCH                                ; 0047b944
    FSTP float ptr [EBP + 0xfffffdc6]   ; 0047b946
    FXCH                                ; 0047b94c
    FSTP float ptr [EBP + 0xfffffdca]   ; 0047b94e
    FSTP float ptr [EBP + 0xfffffdce]   ; 0047b954
    MOVSD ES:EDI,ESI                    ; 0047b95a
    MOVSD ES:EDI,ESI                    ; 0047b95b
    MOVSD ES:EDI,ESI                    ; 0047b95c
    MOV dword ptr [EAX + 0x8],0x0       ; 0047b95d
    ADD ESP,0x8                         ; 0047b964
    MOV ECX,dword ptr [EAX + 0x8]       ; 0047b967
    MOV dword ptr [EAX + 0x4],ECX       ; 0047b96a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0047b96d
    MOV dword ptr [EAX],ECX             ; 0047b970
    MOV dword ptr [EDX + 0x8],0x0       ; 0047b972
    LEA EAX,[EBP + 0xfffffd66]          ; 0047b979
    FLD float ptr [EDX + 0x8]           ; 0047b97f
    PUSH EAX                            ; 0047b982
    FST float ptr [EDX + 0x4]           ; 0047b983
    PUSH EBX                            ; 0047b986
    FSTP float ptr [EDX]                ; 0047b987
    CALL core_charactr.cpp_FUN_0042d750 ; 0047b989
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0047b98e
    CMP dword ptr [EBP + 0x4a],0x17     ; 0047b991
        ;   Label: LAB_0047b991
    JZ 0x0047b9a1                       ; 0047b995
        ;   XREF to: 0047b9a1 (CONDITIONAL_JUMP)  ; LAB_0047b9a1
    MOV dword ptr [EBX + 0xc2f4],0x0    ; 0047b997
    PUSH EBX                            ; 0047b9a1
        ;   Label: LAB_0047b9a1
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 0047b9a2
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0047b9a7
    LEA EAX,[EBX + 0x158]               ; 0047b9aa
    PUSH EAX                            ; 0047b9b0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 0047b9b1
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047b9b6
    PUSH dword ptr [EBP + 0x92]         ; 0047b9b9
    PUSH EBX                            ; 0047b9bf
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 0047b9c0
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047b9c5
    LEA ESP,[EBP + 0x7a]                ; 0047b9c8
        ;   Label: LAB_0047b9c8
    POP EBP                             ; 0047b9cb
    POP EDI                             ; 0047b9cc
    POP ESI                             ; 0047b9cd
    POP EBX                             ; 0047b9ce
    RET                                 ; 0047b9cf
    FLD float ptr [0x005ff190]          ; 0047b9d0 | DAT_005ff190
        ;   Label: LAB_0047b9d0
    FMUL float ptr [EBP + 0x92]         ; 0047b9d6
    FMUL float ptr [EBX + 0xc1d0]       ; 0047b9dc
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0047b9e2
    MOV dword ptr [EBX + 0x2524],EAX    ; 0047b9e8
    FSTP float ptr [EBX + 0x2528]       ; 0047b9ee
    JMP 0x0047b794                      ; 0047b9f4
        ;   XREF to: 0047b794 (UNCONDITIONAL_JUMP)  ; LAB_0047b794
    PUSH 0x1                            ; 0047b9f9
        ;   Label: LAB_0047b9f9
    PUSH 0x0                            ; 0047b9fb
    LEA EAX,[EBX + 0x158]               ; 0047b9fd
    PUSH EAX                            ; 0047ba03
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047ba04
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047ba09
    PUSH EBX                            ; 0047ba0c
    MOV EAX,0x5dad82                    ; 0047ba0d | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 0047ba12 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 0047ba13 | g_CConsolePtr
    PUSH ESI                            ; 0047ba19 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0047ba1a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x0047b7d3                      ; 0047ba1f
        ;   XREF to: 0047b7d3 (UNCONDITIONAL_JUMP)  ; LAB_0047b7d3
    JBE 0x0047b7c3                      ; 0047ba24
        ;   XREF to: 0047b7c3 (CONDITIONAL_JUMP)  ; LAB_0047b7c3
        ;   Label: LAB_0047ba24
    CMP EAX,0x3                         ; 0047ba2a
    JZ 0x0047b9f9                       ; 0047ba2d
        ;   XREF to: 0047b9f9 (CONDITIONAL_JUMP)  ; LAB_0047b9f9
    PUSH 0x1                            ; 0047ba2f
        ;   Label: LAB_0047ba2f
    PUSH 0x0                            ; 0047ba31
    JMP 0x0047b7c7                      ; 0047ba33
        ;   XREF to: 0047b7c7 (UNCONDITIONAL_JUMP)  ; LAB_0047b7c7
    FLD float ptr [EBX + 0xc2fc]        ; 0047ba38
        ;   Label: caseD_17
    FLDZ                                ; 0047ba3e
    FCOMPP                              ; 0047ba40
    FNSTSW AX                           ; 0047ba42
    SAHF                                ; 0047ba44
    JNC 0x0047ba75                      ; 0047ba45
        ;   XREF to: 0047ba75 (CONDITIONAL_JUMP)  ; LAB_0047ba75
    MOV EAX,dword ptr [EBX + 0xc2f4]    ; 0047ba47
        ;   Label: LAB_0047ba47
    CMP EAX,0x3                         ; 0047ba4d
    JA 0x0047b7f0                       ; 0047ba50
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    JMP dword ptr [EAX*0x4 + 0x47b494]  ; 0047ba56 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1                            ; 0047ba5d
        ;   Label: caseD_0
    PUSH 0x0                            ; 0047ba5f
    LEA EAX,[EBX + 0x158]               ; 0047ba61
    PUSH EAX                            ; 0047ba67
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047ba68
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047ba6d
    JMP 0x0047b7f0                      ; 0047ba70
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,dword ptr [EBX + 0xc2f0]    ; 0047ba75
        ;   Label: LAB_0047ba75
    PUSH EAX                            ; 0047ba7b
    PUSH 0x5dadac                       ; 0047ba7c | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffaf6]          ; 0047ba81
    PUSH EAX                            ; 0047ba87
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0047ba88
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047ba8d
    LEA EAX,[EBP + 0xfffffaf6]          ; 0047ba90
    PUSH 0x3f800000                     ; 0047ba96
    PUSH EAX                            ; 0047ba9b
    PUSH EBX                            ; 0047ba9c
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047ba9d
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047baa2
    PUSH 0x3e4ccccd                     ; 0047baa5
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0047baaa
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0047baaf
    TEST EAX,EAX                        ; 0047bab2
    JZ 0x0047ba47                       ; 0047bab4
        ;   XREF to: 0047ba47 (CONDITIONAL_JUMP)  ; LAB_0047ba47
    LEA EAX,[EBP + 0xfffffaf6]          ; 0047bab6
    PUSH 0x3f800000                     ; 0047babc
    PUSH EAX                            ; 0047bac1
    PUSH EBX                            ; 0047bac2
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047bac3
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047bac8
    JMP 0x0047ba47                      ; 0047bacb
        ;   XREF to: 0047ba47 (UNCONDITIONAL_JUMP)  ; LAB_0047ba47
    FLD float ptr [EBX + 0xc2f8]        ; 0047bad0
        ;   Label: caseD_1
    FADD float ptr [EBP + 0x92]         ; 0047bad6
    FST float ptr [EBX + 0xc2f8]        ; 0047badc
    FCOMP float ptr [0x005ff19c]        ; 0047bae2 | DAT_005ff19c
    FNSTSW AX                           ; 0047bae8
    SAHF                                ; 0047baea
    JBE 0x0047bb02                      ; 0047baeb
        ;   XREF to: 0047bb02 (CONDITIONAL_JUMP)  ; LAB_0047bb02
    MOV dword ptr [EBX + 0xc2f4],0x2    ; 0047baed
    MOV EAX,[0x005ff19c]                ; 0047baf7 | DAT_005ff19c
    MOV dword ptr [EBX + 0xc2f8],EAX    ; 0047bafc
    MOV EDX,0x40400000                  ; 0047bb02
        ;   Label: LAB_0047bb02
    LEA ESI,[EBX + 0x158]               ; 0047bb07
    XOR EAX,EAX                         ; 0047bb0d
    XOR EDI,EDI                         ; 0047bb0f
    MOV dword ptr [EBP + -0x12],EAX     ; 0047bb11
    PUSH ESI                            ; 0047bb14
    MOV dword ptr [EBP + -0xe],EDX      ; 0047bb15
    MOV dword ptr [EBP + -0xa],EAX      ; 0047bb18
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0047bb1b
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x72],EDI      ; 0047bb20
    ADD ESP,0x4                         ; 0047bb23
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0047bb26
    MOV dword ptr [EBP + 0x52],EAX      ; 0047bb2c
    TEST EDX,EDX                        ; 0047bb2f
    JLE 0x0047b7f0                      ; 0047bb31
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    MOV dword ptr [EBP + 0x4e],ESI      ; 0047bb37
    MOV EAX,dword ptr [EBP + 0x72]      ; 0047bb3a
        ;   Label: LAB_0047bb3a
    PUSH EAX                            ; 0047bb3d
    MOV EDX,dword ptr [EBP + 0x4e]      ; 0047bb3e
    PUSH EDX                            ; 0047bb41
    LEA ESI,[EBP + 0xfffffef2]          ; 0047bb42
    LEA EDI,[EBP + 0xfffffe02]          ; 0047bb48
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 0047bb4e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 0047bb53
    LEA EAX,[EBP + 0xfffffe02]          ; 0047bb56
    LEA ESI,[EBP + 0xfffffef2]          ; 0047bb5c
    PUSH EAX                            ; 0047bb62
    MOVSD ES:EDI,ESI                    ; 0047bb63
    MOVSD ES:EDI,ESI                    ; 0047bb64
    MOVSD ES:EDI,ESI                    ; 0047bb65
    PUSH EBX                            ; 0047bb66
    LEA ESI,[EBP + -0x2a]               ; 0047bb67
    CALL core_actor.cpp_FUN_00408b40    ; 0047bb6a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047bb6f
    PUSH 0xffff                         ; 0047bb72
    LEA EAX,[EBP + -0x12]               ; 0047bb77
    PUSH EAX                            ; 0047bb7a
    LEA EDI,[EBP + 0xfffffdf6]          ; 0047bb7b
    LEA ESI,[EBP + -0x2a]               ; 0047bb81
    PUSH 0x3f000000                     ; 0047bb84
    LEA EAX,[EBP + 0xfffffdf6]          ; 0047bb89
    MOVSD ES:EDI,ESI                    ; 0047bb8f
    MOVSD ES:EDI,ESI                    ; 0047bb90
    MOVSD ES:EDI,ESI                    ; 0047bb91
    PUSH EAX                            ; 0047bb92
    MOV ECX,dword ptr [0x0061c010]      ; 0047bb93 | DAT_0061c010
    MOV ESI,dword ptr [EBP + 0x72]      ; 0047bb99
    PUSH ECX                            ; 0047bb9c
    INC ESI                             ; 0047bb9d
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 0047bb9e
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EDX,dword ptr [EBP + 0x52]      ; 0047bba3
    MOV dword ptr [EBP + 0x72],ESI      ; 0047bba6
    MOV EDI,dword ptr [EDX + 0x1de78]   ; 0047bba9
    ADD ESP,0x14                        ; 0047bbaf
    CMP ESI,EDI                         ; 0047bbb2
    JL 0x0047bb3a                       ; 0047bbb4
        ;   XREF to: 0047bb3a (CONDITIONAL_JUMP)  ; LAB_0047bb3a
    JMP 0x0047b7f0                      ; 0047bbb6
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV ECX,0x1                         ; 0047bbbb
        ;   Label: caseD_2
    LEA EAX,[EBX + 0xc304]              ; 0047bbc0
    XOR ESI,ESI                         ; 0047bbc6
    MOV dword ptr [EBP + 0x46],ECX      ; 0047bbc8
    MOV dword ptr [EBP + 0x66],ESI      ; 0047bbcb
    MOV dword ptr [EBP + 0x6a],EAX      ; 0047bbce
    MOV dword ptr [EBP + 0x62],ESI      ; 0047bbd1
        ;   Label: LAB_0047bbd1
    MOV EAX,[0x00622c18]                ; 0047bbd4 | g_CDemonSetPtr
    MOV EDX,dword ptr [EBP + 0x66]      ; 0047bbd9
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 0047bbdc | g_CDemonSetInstance.character_count
    JGE 0x0047bc89                      ; 0047bbe2
        ;   XREF to: 0047bc89 (CONDITIONAL_JUMP)  ; LAB_0047bc89
    ADD EAX,dword ptr [EBP + 0x62]      ; 0047bbe8
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 0047bbeb
    TEST ESI,ESI                        ; 0047bbf1
    JNZ 0x0047bc04                      ; 0047bbf3
        ;   XREF to: 0047bc04 (CONDITIONAL_JUMP)  ; LAB_0047bc04
    MOV EDI,dword ptr [EBP + 0x66]      ; 0047bbf5
        ;   Label: LAB_0047bbf5
    MOV ESI,dword ptr [EBP + 0x62]      ; 0047bbf8
    INC EDI                             ; 0047bbfb
    ADD ESI,0x4                         ; 0047bbfc
    MOV dword ptr [EBP + 0x66],EDI      ; 0047bbff
    JMP 0x0047bbd1                      ; 0047bc02
        ;   XREF to: 0047bbd1 (UNCONDITIONAL_JUMP)  ; LAB_0047bbd1
    CMP ESI,EBX                         ; 0047bc04
        ;   Label: LAB_0047bc04
    JZ 0x0047bbf5                       ; 0047bc06
        ;   XREF to: 0047bbf5 (CONDITIONAL_JUMP)  ; LAB_0047bbf5
    PUSH ESI                            ; 0047bc08
    MOV EAX,dword ptr [ESI + 0x154]     ; 0047bc09
    CALL dword ptr [EAX + 0x10c]        ; 0047bc0f
    ADD ESP,0x4                         ; 0047bc15
    TEST EAX,EAX                        ; 0047bc18
    JG 0x0047bbf5                       ; 0047bc1a
        ;   XREF to: 0047bbf5 (CONDITIONAL_JUMP)  ; LAB_0047bbf5
    FLD float ptr [ESI + 0x24]          ; 0047bc1c
    FLD float ptr [ESI + 0x28]          ; 0047bc1f
    FLD float ptr [ESI + 0x20]          ; 0047bc22
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0047bc25
    LEA EDI,[EBP + 0xfffffe62]          ; 0047bc28
    LEA ESI,[EBP + 0xfffffe1a]          ; 0047bc2e
    FSUB float ptr [EAX]                ; 0047bc34
    FXCH ST2                            ; 0047bc36
    FSUB float ptr [EAX + 0x4]          ; 0047bc38
    FXCH                                ; 0047bc3b
    FSUB float ptr [EAX + 0x8]          ; 0047bc3d
    FXCH ST2                            ; 0047bc40
    FSTP float ptr [EBP + 0xfffffe1a]   ; 0047bc42
    FSTP float ptr [EBP + 0xfffffe1e]   ; 0047bc48
    FSTP float ptr [EBP + 0xfffffe22]   ; 0047bc4e
    MOVSD ES:EDI,ESI                    ; 0047bc54
    MOVSD ES:EDI,ESI                    ; 0047bc55
    MOVSD ES:EDI,ESI                    ; 0047bc56
    FLD float ptr [EBP + 0xfffffe66]    ; 0047bc57
    FMUL ST0                            ; 0047bc5d
    FLD float ptr [EBP + 0xfffffe62]    ; 0047bc5f
    FMUL ST0                            ; 0047bc65
    FADDP                               ; 0047bc67
    FLD float ptr [EBP + 0xfffffe6a]    ; 0047bc69
    FMUL ST0                            ; 0047bc6f
    FADDP                               ; 0047bc71
    FSQRT                               ; 0047bc73
    FCOMP double ptr [0x005daead]       ; 0047bc75 | DAT_005daead
    FNSTSW AX                           ; 0047bc7b
    SAHF                                ; 0047bc7d
    JNC 0x0047bbf5                      ; 0047bc7e
        ;   XREF to: 0047bbf5 (CONDITIONAL_JUMP)  ; LAB_0047bbf5
    JMP 0x0047b7f0                      ; 0047bc84
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    CMP dword ptr [EBP + 0x46],0x0      ; 0047bc89
        ;   Label: LAB_0047bc89
    JZ 0x0047b7f0                       ; 0047bc8d
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    FLD float ptr [0x005ff19c]          ; 0047bc93 | DAT_005ff19c
    MOV EDX,dword ptr [EBP + 0x6a]      ; 0047bc99
    MOV dword ptr [EBX + 0xc2f4],0x3    ; 0047bc9c
    LEA EAX,[EBX + 0x20]                ; 0047bca6
    FSTP float ptr [EBX + 0xc2f8]       ; 0047bca9
    MOV ECX,dword ptr [EDX]             ; 0047bcaf
    MOV dword ptr [EAX],ECX             ; 0047bcb1
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047bcb3
    MOV dword ptr [EAX + 0x4],ECX       ; 0047bcb6
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047bcb9
    MOV dword ptr [EAX + 0x8],ECX       ; 0047bcbc
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0047bcbf
    TEST EDX,EDX                        ; 0047bcc5
    JZ 0x0047bd62                       ; 0047bcc7
        ;   XREF to: 0047bd62 (CONDITIONAL_JUMP)  ; LAB_0047bd62
    FLD float ptr [EDX + 0x20]          ; 0047bccd
    FLD float ptr [EDX + 0x24]          ; 0047bcd0
    FLD float ptr [EDX + 0x28]          ; 0047bcd3
    LEA EDI,[EBP + 0xffffff22]          ; 0047bcd6
    LEA ESI,[EBP + 0xfffffece]          ; 0047bcdc
    FXCH ST2                            ; 0047bce2
    FSUB float ptr [EAX]                ; 0047bce4
    FXCH                                ; 0047bce6
    FSUB float ptr [EAX + 0x4]          ; 0047bce8
    FXCH ST2                            ; 0047bceb
    FSUB float ptr [EAX + 0x8]          ; 0047bced
    FXCH                                ; 0047bcf0
    FSTP float ptr [EBP + 0xfffffece]   ; 0047bcf2
    FXCH                                ; 0047bcf8
    FSTP float ptr [EBP + 0xfffffed2]   ; 0047bcfa
    FSTP float ptr [EBP + 0xfffffed6]   ; 0047bd00
    LEA EAX,[EBP + 0xffffff22]          ; 0047bd06
    MOVSD ES:EDI,ESI                    ; 0047bd0c
    MOVSD ES:EDI,ESI                    ; 0047bd0d
    MOVSD ES:EDI,ESI                    ; 0047bd0e
    PUSH EAX                            ; 0047bd0f
    LEA ESI,[EBP + 0xfffffdde]          ; 0047bd10
    LEA EDI,[EBP + 0xfffffefe]          ; 0047bd16
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0047bd1c
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffdde]          ; 0047bd21
    LEA EAX,[EBP + 0xfffffefe]          ; 0047bd27
    ADD ESP,0x4                         ; 0047bd2d
    LEA EDX,[EBX + 0x30]                ; 0047bd30
    MOVSD ES:EDI,ESI                    ; 0047bd33
    MOVSD ES:EDI,ESI                    ; 0047bd34
    MOVSD ES:EDI,ESI                    ; 0047bd35
    CMP EDX,EAX                         ; 0047bd36
    JZ 0x0047bd54                       ; 0047bd38
        ;   XREF to: 0047bd54 (CONDITIONAL_JUMP)  ; LAB_0047bd54
    MOV EAX,dword ptr [EBP + 0xfffffefe] ; 0047bd3a
    MOV dword ptr [EDX],EAX             ; 0047bd40
    MOV EAX,dword ptr [EBP + 0xffffff02] ; 0047bd42
    MOV dword ptr [EDX + 0x4],EAX       ; 0047bd48
    MOV EAX,dword ptr [EBP + 0xffffff06] ; 0047bd4b
    MOV dword ptr [EDX + 0x8],EAX       ; 0047bd51
    MOV dword ptr [EBX + 0x38],0x0      ; 0047bd54
        ;   Label: LAB_0047bd54
    MOV dword ptr [EBX + 0x30],0x0      ; 0047bd5b
    PUSH 0x5dadba                       ; 0047bd62 | = "hotbride-disappear.wav"
        ;   Label: LAB_0047bd62
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047bd67
    PUSH EBX                            ; 0047bd6d
    CALL dword ptr [EAX + 0x2c]         ; 0047bd6e
    ADD ESP,0x8                         ; 0047bd71
    JMP 0x0047b7f0                      ; 0047bd74
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV ECX,0x40400000                  ; 0047bd79
        ;   Label: caseD_3
    LEA ESI,[EBX + 0x158]               ; 0047bd7e
    XOR EDX,EDX                         ; 0047bd84
    XOR EDI,EDI                         ; 0047bd86
    MOV dword ptr [EBP + 0xffffff3a],EDX ; 0047bd88
    PUSH ESI                            ; 0047bd8e
    MOV dword ptr [EBP + 0xffffff3e],ECX ; 0047bd8f
    MOV dword ptr [EBP + 0xffffff42],EDX ; 0047bd95
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0047bd9b
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x6e],EDI      ; 0047bda0
    MOV dword ptr [EBP + 0x5e],ESI      ; 0047bda3
    ADD ESP,0x4                         ; 0047bda6
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0047bda9
    MOV dword ptr [EBP + 0x56],EAX      ; 0047bdaf
    TEST EDX,EDX                        ; 0047bdb2
    JLE 0x0047be40                      ; 0047bdb4
        ;   XREF to: 0047be40 (CONDITIONAL_JUMP)  ; LAB_0047be40
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0047bdba
        ;   Label: LAB_0047bdba
    PUSH ESI                            ; 0047bdbd
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0047bdbe
    PUSH EDI                            ; 0047bdc1
    LEA ESI,[EBP + 0xfffffeaa]          ; 0047bdc2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 0047bdc8
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EDI,[EBP + -0x7e]               ; 0047bdcd
    ADD ESP,0x8                         ; 0047bdd0
    LEA EAX,[EBP + -0x7e]               ; 0047bdd3
    LEA ESI,[EBP + 0xfffffeaa]          ; 0047bdd6
    PUSH EAX                            ; 0047bddc
    MOVSD ES:EDI,ESI                    ; 0047bddd
    MOVSD ES:EDI,ESI                    ; 0047bdde
    MOVSD ES:EDI,ESI                    ; 0047bddf
    PUSH EBX                            ; 0047bde0
    LEA ESI,[EBP + 0xfffffdea]          ; 0047bde1
    CALL core_actor.cpp_FUN_00408b40    ; 0047bde7
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047bdec
    PUSH 0xffff                         ; 0047bdef
    LEA EAX,[EBP + 0xffffff3a]          ; 0047bdf4
    PUSH EAX                            ; 0047bdfa
    PUSH 0x3f000000                     ; 0047bdfb
    LEA EAX,[EBP + 0xfffffda2]          ; 0047be00
    LEA EDI,[EBP + 0xfffffda2]          ; 0047be06
    PUSH EAX                            ; 0047be0c
    MOV EAX,[0x0061c010]                ; 0047be0d | DAT_0061c010
    LEA ESI,[EBP + 0xfffffdea]          ; 0047be12
    PUSH EAX                            ; 0047be18
    MOVSD ES:EDI,ESI                    ; 0047be19
    MOVSD ES:EDI,ESI                    ; 0047be1a
    MOVSD ES:EDI,ESI                    ; 0047be1b
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 0047be1c
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0047be21
    INC EDX                             ; 0047be24
    MOV dword ptr [EBP + 0x6e],EDX      ; 0047be25
    MOV EAX,EDX                         ; 0047be28
    MOV EDX,dword ptr [EBP + 0x56]      ; 0047be2a
    MOV ECX,dword ptr [EDX + 0x1de78]   ; 0047be2d
    ADD ESP,0x14                        ; 0047be33
    CMP EAX,ECX                         ; 0047be36
    JL 0x0047bdba                       ; 0047be38
        ;   XREF to: 0047bdba (CONDITIONAL_JUMP)  ; LAB_0047bdba
    LEA EAX,[EAX]                       ; 0047be3a
    FLD float ptr [EBX + 0xc2f8]        ; 0047be40
        ;   Label: LAB_0047be40
    FSUB float ptr [EBP + 0x92]         ; 0047be46
    FST float ptr [EBX + 0xc2f8]        ; 0047be4c
    FLDZ                                ; 0047be52
    FCOMPP                              ; 0047be54
    FNSTSW AX                           ; 0047be56
    SAHF                                ; 0047be58
    JBE 0x0047b7f0                      ; 0047be59
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047be5f
    PUSH 0xe                            ; 0047be61
    MOV ESI,dword ptr [EBP + 0x5e]      ; 0047be63
    MOV dword ptr [EBX + 0xc2f8],0x0    ; 0047be66
    PUSH ESI                            ; 0047be70
    MOV dword ptr [EBX + 0xc2f4],0x0    ; 0047be71
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047be7b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047be80
    PUSH 0x41a00000                     ; 0047be83
    PUSH 0x40000000                     ; 0047be88
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047be8d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047be92
    ADD ESP,0x8                         ; 0047be95
    MOV EAX,dword ptr [EBP + 0x76]      ; 0047be98
    MOV dword ptr [EBX + 0xc300],EAX    ; 0047be9b
    JMP 0x0047b7f0                      ; 0047bea1
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    CMP dword ptr [EBX + 0xc408],0x0    ; 0047bea6
        ;   Label: caseD_7
    JNZ 0x0047b7f0                      ; 0047bead
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    MOV ESI,dword ptr [0x01bc0d50]      ; 0047beb3 | DAT_01bc0d50
    PUSH ESI                            ; 0047beb9
    LEA EAX,[EBX + 0x158]               ; 0047beba
    PUSH EAX                            ; 0047bec0
    LEA ESI,[EBP + 0xfffffe6e]          ; 0047bec1
    LEA EDI,[EBP + 0xffffff16]          ; 0047bec7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 0047becd
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 0047bed2
    LEA EAX,[EBP + 0xffffff16]          ; 0047bed5
    LEA ESI,[EBP + 0xfffffe6e]          ; 0047bedb
    PUSH EAX                            ; 0047bee1
    MOVSD ES:EDI,ESI                    ; 0047bee2
    MOVSD ES:EDI,ESI                    ; 0047bee3
    MOVSD ES:EDI,ESI                    ; 0047bee4
    PUSH EBX                            ; 0047bee5
    LEA ESI,[EBP + 0xfffffe86]          ; 0047bee6
    LEA EDI,[EBP + 0xfffffe3e]          ; 0047beec
    CALL core_actor.cpp_FUN_00408b40    ; 0047bef2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047bef7
    LEA ESI,[EBP + 0xfffffe86]          ; 0047befa
    LEA EAX,[EBX + 0x30]                ; 0047bf00
    PUSH 0x0                            ; 0047bf03
    MOVSD ES:EDI,ESI                    ; 0047bf05
    MOVSD ES:EDI,ESI                    ; 0047bf06
    MOVSD ES:EDI,ESI                    ; 0047bf07
    PUSH 0x1                            ; 0047bf08
    LEA EDI,[EBP + 0xfffffe26]          ; 0047bf0a
    LEA ESI,[EBP + 0xfffffe3e]          ; 0047bf10
    PUSH EAX                            ; 0047bf16
    LEA EAX,[EBP + 0xfffffe26]          ; 0047bf17
    MOVSD ES:EDI,ESI                    ; 0047bf1d
    MOVSD ES:EDI,ESI                    ; 0047bf1e
    MOVSD ES:EDI,ESI                    ; 0047bf1f
    PUSH EAX                            ; 0047bf20
    MOV EDI,dword ptr [0x0061c010]      ; 0047bf21 | DAT_0061c010
    PUSH EDI                            ; 0047bf27
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80 ; 0047bf28
        ;   XREF to: 004b6f80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    ADD ESP,0x14                        ; 0047bf2d
    LEA EDI,[EBP + 0xfffffe56]          ; 0047bf30
    PUSH 0x0                            ; 0047bf36
    LEA ESI,[EBX + 0x30]                ; 0047bf38
    LEA EAX,[EBP + 0xfffffe56]          ; 0047bf3b
    PUSH 0x1                            ; 0047bf41
    MOVSD ES:EDI,ESI                    ; 0047bf43
    MOVSD ES:EDI,ESI                    ; 0047bf44
    MOVSD ES:EDI,ESI                    ; 0047bf45
    PUSH EAX                            ; 0047bf46
    LEA EAX,[EBP + 0xfffffe26]          ; 0047bf47
    FLD float ptr [EBP + 0xfffffe56]    ; 0047bf4d
    PUSH EAX                            ; 0047bf53
    MOV EAX,[0x0061c010]                ; 0047bf54 | DAT_0061c010
    FADD float ptr [0x005dae9d]         ; 0047bf59 | DAT_005dae9d
    PUSH EAX                            ; 0047bf5f
    FSTP float ptr [EBP + 0xfffffe56]   ; 0047bf60
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80 ; 0047bf66
        ;   XREF to: 004b6f80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    ADD ESP,0x14                        ; 0047bf6b
    JMP 0x0047b7f0                      ; 0047bf6e
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffc9a]          ; 0047bf73
        ;   Label: caseD_2
    PUSH EAX                            ; 0047bf79
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0047bf7a
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0047bf7f
    PUSH 0x41700000                     ; 0047bf82
    PUSH 0x40e00000                     ; 0047bf87
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047bf8c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047bf91
    ADD ESP,0x8                         ; 0047bf94
    LEA EAX,[EBP + 0xfffffc9a]          ; 0047bf97
    MOV EDX,dword ptr [0x01bc0d34]      ; 0047bf9d | DAT_01bc0d34
    PUSH EAX                            ; 0047bfa3
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047bfa4
    LEA ESI,[EBP + 0xfffffd7e]          ; 0047bfab
    SUB EAX,EDX                         ; 0047bfb1
    MOV dword ptr [EBP + 0xfffffcce],EBX ; 0047bfb3
    MOV EDX,EAX                         ; 0047bfb9
    MOV dword ptr [EBP + 0xfffffcd2],EBX ; 0047bfbb
    SHL EDX,0x4                         ; 0047bfc1
    LEA EAX,[EBX + 0xfd8]               ; 0047bfc4
    PUSH 0x3ecccccd                     ; 0047bfca
    ADD EAX,EDX                         ; 0047bfcf
    LEA EDI,[EBP + 0xfffffe0e]          ; 0047bfd1
    PUSH EAX                            ; 0047bfd7
    MOV EAX,0x2c8af28                   ; 0047bfd8
    FLD float ptr [EBP + 0x76]          ; 0047bfdd
    PUSH EAX                            ; 0047bfe0 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffc9e]   ; 0047bfe1
    CALL core_xform.cpp_FUN_005b5080    ; 0047bfe7
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0047bfec
    LEA EAX,[EBP + 0xfffffe0e]          ; 0047bfef
    LEA ESI,[EBP + 0xfffffd7e]          ; 0047bff5
    PUSH EAX                            ; 0047bffb
    MOVSD ES:EDI,ESI                    ; 0047bffc
    MOVSD ES:EDI,ESI                    ; 0047bffd
    MOVSD ES:EDI,ESI                    ; 0047bffe
    PUSH EBX                            ; 0047bfff
    LEA ESI,[EBP + 0xfffffd96]          ; 0047c000
    CALL core_actor.cpp_FUN_00408b40    ; 0047c006
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047c00b
    LEA EAX,[EBP + -0x36]               ; 0047c00e
    PUSH EAX                            ; 0047c011
    LEA EDI,[EBP + -0x36]               ; 0047c012
    LEA ESI,[EBP + 0xfffffd96]          ; 0047c015
    PUSH EBX                            ; 0047c01b
    MOVSD ES:EDI,ESI                    ; 0047c01c
    MOVSD ES:EDI,ESI                    ; 0047c01d
    MOVSD ES:EDI,ESI                    ; 0047c01e
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0047c01f
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0047c024
    MOV dword ptr [EBX + 0xc310],0x1    ; 0047c027
    JMP 0x0047b7f0                      ; 0047c031
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffc22]          ; 0047c036
        ;   Label: caseD_13
    PUSH EAX                            ; 0047c03c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0047c03d
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0047c042
    PUSH 0x41700000                     ; 0047c045
    PUSH 0x40e00000                     ; 0047c04a
    LEA ESI,[EBP + 0xfffffeda]          ; 0047c04f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047c055
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c05a
    ADD ESP,0x8                         ; 0047c05d
    LEA EAX,[EBP + 0xfffffc22]          ; 0047c060
    MOV EDX,dword ptr [0x01bc0d34]      ; 0047c066 | DAT_01bc0d34
    PUSH EAX                            ; 0047c06c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047c06d
    MOV dword ptr [EBP + 0xfffffc56],EBX ; 0047c074
    SUB EAX,EDX                         ; 0047c07a
    MOV dword ptr [EBP + 0xfffffc5a],EBX ; 0047c07c
    SHL EAX,0x4                         ; 0047c082
    LEA EDX,[EBX + 0xfd8]               ; 0047c085
    PUSH 0x3ecccccd                     ; 0047c08b
    ADD EAX,EDX                         ; 0047c090
    LEA EDI,[EBP + -0x72]               ; 0047c092
    PUSH EAX                            ; 0047c095
    FLD float ptr [EBP + 0x76]          ; 0047c096
    PUSH 0x2c8af28                      ; 0047c099 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffc26]   ; 0047c09e
    CALL core_xform.cpp_FUN_005b5080    ; 0047c0a4
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0047c0a9
    LEA EAX,[EBP + -0x72]               ; 0047c0ac
    LEA ESI,[EBP + 0xfffffeda]          ; 0047c0af
    PUSH EAX                            ; 0047c0b5
    MOVSD ES:EDI,ESI                    ; 0047c0b6
    MOVSD ES:EDI,ESI                    ; 0047c0b7
    MOVSD ES:EDI,ESI                    ; 0047c0b8
    PUSH EBX                            ; 0047c0b9
    LEA ESI,[EBP + -0x1e]               ; 0047c0ba
    CALL core_actor.cpp_FUN_00408b40    ; 0047c0bd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047c0c2
    LEA EAX,[EBP + 0xffffff76]          ; 0047c0c5
    PUSH EAX                            ; 0047c0cb
    LEA EDI,[EBP + 0xffffff76]          ; 0047c0cc
    LEA ESI,[EBP + -0x1e]               ; 0047c0d2
    PUSH EBX                            ; 0047c0d5
    MOVSD ES:EDI,ESI                    ; 0047c0d6
    MOVSD ES:EDI,ESI                    ; 0047c0d7
    MOVSD ES:EDI,ESI                    ; 0047c0d8
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0047c0d9
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0047c0de
    MOV dword ptr [EBX + 0xc310],0x1    ; 0047c0e1
    JMP 0x0047b7f0                      ; 0047c0eb
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffcd6]          ; 0047c0f0
        ;   Label: caseD_14
    PUSH EAX                            ; 0047c0f6
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0047c0f7
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0047c0fc
    PUSH 0x41700000                     ; 0047c0ff
    PUSH 0x40e00000                     ; 0047c104
    LEA ESI,[EBP + 0xfffffd72]          ; 0047c109
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047c10f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c114
    ADD ESP,0x8                         ; 0047c117
    LEA EAX,[EBP + 0xfffffcd6]          ; 0047c11a
    MOV EDX,dword ptr [0x01bc0d34]      ; 0047c120 | DAT_01bc0d34
    PUSH EAX                            ; 0047c126
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047c127
    MOV dword ptr [EBP + 0xfffffd0a],EBX ; 0047c12e
    SUB EAX,EDX                         ; 0047c134
    MOV dword ptr [EBP + 0xfffffd0e],EBX ; 0047c136
    SHL EAX,0x4                         ; 0047c13c
    LEA EDX,[EBX + 0xfd8]               ; 0047c13f
    PUSH 0x3ecccccd                     ; 0047c145
    ADD EAX,EDX                         ; 0047c14a
    LEA EDI,[EBP + 0x1e]                ; 0047c14c
    PUSH EAX                            ; 0047c14f
    FLD float ptr [EBP + 0x76]          ; 0047c150
    PUSH 0x2c8af28                      ; 0047c153 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffcda]   ; 0047c158
    CALL core_xform.cpp_FUN_005b5080    ; 0047c15e
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0047c163
    LEA EAX,[EBP + 0x1e]                ; 0047c166
    LEA ESI,[EBP + 0xfffffd72]          ; 0047c169
    PUSH EAX                            ; 0047c16f
    MOVSD ES:EDI,ESI                    ; 0047c170
    MOVSD ES:EDI,ESI                    ; 0047c171
    MOVSD ES:EDI,ESI                    ; 0047c172
    PUSH EBX                            ; 0047c173
    LEA ESI,[EBP + 0xfffffd4e]          ; 0047c174
    CALL core_actor.cpp_FUN_00408b40    ; 0047c17a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047c17f
    LEA EAX,[EBP + -0x66]               ; 0047c182
    PUSH EAX                            ; 0047c185
    LEA EDI,[EBP + -0x66]               ; 0047c186
    LEA ESI,[EBP + 0xfffffd4e]          ; 0047c189
    PUSH EBX                            ; 0047c18f
    MOVSD ES:EDI,ESI                    ; 0047c190
    MOVSD ES:EDI,ESI                    ; 0047c191
    MOVSD ES:EDI,ESI                    ; 0047c192
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0047c193
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0047c198
    MOV dword ptr [EBX + 0xc310],0x1    ; 0047c19b
    JMP 0x0047b7f0                      ; 0047c1a5
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffd12]          ; 0047c1aa
        ;   Label: caseD_15
    PUSH EAX                            ; 0047c1b0
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0047c1b1
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0047c1b6
    PUSH 0x41700000                     ; 0047c1b9
    PUSH 0x40e00000                     ; 0047c1be
    LEA ESI,[EBP + 0xfffffd8a]          ; 0047c1c3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047c1c9
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c1ce
    ADD ESP,0x8                         ; 0047c1d1
    LEA EAX,[EBP + 0xfffffd12]          ; 0047c1d4
    MOV EDX,dword ptr [0x01bc0d3c]      ; 0047c1da | DAT_01bc0d3c
    PUSH EAX                            ; 0047c1e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047c1e1
    MOV dword ptr [EBP + 0xfffffd46],EBX ; 0047c1e8
    SUB EAX,EDX                         ; 0047c1ee
    MOV dword ptr [EBP + 0xfffffd4a],EBX ; 0047c1f0
    SHL EAX,0x4                         ; 0047c1f6
    LEA EDX,[EBX + 0xfd8]               ; 0047c1f9
    PUSH 0x3ecccccd                     ; 0047c1ff
    ADD EAX,EDX                         ; 0047c204
    LEA EDI,[EBP + 0xfffffd5a]          ; 0047c206
    PUSH EAX                            ; 0047c20c
    FLD float ptr [EBP + 0x76]          ; 0047c20d
    PUSH 0x2c8af28                      ; 0047c210 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffd16]   ; 0047c215
    CALL core_xform.cpp_FUN_005b5080    ; 0047c21b
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0047c220
    LEA EAX,[EBP + 0xfffffd5a]          ; 0047c223
    LEA ESI,[EBP + 0xfffffd8a]          ; 0047c229
    PUSH EAX                            ; 0047c22f
    MOVSD ES:EDI,ESI                    ; 0047c230
    MOVSD ES:EDI,ESI                    ; 0047c231
    MOVSD ES:EDI,ESI                    ; 0047c232
    PUSH EBX                            ; 0047c233
    LEA ESI,[EBP + 0xffffff5e]          ; 0047c234
    CALL core_actor.cpp_FUN_00408b40    ; 0047c23a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047c23f
    LEA EAX,[EBP + 0xfffffe32]          ; 0047c242
    PUSH EAX                            ; 0047c248
    LEA EDI,[EBP + 0xfffffe32]          ; 0047c249
    LEA ESI,[EBP + 0xffffff5e]          ; 0047c24f
    PUSH EBX                            ; 0047c255
    MOVSD ES:EDI,ESI                    ; 0047c256
    MOVSD ES:EDI,ESI                    ; 0047c257
    MOVSD ES:EDI,ESI                    ; 0047c258
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0047c259
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0047c25e
    JMP 0x0047b7f0                      ; 0047c261
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 0047c266
        ;   Label: caseD_11
    JNZ 0x0047b7f0                      ; 0047c26d
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    CMP dword ptr [EBX + 0xdc],0x0      ; 0047c273
    JNZ 0x0047b7f0                      ; 0047c27a
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH EAX                            ; 0047c280
    LEA EAX,[EBX + 0x158]               ; 0047c281
    PUSH EAX                            ; 0047c287
    LEA ESI,[EBP + 0xfffffdd2]          ; 0047c288
    LEA EDI,[EBP + 0xfffffe9e]          ; 0047c28e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 0047c294
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 0047c299
    LEA EAX,[EBP + 0xfffffe9e]          ; 0047c29c
    LEA ESI,[EBP + 0xfffffdd2]          ; 0047c2a2
    PUSH EAX                            ; 0047c2a8
    MOVSD ES:EDI,ESI                    ; 0047c2a9
    MOVSD ES:EDI,ESI                    ; 0047c2aa
    MOVSD ES:EDI,ESI                    ; 0047c2ab
    PUSH EBX                            ; 0047c2ac
    LEA ESI,[EBP + 0xfffffe4a]          ; 0047c2ad
    CALL core_actor.cpp_FUN_00408b40    ; 0047c2b3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047c2b8
    PUSH 0x0                            ; 0047c2bb
    LEA EAX,[EBP + 0xffffff6a]          ; 0047c2bd
    LEA EDI,[EBP + 0xffffff6a]          ; 0047c2c3
    PUSH EAX                            ; 0047c2c9
    MOV EAX,[0x0061dca4]                ; 0047c2ca | g_CGorePtr
    LEA ESI,[EBP + 0xfffffe4a]          ; 0047c2cf
    PUSH EAX                            ; 0047c2d5
    MOVSD ES:EDI,ESI                    ; 0047c2d6
    MOVSD ES:EDI,ESI                    ; 0047c2d7
    MOVSD ES:EDI,ESI                    ; 0047c2d8
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 0047c2d9
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0047c2de
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0047c2e1
        ;   Label: caseD_10
    JMP 0x0047b7f0                      ; 0047c2eb
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,[0x01d06ab4]                ; 0047c2f0 | DAT_01d06ab4
        ;   Label: caseD_c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0047c2f5
    PUSH EAX                            ; 0047c2fc
    MOV EDX,dword ptr [EAX + 0x154]     ; 0047c2fd
    CALL dword ptr [EDX + 0x10c]        ; 0047c303
    ADD ESP,0x4                         ; 0047c309
    TEST EAX,EAX                        ; 0047c30c
    JNZ 0x0047b7f0                      ; 0047c30e
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBX + 0xc28c]              ; 0047c314
    PUSH EAX                            ; 0047c31a
    MOV ESI,dword ptr [0x0061b4d0]      ; 0047c31b | DAT_0061b4d0
    PUSH ESI                            ; 0047c321
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0047c322
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0047c327
    TEST EAX,EAX                        ; 0047c32a
    JZ 0x0047b7f0                       ; 0047c32c
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c332
    PUSH 0xd                            ; 0047c334
    LEA EAX,[EBX + 0x158]               ; 0047c336
    PUSH EAX                            ; 0047c33c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c33d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c342
    JMP 0x0047b7f0                      ; 0047c345
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,[0x01d06ab4]                ; 0047c34a | DAT_01d06ab4
        ;   Label: caseD_12
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0047c34f
    PUSH EAX                            ; 0047c356
    MOV EDX,dword ptr [EAX + 0x154]     ; 0047c357
    CALL dword ptr [EDX + 0x10c]        ; 0047c35d
    ADD ESP,0x4                         ; 0047c363
    TEST EAX,EAX                        ; 0047c366
    JNZ 0x0047b7f0                      ; 0047c368
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBX + 0xc28c]              ; 0047c36e
    PUSH EAX                            ; 0047c374
    MOV ECX,dword ptr [0x0061b4d0]      ; 0047c375 | DAT_0061b4d0
    PUSH ECX                            ; 0047c37b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0047c37c
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0047c381
    TEST EAX,EAX                        ; 0047c384
    JZ 0x0047b7f0                       ; 0047c386
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c38c
    PUSH 0xd                            ; 0047c38e
    LEA EAX,[EBX + 0x158]               ; 0047c390
    PUSH EAX                            ; 0047c396
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c397
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c39c
    JMP 0x0047b7f0                      ; 0047c39f
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBX + 0xc28c]              ; 0047c3a4
        ;   Label: caseD_1a
    PUSH EAX                            ; 0047c3aa
    MOV EDI,dword ptr [0x0061b4d0]      ; 0047c3ab | DAT_0061b4d0
    PUSH EDI                            ; 0047c3b1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0047c3b2
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0047c3b7
    TEST EAX,EAX                        ; 0047c3ba
    JZ 0x0047b7f0                       ; 0047c3bc
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c3c2
    PUSH 0x0                            ; 0047c3c4
    LEA EAX,[EBX + 0x158]               ; 0047c3c6
    PUSH EAX                            ; 0047c3cc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c3cd
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c3d2
    JMP 0x0047b7f0                      ; 0047c3d5
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBX + 0xc28c]              ; 0047c3da
        ;   Label: caseD_f
    PUSH EAX                            ; 0047c3e0
    MOV EDX,dword ptr [0x0061b4d0]      ; 0047c3e1 | DAT_0061b4d0
    PUSH EDX                            ; 0047c3e7
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0047c3e8
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0047c3ed
    TEST EAX,EAX                        ; 0047c3f0
    JZ 0x0047b7f0                       ; 0047c3f2
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c3f8
    PUSH 0xb                            ; 0047c3fa
    LEA EAX,[EBX + 0x158]               ; 0047c3fc
    PUSH EAX                            ; 0047c402
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c403
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c408
    JMP 0x0047b7f0                      ; 0047c40b
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH dword ptr [EBP + 0x92]         ; 0047c410
        ;   Label: caseD_8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047c416
    PUSH EBX                            ; 0047c41c
    CALL dword ptr [EAX + 0x144]        ; 0047c41d
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0047c423
    ADD ESP,0x8                         ; 0047c429
    TEST EAX,EAX                        ; 0047c42c
    JZ 0x0047c4b1                       ; 0047c42e
        ;   XREF to: 0047c4b1 (CONDITIONAL_JUMP)  ; LAB_0047c4b1
    FLD float ptr [EBX + 0x2538]        ; 0047c434
    FCOMP float ptr [0x005ff18c]        ; 0047c43a | DAT_005ff18c
    FNSTSW AX                           ; 0047c440
    SAHF                                ; 0047c442
    JC 0x0047c454                       ; 0047c443
        ;   XREF to: 0047c454 (CONDITIONAL_JUMP)  ; LAB_0047c454
    FLD float ptr [EBX + 0xc300]        ; 0047c445
    FLDZ                                ; 0047c44b
    FCOMPP                              ; 0047c44d
    FNSTSW AX                           ; 0047c44f
    SAHF                                ; 0047c451
    JBE 0x0047c485                      ; 0047c452
        ;   XREF to: 0047c485 (CONDITIONAL_JUMP)  ; LAB_0047c485
    PUSH 0x1                            ; 0047c454
        ;   Label: LAB_0047c454
    PUSH 0x0                            ; 0047c456
    LEA EAX,[EBX + 0x158]               ; 0047c458
    PUSH EAX                            ; 0047c45e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c45f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c464
    PUSH 0x41a00000                     ; 0047c467
    PUSH 0x40000000                     ; 0047c46c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047c471
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c476
    ADD ESP,0x8                         ; 0047c479
    MOV EAX,dword ptr [EBP + 0x76]      ; 0047c47c
    MOV dword ptr [EBX + 0xc300],EAX    ; 0047c47f
    MOV EDX,dword ptr [EBX + 0xc310]    ; 0047c485
        ;   Label: LAB_0047c485
    LEA EAX,[EBX + 0x158]               ; 0047c48b
    TEST EDX,EDX                        ; 0047c491
    JZ 0x0047c4e0                       ; 0047c493
        ;   XREF to: 0047c4e0 (CONDITIONAL_JUMP)  ; LAB_0047c4e0
    PUSH 0x1                            ; 0047c495
    PUSH 0x19                           ; 0047c497
    PUSH EAX                            ; 0047c499
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c49a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c49f
    MOV dword ptr [EBX + 0xc310],0x0    ; 0047c4a2
    JMP 0x0047b7f0                      ; 0047c4ac
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH dword ptr [EBP + 0x92]         ; 0047c4b1
        ;   Label: LAB_0047c4b1
    PUSH EBX                            ; 0047c4b7
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0047c4b8
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047c4bd
    TEST EAX,EAX                        ; 0047c4c0
    JZ 0x0047b7f0                       ; 0047c4c2
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c4c8
    PUSH 0xe                            ; 0047c4ca
    LEA EAX,[EBX + 0x158]               ; 0047c4cc
    PUSH EAX                            ; 0047c4d2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c4d3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c4d8
    JMP 0x0047b7f0                      ; 0047c4db
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c4e0
        ;   Label: LAB_0047c4e0
    PUSH 0x9                            ; 0047c4e2
    PUSH EAX                            ; 0047c4e4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c4e5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c4ea
    JMP 0x0047b7f0                      ; 0047c4ed
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    FLD float ptr [EBX + 0xc2fc]        ; 0047c4f2
        ;   Label: caseD_9
    FLDZ                                ; 0047c4f8
    FCOMPP                              ; 0047c4fa
    FNSTSW AX                           ; 0047c4fc
    SAHF                                ; 0047c4fe
    JC 0x0047c557                       ; 0047c4ff
        ;   XREF to: 0047c557 (CONDITIONAL_JUMP)  ; LAB_0047c557
    MOV EDI,dword ptr [EBX + 0xc2f0]    ; 0047c501
    PUSH EDI                            ; 0047c507
    PUSH 0x5dadd1                       ; 0047c508 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffa92]          ; 0047c50d
    PUSH EAX                            ; 0047c513
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0047c514
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047c519
    LEA EAX,[EBP + 0xfffffa92]          ; 0047c51c
    PUSH 0x3f800000                     ; 0047c522
    PUSH EAX                            ; 0047c527
    PUSH EBX                            ; 0047c528
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047c529
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047c52e
    PUSH 0x3e4ccccd                     ; 0047c531
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0047c536
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0047c53b
    TEST EAX,EAX                        ; 0047c53e
    JZ 0x0047c557                       ; 0047c540
        ;   XREF to: 0047c557 (CONDITIONAL_JUMP)  ; LAB_0047c557
    LEA EAX,[EBP + 0xfffffa92]          ; 0047c542
    PUSH 0x3f800000                     ; 0047c548
    PUSH EAX                            ; 0047c54d
    PUSH EBX                            ; 0047c54e
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047c54f
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047c554
    PUSH dword ptr [EBP + 0x92]         ; 0047c557
        ;   Label: LAB_0047c557
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047c55d
    PUSH EBX                            ; 0047c563
    CALL dword ptr [EAX + 0x144]        ; 0047c564
    ADD ESP,0x8                         ; 0047c56a
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0047c56d
    LEA ESI,[EBX + 0x158]               ; 0047c573
    TEST EAX,EAX                        ; 0047c579
    JZ 0x0047c5bc                       ; 0047c57b
        ;   XREF to: 0047c5bc (CONDITIONAL_JUMP)  ; LAB_0047c5bc
    FLD float ptr [EBX + 0xc300]        ; 0047c57d
    FLDZ                                ; 0047c583
    FCOMPP                              ; 0047c585
    FNSTSW AX                           ; 0047c587
    SAHF                                ; 0047c589
    JBE 0x0047c5e5                      ; 0047c58a
        ;   XREF to: 0047c5e5 (CONDITIONAL_JUMP)  ; LAB_0047c5e5
    PUSH 0x41a00000                     ; 0047c58c
    PUSH 0x40000000                     ; 0047c591
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047c596
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 0047c59b
    PUSH 0x1                            ; 0047c59e
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c5a0
    PUSH 0x0                            ; 0047c5a3
    FLD float ptr [EBP + 0x76]          ; 0047c5a5
    PUSH ESI                            ; 0047c5a8
    FSTP float ptr [EBX + 0xc300]       ; 0047c5a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c5af
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c5b4
    JMP 0x0047b7f0                      ; 0047c5b7
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH dword ptr [EBP + 0x92]         ; 0047c5bc
        ;   Label: LAB_0047c5bc
    PUSH EBX                            ; 0047c5c2
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0047c5c3
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047c5c8
    TEST EAX,EAX                        ; 0047c5cb
    JZ 0x0047b7f0                       ; 0047c5cd
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c5d3
        ;   Label: LAB_0047c5d3
    PUSH 0xe                            ; 0047c5d5
    PUSH ESI                            ; 0047c5d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c5d8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c5dd
    JMP 0x0047b7f0                      ; 0047c5e0
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x3db2b8c2                     ; 0047c5e5
        ;   Label: LAB_0047c5e5
    PUSH 0x3f000000                     ; 0047c5ea
    MOV EAX,[0x005ff180]                ; 0047c5ef | DAT_005ff180
    XOR EDX,EDX                         ; 0047c5f4
    MOV dword ptr [EBP + 0xffffff46],EDX ; 0047c5f6
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 0047c5fc
    LEA EAX,[EBP + 0xffffff46]          ; 0047c602
    MOV dword ptr [EBP + 0xffffff4a],EDX ; 0047c608
    PUSH EAX                            ; 0047c60e
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0047c60f
    PUSH EAX                            ; 0047c615
    MOV EDX,dword ptr [EAX + 0x154]     ; 0047c616
    CALL dword ptr [EDX + 0xc4]         ; 0047c61c
    ADD ESP,0x4                         ; 0047c622
    PUSH EAX                            ; 0047c625
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0047c626
    ADD EAX,0x20                        ; 0047c62c
    PUSH EAX                            ; 0047c62f
    PUSH EBX                            ; 0047c630
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0047c631
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0047c636
    TEST EAX,EAX                        ; 0047c639
    JL 0x0047c680                       ; 0047c63b
        ;   XREF to: 0047c680 (CONDITIONAL_JUMP)  ; LAB_0047c680
    JLE 0x0047c6a7                      ; 0047c63d
        ;   XREF to: 0047c6a7 (CONDITIONAL_JUMP)  ; LAB_0047c6a7
    FLD float ptr [EBX + 0xc1e4]        ; 0047c63f
    FLDZ                                ; 0047c645
    FCOMPP                              ; 0047c647
    FNSTSW AX                           ; 0047c649
    SAHF                                ; 0047c64b
    JC 0x0047b7f0                       ; 0047c64c
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c652
    PUSH 0x2                            ; 0047c654
    PUSH ESI                            ; 0047c656
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c657
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c65c
    PUSH 0x5dae00                       ; 0047c65f | = "hotbride-bite?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047c664
    PUSH EBX                            ; 0047c66a
    CALL dword ptr [EAX + 0x2c]         ; 0047c66b
    ADD ESP,0x8                         ; 0047c66e
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 0047c671
    JMP 0x0047b7f0                      ; 0047c67b
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH EBX                            ; 0047c680
        ;   Label: LAB_0047c680
    PUSH 0x5daddf                       ; 0047c681 | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x00611100]      ; 0047c686 | g_CConsolePtr
    PUSH EDI                            ; 0047c68c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0047c68d
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047c692
    PUSH 0x1                            ; 0047c695
    PUSH 0x8                            ; 0047c697
    PUSH ESI                            ; 0047c699
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c69a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c69f
    JMP 0x0047b7f0                      ; 0047c6a2
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EDI,[EBP + -0x42]               ; 0047c6a7
        ;   Label: LAB_0047c6a7
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0047c6aa
    LEA ESI,[EBP + 0xfffffee6]          ; 0047c6b0
    LEA EDX,[EBX + 0x20]                ; 0047c6b6
    FLD float ptr [EAX + 0x24]          ; 0047c6b9
    FLD float ptr [EAX + 0x28]          ; 0047c6bc
    FLD float ptr [EAX + 0x20]          ; 0047c6bf
    LEA EAX,[EBP + -0x42]               ; 0047c6c2
    FSUB float ptr [EDX]                ; 0047c6c5
    FXCH ST2                            ; 0047c6c7
    FSUB float ptr [EDX + 0x4]          ; 0047c6c9
    FXCH                                ; 0047c6cc
    FSUB float ptr [EDX + 0x8]          ; 0047c6ce
    FXCH ST2                            ; 0047c6d1
    FSTP float ptr [EBP + 0xfffffee6]   ; 0047c6d3
    FSTP float ptr [EBP + 0xfffffeea]   ; 0047c6d9
    FSTP float ptr [EBP + 0xfffffeee]   ; 0047c6df
    LEA EDX,[EBP + 0xffffff52]          ; 0047c6e5
    MOVSD ES:EDI,ESI                    ; 0047c6eb
    MOVSD ES:EDI,ESI                    ; 0047c6ec
    MOVSD ES:EDI,ESI                    ; 0047c6ed
    CMP EDX,EAX                         ; 0047c6ee
    JZ 0x0047c70d                       ; 0047c6f0
        ;   XREF to: 0047c70d (CONDITIONAL_JUMP)  ; LAB_0047c70d
    MOV EAX,dword ptr [EBP + -0x42]     ; 0047c6f2
    MOV dword ptr [EBP + 0xffffff52],EAX ; 0047c6f5
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0047c6fb
    MOV dword ptr [EBP + 0xffffff56],EAX ; 0047c6fe
    MOV EAX,dword ptr [EBP + -0x3a]     ; 0047c704
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 0047c707
    FLD float ptr [EBP + 0xffffff56]    ; 0047c70d
        ;   Label: LAB_0047c70d
    FMUL ST0                            ; 0047c713
    FLD float ptr [EBP + 0xffffff52]    ; 0047c715
    FMUL ST0                            ; 0047c71b
    FADDP                               ; 0047c71d
    FLD float ptr [EBP + 0xffffff5a]    ; 0047c71f
    FMUL ST0                            ; 0047c725
    FADDP                               ; 0047c727
    FSQRT                               ; 0047c729
    FCOMP double ptr [0x005dae8d]       ; 0047c72b | DAT_005dae8d
    FNSTSW AX                           ; 0047c731
    SAHF                                ; 0047c733
    JBE 0x0047b7f0                      ; 0047c734
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xffffff52]          ; 0047c73a
    PUSH EAX                            ; 0047c740
    LEA ESI,[EBP + -0x6]                ; 0047c741
    LEA EDI,[EBP + 0xffffff2e]          ; 0047c744
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0047c74a
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + -0x6]                ; 0047c74f
    MOVSD ES:EDI,ESI                    ; 0047c752
    MOVSD ES:EDI,ESI                    ; 0047c753
    MOVSD ES:EDI,ESI                    ; 0047c754
    ADD ESP,0x4                         ; 0047c755
    FLD float ptr [EBP + 0xffffff32]    ; 0047c758
    FSUB float ptr [EBX + 0x34]         ; 0047c75e
    SUB ESP,0x4                         ; 0047c761
    FSTP float ptr [ESP]                ; 0047c764
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0047c767
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c76c
    FLD float ptr [EBP + 0x76]          ; 0047c76f
    FABS                                ; 0047c772
    ADD ESP,0x4                         ; 0047c774
    FCOMP double ptr [0x005dae95]       ; 0047c777 | DAT_005dae95
    FNSTSW AX                           ; 0047c77d
    SAHF                                ; 0047c77f
    JNC 0x0047b7f0                      ; 0047c780
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x3f490fdb                     ; 0047c786
    PUSH 0xbf490fdb                     ; 0047c78b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047c790
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 0047c795
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c798
    PUSH 0x1                            ; 0047c79b
    FLD float ptr [EBP + 0x76]          ; 0047c79d
    LEA EAX,[EBX + 0x158]               ; 0047c7a0
    PUSH 0x3                            ; 0047c7a6
    FADD float ptr [EBX + 0x34]         ; 0047c7a8
    PUSH EAX                            ; 0047c7ab
    FSTP float ptr [EBX + 0x34]         ; 0047c7ac
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c7af
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c7b4
    JMP 0x0047b7f0                      ; 0047c7b7
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffc5e]          ; 0047c7bc
        ;   Label: caseD_3
    PUSH EAX                            ; 0047c7c2
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0047c7c3
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0047c7c8
    PUSH 0x41700000                     ; 0047c7cb
    PUSH 0x40e00000                     ; 0047c7d0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047c7d5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c7da
    ADD ESP,0x8                         ; 0047c7dd
    LEA EAX,[EBP + 0xfffffc5e]          ; 0047c7e0
    MOV EDX,dword ptr [0x01bc0d34]      ; 0047c7e6 | DAT_01bc0d34
    PUSH EAX                            ; 0047c7ec
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047c7ed
    LEA ESI,[EBP + 0x12]                ; 0047c7f4
    SUB EAX,EDX                         ; 0047c7f7
    MOV dword ptr [EBP + 0xfffffc92],EBX ; 0047c7f9
    MOV EDX,EAX                         ; 0047c7ff
    MOV dword ptr [EBP + 0xfffffc96],EBX ; 0047c801
    SHL EDX,0x4                         ; 0047c807
    LEA EAX,[EBX + 0xfd8]               ; 0047c80a
    PUSH 0x3ecccccd                     ; 0047c810
    ADD EAX,EDX                         ; 0047c815
    LEA EDI,[EBP + 0x6]                 ; 0047c817
    PUSH EAX                            ; 0047c81a
    MOV EAX,0x2c8af28                   ; 0047c81b
    FLD float ptr [EBP + 0x76]          ; 0047c820
    PUSH EAX                            ; 0047c823 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffc62]   ; 0047c824
    CALL core_xform.cpp_FUN_005b5080    ; 0047c82a
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0047c82f
    LEA EAX,[EBP + 0x6]                 ; 0047c832
    LEA ESI,[EBP + 0x12]                ; 0047c835
    PUSH EAX                            ; 0047c838
    MOVSD ES:EDI,ESI                    ; 0047c839
    MOVSD ES:EDI,ESI                    ; 0047c83a
    MOVSD ES:EDI,ESI                    ; 0047c83b
    PUSH EBX                            ; 0047c83c
    LEA ESI,[EBP + 0xfffffe92]          ; 0047c83d
    CALL core_actor.cpp_FUN_00408b40    ; 0047c843
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047c848
    LEA EAX,[EBP + -0x4e]               ; 0047c84b
    PUSH EAX                            ; 0047c84e
    LEA EDI,[EBP + -0x4e]               ; 0047c84f
    LEA ESI,[EBP + 0xfffffe92]          ; 0047c852
    PUSH EBX                            ; 0047c858
    MOVSD ES:EDI,ESI                    ; 0047c859
    MOVSD ES:EDI,ESI                    ; 0047c85a
    MOVSD ES:EDI,ESI                    ; 0047c85b
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0047c85c
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0047c861
    JMP 0x0047b7f0                      ; 0047c864
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH dword ptr [EBP + 0x92]         ; 0047c869
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047c86f
    PUSH EBX                            ; 0047c875
    CALL dword ptr [EAX + 0x144]        ; 0047c876
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0047c87c
    ADD ESP,0x8                         ; 0047c882
    TEST EDX,EDX                        ; 0047c885
    JNZ 0x0047c8b8                      ; 0047c887
        ;   XREF to: 0047c8b8 (CONDITIONAL_JUMP)  ; LAB_0047c8b8
    PUSH dword ptr [EBP + 0x92]         ; 0047c889
    PUSH EBX                            ; 0047c88f
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0047c890
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047c895
    TEST EAX,EAX                        ; 0047c898
    JZ 0x0047b7f0                       ; 0047c89a
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047c8a0
    PUSH 0xe                            ; 0047c8a2
    LEA EAX,[EBX + 0x158]               ; 0047c8a4
    PUSH EAX                            ; 0047c8aa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c8ab
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c8b0
    JMP 0x0047b7f0                      ; 0047c8b3
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x3e800000                     ; 0047c8b8
        ;   Label: LAB_0047c8b8
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0047c8bd
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0047c8c2
    TEST EAX,EAX                        ; 0047c8c5
    JNZ 0x0047c912                      ; 0047c8c7
        ;   XREF to: 0047c912 (CONDITIONAL_JUMP)  ; LAB_0047c912
    FLD float ptr [EBX + 0xc300]        ; 0047c8c9
        ;   Label: LAB_0047c8c9
    FLDZ                                ; 0047c8cf
    LEA ESI,[EBX + 0x158]               ; 0047c8d1
    FCOMPP                              ; 0047c8d7
    FNSTSW AX                           ; 0047c8d9
    SAHF                                ; 0047c8db
    JBE 0x0047c5d3                      ; 0047c8dc
        ;   XREF to: 0047c5d3 (CONDITIONAL_JUMP)  ; LAB_0047c5d3
    PUSH 0x41a00000                     ; 0047c8e2
    PUSH 0x40000000                     ; 0047c8e7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047c8ec
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 0047c8f1
    PUSH 0x1                            ; 0047c8f4
    MOV dword ptr [EBP + 0x76],EAX      ; 0047c8f6
    PUSH 0xd                            ; 0047c8f9
    FLD float ptr [EBP + 0x76]          ; 0047c8fb
    PUSH ESI                            ; 0047c8fe
    FSTP float ptr [EBX + 0xc300]       ; 0047c8ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c905
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c90a
    JMP 0x0047b7f0                      ; 0047c90d
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,0x5dae13                    ; 0047c912 | = "CHero"
        ;   Label: LAB_0047c912
    PUSH EAX                            ; 0047c917 | = "CHero"
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0047c918
    PUSH ECX                            ; 0047c91e
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0047c91f
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0047c924
    TEST EAX,EAX                        ; 0047c927
    JZ 0x0047c8c9                       ; 0047c929
        ;   XREF to: 0047c8c9 (CONDITIONAL_JUMP)  ; LAB_0047c8c9
    XOR ESI,ESI                         ; 0047c92b
    LEA EDI,[ESI*0x4 + 0x0]             ; 0047c92d
    MOV EAX,[0x00622c18]                ; 0047c934 | g_CDemonSetPtr
        ;   Label: LAB_0047c934
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 0047c939 | g_CDemonSetInstance.enemy_count
    JGE 0x0047c96b                      ; 0047c93f
        ;   XREF to: 0047c96b (CONDITIONAL_JUMP)  ; LAB_0047c96b
    MOV ECX,dword ptr [0x01bc0d30]      ; 0047c941 | g_CDraculaBrideClassInfo.name_hash
    PUSH ECX                            ; 0047c947
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 0047c948
    PUSH EDX                            ; 0047c94f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0047c950
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0047c955
    TEST EAX,EAX                        ; 0047c958
    JNZ 0x0047c962                      ; 0047c95a
        ;   XREF to: 0047c962 (CONDITIONAL_JUMP)  ; LAB_0047c962
    INC ESI                             ; 0047c95c
        ;   Label: LAB_0047c95c
    ADD EDI,0x4                         ; 0047c95d
    JMP 0x0047c934                      ; 0047c960
        ;   XREF to: 0047c934 (UNCONDITIONAL_JUMP)  ; LAB_0047c934
    CMP dword ptr [EAX + 0xc2f4],0x0    ; 0047c962
        ;   Label: LAB_0047c962
    JZ 0x0047c95c                       ; 0047c969
        ;   XREF to: 0047c95c (CONDITIONAL_JUMP)  ; LAB_0047c95c
    MOV EAX,[0x00622c18]                ; 0047c96b | g_CDemonSetPtr
        ;   Label: LAB_0047c96b
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 0047c970 | g_CDemonSetInstance.enemy_count
    JNZ 0x0047c8c9                      ; 0047c976
        ;   XREF to: 0047c8c9 (CONDITIONAL_JUMP)  ; LAB_0047c8c9
    MOV EAX,dword ptr [EBX + 0xc2f0]    ; 0047c97c
    PUSH EAX                            ; 0047c982
    PUSH 0x5dae19                       ; 0047c983 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffb5a]          ; 0047c988
    PUSH EAX                            ; 0047c98e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0047c98f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047c994
    LEA EAX,[EBP + 0xfffffb5a]          ; 0047c997
    PUSH 0x3f800000                     ; 0047c99d
    PUSH EAX                            ; 0047c9a2
    PUSH EBX                            ; 0047c9a3
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047c9a4
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047c9a9
    PUSH 0x1                            ; 0047c9ac
    PUSH 0x17                           ; 0047c9ae
    LEA EAX,[EBX + 0x158]               ; 0047c9b0
    PUSH EAX                            ; 0047c9b6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047c9b7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047c9bc
    PUSH 0x5dae27                       ; 0047c9bf | = "hotbride-disappear.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047c9c4
    PUSH EBX                            ; 0047c9ca
    CALL dword ptr [EAX + 0x2c]         ; 0047c9cb
    ADD ESP,0x8                         ; 0047c9ce
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0047c9d1
    LEA EAX,[EBX + 0xc304]              ; 0047c9d7
    ADD EDX,0x20                        ; 0047c9dd
    MOV dword ptr [EBX + 0xc2f4],0x1    ; 0047c9e0
    CMP EAX,EDX                         ; 0047c9ea
    JZ 0x0047c9fe                       ; 0047c9ec
        ;   XREF to: 0047c9fe (CONDITIONAL_JUMP)  ; LAB_0047c9fe
    MOV ECX,dword ptr [EDX]             ; 0047c9ee
    MOV dword ptr [EAX],ECX             ; 0047c9f0
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047c9f2
    MOV dword ptr [EAX + 0x4],ECX       ; 0047c9f5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047c9f8
    MOV dword ptr [EAX + 0x8],ECX       ; 0047c9fb
    MOV dword ptr [EBX + 0xc2f8],0x0    ; 0047c9fe
        ;   Label: LAB_0047c9fe
    JMP 0x0047b7f0                      ; 0047ca08
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    FLD float ptr [EBX + 0xc2fc]        ; 0047ca0d
        ;   Label: caseD_e
    FLDZ                                ; 0047ca13
    FCOMPP                              ; 0047ca15
    FNSTSW AX                           ; 0047ca17
    SAHF                                ; 0047ca19
    JC 0x0047ca72                       ; 0047ca1a
        ;   XREF to: 0047ca72 (CONDITIONAL_JUMP)  ; LAB_0047ca72
    MOV ECX,dword ptr [EBX + 0xc2f0]    ; 0047ca1c
    PUSH ECX                            ; 0047ca22
    PUSH 0x5dae3e                       ; 0047ca23 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffbbe]          ; 0047ca28
    PUSH EAX                            ; 0047ca2e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0047ca2f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047ca34
    LEA EAX,[EBP + 0xfffffbbe]          ; 0047ca37
    PUSH 0x3f800000                     ; 0047ca3d
    PUSH EAX                            ; 0047ca42
    PUSH EBX                            ; 0047ca43
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047ca44
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047ca49
    PUSH 0x3e4ccccd                     ; 0047ca4c
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0047ca51
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0047ca56
    TEST EAX,EAX                        ; 0047ca59
    JZ 0x0047ca72                       ; 0047ca5b
        ;   XREF to: 0047ca72 (CONDITIONAL_JUMP)  ; LAB_0047ca72
    LEA EAX,[EBP + 0xfffffbbe]          ; 0047ca5d
    PUSH 0x3f800000                     ; 0047ca63
    PUSH EAX                            ; 0047ca68
    PUSH EBX                            ; 0047ca69
    CALL core_dracbrid.cpp_FUN_0047d920 ; 0047ca6a
        ;   XREF to: 0047d920 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_0047d920(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0047ca6f
    PUSH dword ptr [EBP + 0x92]         ; 0047ca72
        ;   Label: LAB_0047ca72
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047ca78
    PUSH EBX                            ; 0047ca7e
    CALL dword ptr [EAX + 0x144]        ; 0047ca7f
    ADD ESP,0x8                         ; 0047ca85
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0047ca88
    LEA ESI,[EBX + 0x158]               ; 0047ca8e
    TEST EDI,EDI                        ; 0047ca94
    JNZ 0x0047cac0                      ; 0047ca96
        ;   XREF to: 0047cac0 (CONDITIONAL_JUMP)  ; LAB_0047cac0
    PUSH dword ptr [EBP + 0x92]         ; 0047ca98
    PUSH EBX                            ; 0047ca9e
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0047ca9f
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047caa4
    TEST EAX,EAX                        ; 0047caa7
    JNZ 0x0047b7f0                      ; 0047caa9
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047caaf
    PUSH EDI                            ; 0047cab1
    PUSH ESI                            ; 0047cab2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047cab3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047cab8
    JMP 0x0047b7f0                      ; 0047cabb
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,[0x005ff17c]                ; 0047cac0 | DAT_005ff17c
        ;   Label: LAB_0047cac0
    MOV dword ptr [EBP + 0x42],EAX      ; 0047cac5
    LEA EAX,[EBX + 0x249c]              ; 0047cac8
    MOV dword ptr [EAX + 0x8],0x0       ; 0047cace
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047cad5
    MOV dword ptr [EAX + 0x4],EDX       ; 0047cad8
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047cadb
    MOV dword ptr [EAX],EDX             ; 0047cade
    XOR EAX,EAX                         ; 0047cae0
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 0047cae2
    MOV dword ptr [EBP + 0xfffffec6],EAX ; 0047cae8
    MOV EAX,dword ptr [EBP + 0x42]      ; 0047caee
    PUSH 0x3db2b8c2                     ; 0047caf1
    MOV dword ptr [EBP + 0xfffffeca],EAX ; 0047caf6
    LEA EAX,[EBP + 0xfffffec2]          ; 0047cafc
    PUSH 0x3f000000                     ; 0047cb02
    PUSH EAX                            ; 0047cb07
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0047cb08
    PUSH EAX                            ; 0047cb0e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0047cb0f
    CALL dword ptr [EDX + 0xc4]         ; 0047cb15
    ADD ESP,0x4                         ; 0047cb1b
    PUSH EAX                            ; 0047cb1e
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0047cb1f
    ADD EAX,0x20                        ; 0047cb25
    PUSH EAX                            ; 0047cb28
    PUSH EBX                            ; 0047cb29
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0047cb2a
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0047cb2f
    TEST EAX,EAX                        ; 0047cb32
    JL 0x0047cbb9                       ; 0047cb34
        ;   XREF to: 0047cbb9 (CONDITIONAL_JUMP)  ; LAB_0047cbb9
    JLE 0x0047b7f0                      ; 0047cb3a
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    FLD float ptr [EBX + 0xc1e4]        ; 0047cb40
    FLDZ                                ; 0047cb46
    FCOMPP                              ; 0047cb48
    FNSTSW AX                           ; 0047cb4a
    SAHF                                ; 0047cb4c
    JC 0x0047b7f0                       ; 0047cb4d
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x2                            ; 0047cb53
    PUSH 0x0                            ; 0047cb55
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0047cb57
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0047cb5c
    MOV EDI,EAX                         ; 0047cb5f
    TEST EAX,EAX                        ; 0047cb61
    JZ 0x0047cbe0                       ; 0047cb63
        ;   XREF to: 0047cbe0 (CONDITIONAL_JUMP)  ; LAB_0047cbe0
    CMP EDI,0x1                         ; 0047cb69
        ;   Label: LAB_0047cb69
    JNZ 0x0047cb80                      ; 0047cb6c
        ;   XREF to: 0047cb80 (CONDITIONAL_JUMP)  ; LAB_0047cb80
    PUSH EDI                            ; 0047cb6e
    PUSH 0x14                           ; 0047cb6f
    LEA EAX,[EBX + 0x158]               ; 0047cb71
    PUSH EAX                            ; 0047cb77
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047cb78
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047cb7d
    CMP EDI,0x2                         ; 0047cb80
        ;   Label: LAB_0047cb80
    JNZ 0x0047cbaa                      ; 0047cb83
        ;   XREF to: 0047cbaa (CONDITIONAL_JUMP)  ; LAB_0047cbaa
    PUSH 0x1                            ; 0047cb85
    PUSH 0x15                           ; 0047cb87
    LEA EAX,[EBX + 0x158]               ; 0047cb89
    PUSH EAX                            ; 0047cb8f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047cb90
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047cb95
    PUSH 0x5dae6d                       ; 0047cb98 | = "hotbride-swipe?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047cb9d
    PUSH EBX                            ; 0047cba3
    CALL dword ptr [EAX + 0x2c]         ; 0047cba4
    ADD ESP,0x8                         ; 0047cba7
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 0047cbaa
        ;   Label: LAB_0047cbaa
    JMP 0x0047b7f0                      ; 0047cbb4
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH EBX                            ; 0047cbb9
        ;   Label: LAB_0047cbb9
    PUSH 0x5dae4c                       ; 0047cbba | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00611100]      ; 0047cbbf | g_CConsolePtr
    PUSH ECX                            ; 0047cbc5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0047cbc6
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047cbcb
    PUSH 0x1                            ; 0047cbce
    PUSH 0x0                            ; 0047cbd0
    PUSH ESI                            ; 0047cbd2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047cbd3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047cbd8
    JMP 0x0047b7f0                      ; 0047cbdb
        ;   XREF to: 0047b7f0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0047cbe0
        ;   Label: LAB_0047cbe0
    PUSH 0x13                           ; 0047cbe2
    PUSH ESI                            ; 0047cbe4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047cbe5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047cbea
    JMP 0x0047cb69                      ; 0047cbed
        ;   XREF to: 0047cb69 (UNCONDITIONAL_JUMP)  ; LAB_0047cb69
    CMP ESI,0x1a                        ; 0047cbf2
        ;   Label: LAB_0047cbf2
    JA 0x0047b7f0                       ; 0047cbf5
        ;   XREF to: 0047b7f0 (CONDITIONAL_JUMP)  ; caseD_19
    JMP dword ptr [ESI*0x4 + 0x47b4a4]  ; 0047cbfb | caseD_0 | caseD_19 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0xdc],0x0      ; 0047cc02
        ;   Label: LAB_0047cc02
    JNZ 0x0047b841                      ; 0047cc09
        ;   XREF to: 0047b841 (CONDITIONAL_JUMP)  ; LAB_0047b841
    JMP 0x0047b991                      ; 0047cc0f
        ;   XREF to: 0047b991 (UNCONDITIONAL_JUMP)  ; LAB_0047b991

