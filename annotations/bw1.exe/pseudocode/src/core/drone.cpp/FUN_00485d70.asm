; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drone_cpp_FUN_00485d70(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00485d40 = 0048625d
;   TerminatedCString s_s_confused_while_walking_005db631
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005db65b
;   TerminatedCString s_drone_attack_wav_005db67c
;   TerminatedCString s_slime_wav_005db68e
;   undefined4 DAT_005db69a
;   undefined4 DAT_005ff488
;   CConsole* g_CConsolePtr = 007db5f0
;   CGore* g_CGorePtr = 01cd0e3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc00
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e120
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00433e80
;   core_charactr.cpp_FUN_00435320
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_enemy.cpp_FUN_004a0770
;   core_enemy.cpp_FUN_004a0fe0
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485d70
        ;   Label: core_drone.cpp_FUN_00485d70
    PUSH ESI                            ; 00485d71
    PUSH EDI                            ; 00485d72
    PUSH EBP                            ; 00485d73
    MOV EBP,ESP                         ; 00485d74
    SUB ESP,0x134                       ; 00485d76
    SUB EBP,0x7a                        ; 00485d7c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00485d7f
    PUSH dword ptr [EBP + 0x92]         ; 00485d85
    PUSH EBX                            ; 00485d8b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00485d8c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00485d91
    TEST EAX,EAX                        ; 00485d94
    JZ 0x00486031                       ; 00485d96
        ;   XREF to: 00486031 (CONDITIONAL_JUMP)  ; LAB_00486031
    LEA EAX,[EBX + 0x249c]              ; 00485d9c
    MOV dword ptr [EAX + 0x8],0x0       ; 00485da2
    FLD float ptr [EBP + 0x92]          ; 00485da9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00485daf
    MOV dword ptr [EAX + 0x4],EDX       ; 00485db2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00485db5
    MOV dword ptr [EAX],EDX             ; 00485db8
    FMUL float ptr [EBX + 0xc1d0]       ; 00485dba
    LEA ESI,[EBX + 0x158]               ; 00485dc0
    FSTP float ptr [EBP + 0x66]         ; 00485dc6
    FLD float ptr [EBP + 0x66]          ; 00485dc9
        ;   Label: LAB_00485dc9
    FLDZ                                ; 00485dcc
    FCOMPP                              ; 00485dce
    FNSTSW AX                           ; 00485dd0
    SAHF                                ; 00485dd2
    JC 0x00486048                       ; 00485dd3
        ;   XREF to: 00486048 (CONDITIONAL_JUMP)  ; LAB_00486048
    FLD float ptr [EBX + 0x24a4]        ; 00485dd9
    FMUL double ptr [0x005db69a]        ; 00485ddf | DAT_005db69a
    FLD float ptr [EBP + 0x92]          ; 00485de5
    FMUL float ptr [EBX + 0xc1d0]       ; 00485deb
    SUB ESP,0x4                         ; 00485df1
    FXCH                                ; 00485df4
    FSTP float ptr [EBX + 0x2524]       ; 00485df6
    FSTP float ptr [ESP]                ; 00485dfc
    PUSH EBX                            ; 00485dff
    CALL core_charactr.cpp_FUN_00435320 ; 00485e00
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00485e05
    PUSH ESI                            ; 00485e08
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00485e09
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00485e0e
    PUSH dword ptr [EBP + 0x92]         ; 00485e11
    MOV EDI,dword ptr [EAX + 0x24]      ; 00485e17
    PUSH EBX                            ; 00485e1a
    MOV dword ptr [EBP + 0x72],EDI      ; 00485e1b
    CALL core_charactr.cpp_FUN_00432240 ; 00485e1e
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00485e23
    TEST EAX,EAX                        ; 00485e26
    JZ 0x004863f5                       ; 00485e28
        ;   XREF to: 004863f5 (CONDITIONAL_JUMP)  ; LAB_004863f5
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00485e2e
    CMP EAX,0x2                         ; 00485e34
    JNC 0x00486088                      ; 00485e37
        ;   XREF to: 00486088 (CONDITIONAL_JUMP)  ; LAB_00486088
    CMP EAX,0x1                         ; 00485e3d
    JNZ 0x00486093                      ; 00485e40
        ;   XREF to: 00486093 (CONDITIONAL_JUMP)  ; LAB_00486093
    PUSH 0x1                            ; 00485e46
        ;   Label: LAB_00485e46
    PUSH 0x1                            ; 00485e48
    LEA EAX,[EBX + 0x158]               ; 00485e4a
        ;   Label: LAB_00485e4a
    PUSH EAX                            ; 00485e50
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00485e51
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00485e56
        ;   Label: LAB_00485e56
    LEA EAX,[EBX + 0x249c]              ; 00485e59
    MOV dword ptr [EAX + 0x8],0x0       ; 00485e5f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00485e66
    MOV dword ptr [EAX + 0x4],EDX       ; 00485e69
    MOV EDX,dword ptr [EAX + 0x4]       ; 00485e6c
    MOV dword ptr [EAX],EDX             ; 00485e6f
    FLD float ptr [EBX + 0xc1e4]        ; 00485e71
        ;   Label: caseD_3
    FLDZ                                ; 00485e77
    FCOMPP                              ; 00485e79
    FNSTSW AX                           ; 00485e7b
    SAHF                                ; 00485e7d
    JNC 0x00485e92                      ; 00485e7e
        ;   XREF to: 00485e92 (CONDITIONAL_JUMP)  ; LAB_00485e92
    FLD float ptr [EBX + 0xc1e4]        ; 00485e80
    FSUB float ptr [EBP + 0x92]         ; 00485e86
    FSTP float ptr [EBX + 0xc1e4]       ; 00485e8c
    CMP dword ptr [EBP + 0x72],0x1      ; 00485e92
        ;   Label: LAB_00485e92
    JNZ 0x00486451                      ; 00485e96
        ;   XREF to: 00486451 (CONDITIONAL_JUMP)  ; LAB_00486451
    PUSH 0x42480000                     ; 00485e9c
    SUB ESP,0x8                         ; 00485ea1
    FLD float ptr [EBX + 0x28]          ; 00485ea4
    FSTP double ptr [ESP]               ; 00485ea7
    SUB ESP,0x8                         ; 00485eaa
    FLD float ptr [EBX + 0x24]          ; 00485ead
    FSTP double ptr [ESP]               ; 00485eb0
    SUB ESP,0x8                         ; 00485eb3
    FLD float ptr [EBX + 0x20]          ; 00485eb6
    FSTP double ptr [ESP]               ; 00485eb9
    CALL sound_sndmain.cpp_FUN_00574010 ; 00485ebc
        ;   XREF to: 00574010 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00574010()
    ADD ESP,0x1c                        ; 00485ec1
    TEST EAX,EAX                        ; 00485ec4
    JZ 0x00486451                       ; 00485ec6
        ;   XREF to: 00486451 (CONDITIONAL_JUMP)  ; LAB_00486451
    MOV EDI,dword ptr [EBX + 0xc278]    ; 00485ecc
    PUSH EDI                            ; 00485ed2
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00485ed3
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00485ed8
    TEST EAX,EAX                        ; 00485edb
    JZ 0x00486405                       ; 00485edd
        ;   XREF to: 00486405 (CONDITIONAL_JUMP)  ; LAB_00486405
    PUSH EBX                            ; 00485ee3
        ;   Label: LAB_00485ee3
    CALL core_charactr.cpp_FUN_0042e120 ; 00485ee4
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00485ee9
    TEST EAX,EAX                        ; 00485eec
    JZ 0x00486002                       ; 00485eee
        ;   XREF to: 00486002 (CONDITIONAL_JUMP)  ; LAB_00486002
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00485ef4
    TEST EAX,EAX                        ; 00485efa
    JZ 0x00485f28                       ; 00485efc
        ;   XREF to: 00485f28 (CONDITIONAL_JUMP)  ; LAB_00485f28
    PUSH EAX                            ; 00485efe
    MOV EDX,dword ptr [EAX + 0x154]     ; 00485eff
    CALL dword ptr [EDX + 0xf4]         ; 00485f05
    ADD ESP,0x4                         ; 00485f0b
    CMP EAX,EBX                         ; 00485f0e
    JNZ 0x00485f28                      ; 00485f10
        ;   XREF to: 00485f28 (CONDITIONAL_JUMP)  ; LAB_00485f28
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00485f12
    PUSH EDX                            ; 00485f18
    MOV ECX,dword ptr [0x00622c18]      ; 00485f19 | g_CDemonSetPtr
    PUSH ECX                            ; 00485f1f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00485f20
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00485f25
    PUSH dword ptr [EBP + 0x92]         ; 00485f28
        ;   Label: LAB_00485f28
    PUSH EBX                            ; 00485f2e
    LEA ESI,[EBX + 0x2518]              ; 00485f2f
    CALL core_charactr.cpp_FUN_0042d700 ; 00485f35
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 00485f3a
    FMUL float ptr [EBP + 0x92]         ; 00485f3c
    FLD float ptr [ESI + 0x4]           ; 00485f42
    FMUL float ptr [EBP + 0x92]         ; 00485f45
    FLD float ptr [ESI + 0x8]           ; 00485f4b
    FMUL float ptr [EBP + 0x92]         ; 00485f4e
    LEA EDI,[EBP + -0x6]                ; 00485f54
    LEA ESI,[EBP + -0x72]               ; 00485f57
    FXCH ST2                            ; 00485f5a
    FSTP float ptr [EBP + -0x72]        ; 00485f5c
    FSTP float ptr [EBP + -0x6e]        ; 00485f5f
    FSTP float ptr [EBP + -0x6a]        ; 00485f62
    MOVSD ES:EDI,ESI                    ; 00485f65
    MOVSD ES:EDI,ESI                    ; 00485f66
    MOVSD ES:EDI,ESI                    ; 00485f67
    LEA EDX,[EBX + 0x250c]              ; 00485f68
    FLD float ptr [EBP + -0x6]          ; 00485f6e
    FLD float ptr [EBP + -0x2]          ; 00485f71
    FLD float ptr [EBP + 0x2]           ; 00485f74
    LEA EDI,[EBP + -0x1e]               ; 00485f77
    LEA ESI,[EBP + 0x1e]                ; 00485f7a
    FXCH ST2                            ; 00485f7d
    FADD float ptr [EDX]                ; 00485f7f
    FXCH                                ; 00485f81
    FADD float ptr [EDX + 0x4]          ; 00485f83
    FXCH ST2                            ; 00485f86
    FADD float ptr [EDX + 0x8]          ; 00485f88
    FXCH                                ; 00485f8b
    FSTP float ptr [EBP + 0x1e]         ; 00485f8d
    FXCH                                ; 00485f90
    FSTP float ptr [EBP + 0x22]         ; 00485f92
    FSTP float ptr [EBP + 0x26]         ; 00485f95
    MOVSD ES:EDI,ESI                    ; 00485f98
    MOVSD ES:EDI,ESI                    ; 00485f99
    MOVSD ES:EDI,ESI                    ; 00485f9a
    LEA EAX,[EBX + 0x249c]              ; 00485f9b
    FLD float ptr [EBP + -0x1e]         ; 00485fa1
    FLD float ptr [EBP + -0x1a]         ; 00485fa4
    FLD float ptr [EBP + -0x16]         ; 00485fa7
    LEA EDI,[EBP + 0x6]                 ; 00485faa
    LEA ESI,[EBP + -0x4e]               ; 00485fad
    FXCH ST2                            ; 00485fb0
    FADD float ptr [EAX]                ; 00485fb2
    FXCH                                ; 00485fb4
    FADD float ptr [EAX + 0x4]          ; 00485fb6
    FXCH ST2                            ; 00485fb9
    FADD float ptr [EAX + 0x8]          ; 00485fbb
    FXCH                                ; 00485fbe
    FSTP float ptr [EBP + -0x4e]        ; 00485fc0
    FXCH                                ; 00485fc3
    FSTP float ptr [EBP + -0x4a]        ; 00485fc5
    FSTP float ptr [EBP + -0x46]        ; 00485fc8
    MOVSD ES:EDI,ESI                    ; 00485fcb
    MOVSD ES:EDI,ESI                    ; 00485fcc
    MOVSD ES:EDI,ESI                    ; 00485fcd
    MOV dword ptr [EDX + 0x8],0x0       ; 00485fce
    MOV ECX,dword ptr [EDX + 0x8]       ; 00485fd5
    MOV dword ptr [EDX + 0x4],ECX       ; 00485fd8
    MOV ECX,dword ptr [EDX + 0x4]       ; 00485fdb
    MOV dword ptr [EDX],ECX             ; 00485fde
    MOV dword ptr [EAX + 0x8],0x0       ; 00485fe0
    ADD ESP,0x8                         ; 00485fe7
    MOV EDX,dword ptr [EAX + 0x8]       ; 00485fea
    MOV dword ptr [EAX + 0x4],EDX       ; 00485fed
    MOV EDX,dword ptr [EAX + 0x4]       ; 00485ff0
    MOV dword ptr [EAX],EDX             ; 00485ff3
    LEA EAX,[EBP + 0x6]                 ; 00485ff5
    PUSH EAX                            ; 00485ff8
    PUSH EBX                            ; 00485ff9
    CALL core_charactr.cpp_FUN_0042d750 ; 00485ffa
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00485fff
    PUSH EBX                            ; 00486002
        ;   Label: LAB_00486002
    CALL core_charactr.cpp_FUN_0042e160 ; 00486003
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00486008
    LEA EAX,[EBX + 0x158]               ; 0048600b
    PUSH EAX                            ; 00486011
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00486012
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00486017
    PUSH dword ptr [EBP + 0x92]         ; 0048601a
    PUSH EBX                            ; 00486020
    CALL core_charactr.cpp_FUN_00433e80 ; 00486021
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00486026
    LEA ESP,[EBP + 0x7a]                ; 00486029
    POP EBP                             ; 0048602c
    POP EDI                             ; 0048602d
    POP ESI                             ; 0048602e
    POP EBX                             ; 0048602f
    RET                                 ; 00486030
    MOV EDX,dword ptr [EBX + 0xc278]    ; 00486031
        ;   Label: LAB_00486031
    PUSH EDX                            ; 00486037
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00486038
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0048603d
    LEA ESP,[EBP + 0x7a]                ; 00486040
    POP EBP                             ; 00486043
    POP EDI                             ; 00486044
    POP ESI                             ; 00486045
    POP EBX                             ; 00486046
    RET                                 ; 00486047
    LEA EAX,[EBP + 0x66]                ; 00486048
        ;   Label: LAB_00486048
    PUSH EAX                            ; 0048604b
    PUSH ESI                            ; 0048604c
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0048604d
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00486052
    PUSH EAX                            ; 00486055
    PUSH EBX                            ; 00486056
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00486057
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0048605c
    JMP 0x00485dc9                      ; 0048605f
        ;   XREF to: 00485dc9 (UNCONDITIONAL_JUMP)  ; LAB_00485dc9
    PUSH 0x1                            ; 00486064
        ;   Label: LAB_00486064
    PUSH 0x0                            ; 00486066
    PUSH ESI                            ; 00486068
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00486069
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048606e
    PUSH EBX                            ; 00486071
    PUSH 0x5db631                       ; 00486072 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00611100]      ; 00486077 | g_CConsolePtr
    PUSH EDX                            ; 0048607d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0048607e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x00485e56                      ; 00486083
        ;   XREF to: 00485e56 (UNCONDITIONAL_JUMP)  ; LAB_00485e56
    JBE 0x00485e46                      ; 00486088
        ;   XREF to: 00485e46 (CONDITIONAL_JUMP)  ; LAB_00485e46
        ;   Label: LAB_00486088
    CMP EAX,0x3                         ; 0048608e
    JZ 0x00486064                       ; 00486091
        ;   XREF to: 00486064 (CONDITIONAL_JUMP)  ; LAB_00486064
    PUSH 0x1                            ; 00486093
        ;   Label: LAB_00486093
    PUSH 0x0                            ; 00486095
    JMP 0x00485e4a                      ; 00486097
        ;   XREF to: 00485e4a (UNCONDITIONAL_JUMP)  ; LAB_00485e4a
    CMP dword ptr [EBX + 0x2500],0x0    ; 0048609c
        ;   Label: caseD_9
    JZ 0x00485e71                       ; 004860a3
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004860a9
    PUSH 0xa                            ; 004860ab
    PUSH ESI                            ; 004860ad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004860ae
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004860b3
    JMP 0x00485e71                      ; 004860b6
        ;   XREF to: 00485e71 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xffffff46]          ; 004860bb
        ;   Label: caseD_2
    PUSH EAX                            ; 004860c1
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004860c2
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004860c7
    PUSH 0x41700000                     ; 004860ca
    PUSH 0x41200000                     ; 004860cf
    CALL core_actor.cpp_FUN_0040cc00    ; 004860d4
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004860d9
    MOV dword ptr [EBP + 0xffffff7a],EBX ; 004860dc
    MOV dword ptr [EBP + 0xffffff7e],EBX ; 004860e2
    ADD ESP,0x8                         ; 004860e8
    FLD float ptr [EBP + 0x76]          ; 004860eb
    LEA EAX,[EBP + 0xffffff46]          ; 004860ee
    FSTP float ptr [EBP + 0xffffff4a]   ; 004860f4
    MOV EDX,dword ptr [EBX + 0xc26c]    ; 004860fa
    PUSH EAX                            ; 00486100
    LEA EAX,[EDX*0x4 + 0x0]             ; 00486101
    SUB EAX,EDX                         ; 00486108
    SHL EAX,0x4                         ; 0048610a
    LEA EDX,[EBX + 0xfd8]               ; 0048610d
    ADD EAX,EDX                         ; 00486113
    PUSH 0x3ecccccd                     ; 00486115
    PUSH EAX                            ; 0048611a
    LEA ESI,[EBP + -0x2a]               ; 0048611b
    PUSH 0x2c8af28                      ; 0048611e | DAT_02c8af28
    LEA EDI,[EBP + 0x42]                ; 00486123
    MOV dword ptr [EBP + 0x6a],EDX      ; 00486126
    CALL core_xform.cpp_FUN_005b5080    ; 00486129
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0048612e
    LEA EAX,[EBP + 0x42]                ; 00486131
    LEA ESI,[EBP + -0x2a]               ; 00486134
    PUSH EAX                            ; 00486137
    MOVSD ES:EDI,ESI                    ; 00486138
    MOVSD ES:EDI,ESI                    ; 00486139
    MOVSD ES:EDI,ESI                    ; 0048613a
    PUSH EBX                            ; 0048613b
    LEA ESI,[EBP + -0x12]               ; 0048613c
    CALL core_actor.cpp_FUN_00408b40    ; 0048613f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00486144
    LEA EAX,[EBP + -0x36]               ; 00486147
    PUSH EAX                            ; 0048614a
    LEA EDI,[EBP + -0x36]               ; 0048614b
    LEA ESI,[EBP + -0x12]               ; 0048614e
    PUSH EBX                            ; 00486151
    MOVSD ES:EDI,ESI                    ; 00486152
    MOVSD ES:EDI,ESI                    ; 00486153
    MOVSD ES:EDI,ESI                    ; 00486154
    CALL core_enemy.cpp_FUN_004a0770    ; 00486155
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0048615a
    PUSH 0x41700000                     ; 0048615d
    PUSH 0x41200000                     ; 00486162
    CALL core_actor.cpp_FUN_0040cc00    ; 00486167
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 0048616c
    MOV dword ptr [EBP + 0xffffff7a],EBX ; 0048616f
    MOV dword ptr [EBP + 0xffffff7e],EBX ; 00486175
    ADD ESP,0x8                         ; 0048617b
    FLD float ptr [EBP + 0x76]          ; 0048617e
    LEA EAX,[EBP + 0xffffff46]          ; 00486181
    FSTP float ptr [EBP + 0xffffff4a]   ; 00486187
    MOV EDX,dword ptr [EBX + 0xc270]    ; 0048618d
    PUSH EAX                            ; 00486193
    LEA EAX,[EDX*0x4 + 0x0]             ; 00486194
    SUB EAX,EDX                         ; 0048619b
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0048619d
    SHL EAX,0x4                         ; 004861a0
    ADD EAX,ESI                         ; 004861a3
    PUSH 0x3ecccccd                     ; 004861a5
    PUSH EAX                            ; 004861aa
    PUSH 0x2c8af28                      ; 004861ab | DAT_02c8af28
    LEA ESI,[EBP + 0x12]                ; 004861b0
    LEA EDI,[EBP + -0x66]               ; 004861b3
    CALL core_xform.cpp_FUN_005b5080    ; 004861b6
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004861bb
    LEA EAX,[EBP + -0x66]               ; 004861be
    LEA ESI,[EBP + 0x12]                ; 004861c1
    PUSH EAX                            ; 004861c4
    MOVSD ES:EDI,ESI                    ; 004861c5
    MOVSD ES:EDI,ESI                    ; 004861c6
    MOVSD ES:EDI,ESI                    ; 004861c7
    PUSH EBX                            ; 004861c8
    LEA ESI,[EBP + 0x2a]                ; 004861c9
    CALL core_actor.cpp_FUN_00408b40    ; 004861cc
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004861d1
    LEA EAX,[EBP + -0x5a]               ; 004861d4
    PUSH EAX                            ; 004861d7
    LEA EDI,[EBP + -0x5a]               ; 004861d8
    LEA ESI,[EBP + 0x2a]                ; 004861db
    PUSH EBX                            ; 004861de
    MOVSD ES:EDI,ESI                    ; 004861df
    MOVSD ES:EDI,ESI                    ; 004861e0
    MOVSD ES:EDI,ESI                    ; 004861e1
    CALL core_enemy.cpp_FUN_004a0770    ; 004861e2
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004861e7
    JMP 0x00485e71                      ; 004861ea
        ;   XREF to: 00485e71 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 004861ef
        ;   Label: caseD_8
    JNZ 0x00485e71                      ; 004861f6
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xdc]      ; 004861fc
    TEST EAX,EAX                        ; 00486202
    JNZ 0x00485e71                      ; 00486204
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 0048620a
    PUSH ESI                            ; 0048620b
    LEA ESI,[EBP + 0x4e]                ; 0048620c
    LEA EDI,[EBP + 0x5a]                ; 0048620f
    CALL core_skeleton.cpp_FUN_00569040 ; 00486212
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00486217
    LEA EAX,[EBP + 0x5a]                ; 0048621a
    LEA ESI,[EBP + 0x4e]                ; 0048621d
    PUSH EAX                            ; 00486220
    MOVSD ES:EDI,ESI                    ; 00486221
    MOVSD ES:EDI,ESI                    ; 00486222
    MOVSD ES:EDI,ESI                    ; 00486223
    PUSH EBX                            ; 00486224
    LEA ESI,[EBP + -0x7e]               ; 00486225
    CALL core_actor.cpp_FUN_00408b40    ; 00486228
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0048622d
    PUSH 0x1                            ; 00486230
    LEA EAX,[EBP + 0x36]                ; 00486232
    LEA EDI,[EBP + 0x36]                ; 00486235
    PUSH EAX                            ; 00486238
    MOV EDX,dword ptr [0x0061dca4]      ; 00486239 | g_CGorePtr
    LEA ESI,[EBP + -0x7e]               ; 0048623f
    PUSH EDX                            ; 00486242
    MOVSD ES:EDI,ESI                    ; 00486243
    MOVSD ES:EDI,ESI                    ; 00486244
    MOVSD ES:EDI,ESI                    ; 00486245
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 00486246
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0048624b
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0048624e
    JMP 0x00485e71                      ; 00486258
        ;   XREF to: 00485e71 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0048625d
        ;   Label: caseD_0
    PUSH EBX                            ; 00486263
    CALL core_enemy.cpp_FUN_004a0fe0    ; 00486264
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00486269
    TEST EAX,EAX                        ; 0048626c
    JZ 0x00486282                       ; 0048626e
        ;   XREF to: 00486282 (CONDITIONAL_JUMP)  ; LAB_00486282
    PUSH 0x1                            ; 00486270
    PUSH 0x1                            ; 00486272
    PUSH ESI                            ; 00486274
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00486275
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048627a
    JMP 0x00485e71                      ; 0048627d
        ;   XREF to: 00485e71 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00486282
        ;   Label: LAB_00486282
    MOV EAX,dword ptr [EBX + 0x154]     ; 00486288
    PUSH EBX                            ; 0048628e
    CALL dword ptr [EAX + 0x144]        ; 0048628f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00486295
    ADD ESP,0x8                         ; 0048629b
    TEST EAX,EAX                        ; 0048629e
    JZ 0x00485e71                       ; 004862a0
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004862a6
    PUSH 0x1                            ; 004862a8
    PUSH ESI                            ; 004862aa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004862ab
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004862b0
    JMP 0x00485e71                      ; 004862b3
        ;   XREF to: 00485e71 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004862b8
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004862be
    PUSH EBX                            ; 004862c4
    CALL dword ptr [EAX + 0x144]        ; 004862c5
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004862cb
    ADD ESP,0x8                         ; 004862d1
    TEST EDI,EDI                        ; 004862d4
    JNZ 0x00486300                      ; 004862d6
        ;   XREF to: 00486300 (CONDITIONAL_JUMP)  ; LAB_00486300
    PUSH dword ptr [EBP + 0x92]         ; 004862d8
    PUSH EBX                            ; 004862de
    CALL core_enemy.cpp_FUN_004a0fe0    ; 004862df
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004862e4
    TEST EAX,EAX                        ; 004862e7
    JNZ 0x00485e71                      ; 004862e9
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004862ef
    PUSH EDI                            ; 004862f1
    PUSH ESI                            ; 004862f2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004862f3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004862f8
    JMP 0x00485e71                      ; 004862fb
        ;   XREF to: 00485e71 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x005ff488]                ; 00486300 | DAT_005ff488
        ;   Label: LAB_00486300
    MOV dword ptr [EBP + 0x6e],EAX      ; 00486305
    LEA EAX,[EBX + 0x249c]              ; 00486308
    MOV dword ptr [EAX + 0x8],0x0       ; 0048630e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00486315
    MOV dword ptr [EAX + 0x4],EDX       ; 00486318
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048631b
    MOV dword ptr [EAX],EDX             ; 0048631e
    XOR EAX,EAX                         ; 00486320
    MOV dword ptr [EBP + -0x42],EAX     ; 00486322
    MOV dword ptr [EBP + -0x3e],EAX     ; 00486325
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00486328
    PUSH 0x3e32b8c2                     ; 0048632b
    MOV dword ptr [EBP + -0x3a],EAX     ; 00486330
    LEA EAX,[EBP + -0x42]               ; 00486333
    PUSH 0x3f000000                     ; 00486336
    PUSH EAX                            ; 0048633b
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0048633c
    PUSH EAX                            ; 00486342
    MOV EDX,dword ptr [EAX + 0x154]     ; 00486343
    CALL dword ptr [EDX + 0xc4]         ; 00486349
    ADD ESP,0x4                         ; 0048634f
    PUSH EAX                            ; 00486352
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00486353
    ADD EAX,0x20                        ; 00486359
    PUSH EAX                            ; 0048635c
    PUSH EBX                            ; 0048635d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0048635e
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00486363
    TEST EAX,EAX                        ; 00486366
    JL 0x004863ce                       ; 00486368
        ;   XREF to: 004863ce (CONDITIONAL_JUMP)  ; LAB_004863ce
    JLE 0x00485e71                      ; 0048636a
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xc1e4]        ; 00486370
    FLDZ                                ; 00486376
    FCOMPP                              ; 00486378
    FNSTSW AX                           ; 0048637a
    SAHF                                ; 0048637c
    JC 0x00485e71                       ; 0048637d
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00486383
    PUSH 0x2                            ; 00486385
    PUSH ESI                            ; 00486387
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00486388
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048638d
    MOV ECX,dword ptr [EBX + 0xc27c]    ; 00486390
    PUSH ECX                            ; 00486396
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 00486397
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004863a1
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004863a6
    TEST EAX,EAX                        ; 004863a9
    JNZ 0x00485e71                      ; 004863ab
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x5db67c                       ; 004863b1 | = "drone-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004863b6
    PUSH EBX                            ; 004863bc
    CALL dword ptr [EAX + 0x2c]         ; 004863bd
    ADD ESP,0x8                         ; 004863c0
    MOV dword ptr [EBX + 0xc27c],EAX    ; 004863c3
    JMP 0x00485e71                      ; 004863c9
        ;   XREF to: 00485e71 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 004863ce
        ;   Label: LAB_004863ce
    PUSH 0x5db65b                       ; 004863cf | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x00611100]      ; 004863d4 | g_CConsolePtr
    PUSH EDI                            ; 004863da | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004863db
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004863e0
    PUSH 0x1                            ; 004863e3
    PUSH 0x0                            ; 004863e5
    PUSH ESI                            ; 004863e7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004863e8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004863ed
    JMP 0x00485e71                      ; 004863f0
        ;   XREF to: 00485e71 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EDI,0x9                         ; 004863f5
        ;   Label: LAB_004863f5
    JA 0x00485e71                       ; 004863f8
        ;   XREF to: 00485e71 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EDI*0x4 + 0x485d40]  ; 004863fe | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 00486405
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
        ;   Label: LAB_00486405
    PUSH 0x2                            ; 0048640a
    PUSH 0x3f800000                     ; 0048640c
    PUSH 0x0                            ; 00486411
    CALL core_actor.cpp_FUN_0040cc00    ; 00486413
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    ADD ESP,0x8                         ; 00486418
    MOV dword ptr [EBP + 0x76],EAX      ; 0048641b
    SUB ESP,0x8                         ; 0048641e
    FLD float ptr [EBP + 0x76]          ; 00486421
    FSTP double ptr [ESP]               ; 00486424
    CALL sound_sndmain.cpp_FUN_00572a50 ; 00486427
        ;   XREF to: 00572a50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572a50(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0048642c
    PUSH 0x5db68e                       ; 0048642f | = "slime.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00486434
    PUSH EBX                            ; 0048643a
    CALL dword ptr [EAX + 0x30]         ; 0048643b
    ADD ESP,0x8                         ; 0048643e
    MOV dword ptr [EBX + 0xc278],EAX    ; 00486441
    CALL sound_sndmain.cpp_FUN_00572b40 ; 00486447
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    JMP 0x00485ee3                      ; 0048644c
        ;   XREF to: 00485ee3 (UNCONDITIONAL_JUMP)  ; LAB_00485ee3
    MOV ESI,dword ptr [EBX + 0xc278]    ; 00486451
        ;   Label: LAB_00486451
    PUSH ESI                            ; 00486457
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00486458
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0048645d
    JMP 0x00485ee3                      ; 00486460
        ;   XREF to: 00485ee3 (UNCONDITIONAL_JUMP)  ; LAB_00485ee3

