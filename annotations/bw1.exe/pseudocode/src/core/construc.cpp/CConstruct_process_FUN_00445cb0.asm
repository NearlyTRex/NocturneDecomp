; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_construc_cpp_CConstruct_process_FUN_00445cb0(CConstruct *this_ptr,float delta_time)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00445c64 = 0044697a
;   TerminatedCString s_ConstructDead_005d6e46
;   TerminatedCString s_stick_heartbeat_wav_2_005d6e54
;   TerminatedCString s_stick_heartbeat_wav_5_005d6e6d
;   TerminatedCString s_ConstructKilled_005d6e86
;   TerminatedCString s_stick_die_wav_005d6e96
;   TerminatedCString s_stick_stump_wav_2_005d6ea4
;   TerminatedCString s_stick_leg1_wav_2_005d6eba
;   TerminatedCString s_s_confused_while_walking_005d6ece
;   TerminatedCString s_stick_die_wav_005d6ef8
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d6f06
;   TerminatedCString s_stick_attack_wav_005d6f27
;   TerminatedCString s_stick_attack1_wav_005d6f39
;   TerminatedCString s_stick_leaps_wav_005d6f4b
;   TerminatedCString s_stick_walk_growl1_wav_005d6f5b
;   ... and 21 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   ... and 27 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445cb0
        ;   Label: core_construc.cpp_CConstruct_process_FUN_00445cb0
    PUSH ESI                            ; 00445cb1
    PUSH EDI                            ; 00445cb2
    PUSH EBP                            ; 00445cb3
    MOV EBP,ESP                         ; 00445cb4
    SUB ESP,0x2d0                       ; 00445cb6
    SUB EBP,0x7a                        ; 00445cbc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00445cbf
    LEA EAX,[EBX + 0x158]               ; 00445cc5
    PUSH EAX                            ; 00445ccb
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00445ccc
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00445cd1
    ADD ESP,0x4                         ; 00445cd4
    MOV dword ptr [EBP + 0x56],EAX      ; 00445cd7
    LEA EAX,[EBX + 0xc328]              ; 00445cda
    PUSH EAX                            ; 00445ce0
    MOV EDX,dword ptr [0x0061b4d0]      ; 00445ce1 | DAT_0061b4d0
    PUSH EDX                            ; 00445ce7
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00445ce8
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00445ced
    TEST EAX,EAX                        ; 00445cf0
    JNZ 0x00446182                      ; 00445cf2
        ;   XREF to: 00446182 (CONDITIONAL_JUMP)  ; LAB_00446182
    MOV EAX,0x3e800000                  ; 00445cf8
        ;   Label: LAB_00445cf8
    MOV EDI,0x3f800000                  ; 00445cfd
    MOV ECX,dword ptr [EBX + 0xc1d4]    ; 00445d02
    MOV dword ptr [EBP + 0x4a],EAX      ; 00445d08
    MOV dword ptr [EBP + 0x3e],EDI      ; 00445d0b
    MOV dword ptr [EBP + 0x4e],EDI      ; 00445d0e
    TEST ECX,ECX                        ; 00445d11
    JNZ 0x00445e8f                      ; 00445d13
        ;   XREF to: 00445e8f (CONDITIONAL_JUMP)  ; LAB_00445e8f
    MOV ESI,dword ptr [EBX + 0xca58]    ; 00445d19
    TEST ESI,ESI                        ; 00445d1f
    JNZ 0x0044620c                      ; 00445d21
        ;   XREF to: 0044620c (CONDITIONAL_JUMP)  ; LAB_0044620c
    CMP dword ptr [EBP + 0x56],0xc      ; 00445d27
    JZ 0x00445e8f                       ; 00445d2b
        ;   XREF to: 00445e8f (CONDITIONAL_JUMP)  ; LAB_00445e8f
    MOV EAX,dword ptr [EBX + 0xc308]    ; 00445d31
    PUSH EAX                            ; 00445d37
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00445d38
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00445d3d
    TEST EAX,EAX                        ; 00445d40
    JZ 0x004461df                       ; 00445d42
        ;   XREF to: 004461df (CONDITIONAL_JUMP)  ; LAB_004461df
    MOV ESI,dword ptr [0x007dc5b0]      ; 00445d48 | DAT_007dc5b0
        ;   Label: LAB_00445d48
    PUSH ESI                            ; 00445d4e
    LEA EAX,[EBX + 0x158]               ; 00445d4f
    LEA EDI,[EBP + 0xfffffe5a]          ; 00445d55
    PUSH EAX                            ; 00445d5b
    LEA ESI,[EBP + -0x3e]               ; 00445d5c
    MOV dword ptr [EBP + 0x76],EAX      ; 00445d5f
    CALL core_skeleton.cpp_FUN_00569130 ; 00445d62
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00445d67
    LEA EAX,[EBP + 0xfffffe5a]          ; 00445d6a
    LEA ESI,[EBP + -0x3e]               ; 00445d70
    PUSH EAX                            ; 00445d73
    MOVSD ES:EDI,ESI                    ; 00445d74
    MOVSD ES:EDI,ESI                    ; 00445d75
    MOVSD ES:EDI,ESI                    ; 00445d76
    PUSH EBX                            ; 00445d77
    LEA ESI,[EBP + 0xffffff6e]          ; 00445d78
    LEA EDI,[EBP + 0xffffff3e]          ; 00445d7e
    CALL core_actor.cpp_FUN_00408b40    ; 00445d84
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xffffff6e]          ; 00445d89
    ADD ESP,0x8                         ; 00445d8f
    MOV EAX,[0x007dc5b4]                ; 00445d92 | DAT_007dc5b4
    MOV EDX,dword ptr [EBP + 0x76]      ; 00445d97
    PUSH EAX                            ; 00445d9a
    MOVSD ES:EDI,ESI                    ; 00445d9b
    MOVSD ES:EDI,ESI                    ; 00445d9c
    MOVSD ES:EDI,ESI                    ; 00445d9d
    PUSH EDX                            ; 00445d9e
    LEA ESI,[EBP + -0x26]               ; 00445d9f
    LEA EDI,[EBP + 0xffffff7a]          ; 00445da2
    CALL core_skeleton.cpp_FUN_00569130 ; 00445da8
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00445dad
    LEA EAX,[EBP + 0xffffff7a]          ; 00445db0
    LEA ESI,[EBP + -0x26]               ; 00445db6
    PUSH EAX                            ; 00445db9
    MOVSD ES:EDI,ESI                    ; 00445dba
    MOVSD ES:EDI,ESI                    ; 00445dbb
    MOVSD ES:EDI,ESI                    ; 00445dbc
    PUSH EBX                            ; 00445dbd
    LEA ESI,[EBP + 0xfffffe72]          ; 00445dbe
    LEA EDI,[EBP + 0xffffff4a]          ; 00445dc4
    CALL core_actor.cpp_FUN_00408b40    ; 00445dca
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    FLD float ptr [EBP + 0xffffff3e]    ; 00445dcf
    LEA ESI,[EBP + 0xfffffe72]          ; 00445dd5
    FLD float ptr [EBP + 0xffffff42]    ; 00445ddb
    MOVSD ES:EDI,ESI                    ; 00445de1
    MOVSD ES:EDI,ESI                    ; 00445de2
    MOVSD ES:EDI,ESI                    ; 00445de3
    FLD float ptr [EBP + 0xffffff46]    ; 00445de4
    LEA EDI,[EBP + 0xfffffef6]          ; 00445dea
    LEA ESI,[EBP + 0xfffffe8a]          ; 00445df0
    FXCH ST2                            ; 00445df6
    FADD float ptr [EBP + 0xffffff4a]   ; 00445df8
    FXCH                                ; 00445dfe
    FADD float ptr [EBP + 0xffffff4e]   ; 00445e00
    FXCH ST2                            ; 00445e06
    FADD float ptr [EBP + 0xffffff52]   ; 00445e08
    FXCH                                ; 00445e0e
    FSTP float ptr [EBP + 0xfffffe8a]   ; 00445e10
    FXCH                                ; 00445e16
    FSTP float ptr [EBP + 0xfffffe8e]   ; 00445e18
    FSTP float ptr [EBP + 0xfffffe92]   ; 00445e1e
    MOVSD ES:EDI,ESI                    ; 00445e24
    MOVSD ES:EDI,ESI                    ; 00445e25
    MOVSD ES:EDI,ESI                    ; 00445e26
    ADD ESP,0x8                         ; 00445e27
    FLD float ptr [0x005d6f71]          ; 00445e2a | DAT_005d6f71
    FLD float ptr [EBP + 0xfffffef6]    ; 00445e30
    FMUL ST1                            ; 00445e36
    PUSH 0x611130                       ; 00445e38 | DAT_00611130
    FLD float ptr [EBP + 0xfffffefa]    ; 00445e3d
    FMUL ST2                            ; 00445e43
    PUSH dword ptr [EBP + 0x3e]         ; 00445e45
    PUSH dword ptr [EBP + 0x4a]         ; 00445e48
    LEA EAX,[EBP + 0xfffffe42]          ; 00445e4b
    PUSH dword ptr [EBP + 0x4e]         ; 00445e51
    MOV ECX,dword ptr [0x0061c010]      ; 00445e54 | DAT_0061c010
    PUSH EAX                            ; 00445e5a
    FLD float ptr [EBP + 0xfffffefe]    ; 00445e5b
    FMULP ST3                           ; 00445e61
    PUSH ECX                            ; 00445e63
    LEA EDI,[EBP + 0xfffffe42]          ; 00445e64
    LEA ESI,[EBP + 0xfffffed2]          ; 00445e6a
    FXCH                                ; 00445e70
    FSTP float ptr [EBP + 0xfffffed2]   ; 00445e72
    FSTP float ptr [EBP + 0xfffffed6]   ; 00445e78
    FSTP float ptr [EBP + 0xfffffeda]   ; 00445e7e
    MOVSD ES:EDI,ESI                    ; 00445e84
    MOVSD ES:EDI,ESI                    ; 00445e85
    MOVSD ES:EDI,ESI                    ; 00445e86
    CALL core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0 ; 00445e87
        ;   XREF to: 004b70f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0(CFireEffect * this_ptr, CVector3f * position, float size, float alpha, ...)
        ;   Label: LAB_00445e87
    ADD ESP,0x18                        ; 00445e8c
    PUSH dword ptr [EBP + 0x92]         ; 00445e8f
        ;   Label: LAB_00445e8f
    PUSH EBX                            ; 00445e95
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00445e96
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00445e9b
    TEST EAX,EAX                        ; 00445e9e
    JZ 0x004462a4                       ; 00445ea0
        ;   XREF to: 004462a4 (CONDITIONAL_JUMP)  ; LAB_004462a4
    CMP dword ptr [EBX + 0xca58],0x1    ; 00445ea6
    JNZ 0x00445ee8                      ; 00445ead
        ;   XREF to: 00445ee8 (CONDITIONAL_JUMP)  ; LAB_00445ee8
    FLD float ptr [EBX + 0x2538]        ; 00445eaf
    FLDZ                                ; 00445eb5
    FCOMPP                              ; 00445eb7
    FNSTSW AX                           ; 00445eb9
    SAHF                                ; 00445ebb
    JNC 0x00445ee8                      ; 00445ebc
        ;   XREF to: 00445ee8 (CONDITIONAL_JUMP)  ; LAB_00445ee8
    FLD float ptr [EBX + 0xca5c]        ; 00445ebe
    FADD float ptr [EBP + 0x92]         ; 00445ec4
    FST float ptr [EBX + 0xca5c]        ; 00445eca
    FCOMP float ptr [EBX + 0xc38c]      ; 00445ed0
    FNSTSW AX                           ; 00445ed6
    SAHF                                ; 00445ed8
    JBE 0x004462bb                      ; 00445ed9
        ;   XREF to: 004462bb (CONDITIONAL_JUMP)  ; LAB_004462bb
    PUSH EBX                            ; 00445edf
    CALL core_construc.cpp_FUN_00447560 ; 00445ee0
        ;   XREF to: 00447560 (UNCONDITIONAL_CALL)  ; undefined core_construc.cpp_FUN_00447560()
    ADD ESP,0x4                         ; 00445ee5
    CMP dword ptr [EBX + 0xca58],0x2    ; 00445ee8
        ;   Label: LAB_00445ee8
    JNZ 0x00446496                      ; 00445eef
        ;   XREF to: 00446496 (CONDITIONAL_JUMP)  ; LAB_00446496
    MOV EDX,dword ptr [EBX + 0xca60]    ; 00445ef5
    LEA EAX,[EDX*0x8 + 0x0]             ; 00445efb
    ADD EAX,EDX                         ; 00445f02
    LEA EDX,[EBX + 0xc398]              ; 00445f04
    MOV EAX,dword ptr [EDX + EAX*0x8 + 0x44] ; 00445f0a
    TEST EAX,EAX                        ; 00445f0e
    JZ 0x00445f3e                       ; 00445f10
        ;   XREF to: 00445f3e (CONDITIONAL_JUMP)  ; LAB_00445f3e
    PUSH EAX                            ; 00445f12
    MOV EDX,dword ptr [EAX + 0x154]     ; 00445f13
    CALL dword ptr [EDX + 0x94]         ; 00445f19
    MOV EDX,dword ptr [0x01d06ab4]      ; 00445f1f | DAT_01d06ab4
    SHL EDX,0x2                         ; 00445f25
    MOV ECX,dword ptr [EDX + 0x1d06aa4] ; 00445f28
    ADD ESP,0x4                         ; 00445f2e
    CMP EAX,ECX                         ; 00445f31
    JNZ 0x00445f3e                      ; 00445f33
        ;   XREF to: 00445f3e (CONDITIONAL_JUMP)  ; LAB_00445f3e
    PUSH ECX                            ; 00445f35
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0 ; 00445f36
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00445f3b
    FLD float ptr [EBP + 0x92]          ; 00445f3e
        ;   Label: LAB_00445f3e
    FDIV float ptr [0x005fddc8]         ; 00445f44 | DAT_005fddc8
    FADD float ptr [EBX + 0xca5c]       ; 00445f4a
    FST float ptr [EBX + 0xca5c]        ; 00445f50
    FLD1                                ; 00445f56
    FCOMPP                              ; 00445f58
    FNSTSW AX                           ; 00445f5a
    SAHF                                ; 00445f5c
    JBE 0x00446431                      ; 00445f5d
        ;   XREF to: 00446431 (CONDITIONAL_JUMP)  ; LAB_00446431
    XOR EDX,EDX                         ; 00445f63
    MOV ECX,dword ptr [EBX + 0xc394]    ; 00445f65
    MOV dword ptr [EBP + 0x6a],EDX      ; 00445f6b
    TEST ECX,ECX                        ; 00445f6e
    JLE 0x0044617a                      ; 00445f70
        ;   XREF to: 0044617a (CONDITIONAL_JUMP)  ; LAB_0044617a
    LEA EAX,[EBX + 0xc398]              ; 00445f76
    MOV dword ptr [EBP + 0x5a],EAX      ; 00445f7c
    LEA EAX,[EBX + 0xca5c]              ; 00445f7f
    MOV dword ptr [EBP + 0x66],EAX      ; 00445f85
    LEA EAX,[EBX + 0xc3b0]              ; 00445f88
    MOV dword ptr [EBP + 0x5e],EAX      ; 00445f8e
    LEA EAX,[EBX + 0xc3c0]              ; 00445f91
    MOV dword ptr [EBP + 0x62],EAX      ; 00445f97
    LEA EAX,[EBX + 0xc3d0]              ; 00445f9a
    MOV dword ptr [EBP + 0x6e],EAX      ; 00445fa0
    IMUL EAX,dword ptr [EBP + 0x6a],0x48 ; 00445fa3
        ;   Label: LAB_00445fa3
    ADD EAX,dword ptr [EBP + 0x5a]      ; 00445fa7
    LEA ESI,[EBP + 0xffffff02]          ; 00445faa
    FLD float ptr [EAX]                 ; 00445fb0
    MOV EDX,dword ptr [EAX + 0x44]      ; 00445fb2
    FLD float ptr [EAX + 0x4]           ; 00445fb5
    MOV dword ptr [EBP + 0x46],EDX      ; 00445fb8
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00445fbb
    FLD float ptr [EAX + 0x8]           ; 00445fbe
    LEA EDI,[EBP + 0xffffff0e]          ; 00445fc1
    FXCH ST2                            ; 00445fc7
    FSUB float ptr [EDX]                ; 00445fc9
    FXCH                                ; 00445fcb
    FSUB float ptr [EDX + 0x4]          ; 00445fcd
    FXCH ST2                            ; 00445fd0
    FSUB float ptr [EDX + 0x8]          ; 00445fd2
    FXCH                                ; 00445fd5
    FSTP float ptr [EBP + 0xffffff02]   ; 00445fd7
    FXCH                                ; 00445fdd
    FSTP float ptr [EBP + 0xffffff06]   ; 00445fdf
    FSTP float ptr [EBP + 0xffffff0a]   ; 00445fe5
    MOVSD ES:EDI,ESI                    ; 00445feb
    MOVSD ES:EDI,ESI                    ; 00445fec
    MOVSD ES:EDI,ESI                    ; 00445fed
    MOV EAX,dword ptr [EBP + 0x66]      ; 00445fee
    FLD float ptr [EBP + 0xffffff0e]    ; 00445ff1
    FMUL float ptr [EAX]                ; 00445ff7
    FLD float ptr [EBP + 0xffffff12]    ; 00445ff9
    FMUL float ptr [EAX]                ; 00445fff
    FLD float ptr [EBP + 0xffffff16]    ; 00446001
    FMUL float ptr [EAX]                ; 00446007
    LEA EDI,[EBP + 0xfffffe66]          ; 00446009
    LEA ESI,[EBP + -0xe]                ; 0044600f
    FXCH ST2                            ; 00446012
    FSTP float ptr [EBP + -0xe]         ; 00446014
    FSTP float ptr [EBP + -0xa]         ; 00446017
    FSTP float ptr [EBP + -0x6]         ; 0044601a
    MOVSD ES:EDI,ESI                    ; 0044601d
    MOVSD ES:EDI,ESI                    ; 0044601e
    MOVSD ES:EDI,ESI                    ; 0044601f
    FLD float ptr [EDX]                 ; 00446020
    FLD float ptr [EDX + 0x4]           ; 00446022
    FLD float ptr [EDX + 0x8]           ; 00446025
    LEA EDI,[EBP + 0xfffffeea]          ; 00446028
    LEA ESI,[EBP + -0x56]               ; 0044602e
    FXCH ST2                            ; 00446031
    FADD float ptr [EBP + 0xfffffe66]   ; 00446033
    FXCH                                ; 00446039
    FADD float ptr [EBP + 0xfffffe6a]   ; 0044603b
    FXCH ST2                            ; 00446041
    FADD float ptr [EBP + 0xfffffe6e]   ; 00446043
    FXCH                                ; 00446049
    FSTP float ptr [EBP + -0x56]        ; 0044604b
    FXCH                                ; 0044604e
    FSTP float ptr [EBP + -0x52]        ; 00446050
    FSTP float ptr [EBP + -0x4e]        ; 00446053
    MOVSD ES:EDI,ESI                    ; 00446056
    MOVSD ES:EDI,ESI                    ; 00446057
    MOVSD ES:EDI,ESI                    ; 00446058
    MOV EAX,dword ptr [EBP + 0x62]      ; 00446059
    PUSH dword ptr [EBX + 0xca5c]       ; 0044605c
    PUSH EAX                            ; 00446062
    MOV EDX,dword ptr [EBP + 0x5e]      ; 00446063
    PUSH EDX                            ; 00446066
    LEA ESI,[EBP + 0xfffffde6]          ; 00446067
    LEA EDI,[EBP + 0xfffffdf6]          ; 0044606d
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 00446073
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    LEA ESI,[EBP + 0xfffffde6]          ; 00446078
    LEA EAX,[EBP + 0xfffffdf6]          ; 0044607e
    ADD ESP,0xc                         ; 00446084
    MOVSD ES:EDI,ESI                    ; 00446087
    MOVSD ES:EDI,ESI                    ; 00446088
    MOVSD ES:EDI,ESI                    ; 00446089
    MOVSD ES:EDI,ESI                    ; 0044608a
    PUSH EAX                            ; 0044608b
    LEA ESI,[EBP + 0xffffff56]          ; 0044608c
    LEA EDI,[EBP + 0xffffff1a]          ; 00446092
    CALL core_xform.cpp_FUN_005b7c00    ; 00446098
        ;   XREF to: 005b7c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7c00()
    LEA ESI,[EBP + 0xffffff56]          ; 0044609d
    MOVSD ES:EDI,ESI                    ; 004460a3
    MOVSD ES:EDI,ESI                    ; 004460a4
    MOVSD ES:EDI,ESI                    ; 004460a5
    FLD float ptr [EBX + 0xca5c]        ; 004460a6
    FMUL double ptr [0x005d6f95]        ; 004460ac | DAT_005d6f95
    MOV EAX,dword ptr [EBP + 0xfffffeea] ; 004460b2
    FLD float ptr [EBP + 0xffffff1a]    ; 004460b8
    FXCH                                ; 004460be
    FADD ST0,ST1                        ; 004460c0
    MOV ESI,dword ptr [EBP + 0x46]      ; 004460c2
    FSTP ST1                            ; 004460c5
    FSTP float ptr [EBP + 0xffffff1a]   ; 004460c7
    MOV dword ptr [ESI + 0x20],EAX      ; 004460cd
    MOV EAX,dword ptr [EBP + 0xfffffeee] ; 004460d0
    MOV dword ptr [ESI + 0x24],EAX      ; 004460d6
    MOV EAX,dword ptr [EBP + 0xfffffef2] ; 004460d9
    LEA EDX,[ESI + 0x30]                ; 004460df
    MOV dword ptr [ESI + 0x28],EAX      ; 004460e2
    LEA EAX,[EBP + 0xffffff1a]          ; 004460e5
    ADD ESP,0x4                         ; 004460eb
    CMP EDX,EAX                         ; 004460ee
    JNZ 0x00446412                      ; 004460f0
        ;   XREF to: 00446412 (CONDITIONAL_JUMP)  ; LAB_00446412
    LEA EAX,[EBP + 0xfffffeea]          ; 004460f6
        ;   Label: LAB_004460f6
    LEA EDX,[ESI + 0xcd0]               ; 004460fc
    CMP EDX,EAX                         ; 00446102
    JZ 0x00446120                       ; 00446104
        ;   XREF to: 00446120 (CONDITIONAL_JUMP)  ; LAB_00446120
    MOV EAX,dword ptr [EBP + 0xfffffeea] ; 00446106
    MOV dword ptr [EDX],EAX             ; 0044610c
    MOV EAX,dword ptr [EBP + 0xfffffeee] ; 0044610e
    MOV dword ptr [EDX + 0x4],EAX       ; 00446114
    MOV EAX,dword ptr [EBP + 0xfffffef2] ; 00446117
    MOV dword ptr [EDX + 0x8],EAX       ; 0044611d
    LEA EAX,[EBP + 0xffffff1a]          ; 00446120
        ;   Label: LAB_00446120
    LEA EDX,[ESI + 0xcdc]               ; 00446126
    CMP EDX,EAX                         ; 0044612c
    JZ 0x0044614a                       ; 0044612e
        ;   XREF to: 0044614a (CONDITIONAL_JUMP)  ; LAB_0044614a
    MOV EAX,dword ptr [EBP + 0xffffff1a] ; 00446130
    MOV dword ptr [EDX],EAX             ; 00446136
    MOV EAX,dword ptr [EBP + 0xffffff1e] ; 00446138
    MOV dword ptr [EDX + 0x4],EAX       ; 0044613e
    MOV EAX,dword ptr [EBP + 0xffffff22] ; 00446141
    MOV dword ptr [EDX + 0x8],EAX       ; 00446147
    MOV ESI,dword ptr [EBP + 0x5e]      ; 0044614a
        ;   Label: LAB_0044614a
    MOV EDI,dword ptr [EBP + 0x62]      ; 0044614d
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00446150
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00446153
    MOV ECX,dword ptr [EBX + 0xc394]    ; 00446156
    ADD ESI,0x48                        ; 0044615c
    ADD EDI,0x48                        ; 0044615f
    ADD EAX,0x48                        ; 00446162
    INC EDX                             ; 00446165
    MOV dword ptr [EBP + 0x5e],ESI      ; 00446166
    MOV dword ptr [EBP + 0x62],EDI      ; 00446169
    MOV dword ptr [EBP + 0x6e],EAX      ; 0044616c
    MOV dword ptr [EBP + 0x6a],EDX      ; 0044616f
    CMP EDX,ECX                         ; 00446172
    JL 0x00445fa3                       ; 00446174
        ;   XREF to: 00445fa3 (CONDITIONAL_JUMP)  ; LAB_00445fa3
    LEA ESP,[EBP + 0x7a]                ; 0044617a
        ;   Label: LAB_0044617a
    POP EBP                             ; 0044617d
    POP EDI                             ; 0044617e
    POP ESI                             ; 0044617f
    POP EBX                             ; 00446180
    RET                                 ; 00446181
    MOV dword ptr [EBX + 0x2538],0x0    ; 00446182
        ;   Label: LAB_00446182
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0044618c
    MOV ECX,dword ptr [EBX + 0xca58]    ; 00446196
    MOV dword ptr [EBX + 0xca5c],0x0    ; 0044619c
    TEST ECX,ECX                        ; 004461a6
    JNZ 0x004461c7                      ; 004461a8
        ;   XREF to: 004461c7 (CONDITIONAL_JUMP)  ; LAB_004461c7
    PUSH EBX                            ; 004461aa
    CALL core_construc.cpp_CConstruct_explode_FUN_004472a0 ; 004461ab
        ;   XREF to: 004472a0 (UNCONDITIONAL_CALL)  ; void core_construc.cpp_CConstruct_explode_FUN_004472a0(CConstruct * this_ptr)
    ADD ESP,0x4                         ; 004461b0
    PUSH 0x5d6e46                       ; 004461b3 | = "ConstructDead"
    MOV ESI,dword ptr [0x0061b4d0]      ; 004461b8 | DAT_0061b4d0
    PUSH ESI                            ; 004461be
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004461bf
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004461c4
    PUSH 0x0                            ; 004461c7
        ;   Label: LAB_004461c7
    PUSH 0xb                            ; 004461c9
    LEA EAX,[EBX + 0x158]               ; 004461cb
    PUSH EAX                            ; 004461d1
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10 ; 004461d2
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 004461d7
    JMP 0x00445cf8                      ; 004461da
        ;   XREF to: 00445cf8 (UNCONDITIONAL_JUMP)  ; LAB_00445cf8
    PUSH 0x5d6e54                       ; 004461df | = "stick-heartbeat.wav @ .2"
        ;   Label: LAB_004461df
    MOV EAX,dword ptr [EBX + 0x154]     ; 004461e4
    PUSH EBX                            ; 004461ea
    CALL dword ptr [EAX + 0x2c]         ; 004461eb
    MOV EDX,0x3f800000                  ; 004461ee
    MOV ECX,0x3ecccccd                  ; 004461f3
    ADD ESP,0x8                         ; 004461f8
    MOV dword ptr [EBX + 0xc308],EAX    ; 004461fb
    MOV dword ptr [EBP + 0x4e],EDX      ; 00446201
    MOV dword ptr [EBP + 0x4a],ECX      ; 00446204
    JMP 0x00445d48                      ; 00446207
        ;   XREF to: 00445d48 (UNCONDITIONAL_JUMP)  ; LAB_00445d48
    CMP ESI,0x1                         ; 0044620c
        ;   Label: LAB_0044620c
    JNZ 0x00445e8f                      ; 0044620f
        ;   XREF to: 00445e8f (CONDITIONAL_JUMP)  ; LAB_00445e8f
    MOV EAX,dword ptr [EBX + 0xc308]    ; 00446215
    PUSH EAX                            ; 0044621b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 0044621c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446221
    TEST EAX,EAX                        ; 00446224
    JZ 0x00446282                       ; 00446226
        ;   XREF to: 00446282 (CONDITIONAL_JUMP)  ; LAB_00446282
    MOV EDX,dword ptr [EBX + 0xca60]    ; 00446228
        ;   Label: LAB_00446228
    LEA EAX,[EDX*0x8 + 0x0]             ; 0044622e
    ADD EAX,EDX                         ; 00446235
    LEA EDX,[EBX + 0xc398]              ; 00446237
    MOV EDX,dword ptr [EDX + EAX*0x8 + 0x44] ; 0044623d
    TEST EDX,EDX                        ; 00446241
    JZ 0x00445e8f                       ; 00446243
        ;   XREF to: 00445e8f (CONDITIONAL_JUMP)  ; LAB_00445e8f
    LEA EAX,[EBP + 0xa]                 ; 00446249
    ADD EDX,0x20                        ; 0044624c
    CMP EAX,EDX                         ; 0044624f
    JZ 0x00446264                       ; 00446251
        ;   XREF to: 00446264 (CONDITIONAL_JUMP)  ; LAB_00446264
    MOV EAX,dword ptr [EDX]             ; 00446253
    MOV dword ptr [EBP + 0xa],EAX       ; 00446255
    MOV EAX,dword ptr [EDX + 0x4]       ; 00446258
    MOV dword ptr [EBP + 0xe],EAX       ; 0044625b
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044625e
    MOV dword ptr [EBP + 0x12],EAX      ; 00446261
    PUSH 0x611130                       ; 00446264 | DAT_00611130
        ;   Label: LAB_00446264
    PUSH dword ptr [EBP + 0x3e]         ; 00446269
    PUSH dword ptr [EBP + 0x4a]         ; 0044626c
    LEA EAX,[EBP + 0xa]                 ; 0044626f
    PUSH dword ptr [EBP + 0x4e]         ; 00446272
    PUSH EAX                            ; 00446275
    MOV ESI,dword ptr [0x0061c010]      ; 00446276 | DAT_0061c010
    PUSH ESI                            ; 0044627c
    JMP 0x00445e87                      ; 0044627d
        ;   XREF to: 00445e87 (UNCONDITIONAL_JUMP)  ; LAB_00445e87
    PUSH 0x5d6e6d                       ; 00446282 | = "stick-heartbeat.wav @ .5"
        ;   Label: LAB_00446282
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446287
    PUSH EBX                            ; 0044628d
    CALL dword ptr [EAX + 0x2c]         ; 0044628e
    MOV ECX,0x3ecccccd                  ; 00446291
    ADD ESP,0x8                         ; 00446296
    MOV dword ptr [EBX + 0xc308],EAX    ; 00446299
    MOV dword ptr [EBP + 0x4a],ECX      ; 0044629f
    JMP 0x00446228                      ; 004462a2
        ;   XREF to: 00446228 (UNCONDITIONAL_JUMP)  ; LAB_00446228
    MOV ESI,dword ptr [EBX + 0xc304]    ; 004462a4
        ;   Label: LAB_004462a4
    PUSH ESI                            ; 004462aa
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004462ab
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004462b0
    LEA ESP,[EBP + 0x7a]                ; 004462b3
    POP EBP                             ; 004462b6
    POP EDI                             ; 004462b7
    POP ESI                             ; 004462b8
    POP EBX                             ; 004462b9
    RET                                 ; 004462ba
    MOV EDX,dword ptr [EBX + 0xca60]    ; 004462bb
        ;   Label: LAB_004462bb
    LEA EAX,[EDX*0x8 + 0x0]             ; 004462c1
    ADD EAX,EDX                         ; 004462c8
    LEA EDX,[EBX + 0xc398]              ; 004462ca
    MOV EAX,dword ptr [EDX + EAX*0x8 + 0x44] ; 004462d0
    MOV dword ptr [EBP + 0x52],EAX      ; 004462d4
    TEST EAX,EAX                        ; 004462d7
    JZ 0x0044617a                       ; 004462d9
        ;   XREF to: 0044617a (CONDITIONAL_JUMP)  ; LAB_0044617a
    MOV EDX,dword ptr [EBP + 0x52]      ; 004462df
    MOV EAX,dword ptr [EAX + 0x154]     ; 004462e2
    PUSH EDX                            ; 004462e8
    CALL dword ptr [EAX + 0x94]         ; 004462e9
    MOV EDX,dword ptr [0x01d06ab4]      ; 004462ef | DAT_01d06ab4
    MOV ECX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004462f5
    ADD ESP,0x4                         ; 004462fc
    CMP EAX,ECX                         ; 004462ff
    JNZ 0x0044617a                      ; 00446301
        ;   XREF to: 0044617a (CONDITIONAL_JUMP)  ; LAB_0044617a
    LEA EAX,[EBX + 0xc328]              ; 00446307
    PUSH EAX                            ; 0044630d
    MOV ESI,dword ptr [0x0061b4d0]      ; 0044630e | DAT_0061b4d0
    PUSH ESI                            ; 00446314
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00446315
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0044631a
    PUSH 0x5d6e86                       ; 0044631d | = "ConstructKilled"
    MOV EDI,dword ptr [0x0061b4d0]      ; 00446322 | DAT_0061b4d0
    PUSH EDI                            ; 00446328
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00446329
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0044632e
    MOV EAX,dword ptr [EBX + 0xc318]    ; 00446331
    PUSH EAX                            ; 00446337
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446338
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0044633d
    TEST EAX,EAX                        ; 00446340
    JNZ 0x0044635c                      ; 00446342
        ;   XREF to: 0044635c (CONDITIONAL_JUMP)  ; LAB_0044635c
    PUSH 0x5d6e96                       ; 00446344 | = "stick-die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446349
    PUSH EBX                            ; 0044634f
    CALL dword ptr [EAX + 0x2c]         ; 00446350
    ADD ESP,0x8                         ; 00446353
    MOV dword ptr [EBX + 0xc318],EAX    ; 00446356
    MOV ECX,0x3f800000                  ; 0044635c
        ;   Label: LAB_0044635c
    PUSH 0xffff                         ; 00446361
    LEA EAX,[EBP + 0xfffffe12]          ; 00446366
    MOV EDI,dword ptr [EBP + 0x52]      ; 0044636c
    PUSH EAX                            ; 0044636f
    XOR EDX,EDX                         ; 00446370
    ADD EDI,0x20                        ; 00446372
    PUSH 0x3f000000                     ; 00446375
    XOR ESI,ESI                         ; 0044637a
    PUSH EDI                            ; 0044637c
    MOV EAX,[0x0061c010]                ; 0044637d | DAT_0061c010
    MOV dword ptr [EBP + 0xfffffe12],EDX ; 00446382
    PUSH EAX                            ; 00446388
    MOV dword ptr [EBP + 0xfffffe16],ECX ; 00446389
    MOV dword ptr [EBP + 0xfffffe1a],EDX ; 0044638f
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 00446395
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0044639a
    PUSH 0x3e4ccccd                     ; 0044639d
        ;   Label: LAB_0044639d
    PUSH 0x3f800000                     ; 004463a2
    PUSH 0x88b8                         ; 004463a7
    PUSH 0x1                            ; 004463ac
    XOR EAX,EAX                         ; 004463ae
    PUSH 0xffdc                         ; 004463b0
    MOV dword ptr [EBP + -0x1a],EAX     ; 004463b5
    PUSH 0xfa0                          ; 004463b8
    MOV dword ptr [EBP + -0x12],EAX     ; 004463bd
    LEA EAX,[EBP + -0x1a]               ; 004463c0
    PUSH EAX                            ; 004463c3
    PUSH EDI                            ; 004463c4
    MOV EAX,[0x0061c010]                ; 004463c5 | DAT_0061c010
    MOV EDX,0x3f800000                  ; 004463ca
    PUSH EAX                            ; 004463cf
    INC ESI                             ; 004463d0
    MOV dword ptr [EBP + -0x16],EDX     ; 004463d1
    CALL core_fire.cpp_CFireEffect_createFirefly_FUN_004b5fa0 ; 004463d4
        ;   XREF to: 004b5fa0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFirefly_FUN_004b5fa0(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, int param_4, ...)
    ADD ESP,0x24                        ; 004463d9
    CMP ESI,0xa                         ; 004463dc
    JL 0x0044639d                       ; 004463df
        ;   XREF to: 0044639d (CONDITIONAL_JUMP)  ; LAB_0044639d
    MOV EAX,[0x01d06ab4]                ; 004463e1 | DAT_01d06ab4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004463e6
    PUSH EDX                            ; 004463ed
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0 ; 004463ee
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(CCharacter * this_ptr)
    MOV EAX,dword ptr [EBP + 0x52]      ; 004463f3
    MOV dword ptr [EAX + 0x70],0x2      ; 004463f6
    ADD ESP,0x4                         ; 004463fd
    MOV dword ptr [EBX + 0xca58],0x3    ; 00446400
    LEA ESP,[EBP + 0x7a]                ; 0044640a
    POP EBP                             ; 0044640d
    POP EDI                             ; 0044640e
    POP ESI                             ; 0044640f
    POP EBX                             ; 00446410
    RET                                 ; 00446411
    MOV EAX,dword ptr [EBP + 0xffffff1a] ; 00446412
        ;   Label: LAB_00446412
    MOV dword ptr [EDX],EAX             ; 00446418
    MOV EAX,dword ptr [EBP + 0xffffff1e] ; 0044641a
    MOV dword ptr [EDX + 0x4],EAX       ; 00446420
    MOV EAX,dword ptr [EBP + 0xffffff22] ; 00446423
    MOV dword ptr [EDX + 0x8],EAX       ; 00446429
    JMP 0x004460f6                      ; 0044642c
        ;   XREF to: 004460f6 (UNCONDITIONAL_JUMP)  ; LAB_004460f6
    LEA EAX,[EBX + 0x158]               ; 00446431
        ;   Label: LAB_00446431
    PUSH EAX                            ; 00446437
    XOR EDI,EDI                         ; 00446438
    CALL core_skeleton.cpp_FUN_00569ae0 ; 0044643a
        ;   XREF to: 00569ae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569ae0()
    MOV EAX,dword ptr [EBX + 0xc394]    ; 0044643f
    ADD ESP,0x4                         ; 00446445
    TEST EAX,EAX                        ; 00446448
    JLE 0x00446480                      ; 0044644a
        ;   XREF to: 00446480 (CONDITIONAL_JUMP)  ; LAB_00446480
    MOV ESI,EBX                         ; 0044644c
    PUSH 0x1                            ; 0044644e
        ;   Label: LAB_0044644e
    MOV ECX,dword ptr [ESI + 0xc3dc]    ; 00446450
    PUSH ECX                            ; 00446456
    MOV EAX,[0x0061f650]                ; 00446457 | DAT_0061f650
    PUSH EAX                            ; 0044645c | DAT_01d2c900
    ADD ESI,0x48                        ; 0044645d
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_0051b740 ; 00446460
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_0051b740(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV dword ptr [ESI + 0xc394],0x0    ; 00446465
    INC EDI                             ; 0044646f
    MOV EDX,dword ptr [EBX + 0xc394]    ; 00446470
    ADD ESP,0xc                         ; 00446476
    CMP EDI,EDX                         ; 00446479
    JL 0x0044644e                       ; 0044647b
        ;   XREF to: 0044644e (CONDITIONAL_JUMP)  ; LAB_0044644e
    LEA EAX,[EAX]                       ; 0044647d
    MOV dword ptr [EBX + 0xca58],0x0    ; 00446480
        ;   Label: LAB_00446480
    FILD dword ptr [EBX + 0xc390]       ; 0044648a
    FSTP float ptr [EBX + 0x2538]       ; 00446490
    LEA EAX,[EBX + 0x249c]              ; 00446496
        ;   Label: LAB_00446496
    MOV dword ptr [EAX + 0x8],0x0       ; 0044649c
    FLD float ptr [EBP + 0x92]          ; 004464a3
    MOV EDX,dword ptr [EAX + 0x8]       ; 004464a9
    MOV dword ptr [EAX + 0x4],EDX       ; 004464ac
    MOV EDX,dword ptr [EAX + 0x4]       ; 004464af
    MOV dword ptr [EAX],EDX             ; 004464b2
    FMUL float ptr [EBX + 0xc1d0]       ; 004464b4
    FMUL float ptr [EBX + 0xca68]       ; 004464ba
    LEA EDI,[EBX + 0x158]               ; 004464c0
    FSTP float ptr [EBP + 0x36]         ; 004464c6
    FLD float ptr [EBP + 0x36]          ; 004464c9
        ;   Label: LAB_004464c9
    FLDZ                                ; 004464cc
    FCOMPP                              ; 004464ce
    FNSTSW AX                           ; 004464d0
    SAHF                                ; 004464d2
    JNC 0x00446569                      ; 004464d3
        ;   XREF to: 00446569 (CONDITIONAL_JUMP)  ; LAB_00446569
    LEA EAX,[EBP + 0x36]                ; 004464d9
    PUSH EAX                            ; 004464dc
    PUSH EDI                            ; 004464dd
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004464de
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004464e3
    MOV ESI,EAX                         ; 004464e6
    CMP EAX,0x1                         ; 004464e8
    JNC 0x00446553                      ; 004464eb
        ;   XREF to: 00446553 (CONDITIONAL_JUMP)  ; LAB_00446553
    PUSH ESI                            ; 004464ed
        ;   Label: LAB_004464ed
    PUSH EBX                            ; 004464ee
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004464ef
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004464f4
    JMP 0x004464c9                      ; 004464f7
        ;   XREF to: 004464c9 (UNCONDITIONAL_JUMP)  ; LAB_004464c9
    MOV EDX,dword ptr [EBX + 0xc30c]    ; 004464f9
        ;   Label: LAB_004464f9
    PUSH EDX                            ; 004464ff
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446500
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446505
    TEST EAX,EAX                        ; 00446508
    JZ 0x00446539                       ; 0044650a
        ;   XREF to: 00446539 (CONDITIONAL_JUMP)  ; LAB_00446539
    MOV ECX,dword ptr [EBX + 0xc310]    ; 0044650c
        ;   Label: LAB_0044650c
    PUSH ECX                            ; 00446512
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446513
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446518
    TEST EAX,EAX                        ; 0044651b
    JNZ 0x004464ed                      ; 0044651d
        ;   XREF to: 004464ed (CONDITIONAL_JUMP)  ; LAB_004464ed
    PUSH 0x5d6eba                       ; 0044651f | = "stick-leg1.wav @ .2"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446524
    PUSH EBX                            ; 0044652a
    CALL dword ptr [EAX + 0x2c]         ; 0044652b
    ADD ESP,0x8                         ; 0044652e
    MOV dword ptr [EBX + 0xc310],EAX    ; 00446531
    JMP 0x004464ed                      ; 00446537
        ;   XREF to: 004464ed (UNCONDITIONAL_JUMP)  ; LAB_004464ed
    PUSH 0x5d6ea4                       ; 00446539 | = "stick-stump?.wav @ .2"
        ;   Label: LAB_00446539
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044653e
    PUSH EBX                            ; 00446544
    CALL dword ptr [EAX + 0x2c]         ; 00446545
    ADD ESP,0x8                         ; 00446548
    MOV dword ptr [EBX + 0xc30c],EAX    ; 0044654b
    JMP 0x0044650c                      ; 00446551
        ;   XREF to: 0044650c (UNCONDITIONAL_JUMP)  ; LAB_0044650c
    JBE 0x004464f9                      ; 00446553
        ;   XREF to: 004464f9 (CONDITIONAL_JUMP)  ; LAB_004464f9
        ;   Label: LAB_00446553
    CMP EAX,0x7                         ; 00446555
    JZ 0x0044650c                       ; 00446558
        ;   XREF to: 0044650c (CONDITIONAL_JUMP)  ; LAB_0044650c
    PUSH ESI                            ; 0044655a
    PUSH EBX                            ; 0044655b
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0044655c
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00446561
    JMP 0x004464c9                      ; 00446564
        ;   XREF to: 004464c9 (UNCONDITIONAL_JUMP)  ; LAB_004464c9
    FLD float ptr [EBP + 0x92]          ; 00446569
        ;   Label: LAB_00446569
    FMUL float ptr [EBX + 0xc1d0]       ; 0044656f
    SUB ESP,0x4                         ; 00446575
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00446578
    MOV dword ptr [EBX + 0x2524],EAX    ; 0044657e
    FSTP float ptr [ESP]                ; 00446584
    PUSH EBX                            ; 00446587
    CALL core_charactr.cpp_FUN_00435320 ; 00446588
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 0044658d
    PUSH dword ptr [EBP + 0x92]         ; 00446590
    PUSH EBX                            ; 00446596
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00446597
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0044659c
    TEST EAX,EAX                        ; 0044659f
    JZ 0x00446de7                       ; 004465a1
        ;   XREF to: 00446de7 (CONDITIONAL_JUMP)  ; LAB_00446de7
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004465a7
    CMP EAX,0x2                         ; 004465ad
    JNC 0x004467f9                      ; 004465b0
        ;   XREF to: 004467f9 (CONDITIONAL_JUMP)  ; LAB_004467f9
    CMP EAX,0x1                         ; 004465b6
    JNZ 0x00446804                      ; 004465b9
        ;   XREF to: 00446804 (CONDITIONAL_JUMP)  ; LAB_00446804
    PUSH 0x1                            ; 004465bf
        ;   Label: LAB_004465bf
    PUSH 0x3                            ; 004465c1
    LEA EAX,[EBX + 0x158]               ; 004465c3
        ;   Label: LAB_004465c3
    PUSH EAX                            ; 004465c9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004465ca
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004465cf
        ;   Label: LAB_004465cf
    LEA EAX,[EBX + 0x249c]              ; 004465d2
    MOV dword ptr [EAX + 0x8],0x0       ; 004465d8
    MOV EDX,dword ptr [EAX + 0x8]       ; 004465df
    MOV dword ptr [EAX + 0x4],EDX       ; 004465e2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004465e5
    MOV dword ptr [EAX],EDX             ; 004465e8
    FLD float ptr [EBX + 0xc1e4]        ; 004465ea
        ;   Label: caseD_7
    FLDZ                                ; 004465f0
    FCOMPP                              ; 004465f2
    FNSTSW AX                           ; 004465f4
    SAHF                                ; 004465f6
    JNC 0x0044660b                      ; 004465f7
        ;   XREF to: 0044660b (CONDITIONAL_JUMP)  ; LAB_0044660b
    FLD float ptr [EBX + 0xc1e4]        ; 004465f9
    FSUB float ptr [EBP + 0x92]         ; 004465ff
    FSTP float ptr [EBX + 0xc1e4]       ; 00446605
    PUSH EBX                            ; 0044660b
        ;   Label: LAB_0044660b
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 0044660c
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00446611
    TEST EAX,EAX                        ; 00446614
    JZ 0x00446727                       ; 00446616
        ;   XREF to: 00446727 (CONDITIONAL_JUMP)  ; LAB_00446727
    CMP dword ptr [EBP + 0x56],0xc      ; 0044661c
    JZ 0x00446727                       ; 00446620
        ;   XREF to: 00446727 (CONDITIONAL_JUMP)  ; LAB_00446727
    PUSH dword ptr [EBP + 0x92]         ; 00446626
    PUSH EBX                            ; 0044662c
    CALL core_charactr.cpp_FUN_0042d700 ; 0044662d
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA ECX,[EBX + 0x2518]              ; 00446632
    FLD float ptr [ECX]                 ; 00446638
    FMUL float ptr [EBP + 0x92]         ; 0044663a
    FLD float ptr [ECX + 0x4]           ; 00446640
    FMUL float ptr [EBP + 0x92]         ; 00446643
    FLD float ptr [ECX + 0x8]           ; 00446649
    FMUL float ptr [EBP + 0x92]         ; 0044664c
    LEA EDI,[EBP + 0xfffffede]          ; 00446652
    LEA ESI,[EBP + -0x2]                ; 00446658
    FXCH ST2                            ; 0044665b
    FSTP float ptr [EBP + -0x2]         ; 0044665d
    FSTP float ptr [EBP + 0x2]          ; 00446660
    FSTP float ptr [EBP + 0x6]          ; 00446663
    MOVSD ES:EDI,ESI                    ; 00446666
    MOVSD ES:EDI,ESI                    ; 00446667
    MOVSD ES:EDI,ESI                    ; 00446668
    LEA EAX,[EBX + 0x250c]              ; 00446669
    FLD float ptr [EBP + 0xfffffede]    ; 0044666f
    FLD float ptr [EBP + 0xfffffee2]    ; 00446675
    FLD float ptr [EBP + 0xfffffee6]    ; 0044667b
    LEA EDI,[EBP + 0xffffff62]          ; 00446681
    LEA ESI,[EBP + 0x22]                ; 00446687
    FXCH ST2                            ; 0044668a
    FADD float ptr [EAX]                ; 0044668c
    FXCH                                ; 0044668e
    FADD float ptr [EAX + 0x4]          ; 00446690
    FXCH ST2                            ; 00446693
    FADD float ptr [EAX + 0x8]          ; 00446695
    FXCH                                ; 00446698
    FSTP float ptr [EBP + 0x22]         ; 0044669a
    FXCH                                ; 0044669d
    FSTP float ptr [EBP + 0x26]         ; 0044669f
    FSTP float ptr [EBP + 0x2a]         ; 004466a2
    MOVSD ES:EDI,ESI                    ; 004466a5
    MOVSD ES:EDI,ESI                    ; 004466a6
    MOVSD ES:EDI,ESI                    ; 004466a7
    LEA EDX,[EBX + 0x249c]              ; 004466a8
    FLD float ptr [EBP + 0xffffff62]    ; 004466ae
    FLD float ptr [EBP + 0xffffff66]    ; 004466b4
    FLD float ptr [EBP + 0xffffff6a]    ; 004466ba
    LEA EDI,[EBP + 0xfffffec6]          ; 004466c0
    LEA ESI,[EBP + 0xfffffeae]          ; 004466c6
    FXCH ST2                            ; 004466cc
    FADD float ptr [EDX]                ; 004466ce
    FXCH                                ; 004466d0
    FADD float ptr [EDX + 0x4]          ; 004466d2
    FXCH ST2                            ; 004466d5
    FADD float ptr [EDX + 0x8]          ; 004466d7
    FXCH                                ; 004466da
    FSTP float ptr [EBP + 0xfffffeae]   ; 004466dc
    FXCH                                ; 004466e2
    FSTP float ptr [EBP + 0xfffffeb2]   ; 004466e4
    FSTP float ptr [EBP + 0xfffffeb6]   ; 004466ea
    MOVSD ES:EDI,ESI                    ; 004466f0
    MOVSD ES:EDI,ESI                    ; 004466f1
    MOVSD ES:EDI,ESI                    ; 004466f2
    MOV dword ptr [EAX + 0x8],0x0       ; 004466f3
    ADD ESP,0x8                         ; 004466fa
    MOV ECX,dword ptr [EAX + 0x8]       ; 004466fd
    MOV dword ptr [EAX + 0x4],ECX       ; 00446700
    MOV ECX,dword ptr [EAX + 0x4]       ; 00446703
    MOV dword ptr [EAX],ECX             ; 00446706
    MOV dword ptr [EDX + 0x8],0x0       ; 00446708
    LEA EAX,[EBP + 0xfffffec6]          ; 0044670f
    FLD float ptr [EDX + 0x8]           ; 00446715
    PUSH EAX                            ; 00446718
    FST float ptr [EDX + 0x4]           ; 00446719
    PUSH EBX                            ; 0044671c
    FSTP float ptr [EDX]                ; 0044671d
    CALL core_charactr.cpp_FUN_0042d750 ; 0044671f
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00446724
    PUSH EBX                            ; 00446727
        ;   Label: LAB_00446727
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00446728
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0044672d
    LEA EAX,[EBX + 0x158]               ; 00446730
    PUSH EAX                            ; 00446736
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00446737
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044673c
    PUSH dword ptr [EBP + 0x92]         ; 0044673f
    PUSH EBX                            ; 00446745
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 00446746
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBP + 0x56]      ; 0044674b
    ADD ESP,0x8                         ; 0044674e
    CMP ECX,0x3                         ; 00446751
    JNZ 0x00446dfc                      ; 00446754
        ;   XREF to: 00446dfc (CONDITIONAL_JUMP)  ; LAB_00446dfc
    PUSH 0x42c80000                     ; 0044675a
        ;   Label: LAB_0044675a
    SUB ESP,0x8                         ; 0044675f
    FLD float ptr [EBX + 0x28]          ; 00446762
    FSTP double ptr [ESP]               ; 00446765
    SUB ESP,0x8                         ; 00446768
    FLD float ptr [EBX + 0x24]          ; 0044676b
    FSTP double ptr [ESP]               ; 0044676e
    SUB ESP,0x8                         ; 00446771
    FLD float ptr [EBX + 0x20]          ; 00446774
    FSTP double ptr [ESP]               ; 00446777
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00574010 ; 0044677a
        ;   XREF to: 00574010 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_00574010(double pos_x, double pos_y, double pos_z, float radius)
    ADD ESP,0x1c                        ; 0044677f
    TEST EAX,EAX                        ; 00446782
    JZ 0x00446e05                       ; 00446784
        ;   XREF to: 00446e05 (CONDITIONAL_JUMP)  ; LAB_00446e05
    MOV EAX,dword ptr [EBX + 0xc304]    ; 0044678a
    PUSH EAX                            ; 00446790
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446791
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446796
    TEST EAX,EAX                        ; 00446799
    JNZ 0x0044617a                      ; 0044679b
        ;   XREF to: 0044617a (CONDITIONAL_JUMP)  ; LAB_0044617a
    PUSH 0x3e99999a                     ; 004467a1
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004467a6
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004467ab
    TEST EAX,EAX                        ; 004467ae
    JZ 0x0044617a                       ; 004467b0
        ;   XREF to: 0044617a (CONDITIONAL_JUMP)  ; LAB_0044617a
    PUSH 0x5d6f5b                       ; 004467b6 | = "stick-walk_growl1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004467bb
    PUSH EBX                            ; 004467c1
    CALL dword ptr [EAX + 0x2c]         ; 004467c2
    ADD ESP,0x8                         ; 004467c5
    MOV dword ptr [EBX + 0xc304],EAX    ; 004467c8
    LEA ESP,[EBP + 0x7a]                ; 004467ce
    POP EBP                             ; 004467d1
    POP EDI                             ; 004467d2
    POP ESI                             ; 004467d3
    POP EBX                             ; 004467d4
    RET                                 ; 004467d5
    PUSH 0x1                            ; 004467d6
        ;   Label: LAB_004467d6
    PUSH 0x0                            ; 004467d8
    PUSH EDI                            ; 004467da
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004467db
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004467e0
    PUSH EBX                            ; 004467e3
    PUSH 0x5d6ece                       ; 004467e4 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x00611100]                ; 004467e9 | g_CConsolePtr
    PUSH EAX                            ; 004467ee | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004467ef
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x004465cf                      ; 004467f4
        ;   XREF to: 004465cf (UNCONDITIONAL_JUMP)  ; LAB_004465cf
    JBE 0x004465bf                      ; 004467f9
        ;   XREF to: 004465bf (CONDITIONAL_JUMP)  ; LAB_004465bf
        ;   Label: LAB_004467f9
    CMP EAX,0x3                         ; 004467ff
    JZ 0x004467d6                       ; 00446802
        ;   XREF to: 004467d6 (CONDITIONAL_JUMP)  ; LAB_004467d6
    PUSH 0x1                            ; 00446804
        ;   Label: LAB_00446804
    PUSH 0x2                            ; 00446806
    PUSH 0x0                            ; 00446808
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0044680a
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0044680f
    PUSH EAX                            ; 00446812
    JMP 0x004465c3                      ; 00446813
        ;   XREF to: 004465c3 (UNCONDITIONAL_JUMP)  ; LAB_004465c3
    LEA EAX,[EBP + 0xfffffdaa]          ; 00446818
        ;   Label: caseD_5
    PUSH EAX                            ; 0044681e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0044681f
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00446824
    PUSH 0x41700000                     ; 00446827
    PUSH 0x40e00000                     ; 0044682c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00446831
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00446836
    FLD float ptr [EBP + 0x76]          ; 00446839
    FMUL float ptr [EBX + 0xca68]       ; 0044683c
    ADD ESP,0x8                         ; 00446842
    LEA EAX,[EBP + 0xfffffdaa]          ; 00446845
    MOV EDX,dword ptr [0x007dc5b8]      ; 0044684b | DAT_007dc5b8
    PUSH EAX                            ; 00446851
    LEA EAX,[EDX*0x4 + 0x0]             ; 00446852
    MOV dword ptr [EBP + 0xfffffdde],EBX ; 00446859
    SUB EAX,EDX                         ; 0044685f
    MOV dword ptr [EBP + 0xfffffde2],EBX ; 00446861
    SHL EAX,0x4                         ; 00446867
    LEA EDX,[EBX + 0xfd8]               ; 0044686a
    ADD EAX,EDX                         ; 00446870
    PUSH 0x3f800000                     ; 00446872
    PUSH EAX                            ; 00446877
    LEA ESI,[EBP + 0xfffffe06]          ; 00446878
    LEA EDI,[EBP + 0x16]                ; 0044687e
    PUSH 0x2c8af28                      ; 00446881 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffdae]   ; 00446886
    MOV dword ptr [EBP + 0x76],EDX      ; 0044688c
    CALL core_xform.cpp_FUN_005b5080    ; 0044688f
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00446894
    LEA EAX,[EBP + 0x16]                ; 00446897
    LEA ESI,[EBP + 0xfffffe06]          ; 0044689a
    PUSH EAX                            ; 004468a0
    MOVSD ES:EDI,ESI                    ; 004468a1
    MOVSD ES:EDI,ESI                    ; 004468a2
    MOVSD ES:EDI,ESI                    ; 004468a3
    PUSH EBX                            ; 004468a4
    LEA ESI,[EBP + 0xfffffe1e]          ; 004468a5
    CALL core_actor.cpp_FUN_00408b40    ; 004468ab
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004468b0
    LEA EAX,[EBP + -0x32]               ; 004468b3
    PUSH EAX                            ; 004468b6
    LEA EDI,[EBP + -0x32]               ; 004468b7
    LEA ESI,[EBP + 0xfffffe1e]          ; 004468ba
    PUSH EBX                            ; 004468c0
    MOVSD ES:EDI,ESI                    ; 004468c1
    MOVSD ES:EDI,ESI                    ; 004468c2
    MOVSD ES:EDI,ESI                    ; 004468c3
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 004468c4
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004468c9
    LEA EAX,[EBP + 0xfffffdaa]          ; 004468cc
    MOV EDX,dword ptr [0x007dc5c0]      ; 004468d2 | DAT_007dc5c0
    PUSH EAX                            ; 004468d8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004468d9
    SUB EAX,EDX                         ; 004468e0
    MOV ECX,dword ptr [EBP + 0x76]      ; 004468e2
    SHL EAX,0x4                         ; 004468e5
    ADD EAX,ECX                         ; 004468e8
    PUSH 0x3f800000                     ; 004468ea
    PUSH EAX                            ; 004468ef
    PUSH 0x2c8af28                      ; 004468f0 | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffe36]          ; 004468f5
    LEA EDI,[EBP + 0xffffff26]          ; 004468fb
    CALL core_xform.cpp_FUN_005b5080    ; 00446901
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00446906
    LEA EAX,[EBP + 0xffffff26]          ; 00446909
    LEA ESI,[EBP + 0xfffffe36]          ; 0044690f
    PUSH EAX                            ; 00446915
    MOVSD ES:EDI,ESI                    ; 00446916
    MOVSD ES:EDI,ESI                    ; 00446917
    MOVSD ES:EDI,ESI                    ; 00446918
    PUSH EBX                            ; 00446919
    LEA ESI,[EBP + 0xfffffe4e]          ; 0044691a
    CALL core_actor.cpp_FUN_00408b40    ; 00446920
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00446925
    LEA EAX,[EBP + -0x6e]               ; 00446928
    PUSH EAX                            ; 0044692b
    LEA EDI,[EBP + -0x6e]               ; 0044692c
    LEA ESI,[EBP + 0xfffffe4e]          ; 0044692f
    PUSH EBX                            ; 00446935
    MOVSD ES:EDI,ESI                    ; 00446936
    MOVSD ES:EDI,ESI                    ; 00446937
    MOVSD ES:EDI,ESI                    ; 00446938
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 00446939
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0044693e
    JMP 0x004465ea                      ; 00446941
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP dword ptr [EBX + 0xca64],0x0    ; 00446946
        ;   Label: caseD_b
    JNZ 0x004465ea                      ; 0044694d
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x5d6ef8                       ; 00446953 | = "stick-die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446958
    PUSH EBX                            ; 0044695e
    CALL dword ptr [EAX + 0x2c]         ; 0044695f
    MOV dword ptr [EBX + 0xca64],0x1    ; 00446962
    ADD ESP,0x8                         ; 0044696c
    MOV dword ptr [EBX + 0xc318],EAX    ; 0044696f
    JMP 0x004465ea                      ; 00446975
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0044697a
        ;   Label: caseD_0
    PUSH EBX                            ; 00446980
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00446981
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00446986
    LEA ESI,[EBX + 0x158]               ; 00446989
    TEST EAX,EAX                        ; 0044698f
    JZ 0x004469a5                       ; 00446991
        ;   XREF to: 004469a5 (CONDITIONAL_JUMP)  ; LAB_004469a5
    PUSH 0x1                            ; 00446993
    PUSH 0x3                            ; 00446995
    PUSH ESI                            ; 00446997
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00446998
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0044699d
    JMP 0x004465ea                      ; 004469a0
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 004469a5
        ;   Label: LAB_004469a5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004469ab
    PUSH EBX                            ; 004469b1
    CALL dword ptr [EAX + 0x144]        ; 004469b2
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004469b8
    ADD ESP,0x8                         ; 004469be
    TEST EDI,EDI                        ; 004469c1
    JZ 0x004465ea                       ; 004469c3
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 004469c9
    PUSH 0x3                            ; 004469cb
    PUSH ESI                            ; 004469cd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004469ce
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004469d3
    JMP 0x004465ea                      ; 004469d6
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 004469db
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004469e1
    PUSH EBX                            ; 004469e7
    CALL dword ptr [EAX + 0x144]        ; 004469e8
    ADD ESP,0x8                         ; 004469ee
    LEA EAX,[EBX + 0x158]               ; 004469f1
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004469f7
    MOV dword ptr [EBP + 0x42],EAX      ; 004469fd
    TEST ESI,ESI                        ; 00446a00
    JNZ 0x00446a2f                      ; 00446a02
        ;   XREF to: 00446a2f (CONDITIONAL_JUMP)  ; LAB_00446a2f
    PUSH dword ptr [EBP + 0x92]         ; 00446a04
    PUSH EBX                            ; 00446a0a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00446a0b
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00446a10
    TEST EAX,EAX                        ; 00446a13
    JNZ 0x004465ea                      ; 00446a15
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00446a1b
    PUSH ESI                            ; 00446a1d
    MOV ESI,dword ptr [EBP + 0x42]      ; 00446a1e
    PUSH ESI                            ; 00446a21
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00446a22
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00446a27
    JMP 0x004465ea                      ; 00446a2a
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3e32b8c2                     ; 00446a2f
        ;   Label: LAB_00446a2f
    FLD float ptr [0x005fddbc]          ; 00446a34 | DAT_005fddbc
    PUSH 0x3f000000                     ; 00446a3a
    MOV EAX,[0x005fddbc]                ; 00446a3f | DAT_005fddbc
    XOR EDI,EDI                         ; 00446a44
    MOV dword ptr [EBP + 0xfffffea2],EDI ; 00446a46
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 00446a4c
    LEA EAX,[EBP + 0xfffffea2]          ; 00446a52
    MOV dword ptr [EBP + 0xfffffea6],EDI ; 00446a58
    PUSH EAX                            ; 00446a5e
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00446a5f
    FADD double ptr [0x005d6f85]        ; 00446a65 | DAT_005d6f85
    PUSH EAX                            ; 00446a6b
    MOV EDX,dword ptr [EAX + 0x154]     ; 00446a6c
    FSTP float ptr [EBP + 0x72]         ; 00446a72
    CALL dword ptr [EDX + 0xc4]         ; 00446a75
    ADD ESP,0x4                         ; 00446a7b
    PUSH EAX                            ; 00446a7e
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00446a7f
    ADD EAX,0x20                        ; 00446a85
    PUSH EAX                            ; 00446a88
    PUSH EBX                            ; 00446a89
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00446a8a
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00446a8f
    TEST EAX,EAX                        ; 00446a92
    JL 0x00446c04                       ; 00446a94
        ;   XREF to: 00446c04 (CONDITIONAL_JUMP)  ; LAB_00446c04
    LEA EDI,[EBP + 0xfffffe7e]          ; 00446a9a
    LEA EDX,[EBX + 0x20]                ; 00446aa0
    LEA ESI,[EBP + 0xfffffe96]          ; 00446aa3
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 00446aa9
    FLD float ptr [EDX]                 ; 00446aaf
    FLD float ptr [EDX + 0x4]           ; 00446ab1
    FLD float ptr [EDX + 0x8]           ; 00446ab4
    FXCH ST2                            ; 00446ab7
    FSUB float ptr [ECX + 0x20]         ; 00446ab9
    FXCH                                ; 00446abc
    FSUB float ptr [ECX + 0x24]         ; 00446abe
    FXCH ST2                            ; 00446ac1
    FSUB float ptr [ECX + 0x28]         ; 00446ac3
    FXCH                                ; 00446ac6
    FSTP float ptr [EBP + 0xfffffe96]   ; 00446ac8
    FXCH                                ; 00446ace
    FSTP float ptr [EBP + 0xfffffe9a]   ; 00446ad0
    FSTP float ptr [EBP + 0xfffffe9e]   ; 00446ad6
    MOVSD ES:EDI,ESI                    ; 00446adc
    MOVSD ES:EDI,ESI                    ; 00446add
    MOVSD ES:EDI,ESI                    ; 00446ade
    FLD float ptr [EBP + 0xfffffe7e]    ; 00446adf
    FMUL ST0                            ; 00446ae5
    FLD float ptr [EBP + 0xfffffe86]    ; 00446ae7
    FMUL ST0                            ; 00446aed
    FADDP                               ; 00446aef
    FSQRT                               ; 00446af1
    ADD ECX,0x20                        ; 00446af3
    FLD float ptr [EBX + 0xc1e4]        ; 00446af6
    XOR ESI,ESI                         ; 00446afc
    FLDZ                                ; 00446afe
    MOV dword ptr [EBP + 0xfffffe82],ESI ; 00446b00
    FXCH ST2                            ; 00446b06
    FSTP float ptr [EBP + 0x3a]         ; 00446b08
    FXCH                                ; 00446b0b
    FCOMPP                              ; 00446b0d
    FNSTSW AX                           ; 00446b0f
    SAHF                                ; 00446b11
    JC 0x004465ea                       ; 00446b12
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBP + 0x3a]          ; 00446b18
    FCOMP float ptr [EBP + 0x72]        ; 00446b1b
    FNSTSW AX                           ; 00446b1e
    SAHF                                ; 00446b20
    JA 0x004465ea                       ; 00446b21
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [ECX]                 ; 00446b27
    FLD float ptr [ECX + 0x4]           ; 00446b29
    FLD float ptr [ECX + 0x8]           ; 00446b2c
    LEA EDI,[EBP + -0x7a]               ; 00446b2f
    LEA ESI,[EBP + 0xfffffeba]          ; 00446b32
    LEA EAX,[EBP + -0x7a]               ; 00446b38
    FXCH ST2                            ; 00446b3b
    FSUB float ptr [EDX]                ; 00446b3d
    FXCH                                ; 00446b3f
    FSUB float ptr [EDX + 0x4]          ; 00446b41
    FXCH ST2                            ; 00446b44
    FSUB float ptr [EDX + 0x8]          ; 00446b46
    FXCH                                ; 00446b49
    FSTP float ptr [EBP + 0xfffffeba]   ; 00446b4b
    FXCH                                ; 00446b51
    FSTP float ptr [EBP + 0xfffffebe]   ; 00446b53
    FSTP float ptr [EBP + 0xfffffec2]   ; 00446b59
    MOVSD ES:EDI,ESI                    ; 00446b5f
    MOVSD ES:EDI,ESI                    ; 00446b60
    MOVSD ES:EDI,ESI                    ; 00446b61
    PUSH EAX                            ; 00446b62
    LEA ESI,[EBP + -0x4a]               ; 00446b63
    LEA EDI,[EBP + 0xfffffe2a]          ; 00446b66
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00446b6c
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + -0x4a]               ; 00446b71
    MOVSD ES:EDI,ESI                    ; 00446b74
    MOVSD ES:EDI,ESI                    ; 00446b75
    MOVSD ES:EDI,ESI                    ; 00446b76
    ADD ESP,0x4                         ; 00446b77
    FLD float ptr [EBP + 0xfffffe2e]    ; 00446b7a
    FSUB float ptr [EBX + 0x34]         ; 00446b80
    SUB ESP,0x4                         ; 00446b83
    FSTP float ptr [ESP]                ; 00446b86
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00446b89
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00446b8e
    FLD float ptr [EBP + 0x76]          ; 00446b91
    FABS                                ; 00446b94
    ADD ESP,0x4                         ; 00446b96
    FCOMP double ptr [0x005d6f8d]       ; 00446b99 | DAT_005d6f8d
    FNSTSW AX                           ; 00446b9f
    SAHF                                ; 00446ba1
    JNC 0x004465ea                      ; 00446ba2
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00446ba8
    PUSH 0x1                            ; 00446baa
    PUSH 0x0                            ; 00446bac
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00446bae
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00446bb3
    ADD EAX,0x5                         ; 00446bb6
    PUSH EAX                            ; 00446bb9
    MOV EDI,dword ptr [EBP + 0x42]      ; 00446bba
    PUSH EDI                            ; 00446bbd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00446bbe
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00446bc3
    MOV EAX,dword ptr [EBX + 0xc31c]    ; 00446bc6
    PUSH EAX                            ; 00446bcc
    MOV dword ptr [EBX + 0xc1e4],0x40200000 ; 00446bcd
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446bd7
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446bdc
    TEST EAX,EAX                        ; 00446bdf
    JNZ 0x004465ea                      ; 00446be1
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x5d6f27                       ; 00446be7 | = "stick-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446bec
    PUSH EBX                            ; 00446bf2
    CALL dword ptr [EAX + 0x2c]         ; 00446bf3
    ADD ESP,0x8                         ; 00446bf6
    MOV dword ptr [EBX + 0xc31c],EAX    ; 00446bf9
    JMP 0x004465ea                      ; 00446bff
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH EBX                            ; 00446c04
        ;   Label: LAB_00446c04
    PUSH 0x5d6f06                       ; 00446c05 | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x00611100]      ; 00446c0a | g_CConsolePtr
    PUSH EDX                            ; 00446c10 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00446c11
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00446c16
    PUSH 0x1                            ; 00446c19
    PUSH EDI                            ; 00446c1b
    MOV ECX,dword ptr [EBP + 0x42]      ; 00446c1c
    PUSH ECX                            ; 00446c1f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00446c20
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00446c25
    JMP 0x004465ea                      ; 00446c28
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EDI,[EBP + -0x62]               ; 00446c2d
        ;   Label: caseD_c
    LEA EDX,[EBX + 0x20]                ; 00446c30
    LEA ESI,[EBP + 0xffffff32]          ; 00446c33
    MOV EAX,[0x01d06ab4]                ; 00446c39 | DAT_01d06ab4
    FLD float ptr [EDX]                 ; 00446c3e
    FLD float ptr [EDX + 0x4]           ; 00446c40
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00446c43
    FLD float ptr [EDX + 0x8]           ; 00446c4a
    FXCH ST2                            ; 00446c4d
    FSUB float ptr [EAX + 0x20]         ; 00446c4f
    FXCH                                ; 00446c52
    FSUB float ptr [EAX + 0x24]         ; 00446c54
    FXCH ST2                            ; 00446c57
    FSUB float ptr [EAX + 0x28]         ; 00446c59
    FXCH                                ; 00446c5c
    FSTP float ptr [EBP + 0xffffff32]   ; 00446c5e
    FXCH                                ; 00446c64
    FSTP float ptr [EBP + 0xffffff36]   ; 00446c66
    FSTP float ptr [EBP + 0xffffff3a]   ; 00446c6c
    MOVSD ES:EDI,ESI                    ; 00446c72
    MOVSD ES:EDI,ESI                    ; 00446c73
    MOVSD ES:EDI,ESI                    ; 00446c74
    FLD float ptr [EBP + -0x5e]         ; 00446c75
    FMUL ST0                            ; 00446c78
    FLD float ptr [EBP + -0x62]         ; 00446c7a
    FMUL ST0                            ; 00446c7d
    FADDP                               ; 00446c7f
    FLD float ptr [EBP + -0x5a]         ; 00446c81
    FMUL ST0                            ; 00446c84
    FADDP                               ; 00446c86
    FSQRT                               ; 00446c88
    FLD float ptr [EBX + 0xc1e0]        ; 00446c8a
    FMUL float ptr [0x005d6f7d]         ; 00446c90 | DAT_005d6f7d
    FXCH                                ; 00446c96
    FCOMPP                              ; 00446c98
    FNSTSW AX                           ; 00446c9a
    SAHF                                ; 00446c9c
    JNC 0x004465ea                      ; 00446c9d
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00446ca3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446ca9
    PUSH EBX                            ; 00446caf
    CALL dword ptr [EAX + 0x144]        ; 00446cb0
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 00446cb6
    ADD ESP,0x8                         ; 00446cbc
    TEST EDI,EDI                        ; 00446cbf
    JZ 0x00446d53                       ; 00446cc1
        ;   XREF to: 00446d53 (CONDITIONAL_JUMP)  ; LAB_00446d53
    PUSH 0x1                            ; 00446cc7
        ;   Label: LAB_00446cc7
    PUSH 0xe                            ; 00446cc9
    LEA EAX,[EBX + 0x158]               ; 00446ccb
    PUSH EAX                            ; 00446cd1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00446cd2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00446cd7
    MOV EDX,dword ptr [EBX + 0xc318]    ; 00446cda
    PUSH EDX                            ; 00446ce0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446ce1
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446ce6
    TEST EAX,EAX                        ; 00446ce9
    JNZ 0x004465ea                      ; 00446ceb
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    MOV ECX,dword ptr [EBX + 0xc31c]    ; 00446cf1
    PUSH ECX                            ; 00446cf7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446cf8
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446cfd
    TEST EAX,EAX                        ; 00446d00
    JNZ 0x004465ea                      ; 00446d02
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    MOV ESI,dword ptr [EBX + 0xc314]    ; 00446d08
    PUSH ESI                            ; 00446d0e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446d0f
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446d14
    TEST EAX,EAX                        ; 00446d17
    JNZ 0x004465ea                      ; 00446d19
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    MOV EDI,dword ptr [EBX + 0xc314]    ; 00446d1f
    PUSH EDI                            ; 00446d25
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446d26
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446d2b
    TEST EAX,EAX                        ; 00446d2e
    JNZ 0x004465ea                      ; 00446d30
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x5d6f39                       ; 00446d36 | = "stick-attack1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446d3b
    PUSH EBX                            ; 00446d41
    CALL dword ptr [EAX + 0x2c]         ; 00446d42
    ADD ESP,0x8                         ; 00446d45
    MOV dword ptr [EBX + 0xc314],EAX    ; 00446d48
    JMP 0x004465ea                      ; 00446d4e
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBX + 0xc268]              ; 00446d53
        ;   Label: LAB_00446d53
    PUSH EAX                            ; 00446d59
    MOV EAX,[0x0061b4d0]                ; 00446d5a | DAT_0061b4d0
    PUSH EAX                            ; 00446d5f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00446d60
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00446d65
    TEST EAX,EAX                        ; 00446d68
    JNZ 0x00446cc7                      ; 00446d6a
        ;   XREF to: 00446cc7 (CONDITIONAL_JUMP)  ; LAB_00446cc7
    JMP 0x004465ea                      ; 00446d70
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBX + 0x2504]        ; 00446d75
        ;   Label: caseD_e
    FADD double ptr [0x005d6f75]        ; 00446d7b | DAT_005d6f75
    FLD float ptr [EBX + 0x24]          ; 00446d81
    FCOMPP                              ; 00446d84
    FNSTSW AX                           ; 00446d86
    SAHF                                ; 00446d88
    JNC 0x004465ea                      ; 00446d89
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00446d8f
    PUSH 0xf                            ; 00446d91
    PUSH EDI                            ; 00446d93
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00446d94
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00446d99
    JMP 0x004465ea                      ; 00446d9c
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV ESI,dword ptr [EBX + 0xc320]    ; 00446da1
        ;   Label: caseD_f
    PUSH ESI                            ; 00446da7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00446da8
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00446dad
    TEST EAX,EAX                        ; 00446db0
    JNZ 0x00446dcc                      ; 00446db2
        ;   XREF to: 00446dcc (CONDITIONAL_JUMP)  ; LAB_00446dcc
    PUSH 0x5d6f4b                       ; 00446db4 | = "stick-leaps.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446db9
    PUSH EBX                            ; 00446dbf
    CALL dword ptr [EAX + 0x2c]         ; 00446dc0
    ADD ESP,0x8                         ; 00446dc3
    MOV dword ptr [EBX + 0xc320],EAX    ; 00446dc6
    PUSH dword ptr [EBP + 0x92]         ; 00446dcc
        ;   Label: LAB_00446dcc
    MOV EAX,dword ptr [EBX + 0x154]     ; 00446dd2
    PUSH EBX                            ; 00446dd8
    CALL dword ptr [EAX + 0x144]        ; 00446dd9
    ADD ESP,0x8                         ; 00446ddf
    JMP 0x004465ea                      ; 00446de2
        ;   XREF to: 004465ea (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV ECX,dword ptr [EBP + 0x56]      ; 00446de7
        ;   Label: LAB_00446de7
    CMP ECX,0xf                         ; 00446dea
    JA 0x004465ea                       ; 00446ded
        ;   XREF to: 004465ea (CONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,ECX                         ; 00446df3
    JMP dword ptr [EAX*0x4 + 0x445c64]  ; 00446df5 | caseD_2 | caseD_4 | caseD_6
        ;   Label: switchD
    CMP ECX,0x4                         ; 00446dfc
        ;   Label: LAB_00446dfc
    JZ 0x0044675a                       ; 00446dff
        ;   XREF to: 0044675a (CONDITIONAL_JUMP)  ; LAB_0044675a
    MOV EDI,dword ptr [EBX + 0xc304]    ; 00446e05
        ;   Label: LAB_00446e05
    PUSH EDI                            ; 00446e0b
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00446e0c
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00446e11
    LEA ESP,[EBP + 0x7a]                ; 00446e14
    POP EBP                             ; 00446e17
    POP EDI                             ; 00446e18
    POP ESI                             ; 00446e19
    POP EBX                             ; 00446e1a
    RET                                 ; 00446e1b

