; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_process_FUN_0053c500(CShadow *this_ptr,float param_2)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined1* switchdataD_0053c4a0 = 0053d10d
;   TerminatedCString s_s_confused_while_walking_005e6594
;   TerminatedCString s_core_shadow_cpp_005e65be
;   TerminatedCString s_Alpha_werewolf_requires_005e65d1
;   TerminatedCString s_Phase_d_Timer_f_005e65f5
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005e660b
;   undefined4 DAT_005e662c
;   undefined4 DAT_005e662e
;   undefined4 DAT_005e6635
;   undefined4 DAT_005e663d
;   undefined4 DAT_005e6645
;   undefined4 DAT_005e664d
;   undefined4 DAT_005e6655
;   undefined4 DAT_005e6659
;   undefined4 DAT_005e665d
;   ... and 28 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   ... and 28 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c500
        ;   Label: core_shadow.cpp_CShadow_process_FUN_0053c500
    PUSH ESI                            ; 0053c501
    PUSH EDI                            ; 0053c502
    PUSH EBP                            ; 0053c503
    MOV EBP,ESP                         ; 0053c504
    SUB ESP,0x320                       ; 0053c506
    SUB EBP,0x7a                        ; 0053c50c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053c50f
    ADD EBX,0x2b4                       ; 0053c515
    PUSH EBX                            ; 0053c51b
    CALL core_motion.cpp_FUN_005035c0   ; 0053c51c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0053c521
    FLD float ptr [EBX + 0x8]           ; 0053c524
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053c527
    PUSH EBX                            ; 0053c52a
    FSTP float ptr [EBP + 0x5e]         ; 0053c52b
    MOV dword ptr [EBP + 0x6e],EAX      ; 0053c52e
    CALL core_motion.cpp_FUN_005035c0   ; 0053c531
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0053c536
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053c539
    PUSH dword ptr [EBP + 0x92]         ; 0053c53f
    FILD dword ptr [EAX + 0x64]         ; 0053c545
    PUSH EDX                            ; 0053c548
    FSTP float ptr [EBP + 0x6a]         ; 0053c549
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0 ; 0053c54c
        ;   XREF to: 0042a7a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0053c551
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0053c554
    PUSH dword ptr [EBP + 0x92]         ; 0053c55a
    PUSH ECX                            ; 0053c560
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0053c561
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0053c566
    TEST EAX,EAX                        ; 0053c569
    JZ 0x0053c5ec                       ; 0053c56b
        ;   XREF to: 0053c5ec (CONDITIONAL_JUMP)  ; LAB_0053c5ec
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c571
    CMP dword ptr [EAX + 0x10af8],0x2   ; 0053c577
    JZ 0x0053c609                       ; 0053c57e
        ;   XREF to: 0053c609 (CONDITIONAL_JUMP)  ; LAB_0053c609
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c584
        ;   Label: LAB_0053c584
    FLD float ptr [EBP + 0x92]          ; 0053c58a
    FMUL float ptr [EAX + 0x10a60]      ; 0053c590
    MOV dword ptr [EAX + 0x2510],0x0    ; 0053c596
    LEA ESI,[EAX + 0x2b4]               ; 0053c5a0
    MOV EDX,dword ptr [EAX + 0x2510]    ; 0053c5a6
    MOV dword ptr [EAX + 0x250c],EDX    ; 0053c5ac
    MOV EDX,dword ptr [EAX + 0x250c]    ; 0053c5b2
    MOV dword ptr [EAX + 0x2508],EDX    ; 0053c5b8
    FSTP float ptr [EBP + 0x66]         ; 0053c5be
    FLD float ptr [EBP + 0x66]          ; 0053c5c1
        ;   Label: LAB_0053c5c1
    FLDZ                                ; 0053c5c4
    FCOMPP                              ; 0053c5c6
    FNSTSW AX                           ; 0053c5c8
    SAHF                                ; 0053c5ca
    JNC 0x0053c639                      ; 0053c5cb
        ;   XREF to: 0053c639 (CONDITIONAL_JUMP)  ; LAB_0053c639
    LEA EAX,[EBP + 0x66]                ; 0053c5cd
    PUSH EAX                            ; 0053c5d0
    PUSH ESI                            ; 0053c5d1
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0053c5d2
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0053c5d7
    PUSH EAX                            ; 0053c5da
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c5db
    PUSH EAX                            ; 0053c5e1
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0053c5e2
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0053c5e7
    JMP 0x0053c5c1                      ; 0053c5ea
        ;   XREF to: 0053c5c1 (UNCONDITIONAL_JUMP)  ; LAB_0053c5c1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c5ec
        ;   Label: LAB_0053c5ec
    MOV ESI,dword ptr [EAX + 0x10b28]   ; 0053c5f2
    PUSH ESI                            ; 0053c5f8
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0053c5f9
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0053c5fe
    LEA ESP,[EBP + 0x7a]                ; 0053c601
        ;   Label: LAB_0053c601
    POP EBP                             ; 0053c604
    POP EDI                             ; 0053c605
    POP ESI                             ; 0053c606
    POP EBX                             ; 0053c607
    RET                                 ; 0053c608
    FLD float ptr [EAX + 0x10b44]       ; 0053c609
        ;   Label: LAB_0053c609
    FLDZ                                ; 0053c60f
    FCOMPP                              ; 0053c611
    FNSTSW AX                           ; 0053c613
    SAHF                                ; 0053c615
    JA 0x0053c584                       ; 0053c616
        ;   XREF to: 0053c584 (CONDITIONAL_JUMP)  ; LAB_0053c584
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c61c
    FLD float ptr [EAX + 0x10b44]       ; 0053c622
    FSUB float ptr [EBP + 0x92]         ; 0053c628
    FSTP float ptr [EAX + 0x10b44]      ; 0053c62e
    JMP 0x0053c584                      ; 0053c634
        ;   XREF to: 0053c584 (UNCONDITIONAL_JUMP)  ; LAB_0053c584
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c639
        ;   Label: LAB_0053c639
    FLD float ptr [EBP + 0x92]          ; 0053c63f
    FMUL float ptr [EAX + 0x10a60]      ; 0053c645
    SUB ESP,0x4                         ; 0053c64b
    MOV EDX,dword ptr [EAX + 0x2510]    ; 0053c64e
    MOV dword ptr [EAX + 0x2594],EDX    ; 0053c654
    FSTP float ptr [ESP]                ; 0053c65a
    PUSH EAX                            ; 0053c65d
    MOV EDI,EAX                         ; 0053c65e
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0053c660
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    MOV EAX,EDI                         ; 0053c665
    MOV EDX,dword ptr [EAX + 0x10af8]   ; 0053c667
    ADD ESP,0x8                         ; 0053c66d
    CMP EDX,0x2                         ; 0053c670
    JNZ 0x0053c68b                      ; 0053c673
        ;   XREF to: 0053c68b (CONDITIONAL_JUMP)  ; LAB_0053c68b
    FLD float ptr [EAX + 0x2598]        ; 0053c675
    FLD ST0                             ; 0053c67b
    FMUL double ptr [0x005e6635]        ; 0053c67d | DAT_005e6635
    FSTP ST1                            ; 0053c683
    FSTP float ptr [EAX + 0x2598]       ; 0053c685
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0053c68b
        ;   Label: LAB_0053c68b
    PUSH dword ptr [EBP + 0x92]         ; 0053c691
    PUSH ECX                            ; 0053c697
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 0053c698
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0053c69d
    TEST EAX,EAX                        ; 0053c6a0
    JZ 0x0053deba                       ; 0053c6a2
        ;   XREF to: 0053deba (CONDITIONAL_JUMP)  ; LAB_0053deba
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c6a8
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053c6ae
    MOV EAX,dword ptr [EAX + 0x27ac]    ; 0053c6b4
    ADD EBX,0x2b4                       ; 0053c6ba
    CMP EAX,0x2                         ; 0053c6c0
    JNC 0x0053cbca                      ; 0053c6c3
        ;   XREF to: 0053cbca (CONDITIONAL_JUMP)  ; LAB_0053cbca
    CMP EAX,0x1                         ; 0053c6c9
    JNZ 0x0053cbd1                      ; 0053c6cc
        ;   XREF to: 0053cbd1 (CONDITIONAL_JUMP)  ; LAB_0053cbd1
    PUSH EAX                            ; 0053c6d2
    PUSH 0x5                            ; 0053c6d3
    PUSH EBX                            ; 0053c6d5
        ;   Label: LAB_0053c6d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053c6d6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053c6db
        ;   Label: LAB_0053c6db
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c6de
        ;   Label: LAB_0053c6de
    MOV dword ptr [EAX + 0x2510],0x0    ; 0053c6e4
    MOV EDX,dword ptr [EAX + 0x2510]    ; 0053c6ee
    MOV dword ptr [EAX + 0x250c],EDX    ; 0053c6f4
    MOV EDX,dword ptr [EAX + 0x250c]    ; 0053c6fa
    MOV dword ptr [EAX + 0x2508],EDX    ; 0053c700
    LEA EAX,[EAX]                       ; 0053c706
    LEA EDX,[EDX]                       ; 0053c70c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c710
        ;   Label: LAB_0053c710
    FLD float ptr [EAX + 0x10a74]       ; 0053c716
    FLDZ                                ; 0053c71c
    MOV dword ptr [EAX + 0x3434],0x40000000 ; 0053c71e
    FCOMPP                              ; 0053c728
    FNSTSW AX                           ; 0053c72a
    SAHF                                ; 0053c72c
    JNC 0x0053c747                      ; 0053c72d
        ;   XREF to: 0053c747 (CONDITIONAL_JUMP)  ; LAB_0053c747
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c72f
    FLD float ptr [EAX + 0x10a74]       ; 0053c735
    FSUB float ptr [EBP + 0x92]         ; 0053c73b
    FSTP float ptr [EAX + 0x10a74]      ; 0053c741
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c747
        ;   Label: LAB_0053c747
    ADD EAX,0x2b4                       ; 0053c74d
    PUSH EAX                            ; 0053c752
    CALL core_motion.cpp_FUN_005035c0   ; 0053c753
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053c758
    ADD ESP,0x4                         ; 0053c75b
    CMP EAX,0xf                         ; 0053c75e
    JZ 0x0053decf                       ; 0053c761
        ;   XREF to: 0053decf (CONDITIONAL_JUMP)  ; LAB_0053decf
    TEST EAX,EAX                        ; 0053c767
    JZ 0x0053decf                       ; 0053c769
        ;   XREF to: 0053decf (CONDITIONAL_JUMP)  ; LAB_0053decf
    CMP EAX,0x1                         ; 0053c76f
    JZ 0x0053decf                       ; 0053c772
        ;   XREF to: 0053decf (CONDITIONAL_JUMP)  ; LAB_0053decf
    CMP EAX,0x2                         ; 0053c778
    JZ 0x0053decf                       ; 0053c77b
        ;   XREF to: 0053decf (CONDITIONAL_JUMP)  ; LAB_0053decf
    CMP EAX,0x3                         ; 0053c781
    JZ 0x0053decf                       ; 0053c784
        ;   XREF to: 0053decf (CONDITIONAL_JUMP)  ; LAB_0053decf
    CMP EAX,0x4                         ; 0053c78a
    JZ 0x0053decf                       ; 0053c78d
        ;   XREF to: 0053decf (CONDITIONAL_JUMP)  ; LAB_0053decf
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c793
        ;   Label: LAB_0053c793
    MOV EDI,dword ptr [EAX + 0x10a78]   ; 0053c799
    TEST EDI,EDI                        ; 0053c79f
    JZ 0x0053c7d3                       ; 0053c7a1
        ;   XREF to: 0053c7d3 (CONDITIONAL_JUMP)  ; LAB_0053c7d3
    PUSH EDI                            ; 0053c7a3
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 0053c7a4
    CALL dword ptr [EDX + 0xfc]         ; 0053c7aa
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053c7b0
    ADD ESP,0x4                         ; 0053c7b6
    CMP EAX,EDX                         ; 0053c7b9
    JNZ 0x0053c7d3                      ; 0053c7bb
        ;   XREF to: 0053c7d3 (CONDITIONAL_JUMP)  ; LAB_0053c7d3
    MOV ECX,dword ptr [EDX + 0x10a78]   ; 0053c7bd
    PUSH ECX                            ; 0053c7c3
    MOV EBX,dword ptr [0x0061b5a8]      ; 0053c7c4 | g_CDemonSetPtr
    PUSH EBX                            ; 0053c7ca | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0053c7cb
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053c7d0
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053c7d3
        ;   Label: LAB_0053c7d3
    PUSH dword ptr [EBP + 0x92]         ; 0053c7d9
    PUSH ESI                            ; 0053c7df
    CALL core_charactr.cpp_FUN_00423a10 ; 0053c7e0
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI + 0x2588]        ; 0053c7e5
    FMUL float ptr [EBP + 0x92]         ; 0053c7eb
    FLD float ptr [ESI + 0x258c]        ; 0053c7f1
    FMUL float ptr [EBP + 0x92]         ; 0053c7f7
    FLD float ptr [ESI + 0x2590]        ; 0053c7fd
    FMUL float ptr [EBP + 0x92]         ; 0053c803
    LEA EDI,[EBP + 0xfffffec2]          ; 0053c809
    MOV EBX,ESI                         ; 0053c80f
    MOV EAX,ESI                         ; 0053c811
    LEA ESI,[EBP + 0xfffffe0e]          ; 0053c813
    FXCH ST2                            ; 0053c819
    FSTP float ptr [EBP + 0xfffffe0e]   ; 0053c81b
    FSTP float ptr [EBP + 0xfffffe12]   ; 0053c821
    FSTP float ptr [EBP + 0xfffffe16]   ; 0053c827
    MOVSD ES:EDI,ESI                    ; 0053c82d
    MOVSD ES:EDI,ESI                    ; 0053c82e
    MOVSD ES:EDI,ESI                    ; 0053c82f
    FLD float ptr [EBP + 0xfffffec2]    ; 0053c830
    FLD float ptr [EBP + 0xfffffec6]    ; 0053c836
    FLD float ptr [EBP + 0xfffffeca]    ; 0053c83c
    LEA EDI,[EBP + 0xffffff46]          ; 0053c842
    LEA ESI,[EBP + 0xfffffeaa]          ; 0053c848
    FXCH ST2                            ; 0053c84e
    FADD float ptr [EAX + 0x2508]       ; 0053c850
    FXCH                                ; 0053c856
    FADD float ptr [EAX + 0x250c]       ; 0053c858
    FXCH ST2                            ; 0053c85e
    FADD float ptr [EAX + 0x2510]       ; 0053c860
    FXCH                                ; 0053c866
    FSTP float ptr [EBP + 0xfffffeaa]   ; 0053c868
    FXCH                                ; 0053c86e
    FSTP float ptr [EBP + 0xfffffeae]   ; 0053c870
    FSTP float ptr [EBP + 0xfffffeb2]   ; 0053c876
    MOVSD ES:EDI,ESI                    ; 0053c87c
    MOVSD ES:EDI,ESI                    ; 0053c87d
    MOVSD ES:EDI,ESI                    ; 0053c87e
    FLD float ptr [EBP + 0xffffff46]    ; 0053c87f
    FLD float ptr [EBP + 0xffffff4a]    ; 0053c885
    FLD float ptr [EBP + 0xffffff4e]    ; 0053c88b
    LEA EDI,[EBP + 0x2a]                ; 0053c891
    LEA ESI,[EBP + -0x5a]               ; 0053c894
    FXCH ST2                            ; 0053c897
    FADD float ptr [EAX + 0x257c]       ; 0053c899
    FXCH                                ; 0053c89f
    FADD float ptr [EAX + 0x2580]       ; 0053c8a1
    FXCH ST2                            ; 0053c8a7
    FADD float ptr [EAX + 0x2584]       ; 0053c8a9
    FXCH                                ; 0053c8af
    FSTP float ptr [EBP + -0x5a]        ; 0053c8b1
    FXCH                                ; 0053c8b4
    FSTP float ptr [EBP + -0x56]        ; 0053c8b6
    FSTP float ptr [EBP + -0x52]        ; 0053c8b9
    MOVSD ES:EDI,ESI                    ; 0053c8bc
    MOVSD ES:EDI,ESI                    ; 0053c8bd
    MOVSD ES:EDI,ESI                    ; 0053c8be
    MOV dword ptr [EAX + 0x2510],0x0    ; 0053c8bf
    MOV dword ptr [EAX + 0x2584],0x0    ; 0053c8c9
    ADD ESP,0x8                         ; 0053c8d3
    MOV EDX,dword ptr [EAX + 0x2510]    ; 0053c8d6
    MOV dword ptr [EAX + 0x250c],EDX    ; 0053c8dc
    MOV EDX,dword ptr [EAX + 0x250c]    ; 0053c8e2
    MOV dword ptr [EAX + 0x2508],EDX    ; 0053c8e8
    MOV EDX,dword ptr [EBX + 0x2584]    ; 0053c8ee
    MOV dword ptr [EAX + 0x2580],EDX    ; 0053c8f4
    MOV EDX,dword ptr [EBX + 0x2580]    ; 0053c8fa
    MOV dword ptr [EAX + 0x257c],EDX    ; 0053c900
    LEA EAX,[EBP + 0x2a]                ; 0053c906
    PUSH EAX                            ; 0053c909
    MOV EDI,EBX                         ; 0053c90a
    PUSH EDI                            ; 0053c90c
    CALL core_charactr.cpp_FUN_00423a60 ; 0053c90d
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0053c912
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c915
        ;   Label: LAB_0053c915
    PUSH EAX                            ; 0053c91b
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 0053c91c
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c921
    ADD ESP,0x4                         ; 0053c927
    ADD EAX,0x2b4                       ; 0053c92a
    PUSH EAX                            ; 0053c92f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0053c930
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053c935
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053c938
    PUSH dword ptr [EBP + 0x92]         ; 0053c93e
    PUSH EDX                            ; 0053c944
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0053c945
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0053c94a
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0053c94d
    PUSH ECX                            ; 0053c953
    CALL core_shadow.cpp_FUN_0053ece0   ; 0053c954
        ;   XREF to: 0053ece0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053ece0()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c959
    ADD ESP,0x4                         ; 0053c95f
    FLD float ptr [EAX + 0x10b68]       ; 0053c962
    FLDZ                                ; 0053c968
    FCOMPP                              ; 0053c96a
    FNSTSW AX                           ; 0053c96c
    SAHF                                ; 0053c96e
    JA 0x0053c601                       ; 0053c96f
        ;   XREF to: 0053c601 (CONDITIONAL_JUMP)  ; LAB_0053c601
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c975
    FLD float ptr [EAX + 0x10b68]       ; 0053c97b
    FSUB float ptr [EBP + 0x92]         ; 0053c981
    FST float ptr [EAX + 0x10b68]       ; 0053c987
    FLDZ                                ; 0053c98d
    FCOMPP                              ; 0053c98f
    FNSTSW AX                           ; 0053c991
    SAHF                                ; 0053c993
    JC 0x0053c601                       ; 0053c994
        ;   XREF to: 0053c601 (CONDITIONAL_JUMP)  ; LAB_0053c601
    PUSH 0x40000000                     ; 0053c99a
    PUSH 0x3f800000                     ; 0053c99f
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053c9a4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053c9aa
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053c9af
    ADD ESP,0x8                         ; 0053c9b2
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053c9b5
    FLD float ptr [EBP + 0x76]          ; 0053c9bb
    PUSH EBX                            ; 0053c9be
    FSTP float ptr [EAX + 0x10b68]      ; 0053c9bf
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0053c9c5
    LEA ESI,[EBP + 0xfffffd96]          ; 0053c9cb
    LEA EDI,[EBP + 0xfffffdae]          ; 0053c9d1
    CALL dword ptr [EAX + 0x24]         ; 0053c9d7
    MOV ECX,0x6                         ; 0053c9da
    LEA ESI,[EBP + 0xfffffd96]          ; 0053c9df
    MOVSD.REP ES:EDI,ESI                ; 0053c9e5
    LEA EAX,[EBP + 0xfffffdae]          ; 0053c9e7
    FLD float ptr [EBP + 0xfffffdae]    ; 0053c9ed
    FLD float ptr [EBP + 0xfffffdb2]    ; 0053c9f3
    FLD float ptr [EBP + 0xfffffdb6]    ; 0053c9f9
    LEA EDI,[EBP + 0x6]                 ; 0053c9ff
    LEA ESI,[EBP + 0x1e]                ; 0053ca02
    FXCH ST2                            ; 0053ca05
    FADD float ptr [EAX + 0xc]          ; 0053ca07
    FXCH                                ; 0053ca0a
    FADD float ptr [EAX + 0x10]         ; 0053ca0c
    FXCH ST2                            ; 0053ca0f
    FADD float ptr [EAX + 0x14]         ; 0053ca11
    FXCH                                ; 0053ca14
    FSTP float ptr [EBP + 0x1e]         ; 0053ca16
    FXCH                                ; 0053ca19
    FSTP float ptr [EBP + 0x22]         ; 0053ca1b
    FSTP float ptr [EBP + 0x26]         ; 0053ca1e
    MOVSD ES:EDI,ESI                    ; 0053ca21
    MOVSD ES:EDI,ESI                    ; 0053ca22
    MOVSD ES:EDI,ESI                    ; 0053ca23
    FLD float ptr [0x005e6655]          ; 0053ca24 | DAT_005e6655
    FLD float ptr [EBP + 0x6]           ; 0053ca2a
    FMUL ST1                            ; 0053ca2d
    FLD float ptr [EBP + 0xa]           ; 0053ca2f
    FMUL ST2                            ; 0053ca32
    ADD ESP,0x4                         ; 0053ca34
    LEA EAX,[EBP + 0x36]                ; 0053ca37
    FLD float ptr [EBP + 0xe]           ; 0053ca3a
    FMULP ST3                           ; 0053ca3d
    PUSH EAX                            ; 0053ca3f
    LEA EDI,[EBP + 0x36]                ; 0053ca40
    LEA ESI,[EBP + 0xfffffdf6]          ; 0053ca43
    FXCH                                ; 0053ca49
    FSTP float ptr [EBP + 0xfffffdf6]   ; 0053ca4b
    FSTP float ptr [EBP + 0xfffffdfa]   ; 0053ca51
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0053ca57
    MOVSD ES:EDI,ESI                    ; 0053ca5d
    MOVSD ES:EDI,ESI                    ; 0053ca5e
    MOVSD ES:EDI,ESI                    ; 0053ca5f
    PUSH EBX                            ; 0053ca60
    LEA ESI,[EBP + -0x1e]               ; 0053ca61
    LEA EDI,[EBP + -0x72]               ; 0053ca64
    CALL core_actor.cpp_FUN_00408d70    ; 0053ca67
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + -0x1e]               ; 0053ca6c
    LEA EAX,[EBP + -0x72]               ; 0053ca6f
    LEA EDX,[EBP + 0xffffff3a]          ; 0053ca72
    ADD ESP,0x8                         ; 0053ca78
    MOVSD ES:EDI,ESI                    ; 0053ca7b
    MOVSD ES:EDI,ESI                    ; 0053ca7c
    MOVSD ES:EDI,ESI                    ; 0053ca7d
    CMP EDX,EAX                         ; 0053ca7e
    JZ 0x0053ca9d                       ; 0053ca80
        ;   XREF to: 0053ca9d (CONDITIONAL_JUMP)  ; LAB_0053ca9d
    MOV EAX,dword ptr [EBP + -0x72]     ; 0053ca82
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 0053ca85
    MOV EAX,dword ptr [EBP + -0x6e]     ; 0053ca8b
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 0053ca8e
    MOV EAX,dword ptr [EBP + -0x6a]     ; 0053ca94
    MOV dword ptr [EBP + 0xffffff42],EAX ; 0053ca97
    LEA EBX,[EBP + 0xfffffee6]          ; 0053ca9d
        ;   Label: LAB_0053ca9d
    LEA EAX,[EBP + 0xffffff3a]          ; 0053caa3
    FLD float ptr [EAX]                 ; 0053caa9
    FMUL float ptr [0x005fb3e0]         ; 0053caab | DAT_005fb3e0
    FISTP dword ptr [EBX]               ; 0053cab1
    FLD float ptr [EAX + 0x4]           ; 0053cab3
    FMUL float ptr [0x005fb3e0]         ; 0053cab6 | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x4]         ; 0053cabc
    FLD float ptr [EAX + 0x8]           ; 0053cabf
    FMUL float ptr [0x005fb3e0]         ; 0053cac2 | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x8]         ; 0053cac8
    PUSH 0x0                            ; 0053cacb
    LEA EAX,[EBP + 0xfffffee6]          ; 0053cacd
    PUSH EAX                            ; 0053cad3
    MOV EDI,dword ptr [0x0061b5a8]      ; 0053cad4 | g_CDemonSetPtr
    PUSH EDI                            ; 0053cada | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0 ; 0053cadb
        ;   XREF to: 005311e0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    FLD float ptr [0x005fb40c]          ; 0053cae0 | DAT_005fb40c
    FMUL double ptr [0x005e669d]        ; 0053cae6 | DAT_005e669d
    MOV dword ptr [EBP + 0x76],EAX      ; 0053caec
    ADD ESP,0xc                         ; 0053caef
    FILD dword ptr [EBP + 0x76]         ; 0053caf2
    FCOMPP                              ; 0053caf5
    FNSTSW AX                           ; 0053caf7
    SAHF                                ; 0053caf9
    JC 0x0053c601                       ; 0053cafa
        ;   XREF to: 0053c601 (CONDITIONAL_JUMP)  ; LAB_0053c601
    PUSH 0x1                            ; 0053cb00
    PUSH 0x4                            ; 0053cb02
    PUSH 0x0                            ; 0053cb04
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053cb06
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053cb0b
    PUSH EAX                            ; 0053cb0e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cb0f
    ADD EAX,0x2b4                       ; 0053cb15
    PUSH EAX                            ; 0053cb1a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053cb1b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053cb20
    PUSH 0x5e662e                       ; 0053cb23 | DAT_005e662e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cb28
    PUSH EAX                            ; 0053cb2e
    CALL core_charactr.cpp_FUN_0042b300 ; 0053cb2f
        ;   XREF to: 0042b300 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b300()
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053cb34
    ADD ESP,0x8                         ; 0053cb3a
    MOV dword ptr [EDX + 0x10b5c],EAX   ; 0053cb3d
    TEST EAX,EAX                        ; 0053cb43
    JNZ 0x0053dee7                      ; 0053cb45
        ;   XREF to: 0053dee7 (CONDITIONAL_JUMP)  ; LAB_0053dee7
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cb4b
        ;   Label: LAB_0053cb4b
    FLD float ptr [EAX + 0x10b68]       ; 0053cb51
    FADD float ptr [0x005e66a5]         ; 0053cb57 | DAT_005e66a5
    FSTP float ptr [EAX + 0x10b68]      ; 0053cb5d
    LEA ESP,[EBP + 0x7a]                ; 0053cb63
    POP EBP                             ; 0053cb66
    POP EDI                             ; 0053cb67
    POP ESI                             ; 0053cb68
    POP EBX                             ; 0053cb69
    RET                                 ; 0053cb6a
    PUSH 0x1                            ; 0053cb6b
        ;   Label: LAB_0053cb6b
    PUSH 0x0                            ; 0053cb6d
    PUSH EBX                            ; 0053cb6f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053cb70
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053cb75
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053cb78
    PUSH ESI                            ; 0053cb7e
    PUSH 0x5e6594                       ; 0053cb7f | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00609ed0]      ; 0053cb84 | g_CConsolePtr
    PUSH EDI                            ; 0053cb8a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0053cb8b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x0053c6db                      ; 0053cb90
        ;   XREF to: 0053c6db (UNCONDITIONAL_JUMP)  ; LAB_0053c6db
    PUSH EBX                            ; 0053cb95
        ;   Label: LAB_0053cb95
    CALL core_motion.cpp_FUN_00503e60   ; 0053cb96
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053cb9b
    ADD ESP,0x4                         ; 0053cb9e
    FLD float ptr [EBP + 0x76]          ; 0053cba1
    FCOMP double ptr [0x005e6675]       ; 0053cba4 | DAT_005e6675
    FNSTSW AX                           ; 0053cbaa
    SAHF                                ; 0053cbac
    JBE 0x0053c6de                      ; 0053cbad
        ;   XREF to: 0053c6de (CONDITIONAL_JUMP)  ; LAB_0053c6de
    PUSH 0x1                            ; 0053cbb3
    PUSH 0x1                            ; 0053cbb5
    PUSH 0x0                            ; 0053cbb7
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053cbb9
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053cbbe
    ADD EAX,0xb                         ; 0053cbc1
    PUSH EAX                            ; 0053cbc4
    JMP 0x0053c6d5                      ; 0053cbc5
        ;   XREF to: 0053c6d5 (UNCONDITIONAL_JUMP)  ; LAB_0053c6d5
    JBE 0x0053cb95                      ; 0053cbca
        ;   XREF to: 0053cb95 (CONDITIONAL_JUMP)  ; LAB_0053cb95
        ;   Label: LAB_0053cbca
    CMP EAX,0x3                         ; 0053cbcc
    JZ 0x0053cb6b                       ; 0053cbcf
        ;   XREF to: 0053cb6b (CONDITIONAL_JUMP)  ; LAB_0053cb6b
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053cbd1
        ;   Label: LAB_0053cbd1
    ADD EBX,0x2b4                       ; 0053cbd7
    PUSH EBX                            ; 0053cbdd
    CALL core_motion.cpp_FUN_00503e60   ; 0053cbde
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053cbe3
    ADD ESP,0x4                         ; 0053cbe6
    FLD float ptr [EBP + 0x76]          ; 0053cbe9
    FCOMP double ptr [0x005e6675]       ; 0053cbec | DAT_005e6675
    FNSTSW AX                           ; 0053cbf2
    SAHF                                ; 0053cbf4
    JBE 0x0053c6de                      ; 0053cbf5
        ;   XREF to: 0053c6de (CONDITIONAL_JUMP)  ; LAB_0053c6de
    PUSH 0x1                            ; 0053cbfb
    PUSH 0x4                            ; 0053cbfd
    PUSH 0x0                            ; 0053cbff
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053cc01
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053cc06
    PUSH EAX                            ; 0053cc09
    JMP 0x0053c6d5                      ; 0053cc0a
        ;   XREF to: 0053c6d5 (UNCONDITIONAL_JUMP)  ; LAB_0053c6d5
    LEA EAX,[EBP + 0xfffffd5a]          ; 0053cc0f
        ;   Label: caseD_6
    PUSH EAX                            ; 0053cc15
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0053cc16
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0053cc1b
    PUSH 0x41700000                     ; 0053cc1e
    PUSH 0x40e00000                     ; 0053cc23
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053cc28
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053cc2d
    MOV dword ptr [EBP + 0x76],EAX      ; 0053cc33
    ADD ESP,0x8                         ; 0053cc36
    FLD float ptr [EBP + 0x76]          ; 0053cc39
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cc3c
    FSTP float ptr [EBP + 0xfffffd5e]   ; 0053cc42
    MOV dword ptr [EBP + 0xfffffd8e],EAX ; 0053cc48
    MOV dword ptr [EBP + 0xfffffd92],EAX ; 0053cc4e
    LEA EAX,[EBP + 0xfffffd5a]          ; 0053cc54
    MOV EDX,dword ptr [EDX + 0x10b04]   ; 0053cc5a
    PUSH EAX                            ; 0053cc60
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053cc61
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053cc68
    SUB EAX,EDX                         ; 0053cc6e
    ADD EBX,0x1134                      ; 0053cc70
    SHL EAX,0x4                         ; 0053cc76
    ADD EAX,EBX                         ; 0053cc79
    PUSH 0x3ecccccd                     ; 0053cc7b
    PUSH EAX                            ; 0053cc80
    PUSH 0x265370c                      ; 0053cc81 | DAT_0265370c
    LEA ESI,[EBP + 0xffffff2e]          ; 0053cc86
    LEA EDI,[EBP + 0xffffff5e]          ; 0053cc8c
    CALL core_xform.cpp_FUN_00591530    ; 0053cc92
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0xffffff2e]          ; 0053cc97
    LEA EAX,[EBP + 0xffffff5e]          ; 0053cc9d
    ADD ESP,0x8                         ; 0053cca3
    MOVSD ES:EDI,ESI                    ; 0053cca6
    MOVSD ES:EDI,ESI                    ; 0053cca7
    MOVSD ES:EDI,ESI                    ; 0053cca8
    PUSH EAX                            ; 0053cca9
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053ccaa
    PUSH ESI                            ; 0053ccb0
    LEA ESI,[EBP + -0x2a]               ; 0053ccb1
    LEA EDI,[EBP + 0xffffff6a]          ; 0053ccb4
    CALL core_actor.cpp_FUN_00408d70    ; 0053ccba
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + -0x2a]               ; 0053ccbf
    LEA EAX,[EBP + 0xffffff6a]          ; 0053ccc2
    ADD ESP,0x8                         ; 0053ccc8
    MOVSD ES:EDI,ESI                    ; 0053cccb
    MOVSD ES:EDI,ESI                    ; 0053cccc
    MOVSD ES:EDI,ESI                    ; 0053cccd
    PUSH EAX                            ; 0053ccce
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0053cccf
    PUSH EDI                            ; 0053ccd5
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0053ccd6
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0053ccdb
    PUSH 0x41700000                     ; 0053ccde
    PUSH 0x40e00000                     ; 0053cce3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053cce8
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053cced
    MOV dword ptr [EBP + 0xfffffd8e],EDI ; 0053ccf0
    MOV dword ptr [EBP + 0xfffffd92],EDI ; 0053ccf6
    ADD ESP,0x8                         ; 0053ccfc
    FLD float ptr [EBP + 0x76]          ; 0053ccff
    LEA EAX,[EBP + 0xfffffd5a]          ; 0053cd02
    FSTP float ptr [EBP + 0xfffffd5e]   ; 0053cd08
    MOV EDX,dword ptr [EDI + 0x10b00]   ; 0053cd0e
    PUSH EAX                            ; 0053cd14
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053cd15
    SUB EAX,EDX                         ; 0053cd1c
    SHL EAX,0x4                         ; 0053cd1e
    ADD EBX,EAX                         ; 0053cd21
    PUSH 0x3ecccccd                     ; 0053cd23
    PUSH EBX                            ; 0053cd28
    PUSH 0x265370c                      ; 0053cd29 | DAT_0265370c
    LEA ESI,[EBP + 0xfffffeda]          ; 0053cd2e
    LEA EDI,[EBP + 0xffffff76]          ; 0053cd34
    CALL core_xform.cpp_FUN_00591530    ; 0053cd3a
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0053cd3f
    LEA EAX,[EBP + 0xffffff76]          ; 0053cd42
    LEA ESI,[EBP + 0xfffffeda]          ; 0053cd48
    PUSH EAX                            ; 0053cd4e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cd4f
    MOVSD ES:EDI,ESI                    ; 0053cd55
    MOVSD ES:EDI,ESI                    ; 0053cd56
    MOVSD ES:EDI,ESI                    ; 0053cd57
    PUSH EAX                            ; 0053cd58
    LEA ESI,[EBP + 0xfffffe1a]          ; 0053cd59
    CALL core_actor.cpp_FUN_00408d70    ; 0053cd5f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0053cd64
    LEA EAX,[EBP + -0x7e]               ; 0053cd67
    LEA EDI,[EBP + -0x7e]               ; 0053cd6a
    PUSH EAX                            ; 0053cd6d
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053cd6e
    LEA ESI,[EBP + 0xfffffe1a]          ; 0053cd74
    PUSH EDX                            ; 0053cd7a
    MOVSD ES:EDI,ESI                    ; 0053cd7b
    MOVSD ES:EDI,ESI                    ; 0053cd7c
    MOVSD ES:EDI,ESI                    ; 0053cd7d
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0053cd7e
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cd83
    MOV ECX,dword ptr [EAX + 0x10a78]   ; 0053cd89
    ADD ESP,0x10                        ; 0053cd8f
    TEST ECX,ECX                        ; 0053cd92
    JZ 0x0053cdc2                       ; 0053cd94
        ;   XREF to: 0053cdc2 (CONDITIONAL_JUMP)  ; LAB_0053cdc2
    PUSH ECX                            ; 0053cd96
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 0053cd97
    CALL dword ptr [EDX + 0x114]        ; 0053cd9d
    ADD ESP,0x4                         ; 0053cda3
    TEST EAX,EAX                        ; 0053cda6
    JZ 0x0053cdc2                       ; 0053cda8
        ;   XREF to: 0053cdc2 (CONDITIONAL_JUMP)  ; LAB_0053cdc2
    PUSH 0x1                            ; 0053cdaa
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cdac
    PUSH 0xa                            ; 0053cdb2
    ADD EAX,0x2b4                       ; 0053cdb4
    PUSH EAX                            ; 0053cdb9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053cdba
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053cdbf
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053cdc2
        ;   Label: LAB_0053cdc2
    PUSH EBX                            ; 0053cdc8
    CALL core_shadow.cpp_FUN_0053dfc0   ; 0053cdc9
        ;   XREF to: 0053dfc0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053dfc0()
    ADD ESP,0x4                         ; 0053cdce
    JMP 0x0053c710                      ; 0053cdd1
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    FLD float ptr [EBP + 0x5e]          ; 0053cdd6
        ;   Label: caseD_14
    FMUL double ptr [0x005e663d]        ; 0053cdd9 | DAT_005e663d
    FDIV float ptr [EBP + 0x6a]         ; 0053cddf
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cde2
    MOV dword ptr [EAX + 0x10b70],0x0   ; 0053cde8
    CALL crt_math.c_round_FUN_005b7ff0  ; 0053cdf2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EAX + 0x10b78]     ; 0053cdf7
    JMP 0x0053c710                      ; 0053cdfd
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    FLD float ptr [EBP + 0x6a]          ; 0053ce02
        ;   Label: caseD_d
    FLD ST0                             ; 0053ce05
    FSUB float ptr [EBP + 0x5e]         ; 0053ce07
    FMUL double ptr [0x005e663d]        ; 0053ce0a | DAT_005e663d
    FDIVRP                              ; 0053ce10
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053ce12
    MOV EDX,dword ptr [0x00616494]      ; 0053ce18 | g_CGamePtr
    MOV dword ptr [EAX + 0x10b70],0x0   ; 0053ce1e
    CALL crt_math.c_round_FUN_005b7ff0  ; 0053ce28
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EAX + 0x10b78]     ; 0053ce2d
    FLD float ptr [EDX + 0x284]         ; 0053ce33
    FMUL float ptr [0x005e6645]         ; 0053ce39 | DAT_005e6645
    FADD float ptr [EAX + 0x10b3c]      ; 0053ce3f
    FST float ptr [EAX + 0x10b3c]       ; 0053ce45
    FLD ST0                             ; 0053ce4b
    FSIN                                ; 0053ce4d
    FXCH                                ; 0053ce4f
    FCOS                                ; 0053ce51
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053ce53
    LEA EDI,[EBP + 0xfffffdc6]          ; 0053ce59
    PUSH ESI                            ; 0053ce5f
    LEA ESI,[EBP + 0xfffffdde]          ; 0053ce60
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053ce66
    FXCH                                ; 0053ce6c
    FSTP float ptr [EBP + 0x52]         ; 0053ce6e
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0053ce71
    FSTP float ptr [EBP + 0x4a]         ; 0053ce77
    CALL dword ptr [EAX + 0x24]         ; 0053ce7a
    MOV ECX,0x6                         ; 0053ce7d
    LEA ESI,[EBP + 0xfffffdde]          ; 0053ce82
    MOVSD.REP ES:EDI,ESI                ; 0053ce88
    FLD float ptr [EBP + 0xfffffdda]    ; 0053ce8a
    FLD float ptr [EBP + 0xfffffdd2]    ; 0053ce90
    FSUB float ptr [EBP + 0xfffffdc6]   ; 0053ce96
    FXCH                                ; 0053ce9c
    FSUB float ptr [EBP + 0xfffffdce]   ; 0053ce9e
    FXCH                                ; 0053cea4
    FMUL float ptr [EBP + 0x52]         ; 0053cea6
    FXCH                                ; 0053cea9
    FMUL float ptr [EBP + 0x4a]         ; 0053ceab
    FXCH                                ; 0053ceae
    FLD double ptr [0x005e664d]         ; 0053ceb0 | DAT_005e664d
    FXCH                                ; 0053ceb6
    FMUL ST1                            ; 0053ceb8
    FLD float ptr [EBP + 0xfffffdc6]    ; 0053ceba
    FLD float ptr [EBP + 0xfffffdca]    ; 0053cec0
    FLD float ptr [EBP + 0xfffffdce]    ; 0053cec6
    LEA EDI,[EBP + -0x66]               ; 0053cecc
    LEA ESI,[EBP + -0x6]                ; 0053cecf
    FXCH ST2                            ; 0053ced2
    FADD float ptr [EBP + 0xfffffdd2]   ; 0053ced4
    FXCH                                ; 0053ceda
    FADD float ptr [EBP + 0xfffffdd6]   ; 0053cedc
    FXCH ST2                            ; 0053cee2
    FADD float ptr [EBP + 0xfffffdda]   ; 0053cee4
    FXCH                                ; 0053ceea
    FSTP float ptr [EBP + -0x6]         ; 0053ceec
    FXCH                                ; 0053ceef
    FSTP float ptr [EBP + -0x2]         ; 0053cef1
    FSTP float ptr [EBP + 0x2]          ; 0053cef4
    MOVSD ES:EDI,ESI                    ; 0053cef7
    MOVSD ES:EDI,ESI                    ; 0053cef8
    MOVSD ES:EDI,ESI                    ; 0053cef9
    FXCH ST2                            ; 0053cefa
    FMULP                               ; 0053cefc
    FLD float ptr [0x005e6655]          ; 0053cefe | DAT_005e6655
    FLD float ptr [EBP + -0x66]         ; 0053cf04
    FMUL ST1                            ; 0053cf07
    FLD float ptr [EBP + -0x62]         ; 0053cf09
    FMUL ST2                            ; 0053cf0c
    FLD float ptr [EBP + -0x5e]         ; 0053cf0e
    FMULP ST3                           ; 0053cf11
    LEA EDX,[EBP + 0xfffffe86]          ; 0053cf13
    ADD ESP,0x4                         ; 0053cf19
    LEA EDI,[EBP + 0xfffffe6e]          ; 0053cf1c
    LEA ESI,[EBP + 0xfffffe9e]          ; 0053cf22
    FXCH ST4                            ; 0053cf28
    FSTP float ptr [EBP + 0xfffffe56]   ; 0053cf2a
    FXCH ST2                            ; 0053cf30
    FSTP float ptr [EBP + 0xfffffe5e]   ; 0053cf32
    FLD float ptr [EBP + 0xfffffe56]    ; 0053cf38
    FXCH ST2                            ; 0053cf3e
    FSTP float ptr [EBP + 0xfffffe9e]   ; 0053cf40
    FXCH ST2                            ; 0053cf46
    FSTP float ptr [EBP + 0xfffffea2]   ; 0053cf48
    FXCH                                ; 0053cf4e
    FSTP float ptr [EBP + 0xfffffea6]   ; 0053cf50
    MOVSD ES:EDI,ESI                    ; 0053cf56
    MOVSD ES:EDI,ESI                    ; 0053cf57
    MOVSD ES:EDI,ESI                    ; 0053cf58
    FLD float ptr [EBP + 0xfffffe5e]    ; 0053cf59
    MOV EAX,dword ptr [EBP + 0xfffffe72] ; 0053cf5f
    FLD float ptr [EBP + 0xfffffe72]    ; 0053cf65
    MOV dword ptr [EBP + 0xfffffe5a],EAX ; 0053cf6b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053cf71
    LEA EDI,[EBP + 0xfffffe86]          ; 0053cf77
    LEA ESI,[EBP + 0xffffff16]          ; 0053cf7d
    FXCH ST2                            ; 0053cf83
    FADD float ptr [EAX + 0x20]         ; 0053cf85
    FXCH ST2                            ; 0053cf88
    FADD float ptr [EAX + 0x24]         ; 0053cf8a
    FXCH                                ; 0053cf8d
    FADD float ptr [EAX + 0x28]         ; 0053cf8f
    FXCH ST2                            ; 0053cf92
    FSTP float ptr [EBP + 0xffffff16]   ; 0053cf94
    FSTP float ptr [EBP + 0xffffff1a]   ; 0053cf9a
    FSTP float ptr [EBP + 0xffffff1e]   ; 0053cfa0
    LEA EAX,[EBP + 0xfffffe56]          ; 0053cfa6
    MOVSD ES:EDI,ESI                    ; 0053cfac
    MOVSD ES:EDI,ESI                    ; 0053cfad
    MOVSD ES:EDI,ESI                    ; 0053cfae
    CMP EAX,EDX                         ; 0053cfaf
    JZ 0x0053cfd7                       ; 0053cfb1
        ;   XREF to: 0053cfd7 (CONDITIONAL_JUMP)  ; LAB_0053cfd7
    MOV EAX,dword ptr [EBP + 0xfffffe86] ; 0053cfb3
    MOV dword ptr [EBP + 0xfffffe56],EAX ; 0053cfb9
    MOV EAX,dword ptr [EBP + 0xfffffe8a] ; 0053cfbf
    MOV dword ptr [EBP + 0xfffffe5a],EAX ; 0053cfc5
    MOV EAX,dword ptr [EBP + 0xfffffe8e] ; 0053cfcb
    MOV dword ptr [EBP + 0xfffffe5e],EAX ; 0053cfd1
    LEA EAX,[EBP + 0xfffffe56]          ; 0053cfd7
        ;   Label: LAB_0053cfd7
    PUSH EAX                            ; 0053cfdd
    PUSH 0x20b1924                      ; 0053cfde
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 0053cfe3
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0053cfe8
    MOV EDI,0xea60                      ; 0053cfeb
    PUSH 0x40c00000                     ; 0053cff0
    MOV AH,0x3a                         ; 0053cff5
    PUSH 0x20b1924                      ; 0053cff7
    MOV dword ptr [0x020b1960],EDI      ; 0053cffc | DAT_020b1960
    MOV byte ptr [0x020b1940],AH        ; 0053d002 | DAT_020b1940
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 0053d008
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0053d00d
    PUSH 0x20b1924                      ; 0053d010
    MOV EDX,dword ptr [0x0061b5a8]      ; 0053d015 | g_CDemonSetPtr
    XOR EAX,EAX                         ; 0053d01b
    PUSH EDX                            ; 0053d01d | g_CDemonSetInstance
    MOV [0x020b1944],EAX                ; 0053d01e | DAT_020b1944
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0 ; 0053d023
        ;   XREF to: 005306b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet * this_ptr, CDemonGlobe * globe)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d028
    ADD ESP,0x8                         ; 0053d02e
    LEA ESI,[EAX + 0x2b4]               ; 0053d031
    PUSH ESI                            ; 0053d037
    MOV dword ptr [EAX + 0x10b7c],0x1   ; 0053d038
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0053d042
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053d047
    PUSH ESI                            ; 0053d04a
    MOV EBX,EAX                         ; 0053d04b
    MOV EDI,EAX                         ; 0053d04d
    CALL core_motion.cpp_FUN_00503e60   ; 0053d04f
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053d054
    FLD float ptr [EBP + 0x76]          ; 0053d057
    FMUL float ptr [0x005e6659]         ; 0053d05a | DAT_005e6659
    FLD double ptr [0x005e665d]         ; 0053d060 | DAT_005e665d
    FLD ST0                             ; 0053d066
    FXCH ST2                            ; 0053d068
    FLD ST2                             ; 0053d06a
    FXCH                                ; 0053d06c
    CALL crt_math.c_pow_FUN_005b9484    ; 0053d06e
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005b9484()
    FSTP ST2                            ; 0053d073
    FLD double ptr [0x005e6665]         ; 0053d075 | DAT_005e6665
    CALL crt_math.c_pow_FUN_005b9484    ; 0053d07b
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005b9484()
    FDIVP                               ; 0053d080
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d082
    FLD1                                ; 0053d088
    FADDP                               ; 0053d08a
    ADD ESP,0x4                         ; 0053d08c
    FSTP float ptr [EAX + 0x10b74]      ; 0053d08f
    MOV ECX,dword ptr [EBX + 0x1d1f8]   ; 0053d095
    XOR EAX,EAX                         ; 0053d09b
    TEST ECX,ECX                        ; 0053d09d
    JLE 0x0053c710                      ; 0053d09f
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053d0a5
        ;   Label: LAB_0053d0a5
    INC EAX                             ; 0053d0ab
    MOV ECX,dword ptr [EDX + 0x10b74]   ; 0053d0ac
    MOV dword ptr [ESI + 0x514],ECX     ; 0053d0b2
    MOV EDX,dword ptr [EDI + 0x1d1f8]   ; 0053d0b8
    ADD ESI,0x4                         ; 0053d0be
    CMP EAX,EDX                         ; 0053d0c1
    JL 0x0053d0a5                       ; 0053d0c3
        ;   XREF to: 0053d0a5 (CONDITIONAL_JUMP)  ; LAB_0053d0a5
    JMP 0x0053c710                      ; 0053d0c5
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d0ca
        ;   Label: caseD_f
    MOV dword ptr [EAX + 0x10b78],0x0   ; 0053d0d0
    MOV dword ptr [EAX + 0x10b74],0x3f800000 ; 0053d0da
    MOV dword ptr [EAX + 0x70],0x2      ; 0053d0e4
    LEA ESP,[EBP + 0x7a]                ; 0053d0eb
    POP EBP                             ; 0053d0ee
    POP EDI                             ; 0053d0ef
    POP ESI                             ; 0053d0f0
    POP EBX                             ; 0053d0f1
    RET                                 ; 0053d0f2
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d0f3
        ;   Label: caseD_a
    MOV dword ptr [EAX + 0x10b70],0x1   ; 0053d0f9
    MOV dword ptr [EAX + 0x10b78],0xfde8 ; 0053d103
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d10d
        ;   Label: caseD_0
    PUSH dword ptr [EBP + 0x92]         ; 0053d113
    PUSH EAX                            ; 0053d119
    MOV dword ptr [EAX + 0x10b70],0x1   ; 0053d11a
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053d124
    MOV dword ptr [EAX + 0x10b78],0xfde8 ; 0053d12a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0053d134
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESI,0x2b4                       ; 0053d139
    ADD ESP,0x8                         ; 0053d13f
    TEST EAX,EAX                        ; 0053d142
    JNZ 0x0053d266                      ; 0053d144
        ;   XREF to: 0053d266 (CONDITIONAL_JUMP)  ; LAB_0053d266
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d14a
    CMP dword ptr [EAX + 0x10b5c],0x0   ; 0053d150
    JZ 0x0053d192                       ; 0053d157
        ;   XREF to: 0053d192 (CONDITIONAL_JUMP)  ; LAB_0053d192
    FLD float ptr [EAX + 0x10b64]       ; 0053d159
    FSUB float ptr [EBP + 0x92]         ; 0053d15f
    FST float ptr [EAX + 0x10b64]       ; 0053d165
    FLDZ                                ; 0053d16b
    FCOMPP                              ; 0053d16d
    FNSTSW AX                           ; 0053d16f
    SAHF                                ; 0053d171
    JC 0x0053d2b1                       ; 0053d172
        ;   XREF to: 0053d2b1 (CONDITIONAL_JUMP)  ; LAB_0053d2b1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d178
    MOV dword ptr [EAX + 0x10b5c],0x0   ; 0053d17e
    MOV dword ptr [EAX + 0x10b64],0x0   ; 0053d188
    PUSH dword ptr [EBP + 0x92]         ; 0053d192
        ;   Label: LAB_0053d192
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0053d198
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d19e
    PUSH ECX                            ; 0053d1a4
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0053d1a5
    CALL dword ptr [EAX + 0x150]        ; 0053d1ab
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d1b1
    MOV EBX,dword ptr [EAX + 0x10a78]   ; 0053d1b7
    ADD ESP,0x8                         ; 0053d1bd
    TEST EBX,EBX                        ; 0053d1c0
    JZ 0x0053c710                       ; 0053d1c2
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    JZ 0x0053d31c                       ; 0053d1c8
        ;   XREF to: 0053d31c (CONDITIONAL_JUMP)  ; LAB_0053d31c
    CMP dword ptr [EAX + 0x10b2c],0x0   ; 0053d1ce
    JZ 0x0053d31c                       ; 0053d1d5
        ;   XREF to: 0053d31c (CONDITIONAL_JUMP)  ; LAB_0053d31c
    FLD float ptr [EBX + 0x20]          ; 0053d1db
    FLD float ptr [EBX + 0x24]          ; 0053d1de
    FLD float ptr [EBX + 0x28]          ; 0053d1e1
    LEA EDI,[EBP + 0xfffffe3e]          ; 0053d1e4
    LEA ESI,[EBP + 0xffffff52]          ; 0053d1ea
    FXCH ST2                            ; 0053d1f0
    FSUB float ptr [EAX + 0x20]         ; 0053d1f2
    FXCH                                ; 0053d1f5
    FSUB float ptr [EAX + 0x24]         ; 0053d1f7
    FXCH ST2                            ; 0053d1fa
    FSUB float ptr [EAX + 0x28]         ; 0053d1fc
    FXCH                                ; 0053d1ff
    FSTP float ptr [EBP + 0xffffff52]   ; 0053d201
    FXCH                                ; 0053d207
    FSTP float ptr [EBP + 0xffffff56]   ; 0053d209
    FSTP float ptr [EBP + 0xffffff5a]   ; 0053d20f
    MOVSD ES:EDI,ESI                    ; 0053d215
    MOVSD ES:EDI,ESI                    ; 0053d216
    MOVSD ES:EDI,ESI                    ; 0053d217
    FLD float ptr [EBP + 0xfffffe42]    ; 0053d218
    FMUL ST0                            ; 0053d21e
    FLD float ptr [EBP + 0xfffffe3e]    ; 0053d220
    FMUL ST0                            ; 0053d226
    FADDP                               ; 0053d228
    FLD float ptr [EBP + 0xfffffe46]    ; 0053d22a
    FMUL ST0                            ; 0053d230
    FADDP                               ; 0053d232
    FSQRT                               ; 0053d234
    FSTP float ptr [EBP + 0x5a]         ; 0053d236
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d239
    FLD float ptr [EBP + 0x5a]          ; 0053d23f
    FCOMP float ptr [EAX + 0x10a70]     ; 0053d242
    FNSTSW AX                           ; 0053d248
    SAHF                                ; 0053d24a
    JBE 0x0053d30a                      ; 0053d24b
        ;   XREF to: 0053d30a (CONDITIONAL_JUMP)  ; LAB_0053d30a
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d251
        ;   Label: LAB_0053d251
    MOV dword ptr [EAX + 0x10a78],0x0   ; 0053d257
    JMP 0x0053c710                      ; 0053d261
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH 0x1                            ; 0053d266
        ;   Label: LAB_0053d266
    PUSH 0x5                            ; 0053d268
    PUSH ESI                            ; 0053d26a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d26b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d270
    JMP 0x0053c710                      ; 0053d273
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH 0x1                            ; 0053d278
        ;   Label: LAB_0053d278
    PUSH 0x5                            ; 0053d27a
    PUSH ESI                            ; 0053d27c
        ;   Label: LAB_0053d27c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d27d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d282
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d285
    CMP dword ptr [EAX + 0x10b5c],0x0   ; 0053d28b
    JNZ 0x0053c710                      ; 0053d292
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    JMP 0x0053d192                      ; 0053d298
        ;   XREF to: 0053d192 (UNCONDITIONAL_JUMP)  ; LAB_0053d192
    PUSH 0x1                            ; 0053d29d
        ;   Label: LAB_0053d29d
    PUSH 0x1                            ; 0053d29f
    PUSH 0x0                            ; 0053d2a1
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053d2a3
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053d2a8
    ADD EAX,0xb                         ; 0053d2ab
    PUSH EAX                            ; 0053d2ae
    JMP 0x0053d27c                      ; 0053d2af
        ;   XREF to: 0053d27c (UNCONDITIONAL_JUMP)  ; LAB_0053d27c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d2b1
        ;   Label: LAB_0053d2b1
    ADD EAX,0x10b60                     ; 0053d2b7
    PUSH EAX                            ; 0053d2bc
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d2bd
    PUSH 0x3f800000                     ; 0053d2c3
    MOV EDI,dword ptr [EAX + 0x10b5c]   ; 0053d2c8
    PUSH 0x3f800000                     ; 0053d2ce
    PUSH EDI                            ; 0053d2d3
    PUSH EAX                            ; 0053d2d4
    CALL core_charactr.cpp_FUN_00428260 ; 0053d2d5
        ;   XREF to: 00428260 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428260()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d2da
    MOV EAX,dword ptr [EAX + 0x10b60]   ; 0053d2e0
    ADD ESP,0x14                        ; 0053d2e6
    CMP EAX,0x1                         ; 0053d2e9
    JC 0x0053d2f5                       ; 0053d2ec
        ;   XREF to: 0053d2f5 (CONDITIONAL_JUMP)  ; LAB_0053d2f5
    JBE 0x0053d278                      ; 0053d2ee
        ;   XREF to: 0053d278 (CONDITIONAL_JUMP)  ; LAB_0053d278
    CMP EAX,0x2                         ; 0053d2f0
    JZ 0x0053d29d                       ; 0053d2f3
        ;   XREF to: 0053d29d (CONDITIONAL_JUMP)  ; LAB_0053d29d
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d2f5
        ;   Label: LAB_0053d2f5
    MOV dword ptr [EAX + 0x10b5c],0x0   ; 0053d2fb
    JMP 0x0053d192                      ; 0053d305
        ;   XREF to: 0053d192 (UNCONDITIONAL_JUMP)  ; LAB_0053d192
    FLD float ptr [EBP + 0x5a]          ; 0053d30a
        ;   Label: LAB_0053d30a
    FCOMP double ptr [0x005e668d]       ; 0053d30d | DAT_005e668d
    FNSTSW AX                           ; 0053d313
    SAHF                                ; 0053d315
    JA 0x0053d251                       ; 0053d316
        ;   XREF to: 0053d251 (CONDITIONAL_JUMP)  ; LAB_0053d251
    MOV EAX,[0x026535b0]                ; 0053d31c | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0053d31c
    PUSH EAX                            ; 0053d321
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d322
    MOV EDX,dword ptr [EAX + 0x10b2c]   ; 0053d328
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053d32e
    PUSH EDX                            ; 0053d334
    ADD EBX,0x2b4                       ; 0053d335
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053d33b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053d340
    TEST EAX,EAX                        ; 0053d343
    JNZ 0x0053d393                      ; 0053d345
        ;   XREF to: 0053d393 (CONDITIONAL_JUMP)  ; LAB_0053d393
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d347
    CMP dword ptr [EAX + 0x10a78],0x0   ; 0053d34d
    JZ 0x0053d3a5                       ; 0053d354
        ;   XREF to: 0053d3a5 (CONDITIONAL_JUMP)  ; LAB_0053d3a5
    PUSH 0x3ecccccd                     ; 0053d356
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0053d35b
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0053d360
    TEST EAX,EAX                        ; 0053d363
    JZ 0x0053d376                       ; 0053d365
        ;   XREF to: 0053d376 (CONDITIONAL_JUMP)  ; LAB_0053d376
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053d367
    PUSH EBX                            ; 0053d36d
    CALL core_shadow.cpp_FUN_0053df80   ; 0053d36e
        ;   XREF to: 0053df80 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053df80()
    ADD ESP,0x4                         ; 0053d373
    PUSH 0x1                            ; 0053d376
        ;   Label: LAB_0053d376
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d378
    PUSH 0x5                            ; 0053d37e
    ADD EAX,0x2b4                       ; 0053d380
    PUSH EAX                            ; 0053d385
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d386
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d38b
    JMP 0x0053c710                      ; 0053d38e
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH 0x1                            ; 0053d393
        ;   Label: LAB_0053d393
    PUSH 0x0                            ; 0053d395
    PUSH EBX                            ; 0053d397
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d398
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d39d
    JMP 0x0053c710                      ; 0053d3a0
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH EBX                            ; 0053d3a5
        ;   Label: LAB_0053d3a5
    CALL core_motion.cpp_FUN_00503e60   ; 0053d3a6
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053d3ab
    ADD ESP,0x4                         ; 0053d3ae
    FLD float ptr [EBP + 0x76]          ; 0053d3b1
    FCOMP double ptr [0x005e6675]       ; 0053d3b4 | DAT_005e6675
    FNSTSW AX                           ; 0053d3ba
    SAHF                                ; 0053d3bc
    JBE 0x0053c710                      ; 0053d3bd
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH 0x1                            ; 0053d3c3
    PUSH 0x4                            ; 0053d3c5
    PUSH 0x0                            ; 0053d3c7
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053d3c9
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053d3ce
    PUSH EAX                            ; 0053d3d1
    PUSH EBX                            ; 0053d3d2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d3d3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d3d8
    JMP 0x0053c710                      ; 0053d3db
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d3e0
        ;   Label: caseD_5
    CMP dword ptr [EAX + 0x10b5c],0x0   ; 0053d3e6
    JZ 0x0053d428                       ; 0053d3ed
        ;   XREF to: 0053d428 (CONDITIONAL_JUMP)  ; LAB_0053d428
    FLD float ptr [EAX + 0x10b64]       ; 0053d3ef
    FSUB float ptr [EBP + 0x92]         ; 0053d3f5
    FST float ptr [EAX + 0x10b64]       ; 0053d3fb
    FLDZ                                ; 0053d401
    FCOMPP                              ; 0053d403
    FNSTSW AX                           ; 0053d405
    SAHF                                ; 0053d407
    JC 0x0053d8b4                       ; 0053d408
        ;   XREF to: 0053d8b4 (CONDITIONAL_JUMP)  ; LAB_0053d8b4
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d40e
    MOV dword ptr [EAX + 0x10b5c],0x0   ; 0053d414
    MOV dword ptr [EAX + 0x10b64],0x0   ; 0053d41e
    PUSH dword ptr [EBP + 0x92]         ; 0053d428
        ;   Label: LAB_0053d428
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053d42e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d434
    PUSH ESI                            ; 0053d43a
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0053d43b
    CALL dword ptr [EAX + 0x150]        ; 0053d441
    ADD ESP,0x8                         ; 0053d447
    MOV EDI,dword ptr [ESI + 0x10a78]   ; 0053d44a
    LEA EBX,[ESI + 0x2b4]               ; 0053d450
    TEST EDI,EDI                        ; 0053d456
    JZ 0x0053d947                       ; 0053d458
        ;   XREF to: 0053d947 (CONDITIONAL_JUMP)  ; LAB_0053d947
    CMP dword ptr [ESI + 0x10b2c],0x0   ; 0053d45e
    JZ 0x0053d4cf                       ; 0053d465
        ;   XREF to: 0053d4cf (CONDITIONAL_JUMP)  ; LAB_0053d4cf
    MOV ESI,EDI                         ; 0053d467
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d469
    FLD float ptr [ESI + 0x24]          ; 0053d46f
    FLD float ptr [ESI + 0x28]          ; 0053d472
    FLD float ptr [ESI + 0x20]          ; 0053d475
    LEA EDI,[EBP + 0xfffffe7a]          ; 0053d478
    LEA ESI,[EBP + -0x12]               ; 0053d47e
    FSUB float ptr [EAX + 0x20]         ; 0053d481
    FXCH ST2                            ; 0053d484
    FSUB float ptr [EAX + 0x24]         ; 0053d486
    FXCH                                ; 0053d489
    FSUB float ptr [EAX + 0x28]         ; 0053d48b
    FXCH ST2                            ; 0053d48e
    FSTP float ptr [EBP + -0x12]        ; 0053d490
    FSTP float ptr [EBP + -0xe]         ; 0053d493
    FSTP float ptr [EBP + -0xa]         ; 0053d496
    MOVSD ES:EDI,ESI                    ; 0053d499
    MOVSD ES:EDI,ESI                    ; 0053d49a
    MOVSD ES:EDI,ESI                    ; 0053d49b
    FLD float ptr [EBP + 0xfffffe7e]    ; 0053d49c
    FMUL ST0                            ; 0053d4a2
    FLD float ptr [EBP + 0xfffffe7a]    ; 0053d4a4
    FMUL ST0                            ; 0053d4aa
    FADDP                               ; 0053d4ac
    FLD float ptr [EBP + 0xfffffe82]    ; 0053d4ae
    FMUL ST0                            ; 0053d4b4
    FADDP                               ; 0053d4b6
    FSQRT                               ; 0053d4b8
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d4ba
    FCOMP float ptr [EAX + 0x10a70]     ; 0053d4c0
    FNSTSW AX                           ; 0053d4c6
    SAHF                                ; 0053d4c8
    JA 0x0053d981                       ; 0053d4c9
        ;   XREF to: 0053d981 (CONDITIONAL_JUMP)  ; LAB_0053d981
    MOV ECX,dword ptr [0x026535b0]      ; 0053d4cf | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0053d4cf
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d4d5
    PUSH ECX                            ; 0053d4db
    MOV EBX,dword ptr [EAX + 0x10b2c]   ; 0053d4dc
    PUSH EBX                            ; 0053d4e2
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053d4e3
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053d4e8
    TEST EAX,EAX                        ; 0053d4eb
    JNZ 0x0053d9cc                      ; 0053d4ed
        ;   XREF to: 0053d9cc (CONDITIONAL_JUMP)  ; LAB_0053d9cc
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d4f3
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053d4f9
    MOV ESI,dword ptr [EAX + 0x10af8]   ; 0053d4ff
    MOV EBX,dword ptr [EBX + 0x10a78]   ; 0053d505
    CMP ESI,0x2                         ; 0053d50b
    JNZ 0x0053d685                      ; 0053d50e
        ;   XREF to: 0053d685 (CONDITIONAL_JUMP)  ; LAB_0053d685
    CMP dword ptr [EAX + 0x10b34],0x0   ; 0053d514
    JNZ 0x0053d9f4                      ; 0053d51b
        ;   XREF to: 0053d9f4 (CONDITIONAL_JUMP)  ; LAB_0053d9f4
    MOV ECX,0x5e65be                    ; 0053d521 | = "..\\core\\shadow.cpp"
        ;   Label: LAB_0053d521
    MOV ESI,0x20a                       ; 0053d526
    PUSH 0x5e65d1                       ; 0053d52b | = "Alpha werewolf requires 2 waypoints"
    MOV dword ptr [0x01d046a0],ECX      ; 0053d530 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0053d536 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053d53c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0053d541
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d544
        ;   Label: LAB_0053d544
    SUB ESP,0x8                         ; 0053d54a
    FLD float ptr [EAX + 0x10b44]       ; 0053d54d
    FSTP double ptr [ESP]               ; 0053d553
    MOV EDI,dword ptr [EAX + 0x10b40]   ; 0053d556
    PUSH EDI                            ; 0053d55c
    PUSH 0x5e65f5                       ; 0053d55d | = "Phase: %d, Timer: %f\n"
    MOV EAX,[0x00609ed0]                ; 0053d562 | g_CConsolePtr
    PUSH EAX                            ; 0053d567 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0053d568
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d56d
    MOV EDX,dword ptr [EAX + 0x10b40]   ; 0053d573
    ADD ESP,0x14                        ; 0053d579
    CMP EDX,0x1                         ; 0053d57c
    JNZ 0x0053da06                      ; 0053d57f
        ;   XREF to: 0053da06 (CONDITIONAL_JUMP)  ; LAB_0053da06
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d585
        ;   Label: LAB_0053d585
    MOV EAX,dword ptr [EAX + 0x10b34]   ; 0053d58b
    ADD EAX,0x20                        ; 0053d591
    PUSH EAX                            ; 0053d594
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d595
    MOV EBX,dword ptr [EAX + 0x10a78]   ; 0053d59b
    PUSH EBX                            ; 0053d5a1
    LEA ESI,[EBP + 0xfffffe92]          ; 0053d5a2
    LEA EDI,[EBP + 0xfffffe62]          ; 0053d5a8
    CALL core_actor.cpp_FUN_00408de0    ; 0053d5ae
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xfffffe92]          ; 0053d5b3
    MOVSD ES:EDI,ESI                    ; 0053d5b9
    MOVSD ES:EDI,ESI                    ; 0053d5ba
    MOVSD ES:EDI,ESI                    ; 0053d5bb
    ADD ESP,0x8                         ; 0053d5bc
    FLD float ptr [EBP + 0xfffffe6a]    ; 0053d5bf
    FLDZ                                ; 0053d5c5
    FCOMPP                              ; 0053d5c7
    FNSTSW AX                           ; 0053d5c9
    SAHF                                ; 0053d5cb
    JBE 0x0053da14                      ; 0053d5cc
        ;   XREF to: 0053da14 (CONDITIONAL_JUMP)  ; LAB_0053da14
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053d5d2
    MOV EBX,dword ptr [EBX + 0x10b34]   ; 0053d5d8
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d5de
        ;   Label: LAB_0053d5de
    MOV EDI,dword ptr [EAX + 0x10b40]   ; 0053d5e4
    CMP EDI,0x1                         ; 0053d5ea
    JNZ 0x0053db49                      ; 0053d5ed
        ;   XREF to: 0053db49 (CONDITIONAL_JUMP)  ; LAB_0053db49
    LEA ESI,[EBX + 0x20]                ; 0053d5f3
        ;   Label: LAB_0053d5f3
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d5f6
    LEA EDI,[EBP + 0xffffff22]          ; 0053d5fc
    FLD float ptr [ESI + 0x4]           ; 0053d602
    FLD float ptr [ESI + 0x8]           ; 0053d605
    FLD float ptr [ESI]                 ; 0053d608
    LEA ESI,[EBP + 0x12]                ; 0053d60a
    FSUB float ptr [EAX + 0x20]         ; 0053d60d
    FXCH ST2                            ; 0053d610
    FSUB float ptr [EAX + 0x24]         ; 0053d612
    FXCH                                ; 0053d615
    FSUB float ptr [EAX + 0x28]         ; 0053d617
    FXCH ST2                            ; 0053d61a
    FSTP float ptr [EBP + 0x12]         ; 0053d61c
    FSTP float ptr [EBP + 0x16]         ; 0053d61f
    FSTP float ptr [EBP + 0x1a]         ; 0053d622
    MOVSD ES:EDI,ESI                    ; 0053d625
    MOVSD ES:EDI,ESI                    ; 0053d626
    MOVSD ES:EDI,ESI                    ; 0053d627
    FLD float ptr [EBP + 0xffffff26]    ; 0053d628
    FMUL ST0                            ; 0053d62e
    FLD float ptr [EBP + 0xffffff22]    ; 0053d630
    FMUL ST0                            ; 0053d636
    FADDP                               ; 0053d638
    FLD float ptr [EBP + 0xffffff2a]    ; 0053d63a
    FMUL ST0                            ; 0053d640
    FADDP                               ; 0053d642
    FSQRT                               ; 0053d644
    FCOMP double ptr [0x005e667d]       ; 0053d646 | DAT_005e667d
    FNSTSW AX                           ; 0053d64c
    SAHF                                ; 0053d64e
    JNC 0x0053d685                      ; 0053d64f
        ;   XREF to: 0053d685 (CONDITIONAL_JUMP)  ; LAB_0053d685
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d651
    MOV EDI,dword ptr [EAX + 0x10b40]   ; 0053d657
    INC EDI                             ; 0053d65d
    MOV dword ptr [EAX + 0x10b40],EDI   ; 0053d65e
    CMP EDI,0x3                         ; 0053d664
    JLE 0x0053d673                      ; 0053d667
        ;   XREF to: 0053d673 (CONDITIONAL_JUMP)  ; LAB_0053d673
    MOV dword ptr [EAX + 0x10b40],0x0   ; 0053d669
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d673
        ;   Label: LAB_0053d673
    MOV EDX,dword ptr [0x005fb408]      ; 0053d679 | DAT_005fb408
    MOV dword ptr [EAX + 0x10b44],EDX   ; 0053d67f
    MOV EAX,[0x005fb3fc]                ; 0053d685 | DAT_005fb3fc
        ;   Label: LAB_0053d685
    MOV dword ptr [EBP + 0x72],EAX      ; 0053d68a
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d68d
    MOV dword ptr [EAX + 0x2510],0x0    ; 0053d693
    PUSH 0x3e32b8c2                     ; 0053d69d
    MOV EDX,dword ptr [EAX + 0x2510]    ; 0053d6a2
    MOV dword ptr [EAX + 0x250c],EDX    ; 0053d6a8
    MOV EDX,dword ptr [EAX + 0x250c]    ; 0053d6ae
    MOV dword ptr [EAX + 0x2508],EDX    ; 0053d6b4
    MOV EAX,dword ptr [EBP + 0x72]      ; 0053d6ba
    PUSH 0x3f000000                     ; 0053d6bd
    MOV dword ptr [EBP + 0xfffffe2e],EAX ; 0053d6c2
    LEA EAX,[EBP + 0xfffffe26]          ; 0053d6c8
    XOR ECX,ECX                         ; 0053d6ce
    PUSH EAX                            ; 0053d6d0
    MOV dword ptr [EBP + 0xfffffe26],ECX ; 0053d6d1
    MOV dword ptr [EBP + 0xfffffe2a],ECX ; 0053d6d7
    PUSH EBX                            ; 0053d6dd
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053d6de
    CALL dword ptr [EAX + 0xcc]         ; 0053d6e4
    ADD ESP,0x4                         ; 0053d6ea
    PUSH EAX                            ; 0053d6ed
    ADD EBX,0x20                        ; 0053d6ee
    PUSH EBX                            ; 0053d6f1
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0053d6f2
    PUSH EDI                            ; 0053d6f8
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0053d6f9
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0053d6fe
    TEST EAX,EAX                        ; 0053d701
    JL 0x0053db90                       ; 0053d703
        ;   XREF to: 0053db90 (CONDITIONAL_JUMP)  ; LAB_0053db90
    JLE 0x0053dbe6                      ; 0053d709
        ;   XREF to: 0053dbe6 (CONDITIONAL_JUMP)  ; LAB_0053dbe6
    CMP dword ptr [EDI + 0x10af8],0x2   ; 0053d70f
    JNZ 0x0053d736                      ; 0053d716
        ;   XREF to: 0053d736 (CONDITIONAL_JUMP)  ; LAB_0053d736
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d718
    MOV EDX,dword ptr [EAX + 0x10b40]   ; 0053d71e
    CMP EDX,0x1                         ; 0053d724
    JZ 0x0053c710                       ; 0053d727
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    CMP EDX,0x3                         ; 0053d72d
    JZ 0x0053c710                       ; 0053d730
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d736
        ;   Label: LAB_0053d736
    FLD float ptr [EAX + 0x10a74]       ; 0053d73c
    FLDZ                                ; 0053d742
    FCOMPP                              ; 0053d744
    FNSTSW AX                           ; 0053d746
    SAHF                                ; 0053d748
    JC 0x0053d7d1                       ; 0053d749
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    PUSH 0x1                            ; 0053d74f
    PUSH 0x3                            ; 0053d751
    PUSH 0x0                            ; 0053d753
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053d755
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053d75a
    ADD EAX,0x6                         ; 0053d75d
    PUSH EAX                            ; 0053d760
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d761
    ADD EAX,0x2b4                       ; 0053d767
    PUSH EAX                            ; 0053d76c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d76d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d772
    PUSH 0x5e662c                       ; 0053d775 | DAT_005e662c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053d77a
    PUSH EBX                            ; 0053d780
    CALL core_charactr.cpp_FUN_0042b300 ; 0053d781
        ;   XREF to: 0042b300 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b300()
    ADD ESP,0x8                         ; 0053d786
    MOV dword ptr [EBX + 0x10b5c],EAX   ; 0053d789
    TEST EAX,EAX                        ; 0053d78f
    JZ 0x0053d7b1                       ; 0053d791
        ;   XREF to: 0053d7b1 (CONDITIONAL_JUMP)  ; LAB_0053d7b1
    PUSH 0x41400000                     ; 0053d793
    PUSH 0x40800000                     ; 0053d798
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053d79d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053d7a2
    ADD ESP,0x8                         ; 0053d7a5
    MOV EAX,dword ptr [EBP + 0x76]      ; 0053d7a8
    MOV dword ptr [EBX + 0x10b64],EAX   ; 0053d7ab
    PUSH 0x3f4ccccd                     ; 0053d7b1
        ;   Label: LAB_0053d7b1
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0053d7b6
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0053d7bb
    TEST EAX,EAX                        ; 0053d7be
    JZ 0x0053d7d1                       ; 0053d7c0
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0053d7c2
    PUSH EDI                            ; 0053d7c8
    CALL core_shadow.cpp_FUN_0053df80   ; 0053d7c9
        ;   XREF to: 0053df80 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053df80()
    ADD ESP,0x4                         ; 0053d7ce
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d7d1
        ;   Label: LAB_0053d7d1
    FLD float ptr [EAX + 0x10b20]       ; 0053d7d7
    FSUB float ptr [EBP + 0x92]         ; 0053d7dd
    FST float ptr [EAX + 0x10b20]       ; 0053d7e3
    FLDZ                                ; 0053d7e9
    FCOMPP                              ; 0053d7eb
    FNSTSW AX                           ; 0053d7ed
    SAHF                                ; 0053d7ef
    JBE 0x0053c710                      ; 0053d7f0
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053d7f6
    PUSH EBX                            ; 0053d7fc
    CALL core_shadow.cpp_FUN_0053df80   ; 0053d7fd
        ;   XREF to: 0053df80 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053df80()
    ADD ESP,0x4                         ; 0053d802
    JMP 0x0053c710                      ; 0053d805
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH 0x1                            ; 0053d80a
        ;   Label: LAB_0053d80a
    PUSH 0x5                            ; 0053d80c
    PUSH EDX                            ; 0053d80e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d80f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d814
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d817
        ;   Label: LAB_0053d817
    CMP dword ptr [EAX + 0x10b5c],0x0   ; 0053d81d
    JNZ 0x0053c710                      ; 0053d824
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    JMP 0x0053d428                      ; 0053d82a
        ;   XREF to: 0053d428 (UNCONDITIONAL_JUMP)  ; LAB_0053d428
    PUSH EDX                            ; 0053d82f
        ;   Label: LAB_0053d82f
    CALL core_motion.cpp_FUN_00503e60   ; 0053d830
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053d835
    ADD ESP,0x4                         ; 0053d838
    FLD float ptr [EBP + 0x76]          ; 0053d83b
    FCOMP double ptr [0x005e666d]       ; 0053d83e | DAT_005e666d
    FNSTSW AX                           ; 0053d844
    SAHF                                ; 0053d846
    JBE 0x0053d855                      ; 0053d847
        ;   XREF to: 0053d855 (CONDITIONAL_JUMP)  ; LAB_0053d855
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d849
    INC dword ptr [EAX + 0x10b6c]       ; 0053d84f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d855
        ;   Label: LAB_0053d855
    CMP dword ptr [EAX + 0x10b6c],0x2   ; 0053d85b
    JLE 0x0053d817                      ; 0053d862
        ;   XREF to: 0053d817 (CONDITIONAL_JUMP)  ; LAB_0053d817
    LEA EBX,[EAX + 0x2b4]               ; 0053d864
    PUSH EBX                            ; 0053d86a
    CALL core_motion.cpp_FUN_00503e60   ; 0053d86b
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053d870
    ADD ESP,0x4                         ; 0053d873
    FLD float ptr [EBP + 0x76]          ; 0053d876
    FCOMP double ptr [0x005e6675]       ; 0053d879 | DAT_005e6675
    FNSTSW AX                           ; 0053d87f
    SAHF                                ; 0053d881
    JBE 0x0053d817                      ; 0053d882
        ;   XREF to: 0053d817 (CONDITIONAL_JUMP)  ; LAB_0053d817
    PUSH 0x1                            ; 0053d884
    PUSH 0x1                            ; 0053d886
    PUSH 0x0                            ; 0053d888
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053d88a
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053d88f
    ADD EAX,0xb                         ; 0053d892
    PUSH EAX                            ; 0053d895
    PUSH EBX                            ; 0053d896
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d897
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d89c
    ADD ESP,0xc                         ; 0053d8a2
    MOV dword ptr [EAX + 0x10b6c],0x0   ; 0053d8a5
    JMP 0x0053d817                      ; 0053d8af
        ;   XREF to: 0053d817 (UNCONDITIONAL_JUMP)  ; LAB_0053d817
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d8b4
        ;   Label: LAB_0053d8b4
    ADD EAX,0x10b60                     ; 0053d8ba
    PUSH EAX                            ; 0053d8bf
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d8c0
    PUSH 0x3f800000                     ; 0053d8c6
    MOV EDI,dword ptr [EAX + 0x10b5c]   ; 0053d8cb
    PUSH 0x3f800000                     ; 0053d8d1
    PUSH EDI                            ; 0053d8d6
    PUSH EAX                            ; 0053d8d7
    CALL core_charactr.cpp_FUN_00428260 ; 0053d8d8
        ;   XREF to: 00428260 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428260()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d8dd
    MOV EAX,dword ptr [EAX + 0x10b60]   ; 0053d8e3
    ADD ESP,0x14                        ; 0053d8e9
    CMP EAX,0x1                         ; 0053d8ec
    JC 0x0053d90f                       ; 0053d8ef
        ;   XREF to: 0053d90f (CONDITIONAL_JUMP)  ; LAB_0053d90f
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053d8f1
    ADD EDX,0x2b4                       ; 0053d8f7
    CMP EAX,0x1                         ; 0053d8fd
    JBE 0x0053d80a                      ; 0053d900
        ;   XREF to: 0053d80a (CONDITIONAL_JUMP)  ; LAB_0053d80a
    CMP EAX,0x2                         ; 0053d906
    JZ 0x0053d82f                       ; 0053d909
        ;   XREF to: 0053d82f (CONDITIONAL_JUMP)  ; LAB_0053d82f
    PUSH 0x1                            ; 0053d90f
        ;   Label: LAB_0053d90f
    PUSH 0x4                            ; 0053d911
    PUSH 0x0                            ; 0053d913
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053d915
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053d91a
    PUSH EAX                            ; 0053d91d
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d91e
    ADD EAX,0x2b4                       ; 0053d924
    PUSH EAX                            ; 0053d929
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d92a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d92f
    ADD ESP,0xc                         ; 0053d935
    MOV dword ptr [EAX + 0x10b5c],0x0   ; 0053d938
    JMP 0x0053d428                      ; 0053d942
        ;   XREF to: 0053d428 (UNCONDITIONAL_JUMP)  ; LAB_0053d428
    PUSH EBX                            ; 0053d947
        ;   Label: LAB_0053d947
    CALL core_motion.cpp_FUN_00503e60   ; 0053d948
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053d94d
    ADD ESP,0x4                         ; 0053d950
    FLD float ptr [EBP + 0x76]          ; 0053d953
    FCOMP double ptr [0x005e6675]       ; 0053d956 | DAT_005e6675
    FNSTSW AX                           ; 0053d95c
    SAHF                                ; 0053d95e
    JBE 0x0053c710                      ; 0053d95f
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH 0x1                            ; 0053d965
    PUSH 0x4                            ; 0053d967
    PUSH EDI                            ; 0053d969
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053d96a
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053d96f
    PUSH EAX                            ; 0053d972
    PUSH EBX                            ; 0053d973
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d974
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d979
    JMP 0x0053c710                      ; 0053d97c
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d981
        ;   Label: LAB_0053d981
    PUSH EBX                            ; 0053d987
    MOV dword ptr [EAX + 0x10a78],0x0   ; 0053d988
    CALL core_motion.cpp_FUN_00503e60   ; 0053d992
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053d997
    ADD ESP,0x4                         ; 0053d99a
    FLD float ptr [EBP + 0x76]          ; 0053d99d
    FCOMP double ptr [0x005e6675]       ; 0053d9a0 | DAT_005e6675
    FNSTSW AX                           ; 0053d9a6
    SAHF                                ; 0053d9a8
    JBE 0x0053c710                      ; 0053d9a9
        ;   XREF to: 0053c710 (CONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH 0x1                            ; 0053d9af
    PUSH 0x4                            ; 0053d9b1
    PUSH 0x0                            ; 0053d9b3
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053d9b5
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053d9ba
    PUSH EAX                            ; 0053d9bd
    PUSH EBX                            ; 0053d9be
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d9bf
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d9c4
    JMP 0x0053c710                      ; 0053d9c7
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    PUSH 0x1                            ; 0053d9cc
        ;   Label: LAB_0053d9cc
    PUSH 0x4                            ; 0053d9ce
    PUSH 0x0                            ; 0053d9d0
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053d9d2
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053d9d7
    PUSH EAX                            ; 0053d9da
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053d9db
    ADD EAX,0x2b4                       ; 0053d9e1
    PUSH EAX                            ; 0053d9e6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053d9e7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053d9ec
    JMP 0x0053c710                      ; 0053d9ef
        ;   XREF to: 0053c710 (UNCONDITIONAL_JUMP)  ; LAB_0053c710
    CMP dword ptr [EAX + 0x10b38],0x0   ; 0053d9f4
        ;   Label: LAB_0053d9f4
    JZ 0x0053d521                       ; 0053d9fb
        ;   XREF to: 0053d521 (CONDITIONAL_JUMP)  ; LAB_0053d521
    JMP 0x0053d544                      ; 0053da01
        ;   XREF to: 0053d544 (UNCONDITIONAL_JUMP)  ; LAB_0053d544
    CMP EDX,0x3                         ; 0053da06
        ;   Label: LAB_0053da06
    JZ 0x0053d585                       ; 0053da09
        ;   XREF to: 0053d585 (CONDITIONAL_JUMP)  ; LAB_0053d585
    JMP 0x0053d5de                      ; 0053da0f
        ;   XREF to: 0053d5de (UNCONDITIONAL_JUMP)  ; LAB_0053d5de
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053da14
        ;   Label: LAB_0053da14
    MOV EAX,dword ptr [EAX + 0x10b38]   ; 0053da1a
    ADD EAX,0x20                        ; 0053da20
    PUSH EAX                            ; 0053da23
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053da24
    MOV ESI,dword ptr [EAX + 0x10a78]   ; 0053da2a
    PUSH ESI                            ; 0053da30
    LEA ESI,[EBP + 0xfffffe02]          ; 0053da31
    LEA EDI,[EBP + 0xfffffeb6]          ; 0053da37
    CALL core_actor.cpp_FUN_00408de0    ; 0053da3d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xfffffe02]          ; 0053da42
    MOVSD ES:EDI,ESI                    ; 0053da48
    MOVSD ES:EDI,ESI                    ; 0053da49
    MOVSD ES:EDI,ESI                    ; 0053da4a
    ADD ESP,0x8                         ; 0053da4b
    FLD float ptr [EBP + 0xfffffebe]    ; 0053da4e
    FLDZ                                ; 0053da54
    FCOMPP                              ; 0053da56
    FNSTSW AX                           ; 0053da58
    SAHF                                ; 0053da5a
    JBE 0x0053da6e                      ; 0053da5b
        ;   XREF to: 0053da6e (CONDITIONAL_JUMP)  ; LAB_0053da6e
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053da5d
    MOV EBX,dword ptr [EBX + 0x10b38]   ; 0053da63
    JMP 0x0053d5de                      ; 0053da69
        ;   XREF to: 0053d5de (UNCONDITIONAL_JUMP)  ; LAB_0053d5de
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053da6e
        ;   Label: LAB_0053da6e
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0053da74
    LEA EDI,[EBP + -0x42]               ; 0053da7a
    MOV EBX,dword ptr [EBX + 0x10a78]   ; 0053da7d
    LEA ESI,[EBP + -0x4e]               ; 0053da83
    MOV ECX,dword ptr [ECX + 0x10b34]   ; 0053da86
    FLD float ptr [EBX + 0x20]          ; 0053da8c
    FLD float ptr [EBX + 0x24]          ; 0053da8f
    LEA EAX,[ECX + 0x20]                ; 0053da92
    FLD float ptr [EBX + 0x28]          ; 0053da95
    FXCH ST2                            ; 0053da98
    FSUB float ptr [EAX]                ; 0053da9a
    FXCH                                ; 0053da9c
    FSUB float ptr [EAX + 0x4]          ; 0053da9e
    FXCH ST2                            ; 0053daa1
    FSUB float ptr [EAX + 0x8]          ; 0053daa3
    FXCH                                ; 0053daa6
    FSTP float ptr [EBP + -0x4e]        ; 0053daa8
    FXCH                                ; 0053daab
    FSTP float ptr [EBP + -0x4a]        ; 0053daad
    FSTP float ptr [EBP + -0x46]        ; 0053dab0
    MOVSD ES:EDI,ESI                    ; 0053dab3
    MOVSD ES:EDI,ESI                    ; 0053dab4
    MOVSD ES:EDI,ESI                    ; 0053dab5
    FLD float ptr [EBP + -0x3e]         ; 0053dab6
    FMUL ST0                            ; 0053dab9
    FLD float ptr [EBP + -0x42]         ; 0053dabb
    FMUL ST0                            ; 0053dabe
    FADDP                               ; 0053dac0
    FLD float ptr [EBP + -0x3a]         ; 0053dac2
    FMUL ST0                            ; 0053dac5
    FADDP                               ; 0053dac7
    FSQRT                               ; 0053dac9
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053dacb
    FLD float ptr [EBX + 0x20]          ; 0053dad1
    FLD float ptr [EBX + 0x24]          ; 0053dad4
    MOV EDX,dword ptr [EDX + 0x10b38]   ; 0053dad7
    FLD float ptr [EBX + 0x28]          ; 0053dadd
    LEA EAX,[EDX + 0x20]                ; 0053dae0
    LEA EDI,[EBP + 0xfffffe4a]          ; 0053dae3
    LEA ESI,[EBP + 0xfffffe32]          ; 0053dae9
    FXCH ST2                            ; 0053daef
    FSUB float ptr [EAX]                ; 0053daf1
    FXCH                                ; 0053daf3
    FSUB float ptr [EAX + 0x4]          ; 0053daf5
    FXCH ST2                            ; 0053daf8
    FSUB float ptr [EAX + 0x8]          ; 0053dafa
    FXCH                                ; 0053dafd
    FSTP float ptr [EBP + 0xfffffe32]   ; 0053daff
    FXCH                                ; 0053db05
    FSTP float ptr [EBP + 0xfffffe36]   ; 0053db07
    FSTP float ptr [EBP + 0xfffffe3a]   ; 0053db0d
    MOVSD ES:EDI,ESI                    ; 0053db13
    MOVSD ES:EDI,ESI                    ; 0053db14
    MOVSD ES:EDI,ESI                    ; 0053db15
    FLD float ptr [EBP + 0xfffffe4e]    ; 0053db16
    FMUL ST0                            ; 0053db1c
    FLD float ptr [EBP + 0xfffffe4a]    ; 0053db1e
    FMUL ST0                            ; 0053db24
    FADDP                               ; 0053db26
    FLD float ptr [EBP + 0xfffffe52]    ; 0053db28
    FMUL ST0                            ; 0053db2e
    FADDP                               ; 0053db30
    FSQRT                               ; 0053db32
    FCOMPP                              ; 0053db34
    FNSTSW AX                           ; 0053db36
    SAHF                                ; 0053db38
    JNC 0x0053db42                      ; 0053db39
        ;   XREF to: 0053db42 (CONDITIONAL_JUMP)  ; LAB_0053db42
    MOV EBX,ECX                         ; 0053db3b
    JMP 0x0053d5de                      ; 0053db3d
        ;   XREF to: 0053d5de (UNCONDITIONAL_JUMP)  ; LAB_0053d5de
    MOV EBX,EDX                         ; 0053db42
        ;   Label: LAB_0053db42
    JMP 0x0053d5de                      ; 0053db44
        ;   XREF to: 0053d5de (UNCONDITIONAL_JUMP)  ; LAB_0053d5de
    CMP EDI,0x3                         ; 0053db49
        ;   Label: LAB_0053db49
    JZ 0x0053d5f3                       ; 0053db4c
        ;   XREF to: 0053d5f3 (CONDITIONAL_JUMP)  ; LAB_0053d5f3
    FLD float ptr [EAX + 0x10b44]       ; 0053db52
    FLDZ                                ; 0053db58
    FCOMPP                              ; 0053db5a
    FNSTSW AX                           ; 0053db5c
    SAHF                                ; 0053db5e
    JC 0x0053d685                       ; 0053db5f
        ;   XREF to: 0053d685 (CONDITIONAL_JUMP)  ; LAB_0053d685
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053db65
    MOV ECX,dword ptr [EAX + 0x10b40]   ; 0053db6b
    INC ECX                             ; 0053db71
    MOV dword ptr [EAX + 0x10b40],ECX   ; 0053db72
    CMP ECX,0x3                         ; 0053db78
    JLE 0x0053d685                      ; 0053db7b
        ;   XREF to: 0053d685 (CONDITIONAL_JUMP)  ; LAB_0053d685
    MOV dword ptr [EAX + 0x10b40],0x0   ; 0053db81
    JMP 0x0053d685                      ; 0053db8b
        ;   XREF to: 0053d685 (UNCONDITIONAL_JUMP)  ; LAB_0053d685
    PUSH EDI                            ; 0053db90
        ;   Label: LAB_0053db90
    PUSH 0x5e660b                       ; 0053db91 | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0053db96 | g_CConsolePtr
    PUSH EDX                            ; 0053db9c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0053db9d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053dba2
    LEA EBX,[EDI + 0x2b4]               ; 0053dba5
    PUSH EBX                            ; 0053dbab
    CALL core_motion.cpp_FUN_00503e60   ; 0053dbac
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053dbb1
    ADD ESP,0x4                         ; 0053dbb4
    FLD float ptr [EBP + 0x76]          ; 0053dbb7
    FCOMP double ptr [0x005e6675]       ; 0053dbba | DAT_005e6675
    FNSTSW AX                           ; 0053dbc0
    SAHF                                ; 0053dbc2
    JBE 0x0053d7d1                      ; 0053dbc3
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    PUSH 0x1                            ; 0053dbc9
    PUSH 0x4                            ; 0053dbcb
    PUSH 0x0                            ; 0053dbcd
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053dbcf
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053dbd4
    PUSH EAX                            ; 0053dbd7
    PUSH EBX                            ; 0053dbd8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053dbd9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053dbde
    JMP 0x0053d7d1                      ; 0053dbe1
        ;   XREF to: 0053d7d1 (UNCONDITIONAL_JUMP)  ; LAB_0053d7d1
    MOV EAX,[0x026535b0]                ; 0053dbe6 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0053dbe6
    PUSH EAX                            ; 0053dbeb
    MOV EDX,dword ptr [EDI + 0x10b2c]   ; 0053dbec
    PUSH EDX                            ; 0053dbf2
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053dbf3
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053dbf8
    TEST EAX,EAX                        ; 0053dbfb
    JNZ 0x0053d7d1                      ; 0053dbfd
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    FLD float ptr [EBX]                 ; 0053dc03
    FLD float ptr [EBX + 0x4]           ; 0053dc05
    FLD float ptr [EBX + 0x8]           ; 0053dc08
    LEA ESI,[EBP + -0x36]               ; 0053dc0b
    LEA EAX,[EBP + 0xffffff0a]          ; 0053dc0e
    LEA EDX,[EBP + 0xfffffece]          ; 0053dc14
    FXCH ST2                            ; 0053dc1a
    FSUB float ptr [EDI + 0x20]         ; 0053dc1c
    FXCH                                ; 0053dc1f
    FSUB float ptr [EDI + 0x24]         ; 0053dc21
    FXCH ST2                            ; 0053dc24
    FSUB float ptr [EDI + 0x28]         ; 0053dc26
    FXCH                                ; 0053dc29
    FSTP float ptr [EBP + -0x36]        ; 0053dc2b
    FXCH                                ; 0053dc2e
    FSTP float ptr [EBP + -0x32]        ; 0053dc30
    LEA EDI,[EBP + 0xffffff0a]          ; 0053dc33
    FSTP float ptr [EBP + -0x2e]        ; 0053dc39
    MOVSD ES:EDI,ESI                    ; 0053dc3c
    MOVSD ES:EDI,ESI                    ; 0053dc3d
    MOVSD ES:EDI,ESI                    ; 0053dc3e
    CMP EDX,EAX                         ; 0053dc3f
    JZ 0x0053dc67                       ; 0053dc41
        ;   XREF to: 0053dc67 (CONDITIONAL_JUMP)  ; LAB_0053dc67
    MOV EAX,dword ptr [EBP + 0xffffff0a] ; 0053dc43
    MOV dword ptr [EBP + 0xfffffece],EAX ; 0053dc49
    MOV EAX,dword ptr [EBP + 0xffffff0e] ; 0053dc4f
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 0053dc55
    MOV EAX,dword ptr [EBP + 0xffffff12] ; 0053dc5b
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 0053dc61
    FLD float ptr [EBP + 0xfffffed2]    ; 0053dc67
        ;   Label: LAB_0053dc67
    FMUL ST0                            ; 0053dc6d
    FLD float ptr [EBP + 0xfffffece]    ; 0053dc6f
    FMUL ST0                            ; 0053dc75
    FADDP                               ; 0053dc77
    FLD float ptr [EBP + 0xfffffed6]    ; 0053dc79
    FMUL ST0                            ; 0053dc7f
    FADDP                               ; 0053dc81
    FSQRT                               ; 0053dc83
    MOV ECX,0x41a00000                  ; 0053dc85
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053dc8a
    MOV dword ptr [EBP + 0x62],ECX      ; 0053dc90
    MOV EBX,dword ptr [EAX + 0x10af8]   ; 0053dc93
    FSTP float ptr [EBP + 0x56]         ; 0053dc99
    CMP EBX,0x1                         ; 0053dc9c
    JNZ 0x0053dca8                      ; 0053dc9f
        ;   XREF to: 0053dca8 (CONDITIONAL_JUMP)  ; LAB_0053dca8
    MOV dword ptr [EBP + 0x62],0x41200000 ; 0053dca1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053dca8
        ;   Label: LAB_0053dca8
    CMP dword ptr [EAX + 0x10af8],0x2   ; 0053dcae
    JNZ 0x0053dcbe                      ; 0053dcb5
        ;   XREF to: 0053dcbe (CONDITIONAL_JUMP)  ; LAB_0053dcbe
    MOV dword ptr [EBP + 0x62],0x41200000 ; 0053dcb7
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053dcbe
        ;   Label: LAB_0053dcbe
    FLD float ptr [EBP + 0x56]          ; 0053dcc4
    ADD EBX,0x2b4                       ; 0053dcc7
    FCOMP float ptr [EBP + 0x62]        ; 0053dccd
    FNSTSW AX                           ; 0053dcd0
    SAHF                                ; 0053dcd2
    JA 0x0053dd57                       ; 0053dcd3
        ;   XREF to: 0053dd57 (CONDITIONAL_JUMP)  ; LAB_0053dd57
    FLD float ptr [0x005fb3fc]          ; 0053dcd9 | DAT_005fb3fc
    FMUL float ptr [0x005e6659]         ; 0053dcdf | DAT_005e6659
    FCOMP float ptr [EBP + 0x56]        ; 0053dce5
    FNSTSW AX                           ; 0053dce8
    SAHF                                ; 0053dcea
    JBE 0x0053d7d1                      ; 0053dceb
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    CMP dword ptr [EBP + 0x6e],0x5      ; 0053dcf1
    JNZ 0x0053dd29                      ; 0053dcf5
        ;   XREF to: 0053dd29 (CONDITIONAL_JUMP)  ; LAB_0053dd29
    PUSH EBX                            ; 0053dcf7
    CALL core_motion.cpp_FUN_00503e60   ; 0053dcf8
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053dcfd
    ADD ESP,0x4                         ; 0053dd00
    FLD float ptr [EBP + 0x76]          ; 0053dd03
    FCOMP double ptr [0x005e6675]       ; 0053dd06 | DAT_005e6675
    FNSTSW AX                           ; 0053dd0c
    SAHF                                ; 0053dd0e
    JBE 0x0053dd29                      ; 0053dd0f
        ;   XREF to: 0053dd29 (CONDITIONAL_JUMP)  ; LAB_0053dd29
    PUSH 0x1                            ; 0053dd11
    PUSH 0x4                            ; 0053dd13
    PUSH 0x0                            ; 0053dd15
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053dd17
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053dd1c
    PUSH EAX                            ; 0053dd1f
    PUSH EBX                            ; 0053dd20
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053dd21
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053dd26
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0053dd29
        ;   Label: LAB_0053dd29
    CMP ECX,0xb                         ; 0053dd2c
    JZ 0x0053dd3a                       ; 0053dd2f
        ;   XREF to: 0053dd3a (CONDITIONAL_JUMP)  ; LAB_0053dd3a
    CMP ECX,0xc                         ; 0053dd31
    JNZ 0x0053d7d1                      ; 0053dd34
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    PUSH 0x1                            ; 0053dd3a
        ;   Label: LAB_0053dd3a
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053dd3c
    PUSH 0x5                            ; 0053dd42
    ADD EAX,0x2b4                       ; 0053dd44
    PUSH EAX                            ; 0053dd49
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053dd4a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053dd4f
    JMP 0x0053d7d1                      ; 0053dd52
        ;   XREF to: 0053d7d1 (UNCONDITIONAL_JUMP)  ; LAB_0053d7d1
    LEA EAX,[EBP + 0xfffffece]          ; 0053dd57
        ;   Label: LAB_0053dd57
    PUSH EAX                            ; 0053dd5d
    LEA ESI,[EBP + 0xfffffefe]          ; 0053dd5e
    LEA EDI,[EBP + 0xfffffef2]          ; 0053dd64
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0053dd6a
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xfffffefe]          ; 0053dd6f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053dd75
    MOVSD ES:EDI,ESI                    ; 0053dd7b
    MOVSD ES:EDI,ESI                    ; 0053dd7c
    MOVSD ES:EDI,ESI                    ; 0053dd7d
    ADD ESP,0x4                         ; 0053dd7e
    FLD float ptr [EBP + 0xfffffef6]    ; 0053dd81
    FSUB float ptr [EAX + 0x34]         ; 0053dd87
    SUB ESP,0x4                         ; 0053dd8a
    FSTP float ptr [ESP]                ; 0053dd8d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0053dd90
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053dd95
    FLD float ptr [EBP + 0x76]          ; 0053dd98
    FABS                                ; 0053dd9b
    ADD ESP,0x4                         ; 0053dd9d
    FCOMP double ptr [0x005e6685]       ; 0053dda0 | DAT_005e6685
    FNSTSW AX                           ; 0053dda6
    SAHF                                ; 0053dda8
    JNC 0x0053d7d1                      ; 0053dda9
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    PUSH EBX                            ; 0053ddaf
    CALL core_motion.cpp_FUN_00503e60   ; 0053ddb0
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053ddb5
    ADD ESP,0x4                         ; 0053ddb8
    FLD float ptr [EBP + 0x76]          ; 0053ddbb
    FCOMP double ptr [0x005e6675]       ; 0053ddbe | DAT_005e6675
    FNSTSW AX                           ; 0053ddc4
    SAHF                                ; 0053ddc6
    JBE 0x0053dde4                      ; 0053ddc7
        ;   XREF to: 0053dde4 (CONDITIONAL_JUMP)  ; LAB_0053dde4
    PUSH 0x1                            ; 0053ddc9
    PUSH 0x1                            ; 0053ddcb
    PUSH 0x0                            ; 0053ddcd
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053ddcf
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053ddd4
    ADD EAX,0xb                         ; 0053ddd7
    PUSH EAX                            ; 0053ddda
    PUSH EBX                            ; 0053dddb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053dddc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053dde1
    PUSH 0x3e19999a                     ; 0053dde4
        ;   Label: LAB_0053dde4
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0053dde9
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0053ddee
    TEST EAX,EAX                        ; 0053ddf1
    JNZ 0x0053de2b                      ; 0053ddf3
        ;   XREF to: 0053de2b (CONDITIONAL_JUMP)  ; LAB_0053de2b
    XOR ESI,ESI                         ; 0053ddf5
        ;   Label: LAB_0053ddf5
    XOR EDI,EDI                         ; 0053ddf7
    MOV EAX,[0x0061b5a8]                ; 0053ddf9 | g_CDemonSetPtr
        ;   Label: LAB_0053ddf9
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 0053ddfe | g_CDemonSetInstance.enemy_count
    JGE 0x0053d7d1                      ; 0053de04
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    MOV EBX,dword ptr [0x020b199c]      ; 0053de0a | g_CShadowClassInfo.name_hash
    PUSH EBX                            ; 0053de10
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 0053de11
    PUSH EDX                            ; 0053de18
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053de19
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053de1e
    TEST EAX,EAX                        ; 0053de21
    JNZ 0x0053de3c                      ; 0053de23
        ;   XREF to: 0053de3c (CONDITIONAL_JUMP)  ; LAB_0053de3c
    INC EDI                             ; 0053de25
        ;   Label: LAB_0053de25
    ADD ESI,0x4                         ; 0053de26
    JMP 0x0053ddf9                      ; 0053de29
        ;   XREF to: 0053ddf9 (UNCONDITIONAL_JUMP)  ; LAB_0053ddf9
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053de2b
        ;   Label: LAB_0053de2b
    PUSH ESI                            ; 0053de31
    CALL core_shadow.cpp_FUN_0053df80   ; 0053de32
        ;   XREF to: 0053df80 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053df80()
    ADD ESP,0x4                         ; 0053de37
    JMP 0x0053ddf5                      ; 0053de3a
        ;   XREF to: 0053ddf5 (UNCONDITIONAL_JUMP)  ; LAB_0053ddf5
    CMP EAX,dword ptr [EBP + 0x8e]      ; 0053de3c
        ;   Label: LAB_0053de3c
    JZ 0x0053de25                       ; 0053de42
        ;   XREF to: 0053de25 (CONDITIONAL_JUMP)  ; LAB_0053de25
    LEA EBX,[EAX + 0x2b4]               ; 0053de44
    PUSH EBX                            ; 0053de4a
    CALL core_motion.cpp_FUN_005035c0   ; 0053de4b
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053de50
    ADD ESP,0x4                         ; 0053de53
    CMP EAX,0xb                         ; 0053de56
    JNZ 0x0053dea0                      ; 0053de59
        ;   XREF to: 0053dea0 (CONDITIONAL_JUMP)  ; LAB_0053dea0
    PUSH 0x2                            ; 0053de5b
        ;   Label: LAB_0053de5b
    PUSH 0x0                            ; 0053de5d
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053de5f
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053de64
    MOV EDX,EAX                         ; 0053de67
    CMP EAX,0x1                         ; 0053de69
    JNZ 0x0053de80                      ; 0053de6c
        ;   XREF to: 0053de80 (CONDITIONAL_JUMP)  ; LAB_0053de80
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053de6e
    FLD float ptr [EAX + 0x34]          ; 0053de74
    FADD float ptr [0x005e6695]         ; 0053de77 | DAT_005e6695
    FSTP float ptr [EAX + 0x34]         ; 0053de7d
    CMP EDX,0x2                         ; 0053de80
        ;   Label: LAB_0053de80
    JNZ 0x0053d7d1                      ; 0053de83
        ;   XREF to: 0053d7d1 (CONDITIONAL_JUMP)  ; LAB_0053d7d1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053de89
    FLD float ptr [EAX + 0x34]          ; 0053de8f
    FADD float ptr [0x005e6699]         ; 0053de92 | DAT_005e6699
    FSTP float ptr [EAX + 0x34]         ; 0053de98
    JMP 0x0053d7d1                      ; 0053de9b
        ;   XREF to: 0053d7d1 (UNCONDITIONAL_JUMP)  ; LAB_0053d7d1
    PUSH EBX                            ; 0053dea0
        ;   Label: LAB_0053dea0
    CALL core_motion.cpp_FUN_005035c0   ; 0053dea1
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053dea6
    ADD ESP,0x4                         ; 0053dea9
    CMP EAX,0xc                         ; 0053deac
    JZ 0x0053de5b                       ; 0053deaf
        ;   XREF to: 0053de5b (CONDITIONAL_JUMP)  ; LAB_0053de5b
    INC EDI                             ; 0053deb1
    ADD ESI,0x4                         ; 0053deb2
    JMP 0x0053ddf9                      ; 0053deb5
        ;   XREF to: 0053ddf9 (UNCONDITIONAL_JUMP)  ; LAB_0053ddf9
    MOV EBX,dword ptr [EBP + 0x6e]      ; 0053deba
        ;   Label: LAB_0053deba
    CMP EBX,0x14                        ; 0053debd
    JA 0x0053d0f3                       ; 0053dec0
        ;   XREF to: 0053d0f3 (CONDITIONAL_JUMP)  ; caseD_13
    MOV EAX,EBX                         ; 0053dec6
    JMP dword ptr [EAX*0x4 + 0x53c4a0]  ; 0053dec8 | caseD_4 | caseD_c | caseD_9
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053decf
        ;   Label: LAB_0053decf
    CMP dword ptr [EAX + 0xdc],0x0      ; 0053ded5
    JNZ 0x0053c793                      ; 0053dedc
        ;   XREF to: 0053c793 (CONDITIONAL_JUMP)  ; LAB_0053c793
    JMP 0x0053c915                      ; 0053dee2
        ;   XREF to: 0053c915 (UNCONDITIONAL_JUMP)  ; LAB_0053c915
    PUSH 0x40c00000                     ; 0053dee7
        ;   Label: LAB_0053dee7
    PUSH 0x40400000                     ; 0053deec
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053def1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0053def6
    ADD ESP,0x8                         ; 0053def9
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053defc
    MOV EDX,dword ptr [EBP + 0x76]      ; 0053df02
    MOV dword ptr [EAX + 0x10b64],EDX   ; 0053df05
    JMP 0x0053cb4b                      ; 0053df0b
        ;   XREF to: 0053cb4b (UNCONDITIONAL_JUMP)  ; LAB_0053cb4b

