; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_FUN_004f05b0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_die_wav_005e51e7
;   TerminatedCString s_hotdemon_hurt_wav_005e51f8
;   undefined4 DAT_005e5212
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_enemy.cpp_FUN_004a0f00
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f05b0
        ;   Label: core_hotdemon.cpp_FUN_004f05b0
    PUSH EBP                            ; 004f05b1
    SUB ESP,0x20                        ; 004f05b2
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004f05b5
    MOV EDX,dword ptr [EBP + 0xc268]    ; 004f05b9
    PUSH EDX                            ; 004f05bf
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004f05c0
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004f05c5
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f05c8
    CMP dword ptr [EAX + 0x28],0x8      ; 004f05cc
    JZ 0x004f064b                       ; 004f05d0
        ;   XREF to: 004f064b (CONDITIONAL_JUMP)  ; LAB_004f064b
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f05d2
        ;   Label: LAB_004f05d2
    FLD float ptr [EAX + 0x4]           ; 004f05d6
    FSUBR float ptr [EBP + 0x2538]      ; 004f05d9
    LEA EBX,[EBP + 0x158]               ; 004f05df
    FST float ptr [EBP + 0x2538]        ; 004f05e5
    FLDZ                                ; 004f05eb
    FCOMPP                              ; 004f05ed
    FNSTSW AX                           ; 004f05ef
    SAHF                                ; 004f05f1
    JNC 0x004f06ac                      ; 004f05f2
        ;   XREF to: 004f06ac (CONDITIONAL_JUMP)  ; LAB_004f06ac
    PUSH EBX                            ; 004f05f8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f05f9
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f05fe
    ADD ESP,0x4                         ; 004f0601
    CMP EAX,0x6                         ; 004f0604
    JGE 0x004f0739                      ; 004f0607
        ;   XREF to: 004f0739 (CONDITIONAL_JUMP)  ; LAB_004f0739
    PUSH 0x1                            ; 004f060d
        ;   Label: LAB_004f060d
    PUSH 0x3                            ; 004f060f
    LEA EAX,[EBP + 0x158]               ; 004f0611
    PUSH EAX                            ; 004f0617
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f0618
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f0618
    ADD ESP,0xc                         ; 004f061d
    MOV EAX,dword ptr [EBP + 0xc26c]    ; 004f0620
    PUSH EAX                            ; 004f0626
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f0627
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f062c
    TEST EAX,EAX                        ; 004f062f
    JZ 0x004f074c                       ; 004f0631
        ;   XREF to: 004f074c (CONDITIONAL_JUMP)  ; LAB_004f074c
    MOV ECX,dword ptr [ESP + 0x30]      ; 004f0637
        ;   Label: LAB_004f0637
    PUSH ECX                            ; 004f063b
    PUSH EBP                            ; 004f063c
    CALL core_enemy.cpp_FUN_004a0f00    ; 004f063d
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 004f0642
    ADD ESP,0x20                        ; 004f0645
    POP EBP                             ; 004f0648
    POP EBX                             ; 004f0649
    RET                                 ; 004f064a
    PUSH EDI                            ; 004f064b
        ;   Label: LAB_004f064b
    PUSH ESI                            ; 004f064c
    FLD float ptr [EAX + 0x4]           ; 004f064d
    ADD EAX,0x1c                        ; 004f0650
    FLD ST0                             ; 004f0653
    FMUL double ptr [0x005e5212]        ; 004f0655 | DAT_005e5212
    PUSH EAX                            ; 004f065b
    LEA ESI,[ESP + 0x18]                ; 004f065c
    LEA EDI,[ESP + 0xc]                 ; 004f0660
    PUSH EBP                            ; 004f0664
    FSTP ST1                            ; 004f0665
    FSTP float ptr [EAX + -0x18]        ; 004f0667
    CALL core_actor.cpp_FUN_00408b40    ; 004f066a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1c]                ; 004f066f
    ADD ESP,0x8                         ; 004f0673
    XOR EBX,EBX                         ; 004f0676
    MOVSD ES:EDI,ESI                    ; 004f0678
    MOVSD ES:EDI,ESI                    ; 004f0679
    MOVSD ES:EDI,ESI                    ; 004f067a
    MOV ESI,0x4000                      ; 004f067b
    PUSH 0xffff                         ; 004f0680
        ;   Label: LAB_004f0680
    PUSH 0x0                            ; 004f0685
    PUSH ESI                            ; 004f0687
    PUSH ESI                            ; 004f0688
    PUSH 0x0                            ; 004f0689
    LEA EAX,[ESP + 0x1c]                ; 004f068b
    PUSH EAX                            ; 004f068f
    MOV EDI,dword ptr [0x0061c010]      ; 004f0690 | DAT_0061c010
    PUSH EDI                            ; 004f0696
    INC EBX                             ; 004f0697
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004f0698
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004f069d
    CMP EBX,0x5                         ; 004f06a0
    JL 0x004f0680                       ; 004f06a3
        ;   XREF to: 004f0680 (CONDITIONAL_JUMP)  ; LAB_004f0680
    POP ESI                             ; 004f06a5
    POP EDI                             ; 004f06a6
    JMP 0x004f05d2                      ; 004f06a7
        ;   XREF to: 004f05d2 (UNCONDITIONAL_JUMP)  ; LAB_004f05d2
    PUSH EBX                            ; 004f06ac
        ;   Label: LAB_004f06ac
    MOV dword ptr [EBP + 0x2538],0x0    ; 004f06ad
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f06b7
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f06bc
    ADD ESP,0x4                         ; 004f06bf
    CMP EAX,0x4                         ; 004f06c2
    JZ 0x004f0637                       ; 004f06c5
        ;   XREF to: 004f0637 (CONDITIONAL_JUMP)  ; LAB_004f0637
    CMP EAX,0x5                         ; 004f06cb
    JZ 0x004f0637                       ; 004f06ce
        ;   XREF to: 004f0637 (CONDITIONAL_JUMP)  ; LAB_004f0637
    CMP EAX,0xa                         ; 004f06d4
    JZ 0x004f0637                       ; 004f06d7
        ;   XREF to: 004f0637 (CONDITIONAL_JUMP)  ; LAB_004f0637
    CMP EAX,0xb                         ; 004f06dd
    JZ 0x004f0637                       ; 004f06e0
        ;   XREF to: 004f0637 (CONDITIONAL_JUMP)  ; LAB_004f0637
    CMP EAX,0x6                         ; 004f06e6
    JL 0x004f0733                       ; 004f06e9
        ;   XREF to: 004f0733 (CONDITIONAL_JUMP)  ; LAB_004f0733
    PUSH 0x1                            ; 004f06eb
    PUSH 0xa                            ; 004f06ed
    PUSH EBX                            ; 004f06ef
        ;   Label: LAB_004f06ef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f06f0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f06f5
    MOV EDX,dword ptr [EBP + 0xc26c]    ; 004f06f8
    PUSH EDX                            ; 004f06fe
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004f06ff
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004f0704
    PUSH 0x5e51e7                       ; 004f0707 | = "hotdemon-die.wav"
    MOV EAX,dword ptr [EBP + 0x154]     ; 004f070c
    PUSH EBP                            ; 004f0712
    CALL dword ptr [EAX + 0x2c]         ; 004f0713
    ADD ESP,0x8                         ; 004f0716
    MOV dword ptr [EBP + 0xc26c],EAX    ; 004f0719
    MOV ECX,dword ptr [ESP + 0x30]      ; 004f071f
    PUSH ECX                            ; 004f0723
    PUSH EBP                            ; 004f0724
    CALL core_enemy.cpp_FUN_004a0f00    ; 004f0725
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 004f072a
    ADD ESP,0x20                        ; 004f072d
    POP EBP                             ; 004f0730
    POP EBX                             ; 004f0731
    RET                                 ; 004f0732
    PUSH 0x1                            ; 004f0733
        ;   Label: LAB_004f0733
    PUSH 0x4                            ; 004f0735
    JMP 0x004f06ef                      ; 004f0737
        ;   XREF to: 004f06ef (UNCONDITIONAL_JUMP)  ; LAB_004f06ef
    CMP EAX,0xf                         ; 004f0739
        ;   Label: LAB_004f0739
    JZ 0x004f060d                       ; 004f073c
        ;   XREF to: 004f060d (CONDITIONAL_JUMP)  ; LAB_004f060d
    PUSH 0x1                            ; 004f0742
    PUSH 0x9                            ; 004f0744
    PUSH EBX                            ; 004f0746
    JMP 0x004f0618                      ; 004f0747
        ;   XREF to: 004f0618 (UNCONDITIONAL_JUMP)  ; LAB_004f0618
    PUSH 0x5e51f8                       ; 004f074c | = "hotdemon-hurt?.wav"
        ;   Label: LAB_004f074c
    MOV EAX,dword ptr [EBP + 0x154]     ; 004f0751
    PUSH EBP                            ; 004f0757
    CALL dword ptr [EAX + 0x2c]         ; 004f0758
    ADD ESP,0x8                         ; 004f075b
    MOV dword ptr [EBP + 0xc26c],EAX    ; 004f075e
    MOV ECX,dword ptr [ESP + 0x30]      ; 004f0764
    PUSH ECX                            ; 004f0768
    PUSH EBP                            ; 004f0769
    CALL core_enemy.cpp_FUN_004a0f00    ; 004f076a
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 004f076f
    ADD ESP,0x20                        ; 004f0772
    POP EBP                             ; 004f0775
    POP EBX                             ; 004f0776
    RET                                 ; 004f0777

