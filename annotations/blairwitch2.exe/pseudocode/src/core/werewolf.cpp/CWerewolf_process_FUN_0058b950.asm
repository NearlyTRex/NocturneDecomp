; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_0058b950(CWerewolf *this_ptr,float delta_time)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005ee64a
;   TerminatedCString s_core_werewolf_cpp_005ee674
;   TerminatedCString s_Alpha_werewolf_requires_005ee689
;   TerminatedCString s_Phase_d_Timer_f_005ee6ad
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005ee6c3
;   TerminatedCString s_werewolf_eat_wav_005ee6e4
;   undefined4 DAT_005ee6fa
;   undefined4 DAT_005ee702
;   undefined4 DAT_005ee70a
;   undefined4 DAT_005ee712
;   undefined4 DAT_005ee71a
;   undefined4 DAT_005ee722
;   undefined4 DAT_005ee72a
;   undefined4 DAT_005ee72e
;   undefined4 DAT_005ee732
;   ... and 18 more
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
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058b950
        ;   Label: core_werewolf.cpp_CWerewolf_process_FUN_0058b950
    PUSH ESI                            ; 0058b951
    PUSH EDI                            ; 0058b952
    PUSH EBP                            ; 0058b953
    MOV EBP,ESP                         ; 0058b954
    SUB ESP,0x4c4                       ; 0058b956
    SUB EBP,0x7a                        ; 0058b95c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0058b95f
    PUSH dword ptr [EBP + 0x92]         ; 0058b965
    PUSH EBX                            ; 0058b96b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0058b96c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058b971
    TEST EAX,EAX                        ; 0058b974
    JZ 0x0058b9ec                       ; 0058b976
        ;   XREF to: 0058b9ec (CONDITIONAL_JUMP)  ; LAB_0058b9ec
    CMP dword ptr [EBX + 0x10af8],0x2   ; 0058b978
    JZ 0x0058ba03                       ; 0058b97f
        ;   XREF to: 0058ba03 (CONDITIONAL_JUMP)  ; LAB_0058ba03
    LEA EAX,[EBX + 0x2508]              ; 0058b985
        ;   Label: LAB_0058b985
    MOV dword ptr [EAX + 0x8],0x0       ; 0058b98b
    FLD float ptr [EBP + 0x92]          ; 0058b992
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058b998
    MOV dword ptr [EAX + 0x4],EDX       ; 0058b99b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058b99e
    MOV dword ptr [EAX],EDX             ; 0058b9a1
    FMUL float ptr [EBX + 0x10a60]      ; 0058b9a3
    LEA EAX,[EBX + 0x2b4]               ; 0058b9a9
    FSTP float ptr [EBP + 0x3a]         ; 0058b9af
    MOV dword ptr [EBP + 0x72],EAX      ; 0058b9b2
    FLD float ptr [EBP + 0x3a]          ; 0058b9b5
        ;   Label: LAB_0058b9b5
    FLDZ                                ; 0058b9b8
    FCOMPP                              ; 0058b9ba
    FNSTSW AX                           ; 0058b9bc
    SAHF                                ; 0058b9be
    JNC 0x0058baf2                      ; 0058b9bf
        ;   XREF to: 0058baf2 (CONDITIONAL_JUMP)  ; LAB_0058baf2
    LEA EAX,[EBP + 0x3a]                ; 0058b9c5
    PUSH EAX                            ; 0058b9c8
    MOV EDI,dword ptr [EBP + 0x72]      ; 0058b9c9
    PUSH EDI                            ; 0058b9cc
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0058b9cd
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0058b9d2
    MOV ESI,EAX                         ; 0058b9d5
    CMP EAX,0xa                         ; 0058b9d7
    JNC 0x0058bad6                      ; 0058b9da
        ;   XREF to: 0058bad6 (CONDITIONAL_JUMP)  ; LAB_0058bad6
    PUSH ESI                            ; 0058b9e0
    PUSH EBX                            ; 0058b9e1
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0058b9e2
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0058b9e7
    JMP 0x0058b9b5                      ; 0058b9ea
        ;   XREF to: 0058b9b5 (UNCONDITIONAL_JUMP)  ; LAB_0058b9b5
    MOV ECX,dword ptr [EBX + 0x10b20]   ; 0058b9ec
        ;   Label: LAB_0058b9ec
    PUSH ECX                            ; 0058b9f2
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0058b9f3
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0058b9f8
    LEA ESP,[EBP + 0x7a]                ; 0058b9fb
    POP EBP                             ; 0058b9fe
    POP EDI                             ; 0058b9ff
    POP ESI                             ; 0058ba00
    POP EBX                             ; 0058ba01
    RET                                 ; 0058ba02
    FLD float ptr [EBX + 0x10b38]       ; 0058ba03
        ;   Label: LAB_0058ba03
    FLDZ                                ; 0058ba09
    FCOMPP                              ; 0058ba0b
    FNSTSW AX                           ; 0058ba0d
    SAHF                                ; 0058ba0f
    JA 0x0058b985                       ; 0058ba10
        ;   XREF to: 0058b985 (CONDITIONAL_JUMP)  ; LAB_0058b985
    FLD float ptr [EBX + 0x10b38]       ; 0058ba16
    FSUB float ptr [EBP + 0x92]         ; 0058ba1c
    FSTP float ptr [EBX + 0x10b38]      ; 0058ba22
    JMP 0x0058b985                      ; 0058ba28
        ;   XREF to: 0058b985 (UNCONDITIONAL_JUMP)  ; LAB_0058b985
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 0058ba2d
        ;   Label: LAB_0058ba2d
    PUSH EDX                            ; 0058ba33
    PUSH EDI                            ; 0058ba34
    LEA ESI,[EBP + 0xfffffd96]          ; 0058ba35
    CALL core_skeleton.cpp_FUN_005469a0 ; 0058ba3b
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA EDI,[EBP + 0xfffffd7e]          ; 0058ba40
    ADD ESP,0x8                         ; 0058ba46
    LEA EAX,[EBP + 0xfffffd7e]          ; 0058ba49
    LEA ESI,[EBP + 0xfffffd96]          ; 0058ba4f
    PUSH EAX                            ; 0058ba55
    MOVSD ES:EDI,ESI                    ; 0058ba56
    MOVSD ES:EDI,ESI                    ; 0058ba57
    MOVSD ES:EDI,ESI                    ; 0058ba58
    PUSH EBX                            ; 0058ba59
    LEA ESI,[EBP + 0xfffffda2]          ; 0058ba5a
    CALL core_actor.cpp_FUN_00408d70    ; 0058ba60
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058ba65
    LEA EDI,[EBP + 0xfffffd72]          ; 0058ba68
    PUSH 0x41400000                     ; 0058ba6e
    LEA ESI,[EBP + 0xfffffda2]          ; 0058ba73
    PUSH 0x41000000                     ; 0058ba79
    MOVSD ES:EDI,ESI                    ; 0058ba7e
    MOVSD ES:EDI,ESI                    ; 0058ba7f
    MOVSD ES:EDI,ESI                    ; 0058ba80
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058ba81
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058ba86
    ADD ESP,0x8                         ; 0058ba89
    FLD float ptr [EBP + 0x76]          ; 0058ba8c
    FMUL double ptr [0x005ee722]        ; 0058ba8f | DAT_005ee722
    PUSH 0x0                            ; 0058ba95
    CALL crt_math.c_round_FUN_005b7ff0  ; 0058ba97
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x32]        ; 0058ba9c
    MOV ESI,dword ptr [EBP + 0x32]      ; 0058ba9f
    PUSH ESI                            ; 0058baa2
    PUSH 0x0                            ; 0058baa3
    LEA EAX,[EBP + 0xfffffd72]          ; 0058baa5
    PUSH EAX                            ; 0058baab
    MOV EDI,dword ptr [0x006167e0]      ; 0058baac | g_CGorePtr
    PUSH EDI                            ; 0058bab2
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 0058bab3
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0058bab8
    JMP 0x0058b9b5                      ; 0058babb
        ;   XREF to: 0058b9b5 (UNCONDITIONAL_JUMP)  ; LAB_0058b9b5
    PUSH 0x1                            ; 0058bac0
        ;   Label: LAB_0058bac0
    PUSH EBX                            ; 0058bac2
    MOV EAX,[0x00618170]                ; 0058bac3 | DAT_00618170
    PUSH EAX                            ; 0058bac8 | DAT_01d182f0
    CALL core_mission.cpp_FUN_004fc7b0  ; 0058bac9
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    ADD ESP,0xc                         ; 0058bace
    JMP 0x0058b9b5                      ; 0058bad1
        ;   XREF to: 0058b9b5 (UNCONDITIONAL_JUMP)  ; LAB_0058b9b5
    JBE 0x0058ba2d                      ; 0058bad6
        ;   XREF to: 0058ba2d (CONDITIONAL_JUMP)  ; LAB_0058ba2d
        ;   Label: LAB_0058bad6
    CMP EAX,0x29a                       ; 0058badc
    JZ 0x0058bac0                       ; 0058bae1
        ;   XREF to: 0058bac0 (CONDITIONAL_JUMP)  ; LAB_0058bac0
    PUSH ESI                            ; 0058bae3
    PUSH EBX                            ; 0058bae4
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0058bae5
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0058baea
    JMP 0x0058b9b5                      ; 0058baed
        ;   XREF to: 0058b9b5 (UNCONDITIONAL_JUMP)  ; LAB_0058b9b5
    FLD float ptr [EBP + 0x92]          ; 0058baf2
        ;   Label: LAB_0058baf2
    FMUL float ptr [EBX + 0x10a60]      ; 0058baf8
    SUB ESP,0x4                         ; 0058bafe
    MOV EAX,dword ptr [EBX + 0x2510]    ; 0058bb01
    MOV dword ptr [EBX + 0x2594],EAX    ; 0058bb07
    FSTP float ptr [ESP]                ; 0058bb0d
    PUSH EBX                            ; 0058bb10
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0058bb11
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    MOV ESI,dword ptr [EBX + 0x10af8]   ; 0058bb16
    ADD ESP,0x8                         ; 0058bb1c
    CMP ESI,0x2                         ; 0058bb1f
    JNZ 0x0058bb3a                      ; 0058bb22
        ;   XREF to: 0058bb3a (CONDITIONAL_JUMP)  ; LAB_0058bb3a
    FLD float ptr [EBX + 0x2598]        ; 0058bb24
    FLD ST0                             ; 0058bb2a
    FMUL double ptr [0x005ee6fa]        ; 0058bb2c | DAT_005ee6fa
    FSTP ST1                            ; 0058bb32
    FSTP float ptr [EBX + 0x2598]       ; 0058bb34
    LEA ESI,[EBX + 0x2b4]               ; 0058bb3a
        ;   Label: LAB_0058bb3a
    PUSH ESI                            ; 0058bb40
    CALL core_motion.cpp_FUN_005035c0   ; 0058bb41
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0058bb46
    PUSH dword ptr [EBP + 0x92]         ; 0058bb49
    MOV EDI,dword ptr [EAX + 0x24]      ; 0058bb4f
    PUSH EBX                            ; 0058bb52
    MOV dword ptr [EBP + 0x6e],EDI      ; 0058bb53
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 0058bb56
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058bb5b
    TEST EAX,EAX                        ; 0058bb5e
    JZ 0x0058be84                       ; 0058bb60
        ;   XREF to: 0058be84 (CONDITIONAL_JUMP)  ; LAB_0058be84
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 0058bb66
    CMP EAX,0x2                         ; 0058bb6c
    JNC 0x0058be74                      ; 0058bb6f
        ;   XREF to: 0058be74 (CONDITIONAL_JUMP)  ; LAB_0058be74
    CMP EAX,0x1                         ; 0058bb75
    JNZ 0x0058be7b                      ; 0058bb78
        ;   XREF to: 0058be7b (CONDITIONAL_JUMP)  ; LAB_0058be7b
    CMP EDI,0xe                         ; 0058bb7e
    JNZ 0x0058be28                      ; 0058bb81
        ;   XREF to: 0058be28 (CONDITIONAL_JUMP)  ; LAB_0058be28
    PUSH 0x1                            ; 0058bb87
        ;   Label: LAB_0058bb87
    PUSH 0xf                            ; 0058bb89
    LEA EAX,[EBX + 0x2b4]               ; 0058bb8b
        ;   Label: LAB_0058bb8b
    PUSH EAX                            ; 0058bb91
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058bb92
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0058bb92
    ADD ESP,0xc                         ; 0058bb97
        ;   Label: LAB_0058bb97
    LEA EAX,[EBX + 0x2508]              ; 0058bb9a
        ;   Label: LAB_0058bb9a
    MOV dword ptr [EAX + 0x8],0x0       ; 0058bba0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058bba7
    MOV dword ptr [EAX + 0x4],EDX       ; 0058bbaa
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058bbad
    MOV dword ptr [EAX],EDX             ; 0058bbb0
    CMP dword ptr [EBP + 0x6e],0x13     ; 0058bbb2
        ;   Label: LAB_0058bbb2
    JNZ 0x0058cfdf                      ; 0058bbb6
        ;   XREF to: 0058cfdf (CONDITIONAL_JUMP)  ; LAB_0058cfdf
    CMP dword ptr [EBX + 0x2828],0x0    ; 0058bbbc
    JZ 0x0058cfdf                       ; 0058bbc3
        ;   XREF to: 0058cfdf (CONDITIONAL_JUMP)  ; LAB_0058cfdf
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 0058bbc9
    PUSH EAX                            ; 0058bbcf
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0058bbd0
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0058bbd5
    TEST EAX,EAX                        ; 0058bbd8
    JZ 0x0058cfc2                       ; 0058bbda
        ;   XREF to: 0058cfc2 (CONDITIONAL_JUMP)  ; LAB_0058cfc2
    MOV EDX,0x3f800000                  ; 0058bbe0
        ;   Label: LAB_0058bbe0
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 0058bbe5
    MOV dword ptr [EBP + 0x62],EDX      ; 0058bbeb
    TEST ECX,ECX                        ; 0058bbee
    JNZ 0x0058bbf9                      ; 0058bbf0
        ;   XREF to: 0058bbf9 (CONDITIONAL_JUMP)  ; LAB_0058bbf9
    MOV dword ptr [EBP + 0x62],0x3f400000 ; 0058bbf2
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0058bbf9
        ;   Label: LAB_0058bbf9
    CMP EDI,0xe                         ; 0058bbfc
    JNZ 0x0058cff3                      ; 0058bbff
        ;   XREF to: 0058cff3 (CONDITIONAL_JUMP)  ; LAB_0058cff3
    FLD float ptr [EBP + 0x62]          ; 0058bc05
        ;   Label: LAB_0058bc05
    FMUL double ptr [0x005ee73a]        ; 0058bc08 | DAT_005ee73a
    FSTP float ptr [EBX + 0x3434]       ; 0058bc0e
        ;   Label: LAB_0058bc0e
    FLD float ptr [EBX + 0x10a74]       ; 0058bc14
    FLDZ                                ; 0058bc1a
    FCOMPP                              ; 0058bc1c
    FNSTSW AX                           ; 0058bc1e
    SAHF                                ; 0058bc20
    JNC 0x0058bc35                      ; 0058bc21
        ;   XREF to: 0058bc35 (CONDITIONAL_JUMP)  ; LAB_0058bc35
    FLD float ptr [EBX + 0x10a74]       ; 0058bc23
    FSUB float ptr [EBP + 0x92]         ; 0058bc29
    FSTP float ptr [EBX + 0x10a74]      ; 0058bc2f
    LEA EAX,[EBX + 0x2b4]               ; 0058bc35
        ;   Label: LAB_0058bc35
    PUSH EAX                            ; 0058bc3b
    CALL core_motion.cpp_FUN_005035c0   ; 0058bc3c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058bc41
    ADD ESP,0x4                         ; 0058bc44
    CMP EAX,0xd                         ; 0058bc47
    JZ 0x0058d00a                       ; 0058bc4a
        ;   XREF to: 0058d00a (CONDITIONAL_JUMP)  ; LAB_0058d00a
    TEST EAX,EAX                        ; 0058bc50
    JZ 0x0058d00a                       ; 0058bc52
        ;   XREF to: 0058d00a (CONDITIONAL_JUMP)  ; LAB_0058d00a
    CMP EAX,0xe                         ; 0058bc58
    JZ 0x0058d00a                       ; 0058bc5b
        ;   XREF to: 0058d00a (CONDITIONAL_JUMP)  ; LAB_0058d00a
    CMP EAX,0x14                        ; 0058bc61
    JZ 0x0058d00a                       ; 0058bc64
        ;   XREF to: 0058d00a (CONDITIONAL_JUMP)  ; LAB_0058d00a
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 0058bc6a
        ;   Label: LAB_0058bc6a
    TEST ECX,ECX                        ; 0058bc70
    JZ 0x0058bc9e                       ; 0058bc72
        ;   XREF to: 0058bc9e (CONDITIONAL_JUMP)  ; LAB_0058bc9e
    PUSH ECX                            ; 0058bc74
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 0058bc75
    CALL dword ptr [EDX + 0xfc]         ; 0058bc7b
    ADD ESP,0x4                         ; 0058bc81
    CMP EAX,EBX                         ; 0058bc84
    JNZ 0x0058bc9e                      ; 0058bc86
        ;   XREF to: 0058bc9e (CONDITIONAL_JUMP)  ; LAB_0058bc9e
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0058bc88
    PUSH ESI                            ; 0058bc8e
    MOV EDI,dword ptr [0x0061b5a8]      ; 0058bc8f | g_CDemonSetPtr
    PUSH EDI                            ; 0058bc95 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0058bc96
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058bc9b
    PUSH dword ptr [EBP + 0x92]         ; 0058bc9e
        ;   Label: LAB_0058bc9e
    PUSH EBX                            ; 0058bca4
    LEA ESI,[EBX + 0x2588]              ; 0058bca5
    CALL core_charactr.cpp_FUN_00423a10 ; 0058bcab
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 0058bcb0
    FMUL float ptr [EBP + 0x92]         ; 0058bcb2
    FLD float ptr [ESI + 0x4]           ; 0058bcb8
    FMUL float ptr [EBP + 0x92]         ; 0058bcbb
    FLD float ptr [ESI + 0x8]           ; 0058bcc1
    FMUL float ptr [EBP + 0x92]         ; 0058bcc4
    LEA EDI,[EBP + 0x6]                 ; 0058bcca
    LEA ESI,[EBP + 0xffffff5e]          ; 0058bccd
    FXCH ST2                            ; 0058bcd3
    FSTP float ptr [EBP + 0xffffff5e]   ; 0058bcd5
    FSTP float ptr [EBP + 0xffffff62]   ; 0058bcdb
    FSTP float ptr [EBP + 0xffffff66]   ; 0058bce1
    MOVSD ES:EDI,ESI                    ; 0058bce7
    MOVSD ES:EDI,ESI                    ; 0058bce8
    MOVSD ES:EDI,ESI                    ; 0058bce9
    LEA EDX,[EBX + 0x2508]              ; 0058bcea
    FLD float ptr [EBP + 0x6]           ; 0058bcf0
    FLD float ptr [EBP + 0xa]           ; 0058bcf3
    FLD float ptr [EBP + 0xe]           ; 0058bcf6
    LEA EDI,[EBP + 0xfffffe02]          ; 0058bcf9
    LEA ESI,[EBP + 0xffffff3a]          ; 0058bcff
    FXCH ST2                            ; 0058bd05
    FADD float ptr [EDX]                ; 0058bd07
    FXCH                                ; 0058bd09
    FADD float ptr [EDX + 0x4]          ; 0058bd0b
    FXCH ST2                            ; 0058bd0e
    FADD float ptr [EDX + 0x8]          ; 0058bd10
    FXCH                                ; 0058bd13
    FSTP float ptr [EBP + 0xffffff3a]   ; 0058bd15
    FXCH                                ; 0058bd1b
    FSTP float ptr [EBP + 0xffffff3e]   ; 0058bd1d
    FSTP float ptr [EBP + 0xffffff42]   ; 0058bd23
    MOVSD ES:EDI,ESI                    ; 0058bd29
    MOVSD ES:EDI,ESI                    ; 0058bd2a
    MOVSD ES:EDI,ESI                    ; 0058bd2b
    LEA EAX,[EBX + 0x257c]              ; 0058bd2c
    FLD float ptr [EBP + 0xfffffe02]    ; 0058bd32
    FLD float ptr [EBP + 0xfffffe06]    ; 0058bd38
    FLD float ptr [EBP + 0xfffffe0a]    ; 0058bd3e
    LEA EDI,[EBP + 0xffffff16]          ; 0058bd44
    LEA ESI,[EBP + 0xffffff52]          ; 0058bd4a
    FXCH ST2                            ; 0058bd50
    FADD float ptr [EAX]                ; 0058bd52
    FXCH                                ; 0058bd54
    FADD float ptr [EAX + 0x4]          ; 0058bd56
    FXCH ST2                            ; 0058bd59
    FADD float ptr [EAX + 0x8]          ; 0058bd5b
    FXCH                                ; 0058bd5e
    FSTP float ptr [EBP + 0xffffff52]   ; 0058bd60
    FXCH                                ; 0058bd66
    FSTP float ptr [EBP + 0xffffff56]   ; 0058bd68
    FSTP float ptr [EBP + 0xffffff5a]   ; 0058bd6e
    MOVSD ES:EDI,ESI                    ; 0058bd74
    MOVSD ES:EDI,ESI                    ; 0058bd75
    MOVSD ES:EDI,ESI                    ; 0058bd76
    MOV dword ptr [EDX + 0x8],0x0       ; 0058bd77
    MOV ECX,dword ptr [EDX + 0x8]       ; 0058bd7e
    MOV dword ptr [EDX + 0x4],ECX       ; 0058bd81
    MOV ECX,dword ptr [EDX + 0x4]       ; 0058bd84
    MOV dword ptr [EDX],ECX             ; 0058bd87
    MOV dword ptr [EAX + 0x8],0x0       ; 0058bd89
    ADD ESP,0x8                         ; 0058bd90
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058bd93
    MOV dword ptr [EAX + 0x4],EDX       ; 0058bd96
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058bd99
    MOV dword ptr [EAX],EDX             ; 0058bd9c
    LEA EAX,[EBP + 0xffffff16]          ; 0058bd9e
    PUSH EAX                            ; 0058bda4
    PUSH EBX                            ; 0058bda5
    CALL core_charactr.cpp_FUN_00423a60 ; 0058bda6
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0058bdab
    PUSH EBX                            ; 0058bdae
        ;   Label: LAB_0058bdae
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 0058bdaf
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0058bdb4
    LEA EAX,[EBX + 0x2b4]               ; 0058bdb7
    PUSH EAX                            ; 0058bdbd
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0058bdbe
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058bdc3
    PUSH dword ptr [EBP + 0x92]         ; 0058bdc6
    PUSH EBX                            ; 0058bdcc
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0058bdcd
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058bdd2
    PUSH EBX                            ; 0058bdd5
    CALL core_werewolf.cpp_FUN_0058dd00 ; 0058bdd6
        ;   XREF to: 0058dd00 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_FUN_0058dd00()
    FLD float ptr [EBP + 0x92]          ; 0058bddb
    FMUL double ptr [0x005ee742]        ; 0058bde1 | DAT_005ee742
    FLD float ptr [EBX + 0x10b3c]       ; 0058bde7
    FXCH                                ; 0058bded
    FADD ST0,ST1                        ; 0058bdef
    ADD ESP,0x4                         ; 0058bdf1
    FSTP ST1                            ; 0058bdf4
    FSTP float ptr [EBX + 0x10b3c]      ; 0058bdf6
    LEA ESP,[EBP + 0x7a]                ; 0058bdfc
    POP EBP                             ; 0058bdff
    POP EDI                             ; 0058be00
    POP ESI                             ; 0058be01
    POP EBX                             ; 0058be02
    RET                                 ; 0058be03
    PUSH 0x1                            ; 0058be04
        ;   Label: LAB_0058be04
    PUSH 0x0                            ; 0058be06
    PUSH ESI                            ; 0058be08
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058be09
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058be0e
    PUSH EBX                            ; 0058be11
    PUSH 0x5ee64a                       ; 0058be12 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 0058be17 | g_CConsolePtr
    PUSH ESI                            ; 0058be1d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0058be1e
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x0058bb97                      ; 0058be23
        ;   XREF to: 0058bb97 (UNCONDITIONAL_JUMP)  ; LAB_0058bb97
    CMP EDI,0xf                         ; 0058be28
        ;   Label: LAB_0058be28
    JZ 0x0058bb87                       ; 0058be2b
        ;   XREF to: 0058bb87 (CONDITIONAL_JUMP)  ; LAB_0058bb87
    PUSH EAX                            ; 0058be31
    PUSH EAX                            ; 0058be32
    PUSH ESI                            ; 0058be33
    JMP 0x0058bb92                      ; 0058be34
        ;   XREF to: 0058bb92 (UNCONDITIONAL_JUMP)  ; LAB_0058bb92
    CMP EDI,0xe                         ; 0058be39
        ;   Label: LAB_0058be39
    JZ 0x0058bb87                       ; 0058be3c
        ;   XREF to: 0058bb87 (CONDITIONAL_JUMP)  ; LAB_0058bb87
    CMP EDI,0xf                         ; 0058be42
    JZ 0x0058bb87                       ; 0058be45
        ;   XREF to: 0058bb87 (CONDITIONAL_JUMP)  ; LAB_0058bb87
    FLD float ptr [EBX + 0x2578]        ; 0058be4b
    FABS                                ; 0058be51
    FLD float ptr [EBX + 0x2598]        ; 0058be53
    FCOMPP                              ; 0058be59
    FNSTSW AX                           ; 0058be5b
    SAHF                                ; 0058be5d
    JBE 0x0058be6a                      ; 0058be5e
        ;   XREF to: 0058be6a (CONDITIONAL_JUMP)  ; LAB_0058be6a
    PUSH 0x1                            ; 0058be60
    PUSH 0x8                            ; 0058be62
    PUSH ESI                            ; 0058be64
    JMP 0x0058bb92                      ; 0058be65
        ;   XREF to: 0058bb92 (UNCONDITIONAL_JUMP)  ; LAB_0058bb92
    PUSH 0x1                            ; 0058be6a
        ;   Label: LAB_0058be6a
    PUSH 0x1                            ; 0058be6c
    PUSH ESI                            ; 0058be6e
    JMP 0x0058bb92                      ; 0058be6f
        ;   XREF to: 0058bb92 (UNCONDITIONAL_JUMP)  ; LAB_0058bb92
    JBE 0x0058be39                      ; 0058be74
        ;   XREF to: 0058be39 (CONDITIONAL_JUMP)  ; LAB_0058be39
        ;   Label: LAB_0058be74
    CMP EAX,0x3                         ; 0058be76
    JZ 0x0058be04                       ; 0058be79
        ;   XREF to: 0058be04 (CONDITIONAL_JUMP)  ; LAB_0058be04
    PUSH 0x1                            ; 0058be7b
        ;   Label: LAB_0058be7b
    PUSH 0x0                            ; 0058be7d
    JMP 0x0058bb8b                      ; 0058be7f
        ;   XREF to: 0058bb8b (UNCONDITIONAL_JUMP)  ; LAB_0058bb8b
    PUSH EBX                            ; 0058be84
        ;   Label: LAB_0058be84
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058be85
    CALL dword ptr [EAX + 0x114]        ; 0058be8b
    ADD ESP,0x4                         ; 0058be91
    TEST EAX,EAX                        ; 0058be94
    JNZ 0x0058c0c7                      ; 0058be96
        ;   XREF to: 0058c0c7 (CONDITIONAL_JUMP)  ; LAB_0058c0c7
    MOV EAX,[0x01cedef4]                ; 0058be9c | DAT_01cedef4
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0058bea1
    CMP EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0058bea7
    JNZ 0x0058c0c7                      ; 0058beae
        ;   XREF to: 0058c0c7 (CONDITIONAL_JUMP)  ; LAB_0058c0c7
    LEA EAX,[EBP + 0xfffffbb6]          ; 0058beb4
    PUSH EAX                            ; 0058beba
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0058bebb
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0058bec0
    PUSH 0x41700000                     ; 0058bec3
    PUSH 0x40e00000                     ; 0058bec8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058becd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058bed2
    ADD ESP,0x8                         ; 0058bed5
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 0058bed8
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 0058bede
    LEA EAX,[EBP + 0xfffffbb6]          ; 0058bee4
    FLD float ptr [EBP + 0x76]          ; 0058beea
    PUSH EAX                            ; 0058beed
    FSTP float ptr [EBP + 0xfffffbba]   ; 0058beee
    SUB ESP,0x4                         ; 0058bef4
    MOV EAX,dword ptr [EBX + 0x2824]    ; 0058bef7
    MOV dword ptr [ESP],EAX             ; 0058befd
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 0058bf00
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058bf06
    SUB EAX,EDX                         ; 0058bf0d
    SHL EAX,0x4                         ; 0058bf0f
    LEA EDX,[EBX + 0x1134]              ; 0058bf12
    ADD EAX,EDX                         ; 0058bf18
    PUSH EAX                            ; 0058bf1a
    LEA ESI,[EBP + 0xfffffd42]          ; 0058bf1b
    PUSH 0x265370c                      ; 0058bf21 | DAT_0265370c
    LEA EDI,[EBP + 0xfffffce2]          ; 0058bf26
    MOV dword ptr [EBP + 0x5a],EDX      ; 0058bf2c
    CALL core_xform.cpp_FUN_00591530    ; 0058bf2f
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058bf34
    LEA EAX,[EBP + 0xfffffce2]          ; 0058bf37
    LEA ESI,[EBP + 0xfffffd42]          ; 0058bf3d
    PUSH EAX                            ; 0058bf43
    MOVSD ES:EDI,ESI                    ; 0058bf44
    MOVSD ES:EDI,ESI                    ; 0058bf45
    MOVSD ES:EDI,ESI                    ; 0058bf46
    PUSH EBX                            ; 0058bf47
    LEA ESI,[EBP + 0xfffffeaa]          ; 0058bf48
    CALL core_actor.cpp_FUN_00408d70    ; 0058bf4e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058bf53
    LEA EAX,[EBP + 0xfffffeb6]          ; 0058bf56
    PUSH EAX                            ; 0058bf5c
    LEA EDI,[EBP + 0xfffffeb6]          ; 0058bf5d
    LEA ESI,[EBP + 0xfffffeaa]          ; 0058bf63
    PUSH EBX                            ; 0058bf69
    MOVSD ES:EDI,ESI                    ; 0058bf6a
    MOVSD ES:EDI,ESI                    ; 0058bf6b
    MOVSD ES:EDI,ESI                    ; 0058bf6c
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058bf6d
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0058bf72
    PUSH 0x41700000                     ; 0058bf75
    PUSH 0x40e00000                     ; 0058bf7a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058bf7f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058bf84
    ADD ESP,0x8                         ; 0058bf87
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 0058bf8a
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 0058bf90
    LEA EAX,[EBP + 0xfffffbb6]          ; 0058bf96
    FLD float ptr [EBP + 0x76]          ; 0058bf9c
    PUSH EAX                            ; 0058bf9f
    FSTP float ptr [EBP + 0xfffffbba]   ; 0058bfa0
    SUB ESP,0x4                         ; 0058bfa6
    MOV EAX,dword ptr [EBX + 0x2824]    ; 0058bfa9
    MOV dword ptr [ESP],EAX             ; 0058bfaf
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 0058bfb2
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058bfb8
    SUB EAX,EDX                         ; 0058bfbf
    MOV ECX,dword ptr [EBP + 0x5a]      ; 0058bfc1
    SHL EAX,0x4                         ; 0058bfc4
    ADD EAX,ECX                         ; 0058bfc7
    PUSH EAX                            ; 0058bfc9
    PUSH 0x265370c                      ; 0058bfca | DAT_0265370c
    LEA ESI,[EBP + 0xfffffd8a]          ; 0058bfcf
    LEA EDI,[EBP + 0xfffffd36]          ; 0058bfd5
    CALL core_xform.cpp_FUN_00591530    ; 0058bfdb
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058bfe0
    LEA EAX,[EBP + 0xfffffd36]          ; 0058bfe3
    LEA ESI,[EBP + 0xfffffd8a]          ; 0058bfe9
    PUSH EAX                            ; 0058bfef
    MOVSD ES:EDI,ESI                    ; 0058bff0
    MOVSD ES:EDI,ESI                    ; 0058bff1
    MOVSD ES:EDI,ESI                    ; 0058bff2
    PUSH EBX                            ; 0058bff3
    LEA ESI,[EBP + 0xfffffe86]          ; 0058bff4
    CALL core_actor.cpp_FUN_00408d70    ; 0058bffa
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058bfff
    LEA EAX,[EBP + 0xfffffece]          ; 0058c002
    PUSH EAX                            ; 0058c008
    LEA EDI,[EBP + 0xfffffece]          ; 0058c009
    LEA ESI,[EBP + 0xfffffe86]          ; 0058c00f
    PUSH EBX                            ; 0058c015
    MOVSD ES:EDI,ESI                    ; 0058c016
    MOVSD ES:EDI,ESI                    ; 0058c017
    MOVSD ES:EDI,ESI                    ; 0058c018
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058c019
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0058c01e
    PUSH 0x41700000                     ; 0058c021
    PUSH 0x40e00000                     ; 0058c026
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058c02b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058c030
    ADD ESP,0x8                         ; 0058c033
    MOV EAX,dword ptr [EBP + 0x76]      ; 0058c036
    MOV dword ptr [EBP + 0xfffffbba],EAX ; 0058c039
    LEA EAX,[EBP + 0xfffffbb6]          ; 0058c03f
    PUSH EAX                            ; 0058c045
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 0058c046
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 0058c04c
    SUB ESP,0x4                         ; 0058c052
    MOV EAX,dword ptr [EBX + 0x2824]    ; 0058c055
    MOV dword ptr [ESP],EAX             ; 0058c05b
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 0058c05e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058c064
    SUB EAX,EDX                         ; 0058c06b
    MOV ESI,dword ptr [EBP + 0x5a]      ; 0058c06d
    SHL EAX,0x4                         ; 0058c070
    ADD EAX,ESI                         ; 0058c073
    PUSH EAX                            ; 0058c075
    PUSH 0x265370c                      ; 0058c076 | DAT_0265370c
    LEA ESI,[EBP + 0xfffffdd2]          ; 0058c07b
    LEA EDI,[EBP + 0xfffffd12]          ; 0058c081
    CALL core_xform.cpp_FUN_00591530    ; 0058c087
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058c08c
    LEA EAX,[EBP + 0xfffffd12]          ; 0058c08f
    LEA ESI,[EBP + 0xfffffdd2]          ; 0058c095
    PUSH EAX                            ; 0058c09b
    MOVSD ES:EDI,ESI                    ; 0058c09c
    MOVSD ES:EDI,ESI                    ; 0058c09d
    MOVSD ES:EDI,ESI                    ; 0058c09e
    PUSH EBX                            ; 0058c09f
    LEA ESI,[EBP + -0x4e]               ; 0058c0a0
    CALL core_actor.cpp_FUN_00408d70    ; 0058c0a3
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058c0a8
    LEA EAX,[EBP + 0xfffffee6]          ; 0058c0ab
    PUSH EAX                            ; 0058c0b1
    LEA EDI,[EBP + 0xfffffee6]          ; 0058c0b2
    LEA ESI,[EBP + -0x4e]               ; 0058c0b8
    PUSH EBX                            ; 0058c0bb
    MOVSD ES:EDI,ESI                    ; 0058c0bc
    MOVSD ES:EDI,ESI                    ; 0058c0bd
    MOVSD ES:EDI,ESI                    ; 0058c0be
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058c0bf
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0058c0c4
    LEA EAX,[EBX + 0x1134]              ; 0058c0c7
        ;   Label: LAB_0058c0c7
    MOV dword ptr [EBP + 0x66],EAX      ; 0058c0cd
    MOV EAX,[0x01cedef4]                ; 0058c0d0 | DAT_01cedef4
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0058c0d5
    SHL EAX,0x2                         ; 0058c0d8
    CMP EDI,0x4                         ; 0058c0db
    JNC 0x0058ce67                      ; 0058c0de
        ;   XREF to: 0058ce67 (CONDITIONAL_JUMP)  ; LAB_0058ce67
    CMP EDI,0x1                         ; 0058c0e4
    JNC 0x0058ceb5                      ; 0058c0e7
        ;   XREF to: 0058ceb5 (CONDITIONAL_JUMP)  ; LAB_0058ceb5
    TEST EDI,EDI                        ; 0058c0ed
    JNZ 0x0058bbb2                      ; 0058c0ef
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH dword ptr [EBP + 0x92]         ; 0058c0f5
        ;   Label: LAB_0058c0f5
    PUSH EBX                            ; 0058c0fb
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0058c0fc
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058c101
    TEST EAX,EAX                        ; 0058c104
    JZ 0x0058c593                       ; 0058c106
        ;   XREF to: 0058c593 (CONDITIONAL_JUMP)  ; LAB_0058c593
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0058c10c
    LEA EAX,[EBX + 0x2b4]               ; 0058c10f
    CMP ECX,0xe                         ; 0058c115
    JNZ 0x0058c581                      ; 0058c118
        ;   XREF to: 0058c581 (CONDITIONAL_JUMP)  ; LAB_0058c581
    PUSH 0x1                            ; 0058c11e
    PUSH 0xf                            ; 0058c120
    PUSH EAX                            ; 0058c122
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c123
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c128
    JMP 0x0058bbb2                      ; 0058c12b
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    MOV ESI,dword ptr [EAX + 0x1cedee4] ; 0058c130
        ;   Label: LAB_0058c130
    CMP ESI,dword ptr [EBX + 0x10a78]   ; 0058c136
    JNZ 0x0058c281                      ; 0058c13c
        ;   XREF to: 0058c281 (CONDITIONAL_JUMP)  ; LAB_0058c281
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0058c142
        ;   Label: LAB_0058c142
    TEST ESI,ESI                        ; 0058c148
    JZ 0x0058c173                       ; 0058c14a
        ;   XREF to: 0058c173 (CONDITIONAL_JUMP)  ; LAB_0058c173
    PUSH ESI                            ; 0058c14c
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 0058c14d
    CALL dword ptr [EDX + 0x114]        ; 0058c153
    ADD ESP,0x4                         ; 0058c159
    TEST EAX,EAX                        ; 0058c15c
    JZ 0x0058c173                       ; 0058c15e
        ;   XREF to: 0058c173 (CONDITIONAL_JUMP)  ; LAB_0058c173
    PUSH 0x1                            ; 0058c160
    PUSH 0x7                            ; 0058c162
    LEA EAX,[EBX + 0x2b4]               ; 0058c164
    PUSH EAX                            ; 0058c16a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c16b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c170
    MOV EDX,dword ptr [0x01cedef4]      ; 0058c173 | DAT_01cedef4
        ;   Label: LAB_0058c173
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0058c179
    CMP EAX,dword ptr [EDX*0x4 + 0x1cedee4] ; 0058c17f
    JZ 0x0058c243                       ; 0058c186
        ;   XREF to: 0058c243 (CONDITIONAL_JUMP)  ; LAB_0058c243
    LEA EAX,[EBP + 0xfffffca6]          ; 0058c18c
    PUSH EAX                            ; 0058c192
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0058c193
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0058c198
    PUSH 0x41700000                     ; 0058c19b
    PUSH 0x40e00000                     ; 0058c1a0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058c1a5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058c1aa
    MOV dword ptr [EBP + 0xfffffcda],EBX ; 0058c1ad
    MOV dword ptr [EBP + 0xfffffcde],EBX ; 0058c1b3
    ADD ESP,0x8                         ; 0058c1b9
    FLD float ptr [EBP + 0x76]          ; 0058c1bc
    LEA EAX,[EBP + 0xfffffca6]          ; 0058c1bf
    FSTP float ptr [EBP + 0xfffffcaa]   ; 0058c1c5
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 0058c1cb
    PUSH EAX                            ; 0058c1d1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058c1d2
    SUB EAX,EDX                         ; 0058c1d9
    SHL EAX,0x4                         ; 0058c1db
    LEA EDX,[EBX + 0x1134]              ; 0058c1de
    ADD EAX,EDX                         ; 0058c1e4
    PUSH 0x3ecccccd                     ; 0058c1e6
    PUSH EAX                            ; 0058c1eb
    PUSH 0x265370c                      ; 0058c1ec | DAT_0265370c
    LEA ESI,[EBP + 0xfffffefe]          ; 0058c1f1
    LEA EDI,[EBP + 0xfffffdde]          ; 0058c1f7
    CALL core_xform.cpp_FUN_00591530    ; 0058c1fd
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058c202
    LEA EAX,[EBP + 0xfffffdde]          ; 0058c205
    LEA ESI,[EBP + 0xfffffefe]          ; 0058c20b
    PUSH EAX                            ; 0058c211
    MOVSD ES:EDI,ESI                    ; 0058c212
    MOVSD ES:EDI,ESI                    ; 0058c213
    MOVSD ES:EDI,ESI                    ; 0058c214
    PUSH EBX                            ; 0058c215
    LEA ESI,[EBP + 0xffffff6a]          ; 0058c216
    CALL core_actor.cpp_FUN_00408d70    ; 0058c21c
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058c221
    LEA EAX,[EBP + 0xfffffdea]          ; 0058c224
    PUSH EAX                            ; 0058c22a
    LEA EDI,[EBP + 0xfffffdea]          ; 0058c22b
    LEA ESI,[EBP + 0xffffff6a]          ; 0058c231
    PUSH EBX                            ; 0058c237
    MOVSD ES:EDI,ESI                    ; 0058c238
    MOVSD ES:EDI,ESI                    ; 0058c239
    MOVSD ES:EDI,ESI                    ; 0058c23a
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058c23b
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0058c240
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0058c243
        ;   Label: LAB_0058c243
    TEST ESI,ESI                        ; 0058c249
    JZ 0x0058bbb2                       ; 0058c24b
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH ESI                            ; 0058c251
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 0058c252
    CALL dword ptr [EDX + 0x114]        ; 0058c258
    ADD ESP,0x4                         ; 0058c25e
    TEST EAX,EAX                        ; 0058c261
    JZ 0x0058bbb2                       ; 0058c263
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH 0x1                            ; 0058c269
    PUSH 0x7                            ; 0058c26b
    LEA EAX,[EBX + 0x2b4]               ; 0058c26d
    PUSH EAX                            ; 0058c273
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c274
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c279
    JMP 0x0058bbb2                      ; 0058c27c
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    LEA EAX,[EBP + 0xfffffc2e]          ; 0058c281
        ;   Label: LAB_0058c281
    PUSH EAX                            ; 0058c287
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0058c288
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0058c28d
    PUSH 0x41700000                     ; 0058c290
    PUSH 0x40e00000                     ; 0058c295
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058c29a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058c29f
    MOV dword ptr [EBP + 0xfffffc62],EBX ; 0058c2a2
    MOV dword ptr [EBP + 0xfffffc66],EBX ; 0058c2a8
    ADD ESP,0x8                         ; 0058c2ae
    FLD float ptr [EBP + 0x76]          ; 0058c2b1
    LEA EAX,[EBP + 0xfffffc2e]          ; 0058c2b4
    FSTP float ptr [EBP + 0xfffffc32]   ; 0058c2ba
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 0058c2c0
    PUSH EAX                            ; 0058c2c6
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058c2c7
    SUB EAX,EDX                         ; 0058c2ce
    MOV EDI,dword ptr [EBP + 0x66]      ; 0058c2d0
    SHL EAX,0x4                         ; 0058c2d3
    ADD EAX,EDI                         ; 0058c2d6
    PUSH 0x3f800000                     ; 0058c2d8
    PUSH EAX                            ; 0058c2dd
    PUSH 0x265370c                      ; 0058c2de | DAT_0265370c
    LEA ESI,[EBP + 0x12]                ; 0058c2e3
    LEA EDI,[EBP + 0xfffffe3e]          ; 0058c2e6
    CALL core_xform.cpp_FUN_00591530    ; 0058c2ec
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058c2f1
    LEA EAX,[EBP + 0xfffffe3e]          ; 0058c2f4
    LEA ESI,[EBP + 0x12]                ; 0058c2fa
    PUSH EAX                            ; 0058c2fd
    MOVSD ES:EDI,ESI                    ; 0058c2fe
    MOVSD ES:EDI,ESI                    ; 0058c2ff
    MOVSD ES:EDI,ESI                    ; 0058c300
    PUSH EBX                            ; 0058c301
    LEA ESI,[EBP + 0xfffffd06]          ; 0058c302
    CALL core_actor.cpp_FUN_00408d70    ; 0058c308
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058c30d
    LEA EAX,[EBP + 0xfffffe4a]          ; 0058c310
    PUSH EAX                            ; 0058c316
    LEA EDI,[EBP + 0xfffffe4a]          ; 0058c317
    LEA ESI,[EBP + 0xfffffd06]          ; 0058c31d
    PUSH EBX                            ; 0058c323
    MOVSD ES:EDI,ESI                    ; 0058c324
    MOVSD ES:EDI,ESI                    ; 0058c325
    MOVSD ES:EDI,ESI                    ; 0058c326
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058c327
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0058c32c
    LEA EAX,[EBP + 0xfffffc2e]          ; 0058c32f
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 0058c335
    PUSH EAX                            ; 0058c33b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058c33c
    SUB EAX,EDX                         ; 0058c343
    MOV EDX,dword ptr [EBP + 0x66]      ; 0058c345
    SHL EAX,0x4                         ; 0058c348
    ADD EAX,EDX                         ; 0058c34b
    PUSH 0x3f800000                     ; 0058c34d
    PUSH EAX                            ; 0058c352
    PUSH 0x265370c                      ; 0058c353 | DAT_0265370c
    LEA ESI,[EBP + 0xfffffd1e]          ; 0058c358
    LEA EDI,[EBP + 0xfffffcee]          ; 0058c35e
    CALL core_xform.cpp_FUN_00591530    ; 0058c364
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058c369
    LEA EAX,[EBP + 0xfffffcee]          ; 0058c36c
    LEA ESI,[EBP + 0xfffffd1e]          ; 0058c372
    PUSH EAX                            ; 0058c378
    MOVSD ES:EDI,ESI                    ; 0058c379
    MOVSD ES:EDI,ESI                    ; 0058c37a
    MOVSD ES:EDI,ESI                    ; 0058c37b
    PUSH EBX                            ; 0058c37c
    LEA ESI,[EBP + -0x66]               ; 0058c37d
    CALL core_actor.cpp_FUN_00408d70    ; 0058c380
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058c385
    LEA EAX,[EBP + 0xfffffe7a]          ; 0058c388
    PUSH EAX                            ; 0058c38e
    LEA EDI,[EBP + 0xfffffe7a]          ; 0058c38f
    LEA ESI,[EBP + -0x66]               ; 0058c395
    PUSH EBX                            ; 0058c398
    MOVSD ES:EDI,ESI                    ; 0058c399
    MOVSD ES:EDI,ESI                    ; 0058c39a
    MOVSD ES:EDI,ESI                    ; 0058c39b
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058c39c
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0058c3a1
    LEA EAX,[EBP + 0xfffffc2e]          ; 0058c3a4
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 0058c3aa
    PUSH EAX                            ; 0058c3b0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058c3b1
    SUB EAX,EDX                         ; 0058c3b8
    MOV ECX,dword ptr [EBP + 0x66]      ; 0058c3ba
    SHL EAX,0x4                         ; 0058c3bd
    ADD EAX,ECX                         ; 0058c3c0
    PUSH 0x3f800000                     ; 0058c3c2
    PUSH EAX                            ; 0058c3c7
    PUSH 0x265370c                      ; 0058c3c8 | DAT_0265370c
    LEA ESI,[EBP + 0xfffffd4e]          ; 0058c3cd
    LEA EDI,[EBP + 0xfffffdae]          ; 0058c3d3
    CALL core_xform.cpp_FUN_00591530    ; 0058c3d9
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058c3de
    LEA EAX,[EBP + 0xfffffdae]          ; 0058c3e1
    LEA ESI,[EBP + 0xfffffd4e]          ; 0058c3e7
    PUSH EAX                            ; 0058c3ed
    MOVSD ES:EDI,ESI                    ; 0058c3ee
    MOVSD ES:EDI,ESI                    ; 0058c3ef
    MOVSD ES:EDI,ESI                    ; 0058c3f0
    PUSH EBX                            ; 0058c3f1
    LEA ESI,[EBP + 0xffffff2e]          ; 0058c3f2
    CALL core_actor.cpp_FUN_00408d70    ; 0058c3f8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058c3fd
    LEA EAX,[EBP + 0xfffffe92]          ; 0058c400
    PUSH EAX                            ; 0058c406
    LEA EDI,[EBP + 0xfffffe92]          ; 0058c407
    LEA ESI,[EBP + 0xffffff2e]          ; 0058c40d
    PUSH EBX                            ; 0058c413
    MOVSD ES:EDI,ESI                    ; 0058c414
    MOVSD ES:EDI,ESI                    ; 0058c415
    MOVSD ES:EDI,ESI                    ; 0058c416
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058c417
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0058c41c
    JMP 0x0058c142                      ; 0058c41f
        ;   XREF to: 0058c142 (UNCONDITIONAL_JUMP)  ; LAB_0058c142
    LEA EAX,[EBP + 0xfffffc6a]          ; 0058c424
        ;   Label: LAB_0058c424
    PUSH EAX                            ; 0058c42a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0058c42b
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0058c430
    PUSH 0x41700000                     ; 0058c433
    PUSH 0x40e00000                     ; 0058c438
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058c43d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058c442
    MOV dword ptr [EBP + 0xfffffc9e],EBX ; 0058c445
    MOV dword ptr [EBP + 0xfffffca2],EBX ; 0058c44b
    ADD ESP,0x8                         ; 0058c451
    FLD float ptr [EBP + 0x76]          ; 0058c454
    LEA EAX,[EBP + 0xfffffc6a]          ; 0058c457
    FSTP float ptr [EBP + 0xfffffc6e]   ; 0058c45d
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 0058c463
    PUSH EAX                            ; 0058c469
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058c46a
    SUB EAX,EDX                         ; 0058c471
    MOV EDI,dword ptr [EBP + 0x66]      ; 0058c473
    SHL EAX,0x4                         ; 0058c476
    ADD EAX,EDI                         ; 0058c479
    PUSH 0x3ecccccd                     ; 0058c47b
    PUSH EAX                            ; 0058c480
    PUSH 0x265370c                      ; 0058c481 | DAT_0265370c
    LEA ESI,[EBP + 0xfffffdba]          ; 0058c486
    LEA EDI,[EBP + 0xffffff46]          ; 0058c48c
    CALL core_xform.cpp_FUN_00591530    ; 0058c492
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058c497
    LEA EAX,[EBP + 0xffffff46]          ; 0058c49a
    LEA ESI,[EBP + 0xfffffdba]          ; 0058c4a0
    PUSH EAX                            ; 0058c4a6
    MOVSD ES:EDI,ESI                    ; 0058c4a7
    MOVSD ES:EDI,ESI                    ; 0058c4a8
    MOVSD ES:EDI,ESI                    ; 0058c4a9
    PUSH EBX                            ; 0058c4aa
    LEA ESI,[EBP + -0x7e]               ; 0058c4ab
    CALL core_actor.cpp_FUN_00408d70    ; 0058c4ae
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058c4b3
    LEA EAX,[EBP + -0x5a]               ; 0058c4b6
    PUSH EAX                            ; 0058c4b9
    LEA EDI,[EBP + -0x5a]               ; 0058c4ba
    LEA ESI,[EBP + -0x7e]               ; 0058c4bd
    PUSH EBX                            ; 0058c4c0
    MOVSD ES:EDI,ESI                    ; 0058c4c1
    MOVSD ES:EDI,ESI                    ; 0058c4c2
    MOVSD ES:EDI,ESI                    ; 0058c4c3
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058c4c4
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0058c4c9
    ADD ESP,0x10                        ; 0058c4cf
    TEST EAX,EAX                        ; 0058c4d2
    JZ 0x0058bbb2                       ; 0058c4d4
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH EAX                            ; 0058c4da
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0058c4db
    CALL dword ptr [EDX + 0x114]        ; 0058c4e1
    ADD ESP,0x4                         ; 0058c4e7
    TEST EAX,EAX                        ; 0058c4ea
    JZ 0x0058bbb2                       ; 0058c4ec
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH 0x1                            ; 0058c4f2
    PUSH 0x7                            ; 0058c4f4
    MOV EDX,dword ptr [EBP + 0x4e]      ; 0058c4f6
    PUSH EDX                            ; 0058c4f9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c4fa
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c4ff
    JMP 0x0058bbb2                      ; 0058c502
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    MOV EDI,dword ptr [EBX + 0x10a64]   ; 0058c507
        ;   Label: LAB_0058c507
    TEST EDI,EDI                        ; 0058c50d
    JNZ 0x0058bbb2                      ; 0058c50f
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    CMP dword ptr [EBX + 0xdc],0x0      ; 0058c515
    JNZ 0x0058bbb2                      ; 0058c51c
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH EDI                            ; 0058c522
    PUSH EDX                            ; 0058c523
    LEA ESI,[EBP + 0x1e]                ; 0058c524
    LEA EDI,[EBP + 0xfffffef2]          ; 0058c527
    CALL core_skeleton.cpp_FUN_005469a0 ; 0058c52d
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0058c532
    LEA EAX,[EBP + 0xfffffef2]          ; 0058c535
    LEA ESI,[EBP + 0x1e]                ; 0058c53b
    PUSH EAX                            ; 0058c53e
    MOVSD ES:EDI,ESI                    ; 0058c53f
    MOVSD ES:EDI,ESI                    ; 0058c540
    MOVSD ES:EDI,ESI                    ; 0058c541
    PUSH EBX                            ; 0058c542
    LEA ESI,[EBP + 0xffffff0a]          ; 0058c543
    CALL core_actor.cpp_FUN_00408d70    ; 0058c549
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058c54e
    PUSH 0x0                            ; 0058c551
    LEA EAX,[EBP + -0x72]               ; 0058c553
    LEA EDI,[EBP + -0x72]               ; 0058c556
    PUSH EAX                            ; 0058c559
    MOV ECX,dword ptr [0x006167e0]      ; 0058c55a | g_CGorePtr
    LEA ESI,[EBP + 0xffffff0a]          ; 0058c560
    PUSH ECX                            ; 0058c566
    MOVSD ES:EDI,ESI                    ; 0058c567
    MOVSD ES:EDI,ESI                    ; 0058c568
    MOVSD ES:EDI,ESI                    ; 0058c569
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 0058c56a
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0058c56f
    MOV dword ptr [EBX + 0x10a64],0x1   ; 0058c572
    JMP 0x0058bbb2                      ; 0058c57c
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH 0x1                            ; 0058c581
        ;   Label: LAB_0058c581
    PUSH 0x1                            ; 0058c583
    PUSH EAX                            ; 0058c585
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c586
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c58b
    JMP 0x0058bbb2                      ; 0058c58e
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH dword ptr [EBP + 0x92]         ; 0058c593
        ;   Label: LAB_0058c593
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058c599
    PUSH EBX                            ; 0058c59f
    CALL dword ptr [EAX + 0x150]        ; 0058c5a0
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0058c5a6
    ADD ESP,0x8                         ; 0058c5ac
    TEST EDI,EDI                        ; 0058c5af
    JZ 0x0058bbb2                       ; 0058c5b1
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    JZ 0x0058c654                       ; 0058c5b7
        ;   XREF to: 0058c654 (CONDITIONAL_JUMP)  ; LAB_0058c654
    CMP dword ptr [EBX + 0x10b24],0x0   ; 0058c5bd
    JZ 0x0058c654                       ; 0058c5c4
        ;   XREF to: 0058c654 (CONDITIONAL_JUMP)  ; LAB_0058c654
    MOV EAX,EDI                         ; 0058c5ca
    LEA ESI,[EBP + 0xfffffe0e]          ; 0058c5cc
    LEA EDX,[EBX + 0x20]                ; 0058c5d2
    FLD float ptr [EAX + 0x20]          ; 0058c5d5
    FLD float ptr [EAX + 0x24]          ; 0058c5d8
    FLD float ptr [EAX + 0x28]          ; 0058c5db
    LEA EDI,[EBP + 0xfffffd66]          ; 0058c5de
    FXCH ST2                            ; 0058c5e4
    FSUB float ptr [EDX]                ; 0058c5e6
    FXCH                                ; 0058c5e8
    FSUB float ptr [EDX + 0x4]          ; 0058c5ea
    FXCH ST2                            ; 0058c5ed
    FSUB float ptr [EDX + 0x8]          ; 0058c5ef
    FXCH                                ; 0058c5f2
    FSTP float ptr [EBP + 0xfffffe0e]   ; 0058c5f4
    FXCH                                ; 0058c5fa
    FSTP float ptr [EBP + 0xfffffe12]   ; 0058c5fc
    FSTP float ptr [EBP + 0xfffffe16]   ; 0058c602
    MOVSD ES:EDI,ESI                    ; 0058c608
    MOVSD ES:EDI,ESI                    ; 0058c609
    MOVSD ES:EDI,ESI                    ; 0058c60a
    FLD float ptr [EBP + 0xfffffd6a]    ; 0058c60b
    FMUL ST0                            ; 0058c611
    FLD float ptr [EBP + 0xfffffd66]    ; 0058c613
    FMUL ST0                            ; 0058c619
    FADDP                               ; 0058c61b
    FLD float ptr [EBP + 0xfffffd6e]    ; 0058c61d
    FMUL ST0                            ; 0058c623
    FADDP                               ; 0058c625
    FSQRT                               ; 0058c627
    FST float ptr [EBP + 0x56]          ; 0058c629
    FCOMP float ptr [EBX + 0x10a70]     ; 0058c62c
    FNSTSW AX                           ; 0058c632
    SAHF                                ; 0058c634
    JBE 0x0058c646                      ; 0058c635
        ;   XREF to: 0058c646 (CONDITIONAL_JUMP)  ; LAB_0058c646
    MOV dword ptr [EBX + 0x10a78],0x0   ; 0058c637
        ;   Label: LAB_0058c637
    JMP 0x0058bbb2                      ; 0058c641
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    FLD float ptr [EBP + 0x56]          ; 0058c646
        ;   Label: LAB_0058c646
    FCOMP double ptr [0x005ee702]       ; 0058c649 | DAT_005ee702
    FNSTSW AX                           ; 0058c64f
    SAHF                                ; 0058c651
    JA 0x0058c637                       ; 0058c652
        ;   XREF to: 0058c637 (CONDITIONAL_JUMP)  ; LAB_0058c637
    MOV ECX,dword ptr [0x026535b0]      ; 0058c654 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0058c654
    PUSH ECX                            ; 0058c65a
    MOV ESI,dword ptr [EBX + 0x10b24]   ; 0058c65b
    PUSH ESI                            ; 0058c661
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0058c662
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058c667
    TEST EAX,EAX                        ; 0058c66a
    JZ 0x0058c674                       ; 0058c66c
        ;   XREF to: 0058c674 (CONDITIONAL_JUMP)  ; LAB_0058c674
    CMP dword ptr [EBP + 0x6e],0xe      ; 0058c66e
    JZ 0x0058c6b6                       ; 0058c672
        ;   XREF to: 0058c6b6 (CONDITIONAL_JUMP)  ; LAB_0058c6b6
    CMP dword ptr [EBX + 0x10a78],0x0   ; 0058c674
        ;   Label: LAB_0058c674
    JZ 0x0058bbb2                       ; 0058c67b
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH 0x3ecccccd                     ; 0058c681
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0058c686
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0058c68b
    TEST EAX,EAX                        ; 0058c68e
    JNZ 0x0058c6ce                      ; 0058c690
        ;   XREF to: 0058c6ce (CONDITIONAL_JUMP)  ; LAB_0058c6ce
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0058c692
        ;   Label: LAB_0058c692
    LEA EAX,[EBX + 0x2b4]               ; 0058c695
    CMP EDX,0xe                         ; 0058c69b
    JNZ 0x0058c581                      ; 0058c69e
        ;   XREF to: 0058c581 (CONDITIONAL_JUMP)  ; LAB_0058c581
    PUSH 0x1                            ; 0058c6a4
    PUSH 0xf                            ; 0058c6a6
    PUSH EAX                            ; 0058c6a8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c6a9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c6ae
    JMP 0x0058bbb2                      ; 0058c6b1
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH 0x1                            ; 0058c6b6
        ;   Label: LAB_0058c6b6
    PUSH 0x0                            ; 0058c6b8
    LEA EAX,[EBX + 0x2b4]               ; 0058c6ba
    PUSH EAX                            ; 0058c6c0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c6c1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c6c6
    JMP 0x0058bbb2                      ; 0058c6c9
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH EBX                            ; 0058c6ce
        ;   Label: LAB_0058c6ce
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060 ; 0058c6cf
        ;   XREF to: 0058d060 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0058c6d4
    JMP 0x0058c692                      ; 0058c6d7
        ;   XREF to: 0058c692 (UNCONDITIONAL_JUMP)  ; LAB_0058c692
    PUSH dword ptr [EBP + 0x92]         ; 0058c6d9
        ;   Label: LAB_0058c6d9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058c6df
    PUSH EBX                            ; 0058c6e5
    CALL dword ptr [EAX + 0x150]        ; 0058c6e6
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0058c6ec
    ADD ESP,0x8                         ; 0058c6f2
    TEST EDI,EDI                        ; 0058c6f5
    JZ 0x0058c79b                       ; 0058c6f7
        ;   XREF to: 0058c79b (CONDITIONAL_JUMP)  ; LAB_0058c79b
    CMP dword ptr [EBX + 0x10b24],0x0   ; 0058c6fd
    JZ 0x0058c7c9                       ; 0058c704
        ;   XREF to: 0058c7c9 (CONDITIONAL_JUMP)  ; LAB_0058c7c9
    MOV EAX,EDI                         ; 0058c70a
    LEA ESI,[EBP + 0xfffffe6e]          ; 0058c70c
    LEA EDX,[EBX + 0x20]                ; 0058c712
    FLD float ptr [EAX + 0x20]          ; 0058c715
    FLD float ptr [EAX + 0x24]          ; 0058c718
    FLD float ptr [EAX + 0x28]          ; 0058c71b
    LEA EDI,[EBP + -0x2a]               ; 0058c71e
    FXCH ST2                            ; 0058c721
    FSUB float ptr [EDX]                ; 0058c723
    FXCH                                ; 0058c725
    FSUB float ptr [EDX + 0x4]          ; 0058c727
    FXCH ST2                            ; 0058c72a
    FSUB float ptr [EDX + 0x8]          ; 0058c72c
    FXCH                                ; 0058c72f
    FSTP float ptr [EBP + 0xfffffe6e]   ; 0058c731
    FXCH                                ; 0058c737
    FSTP float ptr [EBP + 0xfffffe72]   ; 0058c739
    FSTP float ptr [EBP + 0xfffffe76]   ; 0058c73f
    MOVSD ES:EDI,ESI                    ; 0058c745
    MOVSD ES:EDI,ESI                    ; 0058c746
    MOVSD ES:EDI,ESI                    ; 0058c747
    FLD float ptr [EBP + -0x26]         ; 0058c748
    FMUL ST0                            ; 0058c74b
    FLD float ptr [EBP + -0x2a]         ; 0058c74d
    FMUL ST0                            ; 0058c750
    FADDP                               ; 0058c752
    FLD float ptr [EBP + -0x22]         ; 0058c754
    FMUL ST0                            ; 0058c757
    FADDP                               ; 0058c759
    FSQRT                               ; 0058c75b
    FST float ptr [EBP + 0x4a]          ; 0058c75d
    FCOMP float ptr [EBX + 0x10a70]     ; 0058c760
    FNSTSW AX                           ; 0058c766
    SAHF                                ; 0058c768
    JA 0x0058c779                       ; 0058c769
        ;   XREF to: 0058c779 (CONDITIONAL_JUMP)  ; LAB_0058c779
    FLD float ptr [EBP + 0x4a]          ; 0058c76b
    FCOMP double ptr [0x005ee702]       ; 0058c76e | DAT_005ee702
    FNSTSW AX                           ; 0058c774
    SAHF                                ; 0058c776
    JBE 0x0058c7c9                      ; 0058c777
        ;   XREF to: 0058c7c9 (CONDITIONAL_JUMP)  ; LAB_0058c7c9
    PUSH 0x1                            ; 0058c779
        ;   Label: LAB_0058c779
    PUSH 0x0                            ; 0058c77b
    LEA EAX,[EBX + 0x2b4]               ; 0058c77d
    PUSH EAX                            ; 0058c783
    MOV dword ptr [EBX + 0x10a78],0x0   ; 0058c784
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c78e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c793
    JMP 0x0058bbb2                      ; 0058c796
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH dword ptr [EBP + 0x92]         ; 0058c79b
        ;   Label: LAB_0058c79b
    PUSH EBX                            ; 0058c7a1
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0058c7a2
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058c7a7
    TEST EAX,EAX                        ; 0058c7aa
    JNZ 0x0058bbb2                      ; 0058c7ac
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH 0x1                            ; 0058c7b2
    PUSH EDI                            ; 0058c7b4
    LEA EAX,[EBX + 0x2b4]               ; 0058c7b5
    PUSH EAX                            ; 0058c7bb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058c7bc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058c7c1
    JMP 0x0058bbb2                      ; 0058c7c4
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    MOV EDX,dword ptr [0x026535b0]      ; 0058c7c9 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0058c7c9
    PUSH EDX                            ; 0058c7cf
    MOV ECX,dword ptr [EBX + 0x10b24]   ; 0058c7d0
    PUSH ECX                            ; 0058c7d6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0058c7d7
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058c7dc
    TEST EAX,EAX                        ; 0058c7df
    JZ 0x0058c7ed                       ; 0058c7e1
        ;   XREF to: 0058c7ed (CONDITIONAL_JUMP)  ; LAB_0058c7ed
    CMP dword ptr [EBP + 0x6e],0xf      ; 0058c7e3
    JZ 0x0058c6b6                       ; 0058c7e7
        ;   XREF to: 0058c6b6 (CONDITIONAL_JUMP)  ; LAB_0058c6b6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0058c7ed
        ;   Label: LAB_0058c7ed
    MOV EDI,dword ptr [EBX + 0x10af8]   ; 0058c7f3
    MOV dword ptr [EBP + 0x6a],EAX      ; 0058c7f9
    CMP EDI,0x2                         ; 0058c7fc
    JNZ 0x0058c955                      ; 0058c7ff
        ;   XREF to: 0058c955 (CONDITIONAL_JUMP)  ; LAB_0058c955
    CMP dword ptr [EBX + 0x10b2c],0x0   ; 0058c805
    JNZ 0x0058caa8                      ; 0058c80c
        ;   XREF to: 0058caa8 (CONDITIONAL_JUMP)  ; LAB_0058caa8
    MOV ECX,0x5ee674                    ; 0058c812 | = "..\\core\\werewolf.cpp"
        ;   Label: LAB_0058c812
    MOV ESI,0x1ad                       ; 0058c817
    PUSH 0x5ee689                       ; 0058c81c | = "Alpha werewolf requires 2 waypoints"
    MOV dword ptr [0x01d046a0],ECX      ; 0058c821 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0058c827 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0058c82d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0058c832
    SUB ESP,0x8                         ; 0058c835
        ;   Label: LAB_0058c835
    FLD float ptr [EBX + 0x10b38]       ; 0058c838
    FSTP double ptr [ESP]               ; 0058c83e
    MOV EDI,dword ptr [EBX + 0x10b34]   ; 0058c841
    PUSH EDI                            ; 0058c847
    PUSH 0x5ee6ad                       ; 0058c848 | = "Phase: %d, Timer: %f\n"
    MOV EAX,[0x00609ed0]                ; 0058c84d | g_CConsolePtr
    PUSH EAX                            ; 0058c852 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0058c853
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    MOV EDX,dword ptr [EBX + 0x10b34]   ; 0058c858
    ADD ESP,0x14                        ; 0058c85e
    CMP EDX,0x1                         ; 0058c861
    JNZ 0x0058caba                      ; 0058c864
        ;   XREF to: 0058caba (CONDITIONAL_JUMP)  ; LAB_0058caba
    MOV EAX,dword ptr [EBX + 0x10b2c]   ; 0058c86a
        ;   Label: LAB_0058c86a
    ADD EAX,0x20                        ; 0058c870
    PUSH EAX                            ; 0058c873
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0058c874
    PUSH ESI                            ; 0058c87a
    LEA ESI,[EBP + 0xfffffe62]          ; 0058c87b
    LEA EDI,[EBP + 0xfffffe32]          ; 0058c881
    CALL core_actor.cpp_FUN_00408de0    ; 0058c887
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xfffffe62]          ; 0058c88c
    MOVSD ES:EDI,ESI                    ; 0058c892
    MOVSD ES:EDI,ESI                    ; 0058c893
    MOVSD ES:EDI,ESI                    ; 0058c894
    ADD ESP,0x8                         ; 0058c895
    FLD float ptr [EBP + 0xfffffe3a]    ; 0058c898
    FLDZ                                ; 0058c89e
    FCOMPP                              ; 0058c8a0
    FNSTSW AX                           ; 0058c8a2
    SAHF                                ; 0058c8a4
    JBE 0x0058cac8                      ; 0058c8a5
        ;   XREF to: 0058cac8 (CONDITIONAL_JUMP)  ; LAB_0058cac8
    MOV EAX,dword ptr [EBX + 0x10b2c]   ; 0058c8ab
    MOV dword ptr [EBP + 0x6a],EAX      ; 0058c8b1
        ;   Label: LAB_0058c8b1
    MOV EAX,dword ptr [EBX + 0x10b34]   ; 0058c8b4
        ;   Label: LAB_0058c8b4
    CMP EAX,0x1                         ; 0058c8ba
    JNZ 0x0058cbdc                      ; 0058c8bd
        ;   XREF to: 0058cbdc (CONDITIONAL_JUMP)  ; LAB_0058cbdc
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0058c8c3
        ;   Label: LAB_0058c8c3
    LEA EDI,[EBP + 0xfffffe56]          ; 0058c8c6
    LEA ESI,[EBP + 0xfffffe26]          ; 0058c8cc
    LEA EDX,[EBX + 0x20]                ; 0058c8d2
    FLD float ptr [EAX + 0x20]          ; 0058c8d5
    FLD float ptr [EAX + 0x24]          ; 0058c8d8
    FLD float ptr [EAX + 0x28]          ; 0058c8db
    FXCH ST2                            ; 0058c8de
    FSUB float ptr [EDX]                ; 0058c8e0
    FXCH                                ; 0058c8e2
    FSUB float ptr [EDX + 0x4]          ; 0058c8e4
    FXCH ST2                            ; 0058c8e7
    FSUB float ptr [EDX + 0x8]          ; 0058c8e9
    FXCH                                ; 0058c8ec
    FSTP float ptr [EBP + 0xfffffe26]   ; 0058c8ee
    FXCH                                ; 0058c8f4
    FSTP float ptr [EBP + 0xfffffe2a]   ; 0058c8f6
    FSTP float ptr [EBP + 0xfffffe2e]   ; 0058c8fc
    MOVSD ES:EDI,ESI                    ; 0058c902
    MOVSD ES:EDI,ESI                    ; 0058c903
    MOVSD ES:EDI,ESI                    ; 0058c904
    FLD float ptr [EBP + 0xfffffe5a]    ; 0058c905
    FMUL ST0                            ; 0058c90b
    FLD float ptr [EBP + 0xfffffe56]    ; 0058c90d
    FMUL ST0                            ; 0058c913
    FADDP                               ; 0058c915
    FLD float ptr [EBP + 0xfffffe5e]    ; 0058c917
    FMUL ST0                            ; 0058c91d
    FADDP                               ; 0058c91f
    FSQRT                               ; 0058c921
    FCOMP double ptr [0x005ee70a]       ; 0058c923 | DAT_005ee70a
    FNSTSW AX                           ; 0058c929
    SAHF                                ; 0058c92b
    JNC 0x0058c955                      ; 0058c92c
        ;   XREF to: 0058c955 (CONDITIONAL_JUMP)  ; LAB_0058c955
    MOV EDI,dword ptr [EBX + 0x10b34]   ; 0058c92e
    INC EDI                             ; 0058c934
    MOV dword ptr [EBX + 0x10b34],EDI   ; 0058c935
    CMP EDI,0x3                         ; 0058c93b
    JLE 0x0058c94a                      ; 0058c93e
        ;   XREF to: 0058c94a (CONDITIONAL_JUMP)  ; LAB_0058c94a
    MOV dword ptr [EBX + 0x10b34],0x0   ; 0058c940
    MOV EAX,[0x005fe0d8]                ; 0058c94a | DAT_005fe0d8
        ;   Label: LAB_0058c94a
    MOV dword ptr [EBX + 0x10b38],EAX   ; 0058c94f
    MOV EAX,[0x005fe0cc]                ; 0058c955 | DAT_005fe0cc
        ;   Label: LAB_0058c955
    PUSH 0x3e32b8c2                     ; 0058c95a
    MOV dword ptr [EBP + 0x36],EAX      ; 0058c95f
    LEA EAX,[EBX + 0x2508]              ; 0058c962
    PUSH 0x3f000000                     ; 0058c968
    MOV dword ptr [EAX + 0x8],0x0       ; 0058c96d
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0058c974
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058c977
    MOV dword ptr [EAX + 0x4],EDX       ; 0058c97a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058c97d
    MOV dword ptr [EAX],EDX             ; 0058c980
    MOV EAX,dword ptr [EBP + 0x36]      ; 0058c982
    XOR EDX,EDX                         ; 0058c985
    MOV dword ptr [EBP + 0xfffffe22],EAX ; 0058c987
    LEA EAX,[EBP + 0xfffffe1a]          ; 0058c98d
    MOV dword ptr [EBP + 0xfffffe1a],EDX ; 0058c993
    PUSH EAX                            ; 0058c999
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0058c99a
    MOV dword ptr [EBP + 0xfffffe1e],EDX ; 0058c99d
    PUSH ESI                            ; 0058c9a3
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0058c9a4
    CALL dword ptr [EAX + 0xcc]         ; 0058c9aa
    ADD ESP,0x4                         ; 0058c9b0
    PUSH EAX                            ; 0058c9b3
    ADD ESI,0x20                        ; 0058c9b4
    PUSH ESI                            ; 0058c9b7
    PUSH EBX                            ; 0058c9b8
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0058c9b9
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0058c9be
    TEST EAX,EAX                        ; 0058c9c1
    JL 0x0058cc1d                       ; 0058c9c3
        ;   XREF to: 0058cc1d (CONDITIONAL_JUMP)  ; LAB_0058cc1d
    JLE 0x0058cc4a                      ; 0058c9c9
        ;   XREF to: 0058cc4a (CONDITIONAL_JUMP)  ; LAB_0058cc4a
    CMP dword ptr [EBX + 0x10af8],0x2   ; 0058c9cf
    JNZ 0x0058c9f0                      ; 0058c9d6
        ;   XREF to: 0058c9f0 (CONDITIONAL_JUMP)  ; LAB_0058c9f0
    MOV EAX,dword ptr [EBX + 0x10b34]   ; 0058c9d8
    CMP EAX,0x1                         ; 0058c9de
    JZ 0x0058bbb2                       ; 0058c9e1
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    CMP EAX,0x3                         ; 0058c9e7
    JZ 0x0058bbb2                       ; 0058c9ea
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    FLD float ptr [EBX + 0x10a74]       ; 0058c9f0
        ;   Label: LAB_0058c9f0
    FLDZ                                ; 0058c9f6
    FCOMPP                              ; 0058c9f8
    FNSTSW AX                           ; 0058c9fa
    SAHF                                ; 0058c9fc
    JC 0x0058ca7b                       ; 0058c9fd
        ;   XREF to: 0058ca7b (CONDITIONAL_JUMP)  ; LAB_0058ca7b
    PUSH 0x2                            ; 0058ca03
    PUSH 0x0                            ; 0058ca05
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0058ca07
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0058ca0c
    MOV ESI,EAX                         ; 0058ca0f
    TEST EAX,EAX                        ; 0058ca11
    JNZ 0x0058ca28                      ; 0058ca13
        ;   XREF to: 0058ca28 (CONDITIONAL_JUMP)  ; LAB_0058ca28
    PUSH 0x1                            ; 0058ca15
    PUSH 0x2                            ; 0058ca17
    LEA EAX,[EBX + 0x2b4]               ; 0058ca19
    PUSH EAX                            ; 0058ca1f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058ca20
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058ca25
    CMP ESI,0x1                         ; 0058ca28
        ;   Label: LAB_0058ca28
    JNZ 0x0058ca3f                      ; 0058ca2b
        ;   XREF to: 0058ca3f (CONDITIONAL_JUMP)  ; LAB_0058ca3f
    PUSH ESI                            ; 0058ca2d
    PUSH 0x3                            ; 0058ca2e
    LEA EAX,[EBX + 0x2b4]               ; 0058ca30
    PUSH EAX                            ; 0058ca36
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058ca37
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058ca3c
    CMP ESI,0x2                         ; 0058ca3f
        ;   Label: LAB_0058ca3f
    JNZ 0x0058ca57                      ; 0058ca42
        ;   XREF to: 0058ca57 (CONDITIONAL_JUMP)  ; LAB_0058ca57
    PUSH 0x1                            ; 0058ca44
    PUSH 0x4                            ; 0058ca46
    LEA EAX,[EBX + 0x2b4]               ; 0058ca48
    PUSH EAX                            ; 0058ca4e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058ca4f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058ca54
    PUSH 0x3f19999a                     ; 0058ca57
        ;   Label: LAB_0058ca57
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 0058ca5c
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0058ca66
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0058ca6b
    TEST EAX,EAX                        ; 0058ca6e
    JZ 0x0058ca7b                       ; 0058ca70
        ;   XREF to: 0058ca7b (CONDITIONAL_JUMP)  ; LAB_0058ca7b
    PUSH EBX                            ; 0058ca72
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060 ; 0058ca73
        ;   XREF to: 0058d060 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0058ca78
    FLD float ptr [EBX + 0x10b18]       ; 0058ca7b
        ;   Label: LAB_0058ca7b
    FSUB float ptr [EBP + 0x92]         ; 0058ca81
    FST float ptr [EBX + 0x10b18]       ; 0058ca87
    FLDZ                                ; 0058ca8d
    FCOMPP                              ; 0058ca8f
    FNSTSW AX                           ; 0058ca91
    SAHF                                ; 0058ca93
    JBE 0x0058bbb2                      ; 0058ca94
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH EBX                            ; 0058ca9a
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060 ; 0058ca9b
        ;   XREF to: 0058d060 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0058caa0
    JMP 0x0058bbb2                      ; 0058caa3
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    CMP dword ptr [EBX + 0x10b30],0x0   ; 0058caa8
        ;   Label: LAB_0058caa8
    JZ 0x0058c812                       ; 0058caaf
        ;   XREF to: 0058c812 (CONDITIONAL_JUMP)  ; LAB_0058c812
    JMP 0x0058c835                      ; 0058cab5
        ;   XREF to: 0058c835 (UNCONDITIONAL_JUMP)  ; LAB_0058c835
    CMP EDX,0x3                         ; 0058caba
        ;   Label: LAB_0058caba
    JZ 0x0058c86a                       ; 0058cabd
        ;   XREF to: 0058c86a (CONDITIONAL_JUMP)  ; LAB_0058c86a
    JMP 0x0058c8b4                      ; 0058cac3
        ;   XREF to: 0058c8b4 (UNCONDITIONAL_JUMP)  ; LAB_0058c8b4
    MOV EAX,dword ptr [EBX + 0x10b30]   ; 0058cac8
        ;   Label: LAB_0058cac8
    ADD EAX,0x20                        ; 0058cace
    PUSH EAX                            ; 0058cad1
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0058cad2
    PUSH EDI                            ; 0058cad8
    LEA ESI,[EBP + -0x42]               ; 0058cad9
    LEA EDI,[EBP + -0x36]               ; 0058cadc
    CALL core_actor.cpp_FUN_00408de0    ; 0058cadf
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + -0x42]               ; 0058cae4
    MOVSD ES:EDI,ESI                    ; 0058cae7
    MOVSD ES:EDI,ESI                    ; 0058cae8
    MOVSD ES:EDI,ESI                    ; 0058cae9
    ADD ESP,0x8                         ; 0058caea
    FLD float ptr [EBP + -0x2e]         ; 0058caed
    FLDZ                                ; 0058caf0
    FCOMPP                              ; 0058caf2
    FNSTSW AX                           ; 0058caf4
    SAHF                                ; 0058caf6
    JBE 0x0058cb04                      ; 0058caf7
        ;   XREF to: 0058cb04 (CONDITIONAL_JUMP)  ; LAB_0058cb04
    MOV EAX,dword ptr [EBX + 0x10b30]   ; 0058caf9
    JMP 0x0058c8b1                      ; 0058caff
        ;   XREF to: 0058c8b1 (UNCONDITIONAL_JUMP)  ; LAB_0058c8b1
    LEA EDI,[EBP + -0x12]               ; 0058cb04
        ;   Label: LAB_0058cb04
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0058cb07
    LEA ESI,[EBP + 0xfffffec2]          ; 0058cb0d
    MOV EAX,dword ptr [EBX + 0x10b2c]   ; 0058cb13
    FLD float ptr [EDX + 0x20]          ; 0058cb19
    FLD float ptr [EDX + 0x24]          ; 0058cb1c
    FLD float ptr [EDX + 0x28]          ; 0058cb1f
    FXCH ST2                            ; 0058cb22
    FSUB float ptr [EAX + 0x20]         ; 0058cb24
    FXCH                                ; 0058cb27
    FSUB float ptr [EAX + 0x24]         ; 0058cb29
    FXCH ST2                            ; 0058cb2c
    FSUB float ptr [EAX + 0x28]         ; 0058cb2e
    FXCH                                ; 0058cb31
    FSTP float ptr [EBP + 0xfffffec2]   ; 0058cb33
    FXCH                                ; 0058cb39
    FSTP float ptr [EBP + 0xfffffec6]   ; 0058cb3b
    FSTP float ptr [EBP + 0xfffffeca]   ; 0058cb41
    MOVSD ES:EDI,ESI                    ; 0058cb47
    MOVSD ES:EDI,ESI                    ; 0058cb48
    MOVSD ES:EDI,ESI                    ; 0058cb49
    FLD float ptr [EBP + -0xe]          ; 0058cb4a
    FMUL ST0                            ; 0058cb4d
    FLD float ptr [EBP + -0x12]         ; 0058cb4f
    FMUL ST0                            ; 0058cb52
    FADDP                               ; 0058cb54
    FLD float ptr [EBP + -0xa]          ; 0058cb56
    FMUL ST0                            ; 0058cb59
    FADDP                               ; 0058cb5b
    MOV dword ptr [EBP + 0x46],EAX      ; 0058cb5d
    FSQRT                               ; 0058cb60
    FLD float ptr [EDX + 0x20]          ; 0058cb62
    FLD float ptr [EDX + 0x24]          ; 0058cb65
    MOV ECX,dword ptr [EBX + 0x10b30]   ; 0058cb68
    FLD float ptr [EDX + 0x28]          ; 0058cb6e
    LEA EAX,[ECX + 0x20]                ; 0058cb71
    LEA EDI,[EBP + 0xfffffcfa]          ; 0058cb74
    LEA ESI,[EBP + 0xfffffdc6]          ; 0058cb7a
    FXCH ST2                            ; 0058cb80
    FSUB float ptr [EAX]                ; 0058cb82
    FXCH                                ; 0058cb84
    FSUB float ptr [EAX + 0x4]          ; 0058cb86
    FXCH ST2                            ; 0058cb89
    FSUB float ptr [EAX + 0x8]          ; 0058cb8b
    FXCH                                ; 0058cb8e
    FSTP float ptr [EBP + 0xfffffdc6]   ; 0058cb90
    FXCH                                ; 0058cb96
    FSTP float ptr [EBP + 0xfffffdca]   ; 0058cb98
    FSTP float ptr [EBP + 0xfffffdce]   ; 0058cb9e
    MOVSD ES:EDI,ESI                    ; 0058cba4
    MOVSD ES:EDI,ESI                    ; 0058cba5
    MOVSD ES:EDI,ESI                    ; 0058cba6
    FLD float ptr [EBP + 0xfffffcfe]    ; 0058cba7
    FMUL ST0                            ; 0058cbad
    FLD float ptr [EBP + 0xfffffcfa]    ; 0058cbaf
    FMUL ST0                            ; 0058cbb5
    FADDP                               ; 0058cbb7
    FLD float ptr [EBP + 0xfffffd02]    ; 0058cbb9
    FMUL ST0                            ; 0058cbbf
    FADDP                               ; 0058cbc1
    FSQRT                               ; 0058cbc3
    FCOMPP                              ; 0058cbc5
    FNSTSW AX                           ; 0058cbc7
    SAHF                                ; 0058cbc9
    JNC 0x0058cbd4                      ; 0058cbca
        ;   XREF to: 0058cbd4 (CONDITIONAL_JUMP)  ; LAB_0058cbd4
    MOV EAX,dword ptr [EBP + 0x46]      ; 0058cbcc
    JMP 0x0058c8b1                      ; 0058cbcf
        ;   XREF to: 0058c8b1 (UNCONDITIONAL_JUMP)  ; LAB_0058c8b1
    MOV dword ptr [EBP + 0x6a],ECX      ; 0058cbd4
        ;   Label: LAB_0058cbd4
    JMP 0x0058c8b4                      ; 0058cbd7
        ;   XREF to: 0058c8b4 (UNCONDITIONAL_JUMP)  ; LAB_0058c8b4
    CMP EAX,0x3                         ; 0058cbdc
        ;   Label: LAB_0058cbdc
    JZ 0x0058c8c3                       ; 0058cbdf
        ;   XREF to: 0058c8c3 (CONDITIONAL_JUMP)  ; LAB_0058c8c3
    FLD float ptr [EBX + 0x10b38]       ; 0058cbe5
    FLDZ                                ; 0058cbeb
    FCOMPP                              ; 0058cbed
    FNSTSW AX                           ; 0058cbef
    SAHF                                ; 0058cbf1
    JC 0x0058c955                       ; 0058cbf2
        ;   XREF to: 0058c955 (CONDITIONAL_JUMP)  ; LAB_0058c955
    MOV ECX,dword ptr [EBX + 0x10b34]   ; 0058cbf8
    INC ECX                             ; 0058cbfe
    MOV dword ptr [EBX + 0x10b34],ECX   ; 0058cbff
    CMP ECX,0x3                         ; 0058cc05
    JLE 0x0058c955                      ; 0058cc08
        ;   XREF to: 0058c955 (CONDITIONAL_JUMP)  ; LAB_0058c955
    MOV dword ptr [EBX + 0x10b34],0x0   ; 0058cc0e
    JMP 0x0058c955                      ; 0058cc18
        ;   XREF to: 0058c955 (UNCONDITIONAL_JUMP)  ; LAB_0058c955
    PUSH EBX                            ; 0058cc1d
        ;   Label: LAB_0058cc1d
    PUSH 0x5ee6c3                       ; 0058cc1e | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0058cc23 | g_CConsolePtr
    PUSH ECX                            ; 0058cc29 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0058cc2a
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058cc2f
    PUSH 0x1                            ; 0058cc32
    PUSH 0x0                            ; 0058cc34
    LEA EAX,[EBX + 0x2b4]               ; 0058cc36
    PUSH EAX                            ; 0058cc3c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058cc3d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058cc42
    JMP 0x0058ca7b                      ; 0058cc45
        ;   XREF to: 0058ca7b (UNCONDITIONAL_JUMP)  ; LAB_0058ca7b
    MOV EDI,dword ptr [0x026535b0]      ; 0058cc4a | g_CTrapClassInfo.name_hash
        ;   Label: LAB_0058cc4a
    PUSH EDI                            ; 0058cc50
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 0058cc51
    PUSH EAX                            ; 0058cc57
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0058cc58
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058cc5d
    TEST EAX,EAX                        ; 0058cc60
    JNZ 0x0058ca7b                      ; 0058cc62
        ;   XREF to: 0058ca7b (CONDITIONAL_JUMP)  ; LAB_0058ca7b
    FLD float ptr [ESI + 0x4]           ; 0058cc68
    FLD float ptr [ESI + 0x8]           ; 0058cc6b
    FLD float ptr [ESI]                 ; 0058cc6e
    LEA EDI,[EBP + 0xfffffd5a]          ; 0058cc70
    LEA EAX,[EBX + 0x20]                ; 0058cc76
    LEA EDX,[EBP + 0xfffffd5a]          ; 0058cc79
    LEA ESI,[EBP + -0x1e]               ; 0058cc7f
    FSUB float ptr [EAX]                ; 0058cc82
    FXCH ST2                            ; 0058cc84
    FSUB float ptr [EAX + 0x4]          ; 0058cc86
    FXCH                                ; 0058cc89
    FSUB float ptr [EAX + 0x8]          ; 0058cc8b
    FXCH ST2                            ; 0058cc8e
    FSTP float ptr [EBP + -0x1e]        ; 0058cc90
    FSTP float ptr [EBP + -0x1a]        ; 0058cc93
    FSTP float ptr [EBP + -0x16]        ; 0058cc96
    LEA EAX,[EBP + 0xfffffd2a]          ; 0058cc99
    MOVSD ES:EDI,ESI                    ; 0058cc9f
    MOVSD ES:EDI,ESI                    ; 0058cca0
    MOVSD ES:EDI,ESI                    ; 0058cca1
    CMP EAX,EDX                         ; 0058cca2
    JZ 0x0058ccca                       ; 0058cca4
        ;   XREF to: 0058ccca (CONDITIONAL_JUMP)  ; LAB_0058ccca
    MOV EAX,dword ptr [EBP + 0xfffffd5a] ; 0058cca6
    MOV dword ptr [EBP + 0xfffffd2a],EAX ; 0058ccac
    MOV EAX,dword ptr [EBP + 0xfffffd5e] ; 0058ccb2
    MOV dword ptr [EBP + 0xfffffd2e],EAX ; 0058ccb8
    MOV EAX,dword ptr [EBP + 0xfffffd62] ; 0058ccbe
    MOV dword ptr [EBP + 0xfffffd32],EAX ; 0058ccc4
    FLD float ptr [EBP + 0xfffffd2e]    ; 0058ccca
        ;   Label: LAB_0058ccca
    FMUL ST0                            ; 0058ccd0
    FLD float ptr [EBP + 0xfffffd2a]    ; 0058ccd2
    FMUL ST0                            ; 0058ccd8
    FADDP                               ; 0058ccda
    FLD float ptr [EBP + 0xfffffd32]    ; 0058ccdc
    FMUL ST0                            ; 0058cce2
    FADDP                               ; 0058cce4
    FSQRT                               ; 0058cce6
    MOV EDX,0x41a00000                  ; 0058cce8
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 0058cced
    MOV dword ptr [EBP + 0x5e],EDX      ; 0058ccf3
    FSTP float ptr [EBP + 0x52]         ; 0058ccf6
    CMP ECX,0x1                         ; 0058ccf9
    JNZ 0x0058cd05                      ; 0058ccfc
        ;   XREF to: 0058cd05 (CONDITIONAL_JUMP)  ; LAB_0058cd05
    MOV dword ptr [EBP + 0x5e],0x41200000 ; 0058ccfe
    CMP dword ptr [EBX + 0x10af8],0x2   ; 0058cd05
        ;   Label: LAB_0058cd05
    JNZ 0x0058cd15                      ; 0058cd0c
        ;   XREF to: 0058cd15 (CONDITIONAL_JUMP)  ; LAB_0058cd15
    MOV dword ptr [EBP + 0x5e],0x41200000 ; 0058cd0e
    LEA EAX,[EBX + 0x2b4]               ; 0058cd15
        ;   Label: LAB_0058cd15
    FLD float ptr [EBP + 0x52]          ; 0058cd1b
    MOV dword ptr [EBP + 0x42],EAX      ; 0058cd1e
    FCOMP float ptr [EBP + 0x5e]        ; 0058cd21
    FNSTSW AX                           ; 0058cd24
    SAHF                                ; 0058cd26
    JA 0x0058cd60                       ; 0058cd27
        ;   XREF to: 0058cd60 (CONDITIONAL_JUMP)  ; LAB_0058cd60
    FLD float ptr [0x005fe0cc]          ; 0058cd29 | DAT_005fe0cc
    FMUL float ptr [0x005ee712]         ; 0058cd2f | DAT_005ee712
    FCOMP float ptr [EBP + 0x52]        ; 0058cd35
    FNSTSW AX                           ; 0058cd38
    SAHF                                ; 0058cd3a
    JBE 0x0058ca7b                      ; 0058cd3b
        ;   XREF to: 0058ca7b (CONDITIONAL_JUMP)  ; LAB_0058ca7b
    CMP dword ptr [EBP + 0x6e],0xf      ; 0058cd41
    JNZ 0x0058ca7b                      ; 0058cd45
        ;   XREF to: 0058ca7b (CONDITIONAL_JUMP)  ; LAB_0058ca7b
    PUSH 0x1                            ; 0058cd4b
    PUSH 0x0                            ; 0058cd4d
    MOV ECX,dword ptr [EBP + 0x42]      ; 0058cd4f
    PUSH ECX                            ; 0058cd52
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058cd53
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058cd58
    JMP 0x0058ca7b                      ; 0058cd5b
        ;   XREF to: 0058ca7b (UNCONDITIONAL_JUMP)  ; LAB_0058ca7b
    LEA EAX,[EBP + 0xfffffd2a]          ; 0058cd60
        ;   Label: LAB_0058cd60
    PUSH EAX                            ; 0058cd66
    LEA ESI,[EBP + 0xfffffeda]          ; 0058cd67
    LEA EDI,[EBP + 0xfffffdf6]          ; 0058cd6d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0058cd73
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xfffffeda]          ; 0058cd78
    MOVSD ES:EDI,ESI                    ; 0058cd7e
    MOVSD ES:EDI,ESI                    ; 0058cd7f
    MOVSD ES:EDI,ESI                    ; 0058cd80
    ADD ESP,0x4                         ; 0058cd81
    FLD float ptr [EBP + 0xfffffdfa]    ; 0058cd84
    FSUB float ptr [EBX + 0x34]         ; 0058cd8a
    SUB ESP,0x4                         ; 0058cd8d
    FSTP float ptr [ESP]                ; 0058cd90
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0058cd93
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058cd98
    FLD float ptr [EBP + 0x76]          ; 0058cd9b
    FABS                                ; 0058cd9e
    ADD ESP,0x4                         ; 0058cda0
    FCOMP double ptr [0x005ee71a]       ; 0058cda3 | DAT_005ee71a
    FNSTSW AX                           ; 0058cda9
    SAHF                                ; 0058cdab
    JNC 0x0058ca7b                      ; 0058cdac
        ;   XREF to: 0058ca7b (CONDITIONAL_JUMP)  ; LAB_0058ca7b
    PUSH 0x1                            ; 0058cdb2
    PUSH 0x8                            ; 0058cdb4
    MOV ESI,dword ptr [EBP + 0x42]      ; 0058cdb6
    PUSH ESI                            ; 0058cdb9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058cdba
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058cdbf
    PUSH 0x3f59999a                     ; 0058cdc2
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0058cdc7
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0058cdcc
    TEST EAX,EAX                        ; 0058cdcf
    JNZ 0x0058ce09                      ; 0058cdd1
        ;   XREF to: 0058ce09 (CONDITIONAL_JUMP)  ; LAB_0058ce09
    XOR EDI,EDI                         ; 0058cdd3
        ;   Label: LAB_0058cdd3
    XOR ESI,ESI                         ; 0058cdd5
    MOV EAX,[0x0061b5a8]                ; 0058cdd7 | g_CDemonSetPtr
        ;   Label: LAB_0058cdd7
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 0058cddc | g_CDemonSetInstance.enemy_count
    JGE 0x0058ca7b                      ; 0058cde2
        ;   XREF to: 0058ca7b (CONDITIONAL_JUMP)  ; LAB_0058ca7b
    MOV ECX,dword ptr [0x02662d54]      ; 0058cde8 | g_CWerewolfClassInfo.name_hash
    PUSH ECX                            ; 0058cdee
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 0058cdef
    PUSH EDX                            ; 0058cdf6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0058cdf7
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058cdfc
    TEST EAX,EAX                        ; 0058cdff
    JNZ 0x0058ce14                      ; 0058ce01
        ;   XREF to: 0058ce14 (CONDITIONAL_JUMP)  ; LAB_0058ce14
    INC ESI                             ; 0058ce03
        ;   Label: LAB_0058ce03
    ADD EDI,0x4                         ; 0058ce04
    JMP 0x0058cdd7                      ; 0058ce07
        ;   XREF to: 0058cdd7 (UNCONDITIONAL_JUMP)  ; LAB_0058cdd7
    PUSH EBX                            ; 0058ce09
        ;   Label: LAB_0058ce09
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060 ; 0058ce0a
        ;   XREF to: 0058d060 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0058ce0f
    JMP 0x0058cdd3                      ; 0058ce12
        ;   XREF to: 0058cdd3 (UNCONDITIONAL_JUMP)  ; LAB_0058cdd3
    CMP EAX,EBX                         ; 0058ce14
        ;   Label: LAB_0058ce14
    JZ 0x0058ce03                       ; 0058ce16
        ;   XREF to: 0058ce03 (CONDITIONAL_JUMP)  ; LAB_0058ce03
    ADD EAX,0x2b4                       ; 0058ce18
    PUSH EAX                            ; 0058ce1d
    CALL core_motion.cpp_FUN_005035c0   ; 0058ce1e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058ce23
    ADD ESP,0x4                         ; 0058ce26
    CMP EAX,0x8                         ; 0058ce29
    JNZ 0x0058ce03                      ; 0058ce2c
        ;   XREF to: 0058ce03 (CONDITIONAL_JUMP)  ; LAB_0058ce03
    PUSH 0x2                            ; 0058ce2e
    PUSH 0x0                            ; 0058ce30
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0058ce32
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0058ce37
    MOV EDX,EAX                         ; 0058ce3a
    CMP EAX,0x1                         ; 0058ce3c
    JNZ 0x0058ce4d                      ; 0058ce3f
        ;   XREF to: 0058ce4d (CONDITIONAL_JUMP)  ; LAB_0058ce4d
    FLD float ptr [EBX + 0x34]          ; 0058ce41
    FADD float ptr [0x005ee72a]         ; 0058ce44 | DAT_005ee72a
    FSTP float ptr [EBX + 0x34]         ; 0058ce4a
    CMP EDX,0x2                         ; 0058ce4d
        ;   Label: LAB_0058ce4d
    JNZ 0x0058ca7b                      ; 0058ce50
        ;   XREF to: 0058ca7b (CONDITIONAL_JUMP)  ; LAB_0058ca7b
    FLD float ptr [EBX + 0x34]          ; 0058ce56
    FADD float ptr [0x005ee72e]         ; 0058ce59 | DAT_005ee72e
    FSTP float ptr [EBX + 0x34]         ; 0058ce5f
    JMP 0x0058ca7b                      ; 0058ce62
        ;   XREF to: 0058ca7b (UNCONDITIONAL_JUMP)  ; LAB_0058ca7b
    LEA EDX,[EBX + 0x2b4]               ; 0058ce67
        ;   Label: LAB_0058ce67
    MOV dword ptr [EBP + 0x4e],EDX      ; 0058ce6d
    JBE 0x0058c424                      ; 0058ce70
        ;   XREF to: 0058c424 (CONDITIONAL_JUMP)  ; LAB_0058c424
    CMP EDI,0xe                         ; 0058ce76
    JNC 0x0058ce98                      ; 0058ce79
        ;   XREF to: 0058ce98 (CONDITIONAL_JUMP)  ; LAB_0058ce98
    CMP EDI,0x8                         ; 0058ce7b
    JC 0x0058bbb2                       ; 0058ce7e
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    JBE 0x0058c130                      ; 0058ce84
        ;   XREF to: 0058c130 (CONDITIONAL_JUMP)  ; LAB_0058c130
    CMP EDI,0xd                         ; 0058ce8a
    JZ 0x0058c507                       ; 0058ce8d
        ;   XREF to: 0058c507 (CONDITIONAL_JUMP)  ; LAB_0058c507
    JMP 0x0058bbb2                      ; 0058ce93
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    JBE 0x0058c0f5                      ; 0058ce98
        ;   XREF to: 0058c0f5 (CONDITIONAL_JUMP)  ; LAB_0058c0f5
        ;   Label: LAB_0058ce98
    CMP EDI,0xf                         ; 0058ce9e
    JBE 0x0058c6d9                      ; 0058cea1
        ;   XREF to: 0058c6d9 (CONDITIONAL_JUMP)  ; LAB_0058c6d9
    CMP EDI,0x13                        ; 0058cea7
    JZ 0x0058bb9a                       ; 0058ceaa
        ;   XREF to: 0058bb9a (CONDITIONAL_JUMP)  ; LAB_0058bb9a
    JMP 0x0058bbb2                      ; 0058ceb0
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    JBE 0x0058c6d9                      ; 0058ceb5
        ;   XREF to: 0058c6d9 (CONDITIONAL_JUMP)  ; LAB_0058c6d9
        ;   Label: LAB_0058ceb5
    CMP EDI,0x2                         ; 0058cebb
    JBE 0x0058c173                      ; 0058cebe
        ;   XREF to: 0058c173 (CONDITIONAL_JUMP)  ; LAB_0058c173
    MOV ECX,dword ptr [EAX + 0x1cedee4] ; 0058cec4
    CMP ECX,dword ptr [EBX + 0x10a78]   ; 0058ceca
    JZ 0x0058cf84                       ; 0058ced0
        ;   XREF to: 0058cf84 (CONDITIONAL_JUMP)  ; LAB_0058cf84
    LEA EAX,[EBP + 0xfffffbf2]          ; 0058ced6
    PUSH EAX                            ; 0058cedc
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0058cedd
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0058cee2
    PUSH 0x41700000                     ; 0058cee5
    PUSH 0x40e00000                     ; 0058ceea
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058ceef
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058cef4
    MOV dword ptr [EBP + 0xfffffc26],EBX ; 0058cef7
    MOV dword ptr [EBP + 0xfffffc2a],EBX ; 0058cefd
    ADD ESP,0x8                         ; 0058cf03
    FLD float ptr [EBP + 0x76]          ; 0058cf06
    LEA EAX,[EBP + 0xfffffbf2]          ; 0058cf09
    FSTP float ptr [EBP + 0xfffffbf6]   ; 0058cf0f
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 0058cf15
    PUSH EAX                            ; 0058cf1b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058cf1c
    SUB EAX,EDX                         ; 0058cf23
    MOV ESI,dword ptr [EBP + 0x66]      ; 0058cf25
    SHL EAX,0x4                         ; 0058cf28
    ADD EAX,ESI                         ; 0058cf2b
    PUSH 0x3ecccccd                     ; 0058cf2d
    PUSH EAX                            ; 0058cf32
    PUSH 0x265370c                      ; 0058cf33 | DAT_0265370c
    LEA ESI,[EBP + 0xffffff22]          ; 0058cf38
    LEA EDI,[EBP + 0xfffffe9e]          ; 0058cf3e
    CALL core_xform.cpp_FUN_00591530    ; 0058cf44
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0058cf49
    LEA EAX,[EBP + 0xfffffe9e]          ; 0058cf4c
    LEA ESI,[EBP + 0xffffff22]          ; 0058cf52
    PUSH EAX                            ; 0058cf58
    MOVSD ES:EDI,ESI                    ; 0058cf59
    MOVSD ES:EDI,ESI                    ; 0058cf5a
    MOVSD ES:EDI,ESI                    ; 0058cf5b
    PUSH EBX                            ; 0058cf5c
    LEA ESI,[EBP + -0x6]                ; 0058cf5d
    CALL core_actor.cpp_FUN_00408d70    ; 0058cf60
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058cf65
    LEA EAX,[EBP + 0xffffff76]          ; 0058cf68
    PUSH EAX                            ; 0058cf6e
    LEA EDI,[EBP + 0xffffff76]          ; 0058cf6f
    LEA ESI,[EBP + -0x6]                ; 0058cf75
    PUSH EBX                            ; 0058cf78
    MOVSD ES:EDI,ESI                    ; 0058cf79
    MOVSD ES:EDI,ESI                    ; 0058cf7a
    MOVSD ES:EDI,ESI                    ; 0058cf7b
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0058cf7c
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0058cf81
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0058cf84
        ;   Label: LAB_0058cf84
    TEST EDI,EDI                        ; 0058cf8a
    JZ 0x0058bbb2                       ; 0058cf8c
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH EDI                            ; 0058cf92
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 0058cf93
    CALL dword ptr [EDX + 0x114]        ; 0058cf99
    ADD ESP,0x4                         ; 0058cf9f
    TEST EAX,EAX                        ; 0058cfa2
    JZ 0x0058bbb2                       ; 0058cfa4
        ;   XREF to: 0058bbb2 (CONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH 0x1                            ; 0058cfaa
    PUSH 0x7                            ; 0058cfac
    LEA EAX,[EBX + 0x2b4]               ; 0058cfae
    PUSH EAX                            ; 0058cfb4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058cfb5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058cfba
    JMP 0x0058bbb2                      ; 0058cfbd
        ;   XREF to: 0058bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0058bbb2
    PUSH 0x5ee6e4                       ; 0058cfc2 | = "werewolf-eat.wav"
        ;   Label: LAB_0058cfc2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058cfc7
    PUSH EBX                            ; 0058cfcd
    CALL dword ptr [EAX + 0x34]         ; 0058cfce
    ADD ESP,0x8                         ; 0058cfd1
    MOV dword ptr [EBX + 0x10b20],EAX   ; 0058cfd4
    JMP 0x0058bbe0                      ; 0058cfda
        ;   XREF to: 0058bbe0 (UNCONDITIONAL_JUMP)  ; LAB_0058bbe0
    MOV EDI,dword ptr [EBX + 0x10b20]   ; 0058cfdf
        ;   Label: LAB_0058cfdf
    PUSH EDI                            ; 0058cfe5
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0058cfe6
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0058cfeb
    JMP 0x0058bbe0                      ; 0058cfee
        ;   XREF to: 0058bbe0 (UNCONDITIONAL_JUMP)  ; LAB_0058bbe0
    CMP EDI,0xf                         ; 0058cff3
        ;   Label: LAB_0058cff3
    JZ 0x0058bc05                       ; 0058cff6
        ;   XREF to: 0058bc05 (CONDITIONAL_JUMP)  ; LAB_0058bc05
    FLD float ptr [EBP + 0x62]          ; 0058cffc
    FMUL double ptr [0x005ee732]        ; 0058cfff | DAT_005ee732
    JMP 0x0058bc0e                      ; 0058d005
        ;   XREF to: 0058bc0e (UNCONDITIONAL_JUMP)  ; LAB_0058bc0e
    CMP dword ptr [EBX + 0xdc],0x0      ; 0058d00a
        ;   Label: LAB_0058d00a
    JNZ 0x0058bc6a                      ; 0058d011
        ;   XREF to: 0058bc6a (CONDITIONAL_JUMP)  ; LAB_0058bc6a
    JMP 0x0058bdae                      ; 0058d017
        ;   XREF to: 0058bdae (UNCONDITIONAL_JUMP)  ; LAB_0058bdae

