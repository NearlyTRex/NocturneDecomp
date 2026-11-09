; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_FUN_005af4a0(CWerewolf *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005f9a22
;   TerminatedCString s_core_werewolf_cpp_005f9a4c
;   TerminatedCString s_Alpha_werewolf_requires_005f9a61
;   TerminatedCString s_Phase_d_Timer_f_005f9a85
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005f9a9b
;   TerminatedCString s_werewolf_eat_wav_005f9abc
;   undefined4 DAT_005f9ad2
;   undefined4 DAT_005f9ada
;   undefined4 DAT_005f9ae2
;   undefined4 DAT_005f9aea
;   undefined4 DAT_005f9af2
;   undefined4 DAT_005f9afa
;   undefined4 DAT_005f9b02
;   undefined4 DAT_005f9b06
;   undefined4 DAT_005f9b0a
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cc60
;   core_actor.cpp_FUN_0040cd00
;   core_actor.cpp_FUN_0040cd60
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00433e80
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af4a0
        ;   Label: core_werewolf.cpp_FUN_005af4a0
    PUSH ESI                            ; 005af4a1
    PUSH EDI                            ; 005af4a2
    PUSH EBP                            ; 005af4a3
    MOV EBP,ESP                         ; 005af4a4
    SUB ESP,0x4c4                       ; 005af4a6
    SUB EBP,0x7a                        ; 005af4ac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005af4af
    PUSH dword ptr [EBP + 0x92]         ; 005af4b5
    PUSH EBX                            ; 005af4bb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 005af4bc
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005af4c1
    TEST EAX,EAX                        ; 005af4c4
    JZ 0x005af53c                       ; 005af4c6
        ;   XREF to: 005af53c (CONDITIONAL_JUMP)  ; LAB_005af53c
    CMP dword ptr [EBX + 0xc268],0x2    ; 005af4c8
    JZ 0x005af553                       ; 005af4cf
        ;   XREF to: 005af553 (CONDITIONAL_JUMP)  ; LAB_005af553
    LEA EAX,[EBX + 0x249c]              ; 005af4d5
        ;   Label: LAB_005af4d5
    MOV dword ptr [EAX + 0x8],0x0       ; 005af4db
    FLD float ptr [EBP + 0x92]          ; 005af4e2
    MOV EDX,dword ptr [EAX + 0x8]       ; 005af4e8
    MOV dword ptr [EAX + 0x4],EDX       ; 005af4eb
    MOV EDX,dword ptr [EAX + 0x4]       ; 005af4ee
    MOV dword ptr [EAX],EDX             ; 005af4f1
    FMUL float ptr [EBX + 0xc1d0]       ; 005af4f3
    LEA EAX,[EBX + 0x158]               ; 005af4f9
    FSTP float ptr [EBP + 0x3a]         ; 005af4ff
    MOV dword ptr [EBP + 0x72],EAX      ; 005af502
    FLD float ptr [EBP + 0x3a]          ; 005af505
        ;   Label: LAB_005af505
    FLDZ                                ; 005af508
    FCOMPP                              ; 005af50a
    FNSTSW AX                           ; 005af50c
    SAHF                                ; 005af50e
    JNC 0x005af642                      ; 005af50f
        ;   XREF to: 005af642 (CONDITIONAL_JUMP)  ; LAB_005af642
    LEA EAX,[EBP + 0x3a]                ; 005af515
    PUSH EAX                            ; 005af518
    MOV EDI,dword ptr [EBP + 0x72]      ; 005af519
    PUSH EDI                            ; 005af51c
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005af51d
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005af522
    MOV ESI,EAX                         ; 005af525
    CMP EAX,0xa                         ; 005af527
    JNC 0x005af626                      ; 005af52a
        ;   XREF to: 005af626 (CONDITIONAL_JUMP)  ; LAB_005af626
    PUSH ESI                            ; 005af530
    PUSH EBX                            ; 005af531
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 005af532
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005af537
    JMP 0x005af505                      ; 005af53a
        ;   XREF to: 005af505 (UNCONDITIONAL_JUMP)  ; LAB_005af505
    MOV ECX,dword ptr [EBX + 0xc290]    ; 005af53c
        ;   Label: LAB_005af53c
    PUSH ECX                            ; 005af542
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005af543
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005af548
    LEA ESP,[EBP + 0x7a]                ; 005af54b
    POP EBP                             ; 005af54e
    POP EDI                             ; 005af54f
    POP ESI                             ; 005af550
    POP EBX                             ; 005af551
    RET                                 ; 005af552
    FLD float ptr [EBX + 0xc2a8]        ; 005af553
        ;   Label: LAB_005af553
    FLDZ                                ; 005af559
    FCOMPP                              ; 005af55b
    FNSTSW AX                           ; 005af55d
    SAHF                                ; 005af55f
    JA 0x005af4d5                       ; 005af560
        ;   XREF to: 005af4d5 (CONDITIONAL_JUMP)  ; LAB_005af4d5
    FLD float ptr [EBX + 0xc2a8]        ; 005af566
    FSUB float ptr [EBP + 0x92]         ; 005af56c
    FSTP float ptr [EBX + 0xc2a8]       ; 005af572
    JMP 0x005af4d5                      ; 005af578
        ;   XREF to: 005af4d5 (UNCONDITIONAL_JUMP)  ; LAB_005af4d5
    MOV EDX,dword ptr [EBX + 0xc278]    ; 005af57d
        ;   Label: LAB_005af57d
    PUSH EDX                            ; 005af583
    PUSH EDI                            ; 005af584
    LEA ESI,[EBP + 0xfffffd96]          ; 005af585
    CALL core_skeleton.cpp_FUN_00569040 ; 005af58b
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[EBP + 0xfffffd7e]          ; 005af590
    ADD ESP,0x8                         ; 005af596
    LEA EAX,[EBP + 0xfffffd7e]          ; 005af599
    LEA ESI,[EBP + 0xfffffd96]          ; 005af59f
    PUSH EAX                            ; 005af5a5
    MOVSD ES:EDI,ESI                    ; 005af5a6
    MOVSD ES:EDI,ESI                    ; 005af5a7
    MOVSD ES:EDI,ESI                    ; 005af5a8
    PUSH EBX                            ; 005af5a9
    LEA ESI,[EBP + 0xfffffda2]          ; 005af5aa
    CALL core_actor.cpp_FUN_00408b40    ; 005af5b0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005af5b5
    LEA EDI,[EBP + 0xfffffd72]          ; 005af5b8
    PUSH 0x41400000                     ; 005af5be
    LEA ESI,[EBP + 0xfffffda2]          ; 005af5c3
    PUSH 0x41000000                     ; 005af5c9
    MOVSD ES:EDI,ESI                    ; 005af5ce
    MOVSD ES:EDI,ESI                    ; 005af5cf
    MOVSD ES:EDI,ESI                    ; 005af5d0
    CALL core_actor.cpp_FUN_0040cc00    ; 005af5d1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005af5d6
    ADD ESP,0x8                         ; 005af5d9
    FLD float ptr [EBP + 0x76]          ; 005af5dc
    FMUL double ptr [0x005f9afa]        ; 005af5df | DAT_005f9afa
    PUSH 0x0                            ; 005af5e5
    CALL crt_math.c_round_FUN_005c03a0  ; 005af5e7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x32]        ; 005af5ec
    MOV ESI,dword ptr [EBP + 0x32]      ; 005af5ef
    PUSH ESI                            ; 005af5f2
    PUSH 0x0                            ; 005af5f3
    LEA EAX,[EBP + 0xfffffd72]          ; 005af5f5
    PUSH EAX                            ; 005af5fb
    MOV EDI,dword ptr [0x0061dca4]      ; 005af5fc | g_CGorePtr
    PUSH EDI                            ; 005af602
    CALL core_gore.cpp_FUN_004e6060     ; 005af603
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005af608
    JMP 0x005af505                      ; 005af60b
        ;   XREF to: 005af505 (UNCONDITIONAL_JUMP)  ; LAB_005af505
    PUSH 0x1                            ; 005af610
        ;   Label: LAB_005af610
    PUSH EBX                            ; 005af612
    MOV EAX,[0x0061f650]                ; 005af613 | DAT_0061f650
    PUSH EAX                            ; 005af618 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b740  ; 005af619
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    ADD ESP,0xc                         ; 005af61e
    JMP 0x005af505                      ; 005af621
        ;   XREF to: 005af505 (UNCONDITIONAL_JUMP)  ; LAB_005af505
    JBE 0x005af57d                      ; 005af626
        ;   XREF to: 005af57d (CONDITIONAL_JUMP)  ; LAB_005af57d
        ;   Label: LAB_005af626
    CMP EAX,0x29a                       ; 005af62c
    JZ 0x005af610                       ; 005af631
        ;   XREF to: 005af610 (CONDITIONAL_JUMP)  ; LAB_005af610
    PUSH ESI                            ; 005af633
    PUSH EBX                            ; 005af634
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 005af635
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005af63a
    JMP 0x005af505                      ; 005af63d
        ;   XREF to: 005af505 (UNCONDITIONAL_JUMP)  ; LAB_005af505
    FLD float ptr [EBP + 0x92]          ; 005af642
        ;   Label: LAB_005af642
    FMUL float ptr [EBX + 0xc1d0]       ; 005af648
    SUB ESP,0x4                         ; 005af64e
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 005af651
    MOV dword ptr [EBX + 0x2524],EAX    ; 005af657
    FSTP float ptr [ESP]                ; 005af65d
    PUSH EBX                            ; 005af660
    CALL core_charactr.cpp_FUN_00435320 ; 005af661
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV ESI,dword ptr [EBX + 0xc268]    ; 005af666
    ADD ESP,0x8                         ; 005af66c
    CMP ESI,0x2                         ; 005af66f
    JNZ 0x005af68a                      ; 005af672
        ;   XREF to: 005af68a (CONDITIONAL_JUMP)  ; LAB_005af68a
    FLD float ptr [EBX + 0x2528]        ; 005af674
    FLD ST0                             ; 005af67a
    FMUL double ptr [0x005f9ad2]        ; 005af67c | DAT_005f9ad2
    FSTP ST1                            ; 005af682
    FSTP float ptr [EBX + 0x2528]       ; 005af684
    LEA ESI,[EBX + 0x158]               ; 005af68a
        ;   Label: LAB_005af68a
    PUSH ESI                            ; 005af690
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005af691
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005af696
    PUSH dword ptr [EBP + 0x92]         ; 005af699
    MOV EDI,dword ptr [EAX + 0x24]      ; 005af69f
    PUSH EBX                            ; 005af6a2
    MOV dword ptr [EBP + 0x6e],EDI      ; 005af6a3
    CALL core_charactr.cpp_FUN_00432240 ; 005af6a6
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005af6ab
    TEST EAX,EAX                        ; 005af6ae
    JZ 0x005af9d4                       ; 005af6b0
        ;   XREF to: 005af9d4 (CONDITIONAL_JUMP)  ; LAB_005af9d4
    MOV EAX,dword ptr [EBX + 0x273c]    ; 005af6b6
    CMP EAX,0x2                         ; 005af6bc
    JNC 0x005af9c4                      ; 005af6bf
        ;   XREF to: 005af9c4 (CONDITIONAL_JUMP)  ; LAB_005af9c4
    CMP EAX,0x1                         ; 005af6c5
    JNZ 0x005af9cb                      ; 005af6c8
        ;   XREF to: 005af9cb (CONDITIONAL_JUMP)  ; LAB_005af9cb
    CMP EDI,0xe                         ; 005af6ce
    JNZ 0x005af978                      ; 005af6d1
        ;   XREF to: 005af978 (CONDITIONAL_JUMP)  ; LAB_005af978
    PUSH 0x1                            ; 005af6d7
        ;   Label: LAB_005af6d7
    PUSH 0xf                            ; 005af6d9
    LEA EAX,[EBX + 0x158]               ; 005af6db
        ;   Label: LAB_005af6db
    PUSH EAX                            ; 005af6e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005af6e2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005af6e2
    ADD ESP,0xc                         ; 005af6e7
        ;   Label: LAB_005af6e7
    LEA EAX,[EBX + 0x249c]              ; 005af6ea
        ;   Label: LAB_005af6ea
    MOV dword ptr [EAX + 0x8],0x0       ; 005af6f0
    MOV EDX,dword ptr [EAX + 0x8]       ; 005af6f7
    MOV dword ptr [EAX + 0x4],EDX       ; 005af6fa
    MOV EDX,dword ptr [EAX + 0x4]       ; 005af6fd
    MOV dword ptr [EAX],EDX             ; 005af700
    CMP dword ptr [EBP + 0x6e],0x13     ; 005af702
        ;   Label: LAB_005af702
    JNZ 0x005b0b2f                      ; 005af706
        ;   XREF to: 005b0b2f (CONDITIONAL_JUMP)  ; LAB_005b0b2f
    CMP dword ptr [EBX + 0x27bc],0x0    ; 005af70c
    JZ 0x005b0b2f                       ; 005af713
        ;   XREF to: 005b0b2f (CONDITIONAL_JUMP)  ; LAB_005b0b2f
    MOV EAX,dword ptr [EBX + 0xc290]    ; 005af719
    PUSH EAX                            ; 005af71f
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005af720
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005af725
    TEST EAX,EAX                        ; 005af728
    JZ 0x005b0b12                       ; 005af72a
        ;   XREF to: 005b0b12 (CONDITIONAL_JUMP)  ; LAB_005b0b12
    MOV EDX,0x3f800000                  ; 005af730
        ;   Label: LAB_005af730
    MOV ECX,dword ptr [EBX + 0xc268]    ; 005af735
    MOV dword ptr [EBP + 0x62],EDX      ; 005af73b
    TEST ECX,ECX                        ; 005af73e
    JNZ 0x005af749                      ; 005af740
        ;   XREF to: 005af749 (CONDITIONAL_JUMP)  ; LAB_005af749
    MOV dword ptr [EBP + 0x62],0x3f400000 ; 005af742
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005af749
        ;   Label: LAB_005af749
    CMP EDI,0xe                         ; 005af74c
    JNZ 0x005b0b43                      ; 005af74f
        ;   XREF to: 005b0b43 (CONDITIONAL_JUMP)  ; LAB_005b0b43
    FLD float ptr [EBP + 0x62]          ; 005af755
        ;   Label: LAB_005af755
    FMUL double ptr [0x005f9b12]        ; 005af758 | DAT_005f9b12
    FSTP float ptr [EBX + 0x2ff0]       ; 005af75e
        ;   Label: LAB_005af75e
    FLD float ptr [EBX + 0xc1e4]        ; 005af764
    FLDZ                                ; 005af76a
    FCOMPP                              ; 005af76c
    FNSTSW AX                           ; 005af76e
    SAHF                                ; 005af770
    JNC 0x005af785                      ; 005af771
        ;   XREF to: 005af785 (CONDITIONAL_JUMP)  ; LAB_005af785
    FLD float ptr [EBX + 0xc1e4]        ; 005af773
    FSUB float ptr [EBP + 0x92]         ; 005af779
    FSTP float ptr [EBX + 0xc1e4]       ; 005af77f
    LEA EAX,[EBX + 0x158]               ; 005af785
        ;   Label: LAB_005af785
    PUSH EAX                            ; 005af78b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005af78c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005af791
    ADD ESP,0x4                         ; 005af794
    CMP EAX,0xd                         ; 005af797
    JZ 0x005b0b5a                       ; 005af79a
        ;   XREF to: 005b0b5a (CONDITIONAL_JUMP)  ; LAB_005b0b5a
    TEST EAX,EAX                        ; 005af7a0
    JZ 0x005b0b5a                       ; 005af7a2
        ;   XREF to: 005b0b5a (CONDITIONAL_JUMP)  ; LAB_005b0b5a
    CMP EAX,0xe                         ; 005af7a8
    JZ 0x005b0b5a                       ; 005af7ab
        ;   XREF to: 005b0b5a (CONDITIONAL_JUMP)  ; LAB_005b0b5a
    CMP EAX,0x14                        ; 005af7b1
    JZ 0x005b0b5a                       ; 005af7b4
        ;   XREF to: 005b0b5a (CONDITIONAL_JUMP)  ; LAB_005b0b5a
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 005af7ba
        ;   Label: LAB_005af7ba
    TEST ECX,ECX                        ; 005af7c0
    JZ 0x005af7ee                       ; 005af7c2
        ;   XREF to: 005af7ee (CONDITIONAL_JUMP)  ; LAB_005af7ee
    PUSH ECX                            ; 005af7c4
    MOV EDX,dword ptr [ECX + 0x154]     ; 005af7c5
    CALL dword ptr [EDX + 0xf4]         ; 005af7cb
    ADD ESP,0x4                         ; 005af7d1
    CMP EAX,EBX                         ; 005af7d4
    JNZ 0x005af7ee                      ; 005af7d6
        ;   XREF to: 005af7ee (CONDITIONAL_JUMP)  ; LAB_005af7ee
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005af7d8
    PUSH ESI                            ; 005af7de
    MOV EDI,dword ptr [0x00622c18]      ; 005af7df | g_CDemonSetPtr
    PUSH EDI                            ; 005af7e5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005af7e6
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005af7eb
    PUSH dword ptr [EBP + 0x92]         ; 005af7ee
        ;   Label: LAB_005af7ee
    PUSH EBX                            ; 005af7f4
    LEA ESI,[EBX + 0x2518]              ; 005af7f5
    CALL core_charactr.cpp_FUN_0042d700 ; 005af7fb
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 005af800
    FMUL float ptr [EBP + 0x92]         ; 005af802
    FLD float ptr [ESI + 0x4]           ; 005af808
    FMUL float ptr [EBP + 0x92]         ; 005af80b
    FLD float ptr [ESI + 0x8]           ; 005af811
    FMUL float ptr [EBP + 0x92]         ; 005af814
    LEA EDI,[EBP + 0x6]                 ; 005af81a
    LEA ESI,[EBP + 0xffffff5e]          ; 005af81d
    FXCH ST2                            ; 005af823
    FSTP float ptr [EBP + 0xffffff5e]   ; 005af825
    FSTP float ptr [EBP + 0xffffff62]   ; 005af82b
    FSTP float ptr [EBP + 0xffffff66]   ; 005af831
    MOVSD ES:EDI,ESI                    ; 005af837
    MOVSD ES:EDI,ESI                    ; 005af838
    MOVSD ES:EDI,ESI                    ; 005af839
    LEA EDX,[EBX + 0x249c]              ; 005af83a
    FLD float ptr [EBP + 0x6]           ; 005af840
    FLD float ptr [EBP + 0xa]           ; 005af843
    FLD float ptr [EBP + 0xe]           ; 005af846
    LEA EDI,[EBP + 0xfffffe02]          ; 005af849
    LEA ESI,[EBP + 0xffffff3a]          ; 005af84f
    FXCH ST2                            ; 005af855
    FADD float ptr [EDX]                ; 005af857
    FXCH                                ; 005af859
    FADD float ptr [EDX + 0x4]          ; 005af85b
    FXCH ST2                            ; 005af85e
    FADD float ptr [EDX + 0x8]          ; 005af860
    FXCH                                ; 005af863
    FSTP float ptr [EBP + 0xffffff3a]   ; 005af865
    FXCH                                ; 005af86b
    FSTP float ptr [EBP + 0xffffff3e]   ; 005af86d
    FSTP float ptr [EBP + 0xffffff42]   ; 005af873
    MOVSD ES:EDI,ESI                    ; 005af879
    MOVSD ES:EDI,ESI                    ; 005af87a
    MOVSD ES:EDI,ESI                    ; 005af87b
    LEA EAX,[EBX + 0x250c]              ; 005af87c
    FLD float ptr [EBP + 0xfffffe02]    ; 005af882
    FLD float ptr [EBP + 0xfffffe06]    ; 005af888
    FLD float ptr [EBP + 0xfffffe0a]    ; 005af88e
    LEA EDI,[EBP + 0xffffff16]          ; 005af894
    LEA ESI,[EBP + 0xffffff52]          ; 005af89a
    FXCH ST2                            ; 005af8a0
    FADD float ptr [EAX]                ; 005af8a2
    FXCH                                ; 005af8a4
    FADD float ptr [EAX + 0x4]          ; 005af8a6
    FXCH ST2                            ; 005af8a9
    FADD float ptr [EAX + 0x8]          ; 005af8ab
    FXCH                                ; 005af8ae
    FSTP float ptr [EBP + 0xffffff52]   ; 005af8b0
    FXCH                                ; 005af8b6
    FSTP float ptr [EBP + 0xffffff56]   ; 005af8b8
    FSTP float ptr [EBP + 0xffffff5a]   ; 005af8be
    MOVSD ES:EDI,ESI                    ; 005af8c4
    MOVSD ES:EDI,ESI                    ; 005af8c5
    MOVSD ES:EDI,ESI                    ; 005af8c6
    MOV dword ptr [EDX + 0x8],0x0       ; 005af8c7
    MOV ECX,dword ptr [EDX + 0x8]       ; 005af8ce
    MOV dword ptr [EDX + 0x4],ECX       ; 005af8d1
    MOV ECX,dword ptr [EDX + 0x4]       ; 005af8d4
    MOV dword ptr [EDX],ECX             ; 005af8d7
    MOV dword ptr [EAX + 0x8],0x0       ; 005af8d9
    ADD ESP,0x8                         ; 005af8e0
    MOV EDX,dword ptr [EAX + 0x8]       ; 005af8e3
    MOV dword ptr [EAX + 0x4],EDX       ; 005af8e6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005af8e9
    MOV dword ptr [EAX],EDX             ; 005af8ec
    LEA EAX,[EBP + 0xffffff16]          ; 005af8ee
    PUSH EAX                            ; 005af8f4
    PUSH EBX                            ; 005af8f5
    CALL core_charactr.cpp_FUN_0042d750 ; 005af8f6
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005af8fb
    PUSH EBX                            ; 005af8fe
        ;   Label: LAB_005af8fe
    CALL core_charactr.cpp_FUN_0042e160 ; 005af8ff
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005af904
    LEA EAX,[EBX + 0x158]               ; 005af907
    PUSH EAX                            ; 005af90d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 005af90e
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005af913
    PUSH dword ptr [EBP + 0x92]         ; 005af916
    PUSH EBX                            ; 005af91c
    CALL core_charactr.cpp_FUN_00433e80 ; 005af91d
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005af922
    PUSH EBX                            ; 005af925
    CALL core_werewolf.cpp_FUN_005b1850 ; 005af926
        ;   XREF to: 005b1850 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_FUN_005b1850()
    FLD float ptr [EBP + 0x92]          ; 005af92b
    FMUL double ptr [0x005f9b1a]        ; 005af931 | DAT_005f9b1a
    FLD float ptr [EBX + 0xc2ac]        ; 005af937
    FXCH                                ; 005af93d
    FADD ST0,ST1                        ; 005af93f
    ADD ESP,0x4                         ; 005af941
    FSTP ST1                            ; 005af944
    FSTP float ptr [EBX + 0xc2ac]       ; 005af946
    LEA ESP,[EBP + 0x7a]                ; 005af94c
    POP EBP                             ; 005af94f
    POP EDI                             ; 005af950
    POP ESI                             ; 005af951
    POP EBX                             ; 005af952
    RET                                 ; 005af953
    PUSH 0x1                            ; 005af954
        ;   Label: LAB_005af954
    PUSH 0x0                            ; 005af956
    PUSH ESI                            ; 005af958
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005af959
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005af95e
    PUSH EBX                            ; 005af961
    PUSH 0x5f9a22                       ; 005af962 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 005af967 | g_CConsolePtr
    PUSH ESI                            ; 005af96d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005af96e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x005af6e7                      ; 005af973
        ;   XREF to: 005af6e7 (UNCONDITIONAL_JUMP)  ; LAB_005af6e7
    CMP EDI,0xf                         ; 005af978
        ;   Label: LAB_005af978
    JZ 0x005af6d7                       ; 005af97b
        ;   XREF to: 005af6d7 (CONDITIONAL_JUMP)  ; LAB_005af6d7
    PUSH EAX                            ; 005af981
    PUSH EAX                            ; 005af982
    PUSH ESI                            ; 005af983
    JMP 0x005af6e2                      ; 005af984
        ;   XREF to: 005af6e2 (UNCONDITIONAL_JUMP)  ; LAB_005af6e2
    CMP EDI,0xe                         ; 005af989
        ;   Label: LAB_005af989
    JZ 0x005af6d7                       ; 005af98c
        ;   XREF to: 005af6d7 (CONDITIONAL_JUMP)  ; LAB_005af6d7
    CMP EDI,0xf                         ; 005af992
    JZ 0x005af6d7                       ; 005af995
        ;   XREF to: 005af6d7 (CONDITIONAL_JUMP)  ; LAB_005af6d7
    FLD float ptr [EBX + 0x2508]        ; 005af99b
    FABS                                ; 005af9a1
    FLD float ptr [EBX + 0x2528]        ; 005af9a3
    FCOMPP                              ; 005af9a9
    FNSTSW AX                           ; 005af9ab
    SAHF                                ; 005af9ad
    JBE 0x005af9ba                      ; 005af9ae
        ;   XREF to: 005af9ba (CONDITIONAL_JUMP)  ; LAB_005af9ba
    PUSH 0x1                            ; 005af9b0
    PUSH 0x8                            ; 005af9b2
    PUSH ESI                            ; 005af9b4
    JMP 0x005af6e2                      ; 005af9b5
        ;   XREF to: 005af6e2 (UNCONDITIONAL_JUMP)  ; LAB_005af6e2
    PUSH 0x1                            ; 005af9ba
        ;   Label: LAB_005af9ba
    PUSH 0x1                            ; 005af9bc
    PUSH ESI                            ; 005af9be
    JMP 0x005af6e2                      ; 005af9bf
        ;   XREF to: 005af6e2 (UNCONDITIONAL_JUMP)  ; LAB_005af6e2
    JBE 0x005af989                      ; 005af9c4
        ;   XREF to: 005af989 (CONDITIONAL_JUMP)  ; LAB_005af989
        ;   Label: LAB_005af9c4
    CMP EAX,0x3                         ; 005af9c6
    JZ 0x005af954                       ; 005af9c9
        ;   XREF to: 005af954 (CONDITIONAL_JUMP)  ; LAB_005af954
    PUSH 0x1                            ; 005af9cb
        ;   Label: LAB_005af9cb
    PUSH 0x0                            ; 005af9cd
    JMP 0x005af6db                      ; 005af9cf
        ;   XREF to: 005af6db (UNCONDITIONAL_JUMP)  ; LAB_005af6db
    PUSH EBX                            ; 005af9d4
        ;   Label: LAB_005af9d4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005af9d5
    CALL dword ptr [EAX + 0x10c]        ; 005af9db
    ADD ESP,0x4                         ; 005af9e1
    TEST EAX,EAX                        ; 005af9e4
    JNZ 0x005afc17                      ; 005af9e6
        ;   XREF to: 005afc17 (CONDITIONAL_JUMP)  ; LAB_005afc17
    MOV EAX,[0x01d06ab4]                ; 005af9ec | DAT_01d06ab4
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 005af9f1
    CMP EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005af9f7
    JNZ 0x005afc17                      ; 005af9fe
        ;   XREF to: 005afc17 (CONDITIONAL_JUMP)  ; LAB_005afc17
    LEA EAX,[EBP + 0xfffffbb6]          ; 005afa04
    PUSH EAX                            ; 005afa0a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005afa0b
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005afa10
    PUSH 0x41700000                     ; 005afa13
    PUSH 0x40e00000                     ; 005afa18
    CALL core_actor.cpp_FUN_0040cc00    ; 005afa1d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005afa22
    ADD ESP,0x8                         ; 005afa25
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 005afa28
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 005afa2e
    LEA EAX,[EBP + 0xfffffbb6]          ; 005afa34
    FLD float ptr [EBP + 0x76]          ; 005afa3a
    PUSH EAX                            ; 005afa3d
    FSTP float ptr [EBP + 0xfffffbba]   ; 005afa3e
    SUB ESP,0x4                         ; 005afa44
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 005afa47
    MOV dword ptr [ESP],EAX             ; 005afa4d
    MOV EDX,dword ptr [EBX + 0xc278]    ; 005afa50
    LEA EAX,[EDX*0x4 + 0x0]             ; 005afa56
    SUB EAX,EDX                         ; 005afa5d
    SHL EAX,0x4                         ; 005afa5f
    LEA EDX,[EBX + 0xfd8]               ; 005afa62
    ADD EAX,EDX                         ; 005afa68
    PUSH EAX                            ; 005afa6a
    LEA ESI,[EBP + 0xfffffd42]          ; 005afa6b
    PUSH 0x2c8af28                      ; 005afa71 | DAT_02c8af28
    LEA EDI,[EBP + 0xfffffce2]          ; 005afa76
    MOV dword ptr [EBP + 0x5a],EDX      ; 005afa7c
    CALL core_xform.cpp_FUN_005b5080    ; 005afa7f
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005afa84
    LEA EAX,[EBP + 0xfffffce2]          ; 005afa87
    LEA ESI,[EBP + 0xfffffd42]          ; 005afa8d
    PUSH EAX                            ; 005afa93
    MOVSD ES:EDI,ESI                    ; 005afa94
    MOVSD ES:EDI,ESI                    ; 005afa95
    MOVSD ES:EDI,ESI                    ; 005afa96
    PUSH EBX                            ; 005afa97
    LEA ESI,[EBP + 0xfffffeaa]          ; 005afa98
    CALL core_actor.cpp_FUN_00408b40    ; 005afa9e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005afaa3
    LEA EAX,[EBP + 0xfffffeb6]          ; 005afaa6
    PUSH EAX                            ; 005afaac
    LEA EDI,[EBP + 0xfffffeb6]          ; 005afaad
    LEA ESI,[EBP + 0xfffffeaa]          ; 005afab3
    PUSH EBX                            ; 005afab9
    MOVSD ES:EDI,ESI                    ; 005afaba
    MOVSD ES:EDI,ESI                    ; 005afabb
    MOVSD ES:EDI,ESI                    ; 005afabc
    CALL core_enemy.cpp_FUN_004a0770    ; 005afabd
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005afac2
    PUSH 0x41700000                     ; 005afac5
    PUSH 0x40e00000                     ; 005afaca
    CALL core_actor.cpp_FUN_0040cc00    ; 005afacf
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005afad4
    ADD ESP,0x8                         ; 005afad7
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 005afada
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 005afae0
    LEA EAX,[EBP + 0xfffffbb6]          ; 005afae6
    FLD float ptr [EBP + 0x76]          ; 005afaec
    PUSH EAX                            ; 005afaef
    FSTP float ptr [EBP + 0xfffffbba]   ; 005afaf0
    SUB ESP,0x4                         ; 005afaf6
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 005afaf9
    MOV dword ptr [ESP],EAX             ; 005afaff
    MOV EDX,dword ptr [EBX + 0xc274]    ; 005afb02
    LEA EAX,[EDX*0x4 + 0x0]             ; 005afb08
    SUB EAX,EDX                         ; 005afb0f
    MOV ECX,dword ptr [EBP + 0x5a]      ; 005afb11
    SHL EAX,0x4                         ; 005afb14
    ADD EAX,ECX                         ; 005afb17
    PUSH EAX                            ; 005afb19
    PUSH 0x2c8af28                      ; 005afb1a | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffd8a]          ; 005afb1f
    LEA EDI,[EBP + 0xfffffd36]          ; 005afb25
    CALL core_xform.cpp_FUN_005b5080    ; 005afb2b
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005afb30
    LEA EAX,[EBP + 0xfffffd36]          ; 005afb33
    LEA ESI,[EBP + 0xfffffd8a]          ; 005afb39
    PUSH EAX                            ; 005afb3f
    MOVSD ES:EDI,ESI                    ; 005afb40
    MOVSD ES:EDI,ESI                    ; 005afb41
    MOVSD ES:EDI,ESI                    ; 005afb42
    PUSH EBX                            ; 005afb43
    LEA ESI,[EBP + 0xfffffe86]          ; 005afb44
    CALL core_actor.cpp_FUN_00408b40    ; 005afb4a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005afb4f
    LEA EAX,[EBP + 0xfffffece]          ; 005afb52
    PUSH EAX                            ; 005afb58
    LEA EDI,[EBP + 0xfffffece]          ; 005afb59
    LEA ESI,[EBP + 0xfffffe86]          ; 005afb5f
    PUSH EBX                            ; 005afb65
    MOVSD ES:EDI,ESI                    ; 005afb66
    MOVSD ES:EDI,ESI                    ; 005afb67
    MOVSD ES:EDI,ESI                    ; 005afb68
    CALL core_enemy.cpp_FUN_004a0770    ; 005afb69
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005afb6e
    PUSH 0x41700000                     ; 005afb71
    PUSH 0x40e00000                     ; 005afb76
    CALL core_actor.cpp_FUN_0040cc00    ; 005afb7b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005afb80
    ADD ESP,0x8                         ; 005afb83
    MOV EAX,dword ptr [EBP + 0x76]      ; 005afb86
    MOV dword ptr [EBP + 0xfffffbba],EAX ; 005afb89
    LEA EAX,[EBP + 0xfffffbb6]          ; 005afb8f
    PUSH EAX                            ; 005afb95
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 005afb96
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 005afb9c
    SUB ESP,0x4                         ; 005afba2
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 005afba5
    MOV dword ptr [ESP],EAX             ; 005afbab
    MOV EDX,dword ptr [EBX + 0xc270]    ; 005afbae
    LEA EAX,[EDX*0x4 + 0x0]             ; 005afbb4
    SUB EAX,EDX                         ; 005afbbb
    MOV ESI,dword ptr [EBP + 0x5a]      ; 005afbbd
    SHL EAX,0x4                         ; 005afbc0
    ADD EAX,ESI                         ; 005afbc3
    PUSH EAX                            ; 005afbc5
    PUSH 0x2c8af28                      ; 005afbc6 | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffdd2]          ; 005afbcb
    LEA EDI,[EBP + 0xfffffd12]          ; 005afbd1
    CALL core_xform.cpp_FUN_005b5080    ; 005afbd7
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005afbdc
    LEA EAX,[EBP + 0xfffffd12]          ; 005afbdf
    LEA ESI,[EBP + 0xfffffdd2]          ; 005afbe5
    PUSH EAX                            ; 005afbeb
    MOVSD ES:EDI,ESI                    ; 005afbec
    MOVSD ES:EDI,ESI                    ; 005afbed
    MOVSD ES:EDI,ESI                    ; 005afbee
    PUSH EBX                            ; 005afbef
    LEA ESI,[EBP + -0x4e]               ; 005afbf0
    CALL core_actor.cpp_FUN_00408b40    ; 005afbf3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005afbf8
    LEA EAX,[EBP + 0xfffffee6]          ; 005afbfb
    PUSH EAX                            ; 005afc01
    LEA EDI,[EBP + 0xfffffee6]          ; 005afc02
    LEA ESI,[EBP + -0x4e]               ; 005afc08
    PUSH EBX                            ; 005afc0b
    MOVSD ES:EDI,ESI                    ; 005afc0c
    MOVSD ES:EDI,ESI                    ; 005afc0d
    MOVSD ES:EDI,ESI                    ; 005afc0e
    CALL core_enemy.cpp_FUN_004a0770    ; 005afc0f
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005afc14
    LEA EAX,[EBX + 0xfd8]               ; 005afc17
        ;   Label: LAB_005afc17
    MOV dword ptr [EBP + 0x66],EAX      ; 005afc1d
    MOV EAX,[0x01d06ab4]                ; 005afc20 | DAT_01d06ab4
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005afc25
    SHL EAX,0x2                         ; 005afc28
    CMP EDI,0x4                         ; 005afc2b
    JNC 0x005b09b7                      ; 005afc2e
        ;   XREF to: 005b09b7 (CONDITIONAL_JUMP)  ; LAB_005b09b7
    CMP EDI,0x1                         ; 005afc34
    JNC 0x005b0a05                      ; 005afc37
        ;   XREF to: 005b0a05 (CONDITIONAL_JUMP)  ; LAB_005b0a05
    TEST EDI,EDI                        ; 005afc3d
    JNZ 0x005af702                      ; 005afc3f
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH dword ptr [EBP + 0x92]         ; 005afc45
        ;   Label: LAB_005afc45
    PUSH EBX                            ; 005afc4b
    CALL core_enemy.cpp_FUN_004a0fe0    ; 005afc4c
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005afc51
    TEST EAX,EAX                        ; 005afc54
    JZ 0x005b00e3                       ; 005afc56
        ;   XREF to: 005b00e3 (CONDITIONAL_JUMP)  ; LAB_005b00e3
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005afc5c
    LEA EAX,[EBX + 0x158]               ; 005afc5f
    CMP ECX,0xe                         ; 005afc65
    JNZ 0x005b00d1                      ; 005afc68
        ;   XREF to: 005b00d1 (CONDITIONAL_JUMP)  ; LAB_005b00d1
    PUSH 0x1                            ; 005afc6e
    PUSH 0xf                            ; 005afc70
    PUSH EAX                            ; 005afc72
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005afc73
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005afc78
    JMP 0x005af702                      ; 005afc7b
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    MOV ESI,dword ptr [EAX + 0x1d06aa4] ; 005afc80
        ;   Label: LAB_005afc80
    CMP ESI,dword ptr [EBX + 0xc1e8]    ; 005afc86
    JNZ 0x005afdd1                      ; 005afc8c
        ;   XREF to: 005afdd1 (CONDITIONAL_JUMP)  ; LAB_005afdd1
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005afc92
        ;   Label: LAB_005afc92
    TEST ESI,ESI                        ; 005afc98
    JZ 0x005afcc3                       ; 005afc9a
        ;   XREF to: 005afcc3 (CONDITIONAL_JUMP)  ; LAB_005afcc3
    PUSH ESI                            ; 005afc9c
    MOV EDX,dword ptr [ESI + 0x154]     ; 005afc9d
    CALL dword ptr [EDX + 0x10c]        ; 005afca3
    ADD ESP,0x4                         ; 005afca9
    TEST EAX,EAX                        ; 005afcac
    JZ 0x005afcc3                       ; 005afcae
        ;   XREF to: 005afcc3 (CONDITIONAL_JUMP)  ; LAB_005afcc3
    PUSH 0x1                            ; 005afcb0
    PUSH 0x7                            ; 005afcb2
    LEA EAX,[EBX + 0x158]               ; 005afcb4
    PUSH EAX                            ; 005afcba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005afcbb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005afcc0
    MOV EDX,dword ptr [0x01d06ab4]      ; 005afcc3 | DAT_01d06ab4
        ;   Label: LAB_005afcc3
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005afcc9
    CMP EAX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 005afccf
    JZ 0x005afd93                       ; 005afcd6
        ;   XREF to: 005afd93 (CONDITIONAL_JUMP)  ; LAB_005afd93
    LEA EAX,[EBP + 0xfffffca6]          ; 005afcdc
    PUSH EAX                            ; 005afce2
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005afce3
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005afce8
    PUSH 0x41700000                     ; 005afceb
    PUSH 0x40e00000                     ; 005afcf0
    CALL core_actor.cpp_FUN_0040cc00    ; 005afcf5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005afcfa
    MOV dword ptr [EBP + 0xfffffcda],EBX ; 005afcfd
    MOV dword ptr [EBP + 0xfffffcde],EBX ; 005afd03
    ADD ESP,0x8                         ; 005afd09
    FLD float ptr [EBP + 0x76]          ; 005afd0c
    LEA EAX,[EBP + 0xfffffca6]          ; 005afd0f
    FSTP float ptr [EBP + 0xfffffcaa]   ; 005afd15
    MOV EDX,dword ptr [EBX + 0xc278]    ; 005afd1b
    PUSH EAX                            ; 005afd21
    LEA EAX,[EDX*0x4 + 0x0]             ; 005afd22
    SUB EAX,EDX                         ; 005afd29
    SHL EAX,0x4                         ; 005afd2b
    LEA EDX,[EBX + 0xfd8]               ; 005afd2e
    ADD EAX,EDX                         ; 005afd34
    PUSH 0x3ecccccd                     ; 005afd36
    PUSH EAX                            ; 005afd3b
    PUSH 0x2c8af28                      ; 005afd3c | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffefe]          ; 005afd41
    LEA EDI,[EBP + 0xfffffdde]          ; 005afd47
    CALL core_xform.cpp_FUN_005b5080    ; 005afd4d
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005afd52
    LEA EAX,[EBP + 0xfffffdde]          ; 005afd55
    LEA ESI,[EBP + 0xfffffefe]          ; 005afd5b
    PUSH EAX                            ; 005afd61
    MOVSD ES:EDI,ESI                    ; 005afd62
    MOVSD ES:EDI,ESI                    ; 005afd63
    MOVSD ES:EDI,ESI                    ; 005afd64
    PUSH EBX                            ; 005afd65
    LEA ESI,[EBP + 0xffffff6a]          ; 005afd66
    CALL core_actor.cpp_FUN_00408b40    ; 005afd6c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005afd71
    LEA EAX,[EBP + 0xfffffdea]          ; 005afd74
    PUSH EAX                            ; 005afd7a
    LEA EDI,[EBP + 0xfffffdea]          ; 005afd7b
    LEA ESI,[EBP + 0xffffff6a]          ; 005afd81
    PUSH EBX                            ; 005afd87
    MOVSD ES:EDI,ESI                    ; 005afd88
    MOVSD ES:EDI,ESI                    ; 005afd89
    MOVSD ES:EDI,ESI                    ; 005afd8a
    CALL core_enemy.cpp_FUN_004a0770    ; 005afd8b
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005afd90
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005afd93
        ;   Label: LAB_005afd93
    TEST ESI,ESI                        ; 005afd99
    JZ 0x005af702                       ; 005afd9b
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH ESI                            ; 005afda1
    MOV EDX,dword ptr [ESI + 0x154]     ; 005afda2
    CALL dword ptr [EDX + 0x10c]        ; 005afda8
    ADD ESP,0x4                         ; 005afdae
    TEST EAX,EAX                        ; 005afdb1
    JZ 0x005af702                       ; 005afdb3
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH 0x1                            ; 005afdb9
    PUSH 0x7                            ; 005afdbb
    LEA EAX,[EBX + 0x158]               ; 005afdbd
    PUSH EAX                            ; 005afdc3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005afdc4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005afdc9
    JMP 0x005af702                      ; 005afdcc
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    LEA EAX,[EBP + 0xfffffc2e]          ; 005afdd1
        ;   Label: LAB_005afdd1
    PUSH EAX                            ; 005afdd7
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005afdd8
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005afddd
    PUSH 0x41700000                     ; 005afde0
    PUSH 0x40e00000                     ; 005afde5
    CALL core_actor.cpp_FUN_0040cc00    ; 005afdea
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005afdef
    MOV dword ptr [EBP + 0xfffffc62],EBX ; 005afdf2
    MOV dword ptr [EBP + 0xfffffc66],EBX ; 005afdf8
    ADD ESP,0x8                         ; 005afdfe
    FLD float ptr [EBP + 0x76]          ; 005afe01
    LEA EAX,[EBP + 0xfffffc2e]          ; 005afe04
    FSTP float ptr [EBP + 0xfffffc32]   ; 005afe0a
    MOV EDX,dword ptr [EBX + 0xc278]    ; 005afe10
    PUSH EAX                            ; 005afe16
    LEA EAX,[EDX*0x4 + 0x0]             ; 005afe17
    SUB EAX,EDX                         ; 005afe1e
    MOV EDI,dword ptr [EBP + 0x66]      ; 005afe20
    SHL EAX,0x4                         ; 005afe23
    ADD EAX,EDI                         ; 005afe26
    PUSH 0x3f800000                     ; 005afe28
    PUSH EAX                            ; 005afe2d
    PUSH 0x2c8af28                      ; 005afe2e | DAT_02c8af28
    LEA ESI,[EBP + 0x12]                ; 005afe33
    LEA EDI,[EBP + 0xfffffe3e]          ; 005afe36
    CALL core_xform.cpp_FUN_005b5080    ; 005afe3c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005afe41
    LEA EAX,[EBP + 0xfffffe3e]          ; 005afe44
    LEA ESI,[EBP + 0x12]                ; 005afe4a
    PUSH EAX                            ; 005afe4d
    MOVSD ES:EDI,ESI                    ; 005afe4e
    MOVSD ES:EDI,ESI                    ; 005afe4f
    MOVSD ES:EDI,ESI                    ; 005afe50
    PUSH EBX                            ; 005afe51
    LEA ESI,[EBP + 0xfffffd06]          ; 005afe52
    CALL core_actor.cpp_FUN_00408b40    ; 005afe58
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005afe5d
    LEA EAX,[EBP + 0xfffffe4a]          ; 005afe60
    PUSH EAX                            ; 005afe66
    LEA EDI,[EBP + 0xfffffe4a]          ; 005afe67
    LEA ESI,[EBP + 0xfffffd06]          ; 005afe6d
    PUSH EBX                            ; 005afe73
    MOVSD ES:EDI,ESI                    ; 005afe74
    MOVSD ES:EDI,ESI                    ; 005afe75
    MOVSD ES:EDI,ESI                    ; 005afe76
    CALL core_enemy.cpp_FUN_004a0770    ; 005afe77
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005afe7c
    LEA EAX,[EBP + 0xfffffc2e]          ; 005afe7f
    MOV EDX,dword ptr [EBX + 0xc274]    ; 005afe85
    PUSH EAX                            ; 005afe8b
    LEA EAX,[EDX*0x4 + 0x0]             ; 005afe8c
    SUB EAX,EDX                         ; 005afe93
    MOV EDX,dword ptr [EBP + 0x66]      ; 005afe95
    SHL EAX,0x4                         ; 005afe98
    ADD EAX,EDX                         ; 005afe9b
    PUSH 0x3f800000                     ; 005afe9d
    PUSH EAX                            ; 005afea2
    PUSH 0x2c8af28                      ; 005afea3 | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffd1e]          ; 005afea8
    LEA EDI,[EBP + 0xfffffcee]          ; 005afeae
    CALL core_xform.cpp_FUN_005b5080    ; 005afeb4
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005afeb9
    LEA EAX,[EBP + 0xfffffcee]          ; 005afebc
    LEA ESI,[EBP + 0xfffffd1e]          ; 005afec2
    PUSH EAX                            ; 005afec8
    MOVSD ES:EDI,ESI                    ; 005afec9
    MOVSD ES:EDI,ESI                    ; 005afeca
    MOVSD ES:EDI,ESI                    ; 005afecb
    PUSH EBX                            ; 005afecc
    LEA ESI,[EBP + -0x66]               ; 005afecd
    CALL core_actor.cpp_FUN_00408b40    ; 005afed0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005afed5
    LEA EAX,[EBP + 0xfffffe7a]          ; 005afed8
    PUSH EAX                            ; 005afede
    LEA EDI,[EBP + 0xfffffe7a]          ; 005afedf
    LEA ESI,[EBP + -0x66]               ; 005afee5
    PUSH EBX                            ; 005afee8
    MOVSD ES:EDI,ESI                    ; 005afee9
    MOVSD ES:EDI,ESI                    ; 005afeea
    MOVSD ES:EDI,ESI                    ; 005afeeb
    CALL core_enemy.cpp_FUN_004a0770    ; 005afeec
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005afef1
    LEA EAX,[EBP + 0xfffffc2e]          ; 005afef4
    MOV EDX,dword ptr [EBX + 0xc270]    ; 005afefa
    PUSH EAX                            ; 005aff00
    LEA EAX,[EDX*0x4 + 0x0]             ; 005aff01
    SUB EAX,EDX                         ; 005aff08
    MOV ECX,dword ptr [EBP + 0x66]      ; 005aff0a
    SHL EAX,0x4                         ; 005aff0d
    ADD EAX,ECX                         ; 005aff10
    PUSH 0x3f800000                     ; 005aff12
    PUSH EAX                            ; 005aff17
    PUSH 0x2c8af28                      ; 005aff18 | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffd4e]          ; 005aff1d
    LEA EDI,[EBP + 0xfffffdae]          ; 005aff23
    CALL core_xform.cpp_FUN_005b5080    ; 005aff29
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005aff2e
    LEA EAX,[EBP + 0xfffffdae]          ; 005aff31
    LEA ESI,[EBP + 0xfffffd4e]          ; 005aff37
    PUSH EAX                            ; 005aff3d
    MOVSD ES:EDI,ESI                    ; 005aff3e
    MOVSD ES:EDI,ESI                    ; 005aff3f
    MOVSD ES:EDI,ESI                    ; 005aff40
    PUSH EBX                            ; 005aff41
    LEA ESI,[EBP + 0xffffff2e]          ; 005aff42
    CALL core_actor.cpp_FUN_00408b40    ; 005aff48
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005aff4d
    LEA EAX,[EBP + 0xfffffe92]          ; 005aff50
    PUSH EAX                            ; 005aff56
    LEA EDI,[EBP + 0xfffffe92]          ; 005aff57
    LEA ESI,[EBP + 0xffffff2e]          ; 005aff5d
    PUSH EBX                            ; 005aff63
    MOVSD ES:EDI,ESI                    ; 005aff64
    MOVSD ES:EDI,ESI                    ; 005aff65
    MOVSD ES:EDI,ESI                    ; 005aff66
    CALL core_enemy.cpp_FUN_004a0770    ; 005aff67
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005aff6c
    JMP 0x005afc92                      ; 005aff6f
        ;   XREF to: 005afc92 (UNCONDITIONAL_JUMP)  ; LAB_005afc92
    LEA EAX,[EBP + 0xfffffc6a]          ; 005aff74
        ;   Label: LAB_005aff74
    PUSH EAX                            ; 005aff7a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005aff7b
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005aff80
    PUSH 0x41700000                     ; 005aff83
    PUSH 0x40e00000                     ; 005aff88
    CALL core_actor.cpp_FUN_0040cc00    ; 005aff8d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005aff92
    MOV dword ptr [EBP + 0xfffffc9e],EBX ; 005aff95
    MOV dword ptr [EBP + 0xfffffca2],EBX ; 005aff9b
    ADD ESP,0x8                         ; 005affa1
    FLD float ptr [EBP + 0x76]          ; 005affa4
    LEA EAX,[EBP + 0xfffffc6a]          ; 005affa7
    FSTP float ptr [EBP + 0xfffffc6e]   ; 005affad
    MOV EDX,dword ptr [EBX + 0xc274]    ; 005affb3
    PUSH EAX                            ; 005affb9
    LEA EAX,[EDX*0x4 + 0x0]             ; 005affba
    SUB EAX,EDX                         ; 005affc1
    MOV EDI,dword ptr [EBP + 0x66]      ; 005affc3
    SHL EAX,0x4                         ; 005affc6
    ADD EAX,EDI                         ; 005affc9
    PUSH 0x3ecccccd                     ; 005affcb
    PUSH EAX                            ; 005affd0
    PUSH 0x2c8af28                      ; 005affd1 | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffdba]          ; 005affd6
    LEA EDI,[EBP + 0xffffff46]          ; 005affdc
    CALL core_xform.cpp_FUN_005b5080    ; 005affe2
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005affe7
    LEA EAX,[EBP + 0xffffff46]          ; 005affea
    LEA ESI,[EBP + 0xfffffdba]          ; 005afff0
    PUSH EAX                            ; 005afff6
    MOVSD ES:EDI,ESI                    ; 005afff7
    MOVSD ES:EDI,ESI                    ; 005afff8
    MOVSD ES:EDI,ESI                    ; 005afff9
    PUSH EBX                            ; 005afffa
    LEA ESI,[EBP + -0x7e]               ; 005afffb
    CALL core_actor.cpp_FUN_00408b40    ; 005afffe
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005b0003
    LEA EAX,[EBP + -0x5a]               ; 005b0006
    PUSH EAX                            ; 005b0009
    LEA EDI,[EBP + -0x5a]               ; 005b000a
    LEA ESI,[EBP + -0x7e]               ; 005b000d
    PUSH EBX                            ; 005b0010
    MOVSD ES:EDI,ESI                    ; 005b0011
    MOVSD ES:EDI,ESI                    ; 005b0012
    MOVSD ES:EDI,ESI                    ; 005b0013
    CALL core_enemy.cpp_FUN_004a0770    ; 005b0014
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005b0019
    ADD ESP,0x10                        ; 005b001f
    TEST EAX,EAX                        ; 005b0022
    JZ 0x005af702                       ; 005b0024
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH EAX                            ; 005b002a
    MOV EDX,dword ptr [EAX + 0x154]     ; 005b002b
    CALL dword ptr [EDX + 0x10c]        ; 005b0031
    ADD ESP,0x4                         ; 005b0037
    TEST EAX,EAX                        ; 005b003a
    JZ 0x005af702                       ; 005b003c
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH 0x1                            ; 005b0042
    PUSH 0x7                            ; 005b0044
    MOV EDX,dword ptr [EBP + 0x4e]      ; 005b0046
    PUSH EDX                            ; 005b0049
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b004a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b004f
    JMP 0x005af702                      ; 005b0052
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    MOV EDI,dword ptr [EBX + 0xc1d4]    ; 005b0057
        ;   Label: LAB_005b0057
    TEST EDI,EDI                        ; 005b005d
    JNZ 0x005af702                      ; 005b005f
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    CMP dword ptr [EBX + 0xdc],0x0      ; 005b0065
    JNZ 0x005af702                      ; 005b006c
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH EDI                            ; 005b0072
    PUSH EDX                            ; 005b0073
    LEA ESI,[EBP + 0x1e]                ; 005b0074
    LEA EDI,[EBP + 0xfffffef2]          ; 005b0077
    CALL core_skeleton.cpp_FUN_00569040 ; 005b007d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 005b0082
    LEA EAX,[EBP + 0xfffffef2]          ; 005b0085
    LEA ESI,[EBP + 0x1e]                ; 005b008b
    PUSH EAX                            ; 005b008e
    MOVSD ES:EDI,ESI                    ; 005b008f
    MOVSD ES:EDI,ESI                    ; 005b0090
    MOVSD ES:EDI,ESI                    ; 005b0091
    PUSH EBX                            ; 005b0092
    LEA ESI,[EBP + 0xffffff0a]          ; 005b0093
    CALL core_actor.cpp_FUN_00408b40    ; 005b0099
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005b009e
    PUSH 0x0                            ; 005b00a1
    LEA EAX,[EBP + -0x72]               ; 005b00a3
    LEA EDI,[EBP + -0x72]               ; 005b00a6
    PUSH EAX                            ; 005b00a9
    MOV ECX,dword ptr [0x0061dca4]      ; 005b00aa | g_CGorePtr
    LEA ESI,[EBP + 0xffffff0a]          ; 005b00b0
    PUSH ECX                            ; 005b00b6
    MOVSD ES:EDI,ESI                    ; 005b00b7
    MOVSD ES:EDI,ESI                    ; 005b00b8
    MOVSD ES:EDI,ESI                    ; 005b00b9
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 005b00ba
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 005b00bf
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 005b00c2
    JMP 0x005af702                      ; 005b00cc
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    PUSH 0x1                            ; 005b00d1
        ;   Label: LAB_005b00d1
    PUSH 0x1                            ; 005b00d3
    PUSH EAX                            ; 005b00d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b00d6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b00db
    JMP 0x005af702                      ; 005b00de
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    PUSH dword ptr [EBP + 0x92]         ; 005b00e3
        ;   Label: LAB_005b00e3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b00e9
    PUSH EBX                            ; 005b00ef
    CALL dword ptr [EAX + 0x144]        ; 005b00f0
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 005b00f6
    ADD ESP,0x8                         ; 005b00fc
    TEST EDI,EDI                        ; 005b00ff
    JZ 0x005af702                       ; 005b0101
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    JZ 0x005b01a4                       ; 005b0107
        ;   XREF to: 005b01a4 (CONDITIONAL_JUMP)  ; LAB_005b01a4
    CMP dword ptr [EBX + 0xc294],0x0    ; 005b010d
    JZ 0x005b01a4                       ; 005b0114
        ;   XREF to: 005b01a4 (CONDITIONAL_JUMP)  ; LAB_005b01a4
    MOV EAX,EDI                         ; 005b011a
    LEA ESI,[EBP + 0xfffffe0e]          ; 005b011c
    LEA EDX,[EBX + 0x20]                ; 005b0122
    FLD float ptr [EAX + 0x20]          ; 005b0125
    FLD float ptr [EAX + 0x24]          ; 005b0128
    FLD float ptr [EAX + 0x28]          ; 005b012b
    LEA EDI,[EBP + 0xfffffd66]          ; 005b012e
    FXCH ST2                            ; 005b0134
    FSUB float ptr [EDX]                ; 005b0136
    FXCH                                ; 005b0138
    FSUB float ptr [EDX + 0x4]          ; 005b013a
    FXCH ST2                            ; 005b013d
    FSUB float ptr [EDX + 0x8]          ; 005b013f
    FXCH                                ; 005b0142
    FSTP float ptr [EBP + 0xfffffe0e]   ; 005b0144
    FXCH                                ; 005b014a
    FSTP float ptr [EBP + 0xfffffe12]   ; 005b014c
    FSTP float ptr [EBP + 0xfffffe16]   ; 005b0152
    MOVSD ES:EDI,ESI                    ; 005b0158
    MOVSD ES:EDI,ESI                    ; 005b0159
    MOVSD ES:EDI,ESI                    ; 005b015a
    FLD float ptr [EBP + 0xfffffd6a]    ; 005b015b
    FMUL ST0                            ; 005b0161
    FLD float ptr [EBP + 0xfffffd66]    ; 005b0163
    FMUL ST0                            ; 005b0169
    FADDP                               ; 005b016b
    FLD float ptr [EBP + 0xfffffd6e]    ; 005b016d
    FMUL ST0                            ; 005b0173
    FADDP                               ; 005b0175
    FSQRT                               ; 005b0177
    FST float ptr [EBP + 0x56]          ; 005b0179
    FCOMP float ptr [EBX + 0xc1e0]      ; 005b017c
    FNSTSW AX                           ; 005b0182
    SAHF                                ; 005b0184
    JBE 0x005b0196                      ; 005b0185
        ;   XREF to: 005b0196 (CONDITIONAL_JUMP)  ; LAB_005b0196
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 005b0187
        ;   Label: LAB_005b0187
    JMP 0x005af702                      ; 005b0191
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    FLD float ptr [EBP + 0x56]          ; 005b0196
        ;   Label: LAB_005b0196
    FCOMP double ptr [0x005f9ada]       ; 005b0199 | DAT_005f9ada
    FNSTSW AX                           ; 005b019f
    SAHF                                ; 005b01a1
    JA 0x005b0187                       ; 005b01a2
        ;   XREF to: 005b0187 (CONDITIONAL_JUMP)  ; LAB_005b0187
    MOV ECX,dword ptr [0x02c8adcc]      ; 005b01a4 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_005b01a4
    PUSH ECX                            ; 005b01aa
    MOV ESI,dword ptr [EBX + 0xc294]    ; 005b01ab
    PUSH ESI                            ; 005b01b1
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005b01b2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005b01b7
    TEST EAX,EAX                        ; 005b01ba
    JZ 0x005b01c4                       ; 005b01bc
        ;   XREF to: 005b01c4 (CONDITIONAL_JUMP)  ; LAB_005b01c4
    CMP dword ptr [EBP + 0x6e],0xe      ; 005b01be
    JZ 0x005b0206                       ; 005b01c2
        ;   XREF to: 005b0206 (CONDITIONAL_JUMP)  ; LAB_005b0206
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 005b01c4
        ;   Label: LAB_005b01c4
    JZ 0x005af702                       ; 005b01cb
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH 0x3ecccccd                     ; 005b01d1
    CALL core_actor.cpp_FUN_0040cd00    ; 005b01d6
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005b01db
    TEST EAX,EAX                        ; 005b01de
    JNZ 0x005b021e                      ; 005b01e0
        ;   XREF to: 005b021e (CONDITIONAL_JUMP)  ; LAB_005b021e
    MOV EDX,dword ptr [EBP + 0x6e]      ; 005b01e2
        ;   Label: LAB_005b01e2
    LEA EAX,[EBX + 0x158]               ; 005b01e5
    CMP EDX,0xe                         ; 005b01eb
    JNZ 0x005b00d1                      ; 005b01ee
        ;   XREF to: 005b00d1 (CONDITIONAL_JUMP)  ; LAB_005b00d1
    PUSH 0x1                            ; 005b01f4
    PUSH 0xf                            ; 005b01f6
    PUSH EAX                            ; 005b01f8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b01f9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b01fe
    JMP 0x005af702                      ; 005b0201
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    PUSH 0x1                            ; 005b0206
        ;   Label: LAB_005b0206
    PUSH 0x0                            ; 005b0208
    LEA EAX,[EBX + 0x158]               ; 005b020a
    PUSH EAX                            ; 005b0210
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b0211
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b0216
    JMP 0x005af702                      ; 005b0219
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    PUSH EBX                            ; 005b021e
        ;   Label: LAB_005b021e
    CALL core_werewolf.cpp_FUN_005b0bb0 ; 005b021f
        ;   XREF to: 005b0bb0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_FUN_005b0bb0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005b0224
    JMP 0x005b01e2                      ; 005b0227
        ;   XREF to: 005b01e2 (UNCONDITIONAL_JUMP)  ; LAB_005b01e2
    PUSH dword ptr [EBP + 0x92]         ; 005b0229
        ;   Label: LAB_005b0229
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b022f
    PUSH EBX                            ; 005b0235
    CALL dword ptr [EAX + 0x144]        ; 005b0236
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 005b023c
    ADD ESP,0x8                         ; 005b0242
    TEST EDI,EDI                        ; 005b0245
    JZ 0x005b02eb                       ; 005b0247
        ;   XREF to: 005b02eb (CONDITIONAL_JUMP)  ; LAB_005b02eb
    CMP dword ptr [EBX + 0xc294],0x0    ; 005b024d
    JZ 0x005b0319                       ; 005b0254
        ;   XREF to: 005b0319 (CONDITIONAL_JUMP)  ; LAB_005b0319
    MOV EAX,EDI                         ; 005b025a
    LEA ESI,[EBP + 0xfffffe6e]          ; 005b025c
    LEA EDX,[EBX + 0x20]                ; 005b0262
    FLD float ptr [EAX + 0x20]          ; 005b0265
    FLD float ptr [EAX + 0x24]          ; 005b0268
    FLD float ptr [EAX + 0x28]          ; 005b026b
    LEA EDI,[EBP + -0x2a]               ; 005b026e
    FXCH ST2                            ; 005b0271
    FSUB float ptr [EDX]                ; 005b0273
    FXCH                                ; 005b0275
    FSUB float ptr [EDX + 0x4]          ; 005b0277
    FXCH ST2                            ; 005b027a
    FSUB float ptr [EDX + 0x8]          ; 005b027c
    FXCH                                ; 005b027f
    FSTP float ptr [EBP + 0xfffffe6e]   ; 005b0281
    FXCH                                ; 005b0287
    FSTP float ptr [EBP + 0xfffffe72]   ; 005b0289
    FSTP float ptr [EBP + 0xfffffe76]   ; 005b028f
    MOVSD ES:EDI,ESI                    ; 005b0295
    MOVSD ES:EDI,ESI                    ; 005b0296
    MOVSD ES:EDI,ESI                    ; 005b0297
    FLD float ptr [EBP + -0x26]         ; 005b0298
    FMUL ST0                            ; 005b029b
    FLD float ptr [EBP + -0x2a]         ; 005b029d
    FMUL ST0                            ; 005b02a0
    FADDP                               ; 005b02a2
    FLD float ptr [EBP + -0x22]         ; 005b02a4
    FMUL ST0                            ; 005b02a7
    FADDP                               ; 005b02a9
    FSQRT                               ; 005b02ab
    FST float ptr [EBP + 0x4a]          ; 005b02ad
    FCOMP float ptr [EBX + 0xc1e0]      ; 005b02b0
    FNSTSW AX                           ; 005b02b6
    SAHF                                ; 005b02b8
    JA 0x005b02c9                       ; 005b02b9
        ;   XREF to: 005b02c9 (CONDITIONAL_JUMP)  ; LAB_005b02c9
    FLD float ptr [EBP + 0x4a]          ; 005b02bb
    FCOMP double ptr [0x005f9ada]       ; 005b02be | DAT_005f9ada
    FNSTSW AX                           ; 005b02c4
    SAHF                                ; 005b02c6
    JBE 0x005b0319                      ; 005b02c7
        ;   XREF to: 005b0319 (CONDITIONAL_JUMP)  ; LAB_005b0319
    PUSH 0x1                            ; 005b02c9
        ;   Label: LAB_005b02c9
    PUSH 0x0                            ; 005b02cb
    LEA EAX,[EBX + 0x158]               ; 005b02cd
    PUSH EAX                            ; 005b02d3
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 005b02d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b02de
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b02e3
    JMP 0x005af702                      ; 005b02e6
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    PUSH dword ptr [EBP + 0x92]         ; 005b02eb
        ;   Label: LAB_005b02eb
    PUSH EBX                            ; 005b02f1
    CALL core_enemy.cpp_FUN_004a0fe0    ; 005b02f2
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b02f7
    TEST EAX,EAX                        ; 005b02fa
    JNZ 0x005af702                      ; 005b02fc
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH 0x1                            ; 005b0302
    PUSH EDI                            ; 005b0304
    LEA EAX,[EBX + 0x158]               ; 005b0305
    PUSH EAX                            ; 005b030b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b030c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b0311
    JMP 0x005af702                      ; 005b0314
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    MOV EDX,dword ptr [0x02c8adcc]      ; 005b0319 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_005b0319
    PUSH EDX                            ; 005b031f
    MOV ECX,dword ptr [EBX + 0xc294]    ; 005b0320
    PUSH ECX                            ; 005b0326
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005b0327
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005b032c
    TEST EAX,EAX                        ; 005b032f
    JZ 0x005b033d                       ; 005b0331
        ;   XREF to: 005b033d (CONDITIONAL_JUMP)  ; LAB_005b033d
    CMP dword ptr [EBP + 0x6e],0xf      ; 005b0333
    JZ 0x005b0206                       ; 005b0337
        ;   XREF to: 005b0206 (CONDITIONAL_JUMP)  ; LAB_005b0206
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005b033d
        ;   Label: LAB_005b033d
    MOV EDI,dword ptr [EBX + 0xc268]    ; 005b0343
    MOV dword ptr [EBP + 0x6a],EAX      ; 005b0349
    CMP EDI,0x2                         ; 005b034c
    JNZ 0x005b04a5                      ; 005b034f
        ;   XREF to: 005b04a5 (CONDITIONAL_JUMP)  ; LAB_005b04a5
    CMP dword ptr [EBX + 0xc29c],0x0    ; 005b0355
    JNZ 0x005b05f8                      ; 005b035c
        ;   XREF to: 005b05f8 (CONDITIONAL_JUMP)  ; LAB_005b05f8
    MOV ECX,0x5f9a4c                    ; 005b0362 | = "..\\core\\werewolf.cpp"
        ;   Label: LAB_005b0362
    MOV ESI,0x1ad                       ; 005b0367
    PUSH 0x5f9a61                       ; 005b036c | = "Alpha werewolf requires 2 waypoints"
    MOV dword ptr [0x01d1d400],ECX      ; 005b0371 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005b0377 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005b037d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005b0382
    SUB ESP,0x8                         ; 005b0385
        ;   Label: LAB_005b0385
    FLD float ptr [EBX + 0xc2a8]        ; 005b0388
    FSTP double ptr [ESP]               ; 005b038e
    MOV EDI,dword ptr [EBX + 0xc2a4]    ; 005b0391
    PUSH EDI                            ; 005b0397
    PUSH 0x5f9a85                       ; 005b0398 | = "Phase: %d, Timer: %f\n"
    MOV EAX,[0x00611100]                ; 005b039d | g_CConsolePtr
    PUSH EAX                            ; 005b03a2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005b03a3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EDX,dword ptr [EBX + 0xc2a4]    ; 005b03a8
    ADD ESP,0x14                        ; 005b03ae
    CMP EDX,0x1                         ; 005b03b1
    JNZ 0x005b060a                      ; 005b03b4
        ;   XREF to: 005b060a (CONDITIONAL_JUMP)  ; LAB_005b060a
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 005b03ba
        ;   Label: LAB_005b03ba
    ADD EAX,0x20                        ; 005b03c0
    PUSH EAX                            ; 005b03c3
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005b03c4
    PUSH ESI                            ; 005b03ca
    LEA ESI,[EBP + 0xfffffe62]          ; 005b03cb
    LEA EDI,[EBP + 0xfffffe32]          ; 005b03d1
    CALL core_actor.cpp_FUN_00408bb0    ; 005b03d7
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xfffffe62]          ; 005b03dc
    MOVSD ES:EDI,ESI                    ; 005b03e2
    MOVSD ES:EDI,ESI                    ; 005b03e3
    MOVSD ES:EDI,ESI                    ; 005b03e4
    ADD ESP,0x8                         ; 005b03e5
    FLD float ptr [EBP + 0xfffffe3a]    ; 005b03e8
    FLDZ                                ; 005b03ee
    FCOMPP                              ; 005b03f0
    FNSTSW AX                           ; 005b03f2
    SAHF                                ; 005b03f4
    JBE 0x005b0618                      ; 005b03f5
        ;   XREF to: 005b0618 (CONDITIONAL_JUMP)  ; LAB_005b0618
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 005b03fb
    MOV dword ptr [EBP + 0x6a],EAX      ; 005b0401
        ;   Label: LAB_005b0401
    MOV EAX,dword ptr [EBX + 0xc2a4]    ; 005b0404
        ;   Label: LAB_005b0404
    CMP EAX,0x1                         ; 005b040a
    JNZ 0x005b072c                      ; 005b040d
        ;   XREF to: 005b072c (CONDITIONAL_JUMP)  ; LAB_005b072c
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005b0413
        ;   Label: LAB_005b0413
    LEA EDI,[EBP + 0xfffffe56]          ; 005b0416
    LEA ESI,[EBP + 0xfffffe26]          ; 005b041c
    LEA EDX,[EBX + 0x20]                ; 005b0422
    FLD float ptr [EAX + 0x20]          ; 005b0425
    FLD float ptr [EAX + 0x24]          ; 005b0428
    FLD float ptr [EAX + 0x28]          ; 005b042b
    FXCH ST2                            ; 005b042e
    FSUB float ptr [EDX]                ; 005b0430
    FXCH                                ; 005b0432
    FSUB float ptr [EDX + 0x4]          ; 005b0434
    FXCH ST2                            ; 005b0437
    FSUB float ptr [EDX + 0x8]          ; 005b0439
    FXCH                                ; 005b043c
    FSTP float ptr [EBP + 0xfffffe26]   ; 005b043e
    FXCH                                ; 005b0444
    FSTP float ptr [EBP + 0xfffffe2a]   ; 005b0446
    FSTP float ptr [EBP + 0xfffffe2e]   ; 005b044c
    MOVSD ES:EDI,ESI                    ; 005b0452
    MOVSD ES:EDI,ESI                    ; 005b0453
    MOVSD ES:EDI,ESI                    ; 005b0454
    FLD float ptr [EBP + 0xfffffe5a]    ; 005b0455
    FMUL ST0                            ; 005b045b
    FLD float ptr [EBP + 0xfffffe56]    ; 005b045d
    FMUL ST0                            ; 005b0463
    FADDP                               ; 005b0465
    FLD float ptr [EBP + 0xfffffe5e]    ; 005b0467
    FMUL ST0                            ; 005b046d
    FADDP                               ; 005b046f
    FSQRT                               ; 005b0471
    FCOMP double ptr [0x005f9ae2]       ; 005b0473 | DAT_005f9ae2
    FNSTSW AX                           ; 005b0479
    SAHF                                ; 005b047b
    JNC 0x005b04a5                      ; 005b047c
        ;   XREF to: 005b04a5 (CONDITIONAL_JUMP)  ; LAB_005b04a5
    MOV EDI,dword ptr [EBX + 0xc2a4]    ; 005b047e
    INC EDI                             ; 005b0484
    MOV dword ptr [EBX + 0xc2a4],EDI    ; 005b0485
    CMP EDI,0x3                         ; 005b048b
    JLE 0x005b049a                      ; 005b048e
        ;   XREF to: 005b049a (CONDITIONAL_JUMP)  ; LAB_005b049a
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 005b0490
    MOV EAX,[0x00607fd8]                ; 005b049a | DAT_00607fd8
        ;   Label: LAB_005b049a
    MOV dword ptr [EBX + 0xc2a8],EAX    ; 005b049f
    MOV EAX,[0x00607fcc]                ; 005b04a5 | DAT_00607fcc
        ;   Label: LAB_005b04a5
    PUSH 0x3e32b8c2                     ; 005b04aa
    MOV dword ptr [EBP + 0x36],EAX      ; 005b04af
    LEA EAX,[EBX + 0x249c]              ; 005b04b2
    PUSH 0x3f000000                     ; 005b04b8
    MOV dword ptr [EAX + 0x8],0x0       ; 005b04bd
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005b04c4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b04c7
    MOV dword ptr [EAX + 0x4],EDX       ; 005b04ca
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b04cd
    MOV dword ptr [EAX],EDX             ; 005b04d0
    MOV EAX,dword ptr [EBP + 0x36]      ; 005b04d2
    XOR EDX,EDX                         ; 005b04d5
    MOV dword ptr [EBP + 0xfffffe22],EAX ; 005b04d7
    LEA EAX,[EBP + 0xfffffe1a]          ; 005b04dd
    MOV dword ptr [EBP + 0xfffffe1a],EDX ; 005b04e3
    PUSH EAX                            ; 005b04e9
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005b04ea
    MOV dword ptr [EBP + 0xfffffe1e],EDX ; 005b04ed
    PUSH ESI                            ; 005b04f3
    MOV EAX,dword ptr [EAX + 0x154]     ; 005b04f4
    CALL dword ptr [EAX + 0xc4]         ; 005b04fa
    ADD ESP,0x4                         ; 005b0500
    PUSH EAX                            ; 005b0503
    ADD ESI,0x20                        ; 005b0504
    PUSH ESI                            ; 005b0507
    PUSH EBX                            ; 005b0508
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 005b0509
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005b050e
    TEST EAX,EAX                        ; 005b0511
    JL 0x005b076d                       ; 005b0513
        ;   XREF to: 005b076d (CONDITIONAL_JUMP)  ; LAB_005b076d
    JLE 0x005b079a                      ; 005b0519
        ;   XREF to: 005b079a (CONDITIONAL_JUMP)  ; LAB_005b079a
    CMP dword ptr [EBX + 0xc268],0x2    ; 005b051f
    JNZ 0x005b0540                      ; 005b0526
        ;   XREF to: 005b0540 (CONDITIONAL_JUMP)  ; LAB_005b0540
    MOV EAX,dword ptr [EBX + 0xc2a4]    ; 005b0528
    CMP EAX,0x1                         ; 005b052e
    JZ 0x005af702                       ; 005b0531
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    CMP EAX,0x3                         ; 005b0537
    JZ 0x005af702                       ; 005b053a
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    FLD float ptr [EBX + 0xc1e4]        ; 005b0540
        ;   Label: LAB_005b0540
    FLDZ                                ; 005b0546
    FCOMPP                              ; 005b0548
    FNSTSW AX                           ; 005b054a
    SAHF                                ; 005b054c
    JC 0x005b05cb                       ; 005b054d
        ;   XREF to: 005b05cb (CONDITIONAL_JUMP)  ; LAB_005b05cb
    PUSH 0x2                            ; 005b0553
    PUSH 0x0                            ; 005b0555
    CALL core_actor.cpp_FUN_0040cc60    ; 005b0557
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b055c
    MOV ESI,EAX                         ; 005b055f
    TEST EAX,EAX                        ; 005b0561
    JNZ 0x005b0578                      ; 005b0563
        ;   XREF to: 005b0578 (CONDITIONAL_JUMP)  ; LAB_005b0578
    PUSH 0x1                            ; 005b0565
    PUSH 0x2                            ; 005b0567
    LEA EAX,[EBX + 0x158]               ; 005b0569
    PUSH EAX                            ; 005b056f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b0570
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b0575
    CMP ESI,0x1                         ; 005b0578
        ;   Label: LAB_005b0578
    JNZ 0x005b058f                      ; 005b057b
        ;   XREF to: 005b058f (CONDITIONAL_JUMP)  ; LAB_005b058f
    PUSH ESI                            ; 005b057d
    PUSH 0x3                            ; 005b057e
    LEA EAX,[EBX + 0x158]               ; 005b0580
    PUSH EAX                            ; 005b0586
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b0587
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b058c
    CMP ESI,0x2                         ; 005b058f
        ;   Label: LAB_005b058f
    JNZ 0x005b05a7                      ; 005b0592
        ;   XREF to: 005b05a7 (CONDITIONAL_JUMP)  ; LAB_005b05a7
    PUSH 0x1                            ; 005b0594
    PUSH 0x4                            ; 005b0596
    LEA EAX,[EBX + 0x158]               ; 005b0598
    PUSH EAX                            ; 005b059e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b059f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b05a4
    PUSH 0x3f19999a                     ; 005b05a7
        ;   Label: LAB_005b05a7
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 005b05ac
    CALL core_actor.cpp_FUN_0040cd00    ; 005b05b6
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005b05bb
    TEST EAX,EAX                        ; 005b05be
    JZ 0x005b05cb                       ; 005b05c0
        ;   XREF to: 005b05cb (CONDITIONAL_JUMP)  ; LAB_005b05cb
    PUSH EBX                            ; 005b05c2
    CALL core_werewolf.cpp_FUN_005b0bb0 ; 005b05c3
        ;   XREF to: 005b0bb0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_FUN_005b0bb0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005b05c8
    FLD float ptr [EBX + 0xc288]        ; 005b05cb
        ;   Label: LAB_005b05cb
    FSUB float ptr [EBP + 0x92]         ; 005b05d1
    FST float ptr [EBX + 0xc288]        ; 005b05d7
    FLDZ                                ; 005b05dd
    FCOMPP                              ; 005b05df
    FNSTSW AX                           ; 005b05e1
    SAHF                                ; 005b05e3
    JBE 0x005af702                      ; 005b05e4
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH EBX                            ; 005b05ea
    CALL core_werewolf.cpp_FUN_005b0bb0 ; 005b05eb
        ;   XREF to: 005b0bb0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_FUN_005b0bb0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005b05f0
    JMP 0x005af702                      ; 005b05f3
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    CMP dword ptr [EBX + 0xc2a0],0x0    ; 005b05f8
        ;   Label: LAB_005b05f8
    JZ 0x005b0362                       ; 005b05ff
        ;   XREF to: 005b0362 (CONDITIONAL_JUMP)  ; LAB_005b0362
    JMP 0x005b0385                      ; 005b0605
        ;   XREF to: 005b0385 (UNCONDITIONAL_JUMP)  ; LAB_005b0385
    CMP EDX,0x3                         ; 005b060a
        ;   Label: LAB_005b060a
    JZ 0x005b03ba                       ; 005b060d
        ;   XREF to: 005b03ba (CONDITIONAL_JUMP)  ; LAB_005b03ba
    JMP 0x005b0404                      ; 005b0613
        ;   XREF to: 005b0404 (UNCONDITIONAL_JUMP)  ; LAB_005b0404
    MOV EAX,dword ptr [EBX + 0xc2a0]    ; 005b0618
        ;   Label: LAB_005b0618
    ADD EAX,0x20                        ; 005b061e
    PUSH EAX                            ; 005b0621
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 005b0622
    PUSH EDI                            ; 005b0628
    LEA ESI,[EBP + -0x42]               ; 005b0629
    LEA EDI,[EBP + -0x36]               ; 005b062c
    CALL core_actor.cpp_FUN_00408bb0    ; 005b062f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + -0x42]               ; 005b0634
    MOVSD ES:EDI,ESI                    ; 005b0637
    MOVSD ES:EDI,ESI                    ; 005b0638
    MOVSD ES:EDI,ESI                    ; 005b0639
    ADD ESP,0x8                         ; 005b063a
    FLD float ptr [EBP + -0x2e]         ; 005b063d
    FLDZ                                ; 005b0640
    FCOMPP                              ; 005b0642
    FNSTSW AX                           ; 005b0644
    SAHF                                ; 005b0646
    JBE 0x005b0654                      ; 005b0647
        ;   XREF to: 005b0654 (CONDITIONAL_JUMP)  ; LAB_005b0654
    MOV EAX,dword ptr [EBX + 0xc2a0]    ; 005b0649
    JMP 0x005b0401                      ; 005b064f
        ;   XREF to: 005b0401 (UNCONDITIONAL_JUMP)  ; LAB_005b0401
    LEA EDI,[EBP + -0x12]               ; 005b0654
        ;   Label: LAB_005b0654
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 005b0657
    LEA ESI,[EBP + 0xfffffec2]          ; 005b065d
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 005b0663
    FLD float ptr [EDX + 0x20]          ; 005b0669
    FLD float ptr [EDX + 0x24]          ; 005b066c
    FLD float ptr [EDX + 0x28]          ; 005b066f
    FXCH ST2                            ; 005b0672
    FSUB float ptr [EAX + 0x20]         ; 005b0674
    FXCH                                ; 005b0677
    FSUB float ptr [EAX + 0x24]         ; 005b0679
    FXCH ST2                            ; 005b067c
    FSUB float ptr [EAX + 0x28]         ; 005b067e
    FXCH                                ; 005b0681
    FSTP float ptr [EBP + 0xfffffec2]   ; 005b0683
    FXCH                                ; 005b0689
    FSTP float ptr [EBP + 0xfffffec6]   ; 005b068b
    FSTP float ptr [EBP + 0xfffffeca]   ; 005b0691
    MOVSD ES:EDI,ESI                    ; 005b0697
    MOVSD ES:EDI,ESI                    ; 005b0698
    MOVSD ES:EDI,ESI                    ; 005b0699
    FLD float ptr [EBP + -0xe]          ; 005b069a
    FMUL ST0                            ; 005b069d
    FLD float ptr [EBP + -0x12]         ; 005b069f
    FMUL ST0                            ; 005b06a2
    FADDP                               ; 005b06a4
    FLD float ptr [EBP + -0xa]          ; 005b06a6
    FMUL ST0                            ; 005b06a9
    FADDP                               ; 005b06ab
    MOV dword ptr [EBP + 0x46],EAX      ; 005b06ad
    FSQRT                               ; 005b06b0
    FLD float ptr [EDX + 0x20]          ; 005b06b2
    FLD float ptr [EDX + 0x24]          ; 005b06b5
    MOV ECX,dword ptr [EBX + 0xc2a0]    ; 005b06b8
    FLD float ptr [EDX + 0x28]          ; 005b06be
    LEA EAX,[ECX + 0x20]                ; 005b06c1
    LEA EDI,[EBP + 0xfffffcfa]          ; 005b06c4
    LEA ESI,[EBP + 0xfffffdc6]          ; 005b06ca
    FXCH ST2                            ; 005b06d0
    FSUB float ptr [EAX]                ; 005b06d2
    FXCH                                ; 005b06d4
    FSUB float ptr [EAX + 0x4]          ; 005b06d6
    FXCH ST2                            ; 005b06d9
    FSUB float ptr [EAX + 0x8]          ; 005b06db
    FXCH                                ; 005b06de
    FSTP float ptr [EBP + 0xfffffdc6]   ; 005b06e0
    FXCH                                ; 005b06e6
    FSTP float ptr [EBP + 0xfffffdca]   ; 005b06e8
    FSTP float ptr [EBP + 0xfffffdce]   ; 005b06ee
    MOVSD ES:EDI,ESI                    ; 005b06f4
    MOVSD ES:EDI,ESI                    ; 005b06f5
    MOVSD ES:EDI,ESI                    ; 005b06f6
    FLD float ptr [EBP + 0xfffffcfe]    ; 005b06f7
    FMUL ST0                            ; 005b06fd
    FLD float ptr [EBP + 0xfffffcfa]    ; 005b06ff
    FMUL ST0                            ; 005b0705
    FADDP                               ; 005b0707
    FLD float ptr [EBP + 0xfffffd02]    ; 005b0709
    FMUL ST0                            ; 005b070f
    FADDP                               ; 005b0711
    FSQRT                               ; 005b0713
    FCOMPP                              ; 005b0715
    FNSTSW AX                           ; 005b0717
    SAHF                                ; 005b0719
    JNC 0x005b0724                      ; 005b071a
        ;   XREF to: 005b0724 (CONDITIONAL_JUMP)  ; LAB_005b0724
    MOV EAX,dword ptr [EBP + 0x46]      ; 005b071c
    JMP 0x005b0401                      ; 005b071f
        ;   XREF to: 005b0401 (UNCONDITIONAL_JUMP)  ; LAB_005b0401
    MOV dword ptr [EBP + 0x6a],ECX      ; 005b0724
        ;   Label: LAB_005b0724
    JMP 0x005b0404                      ; 005b0727
        ;   XREF to: 005b0404 (UNCONDITIONAL_JUMP)  ; LAB_005b0404
    CMP EAX,0x3                         ; 005b072c
        ;   Label: LAB_005b072c
    JZ 0x005b0413                       ; 005b072f
        ;   XREF to: 005b0413 (CONDITIONAL_JUMP)  ; LAB_005b0413
    FLD float ptr [EBX + 0xc2a8]        ; 005b0735
    FLDZ                                ; 005b073b
    FCOMPP                              ; 005b073d
    FNSTSW AX                           ; 005b073f
    SAHF                                ; 005b0741
    JC 0x005b04a5                       ; 005b0742
        ;   XREF to: 005b04a5 (CONDITIONAL_JUMP)  ; LAB_005b04a5
    MOV ECX,dword ptr [EBX + 0xc2a4]    ; 005b0748
    INC ECX                             ; 005b074e
    MOV dword ptr [EBX + 0xc2a4],ECX    ; 005b074f
    CMP ECX,0x3                         ; 005b0755
    JLE 0x005b04a5                      ; 005b0758
        ;   XREF to: 005b04a5 (CONDITIONAL_JUMP)  ; LAB_005b04a5
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 005b075e
    JMP 0x005b04a5                      ; 005b0768
        ;   XREF to: 005b04a5 (UNCONDITIONAL_JUMP)  ; LAB_005b04a5
    PUSH EBX                            ; 005b076d
        ;   Label: LAB_005b076d
    PUSH 0x5f9a9b                       ; 005b076e | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00611100]      ; 005b0773 | g_CConsolePtr
    PUSH ECX                            ; 005b0779 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005b077a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005b077f
    PUSH 0x1                            ; 005b0782
    PUSH 0x0                            ; 005b0784
    LEA EAX,[EBX + 0x158]               ; 005b0786
    PUSH EAX                            ; 005b078c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b078d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b0792
    JMP 0x005b05cb                      ; 005b0795
        ;   XREF to: 005b05cb (UNCONDITIONAL_JUMP)  ; LAB_005b05cb
    MOV EDI,dword ptr [0x02c8adcc]      ; 005b079a | g_CTrapClassInfo.name_hash
        ;   Label: LAB_005b079a
    PUSH EDI                            ; 005b07a0
    MOV EAX,dword ptr [EBX + 0xc294]    ; 005b07a1
    PUSH EAX                            ; 005b07a7
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005b07a8
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005b07ad
    TEST EAX,EAX                        ; 005b07b0
    JNZ 0x005b05cb                      ; 005b07b2
        ;   XREF to: 005b05cb (CONDITIONAL_JUMP)  ; LAB_005b05cb
    FLD float ptr [ESI + 0x4]           ; 005b07b8
    FLD float ptr [ESI + 0x8]           ; 005b07bb
    FLD float ptr [ESI]                 ; 005b07be
    LEA EDI,[EBP + 0xfffffd5a]          ; 005b07c0
    LEA EAX,[EBX + 0x20]                ; 005b07c6
    LEA EDX,[EBP + 0xfffffd5a]          ; 005b07c9
    LEA ESI,[EBP + -0x1e]               ; 005b07cf
    FSUB float ptr [EAX]                ; 005b07d2
    FXCH ST2                            ; 005b07d4
    FSUB float ptr [EAX + 0x4]          ; 005b07d6
    FXCH                                ; 005b07d9
    FSUB float ptr [EAX + 0x8]          ; 005b07db
    FXCH ST2                            ; 005b07de
    FSTP float ptr [EBP + -0x1e]        ; 005b07e0
    FSTP float ptr [EBP + -0x1a]        ; 005b07e3
    FSTP float ptr [EBP + -0x16]        ; 005b07e6
    LEA EAX,[EBP + 0xfffffd2a]          ; 005b07e9
    MOVSD ES:EDI,ESI                    ; 005b07ef
    MOVSD ES:EDI,ESI                    ; 005b07f0
    MOVSD ES:EDI,ESI                    ; 005b07f1
    CMP EAX,EDX                         ; 005b07f2
    JZ 0x005b081a                       ; 005b07f4
        ;   XREF to: 005b081a (CONDITIONAL_JUMP)  ; LAB_005b081a
    MOV EAX,dword ptr [EBP + 0xfffffd5a] ; 005b07f6
    MOV dword ptr [EBP + 0xfffffd2a],EAX ; 005b07fc
    MOV EAX,dword ptr [EBP + 0xfffffd5e] ; 005b0802
    MOV dword ptr [EBP + 0xfffffd2e],EAX ; 005b0808
    MOV EAX,dword ptr [EBP + 0xfffffd62] ; 005b080e
    MOV dword ptr [EBP + 0xfffffd32],EAX ; 005b0814
    FLD float ptr [EBP + 0xfffffd2e]    ; 005b081a
        ;   Label: LAB_005b081a
    FMUL ST0                            ; 005b0820
    FLD float ptr [EBP + 0xfffffd2a]    ; 005b0822
    FMUL ST0                            ; 005b0828
    FADDP                               ; 005b082a
    FLD float ptr [EBP + 0xfffffd32]    ; 005b082c
    FMUL ST0                            ; 005b0832
    FADDP                               ; 005b0834
    FSQRT                               ; 005b0836
    MOV EDX,0x41a00000                  ; 005b0838
    MOV ECX,dword ptr [EBX + 0xc268]    ; 005b083d
    MOV dword ptr [EBP + 0x5e],EDX      ; 005b0843
    FSTP float ptr [EBP + 0x52]         ; 005b0846
    CMP ECX,0x1                         ; 005b0849
    JNZ 0x005b0855                      ; 005b084c
        ;   XREF to: 005b0855 (CONDITIONAL_JUMP)  ; LAB_005b0855
    MOV dword ptr [EBP + 0x5e],0x41200000 ; 005b084e
    CMP dword ptr [EBX + 0xc268],0x2    ; 005b0855
        ;   Label: LAB_005b0855
    JNZ 0x005b0865                      ; 005b085c
        ;   XREF to: 005b0865 (CONDITIONAL_JUMP)  ; LAB_005b0865
    MOV dword ptr [EBP + 0x5e],0x41200000 ; 005b085e
    LEA EAX,[EBX + 0x158]               ; 005b0865
        ;   Label: LAB_005b0865
    FLD float ptr [EBP + 0x52]          ; 005b086b
    MOV dword ptr [EBP + 0x42],EAX      ; 005b086e
    FCOMP float ptr [EBP + 0x5e]        ; 005b0871
    FNSTSW AX                           ; 005b0874
    SAHF                                ; 005b0876
    JA 0x005b08b0                       ; 005b0877
        ;   XREF to: 005b08b0 (CONDITIONAL_JUMP)  ; LAB_005b08b0
    FLD float ptr [0x00607fcc]          ; 005b0879 | DAT_00607fcc
    FMUL float ptr [0x005f9aea]         ; 005b087f | DAT_005f9aea
    FCOMP float ptr [EBP + 0x52]        ; 005b0885
    FNSTSW AX                           ; 005b0888
    SAHF                                ; 005b088a
    JBE 0x005b05cb                      ; 005b088b
        ;   XREF to: 005b05cb (CONDITIONAL_JUMP)  ; LAB_005b05cb
    CMP dword ptr [EBP + 0x6e],0xf      ; 005b0891
    JNZ 0x005b05cb                      ; 005b0895
        ;   XREF to: 005b05cb (CONDITIONAL_JUMP)  ; LAB_005b05cb
    PUSH 0x1                            ; 005b089b
    PUSH 0x0                            ; 005b089d
    MOV ECX,dword ptr [EBP + 0x42]      ; 005b089f
    PUSH ECX                            ; 005b08a2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b08a3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b08a8
    JMP 0x005b05cb                      ; 005b08ab
        ;   XREF to: 005b05cb (UNCONDITIONAL_JUMP)  ; LAB_005b05cb
    LEA EAX,[EBP + 0xfffffd2a]          ; 005b08b0
        ;   Label: LAB_005b08b0
    PUSH EAX                            ; 005b08b6
    LEA ESI,[EBP + 0xfffffeda]          ; 005b08b7
    LEA EDI,[EBP + 0xfffffdf6]          ; 005b08bd
    CALL core_vecdir.cpp_FUN_005a7520   ; 005b08c3
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffeda]          ; 005b08c8
    MOVSD ES:EDI,ESI                    ; 005b08ce
    MOVSD ES:EDI,ESI                    ; 005b08cf
    MOVSD ES:EDI,ESI                    ; 005b08d0
    ADD ESP,0x4                         ; 005b08d1
    FLD float ptr [EBP + 0xfffffdfa]    ; 005b08d4
    FSUB float ptr [EBX + 0x34]         ; 005b08da
    SUB ESP,0x4                         ; 005b08dd
    FSTP float ptr [ESP]                ; 005b08e0
    CALL core_actor.cpp_FUN_0040cd60    ; 005b08e3
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 005b08e8
    FLD float ptr [EBP + 0x76]          ; 005b08eb
    FABS                                ; 005b08ee
    ADD ESP,0x4                         ; 005b08f0
    FCOMP double ptr [0x005f9af2]       ; 005b08f3 | DAT_005f9af2
    FNSTSW AX                           ; 005b08f9
    SAHF                                ; 005b08fb
    JNC 0x005b05cb                      ; 005b08fc
        ;   XREF to: 005b05cb (CONDITIONAL_JUMP)  ; LAB_005b05cb
    PUSH 0x1                            ; 005b0902
    PUSH 0x8                            ; 005b0904
    MOV ESI,dword ptr [EBP + 0x42]      ; 005b0906
    PUSH ESI                            ; 005b0909
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b090a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b090f
    PUSH 0x3f59999a                     ; 005b0912
    CALL core_actor.cpp_FUN_0040cd00    ; 005b0917
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005b091c
    TEST EAX,EAX                        ; 005b091f
    JNZ 0x005b0959                      ; 005b0921
        ;   XREF to: 005b0959 (CONDITIONAL_JUMP)  ; LAB_005b0959
    XOR EDI,EDI                         ; 005b0923
        ;   Label: LAB_005b0923
    XOR ESI,ESI                         ; 005b0925
    MOV EAX,[0x00622c18]                ; 005b0927 | g_CDemonSetPtr
        ;   Label: LAB_005b0927
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 005b092c | g_CDemonSetInstance.field1380332_0x150fec
    JGE 0x005b05cb                      ; 005b0932
        ;   XREF to: 005b05cb (CONDITIONAL_JUMP)  ; LAB_005b05cb
    MOV ECX,dword ptr [0x02c9a594]      ; 005b0938 | g_CWerewolfClassInfo.name_hash
    PUSH ECX                            ; 005b093e
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 005b093f
    PUSH EDX                            ; 005b0946
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005b0947
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005b094c
    TEST EAX,EAX                        ; 005b094f
    JNZ 0x005b0964                      ; 005b0951
        ;   XREF to: 005b0964 (CONDITIONAL_JUMP)  ; LAB_005b0964
    INC ESI                             ; 005b0953
        ;   Label: LAB_005b0953
    ADD EDI,0x4                         ; 005b0954
    JMP 0x005b0927                      ; 005b0957
        ;   XREF to: 005b0927 (UNCONDITIONAL_JUMP)  ; LAB_005b0927
    PUSH EBX                            ; 005b0959
        ;   Label: LAB_005b0959
    CALL core_werewolf.cpp_FUN_005b0bb0 ; 005b095a
        ;   XREF to: 005b0bb0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_FUN_005b0bb0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005b095f
    JMP 0x005b0923                      ; 005b0962
        ;   XREF to: 005b0923 (UNCONDITIONAL_JUMP)  ; LAB_005b0923
    CMP EAX,EBX                         ; 005b0964
        ;   Label: LAB_005b0964
    JZ 0x005b0953                       ; 005b0966
        ;   XREF to: 005b0953 (CONDITIONAL_JUMP)  ; LAB_005b0953
    ADD EAX,0x158                       ; 005b0968
    PUSH EAX                            ; 005b096d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005b096e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005b0973
    ADD ESP,0x4                         ; 005b0976
    CMP EAX,0x8                         ; 005b0979
    JNZ 0x005b0953                      ; 005b097c
        ;   XREF to: 005b0953 (CONDITIONAL_JUMP)  ; LAB_005b0953
    PUSH 0x2                            ; 005b097e
    PUSH 0x0                            ; 005b0980
    CALL core_actor.cpp_FUN_0040cc60    ; 005b0982
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b0987
    MOV EDX,EAX                         ; 005b098a
    CMP EAX,0x1                         ; 005b098c
    JNZ 0x005b099d                      ; 005b098f
        ;   XREF to: 005b099d (CONDITIONAL_JUMP)  ; LAB_005b099d
    FLD float ptr [EBX + 0x34]          ; 005b0991
    FADD float ptr [0x005f9b02]         ; 005b0994 | DAT_005f9b02
    FSTP float ptr [EBX + 0x34]         ; 005b099a
    CMP EDX,0x2                         ; 005b099d
        ;   Label: LAB_005b099d
    JNZ 0x005b05cb                      ; 005b09a0
        ;   XREF to: 005b05cb (CONDITIONAL_JUMP)  ; LAB_005b05cb
    FLD float ptr [EBX + 0x34]          ; 005b09a6
    FADD float ptr [0x005f9b06]         ; 005b09a9 | DAT_005f9b06
    FSTP float ptr [EBX + 0x34]         ; 005b09af
    JMP 0x005b05cb                      ; 005b09b2
        ;   XREF to: 005b05cb (UNCONDITIONAL_JUMP)  ; LAB_005b05cb
    LEA EDX,[EBX + 0x158]               ; 005b09b7
        ;   Label: LAB_005b09b7
    MOV dword ptr [EBP + 0x4e],EDX      ; 005b09bd
    JBE 0x005aff74                      ; 005b09c0
        ;   XREF to: 005aff74 (CONDITIONAL_JUMP)  ; LAB_005aff74
    CMP EDI,0xe                         ; 005b09c6
    JNC 0x005b09e8                      ; 005b09c9
        ;   XREF to: 005b09e8 (CONDITIONAL_JUMP)  ; LAB_005b09e8
    CMP EDI,0x8                         ; 005b09cb
    JC 0x005af702                       ; 005b09ce
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    JBE 0x005afc80                      ; 005b09d4
        ;   XREF to: 005afc80 (CONDITIONAL_JUMP)  ; LAB_005afc80
    CMP EDI,0xd                         ; 005b09da
    JZ 0x005b0057                       ; 005b09dd
        ;   XREF to: 005b0057 (CONDITIONAL_JUMP)  ; LAB_005b0057
    JMP 0x005af702                      ; 005b09e3
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    JBE 0x005afc45                      ; 005b09e8
        ;   XREF to: 005afc45 (CONDITIONAL_JUMP)  ; LAB_005afc45
        ;   Label: LAB_005b09e8
    CMP EDI,0xf                         ; 005b09ee
    JBE 0x005b0229                      ; 005b09f1
        ;   XREF to: 005b0229 (CONDITIONAL_JUMP)  ; LAB_005b0229
    CMP EDI,0x13                        ; 005b09f7
    JZ 0x005af6ea                       ; 005b09fa
        ;   XREF to: 005af6ea (CONDITIONAL_JUMP)  ; LAB_005af6ea
    JMP 0x005af702                      ; 005b0a00
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    JBE 0x005b0229                      ; 005b0a05
        ;   XREF to: 005b0229 (CONDITIONAL_JUMP)  ; LAB_005b0229
        ;   Label: LAB_005b0a05
    CMP EDI,0x2                         ; 005b0a0b
    JBE 0x005afcc3                      ; 005b0a0e
        ;   XREF to: 005afcc3 (CONDITIONAL_JUMP)  ; LAB_005afcc3
    MOV ECX,dword ptr [EAX + 0x1d06aa4] ; 005b0a14
    CMP ECX,dword ptr [EBX + 0xc1e8]    ; 005b0a1a
    JZ 0x005b0ad4                       ; 005b0a20
        ;   XREF to: 005b0ad4 (CONDITIONAL_JUMP)  ; LAB_005b0ad4
    LEA EAX,[EBP + 0xfffffbf2]          ; 005b0a26
    PUSH EAX                            ; 005b0a2c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005b0a2d
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005b0a32
    PUSH 0x41700000                     ; 005b0a35
    PUSH 0x40e00000                     ; 005b0a3a
    CALL core_actor.cpp_FUN_0040cc00    ; 005b0a3f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005b0a44
    MOV dword ptr [EBP + 0xfffffc26],EBX ; 005b0a47
    MOV dword ptr [EBP + 0xfffffc2a],EBX ; 005b0a4d
    ADD ESP,0x8                         ; 005b0a53
    FLD float ptr [EBP + 0x76]          ; 005b0a56
    LEA EAX,[EBP + 0xfffffbf2]          ; 005b0a59
    FSTP float ptr [EBP + 0xfffffbf6]   ; 005b0a5f
    MOV EDX,dword ptr [EBX + 0xc270]    ; 005b0a65
    PUSH EAX                            ; 005b0a6b
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b0a6c
    SUB EAX,EDX                         ; 005b0a73
    MOV ESI,dword ptr [EBP + 0x66]      ; 005b0a75
    SHL EAX,0x4                         ; 005b0a78
    ADD EAX,ESI                         ; 005b0a7b
    PUSH 0x3ecccccd                     ; 005b0a7d
    PUSH EAX                            ; 005b0a82
    PUSH 0x2c8af28                      ; 005b0a83 | DAT_02c8af28
    LEA ESI,[EBP + 0xffffff22]          ; 005b0a88
    LEA EDI,[EBP + 0xfffffe9e]          ; 005b0a8e
    CALL core_xform.cpp_FUN_005b5080    ; 005b0a94
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 005b0a99
    LEA EAX,[EBP + 0xfffffe9e]          ; 005b0a9c
    LEA ESI,[EBP + 0xffffff22]          ; 005b0aa2
    PUSH EAX                            ; 005b0aa8
    MOVSD ES:EDI,ESI                    ; 005b0aa9
    MOVSD ES:EDI,ESI                    ; 005b0aaa
    MOVSD ES:EDI,ESI                    ; 005b0aab
    PUSH EBX                            ; 005b0aac
    LEA ESI,[EBP + -0x6]                ; 005b0aad
    CALL core_actor.cpp_FUN_00408b40    ; 005b0ab0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005b0ab5
    LEA EAX,[EBP + 0xffffff76]          ; 005b0ab8
    PUSH EAX                            ; 005b0abe
    LEA EDI,[EBP + 0xffffff76]          ; 005b0abf
    LEA ESI,[EBP + -0x6]                ; 005b0ac5
    PUSH EBX                            ; 005b0ac8
    MOVSD ES:EDI,ESI                    ; 005b0ac9
    MOVSD ES:EDI,ESI                    ; 005b0aca
    MOVSD ES:EDI,ESI                    ; 005b0acb
    CALL core_enemy.cpp_FUN_004a0770    ; 005b0acc
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005b0ad1
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 005b0ad4
        ;   Label: LAB_005b0ad4
    TEST EDI,EDI                        ; 005b0ada
    JZ 0x005af702                       ; 005b0adc
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH EDI                            ; 005b0ae2
    MOV EDX,dword ptr [EDI + 0x154]     ; 005b0ae3
    CALL dword ptr [EDX + 0x10c]        ; 005b0ae9
    ADD ESP,0x4                         ; 005b0aef
    TEST EAX,EAX                        ; 005b0af2
    JZ 0x005af702                       ; 005b0af4
        ;   XREF to: 005af702 (CONDITIONAL_JUMP)  ; LAB_005af702
    PUSH 0x1                            ; 005b0afa
    PUSH 0x7                            ; 005b0afc
    LEA EAX,[EBX + 0x158]               ; 005b0afe
    PUSH EAX                            ; 005b0b04
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b0b05
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b0b0a
    JMP 0x005af702                      ; 005b0b0d
        ;   XREF to: 005af702 (UNCONDITIONAL_JUMP)  ; LAB_005af702
    PUSH 0x5f9abc                       ; 005b0b12 | = "werewolf-eat.wav"
        ;   Label: LAB_005b0b12
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b0b17
    PUSH EBX                            ; 005b0b1d
    CALL dword ptr [EAX + 0x2c]         ; 005b0b1e
    ADD ESP,0x8                         ; 005b0b21
    MOV dword ptr [EBX + 0xc290],EAX    ; 005b0b24
    JMP 0x005af730                      ; 005b0b2a
        ;   XREF to: 005af730 (UNCONDITIONAL_JUMP)  ; LAB_005af730
    MOV EDI,dword ptr [EBX + 0xc290]    ; 005b0b2f
        ;   Label: LAB_005b0b2f
    PUSH EDI                            ; 005b0b35
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005b0b36
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005b0b3b
    JMP 0x005af730                      ; 005b0b3e
        ;   XREF to: 005af730 (UNCONDITIONAL_JUMP)  ; LAB_005af730
    CMP EDI,0xf                         ; 005b0b43
        ;   Label: LAB_005b0b43
    JZ 0x005af755                       ; 005b0b46
        ;   XREF to: 005af755 (CONDITIONAL_JUMP)  ; LAB_005af755
    FLD float ptr [EBP + 0x62]          ; 005b0b4c
    FMUL double ptr [0x005f9b0a]        ; 005b0b4f | DAT_005f9b0a
    JMP 0x005af75e                      ; 005b0b55
        ;   XREF to: 005af75e (UNCONDITIONAL_JUMP)  ; LAB_005af75e
    CMP dword ptr [EBX + 0xdc],0x0      ; 005b0b5a
        ;   Label: LAB_005b0b5a
    JNZ 0x005af7ba                      ; 005b0b61
        ;   XREF to: 005af7ba (CONDITIONAL_JUMP)  ; LAB_005af7ba
    JMP 0x005af8fe                      ; 005b0b67
        ;   XREF to: 005af8fe (UNCONDITIONAL_JUMP)  ; LAB_005af8fe

