; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_process_FUN_00412f40(CBatman *this_ptr,float delta_time)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00412ef8 = 004135b1
;   undefined1* switchdataD_00412f08 = 004137ef
;   TerminatedCString s_s_confused_while_walking_005cbacf
;   TerminatedCString s_batman_disappear_wav_005cbaf9
;   TerminatedCString s_batman_alert_wav_005cbb0e
;   TerminatedCString s_CHero_005cbb1f
;   TerminatedCString s_batman_disappear_wav_005cbb25
;   TerminatedCString s_batman_attack_wav_005cbb3a
;   undefined4 DAT_005cbb4e
;   undefined4 DAT_005cbb56
;   undefined4 DAT_005f308c
;   undefined4 DAT_005f3098
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412ec0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   ... and 19 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412f40
        ;   Label: core_batman.cpp_CBatman_process_FUN_00412f40
    PUSH ESI                            ; 00412f41
    PUSH EDI                            ; 00412f42
    PUSH EBP                            ; 00412f43
    MOV EBP,ESP                         ; 00412f44
    SUB ESP,0x26c                       ; 00412f46
    SUB EBP,0x7a                        ; 00412f4c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00412f4f
    PUSH dword ptr [EBP + 0x92]         ; 00412f55
    PUSH EBX                            ; 00412f5b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 00412f5c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412f61
    TEST EAX,EAX                        ; 00412f64
    JZ 0x004131ba                       ; 00412f66
        ;   XREF to: 004131ba (CONDITIONAL_JUMP)  ; LAB_004131ba
    LEA EAX,[EBX + 0x2508]              ; 00412f6c
    MOV dword ptr [EAX + 0x8],0x0       ; 00412f72
    FLD float ptr [EBP + 0x92]          ; 00412f79
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412f7f
    MOV dword ptr [EAX + 0x4],EDX       ; 00412f82
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412f85
    MOV dword ptr [EAX],EDX             ; 00412f88
    FMUL float ptr [EBX + 0x10a60]      ; 00412f8a
    LEA ESI,[EBX + 0x2b4]               ; 00412f90
    FSTP float ptr [EBP + 0x36]         ; 00412f96
    FLD float ptr [EBP + 0x36]          ; 00412f99
        ;   Label: LAB_00412f99
    FLDZ                                ; 00412f9c
    FCOMPP                              ; 00412f9e
    FNSTSW AX                           ; 00412fa0
    SAHF                                ; 00412fa2
    JC 0x004131c2                       ; 00412fa3
        ;   XREF to: 004131c2 (CONDITIONAL_JUMP)  ; LAB_004131c2
    FLD float ptr [EBP + 0x92]          ; 00412fa9
    FMUL float ptr [EBX + 0x10a60]      ; 00412faf
    SUB ESP,0x4                         ; 00412fb5
    MOV EAX,dword ptr [EBX + 0x2510]    ; 00412fb8
    MOV dword ptr [EBX + 0x2594],EAX    ; 00412fbe
    FSTP float ptr [ESP]                ; 00412fc4
    PUSH EBX                            ; 00412fc7
    CALL core_charactr.cpp_FUN_0042b2a0 ; 00412fc8
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 00412fcd
    LEA ESI,[EBX + 0x2b4]               ; 00412fd0
    PUSH ESI                            ; 00412fd6
    CALL core_motion.cpp_FUN_005035c0   ; 00412fd7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00412fdc
    PUSH dword ptr [EBP + 0x92]         ; 00412fdf
    MOV EDI,dword ptr [EAX + 0x24]      ; 00412fe5
    PUSH EBX                            ; 00412fe8
    MOV dword ptr [EBP + 0x6e],EDI      ; 00412fe9
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 00412fec
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412ff1
    TEST EAX,EAX                        ; 00412ff4
    JZ 0x00413c52                       ; 00412ff6
        ;   XREF to: 00413c52 (CONDITIONAL_JUMP)  ; LAB_00413c52
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00412ffc
    CMP EAX,0x2                         ; 00413002
    JNC 0x00413209                      ; 00413005
        ;   XREF to: 00413209 (CONDITIONAL_JUMP)  ; LAB_00413209
    CMP EAX,0x1                         ; 0041300b
    JNZ 0x00413214                      ; 0041300e
        ;   XREF to: 00413214 (CONDITIONAL_JUMP)  ; LAB_00413214
    PUSH 0x1                            ; 00413014
        ;   Label: LAB_00413014
    PUSH 0x1                            ; 00413016
    LEA EAX,[EBX + 0x2b4]               ; 00413018
        ;   Label: LAB_00413018
    PUSH EAX                            ; 0041301e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041301f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413024
        ;   Label: LAB_00413024
    LEA EAX,[EBX + 0x2508]              ; 00413027
    MOV dword ptr [EAX + 0x8],0x0       ; 0041302d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00413034
    MOV dword ptr [EAX + 0x4],EDX       ; 00413037
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041303a
    MOV dword ptr [EAX],EDX             ; 0041303d
    NOP                                 ; 0041303f
    FLD float ptr [EBX + 0x10a74]       ; 00413040
        ;   Label: default
    FLDZ                                ; 00413046
    FCOMPP                              ; 00413048
    FNSTSW AX                           ; 0041304a
    SAHF                                ; 0041304c
    JNC 0x00413061                      ; 0041304d
        ;   XREF to: 00413061 (CONDITIONAL_JUMP)  ; LAB_00413061
    FLD float ptr [EBX + 0x10a74]       ; 0041304f
    FSUB float ptr [EBP + 0x92]         ; 00413055
    FSTP float ptr [EBX + 0x10a74]      ; 0041305b
    PUSH EBX                            ; 00413061
        ;   Label: LAB_00413061
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 00413062
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00413067
    TEST EAX,EAX                        ; 0041306a
    JZ 0x00413183                       ; 0041306c
        ;   XREF to: 00413183 (CONDITIONAL_JUMP)  ; LAB_00413183
    CMP dword ptr [EBP + 0x6e],0x9      ; 00413072
    JZ 0x00413183                       ; 00413076
        ;   XREF to: 00413183 (CONDITIONAL_JUMP)  ; LAB_00413183
    PUSH dword ptr [EBP + 0x92]         ; 0041307c
    PUSH EBX                            ; 00413082
    CALL core_charactr.cpp_FUN_00423a10 ; 00413083
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA ECX,[EBX + 0x2588]              ; 00413088
    FLD float ptr [ECX]                 ; 0041308e
    FMUL float ptr [EBP + 0x92]         ; 00413090
    FLD float ptr [ECX + 0x4]           ; 00413096
    FMUL float ptr [EBP + 0x92]         ; 00413099
    FLD float ptr [ECX + 0x8]           ; 0041309f
    FMUL float ptr [EBP + 0x92]         ; 004130a2
    LEA EDI,[EBP + 0xfffffece]          ; 004130a8
    LEA ESI,[EBP + 0xfffffe56]          ; 004130ae
    FXCH ST2                            ; 004130b4
    FSTP float ptr [EBP + 0xfffffe56]   ; 004130b6
    FSTP float ptr [EBP + 0xfffffe5a]   ; 004130bc
    FSTP float ptr [EBP + 0xfffffe5e]   ; 004130c2
    MOVSD ES:EDI,ESI                    ; 004130c8
    MOVSD ES:EDI,ESI                    ; 004130c9
    MOVSD ES:EDI,ESI                    ; 004130ca
    LEA EAX,[EBX + 0x257c]              ; 004130cb
    FLD float ptr [EBP + 0xfffffece]    ; 004130d1
    FLD float ptr [EBP + 0xfffffed2]    ; 004130d7
    FLD float ptr [EBP + 0xfffffed6]    ; 004130dd
    LEA EDI,[EBP + 0xfffffec2]          ; 004130e3
    LEA ESI,[EBP + -0x5a]               ; 004130e9
    FXCH ST2                            ; 004130ec
    FADD float ptr [EAX]                ; 004130ee
    FXCH                                ; 004130f0
    FADD float ptr [EAX + 0x4]          ; 004130f2
    FXCH ST2                            ; 004130f5
    FADD float ptr [EAX + 0x8]          ; 004130f7
    FXCH                                ; 004130fa
    FSTP float ptr [EBP + -0x5a]        ; 004130fc
    FXCH                                ; 004130ff
    FSTP float ptr [EBP + -0x56]        ; 00413101
    FSTP float ptr [EBP + -0x52]        ; 00413104
    MOVSD ES:EDI,ESI                    ; 00413107
    MOVSD ES:EDI,ESI                    ; 00413108
    MOVSD ES:EDI,ESI                    ; 00413109
    LEA EDX,[EBX + 0x2508]              ; 0041310a
    FLD float ptr [EBP + 0xfffffec2]    ; 00413110
    FLD float ptr [EBP + 0xfffffec6]    ; 00413116
    FLD float ptr [EBP + 0xfffffeca]    ; 0041311c
    LEA EDI,[EBP + -0x4e]               ; 00413122
    LEA ESI,[EBP + 0xfffffee6]          ; 00413125
    FXCH ST2                            ; 0041312b
    FADD float ptr [EDX]                ; 0041312d
    FXCH                                ; 0041312f
    FADD float ptr [EDX + 0x4]          ; 00413131
    FXCH ST2                            ; 00413134
    FADD float ptr [EDX + 0x8]          ; 00413136
    FXCH                                ; 00413139
    FSTP float ptr [EBP + 0xfffffee6]   ; 0041313b
    FXCH                                ; 00413141
    FSTP float ptr [EBP + 0xfffffeea]   ; 00413143
    FSTP float ptr [EBP + 0xfffffeee]   ; 00413149
    MOVSD ES:EDI,ESI                    ; 0041314f
    MOVSD ES:EDI,ESI                    ; 00413150
    MOVSD ES:EDI,ESI                    ; 00413151
    MOV dword ptr [EAX + 0x8],0x0       ; 00413152
    ADD ESP,0x8                         ; 00413159
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041315c
    MOV dword ptr [EAX + 0x4],ECX       ; 0041315f
    MOV ECX,dword ptr [EAX + 0x4]       ; 00413162
    MOV dword ptr [EAX],ECX             ; 00413165
    MOV dword ptr [EDX + 0x8],0x0       ; 00413167
    LEA EAX,[EBP + -0x4e]               ; 0041316e
    FLD float ptr [EDX + 0x8]           ; 00413171
    PUSH EAX                            ; 00413174
    FST float ptr [EDX + 0x4]           ; 00413175
    PUSH EBX                            ; 00413178
    FSTP float ptr [EDX]                ; 00413179
    CALL core_charactr.cpp_FUN_00423a60 ; 0041317b
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00413180
    CMP dword ptr [EBP + 0x6e],0xd      ; 00413183
        ;   Label: LAB_00413183
    JZ 0x00413193                       ; 00413187
        ;   XREF to: 00413193 (CONDITIONAL_JUMP)  ; LAB_00413193
    MOV dword ptr [EBX + 0x10b94],0x0   ; 00413189
    PUSH EBX                            ; 00413193
        ;   Label: LAB_00413193
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 00413194
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00413199
    LEA EAX,[EBX + 0x2b4]               ; 0041319c
    PUSH EAX                            ; 004131a2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004131a3
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004131a8
    PUSH dword ptr [EBP + 0x92]         ; 004131ab
    PUSH EBX                            ; 004131b1
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 004131b2
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004131b7
    LEA ESP,[EBP + 0x7a]                ; 004131ba
        ;   Label: LAB_004131ba
    POP EBP                             ; 004131bd
    POP EDI                             ; 004131be
    POP ESI                             ; 004131bf
    POP EBX                             ; 004131c0
    RET                                 ; 004131c1
    LEA EAX,[EBP + 0x36]                ; 004131c2
        ;   Label: LAB_004131c2
    PUSH EAX                            ; 004131c5
    PUSH ESI                            ; 004131c6
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004131c7
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004131cc
    PUSH EAX                            ; 004131cf
    PUSH EBX                            ; 004131d0
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 004131d1
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004131d6
    JMP 0x00412f99                      ; 004131d9
        ;   XREF to: 00412f99 (UNCONDITIONAL_JUMP)  ; LAB_00412f99
    PUSH 0x1                            ; 004131de
        ;   Label: LAB_004131de
    PUSH 0x0                            ; 004131e0
    LEA EAX,[EBX + 0x2b4]               ; 004131e2
    PUSH EAX                            ; 004131e8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004131e9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004131ee
    PUSH EBX                            ; 004131f1
    MOV EAX,0x5cbacf                    ; 004131f2 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004131f7 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00609ed0]      ; 004131f8 | g_CConsolePtr
    PUSH ECX                            ; 004131fe | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004131ff
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x00413024                      ; 00413204
        ;   XREF to: 00413024 (UNCONDITIONAL_JUMP)  ; LAB_00413024
    JBE 0x00413014                      ; 00413209
        ;   XREF to: 00413014 (CONDITIONAL_JUMP)  ; LAB_00413014
        ;   Label: LAB_00413209
    CMP EAX,0x3                         ; 0041320f
    JZ 0x004131de                       ; 00413212
        ;   XREF to: 004131de (CONDITIONAL_JUMP)  ; LAB_004131de
    PUSH 0x1                            ; 00413214
        ;   Label: LAB_00413214
    PUSH 0x0                            ; 00413216
    JMP 0x00413018                      ; 00413218
        ;   XREF to: 00413018 (UNCONDITIONAL_JUMP)  ; LAB_00413018
    FLD float ptr [EBX + 0x10b98]       ; 0041321d
        ;   Label: caseD_1
    FADD float ptr [EBP + 0x92]         ; 00413223
    FST float ptr [EBX + 0x10b98]       ; 00413229
    FCOMP float ptr [0x005f3098]        ; 0041322f | DAT_005f3098
    FNSTSW AX                           ; 00413235
    SAHF                                ; 00413237
    JBE 0x0041324f                      ; 00413238
        ;   XREF to: 0041324f (CONDITIONAL_JUMP)  ; LAB_0041324f
    MOV dword ptr [EBX + 0x10b94],0x2   ; 0041323a
    MOV EAX,[0x005f3098]                ; 00413244 | DAT_005f3098
    MOV dword ptr [EBX + 0x10b98],EAX   ; 00413249
    MOV ECX,0x40400000                  ; 0041324f
        ;   Label: LAB_0041324f
    LEA ESI,[EBX + 0x2b4]               ; 00413254
    XOR EDX,EDX                         ; 0041325a
    XOR EDI,EDI                         ; 0041325c
    MOV dword ptr [EBP + -0x7e],EDX     ; 0041325e
    PUSH ESI                            ; 00413261
    MOV dword ptr [EBP + -0x7a],ECX     ; 00413262
    MOV dword ptr [EBP + -0x76],EDX     ; 00413265
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00413268
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x6a],EDI      ; 0041326d
    ADD ESP,0x4                         ; 00413270
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00413273
    MOV dword ptr [EBP + 0x56],EAX      ; 00413279
    TEST EDX,EDX                        ; 0041327c
    JLE 0x00413040                      ; 0041327e
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    MOV dword ptr [EBP + 0x4e],ESI      ; 00413284
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00413287
        ;   Label: LAB_00413287
    PUSH EAX                            ; 0041328a
    MOV EDX,dword ptr [EBP + 0x4e]      ; 0041328b
    PUSH EDX                            ; 0041328e
    LEA ESI,[EBP + -0x36]               ; 0041328f
    LEA EDI,[EBP + -0x42]               ; 00413292
    CALL core_skeleton.cpp_FUN_00546a90 ; 00413295
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 0041329a
    LEA EAX,[EBP + -0x42]               ; 0041329d
    LEA ESI,[EBP + -0x36]               ; 004132a0
    PUSH EAX                            ; 004132a3
    MOVSD ES:EDI,ESI                    ; 004132a4
    MOVSD ES:EDI,ESI                    ; 004132a5
    MOVSD ES:EDI,ESI                    ; 004132a6
    PUSH EBX                            ; 004132a7
    LEA ESI,[EBP + -0x2a]               ; 004132a8
    CALL core_actor.cpp_FUN_00408d70    ; 004132ab
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004132b0
    PUSH 0xffff                         ; 004132b3
    LEA EAX,[EBP + -0x7e]               ; 004132b8
    PUSH EAX                            ; 004132bb
    LEA EDI,[EBP + 0xfffffe92]          ; 004132bc
    LEA ESI,[EBP + -0x2a]               ; 004132c2
    PUSH 0x3f000000                     ; 004132c5
    LEA EAX,[EBP + 0xfffffe92]          ; 004132ca
    MOVSD ES:EDI,ESI                    ; 004132d0
    MOVSD ES:EDI,ESI                    ; 004132d1
    MOVSD ES:EDI,ESI                    ; 004132d2
    PUSH EAX                            ; 004132d3
    MOV ECX,dword ptr [0x00614d30]      ; 004132d4 | DAT_00614d30
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004132da
    PUSH ECX                            ; 004132dd
    INC ESI                             ; 004132de
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 004132df
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EDX,dword ptr [EBP + 0x56]      ; 004132e4
    MOV dword ptr [EBP + 0x6a],ESI      ; 004132e7
    MOV EDI,dword ptr [EDX + 0x1d1f8]   ; 004132ea
    ADD ESP,0x14                        ; 004132f0
    CMP ESI,EDI                         ; 004132f3
    JL 0x00413287                       ; 004132f5
        ;   XREF to: 00413287 (CONDITIONAL_JUMP)  ; LAB_00413287
    JMP 0x00413040                      ; 004132f7
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ESI,0x1                         ; 004132fc
        ;   Label: caseD_2
    LEA EAX,[EBX + 0x10b9c]             ; 00413301
    XOR EDI,EDI                         ; 00413307
    MOV dword ptr [EBP + 0x3e],ESI      ; 00413309
    MOV dword ptr [EBP + 0x5a],EDI      ; 0041330c
    MOV dword ptr [EBP + 0x62],EAX      ; 0041330f
    MOV dword ptr [EBP + 0x5e],EDI      ; 00413312
    MOV EAX,[0x0061b5a8]                ; 00413315 | g_CDemonSetPtr
        ;   Label: LAB_00413315
    MOV EDX,dword ptr [EBP + 0x5a]      ; 0041331a
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 0041331d | g_CDemonSetInstance.character_count
    JGE 0x004133c1                      ; 00413323
        ;   XREF to: 004133c1 (CONDITIONAL_JUMP)  ; LAB_004133c1
    ADD EAX,dword ptr [EBP + 0x5e]      ; 00413329
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 0041332c
    TEST ESI,ESI                        ; 00413332
    JNZ 0x00413348                      ; 00413334
        ;   XREF to: 00413348 (CONDITIONAL_JUMP)  ; LAB_00413348
    MOV EDI,dword ptr [EBP + 0x5a]      ; 00413336
        ;   Label: LAB_00413336
    MOV ESI,dword ptr [EBP + 0x5e]      ; 00413339
    INC EDI                             ; 0041333c
    ADD ESI,0x4                         ; 0041333d
    MOV dword ptr [EBP + 0x5a],EDI      ; 00413340
    MOV dword ptr [EBP + 0x5e],ESI      ; 00413343
    JMP 0x00413315                      ; 00413346
        ;   XREF to: 00413315 (UNCONDITIONAL_JUMP)  ; LAB_00413315
    CMP ESI,EBX                         ; 00413348
        ;   Label: LAB_00413348
    JZ 0x00413336                       ; 0041334a
        ;   XREF to: 00413336 (CONDITIONAL_JUMP)  ; LAB_00413336
    PUSH ESI                            ; 0041334c
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0041334d
    CALL dword ptr [EAX + 0x114]        ; 00413353
    ADD ESP,0x4                         ; 00413359
    TEST EAX,EAX                        ; 0041335c
    JG 0x00413336                       ; 0041335e
        ;   XREF to: 00413336 (CONDITIONAL_JUMP)  ; LAB_00413336
    FLD float ptr [ESI + 0x24]          ; 00413360
    FLD float ptr [ESI + 0x28]          ; 00413363
    FLD float ptr [ESI + 0x20]          ; 00413366
    MOV EAX,dword ptr [EBP + 0x62]      ; 00413369
    LEA EDI,[EBP + 0xfffffef2]          ; 0041336c
    LEA ESI,[EBP + -0x6]                ; 00413372
    FSUB float ptr [EAX]                ; 00413375
    FXCH ST2                            ; 00413377
    FSUB float ptr [EAX + 0x4]          ; 00413379
    FXCH                                ; 0041337c
    FSUB float ptr [EAX + 0x8]          ; 0041337e
    FXCH ST2                            ; 00413381
    FSTP float ptr [EBP + -0x6]         ; 00413383
    FSTP float ptr [EBP + -0x2]         ; 00413386
    FSTP float ptr [EBP + 0x2]          ; 00413389
    MOVSD ES:EDI,ESI                    ; 0041338c
    MOVSD ES:EDI,ESI                    ; 0041338d
    MOVSD ES:EDI,ESI                    ; 0041338e
    FLD float ptr [EBP + 0xfffffef6]    ; 0041338f
    FMUL ST0                            ; 00413395
    FLD float ptr [EBP + 0xfffffef2]    ; 00413397
    FMUL ST0                            ; 0041339d
    FADDP                               ; 0041339f
    FLD float ptr [EBP + 0xfffffefa]    ; 004133a1
    FMUL ST0                            ; 004133a7
    FADDP                               ; 004133a9
    FSQRT                               ; 004133ab
    FCOMP double ptr [0x005cbb56]       ; 004133ad | DAT_005cbb56
    FNSTSW AX                           ; 004133b3
    SAHF                                ; 004133b5
    JNC 0x00413336                      ; 004133b6
        ;   XREF to: 00413336 (CONDITIONAL_JUMP)  ; LAB_00413336
    JMP 0x00413040                      ; 004133bc
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    CMP dword ptr [EBP + 0x3e],0x0      ; 004133c1
        ;   Label: LAB_004133c1
    JZ 0x00413040                       ; 004133c5
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [0x005f3098]          ; 004133cb | DAT_005f3098
    MOV EDX,dword ptr [EBP + 0x62]      ; 004133d1
    MOV dword ptr [EBX + 0x10b94],0x3   ; 004133d4
    LEA EAX,[EBX + 0x20]                ; 004133de
    FSTP float ptr [EBX + 0x10b98]      ; 004133e1
    MOV ECX,dword ptr [EDX]             ; 004133e7
    MOV dword ptr [EAX],ECX             ; 004133e9
    MOV ECX,dword ptr [EDX + 0x4]       ; 004133eb
    MOV dword ptr [EAX + 0x4],ECX       ; 004133ee
    MOV ECX,dword ptr [EDX + 0x8]       ; 004133f1
    MOV dword ptr [EAX + 0x8],ECX       ; 004133f4
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004133f7
    TEST EDX,EDX                        ; 004133fd
    JZ 0x00413494                       ; 004133ff
        ;   XREF to: 00413494 (CONDITIONAL_JUMP)  ; LAB_00413494
    FLD float ptr [EDX + 0x20]          ; 00413405
    FLD float ptr [EDX + 0x24]          ; 00413408
    FLD float ptr [EDX + 0x28]          ; 0041340b
    LEA EDI,[EBP + 0x1e]                ; 0041340e
    LEA ESI,[EBP + 0xfffffe86]          ; 00413411
    FXCH ST2                            ; 00413417
    FSUB float ptr [EAX]                ; 00413419
    FXCH                                ; 0041341b
    FSUB float ptr [EAX + 0x4]          ; 0041341d
    FXCH ST2                            ; 00413420
    FSUB float ptr [EAX + 0x8]          ; 00413422
    FXCH                                ; 00413425
    FSTP float ptr [EBP + 0xfffffe86]   ; 00413427
    FXCH                                ; 0041342d
    FSTP float ptr [EBP + 0xfffffe8a]   ; 0041342f
    FSTP float ptr [EBP + 0xfffffe8e]   ; 00413435
    LEA EAX,[EBP + 0x1e]                ; 0041343b
    MOVSD ES:EDI,ESI                    ; 0041343e
    MOVSD ES:EDI,ESI                    ; 0041343f
    MOVSD ES:EDI,ESI                    ; 00413440
    PUSH EAX                            ; 00413441
    LEA ESI,[EBP + 0xfffffe9e]          ; 00413442
    LEA EDI,[EBP + 0xffffff76]          ; 00413448
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0041344e
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xfffffe9e]          ; 00413453
    LEA EAX,[EBP + 0xffffff76]          ; 00413459
    ADD ESP,0x4                         ; 0041345f
    LEA EDX,[EBX + 0x30]                ; 00413462
    MOVSD ES:EDI,ESI                    ; 00413465
    MOVSD ES:EDI,ESI                    ; 00413466
    MOVSD ES:EDI,ESI                    ; 00413467
    CMP EDX,EAX                         ; 00413468
    JZ 0x00413486                       ; 0041346a
        ;   XREF to: 00413486 (CONDITIONAL_JUMP)  ; LAB_00413486
    MOV EAX,dword ptr [EBP + 0xffffff76] ; 0041346c
    MOV dword ptr [EDX],EAX             ; 00413472
    MOV EAX,dword ptr [EBP + 0xffffff7a] ; 00413474
    MOV dword ptr [EDX + 0x4],EAX       ; 0041347a
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 0041347d
    MOV dword ptr [EDX + 0x8],EAX       ; 00413483
    MOV dword ptr [EBX + 0x38],0x0      ; 00413486
        ;   Label: LAB_00413486
    MOV dword ptr [EBX + 0x30],0x0      ; 0041348d
    PUSH 0x5cbaf9                       ; 00413494 | = "batman-disappear.wav"
        ;   Label: LAB_00413494
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00413499
    PUSH EBX                            ; 0041349f
    CALL dword ptr [EAX + 0x34]         ; 004134a0
    ADD ESP,0x8                         ; 004134a3
    JMP 0x00413040                      ; 004134a6
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ECX,0x40400000                  ; 004134ab
        ;   Label: caseD_3
    XOR EDX,EDX                         ; 004134b0
    PUSH ESI                            ; 004134b2
    MOV dword ptr [EBP + 0xfffffeb6],EDX ; 004134b3
    MOV dword ptr [EBP + 0xfffffeba],ECX ; 004134b9
    MOV dword ptr [EBP + 0xfffffebe],EDX ; 004134bf
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004134c5
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004134ca
    MOV dword ptr [EBP + 0x52],EAX      ; 004134cd
    XOR EDX,EDX                         ; 004134d0
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 004134d2
    MOV dword ptr [EBP + 0x66],EDX      ; 004134d8
    TEST ECX,ECX                        ; 004134db
    JLE 0x00413570                      ; 004134dd
        ;   XREF to: 00413570 (CONDITIONAL_JUMP)  ; LAB_00413570
    MOV dword ptr [EBP + 0x4a],ESI      ; 004134e3
    MOV ESI,dword ptr [EBP + 0x66]      ; 004134e6
        ;   Label: LAB_004134e6
    PUSH ESI                            ; 004134e9
    MOV EDI,dword ptr [EBP + 0x4a]      ; 004134ea
    PUSH EDI                            ; 004134ed
    LEA ESI,[EBP + 0xffffff0a]          ; 004134ee
    CALL core_skeleton.cpp_FUN_00546a90 ; 004134f4
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EDI,[EBP + 0xfffffefe]          ; 004134f9
    ADD ESP,0x8                         ; 004134ff
    LEA EAX,[EBP + 0xfffffefe]          ; 00413502
    LEA ESI,[EBP + 0xffffff0a]          ; 00413508
    PUSH EAX                            ; 0041350e
    MOVSD ES:EDI,ESI                    ; 0041350f
    MOVSD ES:EDI,ESI                    ; 00413510
    MOVSD ES:EDI,ESI                    ; 00413511
    PUSH EBX                            ; 00413512
    LEA ESI,[EBP + 0xffffff16]          ; 00413513
    CALL core_actor.cpp_FUN_00408d70    ; 00413519
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0041351e
    PUSH 0xffff                         ; 00413521
    LEA EAX,[EBP + 0xfffffeb6]          ; 00413526
    PUSH EAX                            ; 0041352c
    PUSH 0x3f000000                     ; 0041352d
    LEA EAX,[EBP + -0x12]               ; 00413532
    LEA EDI,[EBP + -0x12]               ; 00413535
    PUSH EAX                            ; 00413538
    MOV EAX,[0x00614d30]                ; 00413539 | DAT_00614d30
    LEA ESI,[EBP + 0xffffff16]          ; 0041353e
    PUSH EAX                            ; 00413544
    MOVSD ES:EDI,ESI                    ; 00413545
    MOVSD ES:EDI,ESI                    ; 00413546
    MOVSD ES:EDI,ESI                    ; 00413547
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 00413548
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EDX,dword ptr [EBP + 0x66]      ; 0041354d
    INC EDX                             ; 00413550
    MOV dword ptr [EBP + 0x66],EDX      ; 00413551
    MOV EAX,EDX                         ; 00413554
    MOV EDX,dword ptr [EBP + 0x52]      ; 00413556
    MOV ECX,dword ptr [EDX + 0x1d1f8]   ; 00413559
    ADD ESP,0x14                        ; 0041355f
    CMP EAX,ECX                         ; 00413562
    JL 0x004134e6                       ; 00413564
        ;   XREF to: 004134e6 (CONDITIONAL_JUMP)  ; LAB_004134e6
    LEA EAX,[EAX]                       ; 00413566
    LEA EDX,[EDX]                       ; 0041356c
    FLD float ptr [EBX + 0x10b98]       ; 00413570
        ;   Label: LAB_00413570
    FSUB float ptr [EBP + 0x92]         ; 00413576
    FST float ptr [EBX + 0x10b98]       ; 0041357c
    FLDZ                                ; 00413582
    FCOMPP                              ; 00413584
    FNSTSW AX                           ; 00413586
    SAHF                                ; 00413588
    JBE 0x00413040                      ; 00413589
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    MOV dword ptr [EBX + 0x10b98],0x0   ; 0041358f
    PUSH EBX                            ; 00413599
    MOV dword ptr [EBX + 0x10b94],0x0   ; 0041359a
    CALL core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412ec0 ; 004135a4
        ;   XREF to: 00412ec0 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412ec0(CBatman * this_ptr)
    ADD ESP,0x4                         ; 004135a9
    JMP 0x00413040                      ; 004135ac
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 004135b1
        ;   Label: caseD_0
    PUSH 0x0                            ; 004135b3
    PUSH ESI                            ; 004135b5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004135b6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004135bb
    JMP 0x00413040                      ; 004135be
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0x10b94]   ; 004135c3
        ;   Label: caseD_d
    CMP EAX,0x3                         ; 004135c9
    JA 0x00413040                       ; 004135cc
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EAX*0x4 + 0x412ef8]  ; 004135d2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0x10a64],0x0   ; 004135d9
        ;   Label: caseD_8
    JNZ 0x00413040                      ; 004135e0
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    CMP dword ptr [EBX + 0xdc],0x0      ; 004135e6
    JNZ 0x00413040                      ; 004135ed
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH EAX                            ; 004135f3
    PUSH ESI                            ; 004135f4
    LEA ESI,[EBP + 0xffffff52]          ; 004135f5
    LEA EDI,[EBP + 0xffffff46]          ; 004135fb
    CALL core_skeleton.cpp_FUN_005469a0 ; 00413601
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 00413606
    LEA EAX,[EBP + 0xffffff46]          ; 00413609
    LEA ESI,[EBP + 0xffffff52]          ; 0041360f
    PUSH EAX                            ; 00413615
    MOVSD ES:EDI,ESI                    ; 00413616
    MOVSD ES:EDI,ESI                    ; 00413617
    MOVSD ES:EDI,ESI                    ; 00413618
    PUSH EBX                            ; 00413619
    LEA ESI,[EBP + 0xffffff5e]          ; 0041361a
    CALL core_actor.cpp_FUN_00408d70    ; 00413620
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00413625
    PUSH 0x0                            ; 00413628
    LEA EAX,[EBP + 0xffffff3a]          ; 0041362a
    LEA EDI,[EBP + 0xffffff3a]          ; 00413630
    PUSH EAX                            ; 00413636
    MOV EAX,[0x006167e0]                ; 00413637 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff5e]          ; 0041363c
    PUSH EAX                            ; 00413642
    MOVSD ES:EDI,ESI                    ; 00413643
    MOVSD ES:EDI,ESI                    ; 00413644
    MOVSD ES:EDI,ESI                    ; 00413645
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 00413646
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0041364b
    MOV dword ptr [EBX + 0x10a64],0x1   ; 0041364e
    JMP 0x00413040                      ; 00413658
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 0041365d
        ;   Label: caseD_9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00413663
    PUSH EBX                            ; 00413669
    CALL dword ptr [EAX + 0x150]        ; 0041366a
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 00413670
    ADD ESP,0x8                         ; 00413676
    TEST ECX,ECX                        ; 00413679
    JZ 0x004136f2                       ; 0041367b
        ;   XREF to: 004136f2 (CONDITIONAL_JUMP)  ; LAB_004136f2
    PUSH 0x1                            ; 0041367d
        ;   Label: LAB_0041367d
    PUSH 0xb                            ; 0041367f
    LEA EAX,[EBX + 0x2b4]               ; 00413681
    PUSH EAX                            ; 00413687
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00413688
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041368d
    MOV EDI,dword ptr [EBX + 0x10bac]   ; 00413690
    PUSH EDI                            ; 00413696
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00413697
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041369c
    TEST EAX,EAX                        ; 0041369f
    JNZ 0x00413040                      ; 004136a1
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0x10bb0]   ; 004136a7
    PUSH EAX                            ; 004136ad
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004136ae
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004136b3
    TEST EAX,EAX                        ; 004136b6
    JNZ 0x00413040                      ; 004136b8
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,dword ptr [EBX + 0x10ba8]   ; 004136be
    PUSH EDX                            ; 004136c4
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004136c5
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004136ca
    TEST EAX,EAX                        ; 004136cd
    JNZ 0x00413040                      ; 004136cf
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x5cbb0e                       ; 004136d5 | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004136da
    PUSH EBX                            ; 004136e0
    CALL dword ptr [EAX + 0x34]         ; 004136e1
    ADD ESP,0x8                         ; 004136e4
    MOV dword ptr [EBX + 0x10ba8],EAX   ; 004136e7
    JMP 0x00413040                      ; 004136ed
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    LEA EAX,[EBX + 0x10af8]             ; 004136f2
        ;   Label: LAB_004136f2
    PUSH EAX                            ; 004136f8
    MOV ESI,dword ptr [0x006141f0]      ; 004136f9 | DAT_006141f0
    PUSH ESI                            ; 004136ff
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00413700
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00413705
    TEST EAX,EAX                        ; 00413708
    JNZ 0x0041367d                      ; 0041370a
        ;   XREF to: 0041367d (CONDITIONAL_JUMP)  ; LAB_0041367d
    JMP 0x00413040                      ; 00413710
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [EBX + 0x2574]        ; 00413715
        ;   Label: caseD_b
    FLD1                                ; 0041371b
    FADDP                               ; 0041371d
    FLD float ptr [EBX + 0x24]          ; 0041371f
    FCOMPP                              ; 00413722
    FNSTSW AX                           ; 00413724
    SAHF                                ; 00413726
    JNC 0x00413040                      ; 00413727
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 0041372d
    PUSH 0xc                            ; 0041372f
    PUSH ESI                            ; 00413731
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00413732
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413737
    JMP 0x00413040                      ; 0041373a
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    LEA EAX,[EBP + 0xfffffe0e]          ; 0041373f
        ;   Label: caseD_3
    PUSH EAX                            ; 00413745
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00413746
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0041374b
    PUSH 0x41700000                     ; 0041374e
    PUSH 0x40e00000                     ; 00413753
    LEA ESI,[EBP + 0xfffffe62]          ; 00413758
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041375e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00413763
    ADD ESP,0x8                         ; 00413766
    LEA EAX,[EBP + 0xfffffe0e]          ; 00413769
    MOV EDX,dword ptr [0x007bc7c0]      ; 0041376f | DAT_007bc7c0
    PUSH EAX                            ; 00413775
    LEA EAX,[EDX*0x4 + 0x0]             ; 00413776
    MOV dword ptr [EBP + 0xfffffe42],EBX ; 0041377d
    SUB EAX,EDX                         ; 00413783
    MOV dword ptr [EBP + 0xfffffe46],EBX ; 00413785
    SHL EAX,0x4                         ; 0041378b
    LEA EDX,[EBX + 0x1134]              ; 0041378e
    PUSH 0x3ecccccd                     ; 00413794
    ADD EAX,EDX                         ; 00413799
    LEA EDI,[EBP + 0x6]                 ; 0041379b
    PUSH EAX                            ; 0041379e
    FLD float ptr [EBP + 0x76]          ; 0041379f
    PUSH 0x265370c                      ; 004137a2 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffe12]   ; 004137a7
    CALL core_xform.cpp_FUN_00591530    ; 004137ad
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004137b2
    LEA EAX,[EBP + 0x6]                 ; 004137b5
    LEA ESI,[EBP + 0xfffffe62]          ; 004137b8
    PUSH EAX                            ; 004137be
    MOVSD ES:EDI,ESI                    ; 004137bf
    MOVSD ES:EDI,ESI                    ; 004137c0
    MOVSD ES:EDI,ESI                    ; 004137c1
    PUSH EBX                            ; 004137c2
    LEA ESI,[EBP + 0xfffffe4a]          ; 004137c3
    CALL core_actor.cpp_FUN_00408d70    ; 004137c9
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004137ce
    LEA EAX,[EBP + 0x12]                ; 004137d1
    PUSH EAX                            ; 004137d4
    LEA EDI,[EBP + 0x12]                ; 004137d5
    LEA ESI,[EBP + 0xfffffe4a]          ; 004137d8
    PUSH EBX                            ; 004137de
    MOVSD ES:EDI,ESI                    ; 004137df
    MOVSD ES:EDI,ESI                    ; 004137e0
    MOVSD ES:EDI,ESI                    ; 004137e1
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 004137e2
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004137e7
    JMP 0x00413040                      ; 004137ea
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 004137ef
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004137f5
    PUSH EBX                            ; 004137fb
    CALL dword ptr [EAX + 0x150]        ; 004137fc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00413802
    ADD ESP,0x8                         ; 00413808
    TEST EAX,EAX                        ; 0041380b
    JNZ 0x00413838                      ; 0041380d
        ;   XREF to: 00413838 (CONDITIONAL_JUMP)  ; LAB_00413838
    PUSH dword ptr [EBP + 0x92]         ; 0041380f
    PUSH EBX                            ; 00413815
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 00413816
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041381b
    TEST EAX,EAX                        ; 0041381e
    JZ 0x00413040                       ; 00413820
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413826
    PUSH 0x1                            ; 00413828
    PUSH ESI                            ; 0041382a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041382b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413830
    JMP 0x00413040                      ; 00413833
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x3e800000                     ; 00413838
        ;   Label: LAB_00413838
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0041383d
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00413842
    TEST EAX,EAX                        ; 00413845
    JNZ 0x00413924                      ; 00413847
        ;   XREF to: 00413924 (CONDITIONAL_JUMP)  ; LAB_00413924
    LEA EDI,[EBP + 0xfffffe6e]          ; 0041384d
        ;   Label: LAB_0041384d
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 00413853
    LEA ESI,[EBP + 0xfffffeda]          ; 00413859
    LEA EAX,[EBX + 0x20]                ; 0041385f
    FLD float ptr [EDX + 0x20]          ; 00413862
    FLD float ptr [EDX + 0x24]          ; 00413865
    FLD float ptr [EDX + 0x28]          ; 00413868
    FXCH ST2                            ; 0041386b
    FSUB float ptr [EAX]                ; 0041386d
    FXCH                                ; 0041386f
    FSUB float ptr [EAX + 0x4]          ; 00413871
    FXCH ST2                            ; 00413874
    FSUB float ptr [EAX + 0x8]          ; 00413876
    FXCH                                ; 00413879
    FSTP float ptr [EBP + 0xfffffeda]   ; 0041387b
    FXCH                                ; 00413881
    FSTP float ptr [EBP + 0xfffffede]   ; 00413883
    FSTP float ptr [EBP + 0xfffffee2]   ; 00413889
    MOVSD ES:EDI,ESI                    ; 0041388f
    MOVSD ES:EDI,ESI                    ; 00413890
    MOVSD ES:EDI,ESI                    ; 00413891
    FLD float ptr [EBP + 0xfffffe72]    ; 00413892
    FMUL ST0                            ; 00413898
    FLD float ptr [EBP + 0xfffffe6e]    ; 0041389a
    FMUL ST0                            ; 004138a0
    FADDP                               ; 004138a2
    FLD float ptr [EBP + 0xfffffe76]    ; 004138a4
    FMUL ST0                            ; 004138aa
    FADDP                               ; 004138ac
    FSQRT                               ; 004138ae
    FCOMP float ptr [0x005f308c]        ; 004138b0 | DAT_005f308c
    FNSTSW AX                           ; 004138b6
    SAHF                                ; 004138b8
    JNC 0x00413916                      ; 004138b9
        ;   XREF to: 00413916 (CONDITIONAL_JUMP)  ; LAB_00413916
    LEA EAX,[EBP + 0xfffffe6e]          ; 004138bb
    PUSH EAX                            ; 004138c1
    LEA ESI,[EBP + -0x72]               ; 004138c2
    LEA EDI,[EBP + 0xffffff6a]          ; 004138c5
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004138cb
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + -0x72]               ; 004138d0
    MOVSD ES:EDI,ESI                    ; 004138d3
    MOVSD ES:EDI,ESI                    ; 004138d4
    MOVSD ES:EDI,ESI                    ; 004138d5
    ADD ESP,0x4                         ; 004138d6
    FLD float ptr [EBP + 0xffffff6e]    ; 004138d9
    FSUB float ptr [EBX + 0x34]         ; 004138df
    SUB ESP,0x4                         ; 004138e2
    FSTP float ptr [ESP]                ; 004138e5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004138e8
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004138ed
    FLD float ptr [EBP + 0x76]          ; 004138f0
    FABS                                ; 004138f3
    ADD ESP,0x4                         ; 004138f5
    FCOMP double ptr [0x005cbb4e]       ; 004138f8 | DAT_005cbb4e
    FNSTSW AX                           ; 004138fe
    SAHF                                ; 00413900
    JNC 0x00413916                      ; 00413901
        ;   XREF to: 00413916 (CONDITIONAL_JUMP)  ; LAB_00413916
    PUSH 0x1                            ; 00413903
    PUSH 0x3                            ; 00413905
    LEA EAX,[EBX + 0x2b4]               ; 00413907
    PUSH EAX                            ; 0041390d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041390e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413913
    PUSH EBX                            ; 00413916
        ;   Label: LAB_00413916
    CALL core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412ec0 ; 00413917
        ;   XREF to: 00412ec0 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412ec0(CBatman * this_ptr)
    ADD ESP,0x4                         ; 0041391c
    JMP 0x00413040                      ; 0041391f
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x5cbb1f                       ; 00413924 | = "CHero"
        ;   Label: LAB_00413924
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 00413929
    PUSH EDX                            ; 0041392f
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00413930
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00413935
    TEST EAX,EAX                        ; 00413938
    JZ 0x0041384d                       ; 0041393a
        ;   XREF to: 0041384d (CONDITIONAL_JUMP)  ; LAB_0041384d
    XOR EDI,EDI                         ; 00413940
    XOR ESI,ESI                         ; 00413942
    MOV EAX,[0x0061b5a8]                ; 00413944 | g_CDemonSetPtr
        ;   Label: LAB_00413944
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 00413949 | g_CDemonSetInstance.enemy_count
    JGE 0x0041397b                      ; 0041394f
        ;   XREF to: 0041397b (CONDITIONAL_JUMP)  ; LAB_0041397b
    MOV ECX,dword ptr [0x007bc820]      ; 00413951 | g_CBatmanClassInfo.name_hash
    PUSH ECX                            ; 00413957
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 00413958
    PUSH EDX                            ; 0041395f
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00413960
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00413965
    TEST EAX,EAX                        ; 00413968
    JNZ 0x00413972                      ; 0041396a
        ;   XREF to: 00413972 (CONDITIONAL_JUMP)  ; LAB_00413972
    INC ESI                             ; 0041396c
        ;   Label: LAB_0041396c
    ADD EDI,0x4                         ; 0041396d
    JMP 0x00413944                      ; 00413970
        ;   XREF to: 00413944 (UNCONDITIONAL_JUMP)  ; LAB_00413944
    CMP dword ptr [EAX + 0x10b94],0x0   ; 00413972
        ;   Label: LAB_00413972
    JZ 0x0041396c                       ; 00413979
        ;   XREF to: 0041396c (CONDITIONAL_JUMP)  ; LAB_0041396c
    MOV EAX,[0x0061b5a8]                ; 0041397b | g_CDemonSetPtr
        ;   Label: LAB_0041397b
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 00413980 | g_CDemonSetInstance.enemy_count
    JNZ 0x0041384d                      ; 00413986
        ;   XREF to: 0041384d (CONDITIONAL_JUMP)  ; LAB_0041384d
    PUSH 0x1                            ; 0041398c
    PUSH 0xd                            ; 0041398e
    LEA EAX,[EBX + 0x2b4]               ; 00413990
    PUSH EAX                            ; 00413996
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00413997
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041399c
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041399f
    LEA EDX,[EBX + 0x10b9c]             ; 004139a5
    ADD EAX,0x20                        ; 004139ab
    MOV dword ptr [EBX + 0x10b94],0x1   ; 004139ae
    CMP EDX,EAX                         ; 004139b8
    JZ 0x004139cc                       ; 004139ba
        ;   XREF to: 004139cc (CONDITIONAL_JUMP)  ; LAB_004139cc
    MOV ECX,dword ptr [EAX]             ; 004139bc
    MOV dword ptr [EDX],ECX             ; 004139be
    MOV ECX,dword ptr [EAX + 0x4]       ; 004139c0
    MOV dword ptr [EDX + 0x4],ECX       ; 004139c3
    MOV ECX,dword ptr [EAX + 0x8]       ; 004139c6
    MOV dword ptr [EDX + 0x8],ECX       ; 004139c9
    MOV EAX,0xd                         ; 004139cc
        ;   Label: LAB_004139cc
    PUSH 0x5cbb25                       ; 004139d1 | = "batman-disappear.wav"
    MOV dword ptr [EBP + 0x6e],EAX      ; 004139d6
    PUSH EBX                            ; 004139d9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004139da
    MOV dword ptr [EBX + 0x10b98],0x0   ; 004139e0
    CALL dword ptr [EAX + 0x34]         ; 004139ea
    ADD ESP,0x8                         ; 004139ed
    JMP 0x00413040                      ; 004139f0
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 004139f5
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004139fb
    PUSH EBX                            ; 00413a01
    CALL dword ptr [EAX + 0x150]        ; 00413a02
    ADD ESP,0x8                         ; 00413a08
    LEA EAX,[EBX + 0x2b4]               ; 00413a0b
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 00413a11
    MOV dword ptr [EBP + 0x46],EAX      ; 00413a17
    TEST EDX,EDX                        ; 00413a1a
    JNZ 0x00413a5a                      ; 00413a1c
        ;   XREF to: 00413a5a (CONDITIONAL_JUMP)  ; LAB_00413a5a
    PUSH dword ptr [EBP + 0x92]         ; 00413a1e
    PUSH EBX                            ; 00413a24
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 00413a25
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00413a2a
    TEST EAX,EAX                        ; 00413a2d
    JZ 0x00413a46                       ; 00413a2f
        ;   XREF to: 00413a46 (CONDITIONAL_JUMP)  ; LAB_00413a46
    PUSH 0x1                            ; 00413a31
    PUSH 0x1                            ; 00413a33
    MOV EDI,dword ptr [EBP + 0x46]      ; 00413a35
    PUSH EDI                            ; 00413a38
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00413a39
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413a3e
    JMP 0x00413040                      ; 00413a41
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413a46
        ;   Label: LAB_00413a46
    PUSH EAX                            ; 00413a48
    MOV ESI,dword ptr [EBP + 0x46]      ; 00413a49
    PUSH ESI                            ; 00413a4c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00413a4d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413a52
    JMP 0x00413040                      ; 00413a55
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x005f308c]                ; 00413a5a | DAT_005f308c
        ;   Label: LAB_00413a5a
    PUSH 0x3e32b8c2                     ; 00413a5f
    MOV dword ptr [EBP + 0x42],EAX      ; 00413a64
    LEA EAX,[EBX + 0x2508]              ; 00413a67
    PUSH 0x3f000000                     ; 00413a6d
    MOV dword ptr [EAX + 0x8],0x0       ; 00413a72
    XOR ECX,ECX                         ; 00413a79
    MOV EDX,dword ptr [EAX + 0x8]       ; 00413a7b
    MOV dword ptr [EAX + 0x4],EDX       ; 00413a7e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00413a81
    MOV dword ptr [EAX],EDX             ; 00413a84
    MOV EAX,dword ptr [EBP + 0x42]      ; 00413a86
    MOV dword ptr [EBP + -0x1e],ECX     ; 00413a89
    MOV dword ptr [EBP + -0x16],EAX     ; 00413a8c
    LEA EAX,[EBP + -0x1e]               ; 00413a8f
    MOV dword ptr [EBP + -0x1a],ECX     ; 00413a92
    PUSH EAX                            ; 00413a95
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00413a96
    PUSH EAX                            ; 00413a9c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00413a9d
    CALL dword ptr [EDX + 0xcc]         ; 00413aa3
    ADD ESP,0x4                         ; 00413aa9
    PUSH EAX                            ; 00413aac
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00413aad
    ADD EAX,0x20                        ; 00413ab3
    PUSH EAX                            ; 00413ab6
    PUSH EBX                            ; 00413ab7
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 00413ab8
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00413abd
    TEST EAX,EAX                        ; 00413ac0
    JL 0x00413040                       ; 00413ac2
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    LEA EDI,[EBP + 0xffffff2e]          ; 00413ac8
    LEA ECX,[EBX + 0x20]                ; 00413ace
    LEA ESI,[EBP + -0x66]               ; 00413ad1
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 00413ad4
    FLD float ptr [ECX]                 ; 00413ada
    FLD float ptr [ECX + 0x4]           ; 00413adc
    FLD float ptr [ECX + 0x8]           ; 00413adf
    FXCH ST2                            ; 00413ae2
    FSUB float ptr [EDX + 0x20]         ; 00413ae4
    FXCH                                ; 00413ae7
    FSUB float ptr [EDX + 0x24]         ; 00413ae9
    FXCH ST2                            ; 00413aec
    FSUB float ptr [EDX + 0x28]         ; 00413aee
    FXCH                                ; 00413af1
    FSTP float ptr [EBP + -0x66]        ; 00413af3
    FXCH                                ; 00413af6
    FSTP float ptr [EBP + -0x62]        ; 00413af8
    FSTP float ptr [EBP + -0x5e]        ; 00413afb
    MOVSD ES:EDI,ESI                    ; 00413afe
    MOVSD ES:EDI,ESI                    ; 00413aff
    MOVSD ES:EDI,ESI                    ; 00413b00
    FLD float ptr [EBP + 0xffffff2e]    ; 00413b01
    FMUL ST0                            ; 00413b07
    FLD float ptr [EBP + 0xffffff36]    ; 00413b09
    FMUL ST0                            ; 00413b0f
    FADDP                               ; 00413b11
    FSQRT                               ; 00413b13
    XOR EDI,EDI                         ; 00413b15
    ADD EDX,0x20                        ; 00413b17
    MOV dword ptr [EBP + 0xffffff32],EDI ; 00413b1a
    FSTP float ptr [EBP + 0x72]         ; 00413b20
    MOV EAX,dword ptr [EBP + 0x72]      ; 00413b23
    FLD float ptr [EBP + 0x72]          ; 00413b26
    MOV dword ptr [EBP + 0x3a],EAX      ; 00413b29
    FCOMP float ptr [EBP + 0x42]        ; 00413b2c
    FNSTSW AX                           ; 00413b2f
    SAHF                                ; 00413b31
    JA 0x00413bfb                       ; 00413b32
        ;   XREF to: 00413bfb (CONDITIONAL_JUMP)  ; LAB_00413bfb
    FLD float ptr [EBX + 0x10a74]       ; 00413b38
    FLDZ                                ; 00413b3e
    FCOMPP                              ; 00413b40
    FNSTSW AX                           ; 00413b42
    SAHF                                ; 00413b44
    JC 0x00413bfb                       ; 00413b45
        ;   XREF to: 00413bfb (CONDITIONAL_JUMP)  ; LAB_00413bfb
    FLD float ptr [EDX]                 ; 00413b4b
    FLD float ptr [EDX + 0x4]           ; 00413b4d
    FLD float ptr [EDX + 0x8]           ; 00413b50
    LEA EDI,[EBP + 0xffffff22]          ; 00413b53
    LEA ESI,[EBP + 0xfffffe7a]          ; 00413b59
    LEA EAX,[EBP + 0xffffff22]          ; 00413b5f
    FXCH ST2                            ; 00413b65
    FSUB float ptr [ECX]                ; 00413b67
    FXCH                                ; 00413b69
    FSUB float ptr [ECX + 0x4]          ; 00413b6b
    FXCH ST2                            ; 00413b6e
    FSUB float ptr [ECX + 0x8]          ; 00413b70
    FXCH                                ; 00413b73
    FSTP float ptr [EBP + 0xfffffe7a]   ; 00413b75
    FXCH                                ; 00413b7b
    FSTP float ptr [EBP + 0xfffffe7e]   ; 00413b7d
    FSTP float ptr [EBP + 0xfffffe82]   ; 00413b83
    MOVSD ES:EDI,ESI                    ; 00413b89
    MOVSD ES:EDI,ESI                    ; 00413b8a
    MOVSD ES:EDI,ESI                    ; 00413b8b
    PUSH EAX                            ; 00413b8c
    LEA ESI,[EBP + 0x2a]                ; 00413b8d
    LEA EDI,[EBP + 0xfffffeaa]          ; 00413b90
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00413b96
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0x2a]                ; 00413b9b
    MOVSD ES:EDI,ESI                    ; 00413b9e
    MOVSD ES:EDI,ESI                    ; 00413b9f
    MOVSD ES:EDI,ESI                    ; 00413ba0
    ADD ESP,0x4                         ; 00413ba1
    FLD float ptr [EBP + 0xfffffeae]    ; 00413ba4
    FSUB float ptr [EBX + 0x34]         ; 00413baa
    SUB ESP,0x4                         ; 00413bad
    FSTP float ptr [ESP]                ; 00413bb0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00413bb3
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00413bb8
    FLD float ptr [EBP + 0x76]          ; 00413bbb
    FABS                                ; 00413bbe
    ADD ESP,0x4                         ; 00413bc0
    FCOMP double ptr [0x005cbb4e]       ; 00413bc3 | DAT_005cbb4e
    FNSTSW AX                           ; 00413bc9
    SAHF                                ; 00413bcb
    JNC 0x00413bfb                      ; 00413bcc
        ;   XREF to: 00413bfb (CONDITIONAL_JUMP)  ; LAB_00413bfb
    PUSH 0x1                            ; 00413bce
    PUSH 0x3                            ; 00413bd0
    MOV EAX,dword ptr [EBP + 0x46]      ; 00413bd2
    PUSH EAX                            ; 00413bd5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00413bd6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413bdb
    MOV EDX,dword ptr [EBX + 0x10bac]   ; 00413bde
    PUSH EDX                            ; 00413be4
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 00413be5
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00413bef
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00413bf4
    TEST EAX,EAX                        ; 00413bf7
    JZ 0x00413c25                       ; 00413bf9
        ;   XREF to: 00413c25 (CONDITIONAL_JUMP)  ; LAB_00413c25
    FLD float ptr [EBP + 0x3a]          ; 00413bfb
        ;   Label: LAB_00413bfb
    FCOMP float ptr [EBX + 0x10a70]     ; 00413bfe
    FNSTSW AX                           ; 00413c04
    SAHF                                ; 00413c06
    JBE 0x00413040                      ; 00413c07
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413c0d
    PUSH 0x0                            ; 00413c0f
    LEA EAX,[EBX + 0x2b4]               ; 00413c11
    PUSH EAX                            ; 00413c17
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00413c18
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413c1d
    JMP 0x00413040                      ; 00413c20
        ;   XREF to: 00413040 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ECX,dword ptr [EBX + 0x10bb0]   ; 00413c25
        ;   Label: LAB_00413c25
    PUSH ECX                            ; 00413c2b
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00413c2c
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00413c31
    TEST EAX,EAX                        ; 00413c34
    JNZ 0x00413bfb                      ; 00413c36
        ;   XREF to: 00413bfb (CONDITIONAL_JUMP)  ; LAB_00413bfb
    PUSH 0x5cbb3a                       ; 00413c38 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00413c3d
    PUSH EBX                            ; 00413c43
    CALL dword ptr [EAX + 0x34]         ; 00413c44
    ADD ESP,0x8                         ; 00413c47
    MOV dword ptr [EBX + 0x10bb0],EAX   ; 00413c4a
    JMP 0x00413bfb                      ; 00413c50
        ;   XREF to: 00413bfb (UNCONDITIONAL_JUMP)  ; LAB_00413bfb
    CMP EDI,0xd                         ; 00413c52
        ;   Label: LAB_00413c52
    JA 0x00413040                       ; 00413c55
        ;   XREF to: 00413040 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EDI*0x4 + 0x412f08]  ; 00413c5b | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD

