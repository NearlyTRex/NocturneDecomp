; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_0057d720(CWerewolf *this_ptr,float delta_time)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005d7a43
;   TerminatedCString s_core_werewolf_cpp_005d7a6d
;   TerminatedCString s_Alpha_werewolf_requires_005d7a82
;   TerminatedCString s_Phase_d_Timer_f_005d7aa6
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d7abc
;   TerminatedCString s_werewolf_eat_wav_005d7add
;   undefined4 DAT_005d7af3
;   undefined4 DAT_005d7afb
;   undefined4 DAT_005d7b03
;   undefined4 DAT_005d7b0b
;   undefined4 DAT_005d7b13
;   undefined4 DAT_005d7b1b
;   undefined4 DAT_005d7b23
;   undefined4 DAT_005d7b27
;   undefined4 DAT_005d7b2b
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00434850
;   ... and 21 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d720
        ;   Label: core_werewolf.cpp_CWerewolf_process_FUN_0057d720
    PUSH ESI                            ; 0057d721
    PUSH EDI                            ; 0057d722
    PUSH EBP                            ; 0057d723
    MOV EBP,ESP                         ; 0057d724
    SUB ESP,0x4c4                       ; 0057d726
    SUB EBP,0x7a                        ; 0057d72c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0057d72f
    PUSH dword ptr [EBP + 0x92]         ; 0057d735
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057d73b
    PUSH EBX                            ; 0057d741
    CALL dword ptr [EAX + 0x148]        ; 0057d742
    ADD ESP,0x8                         ; 0057d748
    TEST EAX,EAX                        ; 0057d74b
    JZ 0x0057d7c3                       ; 0057d74d
        ;   XREF to: 0057d7c3 (CONDITIONAL_JUMP)  ; LAB_0057d7c3
    CMP dword ptr [EBX + 0xd054],0x2    ; 0057d74f
    JZ 0x0057d7da                       ; 0057d756
        ;   XREF to: 0057d7da (CONDITIONAL_JUMP)  ; LAB_0057d7da
    LEA EAX,[EBX + 0x249c]              ; 0057d75c
        ;   Label: LAB_0057d75c
    MOV dword ptr [EAX + 0x8],0x0       ; 0057d762
    FLD float ptr [EBP + 0x92]          ; 0057d769
    MOV EDX,dword ptr [EAX + 0x8]       ; 0057d76f
    MOV dword ptr [EAX + 0x4],EDX       ; 0057d772
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057d775
    MOV dword ptr [EAX],EDX             ; 0057d778
    FMUL float ptr [EBX + 0xcdcc]       ; 0057d77a
    LEA EAX,[EBX + 0x158]               ; 0057d780
    FSTP float ptr [EBP + 0x3a]         ; 0057d786
    MOV dword ptr [EBP + 0x72],EAX      ; 0057d789
    FLD float ptr [EBP + 0x3a]          ; 0057d78c
        ;   Label: LAB_0057d78c
    FLDZ                                ; 0057d78f
    FCOMPP                              ; 0057d791
    FNSTSW AX                           ; 0057d793
    SAHF                                ; 0057d795
    JNC 0x0057d8c9                      ; 0057d796
        ;   XREF to: 0057d8c9 (CONDITIONAL_JUMP)  ; LAB_0057d8c9
    LEA EAX,[EBP + 0x3a]                ; 0057d79c
    PUSH EAX                            ; 0057d79f
    MOV EDI,dword ptr [EBP + 0x72]      ; 0057d7a0
    PUSH EDI                            ; 0057d7a3
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 0057d7a4
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0057d7a9
    MOV ESI,EAX                         ; 0057d7ac
    CMP EAX,0xa                         ; 0057d7ae
    JNC 0x0057d8ad                      ; 0057d7b1
        ;   XREF to: 0057d8ad (CONDITIONAL_JUMP)  ; LAB_0057d8ad
    PUSH ESI                            ; 0057d7b7
    PUSH EBX                            ; 0057d7b8
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0057d7b9
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0057d7be
    JMP 0x0057d78c                      ; 0057d7c1
        ;   XREF to: 0057d78c (UNCONDITIONAL_JUMP)  ; LAB_0057d78c
    MOV ECX,dword ptr [EBX + 0xd07c]    ; 0057d7c3
        ;   Label: LAB_0057d7c3
    PUSH ECX                            ; 0057d7c9
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0057d7ca
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d7cf
    LEA ESP,[EBP + 0x7a]                ; 0057d7d2
    POP EBP                             ; 0057d7d5
    POP EDI                             ; 0057d7d6
    POP ESI                             ; 0057d7d7
    POP EBX                             ; 0057d7d8
    RET                                 ; 0057d7d9
    FLD float ptr [EBX + 0xd094]        ; 0057d7da
        ;   Label: LAB_0057d7da
    FLDZ                                ; 0057d7e0
    FCOMPP                              ; 0057d7e2
    FNSTSW AX                           ; 0057d7e4
    SAHF                                ; 0057d7e6
    JA 0x0057d75c                       ; 0057d7e7
        ;   XREF to: 0057d75c (CONDITIONAL_JUMP)  ; LAB_0057d75c
    FLD float ptr [EBX + 0xd094]        ; 0057d7ed
    FSUB float ptr [EBP + 0x92]         ; 0057d7f3
    FSTP float ptr [EBX + 0xd094]       ; 0057d7f9
    JMP 0x0057d75c                      ; 0057d7ff
        ;   XREF to: 0057d75c (UNCONDITIONAL_JUMP)  ; LAB_0057d75c
    MOV EDX,dword ptr [EBX + 0xd064]    ; 0057d804
        ;   Label: LAB_0057d804
    PUSH EDX                            ; 0057d80a
    PUSH EDI                            ; 0057d80b
    LEA ESI,[EBP + 0xfffffda2]          ; 0057d80c
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0057d812
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA EDI,[EBP + 0xfffffd8a]          ; 0057d817
    ADD ESP,0x8                         ; 0057d81d
    LEA EAX,[EBP + 0xfffffd8a]          ; 0057d820
    LEA ESI,[EBP + 0xfffffda2]          ; 0057d826
    PUSH EAX                            ; 0057d82c
    MOVSD ES:EDI,ESI                    ; 0057d82d
    MOVSD ES:EDI,ESI                    ; 0057d82e
    MOVSD ES:EDI,ESI                    ; 0057d82f
    PUSH EBX                            ; 0057d830
    LEA ESI,[EBP + 0xfffffdae]          ; 0057d831
    CALL core_actor.cpp_FUN_00408b80    ; 0057d837
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057d83c
    LEA EDI,[EBP + 0xfffffece]          ; 0057d83f
    PUSH 0x41400000                     ; 0057d845
    LEA ESI,[EBP + 0xfffffdae]          ; 0057d84a
    PUSH 0x41000000                     ; 0057d850
    MOVSD ES:EDI,ESI                    ; 0057d855
    MOVSD ES:EDI,ESI                    ; 0057d856
    MOVSD ES:EDI,ESI                    ; 0057d857
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057d858
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0057d85d
    ADD ESP,0x8                         ; 0057d860
    FLD float ptr [EBP + 0x76]          ; 0057d863
    FMUL double ptr [0x005d7b1b]        ; 0057d866 | DAT_005d7b1b
    PUSH 0x0                            ; 0057d86c
    CALL crt_math.c_round_FUN_005a3120  ; 0057d86e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x32]        ; 0057d873
    MOV ESI,dword ptr [EBP + 0x32]      ; 0057d876
    PUSH ESI                            ; 0057d879
    PUSH 0x0                            ; 0057d87a
    LEA EAX,[EBP + 0xfffffece]          ; 0057d87c
    PUSH EAX                            ; 0057d882
    MOV EDI,dword ptr [0x005fed24]      ; 0057d883 | g_CGorePtr
    PUSH EDI                            ; 0057d889
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 0057d88a
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0057d88f
    JMP 0x0057d78c                      ; 0057d892
        ;   XREF to: 0057d78c (UNCONDITIONAL_JUMP)  ; LAB_0057d78c
    PUSH 0x1                            ; 0057d897
        ;   Label: LAB_0057d897
    PUSH EBX                            ; 0057d899
    MOV EAX,[0x00600530]                ; 0057d89a | DAT_00600530
    PUSH EAX                            ; 0057d89f | DAT_01d81080
    CALL core_mission.cpp_FUN_004f6f10  ; 0057d8a0
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    ADD ESP,0xc                         ; 0057d8a5
    JMP 0x0057d78c                      ; 0057d8a8
        ;   XREF to: 0057d78c (UNCONDITIONAL_JUMP)  ; LAB_0057d78c
    JBE 0x0057d804                      ; 0057d8ad
        ;   XREF to: 0057d804 (CONDITIONAL_JUMP)  ; LAB_0057d804
        ;   Label: LAB_0057d8ad
    CMP EAX,0x29a                       ; 0057d8b3
    JZ 0x0057d897                       ; 0057d8b8
        ;   XREF to: 0057d897 (CONDITIONAL_JUMP)  ; LAB_0057d897
    PUSH ESI                            ; 0057d8ba
    PUSH EBX                            ; 0057d8bb
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0057d8bc
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0057d8c1
    JMP 0x0057d78c                      ; 0057d8c4
        ;   XREF to: 0057d78c (UNCONDITIONAL_JUMP)  ; LAB_0057d78c
    FLD float ptr [EBP + 0x92]          ; 0057d8c9
        ;   Label: LAB_0057d8c9
    FMUL float ptr [EBX + 0xcdcc]       ; 0057d8cf
    SUB ESP,0x4                         ; 0057d8d5
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0057d8d8
    MOV dword ptr [EBX + 0x2524],EAX    ; 0057d8de
    FSTP float ptr [ESP]                ; 0057d8e4
    PUSH EBX                            ; 0057d8e7
    CALL core_charactr.cpp_FUN_00434850 ; 0057d8e8
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    MOV ESI,dword ptr [EBX + 0xd054]    ; 0057d8ed
    ADD ESP,0x8                         ; 0057d8f3
    CMP ESI,0x2                         ; 0057d8f6
    JNZ 0x0057d911                      ; 0057d8f9
        ;   XREF to: 0057d911 (CONDITIONAL_JUMP)  ; LAB_0057d911
    FLD float ptr [EBX + 0x2528]        ; 0057d8fb
    FLD ST0                             ; 0057d901
    FMUL double ptr [0x005d7af3]        ; 0057d903 | DAT_005d7af3
    FSTP ST1                            ; 0057d909
    FSTP float ptr [EBX + 0x2528]       ; 0057d90b
    LEA EDI,[EBX + 0x158]               ; 0057d911
        ;   Label: LAB_0057d911
    PUSH EDI                            ; 0057d917
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0057d918
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0057d91d
    PUSH dword ptr [EBP + 0x92]         ; 0057d920
    MOV ESI,dword ptr [EAX + 0x24]      ; 0057d926
    PUSH EBX                            ; 0057d929
    MOV dword ptr [EBP + 0x6e],ESI      ; 0057d92a
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 0057d92d
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057d932
    TEST EAX,EAX                        ; 0057d935
    JZ 0x0057dc52                       ; 0057d937
        ;   XREF to: 0057dc52 (CONDITIONAL_JUMP)  ; LAB_0057dc52
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0057d93d
    CMP EAX,0x2                         ; 0057d943
    JNC 0x0057dc42                      ; 0057d946
        ;   XREF to: 0057dc42 (CONDITIONAL_JUMP)  ; LAB_0057dc42
    CMP EAX,0x1                         ; 0057d94c
    JNZ 0x0057dc49                      ; 0057d94f
        ;   XREF to: 0057dc49 (CONDITIONAL_JUMP)  ; LAB_0057dc49
    CMP ESI,0xe                         ; 0057d955
    JNZ 0x0057dbf6                      ; 0057d958
        ;   XREF to: 0057dbf6 (CONDITIONAL_JUMP)  ; LAB_0057dbf6
    PUSH 0x1                            ; 0057d95e
        ;   Label: LAB_0057d95e
    PUSH 0xf                            ; 0057d960
    LEA EAX,[EBX + 0x158]               ; 0057d962
        ;   Label: LAB_0057d962
    PUSH EAX                            ; 0057d968
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057d969
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0057d969
    ADD ESP,0xc                         ; 0057d96e
        ;   Label: LAB_0057d96e
    LEA EAX,[EBX + 0x249c]              ; 0057d971
        ;   Label: LAB_0057d971
    MOV dword ptr [EAX + 0x8],0x0       ; 0057d977
    MOV EDX,dword ptr [EAX + 0x8]       ; 0057d97e
    MOV dword ptr [EAX + 0x4],EDX       ; 0057d981
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057d984
    MOV dword ptr [EAX],EDX             ; 0057d987
    CMP dword ptr [EBP + 0x6e],0x13     ; 0057d989
        ;   Label: LAB_0057d989
    JNZ 0x0057edb2                      ; 0057d98d
        ;   XREF to: 0057edb2 (CONDITIONAL_JUMP)  ; LAB_0057edb2
    CMP dword ptr [EBX + 0x27bc],0x0    ; 0057d993
    JZ 0x0057edb2                       ; 0057d99a
        ;   XREF to: 0057edb2 (CONDITIONAL_JUMP)  ; LAB_0057edb2
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 0057d9a0
    PUSH EAX                            ; 0057d9a6
    CALL sound_sndmain.cpp_FUN_00556700 ; 0057d9a7
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d9ac
    TEST EAX,EAX                        ; 0057d9af
    JZ 0x0057ed95                       ; 0057d9b1
        ;   XREF to: 0057ed95 (CONDITIONAL_JUMP)  ; LAB_0057ed95
    MOV EDX,0x3f800000                  ; 0057d9b7
        ;   Label: LAB_0057d9b7
    MOV ECX,dword ptr [EBX + 0xd054]    ; 0057d9bc
    MOV dword ptr [EBP + 0x5a],EDX      ; 0057d9c2
    TEST ECX,ECX                        ; 0057d9c5
    JNZ 0x0057d9d0                      ; 0057d9c7
        ;   XREF to: 0057d9d0 (CONDITIONAL_JUMP)  ; LAB_0057d9d0
    MOV dword ptr [EBP + 0x5a],0x3f400000 ; 0057d9c9
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0057d9d0
        ;   Label: LAB_0057d9d0
    CMP EDI,0xe                         ; 0057d9d3
    JNZ 0x0057edc6                      ; 0057d9d6
        ;   XREF to: 0057edc6 (CONDITIONAL_JUMP)  ; LAB_0057edc6
    FLD float ptr [EBP + 0x5a]          ; 0057d9dc
        ;   Label: LAB_0057d9dc
    FMUL double ptr [0x005d7b33]        ; 0057d9df | DAT_005d7b33
    FSTP float ptr [EBX + 0x3270]       ; 0057d9e5
        ;   Label: LAB_0057d9e5
    FLD float ptr [EBX + 0xcde0]        ; 0057d9eb
    FLDZ                                ; 0057d9f1
    FCOMPP                              ; 0057d9f3
    FNSTSW AX                           ; 0057d9f5
    SAHF                                ; 0057d9f7
    JNC 0x0057da0c                      ; 0057d9f8
        ;   XREF to: 0057da0c (CONDITIONAL_JUMP)  ; LAB_0057da0c
    FLD float ptr [EBX + 0xcde0]        ; 0057d9fa
    FSUB float ptr [EBP + 0x92]         ; 0057da00
    FSTP float ptr [EBX + 0xcde0]       ; 0057da06
    LEA EAX,[EBX + 0x158]               ; 0057da0c
        ;   Label: LAB_0057da0c
    PUSH EAX                            ; 0057da12
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0057da13
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057da18
    ADD ESP,0x4                         ; 0057da1b
    CMP EAX,0xd                         ; 0057da1e
    JZ 0x0057eddd                       ; 0057da21
        ;   XREF to: 0057eddd (CONDITIONAL_JUMP)  ; LAB_0057eddd
    TEST EAX,EAX                        ; 0057da27
    JZ 0x0057eddd                       ; 0057da29
        ;   XREF to: 0057eddd (CONDITIONAL_JUMP)  ; LAB_0057eddd
    CMP EAX,0xe                         ; 0057da2f
    JZ 0x0057eddd                       ; 0057da32
        ;   XREF to: 0057eddd (CONDITIONAL_JUMP)  ; LAB_0057eddd
    CMP EAX,0x14                        ; 0057da38
    JZ 0x0057eddd                       ; 0057da3b
        ;   XREF to: 0057eddd (CONDITIONAL_JUMP)  ; LAB_0057eddd
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0057da41
        ;   Label: LAB_0057da41
    TEST ECX,ECX                        ; 0057da47
    JZ 0x0057da75                       ; 0057da49
        ;   XREF to: 0057da75 (CONDITIONAL_JUMP)  ; LAB_0057da75
    PUSH ECX                            ; 0057da4b
    MOV EDX,dword ptr [ECX + 0x154]     ; 0057da4c
    CALL dword ptr [EDX + 0xf4]         ; 0057da52
    ADD ESP,0x4                         ; 0057da58
    CMP EAX,EBX                         ; 0057da5b
    JNZ 0x0057da75                      ; 0057da5d
        ;   XREF to: 0057da75 (CONDITIONAL_JUMP)  ; LAB_0057da75
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0057da5f
    PUSH ESI                            ; 0057da65
    MOV EDI,dword ptr [0x00603b28]      ; 0057da66 | g_CDemonSetPtr
    PUSH EDI                            ; 0057da6c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0057da6d
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0057da72
    PUSH dword ptr [EBP + 0x92]         ; 0057da75
        ;   Label: LAB_0057da75
    PUSH EBX                            ; 0057da7b
    LEA ESI,[EBX + 0x2518]              ; 0057da7c
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0057da82
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 0057da87
    FMUL float ptr [EBP + 0x92]         ; 0057da89
    FLD float ptr [ESI + 0x4]           ; 0057da8f
    FMUL float ptr [EBP + 0x92]         ; 0057da92
    FLD float ptr [ESI + 0x8]           ; 0057da98
    FMUL float ptr [EBP + 0x92]         ; 0057da9b
    LEA EDI,[EBP + -0x72]               ; 0057daa1
    LEA ESI,[EBP + 0xffffff5e]          ; 0057daa4
    FXCH ST2                            ; 0057daaa
    FSTP float ptr [EBP + 0xffffff5e]   ; 0057daac
    FSTP float ptr [EBP + 0xffffff62]   ; 0057dab2
    FSTP float ptr [EBP + 0xffffff66]   ; 0057dab8
    MOVSD ES:EDI,ESI                    ; 0057dabe
    MOVSD ES:EDI,ESI                    ; 0057dabf
    MOVSD ES:EDI,ESI                    ; 0057dac0
    LEA EAX,[EBX + 0x249c]              ; 0057dac1
    FLD float ptr [EBP + -0x72]         ; 0057dac7
    FLD float ptr [EBP + -0x6e]         ; 0057daca
    FLD float ptr [EBP + -0x6a]         ; 0057dacd
    LEA EDI,[EBP + 0xfffffe0e]          ; 0057dad0
    LEA ESI,[EBP + 0xffffff3a]          ; 0057dad6
    FXCH ST2                            ; 0057dadc
    FADD float ptr [EAX]                ; 0057dade
    FXCH                                ; 0057dae0
    FADD float ptr [EAX + 0x4]          ; 0057dae2
    FXCH ST2                            ; 0057dae5
    FADD float ptr [EAX + 0x8]          ; 0057dae7
    FXCH                                ; 0057daea
    FSTP float ptr [EBP + 0xffffff3a]   ; 0057daec
    FXCH                                ; 0057daf2
    FSTP float ptr [EBP + 0xffffff3e]   ; 0057daf4
    FSTP float ptr [EBP + 0xffffff42]   ; 0057dafa
    MOVSD ES:EDI,ESI                    ; 0057db00
    MOVSD ES:EDI,ESI                    ; 0057db01
    MOVSD ES:EDI,ESI                    ; 0057db02
    LEA EDX,[EBX + 0x250c]              ; 0057db03
    FLD float ptr [EBP + 0xfffffe0e]    ; 0057db09
    FLD float ptr [EBP + 0xfffffe12]    ; 0057db0f
    FLD float ptr [EBP + 0xfffffe16]    ; 0057db15
    LEA EDI,[EBP + -0x12]               ; 0057db1b
    LEA ESI,[EBP + 0xffffff22]          ; 0057db1e
    FXCH ST2                            ; 0057db24
    FADD float ptr [EDX]                ; 0057db26
    FXCH                                ; 0057db28
    FADD float ptr [EDX + 0x4]          ; 0057db2a
    FXCH ST2                            ; 0057db2d
    FADD float ptr [EDX + 0x8]          ; 0057db2f
    FXCH                                ; 0057db32
    FSTP float ptr [EBP + 0xffffff22]   ; 0057db34
    FXCH                                ; 0057db3a
    FSTP float ptr [EBP + 0xffffff26]   ; 0057db3c
    FSTP float ptr [EBP + 0xffffff2a]   ; 0057db42
    MOVSD ES:EDI,ESI                    ; 0057db48
    MOVSD ES:EDI,ESI                    ; 0057db49
    MOVSD ES:EDI,ESI                    ; 0057db4a
    MOV dword ptr [EAX + 0x8],0x0       ; 0057db4b
    ADD ESP,0x8                         ; 0057db52
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057db55
    MOV dword ptr [EAX + 0x4],ECX       ; 0057db58
    MOV ECX,dword ptr [EAX + 0x4]       ; 0057db5b
    MOV dword ptr [EAX],ECX             ; 0057db5e
    MOV dword ptr [EDX + 0x8],0x0       ; 0057db60
    LEA EAX,[EBP + -0x12]               ; 0057db67
    FLD float ptr [EDX + 0x8]           ; 0057db6a
    PUSH EAX                            ; 0057db6d
    FST float ptr [EDX + 0x4]           ; 0057db6e
    PUSH EBX                            ; 0057db71
    FSTP float ptr [EDX]                ; 0057db72
    CALL core_charactr.cpp_FUN_0042c230 ; 0057db74
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0057db79
    PUSH EBX                            ; 0057db7c
        ;   Label: LAB_0057db7c
    CALL core_charactr.cpp_FUN_0042cd30 ; 0057db7d
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0057db82
    LEA EAX,[EBX + 0x158]               ; 0057db85
    PUSH EAX                            ; 0057db8b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0057db8c
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057db91
    PUSH dword ptr [EBP + 0x92]         ; 0057db94
    PUSH EBX                            ; 0057db9a
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0057db9b
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057dba0
    PUSH EBX                            ; 0057dba3
    CALL core_werewolf.cpp_FUN_0057fad0 ; 0057dba4
        ;   XREF to: 0057fad0 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_FUN_0057fad0()
    FLD float ptr [EBP + 0x92]          ; 0057dba9
    FMUL double ptr [0x005d7b3b]        ; 0057dbaf | DAT_005d7b3b
    FLD float ptr [EBX + 0xd098]        ; 0057dbb5
    FXCH                                ; 0057dbbb
    FADD ST0,ST1                        ; 0057dbbd
    ADD ESP,0x4                         ; 0057dbbf
    FSTP ST1                            ; 0057dbc2
    FSTP float ptr [EBX + 0xd098]       ; 0057dbc4
    LEA ESP,[EBP + 0x7a]                ; 0057dbca
    POP EBP                             ; 0057dbcd
    POP EDI                             ; 0057dbce
    POP ESI                             ; 0057dbcf
    POP EBX                             ; 0057dbd0
    RET                                 ; 0057dbd1
    PUSH 0x1                            ; 0057dbd2
        ;   Label: LAB_0057dbd2
    PUSH 0x0                            ; 0057dbd4
    PUSH EDI                            ; 0057dbd6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057dbd7
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057dbdc
    PUSH EBX                            ; 0057dbdf
    PUSH 0x5d7a43                       ; 0057dbe0 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005f1690]      ; 0057dbe5 | g_CConsolePtr
    PUSH ESI                            ; 0057dbeb | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0057dbec
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0057d96e                      ; 0057dbf1
        ;   XREF to: 0057d96e (UNCONDITIONAL_JUMP)  ; LAB_0057d96e
    CMP ESI,0xf                         ; 0057dbf6
        ;   Label: LAB_0057dbf6
    JZ 0x0057d95e                       ; 0057dbf9
        ;   XREF to: 0057d95e (CONDITIONAL_JUMP)  ; LAB_0057d95e
    PUSH EAX                            ; 0057dbff
    PUSH EAX                            ; 0057dc00
    PUSH EDI                            ; 0057dc01
    JMP 0x0057d969                      ; 0057dc02
        ;   XREF to: 0057d969 (UNCONDITIONAL_JUMP)  ; LAB_0057d969
    CMP ESI,0xe                         ; 0057dc07
        ;   Label: LAB_0057dc07
    JZ 0x0057d95e                       ; 0057dc0a
        ;   XREF to: 0057d95e (CONDITIONAL_JUMP)  ; LAB_0057d95e
    CMP ESI,0xf                         ; 0057dc10
    JZ 0x0057d95e                       ; 0057dc13
        ;   XREF to: 0057d95e (CONDITIONAL_JUMP)  ; LAB_0057d95e
    FLD float ptr [EBX + 0x2508]        ; 0057dc19
    FABS                                ; 0057dc1f
    FLD float ptr [EBX + 0x2528]        ; 0057dc21
    FCOMPP                              ; 0057dc27
    FNSTSW AX                           ; 0057dc29
    SAHF                                ; 0057dc2b
    JBE 0x0057dc38                      ; 0057dc2c
        ;   XREF to: 0057dc38 (CONDITIONAL_JUMP)  ; LAB_0057dc38
    PUSH 0x1                            ; 0057dc2e
    PUSH 0x8                            ; 0057dc30
    PUSH EDI                            ; 0057dc32
    JMP 0x0057d969                      ; 0057dc33
        ;   XREF to: 0057d969 (UNCONDITIONAL_JUMP)  ; LAB_0057d969
    PUSH 0x1                            ; 0057dc38
        ;   Label: LAB_0057dc38
    PUSH 0x1                            ; 0057dc3a
    PUSH EDI                            ; 0057dc3c
    JMP 0x0057d969                      ; 0057dc3d
        ;   XREF to: 0057d969 (UNCONDITIONAL_JUMP)  ; LAB_0057d969
    JBE 0x0057dc07                      ; 0057dc42
        ;   XREF to: 0057dc07 (CONDITIONAL_JUMP)  ; LAB_0057dc07
        ;   Label: LAB_0057dc42
    CMP EAX,0x3                         ; 0057dc44
    JZ 0x0057dbd2                       ; 0057dc47
        ;   XREF to: 0057dbd2 (CONDITIONAL_JUMP)  ; LAB_0057dbd2
    PUSH 0x1                            ; 0057dc49
        ;   Label: LAB_0057dc49
    PUSH 0x0                            ; 0057dc4b
    JMP 0x0057d962                      ; 0057dc4d
        ;   XREF to: 0057d962 (UNCONDITIONAL_JUMP)  ; LAB_0057d962
    PUSH EBX                            ; 0057dc52
        ;   Label: LAB_0057dc52
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057dc53
    CALL dword ptr [EAX + 0x10c]        ; 0057dc59
    ADD ESP,0x4                         ; 0057dc5f
    TEST EAX,EAX                        ; 0057dc62
    JNZ 0x0057de95                      ; 0057dc64
        ;   XREF to: 0057de95 (CONDITIONAL_JUMP)  ; LAB_0057de95
    MOV EAX,[0x01d5ba14]                ; 0057dc6a | DAT_01d5ba14
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0057dc6f
    CMP EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0057dc75
    JNZ 0x0057de95                      ; 0057dc7c
        ;   XREF to: 0057de95 (CONDITIONAL_JUMP)  ; LAB_0057de95
    LEA EAX,[EBP + 0xfffffbb6]          ; 0057dc82
    PUSH EAX                            ; 0057dc88
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0057dc89
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0057dc8e
    PUSH 0x41700000                     ; 0057dc91
    PUSH 0x40e00000                     ; 0057dc96
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057dc9b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0057dca0
    ADD ESP,0x8                         ; 0057dca3
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 0057dca6
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 0057dcac
    LEA EAX,[EBP + 0xfffffbb6]          ; 0057dcb2
    FLD float ptr [EBP + 0x76]          ; 0057dcb8
    PUSH EAX                            ; 0057dcbb
    FSTP float ptr [EBP + 0xfffffbba]   ; 0057dcbc
    SUB ESP,0x4                         ; 0057dcc2
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 0057dcc5
    MOV dword ptr [ESP],EAX             ; 0057dccb
    MOV EDX,dword ptr [EBX + 0xd064]    ; 0057dcce
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057dcd4
    SUB EAX,EDX                         ; 0057dcdb
    SHL EAX,0x4                         ; 0057dcdd
    LEA EDX,[EBX + 0xfd8]               ; 0057dce0
    ADD EAX,EDX                         ; 0057dce6
    PUSH EAX                            ; 0057dce8
    LEA ESI,[EBP + 0xfffffd4e]          ; 0057dce9
    PUSH 0x2cfd900                      ; 0057dcef | DAT_02cfd900
    LEA EDI,[EBP + 0xfffffeb6]          ; 0057dcf4
    MOV dword ptr [EBP + 0x62],EDX      ; 0057dcfa
    CALL core_xform.cpp_FUN_00583260    ; 0057dcfd
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057dd02
    LEA EAX,[EBP + 0xfffffeb6]          ; 0057dd05
    LEA ESI,[EBP + 0xfffffd4e]          ; 0057dd0b
    PUSH EAX                            ; 0057dd11
    MOVSD ES:EDI,ESI                    ; 0057dd12
    MOVSD ES:EDI,ESI                    ; 0057dd13
    MOVSD ES:EDI,ESI                    ; 0057dd14
    PUSH EBX                            ; 0057dd15
    LEA ESI,[EBP + 0xffffff2e]          ; 0057dd16
    CALL core_actor.cpp_FUN_00408b80    ; 0057dd1c
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057dd21
    LEA EAX,[EBP + 0xfffffec2]          ; 0057dd24
    PUSH EAX                            ; 0057dd2a
    LEA EDI,[EBP + 0xfffffec2]          ; 0057dd2b
    LEA ESI,[EBP + 0xffffff2e]          ; 0057dd31
    PUSH EBX                            ; 0057dd37
    MOVSD ES:EDI,ESI                    ; 0057dd38
    MOVSD ES:EDI,ESI                    ; 0057dd39
    MOVSD ES:EDI,ESI                    ; 0057dd3a
    CALL core_enemy.cpp_FUN_004893f0    ; 0057dd3b
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0057dd40
    PUSH 0x41700000                     ; 0057dd43
    PUSH 0x40e00000                     ; 0057dd48
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057dd4d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0057dd52
    ADD ESP,0x8                         ; 0057dd55
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 0057dd58
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 0057dd5e
    LEA EAX,[EBP + 0xfffffbb6]          ; 0057dd64
    FLD float ptr [EBP + 0x76]          ; 0057dd6a
    PUSH EAX                            ; 0057dd6d
    FSTP float ptr [EBP + 0xfffffbba]   ; 0057dd6e
    SUB ESP,0x4                         ; 0057dd74
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 0057dd77
    MOV dword ptr [ESP],EAX             ; 0057dd7d
    MOV EDX,dword ptr [EBX + 0xd060]    ; 0057dd80
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057dd86
    SUB EAX,EDX                         ; 0057dd8d
    MOV ECX,dword ptr [EBP + 0x62]      ; 0057dd8f
    SHL EAX,0x4                         ; 0057dd92
    ADD EAX,ECX                         ; 0057dd95
    PUSH EAX                            ; 0057dd97
    PUSH 0x2cfd900                      ; 0057dd98 | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffd96]          ; 0057dd9d
    LEA EDI,[EBP + 0xfffffd7e]          ; 0057dda3
    CALL core_xform.cpp_FUN_00583260    ; 0057dda9
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057ddae
    LEA EAX,[EBP + 0xfffffd7e]          ; 0057ddb1
    LEA ESI,[EBP + 0xfffffd96]          ; 0057ddb7
    PUSH EAX                            ; 0057ddbd
    MOVSD ES:EDI,ESI                    ; 0057ddbe
    MOVSD ES:EDI,ESI                    ; 0057ddbf
    MOVSD ES:EDI,ESI                    ; 0057ddc0
    PUSH EBX                            ; 0057ddc1
    LEA ESI,[EBP + 0xfffffefe]          ; 0057ddc2
    CALL core_actor.cpp_FUN_00408b80    ; 0057ddc8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057ddcd
    LEA EAX,[EBP + 0xfffffeda]          ; 0057ddd0
    PUSH EAX                            ; 0057ddd6
    LEA EDI,[EBP + 0xfffffeda]          ; 0057ddd7
    LEA ESI,[EBP + 0xfffffefe]          ; 0057dddd
    PUSH EBX                            ; 0057dde3
    MOVSD ES:EDI,ESI                    ; 0057dde4
    MOVSD ES:EDI,ESI                    ; 0057dde5
    MOVSD ES:EDI,ESI                    ; 0057dde6
    CALL core_enemy.cpp_FUN_004893f0    ; 0057dde7
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0057ddec
    PUSH 0x41700000                     ; 0057ddef
    PUSH 0x40e00000                     ; 0057ddf4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057ddf9
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0057ddfe
    ADD ESP,0x8                         ; 0057de01
    MOV EAX,dword ptr [EBP + 0x76]      ; 0057de04
    MOV dword ptr [EBP + 0xfffffbba],EAX ; 0057de07
    LEA EAX,[EBP + 0xfffffbb6]          ; 0057de0d
    PUSH EAX                            ; 0057de13
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 0057de14
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 0057de1a
    SUB ESP,0x4                         ; 0057de20
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 0057de23
    MOV dword ptr [ESP],EAX             ; 0057de29
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 0057de2c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057de32
    SUB EAX,EDX                         ; 0057de39
    MOV ESI,dword ptr [EBP + 0x62]      ; 0057de3b
    SHL EAX,0x4                         ; 0057de3e
    ADD EAX,ESI                         ; 0057de41
    PUSH EAX                            ; 0057de43
    PUSH 0x2cfd900                      ; 0057de44 | DAT_02cfd900
    LEA ESI,[EBP + -0x5a]               ; 0057de49
    LEA EDI,[EBP + 0xfffffd42]          ; 0057de4c
    CALL core_xform.cpp_FUN_00583260    ; 0057de52
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057de57
    LEA EAX,[EBP + 0xfffffd42]          ; 0057de5a
    LEA ESI,[EBP + -0x5a]               ; 0057de60
    PUSH EAX                            ; 0057de63
    MOVSD ES:EDI,ESI                    ; 0057de64
    MOVSD ES:EDI,ESI                    ; 0057de65
    MOVSD ES:EDI,ESI                    ; 0057de66
    PUSH EBX                            ; 0057de67
    LEA ESI,[EBP + 0xffffff46]          ; 0057de68
    CALL core_actor.cpp_FUN_00408b80    ; 0057de6e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057de73
    LEA EAX,[EBP + 0xfffffef2]          ; 0057de76
    PUSH EAX                            ; 0057de7c
    LEA EDI,[EBP + 0xfffffef2]          ; 0057de7d
    LEA ESI,[EBP + 0xffffff46]          ; 0057de83
    PUSH EBX                            ; 0057de89
    MOVSD ES:EDI,ESI                    ; 0057de8a
    MOVSD ES:EDI,ESI                    ; 0057de8b
    MOVSD ES:EDI,ESI                    ; 0057de8c
    CALL core_enemy.cpp_FUN_004893f0    ; 0057de8d
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0057de92
    LEA EAX,[EBX + 0xfd8]               ; 0057de95
        ;   Label: LAB_0057de95
    MOV dword ptr [EBP + 0x66],EAX      ; 0057de9b
    MOV EAX,[0x01d5ba14]                ; 0057de9e | DAT_01d5ba14
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0057dea3
    SHL EAX,0x2                         ; 0057dea6
    CMP EDI,0x4                         ; 0057dea9
    JNC 0x0057ec40                      ; 0057deac
        ;   XREF to: 0057ec40 (CONDITIONAL_JUMP)  ; LAB_0057ec40
    CMP EDI,0x1                         ; 0057deb2
    JNC 0x0057ec8e                      ; 0057deb5
        ;   XREF to: 0057ec8e (CONDITIONAL_JUMP)  ; LAB_0057ec8e
    TEST EDI,EDI                        ; 0057debb
    JNZ 0x0057d989                      ; 0057debd
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH dword ptr [EBP + 0x92]         ; 0057dec3
        ;   Label: LAB_0057dec3
    PUSH EBX                            ; 0057dec9
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0057deca
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057decf
    TEST EAX,EAX                        ; 0057ded2
    JZ 0x0057e363                       ; 0057ded4
        ;   XREF to: 0057e363 (CONDITIONAL_JUMP)  ; LAB_0057e363
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0057deda
    LEA EAX,[EBX + 0x158]               ; 0057dedd
    CMP ECX,0xe                         ; 0057dee3
    JNZ 0x0057e351                      ; 0057dee6
        ;   XREF to: 0057e351 (CONDITIONAL_JUMP)  ; LAB_0057e351
    PUSH 0x1                            ; 0057deec
    PUSH 0xf                            ; 0057deee
    PUSH EAX                            ; 0057def0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057def1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057def6
    JMP 0x0057d989                      ; 0057def9
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    MOV ESI,dword ptr [EAX + 0x1d5ba04] ; 0057defe
        ;   Label: LAB_0057defe
    CMP ESI,dword ptr [EBX + 0xcde4]    ; 0057df04
    JNZ 0x0057e051                      ; 0057df0a
        ;   XREF to: 0057e051 (CONDITIONAL_JUMP)  ; LAB_0057e051
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0057df10
        ;   Label: LAB_0057df10
    TEST ESI,ESI                        ; 0057df16
    JZ 0x0057df41                       ; 0057df18
        ;   XREF to: 0057df41 (CONDITIONAL_JUMP)  ; LAB_0057df41
    PUSH ESI                            ; 0057df1a
    MOV EDX,dword ptr [ESI + 0x154]     ; 0057df1b
    CALL dword ptr [EDX + 0x10c]        ; 0057df21
    ADD ESP,0x4                         ; 0057df27
    TEST EAX,EAX                        ; 0057df2a
    JZ 0x0057df41                       ; 0057df2c
        ;   XREF to: 0057df41 (CONDITIONAL_JUMP)  ; LAB_0057df41
    PUSH 0x1                            ; 0057df2e
    PUSH 0x7                            ; 0057df30
    LEA EAX,[EBX + 0x158]               ; 0057df32
    PUSH EAX                            ; 0057df38
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057df39
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057df3e
    MOV EDX,dword ptr [0x01d5ba14]      ; 0057df41 | DAT_01d5ba14
        ;   Label: LAB_0057df41
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0057df47
    CMP EAX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 0057df4d
    JZ 0x0057e013                       ; 0057df54
        ;   XREF to: 0057e013 (CONDITIONAL_JUMP)  ; LAB_0057e013
    LEA EAX,[EBP + 0xfffffc2e]          ; 0057df5a
    PUSH EAX                            ; 0057df60
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0057df61
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0057df66
    PUSH 0x41700000                     ; 0057df69
    PUSH 0x40e00000                     ; 0057df6e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057df73
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0057df78
    MOV dword ptr [EBP + 0xfffffc62],EBX ; 0057df7b
    MOV dword ptr [EBP + 0xfffffc66],EBX ; 0057df81
    ADD ESP,0x8                         ; 0057df87
    FLD float ptr [EBP + 0x76]          ; 0057df8a
    LEA EAX,[EBP + 0xfffffc2e]          ; 0057df8d
    FSTP float ptr [EBP + 0xfffffc32]   ; 0057df93
    MOV EDX,dword ptr [EBX + 0xd064]    ; 0057df99
    PUSH EAX                            ; 0057df9f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057dfa0
    SUB EAX,EDX                         ; 0057dfa7
    MOV EDX,EAX                         ; 0057dfa9
    SHL EDX,0x4                         ; 0057dfab
    LEA EAX,[EBX + 0xfd8]               ; 0057dfae
    ADD EAX,EDX                         ; 0057dfb4
    PUSH 0x3ecccccd                     ; 0057dfb6
    PUSH EAX                            ; 0057dfbb
    PUSH 0x2cfd900                      ; 0057dfbc | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff0a]          ; 0057dfc1
    LEA EDI,[EBP + 0xfffffdea]          ; 0057dfc7
    CALL core_xform.cpp_FUN_00583260    ; 0057dfcd
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057dfd2
    LEA EAX,[EBP + 0xfffffdea]          ; 0057dfd5
    LEA ESI,[EBP + 0xffffff0a]          ; 0057dfdb
    PUSH EAX                            ; 0057dfe1
    MOVSD ES:EDI,ESI                    ; 0057dfe2
    MOVSD ES:EDI,ESI                    ; 0057dfe3
    MOVSD ES:EDI,ESI                    ; 0057dfe4
    PUSH EBX                            ; 0057dfe5
    LEA ESI,[EBP + 0xffffff76]          ; 0057dfe6
    CALL core_actor.cpp_FUN_00408b80    ; 0057dfec
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057dff1
    LEA EAX,[EBP + 0xfffffdf6]          ; 0057dff4
    PUSH EAX                            ; 0057dffa
    LEA EDI,[EBP + 0xfffffdf6]          ; 0057dffb
    LEA ESI,[EBP + 0xffffff76]          ; 0057e001
    PUSH EBX                            ; 0057e007
    MOVSD ES:EDI,ESI                    ; 0057e008
    MOVSD ES:EDI,ESI                    ; 0057e009
    MOVSD ES:EDI,ESI                    ; 0057e00a
    CALL core_enemy.cpp_FUN_004893f0    ; 0057e00b
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0057e010
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0057e013
        ;   Label: LAB_0057e013
    TEST ESI,ESI                        ; 0057e019
    JZ 0x0057d989                       ; 0057e01b
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH ESI                            ; 0057e021
    MOV EDX,dword ptr [ESI + 0x154]     ; 0057e022
    CALL dword ptr [EDX + 0x10c]        ; 0057e028
    ADD ESP,0x4                         ; 0057e02e
    TEST EAX,EAX                        ; 0057e031
    JZ 0x0057d989                       ; 0057e033
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH 0x1                            ; 0057e039
    PUSH 0x7                            ; 0057e03b
    LEA EAX,[EBX + 0x158]               ; 0057e03d
    PUSH EAX                            ; 0057e043
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e044
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e049
    JMP 0x0057d989                      ; 0057e04c
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    LEA EAX,[EBP + 0xfffffbf2]          ; 0057e051
        ;   Label: LAB_0057e051
    PUSH EAX                            ; 0057e057
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0057e058
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0057e05d
    PUSH 0x41700000                     ; 0057e060
    PUSH 0x40e00000                     ; 0057e065
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057e06a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0057e06f
    MOV dword ptr [EBP + 0xfffffc26],EBX ; 0057e072
    MOV dword ptr [EBP + 0xfffffc2a],EBX ; 0057e078
    ADD ESP,0x8                         ; 0057e07e
    FLD float ptr [EBP + 0x76]          ; 0057e081
    LEA EAX,[EBP + 0xfffffbf2]          ; 0057e084
    FSTP float ptr [EBP + 0xfffffbf6]   ; 0057e08a
    MOV EDX,dword ptr [EBX + 0xd064]    ; 0057e090
    PUSH EAX                            ; 0057e096
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057e097
    SUB EAX,EDX                         ; 0057e09e
    MOV EDI,dword ptr [EBP + 0x66]      ; 0057e0a0
    SHL EAX,0x4                         ; 0057e0a3
    ADD EAX,EDI                         ; 0057e0a6
    PUSH 0x3f800000                     ; 0057e0a8
    PUSH EAX                            ; 0057e0ad
    PUSH 0x2cfd900                      ; 0057e0ae | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffdde]          ; 0057e0b3
    LEA EDI,[EBP + 0xfffffe4a]          ; 0057e0b9
    CALL core_xform.cpp_FUN_00583260    ; 0057e0bf
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057e0c4
    LEA EAX,[EBP + 0xfffffe4a]          ; 0057e0c7
    LEA ESI,[EBP + 0xfffffdde]          ; 0057e0cd
    PUSH EAX                            ; 0057e0d3
    MOVSD ES:EDI,ESI                    ; 0057e0d4
    MOVSD ES:EDI,ESI                    ; 0057e0d5
    MOVSD ES:EDI,ESI                    ; 0057e0d6
    PUSH EBX                            ; 0057e0d7
    LEA ESI,[EBP + 0xfffffd12]          ; 0057e0d8
    CALL core_actor.cpp_FUN_00408b80    ; 0057e0de
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057e0e3
    LEA EAX,[EBP + 0xfffffd06]          ; 0057e0e6
    PUSH EAX                            ; 0057e0ec
    LEA EDI,[EBP + 0xfffffd06]          ; 0057e0ed
    LEA ESI,[EBP + 0xfffffd12]          ; 0057e0f3
    PUSH EBX                            ; 0057e0f9
    MOVSD ES:EDI,ESI                    ; 0057e0fa
    MOVSD ES:EDI,ESI                    ; 0057e0fb
    MOVSD ES:EDI,ESI                    ; 0057e0fc
    CALL core_enemy.cpp_FUN_004893f0    ; 0057e0fd
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0057e102
    LEA EAX,[EBP + 0xfffffbf2]          ; 0057e105
    MOV EDX,dword ptr [EBX + 0xd060]    ; 0057e10b
    PUSH EAX                            ; 0057e111
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057e112
    SUB EAX,EDX                         ; 0057e119
    MOV EDX,dword ptr [EBP + 0x66]      ; 0057e11b
    SHL EAX,0x4                         ; 0057e11e
    ADD EAX,EDX                         ; 0057e121
    PUSH 0x3f800000                     ; 0057e123
    PUSH EAX                            ; 0057e128
    PUSH 0x2cfd900                      ; 0057e129 | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffd2a]          ; 0057e12e
    LEA EDI,[EBP + -0x4e]               ; 0057e134
    CALL core_xform.cpp_FUN_00583260    ; 0057e137
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057e13c
    LEA EAX,[EBP + -0x4e]               ; 0057e13f
    LEA ESI,[EBP + 0xfffffd2a]          ; 0057e142
    PUSH EAX                            ; 0057e148
    MOVSD ES:EDI,ESI                    ; 0057e149
    MOVSD ES:EDI,ESI                    ; 0057e14a
    MOVSD ES:EDI,ESI                    ; 0057e14b
    PUSH EBX                            ; 0057e14c
    LEA ESI,[EBP + 0xfffffe26]          ; 0057e14d
    CALL core_actor.cpp_FUN_00408b80    ; 0057e153
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057e158
    LEA EAX,[EBP + -0x42]               ; 0057e15b
    PUSH EAX                            ; 0057e15e
    LEA EDI,[EBP + -0x42]               ; 0057e15f
    LEA ESI,[EBP + 0xfffffe26]          ; 0057e162
    PUSH EBX                            ; 0057e168
    MOVSD ES:EDI,ESI                    ; 0057e169
    MOVSD ES:EDI,ESI                    ; 0057e16a
    MOVSD ES:EDI,ESI                    ; 0057e16b
    CALL core_enemy.cpp_FUN_004893f0    ; 0057e16c
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0057e171
    LEA EAX,[EBP + 0xfffffbf2]          ; 0057e174
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 0057e17a
    PUSH EAX                            ; 0057e180
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057e181
    SUB EAX,EDX                         ; 0057e188
    MOV ECX,dword ptr [EBP + 0x66]      ; 0057e18a
    SHL EAX,0x4                         ; 0057e18d
    ADD EAX,ECX                         ; 0057e190
    PUSH 0x3f800000                     ; 0057e192
    PUSH EAX                            ; 0057e197
    PUSH 0x2cfd900                      ; 0057e198 | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffd5a]          ; 0057e19d
    LEA EDI,[EBP + 0xfffffe92]          ; 0057e1a3
    CALL core_xform.cpp_FUN_00583260    ; 0057e1a9
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057e1ae
    LEA EAX,[EBP + 0xfffffe92]          ; 0057e1b1
    LEA ESI,[EBP + 0xfffffd5a]          ; 0057e1b7
    PUSH EAX                            ; 0057e1bd
    MOVSD ES:EDI,ESI                    ; 0057e1be
    MOVSD ES:EDI,ESI                    ; 0057e1bf
    MOVSD ES:EDI,ESI                    ; 0057e1c0
    PUSH EBX                            ; 0057e1c1
    LEA ESI,[EBP + 0xfffffd72]          ; 0057e1c2
    CALL core_actor.cpp_FUN_00408b80    ; 0057e1c8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057e1cd
    LEA EAX,[EBP + 0xfffffcfa]          ; 0057e1d0
    PUSH EAX                            ; 0057e1d6
    LEA EDI,[EBP + 0xfffffcfa]          ; 0057e1d7
    LEA ESI,[EBP + 0xfffffd72]          ; 0057e1dd
    PUSH EBX                            ; 0057e1e3
    MOVSD ES:EDI,ESI                    ; 0057e1e4
    MOVSD ES:EDI,ESI                    ; 0057e1e5
    MOVSD ES:EDI,ESI                    ; 0057e1e6
    CALL core_enemy.cpp_FUN_004893f0    ; 0057e1e7
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0057e1ec
    JMP 0x0057df10                      ; 0057e1ef
        ;   XREF to: 0057df10 (UNCONDITIONAL_JUMP)  ; LAB_0057df10
    LEA EAX,[EBP + 0xfffffca6]          ; 0057e1f4
        ;   Label: LAB_0057e1f4
    PUSH EAX                            ; 0057e1fa
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0057e1fb
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0057e200
    PUSH 0x41700000                     ; 0057e203
    PUSH 0x40e00000                     ; 0057e208
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057e20d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0057e212
    MOV dword ptr [EBP + 0xfffffcda],EBX ; 0057e215
    MOV dword ptr [EBP + 0xfffffcde],EBX ; 0057e21b
    ADD ESP,0x8                         ; 0057e221
    FLD float ptr [EBP + 0x76]          ; 0057e224
    LEA EAX,[EBP + 0xfffffca6]          ; 0057e227
    FSTP float ptr [EBP + 0xfffffcaa]   ; 0057e22d
    MOV EDX,dword ptr [EBX + 0xd060]    ; 0057e233
    PUSH EAX                            ; 0057e239
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057e23a
    SUB EAX,EDX                         ; 0057e241
    MOV EDI,dword ptr [EBP + 0x66]      ; 0057e243
    SHL EAX,0x4                         ; 0057e246
    ADD EAX,EDI                         ; 0057e249
    PUSH 0x3ecccccd                     ; 0057e24b
    PUSH EAX                            ; 0057e250
    PUSH 0x2cfd900                      ; 0057e251 | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff16]          ; 0057e256
    LEA EDI,[EBP + 0xffffff52]          ; 0057e25c
    CALL core_xform.cpp_FUN_00583260    ; 0057e262
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057e267
    LEA EAX,[EBP + 0xffffff52]          ; 0057e26a
    LEA ESI,[EBP + 0xffffff16]          ; 0057e270
    PUSH EAX                            ; 0057e276
    MOVSD ES:EDI,ESI                    ; 0057e277
    MOVSD ES:EDI,ESI                    ; 0057e278
    MOVSD ES:EDI,ESI                    ; 0057e279
    PUSH EBX                            ; 0057e27a
    LEA ESI,[EBP + -0x6]                ; 0057e27b
    CALL core_actor.cpp_FUN_00408b80    ; 0057e27e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057e283
    LEA EAX,[EBP + -0x1e]               ; 0057e286
    PUSH EAX                            ; 0057e289
    LEA EDI,[EBP + -0x1e]               ; 0057e28a
    LEA ESI,[EBP + -0x6]                ; 0057e28d
    PUSH EBX                            ; 0057e290
    MOVSD ES:EDI,ESI                    ; 0057e291
    MOVSD ES:EDI,ESI                    ; 0057e292
    MOVSD ES:EDI,ESI                    ; 0057e293
    CALL core_enemy.cpp_FUN_004893f0    ; 0057e294
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0057e299
    ADD ESP,0x10                        ; 0057e29f
    TEST EAX,EAX                        ; 0057e2a2
    JZ 0x0057d989                       ; 0057e2a4
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH EAX                            ; 0057e2aa
    MOV EDX,dword ptr [EAX + 0x154]     ; 0057e2ab
    CALL dword ptr [EDX + 0x10c]        ; 0057e2b1
    ADD ESP,0x4                         ; 0057e2b7
    TEST EAX,EAX                        ; 0057e2ba
    JZ 0x0057d989                       ; 0057e2bc
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH 0x1                            ; 0057e2c2
    PUSH 0x7                            ; 0057e2c4
    MOV EDX,dword ptr [EBP + 0x52]      ; 0057e2c6
    PUSH EDX                            ; 0057e2c9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e2ca
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e2cf
    JMP 0x0057d989                      ; 0057e2d2
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    MOV EDI,dword ptr [EBX + 0xcdd0]    ; 0057e2d7
        ;   Label: LAB_0057e2d7
    TEST EDI,EDI                        ; 0057e2dd
    JNZ 0x0057d989                      ; 0057e2df
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    CMP dword ptr [EBX + 0xdc],0x0      ; 0057e2e5
    JNZ 0x0057d989                      ; 0057e2ec
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH EDI                            ; 0057e2f2
    PUSH EDX                            ; 0057e2f3
    LEA ESI,[EBP + -0x36]               ; 0057e2f4
    LEA EDI,[EBP + 0xfffffe1a]          ; 0057e2f7
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0057e2fd
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0057e302
    LEA EAX,[EBP + 0xfffffe1a]          ; 0057e305
    LEA ESI,[EBP + -0x36]               ; 0057e30b
    PUSH EAX                            ; 0057e30e
    MOVSD ES:EDI,ESI                    ; 0057e30f
    MOVSD ES:EDI,ESI                    ; 0057e310
    MOVSD ES:EDI,ESI                    ; 0057e311
    PUSH EBX                            ; 0057e312
    LEA ESI,[EBP + 0xfffffe32]          ; 0057e313
    CALL core_actor.cpp_FUN_00408b80    ; 0057e319
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057e31e
    PUSH 0x0                            ; 0057e321
    LEA EAX,[EBP + -0x2a]               ; 0057e323
    LEA EDI,[EBP + -0x2a]               ; 0057e326
    PUSH EAX                            ; 0057e329
    MOV ECX,dword ptr [0x005fed24]      ; 0057e32a | g_CGorePtr
    LEA ESI,[EBP + 0xfffffe32]          ; 0057e330
    PUSH ECX                            ; 0057e336
    MOVSD ES:EDI,ESI                    ; 0057e337
    MOVSD ES:EDI,ESI                    ; 0057e338
    MOVSD ES:EDI,ESI                    ; 0057e339
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 0057e33a
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0057e33f
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 0057e342
    JMP 0x0057d989                      ; 0057e34c
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH 0x1                            ; 0057e351
        ;   Label: LAB_0057e351
    PUSH 0x1                            ; 0057e353
    PUSH EAX                            ; 0057e355
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e356
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e35b
    JMP 0x0057d989                      ; 0057e35e
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH dword ptr [EBP + 0x92]         ; 0057e363
        ;   Label: LAB_0057e363
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057e369
    PUSH EBX                            ; 0057e36f
    CALL dword ptr [EAX + 0x144]        ; 0057e370
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0057e376
    ADD ESP,0x8                         ; 0057e37c
    TEST EDI,EDI                        ; 0057e37f
    JZ 0x0057d989                       ; 0057e381
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    JZ 0x0057e424                       ; 0057e387
        ;   XREF to: 0057e424 (CONDITIONAL_JUMP)  ; LAB_0057e424
    CMP dword ptr [EBX + 0xd080],0x0    ; 0057e38d
    JZ 0x0057e424                       ; 0057e394
        ;   XREF to: 0057e424 (CONDITIONAL_JUMP)  ; LAB_0057e424
    MOV EAX,EDI                         ; 0057e39a
    LEA ESI,[EBP + 0xfffffe7a]          ; 0057e39c
    LEA EDX,[EBX + 0x20]                ; 0057e3a2
    FLD float ptr [EAX + 0x20]          ; 0057e3a5
    FLD float ptr [EAX + 0x24]          ; 0057e3a8
    FLD float ptr [EAX + 0x28]          ; 0057e3ab
    LEA EDI,[EBP + 0xfffffce2]          ; 0057e3ae
    FXCH ST2                            ; 0057e3b4
    FSUB float ptr [EDX]                ; 0057e3b6
    FXCH                                ; 0057e3b8
    FSUB float ptr [EDX + 0x4]          ; 0057e3ba
    FXCH ST2                            ; 0057e3bd
    FSUB float ptr [EDX + 0x8]          ; 0057e3bf
    FXCH                                ; 0057e3c2
    FSTP float ptr [EBP + 0xfffffe7a]   ; 0057e3c4
    FXCH                                ; 0057e3ca
    FSTP float ptr [EBP + 0xfffffe7e]   ; 0057e3cc
    FSTP float ptr [EBP + 0xfffffe82]   ; 0057e3d2
    MOVSD ES:EDI,ESI                    ; 0057e3d8
    MOVSD ES:EDI,ESI                    ; 0057e3d9
    MOVSD ES:EDI,ESI                    ; 0057e3da
    FLD float ptr [EBP + 0xfffffce6]    ; 0057e3db
    FMUL ST0                            ; 0057e3e1
    FLD float ptr [EBP + 0xfffffce2]    ; 0057e3e3
    FMUL ST0                            ; 0057e3e9
    FADDP                               ; 0057e3eb
    FLD float ptr [EBP + 0xfffffcea]    ; 0057e3ed
    FMUL ST0                            ; 0057e3f3
    FADDP                               ; 0057e3f5
    FSQRT                               ; 0057e3f7
    FST float ptr [EBP + 0x46]          ; 0057e3f9
    FCOMP float ptr [EBX + 0xcddc]      ; 0057e3fc
    FNSTSW AX                           ; 0057e402
    SAHF                                ; 0057e404
    JBE 0x0057e416                      ; 0057e405
        ;   XREF to: 0057e416 (CONDITIONAL_JUMP)  ; LAB_0057e416
    MOV dword ptr [EBX + 0xcde4],0x0    ; 0057e407
        ;   Label: LAB_0057e407
    JMP 0x0057d989                      ; 0057e411
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    FLD float ptr [EBP + 0x46]          ; 0057e416
        ;   Label: LAB_0057e416
    FCOMP double ptr [0x005d7afb]       ; 0057e419 | DAT_005d7afb
    FNSTSW AX                           ; 0057e41f
    SAHF                                ; 0057e421
    JA 0x0057e407                       ; 0057e422
        ;   XREF to: 0057e407 (CONDITIONAL_JUMP)  ; LAB_0057e407
    MOV ECX,dword ptr [0x02cfd81c]      ; 0057e424 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0057e424
    PUSH ECX                            ; 0057e42a
    MOV ESI,dword ptr [EBX + 0xd080]    ; 0057e42b
    PUSH ESI                            ; 0057e431
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057e432
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0057e437
    TEST EAX,EAX                        ; 0057e43a
    JZ 0x0057e444                       ; 0057e43c
        ;   XREF to: 0057e444 (CONDITIONAL_JUMP)  ; LAB_0057e444
    CMP dword ptr [EBP + 0x6e],0xe      ; 0057e43e
    JZ 0x0057e486                       ; 0057e442
        ;   XREF to: 0057e486 (CONDITIONAL_JUMP)  ; LAB_0057e486
    CMP dword ptr [EBX + 0xcde4],0x0    ; 0057e444
        ;   Label: LAB_0057e444
    JZ 0x0057d989                       ; 0057e44b
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH 0x3ecccccd                     ; 0057e451
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0057e456
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0057e45b
    TEST EAX,EAX                        ; 0057e45e
    JNZ 0x0057e49e                      ; 0057e460
        ;   XREF to: 0057e49e (CONDITIONAL_JUMP)  ; LAB_0057e49e
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0057e462
        ;   Label: LAB_0057e462
    LEA EAX,[EBX + 0x158]               ; 0057e465
    CMP EDX,0xe                         ; 0057e46b
    JNZ 0x0057e351                      ; 0057e46e
        ;   XREF to: 0057e351 (CONDITIONAL_JUMP)  ; LAB_0057e351
    PUSH 0x1                            ; 0057e474
    PUSH 0xf                            ; 0057e476
    PUSH EAX                            ; 0057e478
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e479
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e47e
    JMP 0x0057d989                      ; 0057e481
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH 0x1                            ; 0057e486
        ;   Label: LAB_0057e486
    PUSH 0x0                            ; 0057e488
    LEA EAX,[EBX + 0x158]               ; 0057e48a
    PUSH EAX                            ; 0057e490
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e491
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e496
    JMP 0x0057d989                      ; 0057e499
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH EBX                            ; 0057e49e
        ;   Label: LAB_0057e49e
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30 ; 0057e49f
        ;   XREF to: 0057ee30 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0057e4a4
    JMP 0x0057e462                      ; 0057e4a7
        ;   XREF to: 0057e462 (UNCONDITIONAL_JUMP)  ; LAB_0057e462
    PUSH dword ptr [EBP + 0x92]         ; 0057e4a9
        ;   Label: LAB_0057e4a9
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057e4af
    PUSH EBX                            ; 0057e4b5
    CALL dword ptr [EAX + 0x144]        ; 0057e4b6
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0057e4bc
    ADD ESP,0x8                         ; 0057e4c2
    TEST EDI,EDI                        ; 0057e4c5
    JZ 0x0057e56b                       ; 0057e4c7
        ;   XREF to: 0057e56b (CONDITIONAL_JUMP)  ; LAB_0057e56b
    CMP dword ptr [EBX + 0xd080],0x0    ; 0057e4cd
    JZ 0x0057e599                       ; 0057e4d4
        ;   XREF to: 0057e599 (CONDITIONAL_JUMP)  ; LAB_0057e599
    MOV EAX,EDI                         ; 0057e4da
    LEA ESI,[EBP + -0x66]               ; 0057e4dc
    LEA EDX,[EBX + 0x20]                ; 0057e4df
    FLD float ptr [EAX + 0x20]          ; 0057e4e2
    FLD float ptr [EAX + 0x24]          ; 0057e4e5
    FLD float ptr [EAX + 0x28]          ; 0057e4e8
    LEA EDI,[EBP + 0xfffffe56]          ; 0057e4eb
    FXCH ST2                            ; 0057e4f1
    FSUB float ptr [EDX]                ; 0057e4f3
    FXCH                                ; 0057e4f5
    FSUB float ptr [EDX + 0x4]          ; 0057e4f7
    FXCH ST2                            ; 0057e4fa
    FSUB float ptr [EDX + 0x8]          ; 0057e4fc
    FXCH                                ; 0057e4ff
    FSTP float ptr [EBP + -0x66]        ; 0057e501
    FXCH                                ; 0057e504
    FSTP float ptr [EBP + -0x62]        ; 0057e506
    FSTP float ptr [EBP + -0x5e]        ; 0057e509
    MOVSD ES:EDI,ESI                    ; 0057e50c
    MOVSD ES:EDI,ESI                    ; 0057e50d
    MOVSD ES:EDI,ESI                    ; 0057e50e
    FLD float ptr [EBP + 0xfffffe5a]    ; 0057e50f
    FMUL ST0                            ; 0057e515
    FLD float ptr [EBP + 0xfffffe56]    ; 0057e517
    FMUL ST0                            ; 0057e51d
    FADDP                               ; 0057e51f
    FLD float ptr [EBP + 0xfffffe5e]    ; 0057e521
    FMUL ST0                            ; 0057e527
    FADDP                               ; 0057e529
    FSQRT                               ; 0057e52b
    FST float ptr [EBP + 0x56]          ; 0057e52d
    FCOMP float ptr [EBX + 0xcddc]      ; 0057e530
    FNSTSW AX                           ; 0057e536
    SAHF                                ; 0057e538
    JA 0x0057e549                       ; 0057e539
        ;   XREF to: 0057e549 (CONDITIONAL_JUMP)  ; LAB_0057e549
    FLD float ptr [EBP + 0x56]          ; 0057e53b
    FCOMP double ptr [0x005d7afb]       ; 0057e53e | DAT_005d7afb
    FNSTSW AX                           ; 0057e544
    SAHF                                ; 0057e546
    JBE 0x0057e599                      ; 0057e547
        ;   XREF to: 0057e599 (CONDITIONAL_JUMP)  ; LAB_0057e599
    PUSH 0x1                            ; 0057e549
        ;   Label: LAB_0057e549
    PUSH 0x0                            ; 0057e54b
    LEA EAX,[EBX + 0x158]               ; 0057e54d
    PUSH EAX                            ; 0057e553
    MOV dword ptr [EBX + 0xcde4],0x0    ; 0057e554
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e55e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e563
    JMP 0x0057d989                      ; 0057e566
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH dword ptr [EBP + 0x92]         ; 0057e56b
        ;   Label: LAB_0057e56b
    PUSH EBX                            ; 0057e571
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0057e572
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057e577
    TEST EAX,EAX                        ; 0057e57a
    JNZ 0x0057d989                      ; 0057e57c
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH 0x1                            ; 0057e582
    PUSH EDI                            ; 0057e584
    LEA EAX,[EBX + 0x158]               ; 0057e585
    PUSH EAX                            ; 0057e58b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e58c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e591
    JMP 0x0057d989                      ; 0057e594
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    MOV EDX,dword ptr [0x02cfd81c]      ; 0057e599 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0057e599
    PUSH EDX                            ; 0057e59f
    MOV ECX,dword ptr [EBX + 0xd080]    ; 0057e5a0
    PUSH ECX                            ; 0057e5a6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057e5a7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0057e5ac
    TEST EAX,EAX                        ; 0057e5af
    JZ 0x0057e5bd                       ; 0057e5b1
        ;   XREF to: 0057e5bd (CONDITIONAL_JUMP)  ; LAB_0057e5bd
    CMP dword ptr [EBP + 0x6e],0xf      ; 0057e5b3
    JZ 0x0057e486                       ; 0057e5b7
        ;   XREF to: 0057e486 (CONDITIONAL_JUMP)  ; LAB_0057e486
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0057e5bd
        ;   Label: LAB_0057e5bd
    MOV EDI,dword ptr [EBX + 0xd054]    ; 0057e5c3
    MOV dword ptr [EBP + 0x6a],EAX      ; 0057e5c9
    CMP EDI,0x2                         ; 0057e5cc
    JNZ 0x0057e719                      ; 0057e5cf
        ;   XREF to: 0057e719 (CONDITIONAL_JUMP)  ; LAB_0057e719
    CMP dword ptr [EBX + 0xd088],0x0    ; 0057e5d5
    JNZ 0x0057e86c                      ; 0057e5dc
        ;   XREF to: 0057e86c (CONDITIONAL_JUMP)  ; LAB_0057e86c
    MOV ECX,0x5d7a6d                    ; 0057e5e2 | = "..\\core\\werewolf.cpp"
        ;   Label: LAB_0057e5e2
    MOV ESI,0x1ad                       ; 0057e5e7
    PUSH 0x5d7a82                       ; 0057e5ec | = "Alpha werewolf requires 2 waypoints"
    MOV dword ptr [0x01d71de0],ECX      ; 0057e5f1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0057e5f7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057e5fd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057e602
    SUB ESP,0x8                         ; 0057e605
        ;   Label: LAB_0057e605
    FLD float ptr [EBX + 0xd094]        ; 0057e608
    FSTP double ptr [ESP]               ; 0057e60e
    MOV EDI,dword ptr [EBX + 0xd090]    ; 0057e611
    PUSH EDI                            ; 0057e617
    PUSH 0x5d7aa6                       ; 0057e618 | = "Phase: %d, Timer: %f\n"
    MOV EAX,[0x005f1690]                ; 0057e61d | g_CConsolePtr
    PUSH EAX                            ; 0057e622 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0057e623
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    MOV EDX,dword ptr [EBX + 0xd090]    ; 0057e628
    ADD ESP,0x14                        ; 0057e62e
    CMP EDX,0x1                         ; 0057e631
    JNZ 0x0057e87e                      ; 0057e634
        ;   XREF to: 0057e87e (CONDITIONAL_JUMP)  ; LAB_0057e87e
    MOV EAX,dword ptr [EBX + 0xd088]    ; 0057e63a
        ;   Label: LAB_0057e63a
    ADD EAX,0x20                        ; 0057e640
    PUSH EAX                            ; 0057e643
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0057e644
    PUSH ESI                            ; 0057e64a
    LEA ESI,[EBP + 0xfffffe6e]          ; 0057e64b
    LEA EDI,[EBP + 0xfffffe3e]          ; 0057e651
    CALL core_actor.cpp_FUN_00408bf0    ; 0057e657
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + 0xfffffe6e]          ; 0057e65c
    MOVSD ES:EDI,ESI                    ; 0057e662
    MOVSD ES:EDI,ESI                    ; 0057e663
    MOVSD ES:EDI,ESI                    ; 0057e664
    ADD ESP,0x8                         ; 0057e665
    FLD float ptr [EBP + 0xfffffe46]    ; 0057e668
    FLDZ                                ; 0057e66e
    FCOMPP                              ; 0057e670
    FNSTSW AX                           ; 0057e672
    SAHF                                ; 0057e674
    JBE 0x0057e88c                      ; 0057e675
        ;   XREF to: 0057e88c (CONDITIONAL_JUMP)  ; LAB_0057e88c
    MOV EAX,dword ptr [EBX + 0xd088]    ; 0057e67b
    MOV dword ptr [EBP + 0x6a],EAX      ; 0057e681
        ;   Label: LAB_0057e681
    MOV EAX,dword ptr [EBX + 0xd090]    ; 0057e684
        ;   Label: LAB_0057e684
    CMP EAX,0x1                         ; 0057e68a
    JNZ 0x0057e9b8                      ; 0057e68d
        ;   XREF to: 0057e9b8 (CONDITIONAL_JUMP)  ; LAB_0057e9b8
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0057e693
        ;   Label: LAB_0057e693
    LEA EDI,[EBP + -0x7e]               ; 0057e696
    LEA ESI,[EBP + 0xfffffdc6]          ; 0057e699
    LEA EDX,[EBX + 0x20]                ; 0057e69f
    FLD float ptr [EAX + 0x20]          ; 0057e6a2
    FLD float ptr [EAX + 0x24]          ; 0057e6a5
    FLD float ptr [EAX + 0x28]          ; 0057e6a8
    FXCH ST2                            ; 0057e6ab
    FSUB float ptr [EDX]                ; 0057e6ad
    FXCH                                ; 0057e6af
    FSUB float ptr [EDX + 0x4]          ; 0057e6b1
    FXCH ST2                            ; 0057e6b4
    FSUB float ptr [EDX + 0x8]          ; 0057e6b6
    FXCH                                ; 0057e6b9
    FSTP float ptr [EBP + 0xfffffdc6]   ; 0057e6bb
    FXCH                                ; 0057e6c1
    FSTP float ptr [EBP + 0xfffffdca]   ; 0057e6c3
    FSTP float ptr [EBP + 0xfffffdce]   ; 0057e6c9
    MOVSD ES:EDI,ESI                    ; 0057e6cf
    MOVSD ES:EDI,ESI                    ; 0057e6d0
    MOVSD ES:EDI,ESI                    ; 0057e6d1
    FLD float ptr [EBP + -0x7a]         ; 0057e6d2
    FMUL ST0                            ; 0057e6d5
    FLD float ptr [EBP + -0x7e]         ; 0057e6d7
    FMUL ST0                            ; 0057e6da
    FADDP                               ; 0057e6dc
    FLD float ptr [EBP + -0x76]         ; 0057e6de
    FMUL ST0                            ; 0057e6e1
    FADDP                               ; 0057e6e3
    FSQRT                               ; 0057e6e5
    FCOMP double ptr [0x005d7b03]       ; 0057e6e7 | DAT_005d7b03
    FNSTSW AX                           ; 0057e6ed
    SAHF                                ; 0057e6ef
    JNC 0x0057e719                      ; 0057e6f0
        ;   XREF to: 0057e719 (CONDITIONAL_JUMP)  ; LAB_0057e719
    MOV EDI,dword ptr [EBX + 0xd090]    ; 0057e6f2
    INC EDI                             ; 0057e6f8
    MOV dword ptr [EBX + 0xd090],EDI    ; 0057e6f9
    CMP EDI,0x3                         ; 0057e6ff
    JLE 0x0057e70e                      ; 0057e702
        ;   XREF to: 0057e70e (CONDITIONAL_JUMP)  ; LAB_0057e70e
    MOV dword ptr [EBX + 0xd090],0x0    ; 0057e704
    MOV EAX,[0x005e63a8]                ; 0057e70e | DAT_005e63a8
        ;   Label: LAB_0057e70e
    MOV dword ptr [EBX + 0xd094],EAX    ; 0057e713
    MOV EAX,[0x005e639c]                ; 0057e719 | DAT_005e639c
        ;   Label: LAB_0057e719
    PUSH 0x3e32b8c2                     ; 0057e71e
    MOV dword ptr [EBP + 0x36],EAX      ; 0057e723
    LEA EAX,[EBX + 0x249c]              ; 0057e726
    PUSH 0x3f000000                     ; 0057e72c
    MOV dword ptr [EAX + 0x8],0x0       ; 0057e731
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0057e738
    MOV EDX,dword ptr [EAX + 0x8]       ; 0057e73b
    MOV dword ptr [EAX + 0x4],EDX       ; 0057e73e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057e741
    MOV dword ptr [EAX],EDX             ; 0057e744
    MOV EAX,dword ptr [EBP + 0x36]      ; 0057e746
    XOR EDX,EDX                         ; 0057e749
    MOV dword ptr [EBP + 0xfffffd6e],EAX ; 0057e74b
    LEA EAX,[EBP + 0xfffffd66]          ; 0057e751
    MOV dword ptr [EBP + 0xfffffd66],EDX ; 0057e757
    PUSH EAX                            ; 0057e75d
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0057e75e
    MOV dword ptr [EBP + 0xfffffd6a],EDX ; 0057e761
    PUSH ESI                            ; 0057e767
    MOV EAX,dword ptr [EAX + 0x154]     ; 0057e768
    CALL dword ptr [EAX + 0xc4]         ; 0057e76e
    ADD ESP,0x4                         ; 0057e774
    PUSH EAX                            ; 0057e777
    ADD ESI,0x20                        ; 0057e778
    PUSH ESI                            ; 0057e77b
    PUSH EBX                            ; 0057e77c
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0057e77d
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0057e782
    TEST EAX,EAX                        ; 0057e785
    JL 0x0057e9f9                       ; 0057e787
        ;   XREF to: 0057e9f9 (CONDITIONAL_JUMP)  ; LAB_0057e9f9
    JLE 0x0057ea26                      ; 0057e78d
        ;   XREF to: 0057ea26 (CONDITIONAL_JUMP)  ; LAB_0057ea26
    CMP dword ptr [EBX + 0xd054],0x2    ; 0057e793
    JNZ 0x0057e7b4                      ; 0057e79a
        ;   XREF to: 0057e7b4 (CONDITIONAL_JUMP)  ; LAB_0057e7b4
    MOV EAX,dword ptr [EBX + 0xd090]    ; 0057e79c
    CMP EAX,0x1                         ; 0057e7a2
    JZ 0x0057d989                       ; 0057e7a5
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    CMP EAX,0x3                         ; 0057e7ab
    JZ 0x0057d989                       ; 0057e7ae
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    FLD float ptr [EBX + 0xcde0]        ; 0057e7b4
        ;   Label: LAB_0057e7b4
    FLDZ                                ; 0057e7ba
    FCOMPP                              ; 0057e7bc
    FNSTSW AX                           ; 0057e7be
    SAHF                                ; 0057e7c0
    JC 0x0057e83f                       ; 0057e7c1
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    PUSH 0x2                            ; 0057e7c7
    PUSH 0x0                            ; 0057e7c9
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0057e7cb
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0057e7d0
    MOV ESI,EAX                         ; 0057e7d3
    TEST EAX,EAX                        ; 0057e7d5
    JNZ 0x0057e7ec                      ; 0057e7d7
        ;   XREF to: 0057e7ec (CONDITIONAL_JUMP)  ; LAB_0057e7ec
    PUSH 0x1                            ; 0057e7d9
    PUSH 0x2                            ; 0057e7db
    LEA EAX,[EBX + 0x158]               ; 0057e7dd
    PUSH EAX                            ; 0057e7e3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e7e4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e7e9
    CMP ESI,0x1                         ; 0057e7ec
        ;   Label: LAB_0057e7ec
    JNZ 0x0057e803                      ; 0057e7ef
        ;   XREF to: 0057e803 (CONDITIONAL_JUMP)  ; LAB_0057e803
    PUSH ESI                            ; 0057e7f1
    PUSH 0x3                            ; 0057e7f2
    LEA EAX,[EBX + 0x158]               ; 0057e7f4
    PUSH EAX                            ; 0057e7fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e7fb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e800
    CMP ESI,0x2                         ; 0057e803
        ;   Label: LAB_0057e803
    JNZ 0x0057e81b                      ; 0057e806
        ;   XREF to: 0057e81b (CONDITIONAL_JUMP)  ; LAB_0057e81b
    PUSH 0x1                            ; 0057e808
    PUSH 0x4                            ; 0057e80a
    LEA EAX,[EBX + 0x158]               ; 0057e80c
    PUSH EAX                            ; 0057e812
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057e813
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057e818
    PUSH 0x3f19999a                     ; 0057e81b
        ;   Label: LAB_0057e81b
    MOV dword ptr [EBX + 0xcde0],0x3f800000 ; 0057e820
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0057e82a
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0057e82f
    TEST EAX,EAX                        ; 0057e832
    JZ 0x0057e83f                       ; 0057e834
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    PUSH EBX                            ; 0057e836
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30 ; 0057e837
        ;   XREF to: 0057ee30 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0057e83c
    FLD float ptr [EBX + 0xd074]        ; 0057e83f
        ;   Label: LAB_0057e83f
    FSUB float ptr [EBP + 0x92]         ; 0057e845
    FST float ptr [EBX + 0xd074]        ; 0057e84b
    FLDZ                                ; 0057e851
    FCOMPP                              ; 0057e853
    FNSTSW AX                           ; 0057e855
    SAHF                                ; 0057e857
    JBE 0x0057d989                      ; 0057e858
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH EBX                            ; 0057e85e
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30 ; 0057e85f
        ;   XREF to: 0057ee30 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0057e864
    JMP 0x0057d989                      ; 0057e867
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    CMP dword ptr [EBX + 0xd08c],0x0    ; 0057e86c
        ;   Label: LAB_0057e86c
    JZ 0x0057e5e2                       ; 0057e873
        ;   XREF to: 0057e5e2 (CONDITIONAL_JUMP)  ; LAB_0057e5e2
    JMP 0x0057e605                      ; 0057e879
        ;   XREF to: 0057e605 (UNCONDITIONAL_JUMP)  ; LAB_0057e605
    CMP EDX,0x3                         ; 0057e87e
        ;   Label: LAB_0057e87e
    JZ 0x0057e63a                       ; 0057e881
        ;   XREF to: 0057e63a (CONDITIONAL_JUMP)  ; LAB_0057e63a
    JMP 0x0057e684                      ; 0057e887
        ;   XREF to: 0057e684 (UNCONDITIONAL_JUMP)  ; LAB_0057e684
    MOV EAX,dword ptr [EBX + 0xd08c]    ; 0057e88c
        ;   Label: LAB_0057e88c
    ADD EAX,0x20                        ; 0057e892
    PUSH EAX                            ; 0057e895
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0057e896
    PUSH EDI                            ; 0057e89c
    LEA ESI,[EBP + 0xfffffeaa]          ; 0057e89d
    LEA EDI,[EBP + 0xfffffe86]          ; 0057e8a3
    CALL core_actor.cpp_FUN_00408bf0    ; 0057e8a9
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + 0xfffffeaa]          ; 0057e8ae
    MOVSD ES:EDI,ESI                    ; 0057e8b4
    MOVSD ES:EDI,ESI                    ; 0057e8b5
    MOVSD ES:EDI,ESI                    ; 0057e8b6
    ADD ESP,0x8                         ; 0057e8b7
    FLD float ptr [EBP + 0xfffffe8e]    ; 0057e8ba
    FLDZ                                ; 0057e8c0
    FCOMPP                              ; 0057e8c2
    FNSTSW AX                           ; 0057e8c4
    SAHF                                ; 0057e8c6
    JBE 0x0057e8d4                      ; 0057e8c7
        ;   XREF to: 0057e8d4 (CONDITIONAL_JUMP)  ; LAB_0057e8d4
    MOV EAX,dword ptr [EBX + 0xd08c]    ; 0057e8c9
    JMP 0x0057e681                      ; 0057e8cf
        ;   XREF to: 0057e681 (UNCONDITIONAL_JUMP)  ; LAB_0057e681
    LEA EDI,[EBP + 0xfffffcee]          ; 0057e8d4
        ;   Label: LAB_0057e8d4
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0057e8da
    LEA ESI,[EBP + 0xfffffd36]          ; 0057e8e0
    MOV EAX,dword ptr [EBX + 0xd088]    ; 0057e8e6
    FLD float ptr [EDX + 0x20]          ; 0057e8ec
    FLD float ptr [EDX + 0x24]          ; 0057e8ef
    FLD float ptr [EDX + 0x28]          ; 0057e8f2
    FXCH ST2                            ; 0057e8f5
    FSUB float ptr [EAX + 0x20]         ; 0057e8f7
    FXCH                                ; 0057e8fa
    FSUB float ptr [EAX + 0x24]         ; 0057e8fc
    FXCH ST2                            ; 0057e8ff
    FSUB float ptr [EAX + 0x28]         ; 0057e901
    FXCH                                ; 0057e904
    FSTP float ptr [EBP + 0xfffffd36]   ; 0057e906
    FXCH                                ; 0057e90c
    FSTP float ptr [EBP + 0xfffffd3a]   ; 0057e90e
    FSTP float ptr [EBP + 0xfffffd3e]   ; 0057e914
    MOVSD ES:EDI,ESI                    ; 0057e91a
    MOVSD ES:EDI,ESI                    ; 0057e91b
    MOVSD ES:EDI,ESI                    ; 0057e91c
    FLD float ptr [EBP + 0xfffffcf2]    ; 0057e91d
    FMUL ST0                            ; 0057e923
    FLD float ptr [EBP + 0xfffffcee]    ; 0057e925
    FMUL ST0                            ; 0057e92b
    FADDP                               ; 0057e92d
    FLD float ptr [EBP + 0xfffffcf6]    ; 0057e92f
    FMUL ST0                            ; 0057e935
    FADDP                               ; 0057e937
    MOV dword ptr [EBP + 0x42],EAX      ; 0057e939
    FSQRT                               ; 0057e93c
    FLD float ptr [EDX + 0x20]          ; 0057e93e
    FLD float ptr [EDX + 0x24]          ; 0057e941
    MOV ECX,dword ptr [EBX + 0xd08c]    ; 0057e944
    FLD float ptr [EDX + 0x28]          ; 0057e94a
    LEA EAX,[ECX + 0x20]                ; 0057e94d
    LEA EDI,[EBP + 0xfffffd1e]          ; 0057e950
    LEA ESI,[EBP + 0xfffffdd2]          ; 0057e956
    FXCH ST2                            ; 0057e95c
    FSUB float ptr [EAX]                ; 0057e95e
    FXCH                                ; 0057e960
    FSUB float ptr [EAX + 0x4]          ; 0057e962
    FXCH ST2                            ; 0057e965
    FSUB float ptr [EAX + 0x8]          ; 0057e967
    FXCH                                ; 0057e96a
    FSTP float ptr [EBP + 0xfffffdd2]   ; 0057e96c
    FXCH                                ; 0057e972
    FSTP float ptr [EBP + 0xfffffdd6]   ; 0057e974
    FSTP float ptr [EBP + 0xfffffdda]   ; 0057e97a
    MOVSD ES:EDI,ESI                    ; 0057e980
    MOVSD ES:EDI,ESI                    ; 0057e981
    MOVSD ES:EDI,ESI                    ; 0057e982
    FLD float ptr [EBP + 0xfffffd22]    ; 0057e983
    FMUL ST0                            ; 0057e989
    FLD float ptr [EBP + 0xfffffd1e]    ; 0057e98b
    FMUL ST0                            ; 0057e991
    FADDP                               ; 0057e993
    FLD float ptr [EBP + 0xfffffd26]    ; 0057e995
    FMUL ST0                            ; 0057e99b
    FADDP                               ; 0057e99d
    FSQRT                               ; 0057e99f
    FCOMPP                              ; 0057e9a1
    FNSTSW AX                           ; 0057e9a3
    SAHF                                ; 0057e9a5
    JNC 0x0057e9b0                      ; 0057e9a6
        ;   XREF to: 0057e9b0 (CONDITIONAL_JUMP)  ; LAB_0057e9b0
    MOV EAX,dword ptr [EBP + 0x42]      ; 0057e9a8
    JMP 0x0057e681                      ; 0057e9ab
        ;   XREF to: 0057e681 (UNCONDITIONAL_JUMP)  ; LAB_0057e681
    MOV dword ptr [EBP + 0x6a],ECX      ; 0057e9b0
        ;   Label: LAB_0057e9b0
    JMP 0x0057e684                      ; 0057e9b3
        ;   XREF to: 0057e684 (UNCONDITIONAL_JUMP)  ; LAB_0057e684
    CMP EAX,0x3                         ; 0057e9b8
        ;   Label: LAB_0057e9b8
    JZ 0x0057e693                       ; 0057e9bb
        ;   XREF to: 0057e693 (CONDITIONAL_JUMP)  ; LAB_0057e693
    FLD float ptr [EBX + 0xd094]        ; 0057e9c1
    FLDZ                                ; 0057e9c7
    FCOMPP                              ; 0057e9c9
    FNSTSW AX                           ; 0057e9cb
    SAHF                                ; 0057e9cd
    JC 0x0057e719                       ; 0057e9ce
        ;   XREF to: 0057e719 (CONDITIONAL_JUMP)  ; LAB_0057e719
    MOV ECX,dword ptr [EBX + 0xd090]    ; 0057e9d4
    INC ECX                             ; 0057e9da
    MOV dword ptr [EBX + 0xd090],ECX    ; 0057e9db
    CMP ECX,0x3                         ; 0057e9e1
    JLE 0x0057e719                      ; 0057e9e4
        ;   XREF to: 0057e719 (CONDITIONAL_JUMP)  ; LAB_0057e719
    MOV dword ptr [EBX + 0xd090],0x0    ; 0057e9ea
    JMP 0x0057e719                      ; 0057e9f4
        ;   XREF to: 0057e719 (UNCONDITIONAL_JUMP)  ; LAB_0057e719
    PUSH EBX                            ; 0057e9f9
        ;   Label: LAB_0057e9f9
    PUSH 0x5d7abc                       ; 0057e9fa | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0057e9ff | g_CConsolePtr
    PUSH ECX                            ; 0057ea05 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0057ea06
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0057ea0b
    PUSH 0x1                            ; 0057ea0e
    PUSH 0x0                            ; 0057ea10
    LEA EAX,[EBX + 0x158]               ; 0057ea12
    PUSH EAX                            ; 0057ea18
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057ea19
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057ea1e
    JMP 0x0057e83f                      ; 0057ea21
        ;   XREF to: 0057e83f (UNCONDITIONAL_JUMP)  ; LAB_0057e83f
    MOV EDI,dword ptr [0x02cfd81c]      ; 0057ea26 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0057ea26
    PUSH EDI                            ; 0057ea2c
    MOV EAX,dword ptr [EBX + 0xd080]    ; 0057ea2d
    PUSH EAX                            ; 0057ea33
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057ea34
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0057ea39
    TEST EAX,EAX                        ; 0057ea3c
    JNZ 0x0057e83f                      ; 0057ea3e
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    FLD float ptr [ESI + 0x4]           ; 0057ea44
    FLD float ptr [ESI + 0x8]           ; 0057ea47
    FLD float ptr [ESI]                 ; 0057ea4a
    LEA EDI,[EBP + 0x12]                ; 0057ea4c
    LEA EAX,[EBX + 0x20]                ; 0057ea4f
    LEA EDX,[EBP + 0x12]                ; 0057ea52
    LEA ESI,[EBP + 0xfffffe62]          ; 0057ea55
    FSUB float ptr [EAX]                ; 0057ea5b
    FXCH ST2                            ; 0057ea5d
    FSUB float ptr [EAX + 0x4]          ; 0057ea5f
    FXCH                                ; 0057ea62
    FSUB float ptr [EAX + 0x8]          ; 0057ea64
    FXCH ST2                            ; 0057ea67
    FSTP float ptr [EBP + 0xfffffe62]   ; 0057ea69
    FSTP float ptr [EBP + 0xfffffe66]   ; 0057ea6f
    FSTP float ptr [EBP + 0xfffffe6a]   ; 0057ea75
    LEA EAX,[EBP + 0xfffffe9e]          ; 0057ea7b
    MOVSD ES:EDI,ESI                    ; 0057ea81
    MOVSD ES:EDI,ESI                    ; 0057ea82
    MOVSD ES:EDI,ESI                    ; 0057ea83
    CMP EAX,EDX                         ; 0057ea84
    JZ 0x0057eaa3                       ; 0057ea86
        ;   XREF to: 0057eaa3 (CONDITIONAL_JUMP)  ; LAB_0057eaa3
    MOV EAX,dword ptr [EBP + 0x12]      ; 0057ea88
    MOV dword ptr [EBP + 0xfffffe9e],EAX ; 0057ea8b
    MOV EAX,dword ptr [EBP + 0x16]      ; 0057ea91
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 0057ea94
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0057ea9a
    MOV dword ptr [EBP + 0xfffffea6],EAX ; 0057ea9d
    FLD float ptr [EBP + 0xfffffea2]    ; 0057eaa3
        ;   Label: LAB_0057eaa3
    FMUL ST0                            ; 0057eaa9
    FLD float ptr [EBP + 0xfffffe9e]    ; 0057eaab
    FMUL ST0                            ; 0057eab1
    FADDP                               ; 0057eab3
    FLD float ptr [EBP + 0xfffffea6]    ; 0057eab5
    FMUL ST0                            ; 0057eabb
    FADDP                               ; 0057eabd
    FSQRT                               ; 0057eabf
    MOV EDX,0x41a00000                  ; 0057eac1
    MOV ECX,dword ptr [EBX + 0xd054]    ; 0057eac6
    MOV dword ptr [EBP + 0x5e],EDX      ; 0057eacc
    FSTP float ptr [EBP + 0x4e]         ; 0057eacf
    CMP ECX,0x1                         ; 0057ead2
    JNZ 0x0057eade                      ; 0057ead5
        ;   XREF to: 0057eade (CONDITIONAL_JUMP)  ; LAB_0057eade
    MOV dword ptr [EBP + 0x5e],0x41200000 ; 0057ead7
    CMP dword ptr [EBX + 0xd054],0x2    ; 0057eade
        ;   Label: LAB_0057eade
    JNZ 0x0057eaee                      ; 0057eae5
        ;   XREF to: 0057eaee (CONDITIONAL_JUMP)  ; LAB_0057eaee
    MOV dword ptr [EBP + 0x5e],0x41200000 ; 0057eae7
    LEA EAX,[EBX + 0x158]               ; 0057eaee
        ;   Label: LAB_0057eaee
    FLD float ptr [EBP + 0x4e]          ; 0057eaf4
    MOV dword ptr [EBP + 0x4a],EAX      ; 0057eaf7
    FCOMP float ptr [EBP + 0x5e]        ; 0057eafa
    FNSTSW AX                           ; 0057eafd
    SAHF                                ; 0057eaff
    JA 0x0057eb39                       ; 0057eb00
        ;   XREF to: 0057eb39 (CONDITIONAL_JUMP)  ; LAB_0057eb39
    FLD float ptr [0x005e639c]          ; 0057eb02 | DAT_005e639c
    FMUL float ptr [0x005d7b0b]         ; 0057eb08 | DAT_005d7b0b
    FCOMP float ptr [EBP + 0x4e]        ; 0057eb0e
    FNSTSW AX                           ; 0057eb11
    SAHF                                ; 0057eb13
    JBE 0x0057e83f                      ; 0057eb14
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    CMP dword ptr [EBP + 0x6e],0xf      ; 0057eb1a
    JNZ 0x0057e83f                      ; 0057eb1e
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    PUSH 0x1                            ; 0057eb24
    PUSH 0x0                            ; 0057eb26
    MOV ECX,dword ptr [EBP + 0x4a]      ; 0057eb28
    PUSH ECX                            ; 0057eb2b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057eb2c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057eb31
    JMP 0x0057e83f                      ; 0057eb34
        ;   XREF to: 0057e83f (UNCONDITIONAL_JUMP)  ; LAB_0057e83f
    LEA EAX,[EBP + 0xfffffe9e]          ; 0057eb39
        ;   Label: LAB_0057eb39
    PUSH EAX                            ; 0057eb3f
    LEA ESI,[EBP + 0xfffffee6]          ; 0057eb40
    LEA EDI,[EBP + 0xfffffe02]          ; 0057eb46
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0057eb4c
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffee6]          ; 0057eb51
    MOVSD ES:EDI,ESI                    ; 0057eb57
    MOVSD ES:EDI,ESI                    ; 0057eb58
    MOVSD ES:EDI,ESI                    ; 0057eb59
    ADD ESP,0x4                         ; 0057eb5a
    FLD float ptr [EBP + 0xfffffe06]    ; 0057eb5d
    FSUB float ptr [EBX + 0x34]         ; 0057eb63
    SUB ESP,0x4                         ; 0057eb66
    FSTP float ptr [ESP]                ; 0057eb69
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0057eb6c
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0057eb71
    FLD float ptr [EBP + 0x76]          ; 0057eb74
    FABS                                ; 0057eb77
    ADD ESP,0x4                         ; 0057eb79
    FCOMP double ptr [0x005d7b13]       ; 0057eb7c | DAT_005d7b13
    FNSTSW AX                           ; 0057eb82
    SAHF                                ; 0057eb84
    JNC 0x0057e83f                      ; 0057eb85
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    PUSH 0x1                            ; 0057eb8b
    PUSH 0x8                            ; 0057eb8d
    MOV ESI,dword ptr [EBP + 0x4a]      ; 0057eb8f
    PUSH ESI                            ; 0057eb92
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057eb93
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057eb98
    PUSH 0x3f59999a                     ; 0057eb9b
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0057eba0
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0057eba5
    TEST EAX,EAX                        ; 0057eba8
    JNZ 0x0057ebe2                      ; 0057ebaa
        ;   XREF to: 0057ebe2 (CONDITIONAL_JUMP)  ; LAB_0057ebe2
    XOR EDI,EDI                         ; 0057ebac
        ;   Label: LAB_0057ebac
    XOR ESI,ESI                         ; 0057ebae
    MOV EAX,[0x00603b28]                ; 0057ebb0 | g_CDemonSetPtr
        ;   Label: LAB_0057ebb0
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 0057ebb5 | g_CDemonSetInstance.enemy_count
    JGE 0x0057e83f                      ; 0057ebbb
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    MOV ECX,dword ptr [0x02d202ac]      ; 0057ebc1 | g_CWerewolfClassInfo.name_hash
    PUSH ECX                            ; 0057ebc7
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 0057ebc8
    PUSH EDX                            ; 0057ebcf
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057ebd0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0057ebd5
    TEST EAX,EAX                        ; 0057ebd8
    JNZ 0x0057ebed                      ; 0057ebda
        ;   XREF to: 0057ebed (CONDITIONAL_JUMP)  ; LAB_0057ebed
    INC ESI                             ; 0057ebdc
        ;   Label: LAB_0057ebdc
    ADD EDI,0x4                         ; 0057ebdd
    JMP 0x0057ebb0                      ; 0057ebe0
        ;   XREF to: 0057ebb0 (UNCONDITIONAL_JUMP)  ; LAB_0057ebb0
    PUSH EBX                            ; 0057ebe2
        ;   Label: LAB_0057ebe2
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30 ; 0057ebe3
        ;   XREF to: 0057ee30 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0057ebe8
    JMP 0x0057ebac                      ; 0057ebeb
        ;   XREF to: 0057ebac (UNCONDITIONAL_JUMP)  ; LAB_0057ebac
    CMP EAX,EBX                         ; 0057ebed
        ;   Label: LAB_0057ebed
    JZ 0x0057ebdc                       ; 0057ebef
        ;   XREF to: 0057ebdc (CONDITIONAL_JUMP)  ; LAB_0057ebdc
    ADD EAX,0x158                       ; 0057ebf1
    PUSH EAX                            ; 0057ebf6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0057ebf7
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057ebfc
    ADD ESP,0x4                         ; 0057ebff
    CMP EAX,0x8                         ; 0057ec02
    JNZ 0x0057ebdc                      ; 0057ec05
        ;   XREF to: 0057ebdc (CONDITIONAL_JUMP)  ; LAB_0057ebdc
    PUSH 0x2                            ; 0057ec07
    PUSH 0x0                            ; 0057ec09
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0057ec0b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0057ec10
    MOV EDX,EAX                         ; 0057ec13
    CMP EAX,0x1                         ; 0057ec15
    JNZ 0x0057ec26                      ; 0057ec18
        ;   XREF to: 0057ec26 (CONDITIONAL_JUMP)  ; LAB_0057ec26
    FLD float ptr [EBX + 0x34]          ; 0057ec1a
    FADD float ptr [0x005d7b23]         ; 0057ec1d | DAT_005d7b23
    FSTP float ptr [EBX + 0x34]         ; 0057ec23
    CMP EDX,0x2                         ; 0057ec26
        ;   Label: LAB_0057ec26
    JNZ 0x0057e83f                      ; 0057ec29
        ;   XREF to: 0057e83f (CONDITIONAL_JUMP)  ; LAB_0057e83f
    FLD float ptr [EBX + 0x34]          ; 0057ec2f
    FADD float ptr [0x005d7b27]         ; 0057ec32 | DAT_005d7b27
    FSTP float ptr [EBX + 0x34]         ; 0057ec38
    JMP 0x0057e83f                      ; 0057ec3b
        ;   XREF to: 0057e83f (UNCONDITIONAL_JUMP)  ; LAB_0057e83f
    LEA EDX,[EBX + 0x158]               ; 0057ec40
        ;   Label: LAB_0057ec40
    MOV dword ptr [EBP + 0x52],EDX      ; 0057ec46
    JBE 0x0057e1f4                      ; 0057ec49
        ;   XREF to: 0057e1f4 (CONDITIONAL_JUMP)  ; LAB_0057e1f4
    CMP EDI,0xe                         ; 0057ec4f
    JNC 0x0057ec71                      ; 0057ec52
        ;   XREF to: 0057ec71 (CONDITIONAL_JUMP)  ; LAB_0057ec71
    CMP EDI,0x8                         ; 0057ec54
    JC 0x0057d989                       ; 0057ec57
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    JBE 0x0057defe                      ; 0057ec5d
        ;   XREF to: 0057defe (CONDITIONAL_JUMP)  ; LAB_0057defe
    CMP EDI,0xd                         ; 0057ec63
    JZ 0x0057e2d7                       ; 0057ec66
        ;   XREF to: 0057e2d7 (CONDITIONAL_JUMP)  ; LAB_0057e2d7
    JMP 0x0057d989                      ; 0057ec6c
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    JBE 0x0057dec3                      ; 0057ec71
        ;   XREF to: 0057dec3 (CONDITIONAL_JUMP)  ; LAB_0057dec3
        ;   Label: LAB_0057ec71
    CMP EDI,0xf                         ; 0057ec77
    JBE 0x0057e4a9                      ; 0057ec7a
        ;   XREF to: 0057e4a9 (CONDITIONAL_JUMP)  ; LAB_0057e4a9
    CMP EDI,0x13                        ; 0057ec80
    JZ 0x0057d971                       ; 0057ec83
        ;   XREF to: 0057d971 (CONDITIONAL_JUMP)  ; LAB_0057d971
    JMP 0x0057d989                      ; 0057ec89
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    JBE 0x0057e4a9                      ; 0057ec8e
        ;   XREF to: 0057e4a9 (CONDITIONAL_JUMP)  ; LAB_0057e4a9
        ;   Label: LAB_0057ec8e
    CMP EDI,0x2                         ; 0057ec94
    JBE 0x0057df41                      ; 0057ec97
        ;   XREF to: 0057df41 (CONDITIONAL_JUMP)  ; LAB_0057df41
    MOV ECX,dword ptr [EAX + 0x1d5ba04] ; 0057ec9d
    CMP ECX,dword ptr [EBX + 0xcde4]    ; 0057eca3
    JZ 0x0057ed57                       ; 0057eca9
        ;   XREF to: 0057ed57 (CONDITIONAL_JUMP)  ; LAB_0057ed57
    LEA EAX,[EBP + 0xfffffc6a]          ; 0057ecaf
    PUSH EAX                            ; 0057ecb5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0057ecb6
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0057ecbb
    PUSH 0x41700000                     ; 0057ecbe
    PUSH 0x40e00000                     ; 0057ecc3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057ecc8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0057eccd
    MOV dword ptr [EBP + 0xfffffc9e],EBX ; 0057ecd0
    MOV dword ptr [EBP + 0xfffffca2],EBX ; 0057ecd6
    ADD ESP,0x8                         ; 0057ecdc
    FLD float ptr [EBP + 0x76]          ; 0057ecdf
    LEA EAX,[EBP + 0xfffffc6a]          ; 0057ece2
    FSTP float ptr [EBP + 0xfffffc6e]   ; 0057ece8
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 0057ecee
    PUSH EAX                            ; 0057ecf4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057ecf5
    SUB EAX,EDX                         ; 0057ecfc
    MOV ESI,dword ptr [EBP + 0x66]      ; 0057ecfe
    SHL EAX,0x4                         ; 0057ed01
    ADD EAX,ESI                         ; 0057ed04
    PUSH 0x3ecccccd                     ; 0057ed06
    PUSH EAX                            ; 0057ed0b
    PUSH 0x2cfd900                      ; 0057ed0c | DAT_02cfd900
    LEA ESI,[EBP + 0x1e]                ; 0057ed11
    LEA EDI,[EBP + 0xffffff6a]          ; 0057ed14
    CALL core_xform.cpp_FUN_00583260    ; 0057ed1a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0057ed1f
    LEA EAX,[EBP + 0xffffff6a]          ; 0057ed22
    LEA ESI,[EBP + 0x1e]                ; 0057ed28
    PUSH EAX                            ; 0057ed2b
    MOVSD ES:EDI,ESI                    ; 0057ed2c
    MOVSD ES:EDI,ESI                    ; 0057ed2d
    MOVSD ES:EDI,ESI                    ; 0057ed2e
    PUSH EBX                            ; 0057ed2f
    LEA ESI,[EBP + 0x6]                 ; 0057ed30
    CALL core_actor.cpp_FUN_00408b80    ; 0057ed33
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0057ed38
    LEA EAX,[EBP + 0xfffffdba]          ; 0057ed3b
    PUSH EAX                            ; 0057ed41
    LEA EDI,[EBP + 0xfffffdba]          ; 0057ed42
    LEA ESI,[EBP + 0x6]                 ; 0057ed48
    PUSH EBX                            ; 0057ed4b
    MOVSD ES:EDI,ESI                    ; 0057ed4c
    MOVSD ES:EDI,ESI                    ; 0057ed4d
    MOVSD ES:EDI,ESI                    ; 0057ed4e
    CALL core_enemy.cpp_FUN_004893f0    ; 0057ed4f
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0057ed54
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0057ed57
        ;   Label: LAB_0057ed57
    TEST EDI,EDI                        ; 0057ed5d
    JZ 0x0057d989                       ; 0057ed5f
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH EDI                            ; 0057ed65
    MOV EDX,dword ptr [EDI + 0x154]     ; 0057ed66
    CALL dword ptr [EDX + 0x10c]        ; 0057ed6c
    ADD ESP,0x4                         ; 0057ed72
    TEST EAX,EAX                        ; 0057ed75
    JZ 0x0057d989                       ; 0057ed77
        ;   XREF to: 0057d989 (CONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH 0x1                            ; 0057ed7d
    PUSH 0x7                            ; 0057ed7f
    LEA EAX,[EBX + 0x158]               ; 0057ed81
    PUSH EAX                            ; 0057ed87
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057ed88
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057ed8d
    JMP 0x0057d989                      ; 0057ed90
        ;   XREF to: 0057d989 (UNCONDITIONAL_JUMP)  ; LAB_0057d989
    PUSH 0x5d7add                       ; 0057ed95 | = "werewolf-eat.wav"
        ;   Label: LAB_0057ed95
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057ed9a
    PUSH EBX                            ; 0057eda0
    CALL dword ptr [EAX + 0x2c]         ; 0057eda1
    ADD ESP,0x8                         ; 0057eda4
    MOV dword ptr [EBX + 0xd07c],EAX    ; 0057eda7
    JMP 0x0057d9b7                      ; 0057edad
        ;   XREF to: 0057d9b7 (UNCONDITIONAL_JUMP)  ; LAB_0057d9b7
    MOV EDI,dword ptr [EBX + 0xd07c]    ; 0057edb2
        ;   Label: LAB_0057edb2
    PUSH EDI                            ; 0057edb8
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0057edb9
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057edbe
    JMP 0x0057d9b7                      ; 0057edc1
        ;   XREF to: 0057d9b7 (UNCONDITIONAL_JUMP)  ; LAB_0057d9b7
    CMP EDI,0xf                         ; 0057edc6
        ;   Label: LAB_0057edc6
    JZ 0x0057d9dc                       ; 0057edc9
        ;   XREF to: 0057d9dc (CONDITIONAL_JUMP)  ; LAB_0057d9dc
    FLD float ptr [EBP + 0x5a]          ; 0057edcf
    FMUL double ptr [0x005d7b2b]        ; 0057edd2 | DAT_005d7b2b
    JMP 0x0057d9e5                      ; 0057edd8
        ;   XREF to: 0057d9e5 (UNCONDITIONAL_JUMP)  ; LAB_0057d9e5
    CMP dword ptr [EBX + 0xdc],0x0      ; 0057eddd
        ;   Label: LAB_0057eddd
    JNZ 0x0057da41                      ; 0057ede4
        ;   XREF to: 0057da41 (CONDITIONAL_JUMP)  ; LAB_0057da41
    JMP 0x0057db7c                      ; 0057edea
        ;   XREF to: 0057db7c (UNCONDITIONAL_JUMP)  ; LAB_0057db7c

