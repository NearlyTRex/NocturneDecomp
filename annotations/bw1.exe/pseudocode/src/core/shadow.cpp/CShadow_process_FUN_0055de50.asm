; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_process_FUN_0055de50(CShadow *this_ptr,float delta_time)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0055ddf4 = 0055eb9e
;   TerminatedCString s_s_confused_while_walking_005f158d
;   undefined4 DAT_005f15b7
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005f15b9
;   undefined4 DAT_005f15da
;   undefined4 DAT_005f15dc
;   undefined4 DAT_005f15e5
;   undefined4 DAT_005f15ed
;   undefined4 DAT_005f15f5
;   undefined4 DAT_005f15fd
;   undefined4 DAT_005f1605
;   undefined4 DAT_005f1609
;   undefined4 DAT_005f160d
;   undefined4 DAT_005f1615
;   undefined4 DAT_005f161d
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00431cc0
;   core_charactr.cpp_FUN_00434790
;   core_charactr.cpp_FUN_00435320
;   ... and 25 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055de50
        ;   Label: core_shadow.cpp_CShadow_process_FUN_0055de50
    PUSH ESI                            ; 0055de51
    PUSH EDI                            ; 0055de52
    PUSH EBP                            ; 0055de53
    MOV EBP,ESP                         ; 0055de54
    SUB ESP,0x2c0                       ; 0055de56
    SUB EBP,0x7a                        ; 0055de5c
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055de5f
    ADD ESI,0x158                       ; 0055de65
    PUSH ESI                            ; 0055de6b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0055de6c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0055de71
    FLD float ptr [ESI + 0x8]           ; 0055de74
    PUSH ESI                            ; 0055de77
    FSTP float ptr [EBP + 0x62]         ; 0055de78
    MOV EDI,dword ptr [EAX + 0x24]      ; 0055de7b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0055de7e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0055de83
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055de86
    PUSH dword ptr [EBP + 0x92]         ; 0055de8c
    FILD dword ptr [EAX + 0x64]         ; 0055de92
    PUSH EDX                            ; 0055de95
    FSTP float ptr [EBP + 0x6e]         ; 0055de96
    CALL core_charactr.cpp_FUN_00434790 ; 0055de99
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
    ADD ESP,0x8                         ; 0055de9e
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0055dea1
    PUSH dword ptr [EBP + 0x92]         ; 0055dea7
    PUSH ECX                            ; 0055dead
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0055deae
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0055deb3
    TEST EAX,EAX                        ; 0055deb6
    JZ 0x0055df3f                       ; 0055deb8
        ;   XREF to: 0055df3f (CONDITIONAL_JUMP)  ; LAB_0055df3f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055debe
    CMP dword ptr [EAX + 0xc268],0x2    ; 0055dec4
    JZ 0x0055df5c                       ; 0055decb
        ;   XREF to: 0055df5c (CONDITIONAL_JUMP)  ; LAB_0055df5c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ded1
        ;   Label: LAB_0055ded1
    FLD float ptr [EBP + 0x92]          ; 0055ded7
    FMUL float ptr [EAX + 0xc1d0]       ; 0055dedd
    FMUL float ptr [EAX + 0xc310]       ; 0055dee3
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055dee9
    MOV dword ptr [EAX + 0x24a4],0x0    ; 0055deef
    LEA ESI,[EAX + 0x158]               ; 0055def9
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 0055deff
    MOV dword ptr [EAX + 0x24a0],EDX    ; 0055df05
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 0055df0b
    MOV dword ptr [EAX + 0x249c],EDX    ; 0055df11
    FSTP float ptr [EBP + 0x56]         ; 0055df17
    FLD float ptr [EBP + 0x56]          ; 0055df1a
        ;   Label: LAB_0055df1a
    FLDZ                                ; 0055df1d
    FCOMPP                              ; 0055df1f
    FNSTSW AX                           ; 0055df21
    SAHF                                ; 0055df23
    JNC 0x0055df8c                      ; 0055df24
        ;   XREF to: 0055df8c (CONDITIONAL_JUMP)  ; LAB_0055df8c
    LEA EAX,[EBP + 0x56]                ; 0055df26
    PUSH EAX                            ; 0055df29
    PUSH ESI                            ; 0055df2a
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0055df2b
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0055df30
    PUSH EAX                            ; 0055df33
    PUSH EBX                            ; 0055df34
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0055df35
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0055df3a
    JMP 0x0055df1a                      ; 0055df3d
        ;   XREF to: 0055df1a (UNCONDITIONAL_JUMP)  ; LAB_0055df1a
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055df3f
        ;   Label: LAB_0055df3f
    MOV ESI,dword ptr [EAX + 0xc2b4]    ; 0055df45
    PUSH ESI                            ; 0055df4b
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0055df4c
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0055df51
    LEA ESP,[EBP + 0x7a]                ; 0055df54
        ;   Label: LAB_0055df54
    POP EBP                             ; 0055df57
    POP EDI                             ; 0055df58
    POP ESI                             ; 0055df59
    POP EBX                             ; 0055df5a
    RET                                 ; 0055df5b
    FLD float ptr [EAX + 0xc2d0]        ; 0055df5c
        ;   Label: LAB_0055df5c
    FLDZ                                ; 0055df62
    FCOMPP                              ; 0055df64
    FNSTSW AX                           ; 0055df66
    SAHF                                ; 0055df68
    JA 0x0055ded1                       ; 0055df69
        ;   XREF to: 0055ded1 (CONDITIONAL_JUMP)  ; LAB_0055ded1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055df6f
    FLD float ptr [EAX + 0xc2d0]        ; 0055df75
    FSUB float ptr [EBP + 0x92]         ; 0055df7b
    FSTP float ptr [EAX + 0xc2d0]       ; 0055df81
    JMP 0x0055ded1                      ; 0055df87
        ;   XREF to: 0055ded1 (UNCONDITIONAL_JUMP)  ; LAB_0055ded1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055df8c
        ;   Label: LAB_0055df8c
    FLD float ptr [EBP + 0x92]          ; 0055df92
    FMUL float ptr [EAX + 0xc1d0]       ; 0055df98
    SUB ESP,0x4                         ; 0055df9e
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 0055dfa1
    MOV dword ptr [EAX + 0x2524],EDX    ; 0055dfa7
    FSTP float ptr [ESP]                ; 0055dfad
    PUSH EAX                            ; 0055dfb0
    CALL core_charactr.cpp_FUN_00435320 ; 0055dfb1
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055dfb6
    MOV EDX,dword ptr [EAX + 0xc268]    ; 0055dfbc
    ADD ESP,0x8                         ; 0055dfc2
    CMP EDX,0x2                         ; 0055dfc5
    JNZ 0x0055dfe0                      ; 0055dfc8
        ;   XREF to: 0055dfe0 (CONDITIONAL_JUMP)  ; LAB_0055dfe0
    FLD float ptr [EAX + 0x2528]        ; 0055dfca
    FLD ST0                             ; 0055dfd0
    FMUL double ptr [0x005f15e5]        ; 0055dfd2 | DAT_005f15e5
    FSTP ST1                            ; 0055dfd8
    FSTP float ptr [EAX + 0x2528]       ; 0055dfda
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0055dfe0
        ;   Label: LAB_0055dfe0
    PUSH dword ptr [EBP + 0x92]         ; 0055dfe6
    PUSH ECX                            ; 0055dfec
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0055dfed
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0055dff2
    TEST EAX,EAX                        ; 0055dff5
    JZ 0x0055f378                       ; 0055dff7
        ;   XREF to: 0055f378 (CONDITIONAL_JUMP)  ; LAB_0055f378
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055dffd
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055e003
    MOV EAX,dword ptr [EAX + 0x273c]    ; 0055e009
    ADD ESI,0x158                       ; 0055e00f
    CMP EAX,0x2                         ; 0055e015
    JNC 0x0055e57b                      ; 0055e018
        ;   XREF to: 0055e57b (CONDITIONAL_JUMP)  ; LAB_0055e57b
    CMP EAX,0x1                         ; 0055e01e
    JNZ 0x0055e58a                      ; 0055e021
        ;   XREF to: 0055e58a (CONDITIONAL_JUMP)  ; LAB_0055e58a
    PUSH EAX                            ; 0055e027
    PUSH 0x5                            ; 0055e028
    PUSH ESI                            ; 0055e02a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055e02b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0055e02b
    ADD ESP,0xc                         ; 0055e030
        ;   Label: LAB_0055e030
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e033
        ;   Label: LAB_0055e033
    MOV dword ptr [EAX + 0x24a4],0x0    ; 0055e039
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 0055e043
    MOV dword ptr [EAX + 0x24a0],EDX    ; 0055e049
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 0055e04f
    MOV dword ptr [EAX + 0x249c],EDX    ; 0055e055
    LEA EAX,[EAX]                       ; 0055e05b
    MOV ECX,ECX                         ; 0055e05e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e060
        ;   Label: LAB_0055e060
    FLD float ptr [EAX + 0xc1e4]        ; 0055e066
    FLDZ                                ; 0055e06c
    MOV dword ptr [EAX + 0x2ff0],0x40000000 ; 0055e06e
    FCOMPP                              ; 0055e078
    FNSTSW AX                           ; 0055e07a
    SAHF                                ; 0055e07c
    JNC 0x0055e097                      ; 0055e07d
        ;   XREF to: 0055e097 (CONDITIONAL_JUMP)  ; LAB_0055e097
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e07f
    FLD float ptr [EAX + 0xc1e4]        ; 0055e085
    FSUB float ptr [EBP + 0x92]         ; 0055e08b
    FSTP float ptr [EAX + 0xc1e4]       ; 0055e091
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e097
        ;   Label: LAB_0055e097
    ADD EAX,0x158                       ; 0055e09d
    PUSH EAX                            ; 0055e0a2
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0055e0a3
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0055e0a8
    ADD ESP,0x4                         ; 0055e0ab
    CMP EAX,0x11                        ; 0055e0ae
    JZ 0x0055f388                       ; 0055e0b1
        ;   XREF to: 0055f388 (CONDITIONAL_JUMP)  ; LAB_0055f388
    TEST EAX,EAX                        ; 0055e0b7
    JZ 0x0055f388                       ; 0055e0b9
        ;   XREF to: 0055f388 (CONDITIONAL_JUMP)  ; LAB_0055f388
    CMP EAX,0x1                         ; 0055e0bf
    JZ 0x0055f388                       ; 0055e0c2
        ;   XREF to: 0055f388 (CONDITIONAL_JUMP)  ; LAB_0055f388
    CMP EAX,0x2                         ; 0055e0c8
    JZ 0x0055f388                       ; 0055e0cb
        ;   XREF to: 0055f388 (CONDITIONAL_JUMP)  ; LAB_0055f388
    CMP EAX,0x3                         ; 0055e0d1
    JZ 0x0055f388                       ; 0055e0d4
        ;   XREF to: 0055f388 (CONDITIONAL_JUMP)  ; LAB_0055f388
    CMP EAX,0x4                         ; 0055e0da
    JZ 0x0055f388                       ; 0055e0dd
        ;   XREF to: 0055f388 (CONDITIONAL_JUMP)  ; LAB_0055f388
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e0e3
        ;   Label: LAB_0055e0e3
    MOV ECX,dword ptr [EAX + 0xc1e8]    ; 0055e0e9
    TEST ECX,ECX                        ; 0055e0ef
    JZ 0x0055e123                       ; 0055e0f1
        ;   XREF to: 0055e123 (CONDITIONAL_JUMP)  ; LAB_0055e123
    PUSH ECX                            ; 0055e0f3
    MOV EDX,dword ptr [ECX + 0x154]     ; 0055e0f4
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055e0fa
    CALL dword ptr [EDX + 0xf4]         ; 0055e100
    ADD ESP,0x4                         ; 0055e106
    CMP EAX,EBX                         ; 0055e109
    JNZ 0x0055e123                      ; 0055e10b
        ;   XREF to: 0055e123 (CONDITIONAL_JUMP)  ; LAB_0055e123
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0055e10d
    PUSH ESI                            ; 0055e113
    MOV EDI,dword ptr [0x00622c18]      ; 0055e114 | g_CDemonSetPtr
    PUSH EDI                            ; 0055e11a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0055e11b
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0055e120
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e123
        ;   Label: LAB_0055e123
    PUSH dword ptr [EBP + 0x92]         ; 0055e129
    PUSH EAX                            ; 0055e12f
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055e130
    CALL core_charactr.cpp_FUN_0042d700 ; 0055e136
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI + 0x2518]        ; 0055e13b
    FMUL float ptr [EBP + 0x92]         ; 0055e141
    FLD float ptr [ESI + 0x251c]        ; 0055e147
    FMUL float ptr [EBP + 0x92]         ; 0055e14d
    FLD float ptr [ESI + 0x2520]        ; 0055e153
    FMUL float ptr [EBP + 0x92]         ; 0055e159
    LEA EDI,[EBP + -0x12]               ; 0055e15f
    MOV EDX,ESI                         ; 0055e162
    MOV EAX,ESI                         ; 0055e164
    LEA ESI,[EBP + 0xfffffeb6]          ; 0055e166
    FXCH ST2                            ; 0055e16c
    FSTP float ptr [EBP + 0xfffffeb6]   ; 0055e16e
    FSTP float ptr [EBP + 0xfffffeba]   ; 0055e174
    FSTP float ptr [EBP + 0xfffffebe]   ; 0055e17a
    MOVSD ES:EDI,ESI                    ; 0055e180
    MOVSD ES:EDI,ESI                    ; 0055e181
    MOVSD ES:EDI,ESI                    ; 0055e182
    FLD float ptr [EBP + -0x12]         ; 0055e183
    FLD float ptr [EBP + -0xe]          ; 0055e186
    FLD float ptr [EBP + -0xa]          ; 0055e189
    LEA EDI,[EBP + 0xfffffe62]          ; 0055e18c
    LEA ESI,[EBP + 0x1e]                ; 0055e192
    FXCH ST2                            ; 0055e195
    FADD float ptr [EDX + 0x249c]       ; 0055e197
    FXCH                                ; 0055e19d
    FADD float ptr [EDX + 0x24a0]       ; 0055e19f
    FXCH ST2                            ; 0055e1a5
    FADD float ptr [EDX + 0x24a4]       ; 0055e1a7
    FXCH                                ; 0055e1ad
    FSTP float ptr [EBP + 0x1e]         ; 0055e1af
    FXCH                                ; 0055e1b2
    FSTP float ptr [EBP + 0x22]         ; 0055e1b4
    FSTP float ptr [EBP + 0x26]         ; 0055e1b7
    MOVSD ES:EDI,ESI                    ; 0055e1ba
    MOVSD ES:EDI,ESI                    ; 0055e1bb
    MOVSD ES:EDI,ESI                    ; 0055e1bc
    FLD float ptr [EBP + 0xfffffe62]    ; 0055e1bd
    FLD float ptr [EBP + 0xfffffe66]    ; 0055e1c3
    FLD float ptr [EBP + 0xfffffe6a]    ; 0055e1c9
    LEA EDI,[EBP + 0x36]                ; 0055e1cf
    LEA ESI,[EBP + 0xfffffe7a]          ; 0055e1d2
    FXCH ST2                            ; 0055e1d8
    FADD float ptr [EDX + 0x250c]       ; 0055e1da
    FXCH                                ; 0055e1e0
    FADD float ptr [EDX + 0x2510]       ; 0055e1e2
    FXCH ST2                            ; 0055e1e8
    FADD float ptr [EDX + 0x2514]       ; 0055e1ea
    FXCH                                ; 0055e1f0
    FSTP float ptr [EBP + 0xfffffe7a]   ; 0055e1f2
    FXCH                                ; 0055e1f8
    FSTP float ptr [EBP + 0xfffffe7e]   ; 0055e1fa
    FSTP float ptr [EBP + 0xfffffe82]   ; 0055e200
    MOVSD ES:EDI,ESI                    ; 0055e206
    MOVSD ES:EDI,ESI                    ; 0055e207
    MOVSD ES:EDI,ESI                    ; 0055e208
    MOV dword ptr [EDX + 0x24a4],0x0    ; 0055e209
    MOV dword ptr [EDX + 0x2514],0x0    ; 0055e213
    ADD ESP,0x8                         ; 0055e21d
    MOV ECX,dword ptr [EDX + 0x24a4]    ; 0055e220
    MOV dword ptr [EDX + 0x24a0],ECX    ; 0055e226
    MOV ECX,dword ptr [EDX + 0x24a0]    ; 0055e22c
    MOV dword ptr [EDX + 0x249c],ECX    ; 0055e232
    MOV ECX,dword ptr [EAX + 0x2514]    ; 0055e238
    MOV dword ptr [EDX + 0x2510],ECX    ; 0055e23e
    FLD float ptr [EAX + 0x2510]        ; 0055e244
    LEA EAX,[EBP + 0x36]                ; 0055e24a
    PUSH EAX                            ; 0055e24d
    PUSH EDX                            ; 0055e24e
    FSTP float ptr [EDX + 0x250c]       ; 0055e24f
    CALL core_charactr.cpp_FUN_0042d750 ; 0055e255
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0055e25a
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0055e25d
        ;   Label: LAB_0055e25d
    PUSH ECX                            ; 0055e263
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 0055e264
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e269
    ADD ESP,0x4                         ; 0055e26f
    ADD EAX,0x158                       ; 0055e272
    PUSH EAX                            ; 0055e277
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 0055e278
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0055e27d
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055e280
    PUSH dword ptr [EBP + 0x92]         ; 0055e286
    PUSH EBX                            ; 0055e28c
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 0055e28d
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    FLD float ptr [EBX + 0xc2f4]        ; 0055e292
    FLDZ                                ; 0055e298
    ADD ESP,0x8                         ; 0055e29a
    FCOMPP                              ; 0055e29d
    FNSTSW AX                           ; 0055e29f
    SAHF                                ; 0055e2a1
    JA 0x0055df54                       ; 0055e2a2
        ;   XREF to: 0055df54 (CONDITIONAL_JUMP)  ; LAB_0055df54
    FLD float ptr [EBX + 0xc2f4]        ; 0055e2a8
    FSUB float ptr [EBP + 0x92]         ; 0055e2ae
    FST float ptr [EBX + 0xc2f4]        ; 0055e2b4
    FLDZ                                ; 0055e2ba
    FCOMPP                              ; 0055e2bc
    FNSTSW AX                           ; 0055e2be
    SAHF                                ; 0055e2c0
    JC 0x0055df54                       ; 0055e2c1
        ;   XREF to: 0055df54 (CONDITIONAL_JUMP)  ; LAB_0055df54
    PUSH 0x40000000                     ; 0055e2c7
    PUSH 0x3f800000                     ; 0055e2cc
    LEA ESI,[EBP + 0xfffffe0e]          ; 0055e2d1
    LEA EDI,[EBP + 0xfffffe26]          ; 0055e2d7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0055e2dd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055e2e2
    ADD ESP,0x8                         ; 0055e2e5
    FLD float ptr [EBP + 0x76]          ; 0055e2e8
    PUSH EBX                            ; 0055e2eb
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055e2ec
    FSTP float ptr [EBX + 0xc2f4]       ; 0055e2f2
    CALL dword ptr [EAX + 0x1c]         ; 0055e2f8
    MOV ECX,0x6                         ; 0055e2fb
    LEA ESI,[EBP + 0xfffffe0e]          ; 0055e300
    MOVSD.REP ES:EDI,ESI                ; 0055e306
    LEA EAX,[EBP + 0xfffffe26]          ; 0055e308
    FLD float ptr [EBP + 0xfffffe26]    ; 0055e30e
    FLD float ptr [EBP + 0xfffffe2a]    ; 0055e314
    FLD float ptr [EBP + 0xfffffe2e]    ; 0055e31a
    LEA EDI,[EBP + 0x12]                ; 0055e320
    LEA ESI,[EBP + 0xfffffec2]          ; 0055e323
    FXCH ST2                            ; 0055e329
    FADD float ptr [EAX + 0xc]          ; 0055e32b
    FXCH                                ; 0055e32e
    FADD float ptr [EAX + 0x10]         ; 0055e330
    FXCH ST2                            ; 0055e333
    FADD float ptr [EAX + 0x14]         ; 0055e335
    FXCH                                ; 0055e338
    FSTP float ptr [EBP + 0xfffffec2]   ; 0055e33a
    FXCH                                ; 0055e340
    FSTP float ptr [EBP + 0xfffffec6]   ; 0055e342
    FSTP float ptr [EBP + 0xfffffeca]   ; 0055e348
    MOVSD ES:EDI,ESI                    ; 0055e34e
    MOVSD ES:EDI,ESI                    ; 0055e34f
    MOVSD ES:EDI,ESI                    ; 0055e350
    FLD float ptr [0x005f1605]          ; 0055e351 | DAT_005f1605
    FLD float ptr [EBP + 0x12]          ; 0055e357
    FMUL ST1                            ; 0055e35a
    FLD float ptr [EBP + 0x16]          ; 0055e35c
    FMUL ST2                            ; 0055e35f
    ADD ESP,0x4                         ; 0055e361
    LEA EAX,[EBP + 0xfffffef2]          ; 0055e364
    FLD float ptr [EBP + 0x1a]          ; 0055e36a
    FMULP ST3                           ; 0055e36d
    PUSH EAX                            ; 0055e36f
    LEA EDI,[EBP + 0xfffffef2]          ; 0055e370
    LEA ESI,[EBP + -0x1e]               ; 0055e376
    FXCH                                ; 0055e379
    FSTP float ptr [EBP + -0x1e]        ; 0055e37b
    FSTP float ptr [EBP + -0x1a]        ; 0055e37e
    FSTP float ptr [EBP + -0x16]        ; 0055e381
    MOVSD ES:EDI,ESI                    ; 0055e384
    MOVSD ES:EDI,ESI                    ; 0055e385
    MOVSD ES:EDI,ESI                    ; 0055e386
    PUSH EBX                            ; 0055e387
    LEA ESI,[EBP + 0xffffff5e]          ; 0055e388
    LEA EDI,[EBP + 0xffffff0a]          ; 0055e38e
    CALL core_actor.cpp_FUN_00408b40    ; 0055e394
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xffffff5e]          ; 0055e399
    LEA EDX,[EBP + 0xffffff0a]          ; 0055e39f
    LEA EAX,[EBP + 0xfffffe9e]          ; 0055e3a5
    ADD ESP,0x8                         ; 0055e3ab
    MOVSD ES:EDI,ESI                    ; 0055e3ae
    MOVSD ES:EDI,ESI                    ; 0055e3af
    MOVSD ES:EDI,ESI                    ; 0055e3b0
    CMP EAX,EDX                         ; 0055e3b1
    JZ 0x0055e3d9                       ; 0055e3b3
        ;   XREF to: 0055e3d9 (CONDITIONAL_JUMP)  ; LAB_0055e3d9
    MOV EAX,dword ptr [EBP + 0xffffff0a] ; 0055e3b5
    MOV dword ptr [EBP + 0xfffffe9e],EAX ; 0055e3bb
    MOV EAX,dword ptr [EBP + 0xffffff0e] ; 0055e3c1
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 0055e3c7
    MOV EAX,dword ptr [EBP + 0xffffff12] ; 0055e3cd
    MOV dword ptr [EBP + 0xfffffea6],EAX ; 0055e3d3
    LEA EBX,[EBP + 0xfffffe86]          ; 0055e3d9
        ;   Label: LAB_0055e3d9
    LEA EAX,[EBP + 0xfffffe9e]          ; 0055e3df
    FLD float ptr [EAX]                 ; 0055e3e5
    FMUL float ptr [0x00605170]         ; 0055e3e7 | DAT_00605170
    FISTP dword ptr [EBX]               ; 0055e3ed
    FLD float ptr [EAX + 0x4]           ; 0055e3ef
    FMUL float ptr [0x00605170]         ; 0055e3f2 | DAT_00605170
    FISTP dword ptr [EBX + 0x4]         ; 0055e3f8
    FLD float ptr [EAX + 0x8]           ; 0055e3fb
    FMUL float ptr [0x00605170]         ; 0055e3fe | DAT_00605170
    FISTP dword ptr [EBX + 0x8]         ; 0055e404
    PUSH 0x0                            ; 0055e407
    LEA EAX,[EBP + 0xfffffe86]          ; 0055e409
    PUSH EAX                            ; 0055e40f
    MOV EAX,[0x00622c18]                ; 0055e410 | g_CDemonSetPtr
    PUSH EAX                            ; 0055e415 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490 ; 0055e416
        ;   XREF to: 00552490 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055e41b
    MOV ECX,dword ptr [EDX + 0xc30c]    ; 0055e421
    ADD ESP,0xc                         ; 0055e427
    TEST ECX,ECX                        ; 0055e42a
    JZ 0x0055df54                       ; 0055e42c
        ;   XREF to: 0055df54 (CONDITIONAL_JUMP)  ; LAB_0055df54
    FLD float ptr [0x006051a0]          ; 0055e432 | DAT_006051a0
    FMUL double ptr [0x005f163d]        ; 0055e438 | DAT_005f163d
    MOV dword ptr [EBP + 0x76],EAX      ; 0055e43e
    FILD dword ptr [EBP + 0x76]         ; 0055e441
    FCOMPP                              ; 0055e444
    FNSTSW AX                           ; 0055e446
    SAHF                                ; 0055e448
    JC 0x0055df54                       ; 0055e449
        ;   XREF to: 0055df54 (CONDITIONAL_JUMP)  ; LAB_0055df54
    PUSH 0x1                            ; 0055e44f
    PUSH 0x4                            ; 0055e451
    PUSH 0x0                            ; 0055e453
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055e455
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055e45a
    PUSH EAX                            ; 0055e45d
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e45e
    ADD EAX,0x158                       ; 0055e464
    PUSH EAX                            ; 0055e469
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055e46a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055e46f
    PUSH 0x5f15dc                       ; 0055e472 | DAT_005f15dc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055e477
    PUSH EBX                            ; 0055e47d
    CALL core_charactr.cpp_FUN_00435380 ; 0055e47e
        ;   XREF to: 00435380 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435380()
    ADD ESP,0x8                         ; 0055e483
    MOV dword ptr [EBX + 0xc2e8],EAX    ; 0055e486
    TEST EAX,EAX                        ; 0055e48c
    JNZ 0x0055f3a0                      ; 0055e48e
        ;   XREF to: 0055f3a0 (CONDITIONAL_JUMP)  ; LAB_0055f3a0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e494
        ;   Label: LAB_0055e494
    FLD float ptr [EAX + 0xc2f4]        ; 0055e49a
    FADD float ptr [0x005f1645]         ; 0055e4a0 | DAT_005f1645
    FSTP float ptr [EAX + 0xc2f4]       ; 0055e4a6
    LEA ESP,[EBP + 0x7a]                ; 0055e4ac
    POP EBP                             ; 0055e4af
    POP EDI                             ; 0055e4b0
    POP ESI                             ; 0055e4b1
    POP EBX                             ; 0055e4b2
    RET                                 ; 0055e4b3
    PUSH 0x1                            ; 0055e4b4
        ;   Label: LAB_0055e4b4
    PUSH 0x0                            ; 0055e4b6
    PUSH ESI                            ; 0055e4b8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055e4b9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055e4be
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0055e4c1
    PUSH EDI                            ; 0055e4c7
    PUSH 0x5f158d                       ; 0055e4c8 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x00611100]                ; 0055e4cd | g_CConsolePtr
    PUSH EAX                            ; 0055e4d2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0055e4d3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x0055e030                      ; 0055e4d8
        ;   XREF to: 0055e030 (UNCONDITIONAL_JUMP)  ; LAB_0055e030
    PUSH 0x1                            ; 0055e4dd
        ;   Label: LAB_0055e4dd
    PUSH 0xb                            ; 0055e4df
    PUSH ESI                            ; 0055e4e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055e4e2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055e4e7
    PUSH 0x3f000000                     ; 0055e4ea
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0055e4ef
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0055e4f4
    TEST EAX,EAX                        ; 0055e4f7
    JZ 0x0055e033                       ; 0055e4f9
        ;   XREF to: 0055e033 (CONDITIONAL_JUMP)  ; LAB_0055e033
    PUSH 0x3f000000                     ; 0055e4ff
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0055e504
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0055e509
    TEST EAX,EAX                        ; 0055e50c
    JZ 0x0055e56d                       ; 0055e50e
        ;   XREF to: 0055e56d (CONDITIONAL_JUMP)  ; LAB_0055e56d
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e510
    MOV EAX,dword ptr [EAX + 0xc27c]    ; 0055e516
    PUSH EAX                            ; 0055e51c
        ;   Label: LAB_0055e51c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e51d
    ADD EAX,0x158                       ; 0055e523
    PUSH EAX                            ; 0055e528
    LEA ESI,[EBP + 0xffffff2e]          ; 0055e529
    LEA EDI,[EBP + 0xfffffe6e]          ; 0055e52f
    CALL core_skeleton.cpp_FUN_00569040 ; 0055e535
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[EBP + 0xffffff2e]          ; 0055e53a
    ADD ESP,0x8                         ; 0055e540
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055e543
    LEA EAX,[EBP + 0xfffffe6e]          ; 0055e549
    PUSH 0x3dcccccd                     ; 0055e54f
    MOVSD ES:EDI,ESI                    ; 0055e554
    MOVSD ES:EDI,ESI                    ; 0055e555
    MOVSD ES:EDI,ESI                    ; 0055e556
    PUSH EAX                            ; 0055e557
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0055e558
    MOV EDX,dword ptr [EDX + 0x154]     ; 0055e55e
    PUSH ECX                            ; 0055e564
    CALL dword ptr [EDX + 0x24]         ; 0055e565
    JMP 0x0055e030                      ; 0055e568
        ;   XREF to: 0055e030 (UNCONDITIONAL_JUMP)  ; LAB_0055e030
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e56d
        ;   Label: LAB_0055e56d
    MOV EAX,dword ptr [EAX + 0xc280]    ; 0055e573
    JMP 0x0055e51c                      ; 0055e579
        ;   XREF to: 0055e51c (UNCONDITIONAL_JUMP)  ; LAB_0055e51c
    JBE 0x0055e4dd                      ; 0055e57b
        ;   XREF to: 0055e4dd (CONDITIONAL_JUMP)  ; LAB_0055e4dd
        ;   Label: LAB_0055e57b
    CMP EAX,0x3                         ; 0055e581
    JZ 0x0055e4b4                       ; 0055e584
        ;   XREF to: 0055e4b4 (CONDITIONAL_JUMP)  ; LAB_0055e4b4
    PUSH 0x1                            ; 0055e58a
        ;   Label: LAB_0055e58a
    PUSH 0x4                            ; 0055e58c
    PUSH 0x0                            ; 0055e58e
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055e590
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055e595
    PUSH EAX                            ; 0055e598
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e599
    ADD EAX,0x158                       ; 0055e59f
    PUSH EAX                            ; 0055e5a4
    JMP 0x0055e02b                      ; 0055e5a5
        ;   XREF to: 0055e02b (UNCONDITIONAL_JUMP)  ; LAB_0055e02b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e5aa
        ;   Label: caseD_6
    CMP dword ptr [EAX + 0xc2d4],0x1    ; 0055e5b0
    JNZ 0x0055e837                      ; 0055e5b7
        ;   XREF to: 0055e837 (CONDITIONAL_JUMP)  ; LAB_0055e837
    LEA EAX,[EBP + 0xfffffdba]          ; 0055e5bd
    PUSH EAX                            ; 0055e5c3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0055e5c4
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0055e5c9
    PUSH 0x41700000                     ; 0055e5cc
    PUSH 0x40e00000                     ; 0055e5d1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0055e5d6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055e5db
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e5de
    FLD float ptr [EBP + 0x76]          ; 0055e5e4
    FMUL float ptr [EAX + 0xc310]       ; 0055e5e7
    MOV EDI,0x6d                        ; 0055e5ed
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055e5f2
    ADD ESP,0x8                         ; 0055e5f8
    FSTP float ptr [EBP + 0xfffffdbe]   ; 0055e5fb
    MOV dword ptr [EBP + 0xfffffdee],EAX ; 0055e601
    MOV dword ptr [EBP + 0xfffffdf2],EAX ; 0055e607
    MOV dword ptr [EBP + 0xfffffdea],EDI ; 0055e60d
    LEA EAX,[EBP + 0xfffffdba]          ; 0055e613
    MOV EDX,dword ptr [EDX + 0xc274]    ; 0055e619
    PUSH EAX                            ; 0055e61f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055e620
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055e627
    SUB EAX,EDX                         ; 0055e62d
    ADD EBX,0xfd8                       ; 0055e62f
    SHL EAX,0x4                         ; 0055e635
    ADD EAX,EBX                         ; 0055e638
    PUSH 0x3f800000                     ; 0055e63a
    PUSH EAX                            ; 0055e63f
    PUSH 0x2c8af28                      ; 0055e640 | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffece]          ; 0055e645
    LEA EDI,[EBP + 0x6]                 ; 0055e64b
    CALL core_xform.cpp_FUN_005b5080    ; 0055e64e
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0055e653
    LEA EAX,[EBP + 0x6]                 ; 0055e656
    LEA ESI,[EBP + 0xfffffece]          ; 0055e659
    PUSH EAX                            ; 0055e65f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e660
    MOVSD ES:EDI,ESI                    ; 0055e666
    MOVSD ES:EDI,ESI                    ; 0055e667
    MOVSD ES:EDI,ESI                    ; 0055e668
    PUSH EAX                            ; 0055e669
    LEA ESI,[EBP + 0xffffff46]          ; 0055e66a
    CALL core_actor.cpp_FUN_00408b40    ; 0055e670
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0055e675
    LEA EAX,[EBP + 0xfffffeda]          ; 0055e678
    LEA EDI,[EBP + 0xfffffeda]          ; 0055e67e
    PUSH EAX                            ; 0055e684
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055e685
    LEA ESI,[EBP + 0xffffff46]          ; 0055e68b
    PUSH EDX                            ; 0055e691
    MOVSD ES:EDI,ESI                    ; 0055e692
    MOVSD ES:EDI,ESI                    ; 0055e693
    MOVSD ES:EDI,ESI                    ; 0055e694
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0055e695
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0055e69a
    PUSH 0x41700000                     ; 0055e69d
    PUSH 0x40e00000                     ; 0055e6a2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0055e6a7
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055e6ac
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e6af
    FLD float ptr [EBP + 0x76]          ; 0055e6b5
    FMUL float ptr [EAX + 0xc310]       ; 0055e6b8
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055e6be
    ADD ESP,0x8                         ; 0055e6c4
    FSTP float ptr [EBP + 0xfffffdbe]   ; 0055e6c7
    MOV dword ptr [EBP + 0xfffffdee],EAX ; 0055e6cd
    MOV dword ptr [EBP + 0xfffffdf2],EAX ; 0055e6d3
    LEA EAX,[EBP + 0xfffffdba]          ; 0055e6d9
    MOV EDX,dword ptr [EDX + 0xc270]    ; 0055e6df
    PUSH EAX                            ; 0055e6e5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055e6e6
    SUB EAX,EDX                         ; 0055e6ed
    SHL EAX,0x4                         ; 0055e6ef
    ADD EAX,EBX                         ; 0055e6f2
    PUSH 0x3f800000                     ; 0055e6f4
    PUSH EAX                            ; 0055e6f9
    PUSH 0x2c8af28                      ; 0055e6fa | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffe92]          ; 0055e6ff
    LEA EDI,[EBP + -0x42]               ; 0055e705
    CALL core_xform.cpp_FUN_005b5080    ; 0055e708
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + 0xfffffe92]          ; 0055e70d
    ADD ESP,0x8                         ; 0055e713
    LEA EAX,[EBP + -0x42]               ; 0055e716
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0055e719
    PUSH EAX                            ; 0055e71f
    MOVSD ES:EDI,ESI                    ; 0055e720
    MOVSD ES:EDI,ESI                    ; 0055e721
    MOVSD ES:EDI,ESI                    ; 0055e722
    PUSH ECX                            ; 0055e723
    LEA ESI,[EBP + 0xfffffeaa]          ; 0055e724
    LEA EDI,[EBP + -0x36]               ; 0055e72a
    CALL core_actor.cpp_FUN_00408b40    ; 0055e72d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffeaa]          ; 0055e732
    LEA EAX,[EBP + -0x36]               ; 0055e738
    ADD ESP,0x8                         ; 0055e73b
    MOVSD ES:EDI,ESI                    ; 0055e73e
    MOVSD ES:EDI,ESI                    ; 0055e73f
    MOVSD ES:EDI,ESI                    ; 0055e740
    PUSH EAX                            ; 0055e741
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055e742
    PUSH ESI                            ; 0055e748
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0055e749
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0055e74e
    PUSH 0x41700000                     ; 0055e751
    PUSH 0x40e00000                     ; 0055e756
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0055e75b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055e760
    FLD float ptr [EBP + 0x76]          ; 0055e763
    FMUL float ptr [ESI + 0xc310]       ; 0055e766
    ADD ESP,0x8                         ; 0055e76c
    FSTP float ptr [EBP + 0xfffffdbe]   ; 0055e76f
    MOV dword ptr [EBP + 0xfffffdee],ESI ; 0055e775
    MOV dword ptr [EBP + 0xfffffdf2],ESI ; 0055e77b
    LEA EAX,[EBP + 0xfffffdba]          ; 0055e781
    MOV EDX,dword ptr [ESI + 0xc278]    ; 0055e787
    PUSH EAX                            ; 0055e78d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055e78e
    SUB EAX,EDX                         ; 0055e795
    SHL EAX,0x4                         ; 0055e797
    ADD EAX,EBX                         ; 0055e79a
    PUSH 0x3f800000                     ; 0055e79c
    PUSH EAX                            ; 0055e7a1
    PUSH 0x2c8af28                      ; 0055e7a2 | DAT_02c8af28
    LEA ESI,[EBP + -0x5a]               ; 0055e7a7
    LEA EDI,[EBP + -0x66]               ; 0055e7aa
    CALL core_xform.cpp_FUN_005b5080    ; 0055e7ad
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + -0x5a]               ; 0055e7b2
    LEA EAX,[EBP + -0x66]               ; 0055e7b5
    ADD ESP,0x8                         ; 0055e7b8
    MOVSD ES:EDI,ESI                    ; 0055e7bb
    MOVSD ES:EDI,ESI                    ; 0055e7bc
    MOVSD ES:EDI,ESI                    ; 0055e7bd
    PUSH EAX                            ; 0055e7be
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0055e7bf
    PUSH EDI                            ; 0055e7c5
    LEA ESI,[EBP + 0xfffffee6]          ; 0055e7c6
    CALL core_actor.cpp_FUN_00408b40    ; 0055e7cc
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0055e7d1
    LEA EAX,[EBP + 0xfffffe56]          ; 0055e7d4
    LEA EDI,[EBP + 0xfffffe56]          ; 0055e7da
    PUSH EAX                            ; 0055e7e0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e7e1
    LEA ESI,[EBP + 0xfffffee6]          ; 0055e7e7
    PUSH EAX                            ; 0055e7ed
    MOVSD ES:EDI,ESI                    ; 0055e7ee
    MOVSD ES:EDI,ESI                    ; 0055e7ef
    MOVSD ES:EDI,ESI                    ; 0055e7f0
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0055e7f1
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e7f6
    MOV EDX,dword ptr [EAX + 0xc1e8]    ; 0055e7fc
    ADD ESP,0x10                        ; 0055e802
    TEST EDX,EDX                        ; 0055e805
    JZ 0x0055e837                       ; 0055e807
        ;   XREF to: 0055e837 (CONDITIONAL_JUMP)  ; LAB_0055e837
    MOV EAX,EDX                         ; 0055e809
    PUSH EAX                            ; 0055e80b
    MOV EDX,dword ptr [EDX + 0x154]     ; 0055e80c
    CALL dword ptr [EDX + 0x10c]        ; 0055e812
    ADD ESP,0x4                         ; 0055e818
    TEST EAX,EAX                        ; 0055e81b
    JZ 0x0055e837                       ; 0055e81d
        ;   XREF to: 0055e837 (CONDITIONAL_JUMP)  ; LAB_0055e837
    PUSH 0x1                            ; 0055e81f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e821
    PUSH 0xa                            ; 0055e827
    ADD EAX,0x158                       ; 0055e829
    PUSH EAX                            ; 0055e82e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055e82f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055e834
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0055e837
        ;   Label: LAB_0055e837
    PUSH ECX                            ; 0055e83d
    CALL core_shadow.cpp_FUN_0055f4a0   ; 0055e83e
        ;   XREF to: 0055f4a0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f4a0()
    ADD ESP,0x4                         ; 0055e843
    JMP 0x0055e060                      ; 0055e846
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    FLD float ptr [EBP + 0x62]          ; 0055e84b
        ;   Label: caseD_16
    FMUL double ptr [0x005f15ed]        ; 0055e84e | DAT_005f15ed
    FDIV float ptr [EBP + 0x6e]         ; 0055e854
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e857
    PUSH EAX                            ; 0055e85d
    MOV dword ptr [EAX + 0xc2fc],0x0    ; 0055e85e
    CALL crt_math.c_round_FUN_005c03a0  ; 0055e868
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EAX + 0xc304]      ; 0055e86d
    CALL core_shadow.cpp_FUN_0055f5e0   ; 0055e873
        ;   XREF to: 0055f5e0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f5e0()
    ADD ESP,0x4                         ; 0055e878
    JMP 0x0055e060                      ; 0055e87b
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055e880
        ;   Label: caseD_a
    PUSH EBX                            ; 0055e886
    CALL core_shadow.cpp_FUN_0055f590   ; 0055e887
        ;   XREF to: 0055f590 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f590()
    ADD ESP,0x4                         ; 0055e88c
    JMP 0x0055e060                      ; 0055e88f
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    FLD float ptr [EBP + 0x6e]          ; 0055e894
        ;   Label: caseD_f
    FLD ST0                             ; 0055e897
    FSUB float ptr [EBP + 0x62]         ; 0055e899
    FMUL double ptr [0x005f15ed]        ; 0055e89c | DAT_005f15ed
    FDIVRP                              ; 0055e8a2
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e8a4
    MOV EDX,dword ptr [0x0061d95c]      ; 0055e8aa | g_CGamePtr
    MOV dword ptr [EAX + 0xc2fc],0x0    ; 0055e8b0
    CALL crt_math.c_round_FUN_005c03a0  ; 0055e8ba
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EAX + 0xc304]      ; 0055e8bf
    FLD float ptr [EDX + 0x294]         ; 0055e8c5
    FMUL float ptr [0x005f15f5]         ; 0055e8cb | DAT_005f15f5
    FADD float ptr [EAX + 0xc2c8]       ; 0055e8d1
    FST float ptr [EAX + 0xc2c8]        ; 0055e8d7
    FLD ST0                             ; 0055e8dd
    FSIN                                ; 0055e8df
    FXCH                                ; 0055e8e1
    FCOS                                ; 0055e8e3
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055e8e5
    LEA EDI,[EBP + 0xfffffe3e]          ; 0055e8eb
    PUSH ESI                            ; 0055e8f1
    LEA ESI,[EBP + 0xfffffdf6]          ; 0055e8f2
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055e8f8
    FXCH                                ; 0055e8fe
    FSTP float ptr [EBP + 0x5e]         ; 0055e900
    MOV EAX,dword ptr [EAX + 0x154]     ; 0055e903
    FSTP float ptr [EBP + 0x72]         ; 0055e909
    CALL dword ptr [EAX + 0x1c]         ; 0055e90c
    MOV ECX,0x6                         ; 0055e90f
    LEA ESI,[EBP + 0xfffffdf6]          ; 0055e914
    MOVSD.REP ES:EDI,ESI                ; 0055e91a
    FLD float ptr [EBP + 0xfffffe52]    ; 0055e91c
    FLD float ptr [EBP + 0xfffffe4a]    ; 0055e922
    FSUB float ptr [EBP + 0xfffffe3e]   ; 0055e928
    FXCH                                ; 0055e92e
    FSUB float ptr [EBP + 0xfffffe46]   ; 0055e930
    FXCH                                ; 0055e936
    FMUL float ptr [EBP + 0x5e]         ; 0055e938
    FXCH                                ; 0055e93b
    FMUL float ptr [EBP + 0x72]         ; 0055e93d
    FXCH                                ; 0055e940
    FLD double ptr [0x005f15fd]         ; 0055e942 | DAT_005f15fd
    FXCH                                ; 0055e948
    FMUL ST1                            ; 0055e94a
    FLD float ptr [EBP + 0xfffffe3e]    ; 0055e94c
    FLD float ptr [EBP + 0xfffffe42]    ; 0055e952
    FLD float ptr [EBP + 0xfffffe46]    ; 0055e958
    LEA EDI,[EBP + -0x6]                ; 0055e95e
    LEA ESI,[EBP + 0xfffffefe]          ; 0055e961
    FXCH ST2                            ; 0055e967
    FADD float ptr [EBP + 0xfffffe4a]   ; 0055e969
    FXCH                                ; 0055e96f
    FADD float ptr [EBP + 0xfffffe4e]   ; 0055e971
    FXCH ST2                            ; 0055e977
    FADD float ptr [EBP + 0xfffffe52]   ; 0055e979
    FXCH                                ; 0055e97f
    FSTP float ptr [EBP + 0xfffffefe]   ; 0055e981
    FXCH                                ; 0055e987
    FSTP float ptr [EBP + 0xffffff02]   ; 0055e989
    FSTP float ptr [EBP + 0xffffff06]   ; 0055e98f
    MOVSD ES:EDI,ESI                    ; 0055e995
    MOVSD ES:EDI,ESI                    ; 0055e996
    MOVSD ES:EDI,ESI                    ; 0055e997
    FXCH ST2                            ; 0055e998
    FMULP                               ; 0055e99a
    FLD float ptr [0x005f1605]          ; 0055e99c | DAT_005f1605
    FLD float ptr [EBP + -0x6]          ; 0055e9a2
    FMUL ST1                            ; 0055e9a5
    FLD float ptr [EBP + -0x2]          ; 0055e9a7
    FMUL ST2                            ; 0055e9aa
    FLD float ptr [EBP + 0x2]           ; 0055e9ac
    FMULP ST3                           ; 0055e9af
    LEA EDX,[EBP + 0xffffff76]          ; 0055e9b1
    ADD ESP,0x4                         ; 0055e9b7
    LEA EDI,[EBP + 0xffffff22]          ; 0055e9ba
    LEA ESI,[EBP + 0xffffff6a]          ; 0055e9c0
    FXCH ST4                            ; 0055e9c6
    FSTP float ptr [EBP + 0xffffff76]   ; 0055e9c8
    FXCH ST2                            ; 0055e9ce
    FSTP float ptr [EBP + 0xffffff7e]   ; 0055e9d0
    FLD float ptr [EBP + 0xffffff76]    ; 0055e9d6
    FXCH ST2                            ; 0055e9dc
    FSTP float ptr [EBP + 0xffffff6a]   ; 0055e9de
    FXCH ST2                            ; 0055e9e4
    FSTP float ptr [EBP + 0xffffff6e]   ; 0055e9e6
    FXCH                                ; 0055e9ec
    FSTP float ptr [EBP + 0xffffff72]   ; 0055e9ee
    MOVSD ES:EDI,ESI                    ; 0055e9f4
    MOVSD ES:EDI,ESI                    ; 0055e9f5
    MOVSD ES:EDI,ESI                    ; 0055e9f6
    FLD float ptr [EBP + 0xffffff7e]    ; 0055e9f7
    MOV EAX,dword ptr [EBP + 0xffffff26] ; 0055e9fd
    FLD float ptr [EBP + 0xffffff26]    ; 0055ea03
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 0055ea09
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ea0f
    LEA EDI,[EBP + -0x4e]               ; 0055ea15
    LEA ESI,[EBP + 0xffffff52]          ; 0055ea18
    FXCH ST2                            ; 0055ea1e
    FADD float ptr [EAX + 0x20]         ; 0055ea20
    FXCH ST2                            ; 0055ea23
    FADD float ptr [EAX + 0x24]         ; 0055ea25
    FXCH                                ; 0055ea28
    FADD float ptr [EAX + 0x28]         ; 0055ea2a
    FXCH ST2                            ; 0055ea2d
    FSTP float ptr [EBP + 0xffffff52]   ; 0055ea2f
    FSTP float ptr [EBP + 0xffffff56]   ; 0055ea35
    FSTP float ptr [EBP + 0xffffff5a]   ; 0055ea3b
    LEA EAX,[EBP + -0x4e]               ; 0055ea41
    MOVSD ES:EDI,ESI                    ; 0055ea44
    MOVSD ES:EDI,ESI                    ; 0055ea45
    MOVSD ES:EDI,ESI                    ; 0055ea46
    CMP EDX,EAX                         ; 0055ea47
    JZ 0x0055ea66                       ; 0055ea49
        ;   XREF to: 0055ea66 (CONDITIONAL_JUMP)  ; LAB_0055ea66
    MOV EAX,dword ptr [EBP + -0x4e]     ; 0055ea4b
    MOV dword ptr [EBP + 0xffffff76],EAX ; 0055ea4e
    MOV EAX,dword ptr [EBP + -0x4a]     ; 0055ea54
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 0055ea57
    MOV EAX,dword ptr [EBP + -0x46]     ; 0055ea5d
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 0055ea60
    LEA EAX,[EBP + 0xffffff76]          ; 0055ea66
        ;   Label: LAB_0055ea66
    PUSH EAX                            ; 0055ea6c
    PUSH 0x269cbb0                      ; 0055ea6d
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970 ; 0055ea72
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0055ea77
    MOV EDI,0xea60                      ; 0055ea7a
    PUSH 0x40c00000                     ; 0055ea7f
    MOV AH,0x3a                         ; 0055ea84
    PUSH 0x269cbb0                      ; 0055ea86
    MOV dword ptr [0x0269cbec],EDI      ; 0055ea8b | DAT_0269cbec
    MOV byte ptr [0x0269cbcc],AH        ; 0055ea91 | DAT_0269cbcc
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0 ; 0055ea97
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0055ea9c
    PUSH 0x269cbb0                      ; 0055ea9f
    MOV EDX,dword ptr [0x00622c18]      ; 0055eaa4 | g_CDemonSetPtr
    XOR EAX,EAX                         ; 0055eaaa
    PUSH EDX                            ; 0055eaac | g_CDemonSetInstance
    MOV [0x0269cbd0],EAX                ; 0055eaad | DAT_0269cbd0
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960 ; 0055eab2
        ;   XREF to: 00551960 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet * this_ptr, CDemonGlobe * globe)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055eab7
    ADD ESP,0x8                         ; 0055eabd
    LEA EDI,[EAX + 0x158]               ; 0055eac0
    PUSH EDI                            ; 0055eac6
    MOV dword ptr [EAX + 0xc308],0x1    ; 0055eac7
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0055ead1
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0055ead6
    PUSH EDI                            ; 0055ead9
    MOV EBX,EAX                         ; 0055eada
    MOV ESI,EAX                         ; 0055eadc
    CALL core_motion.cpp_FUN_00525020   ; 0055eade
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055eae3
    FLD float ptr [EBP + 0x76]          ; 0055eae6
    FMUL float ptr [0x005f1609]         ; 0055eae9 | DAT_005f1609
    FLD double ptr [0x005f160d]         ; 0055eaef | DAT_005f160d
    FLD ST0                             ; 0055eaf5
    FXCH ST2                            ; 0055eaf7
    FLD ST2                             ; 0055eaf9
    FXCH                                ; 0055eafb
    CALL crt_math.c_pow_FUN_005c18f4    ; 0055eafd
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005c18f4()
    FSTP ST2                            ; 0055eb02
    FLD double ptr [0x005f1615]         ; 0055eb04 | DAT_005f1615
    CALL crt_math.c_pow_FUN_005c18f4    ; 0055eb0a
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005c18f4()
    FDIVP                               ; 0055eb0f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055eb11
    FLD1                                ; 0055eb17
    FADDP                               ; 0055eb19
    ADD ESP,0x4                         ; 0055eb1b
    FSTP float ptr [EAX + 0xc300]       ; 0055eb1e
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0055eb24
    XOR EAX,EAX                         ; 0055eb2a
    TEST ECX,ECX                        ; 0055eb2c
    JLE 0x0055e060                      ; 0055eb2e
        ;   XREF to: 0055e060 (CONDITIONAL_JUMP)  ; LAB_0055e060
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055eb34
    MOV EDX,EDI                         ; 0055eb3a
    FLD float ptr [EBX + 0xc300]        ; 0055eb3c
        ;   Label: LAB_0055eb3c
    INC EAX                             ; 0055eb42
    FSTP float ptr [EDX + 0x514]        ; 0055eb43
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0055eb49
    ADD EDX,0x4                         ; 0055eb4f
    CMP EAX,EDI                         ; 0055eb52
    JL 0x0055eb3c                       ; 0055eb54
        ;   XREF to: 0055eb3c (CONDITIONAL_JUMP)  ; LAB_0055eb3c
    JMP 0x0055e060                      ; 0055eb56
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055eb5b
        ;   Label: caseD_11
    MOV dword ptr [EAX + 0xc304],0x0    ; 0055eb61
    MOV dword ptr [EAX + 0xc300],0x3f800000 ; 0055eb6b
    MOV dword ptr [EAX + 0x70],0x2      ; 0055eb75
    LEA ESP,[EBP + 0x7a]                ; 0055eb7c
    POP EBP                             ; 0055eb7f
    POP EDI                             ; 0055eb80
    POP ESI                             ; 0055eb81
    POP EBX                             ; 0055eb82
    RET                                 ; 0055eb83
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055eb84
        ;   Label: caseD_12
    MOV dword ptr [EAX + 0xc2fc],0x1    ; 0055eb8a
    MOV dword ptr [EAX + 0xc304],0xfde8 ; 0055eb94
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055eb9e
        ;   Label: caseD_0
    PUSH dword ptr [EBP + 0x92]         ; 0055eba4
    PUSH EAX                            ; 0055ebaa
    MOV dword ptr [EAX + 0xc2fc],0x1    ; 0055ebab
    MOV ESI,EAX                         ; 0055ebb5
    MOV dword ptr [EAX + 0xc304],0xfde8 ; 0055ebb7
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0055ebc1
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0055ebc6
    ADD ESI,0x158                       ; 0055ebc9
    TEST EAX,EAX                        ; 0055ebcf
    JNZ 0x0055ecd5                      ; 0055ebd1
        ;   XREF to: 0055ecd5 (CONDITIONAL_JUMP)  ; LAB_0055ecd5
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ebd7
    CMP dword ptr [EAX + 0xc2e8],0x0    ; 0055ebdd
    JZ 0x0055ec1f                       ; 0055ebe4
        ;   XREF to: 0055ec1f (CONDITIONAL_JUMP)  ; LAB_0055ec1f
    FLD float ptr [EAX + 0xc2f0]        ; 0055ebe6
    FSUB float ptr [EBP + 0x92]         ; 0055ebec
    FST float ptr [EAX + 0xc2f0]        ; 0055ebf2
    FLDZ                                ; 0055ebf8
    FCOMPP                              ; 0055ebfa
    FNSTSW AX                           ; 0055ebfc
    SAHF                                ; 0055ebfe
    JC 0x0055ed20                       ; 0055ebff
        ;   XREF to: 0055ed20 (CONDITIONAL_JUMP)  ; LAB_0055ed20
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ec05
    MOV dword ptr [EAX + 0xc2e8],0x0    ; 0055ec0b
    MOV dword ptr [EAX + 0xc2f0],0x0    ; 0055ec15
    PUSH dword ptr [EBP + 0x92]         ; 0055ec1f
        ;   Label: LAB_0055ec1f
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055ec25
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ec2b
    PUSH ESI                            ; 0055ec31
    MOV EAX,dword ptr [EAX + 0x154]     ; 0055ec32
    CALL dword ptr [EAX + 0x144]        ; 0055ec38
    MOV EDI,dword ptr [ESI + 0xc1e8]    ; 0055ec3e
    ADD ESP,0x8                         ; 0055ec44
    TEST EDI,EDI                        ; 0055ec47
    JZ 0x0055e060                       ; 0055ec49
        ;   XREF to: 0055e060 (CONDITIONAL_JUMP)  ; LAB_0055e060
    JZ 0x0055ed8b                       ; 0055ec4f
        ;   XREF to: 0055ed8b (CONDITIONAL_JUMP)  ; LAB_0055ed8b
    CMP dword ptr [ESI + 0xc2b8],0x0    ; 0055ec55
    JZ 0x0055ed8b                       ; 0055ec5c
        ;   XREF to: 0055ed8b (CONDITIONAL_JUMP)  ; LAB_0055ed8b
    MOV EAX,EDI                         ; 0055ec62
    MOV EDX,ESI                         ; 0055ec64
    FLD float ptr [EAX + 0x20]          ; 0055ec66
    FLD float ptr [EAX + 0x24]          ; 0055ec69
    FLD float ptr [EAX + 0x28]          ; 0055ec6c
    LEA EDI,[EBP + -0x2a]               ; 0055ec6f
    FXCH ST2                            ; 0055ec72
    FSUB float ptr [ESI + 0x20]         ; 0055ec74
    FXCH                                ; 0055ec77
    FSUB float ptr [ESI + 0x24]         ; 0055ec79
    FXCH ST2                            ; 0055ec7c
    FSUB float ptr [ESI + 0x28]         ; 0055ec7e
    FXCH                                ; 0055ec81
    FSTP float ptr [EBP + -0x7e]        ; 0055ec83
    FXCH                                ; 0055ec86
    FSTP float ptr [EBP + -0x7a]        ; 0055ec88
    LEA ESI,[EBP + -0x7e]               ; 0055ec8b
    FSTP float ptr [EBP + -0x76]        ; 0055ec8e
    MOVSD ES:EDI,ESI                    ; 0055ec91
    MOVSD ES:EDI,ESI                    ; 0055ec92
    MOVSD ES:EDI,ESI                    ; 0055ec93
    FLD float ptr [EBP + -0x26]         ; 0055ec94
    FMUL ST0                            ; 0055ec97
    FLD float ptr [EBP + -0x2a]         ; 0055ec99
    FMUL ST0                            ; 0055ec9c
    FADDP                               ; 0055ec9e
    FLD float ptr [EBP + -0x22]         ; 0055eca0
    FMUL ST0                            ; 0055eca3
    FADDP                               ; 0055eca5
    FSQRT                               ; 0055eca7
    FSTP float ptr [EBP + 0x66]         ; 0055eca9
    MOV EAX,EDX                         ; 0055ecac
    FLD float ptr [EBP + 0x66]          ; 0055ecae
    FCOMP float ptr [EAX + 0xc1e0]      ; 0055ecb1
    FNSTSW AX                           ; 0055ecb7
    SAHF                                ; 0055ecb9
    JBE 0x0055ed79                      ; 0055ecba
        ;   XREF to: 0055ed79 (CONDITIONAL_JUMP)  ; LAB_0055ed79
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ecc0
        ;   Label: LAB_0055ecc0
    MOV dword ptr [EAX + 0xc1e8],0x0    ; 0055ecc6
    JMP 0x0055e060                      ; 0055ecd0
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x1                            ; 0055ecd5
        ;   Label: LAB_0055ecd5
    PUSH 0x5                            ; 0055ecd7
    PUSH ESI                            ; 0055ecd9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055ecda
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055ecdf
    JMP 0x0055e060                      ; 0055ece2
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x1                            ; 0055ece7
        ;   Label: LAB_0055ece7
    PUSH 0x5                            ; 0055ece9
    PUSH ESI                            ; 0055eceb
        ;   Label: LAB_0055eceb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055ecec
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055ecf1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ecf4
    CMP dword ptr [EAX + 0xc2e8],0x0    ; 0055ecfa
    JNZ 0x0055e060                      ; 0055ed01
        ;   XREF to: 0055e060 (CONDITIONAL_JUMP)  ; LAB_0055e060
    JMP 0x0055ec1f                      ; 0055ed07
        ;   XREF to: 0055ec1f (UNCONDITIONAL_JUMP)  ; LAB_0055ec1f
    PUSH 0x1                            ; 0055ed0c
        ;   Label: LAB_0055ed0c
    PUSH 0x3                            ; 0055ed0e
    PUSH 0x0                            ; 0055ed10
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055ed12
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055ed17
    ADD EAX,0xb                         ; 0055ed1a
    PUSH EAX                            ; 0055ed1d
    JMP 0x0055eceb                      ; 0055ed1e
        ;   XREF to: 0055eceb (UNCONDITIONAL_JUMP)  ; LAB_0055eceb
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ed20
        ;   Label: LAB_0055ed20
    ADD EAX,0xc2ec                      ; 0055ed26
    PUSH EAX                            ; 0055ed2b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ed2c
    PUSH 0x3f800000                     ; 0055ed32
    MOV EDX,dword ptr [EAX + 0xc2e8]    ; 0055ed37
    PUSH 0x3f800000                     ; 0055ed3d
    PUSH EDX                            ; 0055ed42
    PUSH EAX                            ; 0055ed43
    CALL core_charactr.cpp_FUN_00431cc0 ; 0055ed44
        ;   XREF to: 00431cc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431cc0()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ed49
    MOV EAX,dword ptr [EAX + 0xc2ec]    ; 0055ed4f
    ADD ESP,0x14                        ; 0055ed55
    CMP EAX,0x1                         ; 0055ed58
    JC 0x0055ed64                       ; 0055ed5b
        ;   XREF to: 0055ed64 (CONDITIONAL_JUMP)  ; LAB_0055ed64
    JBE 0x0055ece7                      ; 0055ed5d
        ;   XREF to: 0055ece7 (CONDITIONAL_JUMP)  ; LAB_0055ece7
    CMP EAX,0x2                         ; 0055ed5f
    JZ 0x0055ed0c                       ; 0055ed62
        ;   XREF to: 0055ed0c (CONDITIONAL_JUMP)  ; LAB_0055ed0c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ed64
        ;   Label: LAB_0055ed64
    MOV dword ptr [EAX + 0xc2e8],0x0    ; 0055ed6a
    JMP 0x0055ec1f                      ; 0055ed74
        ;   XREF to: 0055ec1f (UNCONDITIONAL_JUMP)  ; LAB_0055ec1f
    FLD float ptr [EBP + 0x66]          ; 0055ed79
        ;   Label: LAB_0055ed79
    FCOMP double ptr [0x005f1635]       ; 0055ed7c | DAT_005f1635
    FNSTSW AX                           ; 0055ed82
    SAHF                                ; 0055ed84
    JA 0x0055ecc0                       ; 0055ed85
        ;   XREF to: 0055ecc0 (CONDITIONAL_JUMP)  ; LAB_0055ecc0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ed8b
        ;   Label: LAB_0055ed8b
    CMP dword ptr [EAX + 0xc1e8],0x0    ; 0055ed91
    JZ 0x0055edd7                       ; 0055ed98
        ;   XREF to: 0055edd7 (CONDITIONAL_JUMP)  ; LAB_0055edd7
    PUSH 0x3ecccccd                     ; 0055ed9a
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0055ed9f
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0055eda4
    TEST EAX,EAX                        ; 0055eda7
    JZ 0x0055edba                       ; 0055eda9
        ;   XREF to: 0055edba (CONDITIONAL_JUMP)  ; LAB_0055edba
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055edab
    PUSH ESI                            ; 0055edb1
    CALL core_shadow.cpp_FUN_0055f450   ; 0055edb2
        ;   XREF to: 0055f450 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f450()
    ADD ESP,0x4                         ; 0055edb7
    PUSH 0x1                            ; 0055edba
        ;   Label: LAB_0055edba
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055edbc
    PUSH 0x5                            ; 0055edc2
    ADD EAX,0x158                       ; 0055edc4
    PUSH EAX                            ; 0055edc9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055edca
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055edcf
    JMP 0x0055e060                      ; 0055edd2
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    LEA EBX,[EAX + 0x158]               ; 0055edd7
        ;   Label: LAB_0055edd7
    PUSH EBX                            ; 0055eddd
    CALL core_motion.cpp_FUN_00525020   ; 0055edde
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055ede3
    ADD ESP,0x4                         ; 0055ede6
    FLD float ptr [EBP + 0x76]          ; 0055ede9
    FCOMP double ptr [0x005f1625]       ; 0055edec | DAT_005f1625
    FNSTSW AX                           ; 0055edf2
    SAHF                                ; 0055edf4
    JBE 0x0055e060                      ; 0055edf5
        ;   XREF to: 0055e060 (CONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x1                            ; 0055edfb
    PUSH 0x4                            ; 0055edfd
    PUSH 0x0                            ; 0055edff
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055ee01
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055ee06
    PUSH EAX                            ; 0055ee09
    PUSH EBX                            ; 0055ee0a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055ee0b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055ee10
    JMP 0x0055e060                      ; 0055ee13
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x3e4ccccd                     ; 0055ee18
        ;   Label: caseD_5
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0055ee1d
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0055ee22
    TEST EAX,EAX                        ; 0055ee25
    JNZ 0x0055f0d3                      ; 0055ee27
        ;   XREF to: 0055f0d3 (CONDITIONAL_JUMP)  ; LAB_0055f0d3
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ee2d
        ;   Label: LAB_0055ee2d
    CMP dword ptr [EAX + 0xc2e8],0x0    ; 0055ee33
    JZ 0x0055ee75                       ; 0055ee3a
        ;   XREF to: 0055ee75 (CONDITIONAL_JUMP)  ; LAB_0055ee75
    FLD float ptr [EAX + 0xc2f0]        ; 0055ee3c
    FSUB float ptr [EBP + 0x92]         ; 0055ee42
    FST float ptr [EAX + 0xc2f0]        ; 0055ee48
    FLDZ                                ; 0055ee4e
    FCOMPP                              ; 0055ee50
    FNSTSW AX                           ; 0055ee52
    SAHF                                ; 0055ee54
    JC 0x0055f1f6                       ; 0055ee55
        ;   XREF to: 0055f1f6 (CONDITIONAL_JUMP)  ; LAB_0055f1f6
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ee5b
    MOV dword ptr [EAX + 0xc2e8],0x0    ; 0055ee61
    MOV dword ptr [EAX + 0xc2f0],0x0    ; 0055ee6b
    PUSH dword ptr [EBP + 0x92]         ; 0055ee75
        ;   Label: LAB_0055ee75
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055ee7b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ee81
    PUSH ESI                            ; 0055ee87
    MOV EAX,dword ptr [EAX + 0x154]     ; 0055ee88
    CALL dword ptr [EAX + 0x144]        ; 0055ee8e
    ADD ESP,0x8                         ; 0055ee94
    MOV EDI,dword ptr [ESI + 0xc1e8]    ; 0055ee97
    LEA EBX,[ESI + 0x158]               ; 0055ee9d
    TEST EDI,EDI                        ; 0055eea3
    JZ 0x0055f289                       ; 0055eea5
        ;   XREF to: 0055f289 (CONDITIONAL_JUMP)  ; LAB_0055f289
    MOV EDX,EDI                         ; 0055eeab
    FLD float ptr [EDX + 0x20]          ; 0055eead
    FLD float ptr [EDX + 0x24]          ; 0055eeb0
    FLD float ptr [EDX + 0x28]          ; 0055eeb3
    LEA EDI,[EBP + -0x72]               ; 0055eeb6
    FXCH ST2                            ; 0055eeb9
    FSUB float ptr [ESI + 0x20]         ; 0055eebb
    FXCH                                ; 0055eebe
    FSUB float ptr [ESI + 0x24]         ; 0055eec0
    FXCH ST2                            ; 0055eec3
    FSUB float ptr [ESI + 0x28]         ; 0055eec5
    FXCH                                ; 0055eec8
    FSTP float ptr [EBP + 0x42]         ; 0055eeca
    FXCH                                ; 0055eecd
    FSTP float ptr [EBP + 0x46]         ; 0055eecf
    LEA ESI,[EBP + 0x42]                ; 0055eed2
    FSTP float ptr [EBP + 0x4a]         ; 0055eed5
    MOVSD ES:EDI,ESI                    ; 0055eed8
    MOVSD ES:EDI,ESI                    ; 0055eed9
    MOVSD ES:EDI,ESI                    ; 0055eeda
    FLD float ptr [EBP + -0x6e]         ; 0055eedb
    FMUL ST0                            ; 0055eede
    FLD float ptr [EBP + -0x72]         ; 0055eee0
    FMUL ST0                            ; 0055eee3
    FADDP                               ; 0055eee5
    FLD float ptr [EBP + -0x6a]         ; 0055eee7
    FMUL ST0                            ; 0055eeea
    FADDP                               ; 0055eeec
    FSQRT                               ; 0055eeee
    FSTP float ptr [EBP + 0x6a]         ; 0055eef0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055eef3
    FLD float ptr [EBP + 0x6a]          ; 0055eef9
    FCOMP float ptr [EAX + 0xc1e0]      ; 0055eefc
    FNSTSW AX                           ; 0055ef02
    SAHF                                ; 0055ef04
    JA 0x0055f2a5                       ; 0055ef05
        ;   XREF to: 0055f2a5 (CONDITIONAL_JUMP)  ; LAB_0055f2a5
    FLD float ptr [0x0060518c]          ; 0055ef0b | DAT_0060518c
    FADD float ptr [0x005f162d]         ; 0055ef11 | DAT_005f162d
    FCOMP float ptr [EBP + 0x6a]        ; 0055ef17
    FNSTSW AX                           ; 0055ef1a
    SAHF                                ; 0055ef1c
    JNC 0x0055ef53                      ; 0055ef1d
        ;   XREF to: 0055ef53 (CONDITIONAL_JUMP)  ; LAB_0055ef53
    FLD1                                ; 0055ef1f
    FADD float ptr [0x0060518c]         ; 0055ef21 | DAT_0060518c
    FCOMP float ptr [EBP + 0x6a]        ; 0055ef27
    FNSTSW AX                           ; 0055ef2a
    SAHF                                ; 0055ef2c
    JBE 0x0055ef53                      ; 0055ef2d
        ;   XREF to: 0055ef53 (CONDITIONAL_JUMP)  ; LAB_0055ef53
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ef2f
    CMP dword ptr [EAX + 0xc2d4],0x1    ; 0055ef35
    JNZ 0x0055ef53                      ; 0055ef3c
        ;   XREF to: 0055ef53 (CONDITIONAL_JUMP)  ; LAB_0055ef53
    PUSH 0x3                            ; 0055ef3e
    PUSH 0x0                            ; 0055ef40
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055ef42
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055ef47
    CMP EAX,0x1                         ; 0055ef4a
    JNZ 0x0055f2d2                      ; 0055ef4d
        ;   XREF to: 0055f2d2 (CONDITIONAL_JUMP)  ; LAB_0055f2d2
    MOV EAX,[0x00605190]                ; 0055ef53 | DAT_00605190
        ;   Label: LAB_0055ef53
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055ef58
    MOV dword ptr [EBP + 0x5a],EAX      ; 0055ef5e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055ef61
    MOV EBX,dword ptr [EBX + 0xc1e8]    ; 0055ef67
    MOV dword ptr [EAX + 0x24a4],0x0    ; 0055ef6d
    PUSH 0x3e32b8c2                     ; 0055ef77
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 0055ef7c
    MOV dword ptr [EAX + 0x24a0],EDX    ; 0055ef82
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 0055ef88
    MOV dword ptr [EAX + 0x249c],EDX    ; 0055ef8e
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0055ef94
    PUSH 0x3f000000                     ; 0055ef97
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 0055ef9c
    LEA EAX,[EBP + 0xffffff16]          ; 0055efa2
    XOR ECX,ECX                         ; 0055efa8
    PUSH EAX                            ; 0055efaa
    MOV dword ptr [EBP + 0xffffff16],ECX ; 0055efab
    MOV dword ptr [EBP + 0xffffff1a],ECX ; 0055efb1
    PUSH EBX                            ; 0055efb7
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055efb8
    CALL dword ptr [EAX + 0xc4]         ; 0055efbe
    ADD ESP,0x4                         ; 0055efc4
    PUSH EAX                            ; 0055efc7
    ADD EBX,0x20                        ; 0055efc8
    PUSH EBX                            ; 0055efcb
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0055efcc
    PUSH EDI                            ; 0055efd2
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0055efd3
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0055efd8
    LEA ESI,[EDI + 0x158]               ; 0055efdb
    TEST EAX,EAX                        ; 0055efe1
    JL 0x0055f330                       ; 0055efe3
        ;   XREF to: 0055f330 (CONDITIONAL_JUMP)  ; LAB_0055f330
    JLE 0x0055f085                      ; 0055efe9
        ;   XREF to: 0055f085 (CONDITIONAL_JUMP)  ; LAB_0055f085
    FLD float ptr [EDI + 0xc1e4]        ; 0055efef
    FLDZ                                ; 0055eff5
    FCOMPP                              ; 0055eff7
    FNSTSW AX                           ; 0055eff9
    SAHF                                ; 0055effb
    JC 0x0055f085                       ; 0055effc
        ;   XREF to: 0055f085 (CONDITIONAL_JUMP)  ; LAB_0055f085
    MOV EDX,dword ptr [EDI + 0xc2d4]    ; 0055f002
    CMP EDX,0x1                         ; 0055f008
    JNZ 0x0055f361                      ; 0055f00b
        ;   XREF to: 0055f361 (CONDITIONAL_JUMP)  ; LAB_0055f361
    PUSH EDX                            ; 0055f011
    PUSH 0x6                            ; 0055f012
    PUSH ESI                            ; 0055f014
        ;   Label: LAB_0055f014
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055f015
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055f01a
    PUSH 0x5f15da                       ; 0055f01d | DAT_005f15da
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0055f022
    PUSH ECX                            ; 0055f028
    CALL core_charactr.cpp_FUN_00435380 ; 0055f029
        ;   XREF to: 00435380 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435380()
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055f02e
    ADD ESP,0x8                         ; 0055f034
    MOV dword ptr [EDX + 0xc2e8],EAX    ; 0055f037
    TEST EAX,EAX                        ; 0055f03d
    JZ 0x0055f065                       ; 0055f03f
        ;   XREF to: 0055f065 (CONDITIONAL_JUMP)  ; LAB_0055f065
    PUSH 0x41400000                     ; 0055f041
    PUSH 0x40800000                     ; 0055f046
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0055f04b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055f050
    ADD ESP,0x8                         ; 0055f053
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f056
    MOV EDX,dword ptr [EBP + 0x76]      ; 0055f05c
    MOV dword ptr [EAX + 0xc2f0],EDX    ; 0055f05f
    PUSH 0x3f4ccccd                     ; 0055f065
        ;   Label: LAB_0055f065
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0055f06a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0055f06f
    TEST EAX,EAX                        ; 0055f072
    JZ 0x0055f085                       ; 0055f074
        ;   XREF to: 0055f085 (CONDITIONAL_JUMP)  ; LAB_0055f085
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0055f076
    PUSH ESI                            ; 0055f07c
    CALL core_shadow.cpp_FUN_0055f4a0   ; 0055f07d
        ;   XREF to: 0055f4a0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f4a0()
    ADD ESP,0x4                         ; 0055f082
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f085
        ;   Label: LAB_0055f085
    FLD float ptr [EAX + 0xc298]        ; 0055f08b
    FSUB float ptr [EBP + 0x92]         ; 0055f091
    FST float ptr [EAX + 0xc298]        ; 0055f097
    FLDZ                                ; 0055f09d
    FCOMPP                              ; 0055f09f
    FNSTSW AX                           ; 0055f0a1
    SAHF                                ; 0055f0a3
    JBE 0x0055e060                      ; 0055f0a4
        ;   XREF to: 0055e060 (CONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x3f000000                     ; 0055f0aa
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0055f0af
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0055f0b4
    TEST EAX,EAX                        ; 0055f0b7
    JZ 0x0055e060                       ; 0055f0b9
        ;   XREF to: 0055e060 (CONDITIONAL_JUMP)  ; LAB_0055e060
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055f0bf
    PUSH EDX                            ; 0055f0c5
    CALL core_shadow.cpp_FUN_0055f450   ; 0055f0c6
        ;   XREF to: 0055f450 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f450()
    ADD ESP,0x4                         ; 0055f0cb
    JMP 0x0055e060                      ; 0055f0ce
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x3f000000                     ; 0055f0d3
        ;   Label: LAB_0055f0d3
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0055f0d8
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0055f0dd
    TEST EAX,EAX                        ; 0055f0e0
    JZ 0x0055f13e                       ; 0055f0e2
        ;   XREF to: 0055f13e (CONDITIONAL_JUMP)  ; LAB_0055f13e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f0e4
    MOV EAX,dword ptr [EAX + 0xc27c]    ; 0055f0ea
    PUSH EAX                            ; 0055f0f0
        ;   Label: LAB_0055f0f0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f0f1
    ADD EAX,0x158                       ; 0055f0f7
    PUSH EAX                            ; 0055f0fc
    LEA ESI,[EBP + 0x2a]                ; 0055f0fd
    LEA EDI,[EBP + 0xffffff3a]          ; 0055f100
    CALL core_skeleton.cpp_FUN_00569040 ; 0055f106
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[EBP + 0x2a]                ; 0055f10b
    ADD ESP,0x8                         ; 0055f10e
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055f111
    LEA EAX,[EBP + 0xffffff3a]          ; 0055f117
    PUSH 0x3dcccccd                     ; 0055f11d
    MOVSD ES:EDI,ESI                    ; 0055f122
    MOVSD ES:EDI,ESI                    ; 0055f123
    MOVSD ES:EDI,ESI                    ; 0055f124
    PUSH EAX                            ; 0055f125
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055f126
    MOV EDX,dword ptr [EDX + 0x154]     ; 0055f12c
    PUSH EBX                            ; 0055f132
    CALL dword ptr [EDX + 0x24]         ; 0055f133
    ADD ESP,0xc                         ; 0055f136
    JMP 0x0055ee2d                      ; 0055f139
        ;   XREF to: 0055ee2d (UNCONDITIONAL_JUMP)  ; LAB_0055ee2d
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f13e
        ;   Label: LAB_0055f13e
    MOV EAX,dword ptr [EAX + 0xc280]    ; 0055f144
    JMP 0x0055f0f0                      ; 0055f14a
        ;   XREF to: 0055f0f0 (UNCONDITIONAL_JUMP)  ; LAB_0055f0f0
    PUSH 0x1                            ; 0055f14c
        ;   Label: LAB_0055f14c
    PUSH 0x5                            ; 0055f14e
    PUSH EDX                            ; 0055f150
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055f151
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055f156
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f159
        ;   Label: LAB_0055f159
    CMP dword ptr [EAX + 0xc2e8],0x0    ; 0055f15f
    JNZ 0x0055e060                      ; 0055f166
        ;   XREF to: 0055e060 (CONDITIONAL_JUMP)  ; LAB_0055e060
    JMP 0x0055ee75                      ; 0055f16c
        ;   XREF to: 0055ee75 (UNCONDITIONAL_JUMP)  ; LAB_0055ee75
    PUSH EDX                            ; 0055f171
        ;   Label: LAB_0055f171
    CALL core_motion.cpp_FUN_00525020   ; 0055f172
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055f177
    ADD ESP,0x4                         ; 0055f17a
    FLD float ptr [EBP + 0x76]          ; 0055f17d
    FCOMP double ptr [0x005f161d]       ; 0055f180 | DAT_005f161d
    FNSTSW AX                           ; 0055f186
    SAHF                                ; 0055f188
    JBE 0x0055f197                      ; 0055f189
        ;   XREF to: 0055f197 (CONDITIONAL_JUMP)  ; LAB_0055f197
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f18b
    INC dword ptr [EAX + 0xc2f8]        ; 0055f191
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f197
        ;   Label: LAB_0055f197
    CMP dword ptr [EAX + 0xc2f8],0x2    ; 0055f19d
    JLE 0x0055f159                      ; 0055f1a4
        ;   XREF to: 0055f159 (CONDITIONAL_JUMP)  ; LAB_0055f159
    LEA EBX,[EAX + 0x158]               ; 0055f1a6
    PUSH EBX                            ; 0055f1ac
    CALL core_motion.cpp_FUN_00525020   ; 0055f1ad
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055f1b2
    ADD ESP,0x4                         ; 0055f1b5
    FLD float ptr [EBP + 0x76]          ; 0055f1b8
    FCOMP double ptr [0x005f1625]       ; 0055f1bb | DAT_005f1625
    FNSTSW AX                           ; 0055f1c1
    SAHF                                ; 0055f1c3
    JBE 0x0055f159                      ; 0055f1c4
        ;   XREF to: 0055f159 (CONDITIONAL_JUMP)  ; LAB_0055f159
    PUSH 0x1                            ; 0055f1c6
    PUSH 0x3                            ; 0055f1c8
    PUSH 0x0                            ; 0055f1ca
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055f1cc
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055f1d1
    ADD EAX,0xb                         ; 0055f1d4
    PUSH EAX                            ; 0055f1d7
    PUSH EBX                            ; 0055f1d8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055f1d9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f1de
    ADD ESP,0xc                         ; 0055f1e4
    MOV dword ptr [EAX + 0xc2f8],0x0    ; 0055f1e7
    JMP 0x0055f159                      ; 0055f1f1
        ;   XREF to: 0055f159 (UNCONDITIONAL_JUMP)  ; LAB_0055f159
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f1f6
        ;   Label: LAB_0055f1f6
    ADD EAX,0xc2ec                      ; 0055f1fc
    PUSH EAX                            ; 0055f201
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f202
    PUSH 0x3f800000                     ; 0055f208
    MOV EDI,dword ptr [EAX + 0xc2e8]    ; 0055f20d
    PUSH 0x3f800000                     ; 0055f213
    PUSH EDI                            ; 0055f218
    PUSH EAX                            ; 0055f219
    CALL core_charactr.cpp_FUN_00431cc0 ; 0055f21a
        ;   XREF to: 00431cc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431cc0()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f21f
    MOV EAX,dword ptr [EAX + 0xc2ec]    ; 0055f225
    ADD ESP,0x14                        ; 0055f22b
    CMP EAX,0x1                         ; 0055f22e
    JC 0x0055f251                       ; 0055f231
        ;   XREF to: 0055f251 (CONDITIONAL_JUMP)  ; LAB_0055f251
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055f233
    ADD EDX,0x158                       ; 0055f239
    CMP EAX,0x1                         ; 0055f23f
    JBE 0x0055f14c                      ; 0055f242
        ;   XREF to: 0055f14c (CONDITIONAL_JUMP)  ; LAB_0055f14c
    CMP EAX,0x2                         ; 0055f248
    JZ 0x0055f171                       ; 0055f24b
        ;   XREF to: 0055f171 (CONDITIONAL_JUMP)  ; LAB_0055f171
    PUSH 0x1                            ; 0055f251
        ;   Label: LAB_0055f251
    PUSH 0x4                            ; 0055f253
    PUSH 0x0                            ; 0055f255
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055f257
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055f25c
    PUSH EAX                            ; 0055f25f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f260
    ADD EAX,0x158                       ; 0055f266
    PUSH EAX                            ; 0055f26b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055f26c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f271
    ADD ESP,0xc                         ; 0055f277
    MOV dword ptr [EAX + 0xc2e8],0x0    ; 0055f27a
    JMP 0x0055ee75                      ; 0055f284
        ;   XREF to: 0055ee75 (UNCONDITIONAL_JUMP)  ; LAB_0055ee75
    PUSH 0x1                            ; 0055f289
        ;   Label: LAB_0055f289
    PUSH 0x4                            ; 0055f28b
    PUSH EDI                            ; 0055f28d
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055f28e
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055f293
    PUSH EAX                            ; 0055f296
    PUSH EBX                            ; 0055f297
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055f298
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055f29d
    JMP 0x0055e060                      ; 0055f2a0
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x1                            ; 0055f2a5
        ;   Label: LAB_0055f2a5
    PUSH 0x4                            ; 0055f2a7
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f2a9
    PUSH 0x0                            ; 0055f2af
    MOV dword ptr [EAX + 0xc1e8],0x0    ; 0055f2b1
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055f2bb
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055f2c0
    PUSH EAX                            ; 0055f2c3
    PUSH EBX                            ; 0055f2c4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055f2c5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055f2ca
    JMP 0x0055e060                      ; 0055f2cd
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x1                            ; 0055f2d2
        ;   Label: LAB_0055f2d2
    PUSH 0x7                            ; 0055f2d4
    PUSH EBX                            ; 0055f2d6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055f2d7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055f2dc
    PUSH 0x5f15b7                       ; 0055f2df | DAT_005f15b7
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0055f2e4
    PUSH ECX                            ; 0055f2ea
    CALL core_charactr.cpp_FUN_00435380 ; 0055f2eb
        ;   XREF to: 00435380 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435380()
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0055f2f0
    ADD ESP,0x8                         ; 0055f2f6
    MOV dword ptr [EDX + 0xc2e8],EAX    ; 0055f2f9
    TEST EAX,EAX                        ; 0055f2ff
    JZ 0x0055e060                       ; 0055f301
        ;   XREF to: 0055e060 (CONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH 0x41400000                     ; 0055f307
    PUSH 0x40800000                     ; 0055f30c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0055f311
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055f316
    ADD ESP,0x8                         ; 0055f319
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f31c
    MOV EDX,dword ptr [EBP + 0x76]      ; 0055f322
    MOV dword ptr [EAX + 0xc2f0],EDX    ; 0055f325
    JMP 0x0055e060                      ; 0055f32b
        ;   XREF to: 0055e060 (UNCONDITIONAL_JUMP)  ; LAB_0055e060
    PUSH EDI                            ; 0055f330
        ;   Label: LAB_0055f330
    PUSH 0x5f15b9                       ; 0055f331 | = "%s gave up chase - I'm confused\n"
    MOV EAX,[0x00611100]                ; 0055f336 | g_CConsolePtr
    PUSH EAX                            ; 0055f33b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0055f33c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0055f341
    PUSH 0x1                            ; 0055f344
    PUSH 0x4                            ; 0055f346
    PUSH 0x0                            ; 0055f348
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055f34a
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055f34f
    PUSH EAX                            ; 0055f352
    PUSH ESI                            ; 0055f353
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0055f354
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055f359
    JMP 0x0055f085                      ; 0055f35c
        ;   XREF to: 0055f085 (UNCONDITIONAL_JUMP)  ; LAB_0055f085
    PUSH 0x1                            ; 0055f361
        ;   Label: LAB_0055f361
    PUSH 0x3                            ; 0055f363
    PUSH 0x0                            ; 0055f365
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0055f367
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0055f36c
    ADD EAX,0x6                         ; 0055f36f
    PUSH EAX                            ; 0055f372
    JMP 0x0055f014                      ; 0055f373
        ;   XREF to: 0055f014 (UNCONDITIONAL_JUMP)  ; LAB_0055f014
    CMP EDI,0x16                        ; 0055f378
        ;   Label: LAB_0055f378
    JA 0x0055eb84                       ; 0055f37b
        ;   XREF to: 0055eb84 (CONDITIONAL_JUMP)  ; caseD_15
    JMP dword ptr [EDI*0x4 + 0x55ddf4]  ; 0055f381 | caseD_4 | caseD_e | caseD_9
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0055f388
        ;   Label: LAB_0055f388
    CMP dword ptr [EAX + 0xdc],0x0      ; 0055f38e
    JNZ 0x0055e0e3                      ; 0055f395
        ;   XREF to: 0055e0e3 (CONDITIONAL_JUMP)  ; LAB_0055e0e3
    JMP 0x0055e25d                      ; 0055f39b
        ;   XREF to: 0055e25d (UNCONDITIONAL_JUMP)  ; LAB_0055e25d
    PUSH 0x40c00000                     ; 0055f3a0
        ;   Label: LAB_0055f3a0
    PUSH 0x40400000                     ; 0055f3a5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0055f3aa
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0055f3af
    ADD ESP,0x8                         ; 0055f3b2
    MOV EAX,dword ptr [EBP + 0x76]      ; 0055f3b5
    MOV dword ptr [EBX + 0xc2f0],EAX    ; 0055f3b8
    JMP 0x0055e494                      ; 0055f3be
        ;   XREF to: 0055e494 (UNCONDITIONAL_JUMP)  ; LAB_0055e494

