; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_CDrone_process_FUN_0046d870(CDrone *this_ptr,float delta_time)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0046d840 = 0046dd5d
;   TerminatedCString s_s_confused_while_walking_005d1838
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d1862
;   TerminatedCString s_drone_attack_wav_005d1883
;   TerminatedCString s_slime_wav_005d1895
;   undefined4 DAT_005d18a1
;   undefined4 DAT_005f5968
;   CConsole* g_CConsolePtr = 007c158c
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d870
        ;   Label: core_drone.cpp_CDrone_process_FUN_0046d870
    PUSH ESI                            ; 0046d871
    PUSH EDI                            ; 0046d872
    PUSH EBP                            ; 0046d873
    MOV EBP,ESP                         ; 0046d874
    SUB ESP,0x134                       ; 0046d876
    SUB EBP,0x7a                        ; 0046d87c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0046d87f
    PUSH dword ptr [EBP + 0x92]         ; 0046d885
    PUSH EBX                            ; 0046d88b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0046d88c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0046d891
    TEST EAX,EAX                        ; 0046d894
    JZ 0x0046db31                       ; 0046d896
        ;   XREF to: 0046db31 (CONDITIONAL_JUMP)  ; LAB_0046db31
    LEA EAX,[EBX + 0x2508]              ; 0046d89c
    MOV dword ptr [EAX + 0x8],0x0       ; 0046d8a2
    FLD float ptr [EBP + 0x92]          ; 0046d8a9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046d8af
    MOV dword ptr [EAX + 0x4],EDX       ; 0046d8b2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046d8b5
    MOV dword ptr [EAX],EDX             ; 0046d8b8
    FMUL float ptr [EBX + 0x10a60]      ; 0046d8ba
    LEA ESI,[EBX + 0x2b4]               ; 0046d8c0
    FSTP float ptr [EBP + 0x66]         ; 0046d8c6
    FLD float ptr [EBP + 0x66]          ; 0046d8c9
        ;   Label: LAB_0046d8c9
    FLDZ                                ; 0046d8cc
    FCOMPP                              ; 0046d8ce
    FNSTSW AX                           ; 0046d8d0
    SAHF                                ; 0046d8d2
    JC 0x0046db48                       ; 0046d8d3
        ;   XREF to: 0046db48 (CONDITIONAL_JUMP)  ; LAB_0046db48
    FLD float ptr [EBX + 0x2510]        ; 0046d8d9
    FMUL double ptr [0x005d18a1]        ; 0046d8df | DAT_005d18a1
    FLD float ptr [EBP + 0x92]          ; 0046d8e5
    FMUL float ptr [EBX + 0x10a60]      ; 0046d8eb
    SUB ESP,0x4                         ; 0046d8f1
    FXCH                                ; 0046d8f4
    FSTP float ptr [EBX + 0x2594]       ; 0046d8f6
    FSTP float ptr [ESP]                ; 0046d8fc
    PUSH EBX                            ; 0046d8ff
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0046d900
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0046d905
    PUSH ESI                            ; 0046d908
    CALL core_motion.cpp_FUN_005035c0   ; 0046d909
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0046d90e
    PUSH dword ptr [EBP + 0x92]         ; 0046d911
    MOV EDI,dword ptr [EAX + 0x24]      ; 0046d917
    PUSH EBX                            ; 0046d91a
    MOV dword ptr [EBP + 0x72],EDI      ; 0046d91b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 0046d91e
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0046d923
    TEST EAX,EAX                        ; 0046d926
    JZ 0x0046def5                       ; 0046d928
        ;   XREF to: 0046def5 (CONDITIONAL_JUMP)  ; LAB_0046def5
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 0046d92e
    CMP EAX,0x2                         ; 0046d934
    JNC 0x0046db88                      ; 0046d937
        ;   XREF to: 0046db88 (CONDITIONAL_JUMP)  ; LAB_0046db88
    CMP EAX,0x1                         ; 0046d93d
    JNZ 0x0046db93                      ; 0046d940
        ;   XREF to: 0046db93 (CONDITIONAL_JUMP)  ; LAB_0046db93
    PUSH 0x1                            ; 0046d946
        ;   Label: LAB_0046d946
    PUSH 0x1                            ; 0046d948
    LEA EAX,[EBX + 0x2b4]               ; 0046d94a
        ;   Label: LAB_0046d94a
    PUSH EAX                            ; 0046d950
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046d951
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046d956
        ;   Label: LAB_0046d956
    LEA EAX,[EBX + 0x2508]              ; 0046d959
    MOV dword ptr [EAX + 0x8],0x0       ; 0046d95f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046d966
    MOV dword ptr [EAX + 0x4],EDX       ; 0046d969
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046d96c
    MOV dword ptr [EAX],EDX             ; 0046d96f
    FLD float ptr [EBX + 0x10a74]       ; 0046d971
        ;   Label: caseD_3
    FLDZ                                ; 0046d977
    FCOMPP                              ; 0046d979
    FNSTSW AX                           ; 0046d97b
    SAHF                                ; 0046d97d
    JNC 0x0046d992                      ; 0046d97e
        ;   XREF to: 0046d992 (CONDITIONAL_JUMP)  ; LAB_0046d992
    FLD float ptr [EBX + 0x10a74]       ; 0046d980
    FSUB float ptr [EBP + 0x92]         ; 0046d986
    FSTP float ptr [EBX + 0x10a74]      ; 0046d98c
    CMP dword ptr [EBP + 0x72],0x1      ; 0046d992
        ;   Label: LAB_0046d992
    JNZ 0x0046df51                      ; 0046d996
        ;   XREF to: 0046df51 (CONDITIONAL_JUMP)  ; LAB_0046df51
    PUSH 0x42480000                     ; 0046d99c
    SUB ESP,0x8                         ; 0046d9a1
    FLD float ptr [EBX + 0x28]          ; 0046d9a4
    FSTP double ptr [ESP]               ; 0046d9a7
    SUB ESP,0x8                         ; 0046d9aa
    FLD float ptr [EBX + 0x24]          ; 0046d9ad
    FSTP double ptr [ESP]               ; 0046d9b0
    SUB ESP,0x8                         ; 0046d9b3
    FLD float ptr [EBX + 0x20]          ; 0046d9b6
    FSTP double ptr [ESP]               ; 0046d9b9
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005515e0 ; 0046d9bc
        ;   XREF to: 005515e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_005515e0(double pos_x, double pos_y, double pos_z, float radius)
    ADD ESP,0x1c                        ; 0046d9c1
    TEST EAX,EAX                        ; 0046d9c4
    JZ 0x0046df51                       ; 0046d9c6
        ;   XREF to: 0046df51 (CONDITIONAL_JUMP)  ; LAB_0046df51
    MOV EDI,dword ptr [EBX + 0x10b08]   ; 0046d9cc
    PUSH EDI                            ; 0046d9d2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 0046d9d3
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0046d9d8
    TEST EAX,EAX                        ; 0046d9db
    JZ 0x0046df05                       ; 0046d9dd
        ;   XREF to: 0046df05 (CONDITIONAL_JUMP)  ; LAB_0046df05
    PUSH EBX                            ; 0046d9e3
        ;   Label: LAB_0046d9e3
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 0046d9e4
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0046d9e9
    TEST EAX,EAX                        ; 0046d9ec
    JZ 0x0046db02                       ; 0046d9ee
        ;   XREF to: 0046db02 (CONDITIONAL_JUMP)  ; LAB_0046db02
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0046d9f4
    TEST EAX,EAX                        ; 0046d9fa
    JZ 0x0046da28                       ; 0046d9fc
        ;   XREF to: 0046da28 (CONDITIONAL_JUMP)  ; LAB_0046da28
    PUSH EAX                            ; 0046d9fe
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0046d9ff
    CALL dword ptr [EDX + 0xfc]         ; 0046da05
    ADD ESP,0x4                         ; 0046da0b
    CMP EAX,EBX                         ; 0046da0e
    JNZ 0x0046da28                      ; 0046da10
        ;   XREF to: 0046da28 (CONDITIONAL_JUMP)  ; LAB_0046da28
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0046da12
    PUSH EDX                            ; 0046da18
    MOV ECX,dword ptr [0x0061b5a8]      ; 0046da19 | g_CDemonSetPtr
    PUSH ECX                            ; 0046da1f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0046da20
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0046da25
    PUSH dword ptr [EBP + 0x92]         ; 0046da28
        ;   Label: LAB_0046da28
    PUSH EBX                            ; 0046da2e
    LEA ESI,[EBX + 0x2588]              ; 0046da2f
    CALL core_charactr.cpp_FUN_00423a10 ; 0046da35
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 0046da3a
    FMUL float ptr [EBP + 0x92]         ; 0046da3c
    FLD float ptr [ESI + 0x4]           ; 0046da42
    FMUL float ptr [EBP + 0x92]         ; 0046da45
    FLD float ptr [ESI + 0x8]           ; 0046da4b
    FMUL float ptr [EBP + 0x92]         ; 0046da4e
    LEA EDI,[EBP + -0x6]                ; 0046da54
    LEA ESI,[EBP + -0x72]               ; 0046da57
    FXCH ST2                            ; 0046da5a
    FSTP float ptr [EBP + -0x72]        ; 0046da5c
    FSTP float ptr [EBP + -0x6e]        ; 0046da5f
    FSTP float ptr [EBP + -0x6a]        ; 0046da62
    MOVSD ES:EDI,ESI                    ; 0046da65
    MOVSD ES:EDI,ESI                    ; 0046da66
    MOVSD ES:EDI,ESI                    ; 0046da67
    LEA EDX,[EBX + 0x257c]              ; 0046da68
    FLD float ptr [EBP + -0x6]          ; 0046da6e
    FLD float ptr [EBP + -0x2]          ; 0046da71
    FLD float ptr [EBP + 0x2]           ; 0046da74
    LEA EDI,[EBP + -0x1e]               ; 0046da77
    LEA ESI,[EBP + 0x1e]                ; 0046da7a
    FXCH ST2                            ; 0046da7d
    FADD float ptr [EDX]                ; 0046da7f
    FXCH                                ; 0046da81
    FADD float ptr [EDX + 0x4]          ; 0046da83
    FXCH ST2                            ; 0046da86
    FADD float ptr [EDX + 0x8]          ; 0046da88
    FXCH                                ; 0046da8b
    FSTP float ptr [EBP + 0x1e]         ; 0046da8d
    FXCH                                ; 0046da90
    FSTP float ptr [EBP + 0x22]         ; 0046da92
    FSTP float ptr [EBP + 0x26]         ; 0046da95
    MOVSD ES:EDI,ESI                    ; 0046da98
    MOVSD ES:EDI,ESI                    ; 0046da99
    MOVSD ES:EDI,ESI                    ; 0046da9a
    LEA EAX,[EBX + 0x2508]              ; 0046da9b
    FLD float ptr [EBP + -0x1e]         ; 0046daa1
    FLD float ptr [EBP + -0x1a]         ; 0046daa4
    FLD float ptr [EBP + -0x16]         ; 0046daa7
    LEA EDI,[EBP + 0x6]                 ; 0046daaa
    LEA ESI,[EBP + -0x4e]               ; 0046daad
    FXCH ST2                            ; 0046dab0
    FADD float ptr [EAX]                ; 0046dab2
    FXCH                                ; 0046dab4
    FADD float ptr [EAX + 0x4]          ; 0046dab6
    FXCH ST2                            ; 0046dab9
    FADD float ptr [EAX + 0x8]          ; 0046dabb
    FXCH                                ; 0046dabe
    FSTP float ptr [EBP + -0x4e]        ; 0046dac0
    FXCH                                ; 0046dac3
    FSTP float ptr [EBP + -0x4a]        ; 0046dac5
    FSTP float ptr [EBP + -0x46]        ; 0046dac8
    MOVSD ES:EDI,ESI                    ; 0046dacb
    MOVSD ES:EDI,ESI                    ; 0046dacc
    MOVSD ES:EDI,ESI                    ; 0046dacd
    MOV dword ptr [EDX + 0x8],0x0       ; 0046dace
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046dad5
    MOV dword ptr [EDX + 0x4],ECX       ; 0046dad8
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046dadb
    MOV dword ptr [EDX],ECX             ; 0046dade
    MOV dword ptr [EAX + 0x8],0x0       ; 0046dae0
    ADD ESP,0x8                         ; 0046dae7
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046daea
    MOV dword ptr [EAX + 0x4],EDX       ; 0046daed
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046daf0
    MOV dword ptr [EAX],EDX             ; 0046daf3
    LEA EAX,[EBP + 0x6]                 ; 0046daf5
    PUSH EAX                            ; 0046daf8
    PUSH EBX                            ; 0046daf9
    CALL core_charactr.cpp_FUN_00423a60 ; 0046dafa
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0046daff
    PUSH EBX                            ; 0046db02
        ;   Label: LAB_0046db02
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 0046db03
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0046db08
    LEA EAX,[EBX + 0x2b4]               ; 0046db0b
    PUSH EAX                            ; 0046db11
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0046db12
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046db17
    PUSH dword ptr [EBP + 0x92]         ; 0046db1a
    PUSH EBX                            ; 0046db20
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0046db21
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0046db26
    LEA ESP,[EBP + 0x7a]                ; 0046db29
    POP EBP                             ; 0046db2c
    POP EDI                             ; 0046db2d
    POP ESI                             ; 0046db2e
    POP EBX                             ; 0046db2f
    RET                                 ; 0046db30
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 0046db31
        ;   Label: LAB_0046db31
    PUSH EDX                            ; 0046db37
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0046db38
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0046db3d
    LEA ESP,[EBP + 0x7a]                ; 0046db40
    POP EBP                             ; 0046db43
    POP EDI                             ; 0046db44
    POP ESI                             ; 0046db45
    POP EBX                             ; 0046db46
    RET                                 ; 0046db47
    LEA EAX,[EBP + 0x66]                ; 0046db48
        ;   Label: LAB_0046db48
    PUSH EAX                            ; 0046db4b
    PUSH ESI                            ; 0046db4c
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0046db4d
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0046db52
    PUSH EAX                            ; 0046db55
    PUSH EBX                            ; 0046db56
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0046db57
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0046db5c
    JMP 0x0046d8c9                      ; 0046db5f
        ;   XREF to: 0046d8c9 (UNCONDITIONAL_JUMP)  ; LAB_0046d8c9
    PUSH 0x1                            ; 0046db64
        ;   Label: LAB_0046db64
    PUSH 0x0                            ; 0046db66
    PUSH ESI                            ; 0046db68
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046db69
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046db6e
    PUSH EBX                            ; 0046db71
    PUSH 0x5d1838                       ; 0046db72 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00609ed0]      ; 0046db77 | g_CConsolePtr
    PUSH EDX                            ; 0046db7d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0046db7e
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x0046d956                      ; 0046db83
        ;   XREF to: 0046d956 (UNCONDITIONAL_JUMP)  ; LAB_0046d956
    JBE 0x0046d946                      ; 0046db88
        ;   XREF to: 0046d946 (CONDITIONAL_JUMP)  ; LAB_0046d946
        ;   Label: LAB_0046db88
    CMP EAX,0x3                         ; 0046db8e
    JZ 0x0046db64                       ; 0046db91
        ;   XREF to: 0046db64 (CONDITIONAL_JUMP)  ; LAB_0046db64
    PUSH 0x1                            ; 0046db93
        ;   Label: LAB_0046db93
    PUSH 0x0                            ; 0046db95
    JMP 0x0046d94a                      ; 0046db97
        ;   XREF to: 0046d94a (UNCONDITIONAL_JUMP)  ; LAB_0046d94a
    CMP dword ptr [EBX + 0x2570],0x0    ; 0046db9c
        ;   Label: caseD_9
    JZ 0x0046d971                       ; 0046dba3
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0046dba9
    PUSH 0xa                            ; 0046dbab
    PUSH ESI                            ; 0046dbad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046dbae
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046dbb3
    JMP 0x0046d971                      ; 0046dbb6
        ;   XREF to: 0046d971 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xffffff46]          ; 0046dbbb
        ;   Label: caseD_2
    PUSH EAX                            ; 0046dbc1
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0046dbc2
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0046dbc7
    PUSH 0x41700000                     ; 0046dbca
    PUSH 0x41200000                     ; 0046dbcf
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0046dbd4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0046dbd9
    MOV dword ptr [EBP + 0xffffff7a],EBX ; 0046dbdc
    MOV dword ptr [EBP + 0xffffff7e],EBX ; 0046dbe2
    ADD ESP,0x8                         ; 0046dbe8
    FLD float ptr [EBP + 0x76]          ; 0046dbeb
    LEA EAX,[EBP + 0xffffff46]          ; 0046dbee
    FSTP float ptr [EBP + 0xffffff4a]   ; 0046dbf4
    MOV EDX,dword ptr [EBX + 0x10afc]   ; 0046dbfa
    PUSH EAX                            ; 0046dc00
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046dc01
    SUB EAX,EDX                         ; 0046dc08
    SHL EAX,0x4                         ; 0046dc0a
    LEA EDX,[EBX + 0x1134]              ; 0046dc0d
    ADD EAX,EDX                         ; 0046dc13
    PUSH 0x3ecccccd                     ; 0046dc15
    PUSH EAX                            ; 0046dc1a
    LEA ESI,[EBP + -0x2a]               ; 0046dc1b
    PUSH 0x265370c                      ; 0046dc1e | DAT_0265370c
    LEA EDI,[EBP + 0x42]                ; 0046dc23
    MOV dword ptr [EBP + 0x6a],EDX      ; 0046dc26
    CALL core_xform.cpp_FUN_00591530    ; 0046dc29
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0046dc2e
    LEA EAX,[EBP + 0x42]                ; 0046dc31
    LEA ESI,[EBP + -0x2a]               ; 0046dc34
    PUSH EAX                            ; 0046dc37
    MOVSD ES:EDI,ESI                    ; 0046dc38
    MOVSD ES:EDI,ESI                    ; 0046dc39
    MOVSD ES:EDI,ESI                    ; 0046dc3a
    PUSH EBX                            ; 0046dc3b
    LEA ESI,[EBP + -0x12]               ; 0046dc3c
    CALL core_actor.cpp_FUN_00408d70    ; 0046dc3f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0046dc44
    LEA EAX,[EBP + -0x36]               ; 0046dc47
    PUSH EAX                            ; 0046dc4a
    LEA EDI,[EBP + -0x36]               ; 0046dc4b
    LEA ESI,[EBP + -0x12]               ; 0046dc4e
    PUSH EBX                            ; 0046dc51
    MOVSD ES:EDI,ESI                    ; 0046dc52
    MOVSD ES:EDI,ESI                    ; 0046dc53
    MOVSD ES:EDI,ESI                    ; 0046dc54
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0046dc55
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0046dc5a
    PUSH 0x41700000                     ; 0046dc5d
    PUSH 0x41200000                     ; 0046dc62
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0046dc67
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0046dc6c
    MOV dword ptr [EBP + 0xffffff7a],EBX ; 0046dc6f
    MOV dword ptr [EBP + 0xffffff7e],EBX ; 0046dc75
    ADD ESP,0x8                         ; 0046dc7b
    FLD float ptr [EBP + 0x76]          ; 0046dc7e
    LEA EAX,[EBP + 0xffffff46]          ; 0046dc81
    FSTP float ptr [EBP + 0xffffff4a]   ; 0046dc87
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 0046dc8d
    PUSH EAX                            ; 0046dc93
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046dc94
    SUB EAX,EDX                         ; 0046dc9b
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0046dc9d
    SHL EAX,0x4                         ; 0046dca0
    ADD EAX,ESI                         ; 0046dca3
    PUSH 0x3ecccccd                     ; 0046dca5
    PUSH EAX                            ; 0046dcaa
    PUSH 0x265370c                      ; 0046dcab | DAT_0265370c
    LEA ESI,[EBP + 0x12]                ; 0046dcb0
    LEA EDI,[EBP + -0x66]               ; 0046dcb3
    CALL core_xform.cpp_FUN_00591530    ; 0046dcb6
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0046dcbb
    LEA EAX,[EBP + -0x66]               ; 0046dcbe
    LEA ESI,[EBP + 0x12]                ; 0046dcc1
    PUSH EAX                            ; 0046dcc4
    MOVSD ES:EDI,ESI                    ; 0046dcc5
    MOVSD ES:EDI,ESI                    ; 0046dcc6
    MOVSD ES:EDI,ESI                    ; 0046dcc7
    PUSH EBX                            ; 0046dcc8
    LEA ESI,[EBP + 0x2a]                ; 0046dcc9
    CALL core_actor.cpp_FUN_00408d70    ; 0046dccc
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0046dcd1
    LEA EAX,[EBP + -0x5a]               ; 0046dcd4
    PUSH EAX                            ; 0046dcd7
    LEA EDI,[EBP + -0x5a]               ; 0046dcd8
    LEA ESI,[EBP + 0x2a]                ; 0046dcdb
    PUSH EBX                            ; 0046dcde
    MOVSD ES:EDI,ESI                    ; 0046dcdf
    MOVSD ES:EDI,ESI                    ; 0046dce0
    MOVSD ES:EDI,ESI                    ; 0046dce1
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0046dce2
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0046dce7
    JMP 0x0046d971                      ; 0046dcea
        ;   XREF to: 0046d971 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0x10a64],0x0   ; 0046dcef
        ;   Label: caseD_8
    JNZ 0x0046d971                      ; 0046dcf6
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xdc]      ; 0046dcfc
    TEST EAX,EAX                        ; 0046dd02
    JNZ 0x0046d971                      ; 0046dd04
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 0046dd0a
    PUSH ESI                            ; 0046dd0b
    LEA ESI,[EBP + 0x4e]                ; 0046dd0c
    LEA EDI,[EBP + 0x5a]                ; 0046dd0f
    CALL core_skeleton.cpp_FUN_005469a0 ; 0046dd12
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0046dd17
    LEA EAX,[EBP + 0x5a]                ; 0046dd1a
    LEA ESI,[EBP + 0x4e]                ; 0046dd1d
    PUSH EAX                            ; 0046dd20
    MOVSD ES:EDI,ESI                    ; 0046dd21
    MOVSD ES:EDI,ESI                    ; 0046dd22
    MOVSD ES:EDI,ESI                    ; 0046dd23
    PUSH EBX                            ; 0046dd24
    LEA ESI,[EBP + -0x7e]               ; 0046dd25
    CALL core_actor.cpp_FUN_00408d70    ; 0046dd28
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0046dd2d
    PUSH 0x1                            ; 0046dd30
    LEA EAX,[EBP + 0x36]                ; 0046dd32
    LEA EDI,[EBP + 0x36]                ; 0046dd35
    PUSH EAX                            ; 0046dd38
    MOV EDX,dword ptr [0x006167e0]      ; 0046dd39 | g_CGorePtr
    LEA ESI,[EBP + -0x7e]               ; 0046dd3f
    PUSH EDX                            ; 0046dd42
    MOVSD ES:EDI,ESI                    ; 0046dd43
    MOVSD ES:EDI,ESI                    ; 0046dd44
    MOVSD ES:EDI,ESI                    ; 0046dd45
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 0046dd46
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0046dd4b
    MOV dword ptr [EBX + 0x10a64],0x1   ; 0046dd4e
    JMP 0x0046d971                      ; 0046dd58
        ;   XREF to: 0046d971 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0046dd5d
        ;   Label: caseD_0
    PUSH EBX                            ; 0046dd63
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0046dd64
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0046dd69
    TEST EAX,EAX                        ; 0046dd6c
    JZ 0x0046dd82                       ; 0046dd6e
        ;   XREF to: 0046dd82 (CONDITIONAL_JUMP)  ; LAB_0046dd82
    PUSH 0x1                            ; 0046dd70
    PUSH 0x1                            ; 0046dd72
    PUSH ESI                            ; 0046dd74
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046dd75
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046dd7a
    JMP 0x0046d971                      ; 0046dd7d
        ;   XREF to: 0046d971 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0046dd82
        ;   Label: LAB_0046dd82
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046dd88
    PUSH EBX                            ; 0046dd8e
    CALL dword ptr [EAX + 0x150]        ; 0046dd8f
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0046dd95
    ADD ESP,0x8                         ; 0046dd9b
    TEST EAX,EAX                        ; 0046dd9e
    JZ 0x0046d971                       ; 0046dda0
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0046dda6
    PUSH 0x1                            ; 0046dda8
    PUSH ESI                            ; 0046ddaa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046ddab
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046ddb0
    JMP 0x0046d971                      ; 0046ddb3
        ;   XREF to: 0046d971 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0046ddb8
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046ddbe
    PUSH EBX                            ; 0046ddc4
    CALL dword ptr [EAX + 0x150]        ; 0046ddc5
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0046ddcb
    ADD ESP,0x8                         ; 0046ddd1
    TEST EDI,EDI                        ; 0046ddd4
    JNZ 0x0046de00                      ; 0046ddd6
        ;   XREF to: 0046de00 (CONDITIONAL_JUMP)  ; LAB_0046de00
    PUSH dword ptr [EBP + 0x92]         ; 0046ddd8
    PUSH EBX                            ; 0046ddde
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0046dddf
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0046dde4
    TEST EAX,EAX                        ; 0046dde7
    JNZ 0x0046d971                      ; 0046dde9
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0046ddef
    PUSH EDI                            ; 0046ddf1
    PUSH ESI                            ; 0046ddf2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046ddf3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046ddf8
    JMP 0x0046d971                      ; 0046ddfb
        ;   XREF to: 0046d971 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x005f5968]                ; 0046de00 | DAT_005f5968
        ;   Label: LAB_0046de00
    MOV dword ptr [EBP + 0x6e],EAX      ; 0046de05
    LEA EAX,[EBX + 0x2508]              ; 0046de08
    MOV dword ptr [EAX + 0x8],0x0       ; 0046de0e
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046de15
    MOV dword ptr [EAX + 0x4],EDX       ; 0046de18
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046de1b
    MOV dword ptr [EAX],EDX             ; 0046de1e
    XOR EAX,EAX                         ; 0046de20
    MOV dword ptr [EBP + -0x42],EAX     ; 0046de22
    MOV dword ptr [EBP + -0x3e],EAX     ; 0046de25
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0046de28
    PUSH 0x3e32b8c2                     ; 0046de2b
    MOV dword ptr [EBP + -0x3a],EAX     ; 0046de30
    LEA EAX,[EBP + -0x42]               ; 0046de33
    PUSH 0x3f000000                     ; 0046de36
    PUSH EAX                            ; 0046de3b
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0046de3c
    PUSH EAX                            ; 0046de42
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0046de43
    CALL dword ptr [EDX + 0xcc]         ; 0046de49
    ADD ESP,0x4                         ; 0046de4f
    PUSH EAX                            ; 0046de52
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0046de53
    ADD EAX,0x20                        ; 0046de59
    PUSH EAX                            ; 0046de5c
    PUSH EBX                            ; 0046de5d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0046de5e
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0046de63
    TEST EAX,EAX                        ; 0046de66
    JL 0x0046dece                       ; 0046de68
        ;   XREF to: 0046dece (CONDITIONAL_JUMP)  ; LAB_0046dece
    JLE 0x0046d971                      ; 0046de6a
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0x10a74]       ; 0046de70
    FLDZ                                ; 0046de76
    FCOMPP                              ; 0046de78
    FNSTSW AX                           ; 0046de7a
    SAHF                                ; 0046de7c
    JC 0x0046d971                       ; 0046de7d
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0046de83
    PUSH 0x2                            ; 0046de85
    PUSH ESI                            ; 0046de87
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046de88
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046de8d
    MOV ECX,dword ptr [EBX + 0x10b0c]   ; 0046de90
    PUSH ECX                            ; 0046de96
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 0046de97
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 0046dea1
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0046dea6
    TEST EAX,EAX                        ; 0046dea9
    JNZ 0x0046d971                      ; 0046deab
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x5d1883                       ; 0046deb1 | = "drone-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046deb6
    PUSH EBX                            ; 0046debc
    CALL dword ptr [EAX + 0x34]         ; 0046debd
    ADD ESP,0x8                         ; 0046dec0
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 0046dec3
    JMP 0x0046d971                      ; 0046dec9
        ;   XREF to: 0046d971 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 0046dece
        ;   Label: LAB_0046dece
    PUSH 0x5d1862                       ; 0046decf | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0046ded4 | g_CConsolePtr
    PUSH EDI                            ; 0046deda | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0046dedb
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0046dee0
    PUSH 0x1                            ; 0046dee3
    PUSH 0x0                            ; 0046dee5
    PUSH ESI                            ; 0046dee7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046dee8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046deed
    JMP 0x0046d971                      ; 0046def0
        ;   XREF to: 0046d971 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EDI,0x9                         ; 0046def5
        ;   Label: LAB_0046def5
    JA 0x0046d971                       ; 0046def8
        ;   XREF to: 0046d971 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EDI*0x4 + 0x46d840]  ; 0046defe | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0046df05
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
        ;   Label: LAB_0046df05
    PUSH 0x2                            ; 0046df0a
    PUSH 0x3f800000                     ; 0046df0c
    PUSH 0x0                            ; 0046df11
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0046df13
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 0046df18
    MOV dword ptr [EBP + 0x76],EAX      ; 0046df1b
    SUB ESP,0x8                         ; 0046df1e
    FLD float ptr [EBP + 0x76]          ; 0046df21
    FSTP double ptr [ESP]               ; 0046df24
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0 ; 0046df27
        ;   XREF to: 005503e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0046df2c
    PUSH 0x5d1895                       ; 0046df2f | = "slime.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046df34
    PUSH EBX                            ; 0046df3a
    CALL dword ptr [EAX + 0x38]         ; 0046df3b
    ADD ESP,0x8                         ; 0046df3e
    MOV dword ptr [EBX + 0x10b08],EAX   ; 0046df41
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0046df47
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    JMP 0x0046d9e3                      ; 0046df4c
        ;   XREF to: 0046d9e3 (UNCONDITIONAL_JUMP)  ; LAB_0046d9e3
    MOV ESI,dword ptr [EBX + 0x10b08]   ; 0046df51
        ;   Label: LAB_0046df51
    PUSH ESI                            ; 0046df57
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0046df58
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0046df5d
    JMP 0x0046d9e3                      ; 0046df60
        ;   XREF to: 0046d9e3 (UNCONDITIONAL_JUMP)  ; LAB_0046d9e3

