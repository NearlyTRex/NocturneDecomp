; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_process_FUN_00412ba0(CBatman *this_ptr,float delta_time)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00412b58 = 004132b1
;   undefined1* switchdataD_00412b68 = 004134ef
;   TerminatedCString s_s_confused_while_walking_005d3a42
;   TerminatedCString s_batman_disappear_wav_005d3a6c
;   TerminatedCString s_batman_alert_wav_005d3a81
;   TerminatedCString s_CHero_005d3a92
;   TerminatedCString s_batman_disappear_wav_005d3a98
;   TerminatedCString s_batman_attack_wav_005d3aad
;   undefined4 DAT_005d3ac1
;   undefined4 DAT_005d3ac9
;   undefined4 DAT_005d3ad1
;   undefined4 DAT_005fc16c
;   undefined4 DAT_005fc178
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061b4d0
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412b20
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   ... and 19 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412ba0
        ;   Label: core_batman.cpp_CBatman_process_FUN_00412ba0
    PUSH ESI                            ; 00412ba1
    PUSH EDI                            ; 00412ba2
    PUSH EBP                            ; 00412ba3
    MOV EBP,ESP                         ; 00412ba4
    SUB ESP,0x2a8                       ; 00412ba6
    SUB EBP,0x7a                        ; 00412bac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00412baf
    PUSH dword ptr [EBP + 0x92]         ; 00412bb5
    PUSH EBX                            ; 00412bbb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00412bbc
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412bc1
    TEST EAX,EAX                        ; 00412bc4
    JZ 0x00412e2f                       ; 00412bc6
        ;   XREF to: 00412e2f (CONDITIONAL_JUMP)  ; LAB_00412e2f
    LEA EAX,[EBX + 0x249c]              ; 00412bcc
    MOV dword ptr [EAX + 0x8],0x0       ; 00412bd2
    FLD float ptr [EBP + 0x92]          ; 00412bd9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412bdf
    MOV dword ptr [EAX + 0x4],EDX       ; 00412be2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412be5
    MOV dword ptr [EAX],EDX             ; 00412be8
    FMUL float ptr [EBX + 0xc1d0]       ; 00412bea
    LEA ESI,[EBX + 0x158]               ; 00412bf0
    FSTP float ptr [EBP + 0x36]         ; 00412bf6
    FLD float ptr [EBP + 0x36]          ; 00412bf9
        ;   Label: LAB_00412bf9
    FLDZ                                ; 00412bfc
    FCOMPP                              ; 00412bfe
    FNSTSW AX                           ; 00412c00
    SAHF                                ; 00412c02
    JC 0x00412e37                       ; 00412c03
        ;   XREF to: 00412e37 (CONDITIONAL_JUMP)  ; LAB_00412e37
    FLD float ptr [EBP + 0x92]          ; 00412c09
    FMUL float ptr [EBX + 0xc1d0]       ; 00412c0f
    SUB ESP,0x4                         ; 00412c15
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00412c18
    MOV dword ptr [EBX + 0x2524],EAX    ; 00412c1e
    FSTP float ptr [ESP]                ; 00412c24
    PUSH EBX                            ; 00412c27
    CALL core_charactr.cpp_FUN_00435320 ; 00412c28
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV EAX,dword ptr [EBX + 0xc2e4]    ; 00412c2d
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00412c33
    ADD ESP,0x8                         ; 00412c3a
    TEST EDX,EDX                        ; 00412c3d
    JZ 0x00412e53                       ; 00412c3f
        ;   XREF to: 00412e53 (CONDITIONAL_JUMP)  ; LAB_00412e53
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 00412c45
        ;   Label: LAB_00412c45
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00412c4b
    JZ 0x00412e67                       ; 00412c53
        ;   XREF to: 00412e67 (CONDITIONAL_JUMP)  ; LAB_00412e67
    LEA ESI,[EBX + 0x158]               ; 00412c59
        ;   Label: LAB_00412c59
    PUSH ESI                            ; 00412c5f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00412c60
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00412c65
    PUSH dword ptr [EBP + 0x92]         ; 00412c68
    MOV EDI,dword ptr [EAX + 0x24]      ; 00412c6e
    PUSH EBX                            ; 00412c71
    MOV dword ptr [EBP + 0x72],EDI      ; 00412c72
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00412c75
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412c7a
    TEST EAX,EAX                        ; 00412c7d
    JZ 0x00413952                       ; 00412c7f
        ;   XREF to: 00413952 (CONDITIONAL_JUMP)  ; LAB_00413952
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00412c85
    CMP EAX,0x2                         ; 00412c8b
    JNC 0x00412f12                      ; 00412c8e
        ;   XREF to: 00412f12 (CONDITIONAL_JUMP)  ; LAB_00412f12
    CMP EAX,0x1                         ; 00412c94
    JNZ 0x00412f1d                      ; 00412c97
        ;   XREF to: 00412f1d (CONDITIONAL_JUMP)  ; LAB_00412f1d
    PUSH 0x1                            ; 00412c9d
        ;   Label: LAB_00412c9d
    PUSH 0x1                            ; 00412c9f
    LEA EAX,[EBX + 0x158]               ; 00412ca1
        ;   Label: LAB_00412ca1
    PUSH EAX                            ; 00412ca7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00412ca8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412cad
        ;   Label: LAB_00412cad
    LEA EAX,[EBX + 0x249c]              ; 00412cb0
    MOV dword ptr [EAX + 0x8],0x0       ; 00412cb6
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412cbd
    MOV dword ptr [EAX + 0x4],EDX       ; 00412cc0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412cc3
    MOV dword ptr [EAX],EDX             ; 00412cc6
    LEA EAX,[EAX]                       ; 00412cc8
    MOV EDX,EDX                         ; 00412cce
    FLD float ptr [EBX + 0xc1e4]        ; 00412cd0
        ;   Label: default
    FLDZ                                ; 00412cd6
    FCOMPP                              ; 00412cd8
    FNSTSW AX                           ; 00412cda
    SAHF                                ; 00412cdc
    JNC 0x00412cf1                      ; 00412cdd
        ;   XREF to: 00412cf1 (CONDITIONAL_JUMP)  ; LAB_00412cf1
    FLD float ptr [EBX + 0xc1e4]        ; 00412cdf
    FSUB float ptr [EBP + 0x92]         ; 00412ce5
    FSTP float ptr [EBX + 0xc1e4]       ; 00412ceb
    PUSH EBX                            ; 00412cf1
        ;   Label: LAB_00412cf1
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 00412cf2
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00412cf7
    TEST EAX,EAX                        ; 00412cfa
    JZ 0x00412df8                       ; 00412cfc
        ;   XREF to: 00412df8 (CONDITIONAL_JUMP)  ; LAB_00412df8
    CMP dword ptr [EBP + 0x72],0x9      ; 00412d02
    JZ 0x00412df8                       ; 00412d06
        ;   XREF to: 00412df8 (CONDITIONAL_JUMP)  ; LAB_00412df8
    PUSH dword ptr [EBP + 0x92]         ; 00412d0c
    PUSH EBX                            ; 00412d12
    CALL core_charactr.cpp_FUN_0042d700 ; 00412d13
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA ECX,[EBX + 0x2518]              ; 00412d18
    FLD float ptr [ECX]                 ; 00412d1e
    FMUL float ptr [EBP + 0x92]         ; 00412d20
    FLD float ptr [ECX + 0x4]           ; 00412d26
    FMUL float ptr [EBP + 0x92]         ; 00412d29
    FLD float ptr [ECX + 0x8]           ; 00412d2f
    FMUL float ptr [EBP + 0x92]         ; 00412d32
    LEA EDI,[EBP + -0x6]                ; 00412d38
    LEA ESI,[EBP + 0x6]                 ; 00412d3b
    FXCH ST2                            ; 00412d3e
    FSTP float ptr [EBP + 0x6]          ; 00412d40
    FSTP float ptr [EBP + 0xa]          ; 00412d43
    FSTP float ptr [EBP + 0xe]          ; 00412d46
    MOVSD ES:EDI,ESI                    ; 00412d49
    MOVSD ES:EDI,ESI                    ; 00412d4a
    MOVSD ES:EDI,ESI                    ; 00412d4b
    LEA EDX,[EBX + 0x250c]              ; 00412d4c
    FLD float ptr [EBP + -0x6]          ; 00412d52
    FLD float ptr [EBP + -0x2]          ; 00412d55
    FLD float ptr [EBP + 0x2]           ; 00412d58
    LEA EDI,[EBP + 0x2a]                ; 00412d5b
    LEA ESI,[EBP + 0xfffffefe]          ; 00412d5e
    FXCH ST2                            ; 00412d64
    FADD float ptr [EDX]                ; 00412d66
    FXCH                                ; 00412d68
    FADD float ptr [EDX + 0x4]          ; 00412d6a
    FXCH ST2                            ; 00412d6d
    FADD float ptr [EDX + 0x8]          ; 00412d6f
    FXCH                                ; 00412d72
    FSTP float ptr [EBP + 0xfffffefe]   ; 00412d74
    FXCH                                ; 00412d7a
    FSTP float ptr [EBP + 0xffffff02]   ; 00412d7c
    FSTP float ptr [EBP + 0xffffff06]   ; 00412d82
    MOVSD ES:EDI,ESI                    ; 00412d88
    MOVSD ES:EDI,ESI                    ; 00412d89
    MOVSD ES:EDI,ESI                    ; 00412d8a
    LEA EAX,[EBX + 0x249c]              ; 00412d8b
    FLD float ptr [EBP + 0x2a]          ; 00412d91
    FLD float ptr [EBP + 0x2e]          ; 00412d94
    FLD float ptr [EBP + 0x32]          ; 00412d97
    LEA EDI,[EBP + 0xfffffe62]          ; 00412d9a
    LEA ESI,[EBP + 0x12]                ; 00412da0
    FXCH ST2                            ; 00412da3
    FADD float ptr [EAX]                ; 00412da5
    FXCH                                ; 00412da7
    FADD float ptr [EAX + 0x4]          ; 00412da9
    FXCH ST2                            ; 00412dac
    FADD float ptr [EAX + 0x8]          ; 00412dae
    FXCH                                ; 00412db1
    FSTP float ptr [EBP + 0x12]         ; 00412db3
    FXCH                                ; 00412db6
    FSTP float ptr [EBP + 0x16]         ; 00412db8
    FSTP float ptr [EBP + 0x1a]         ; 00412dbb
    MOVSD ES:EDI,ESI                    ; 00412dbe
    MOVSD ES:EDI,ESI                    ; 00412dbf
    MOVSD ES:EDI,ESI                    ; 00412dc0
    MOV dword ptr [EDX + 0x8],0x0       ; 00412dc1
    MOV ECX,dword ptr [EDX + 0x8]       ; 00412dc8
    MOV dword ptr [EDX + 0x4],ECX       ; 00412dcb
    MOV ECX,dword ptr [EDX + 0x4]       ; 00412dce
    MOV dword ptr [EDX],ECX             ; 00412dd1
    MOV dword ptr [EAX + 0x8],0x0       ; 00412dd3
    ADD ESP,0x8                         ; 00412dda
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412ddd
    MOV dword ptr [EAX + 0x4],EDX       ; 00412de0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412de3
    MOV dword ptr [EAX],EDX             ; 00412de6
    LEA EAX,[EBP + 0xfffffe62]          ; 00412de8
    PUSH EAX                            ; 00412dee
    PUSH EBX                            ; 00412def
    CALL core_charactr.cpp_FUN_0042d750 ; 00412df0
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00412df5
    CMP dword ptr [EBP + 0x72],0xd      ; 00412df8
        ;   Label: LAB_00412df8
    JZ 0x00412e08                       ; 00412dfc
        ;   XREF to: 00412e08 (CONDITIONAL_JUMP)  ; LAB_00412e08
    MOV dword ptr [EBX + 0xc308],0x0    ; 00412dfe
    PUSH EBX                            ; 00412e08
        ;   Label: LAB_00412e08
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00412e09
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00412e0e
    LEA EAX,[EBX + 0x158]               ; 00412e11
    PUSH EAX                            ; 00412e17
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00412e18
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412e1d
    PUSH dword ptr [EBP + 0x92]         ; 00412e20
    PUSH EBX                            ; 00412e26
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 00412e27
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412e2c
    LEA ESP,[EBP + 0x7a]                ; 00412e2f
        ;   Label: LAB_00412e2f
    POP EBP                             ; 00412e32
    POP EDI                             ; 00412e33
    POP ESI                             ; 00412e34
    POP EBX                             ; 00412e35
    RET                                 ; 00412e36
    LEA EAX,[EBP + 0x36]                ; 00412e37
        ;   Label: LAB_00412e37
    PUSH EAX                            ; 00412e3a
    PUSH ESI                            ; 00412e3b
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00412e3c
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00412e41
    PUSH EAX                            ; 00412e44
    PUSH EBX                            ; 00412e45
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00412e46
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00412e4b
    JMP 0x00412bf9                      ; 00412e4e
        ;   XREF to: 00412bf9 (UNCONDITIONAL_JUMP)  ; LAB_00412bf9
    MOV EAX,dword ptr [EBX + 0xc2dc]    ; 00412e53
        ;   Label: LAB_00412e53
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00412e59
    JNZ 0x00412c45                      ; 00412e61
        ;   XREF to: 00412c45 (CONDITIONAL_JUMP)  ; LAB_00412c45
    FLD float ptr [EBX + 0xc268]        ; 00412e67
        ;   Label: LAB_00412e67
    FLDZ                                ; 00412e6d
    FCOMPP                              ; 00412e6f
    FNSTSW AX                           ; 00412e71
    SAHF                                ; 00412e73
    JA 0x00412c59                       ; 00412e74
        ;   XREF to: 00412c59 (CONDITIONAL_JUMP)  ; LAB_00412c59
    FLD float ptr [EBX + 0xc268]        ; 00412e7a
    FADD float ptr [EBP + 0x92]         ; 00412e80
    FST float ptr [EBX + 0xc268]        ; 00412e86
    FCOMP double ptr [0x005d3ac1]       ; 00412e8c | DAT_005d3ac1
    FNSTSW AX                           ; 00412e92
    SAHF                                ; 00412e94
    JC 0x00412c59                       ; 00412e95
        ;   XREF to: 00412c59 (CONDITIONAL_JUMP)  ; LAB_00412c59
    LEA EAX,[EBP + 0xfffffdd2]          ; 00412e9b
    PUSH EAX                            ; 00412ea1
    MOV EDI,0x461c3f9a                  ; 00412ea2
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00412ea7
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    LEA EDX,[EBP + 0xfffffdd2]          ; 00412eac
    ADD ESP,0x4                         ; 00412eb2
    MOV dword ptr [EBP + 0xfffffdd6],EDI ; 00412eb5
    MOV dword ptr [EBP + 0xfffffe06],EBX ; 00412ebb
    MOV dword ptr [EBP + 0xfffffe0a],EBX ; 00412ec1
    PUSH EDX                            ; 00412ec7
    MOV EAX,dword ptr [EBX + 0x154]     ; 00412ec8
    PUSH EBX                            ; 00412ece
    CALL dword ptr [EAX + 0x108]        ; 00412ecf
    ADD ESP,0x8                         ; 00412ed5
    MOV dword ptr [EBX + 0xc268],0xbf800000 ; 00412ed8
    JMP 0x00412c59                      ; 00412ee2
        ;   XREF to: 00412c59 (UNCONDITIONAL_JUMP)  ; LAB_00412c59
    PUSH 0x1                            ; 00412ee7
        ;   Label: LAB_00412ee7
    PUSH 0x0                            ; 00412ee9
    LEA EAX,[EBX + 0x158]               ; 00412eeb
    PUSH EAX                            ; 00412ef1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00412ef2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412ef7
    PUSH EBX                            ; 00412efa
    MOV EAX,0x5d3a42                    ; 00412efb | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00412f00 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00611100]      ; 00412f01 | g_CConsolePtr
    PUSH ECX                            ; 00412f07 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00412f08
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x00412cad                      ; 00412f0d
        ;   XREF to: 00412cad (UNCONDITIONAL_JUMP)  ; LAB_00412cad
    JBE 0x00412c9d                      ; 00412f12
        ;   XREF to: 00412c9d (CONDITIONAL_JUMP)  ; LAB_00412c9d
        ;   Label: LAB_00412f12
    CMP EAX,0x3                         ; 00412f18
    JZ 0x00412ee7                       ; 00412f1b
        ;   XREF to: 00412ee7 (CONDITIONAL_JUMP)  ; LAB_00412ee7
    PUSH 0x1                            ; 00412f1d
        ;   Label: LAB_00412f1d
    PUSH 0x0                            ; 00412f1f
    JMP 0x00412ca1                      ; 00412f21
        ;   XREF to: 00412ca1 (UNCONDITIONAL_JUMP)  ; LAB_00412ca1
    FLD float ptr [EBX + 0xc30c]        ; 00412f26
        ;   Label: caseD_1
    FADD float ptr [EBP + 0x92]         ; 00412f2c
    FST float ptr [EBX + 0xc30c]        ; 00412f32
    FCOMP float ptr [0x005fc178]        ; 00412f38 | DAT_005fc178
    FNSTSW AX                           ; 00412f3e
    SAHF                                ; 00412f40
    JBE 0x00412f58                      ; 00412f41
        ;   XREF to: 00412f58 (CONDITIONAL_JUMP)  ; LAB_00412f58
    MOV dword ptr [EBX + 0xc308],0x2    ; 00412f43
    MOV EAX,[0x005fc178]                ; 00412f4d | DAT_005fc178
    MOV dword ptr [EBX + 0xc30c],EAX    ; 00412f52
    MOV EDX,0x40400000                  ; 00412f58
        ;   Label: LAB_00412f58
    LEA ESI,[EBX + 0x158]               ; 00412f5d
    XOR EAX,EAX                         ; 00412f63
    XOR EDI,EDI                         ; 00412f65
    MOV dword ptr [EBP + -0x66],EAX     ; 00412f67
    PUSH ESI                            ; 00412f6a
    MOV dword ptr [EBP + -0x62],EDX     ; 00412f6b
    MOV dword ptr [EBP + -0x5e],EAX     ; 00412f6e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00412f71
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x6a],EDI      ; 00412f76
    ADD ESP,0x4                         ; 00412f79
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00412f7c
    MOV dword ptr [EBP + 0x56],EAX      ; 00412f82
    TEST EDX,EDX                        ; 00412f85
    JLE 0x00412cd0                      ; 00412f87
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    MOV dword ptr [EBP + 0x5a],ESI      ; 00412f8d
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00412f90
        ;   Label: LAB_00412f90
    PUSH EAX                            ; 00412f93
    MOV EDX,dword ptr [EBP + 0x5a]      ; 00412f94
    PUSH EDX                            ; 00412f97
    LEA ESI,[EBP + 0xffffff2e]          ; 00412f98
    LEA EDI,[EBP + -0x2a]               ; 00412f9e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00412fa1
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00412fa6
    LEA EAX,[EBP + -0x2a]               ; 00412fa9
    LEA ESI,[EBP + 0xffffff2e]          ; 00412fac
    PUSH EAX                            ; 00412fb2
    MOVSD ES:EDI,ESI                    ; 00412fb3
    MOVSD ES:EDI,ESI                    ; 00412fb4
    MOVSD ES:EDI,ESI                    ; 00412fb5
    PUSH EBX                            ; 00412fb6
    LEA ESI,[EBP + 0xffffff3a]          ; 00412fb7
    CALL core_actor.cpp_FUN_00408b40    ; 00412fbd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00412fc2
    PUSH 0xffff                         ; 00412fc5
    LEA EAX,[EBP + -0x66]               ; 00412fca
    PUSH EAX                            ; 00412fcd
    LEA EDI,[EBP + 0xffffff16]          ; 00412fce
    LEA ESI,[EBP + 0xffffff3a]          ; 00412fd4
    PUSH 0x3f000000                     ; 00412fda
    LEA EAX,[EBP + 0xffffff16]          ; 00412fdf
    MOVSD ES:EDI,ESI                    ; 00412fe5
    MOVSD ES:EDI,ESI                    ; 00412fe6
    MOVSD ES:EDI,ESI                    ; 00412fe7
    PUSH EAX                            ; 00412fe8
    MOV ECX,dword ptr [0x0061c010]      ; 00412fe9 | DAT_0061c010
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00412fef
    PUSH ECX                            ; 00412ff2
    INC ESI                             ; 00412ff3
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 00412ff4
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EDX,dword ptr [EBP + 0x56]      ; 00412ff9
    MOV dword ptr [EBP + 0x6a],ESI      ; 00412ffc
    MOV EDI,dword ptr [EDX + 0x1de78]   ; 00412fff
    ADD ESP,0x14                        ; 00413005
    CMP ESI,EDI                         ; 00413008
    JL 0x00412f90                       ; 0041300a
        ;   XREF to: 00412f90 (CONDITIONAL_JUMP)  ; LAB_00412f90
    JMP 0x00412cd0                      ; 0041300c
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ECX,0x1                         ; 00413011
        ;   Label: caseD_2
    LEA EAX,[EBX + 0xc310]              ; 00413016
    XOR ESI,ESI                         ; 0041301c
    MOV dword ptr [EBP + 0x42],ECX      ; 0041301e
    MOV dword ptr [EBP + 0x62],ESI      ; 00413021
    MOV dword ptr [EBP + 0x66],EAX      ; 00413024
    MOV dword ptr [EBP + 0x5e],ESI      ; 00413027
        ;   Label: LAB_00413027
    MOV EAX,[0x00622c18]                ; 0041302a | g_CDemonSetPtr
    MOV EDX,dword ptr [EBP + 0x62]      ; 0041302f
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 00413032 | g_CDemonSetInstance.character_count
    JGE 0x004130cf                      ; 00413038
        ;   XREF to: 004130cf (CONDITIONAL_JUMP)  ; LAB_004130cf
    ADD EAX,dword ptr [EBP + 0x5e]      ; 0041303e
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 00413041
    TEST ESI,ESI                        ; 00413047
    JNZ 0x0041305a                      ; 00413049
        ;   XREF to: 0041305a (CONDITIONAL_JUMP)  ; LAB_0041305a
    MOV EDI,dword ptr [EBP + 0x62]      ; 0041304b
        ;   Label: LAB_0041304b
    MOV ESI,dword ptr [EBP + 0x5e]      ; 0041304e
    INC EDI                             ; 00413051
    ADD ESI,0x4                         ; 00413052
    MOV dword ptr [EBP + 0x62],EDI      ; 00413055
    JMP 0x00413027                      ; 00413058
        ;   XREF to: 00413027 (UNCONDITIONAL_JUMP)  ; LAB_00413027
    CMP ESI,EBX                         ; 0041305a
        ;   Label: LAB_0041305a
    JZ 0x0041304b                       ; 0041305c
        ;   XREF to: 0041304b (CONDITIONAL_JUMP)  ; LAB_0041304b
    PUSH ESI                            ; 0041305e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0041305f
    CALL dword ptr [EAX + 0x10c]        ; 00413065
    ADD ESP,0x4                         ; 0041306b
    TEST EAX,EAX                        ; 0041306e
    JG 0x0041304b                       ; 00413070
        ;   XREF to: 0041304b (CONDITIONAL_JUMP)  ; LAB_0041304b
    FLD float ptr [ESI + 0x24]          ; 00413072
    FLD float ptr [ESI + 0x28]          ; 00413075
    FLD float ptr [ESI + 0x20]          ; 00413078
    MOV EAX,dword ptr [EBP + 0x66]      ; 0041307b
    LEA EDI,[EBP + 0xfffffe6e]          ; 0041307e
    LEA ESI,[EBP + -0x12]               ; 00413084
    FSUB float ptr [EAX]                ; 00413087
    FXCH ST2                            ; 00413089
    FSUB float ptr [EAX + 0x4]          ; 0041308b
    FXCH                                ; 0041308e
    FSUB float ptr [EAX + 0x8]          ; 00413090
    FXCH ST2                            ; 00413093
    FSTP float ptr [EBP + -0x12]        ; 00413095
    FSTP float ptr [EBP + -0xe]         ; 00413098
    FSTP float ptr [EBP + -0xa]         ; 0041309b
    MOVSD ES:EDI,ESI                    ; 0041309e
    MOVSD ES:EDI,ESI                    ; 0041309f
    MOVSD ES:EDI,ESI                    ; 004130a0
    FLD float ptr [EBP + 0xfffffe72]    ; 004130a1
    FMUL ST0                            ; 004130a7
    FLD float ptr [EBP + 0xfffffe6e]    ; 004130a9
    FMUL ST0                            ; 004130af
    FADDP                               ; 004130b1
    FLD float ptr [EBP + 0xfffffe76]    ; 004130b3
    FMUL ST0                            ; 004130b9
    FADDP                               ; 004130bb
    FSQRT                               ; 004130bd
    FCOMP double ptr [0x005d3ad1]       ; 004130bf | DAT_005d3ad1
    FNSTSW AX                           ; 004130c5
    SAHF                                ; 004130c7
    JNC 0x0041304b                      ; 004130c8
        ;   XREF to: 0041304b (CONDITIONAL_JUMP)  ; LAB_0041304b
    JMP 0x00412cd0                      ; 004130ca
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    CMP dword ptr [EBP + 0x42],0x0      ; 004130cf
        ;   Label: LAB_004130cf
    JZ 0x00412cd0                       ; 004130d3
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [0x005fc178]          ; 004130d9 | DAT_005fc178
    MOV EDX,dword ptr [EBP + 0x66]      ; 004130df
    MOV dword ptr [EBX + 0xc308],0x3    ; 004130e2
    LEA EAX,[EBX + 0x20]                ; 004130ec
    FSTP float ptr [EBX + 0xc30c]       ; 004130ef
    MOV ECX,dword ptr [EDX]             ; 004130f5
    MOV dword ptr [EAX],ECX             ; 004130f7
    MOV ECX,dword ptr [EDX + 0x4]       ; 004130f9
    MOV dword ptr [EAX + 0x4],ECX       ; 004130fc
    MOV ECX,dword ptr [EDX + 0x8]       ; 004130ff
    MOV dword ptr [EAX + 0x8],ECX       ; 00413102
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00413105
    TEST EDX,EDX                        ; 0041310b
    JZ 0x00413196                       ; 0041310d
        ;   XREF to: 00413196 (CONDITIONAL_JUMP)  ; LAB_00413196
    FLD float ptr [EDX + 0x20]          ; 00413113
    FLD float ptr [EDX + 0x24]          ; 00413116
    FLD float ptr [EDX + 0x28]          ; 00413119
    LEA EDI,[EBP + -0x4e]               ; 0041311c
    LEA ESI,[EBP + -0x5a]               ; 0041311f
    FXCH ST2                            ; 00413122
    FSUB float ptr [EAX]                ; 00413124
    FXCH                                ; 00413126
    FSUB float ptr [EAX + 0x4]          ; 00413128
    FXCH ST2                            ; 0041312b
    FSUB float ptr [EAX + 0x8]          ; 0041312d
    FXCH                                ; 00413130
    FSTP float ptr [EBP + -0x5a]        ; 00413132
    FXCH                                ; 00413135
    FSTP float ptr [EBP + -0x56]        ; 00413137
    FSTP float ptr [EBP + -0x52]        ; 0041313a
    LEA EAX,[EBP + -0x4e]               ; 0041313d
    MOVSD ES:EDI,ESI                    ; 00413140
    MOVSD ES:EDI,ESI                    ; 00413141
    MOVSD ES:EDI,ESI                    ; 00413142
    PUSH EAX                            ; 00413143
    LEA ESI,[EBP + 0xffffff0a]          ; 00413144
    LEA EDI,[EBP + 0xfffffec2]          ; 0041314a
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00413150
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xffffff0a]          ; 00413155
    LEA EAX,[EBP + 0xfffffec2]          ; 0041315b
    ADD ESP,0x4                         ; 00413161
    LEA EDX,[EBX + 0x30]                ; 00413164
    MOVSD ES:EDI,ESI                    ; 00413167
    MOVSD ES:EDI,ESI                    ; 00413168
    MOVSD ES:EDI,ESI                    ; 00413169
    CMP EDX,EAX                         ; 0041316a
    JZ 0x00413188                       ; 0041316c
        ;   XREF to: 00413188 (CONDITIONAL_JUMP)  ; LAB_00413188
    MOV EAX,dword ptr [EBP + 0xfffffec2] ; 0041316e
    MOV dword ptr [EDX],EAX             ; 00413174
    MOV EAX,dword ptr [EBP + 0xfffffec6] ; 00413176
    MOV dword ptr [EDX + 0x4],EAX       ; 0041317c
    MOV EAX,dword ptr [EBP + 0xfffffeca] ; 0041317f
    MOV dword ptr [EDX + 0x8],EAX       ; 00413185
    MOV dword ptr [EBX + 0x38],0x0      ; 00413188
        ;   Label: LAB_00413188
    MOV dword ptr [EBX + 0x30],0x0      ; 0041318f
    PUSH 0x5d3a6c                       ; 00413196 | = "batman-disappear.wav"
        ;   Label: LAB_00413196
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041319b
    PUSH EBX                            ; 004131a1
    CALL dword ptr [EAX + 0x2c]         ; 004131a2
    ADD ESP,0x8                         ; 004131a5
    JMP 0x00412cd0                      ; 004131a8
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,0x40400000                  ; 004131ad
        ;   Label: caseD_3
    PUSH ESI                            ; 004131b2
    XOR EAX,EAX                         ; 004131b3
    XOR EDI,EDI                         ; 004131b5
    MOV dword ptr [EBP + 0xffffff22],EAX ; 004131b7
    MOV dword ptr [EBP + 0xffffff26],EDX ; 004131bd
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 004131c3
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004131c9
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x6e],EDI      ; 004131ce
    ADD ESP,0x4                         ; 004131d1
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 004131d4
    MOV dword ptr [EBP + 0x4e],EAX      ; 004131da
    TEST EDX,EDX                        ; 004131dd
    JLE 0x00413270                      ; 004131df
        ;   XREF to: 00413270 (CONDITIONAL_JUMP)  ; LAB_00413270
    MOV dword ptr [EBP + 0x52],ESI      ; 004131e5
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004131e8
        ;   Label: LAB_004131e8
    PUSH ESI                            ; 004131eb
    MOV EDI,dword ptr [EBP + 0x52]      ; 004131ec
    PUSH EDI                            ; 004131ef
    LEA ESI,[EBP + 0xfffffee6]          ; 004131f0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004131f6
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EDI,[EBP + 0xffffff6a]          ; 004131fb
    ADD ESP,0x8                         ; 00413201
    LEA EAX,[EBP + 0xffffff6a]          ; 00413204
    LEA ESI,[EBP + 0xfffffee6]          ; 0041320a
    PUSH EAX                            ; 00413210
    MOVSD ES:EDI,ESI                    ; 00413211
    MOVSD ES:EDI,ESI                    ; 00413212
    MOVSD ES:EDI,ESI                    ; 00413213
    PUSH EBX                            ; 00413214
    LEA ESI,[EBP + -0x36]               ; 00413215
    CALL core_actor.cpp_FUN_00408b40    ; 00413218
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0041321d
    PUSH 0xffff                         ; 00413220
    LEA EAX,[EBP + 0xffffff22]          ; 00413225
    PUSH EAX                            ; 0041322b
    PUSH 0x3f000000                     ; 0041322c
    LEA EAX,[EBP + 0xfffffe56]          ; 00413231
    LEA EDI,[EBP + 0xfffffe56]          ; 00413237
    PUSH EAX                            ; 0041323d
    MOV EAX,[0x0061c010]                ; 0041323e | DAT_0061c010
    LEA ESI,[EBP + -0x36]               ; 00413243
    PUSH EAX                            ; 00413246
    MOVSD ES:EDI,ESI                    ; 00413247
    MOVSD ES:EDI,ESI                    ; 00413248
    MOVSD ES:EDI,ESI                    ; 00413249
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 0041324a
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0041324f
    INC EDX                             ; 00413252
    MOV dword ptr [EBP + 0x6e],EDX      ; 00413253
    MOV EAX,EDX                         ; 00413256
    MOV EDX,dword ptr [EBP + 0x4e]      ; 00413258
    MOV ECX,dword ptr [EDX + 0x1de78]   ; 0041325b
    ADD ESP,0x14                        ; 00413261
    CMP EAX,ECX                         ; 00413264
    JL 0x004131e8                       ; 00413266
        ;   XREF to: 004131e8 (CONDITIONAL_JUMP)  ; LAB_004131e8
    LEA EAX,[EAX]                       ; 00413268
    MOV EDX,EDX                         ; 0041326e
    FLD float ptr [EBX + 0xc30c]        ; 00413270
        ;   Label: LAB_00413270
    FSUB float ptr [EBP + 0x92]         ; 00413276
    FST float ptr [EBX + 0xc30c]        ; 0041327c
    FLDZ                                ; 00413282
    FCOMPP                              ; 00413284
    FNSTSW AX                           ; 00413286
    SAHF                                ; 00413288
    JBE 0x00412cd0                      ; 00413289
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    MOV dword ptr [EBX + 0xc30c],0x0    ; 0041328f
    PUSH EBX                            ; 00413299
    MOV dword ptr [EBX + 0xc308],0x0    ; 0041329a
    CALL core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412b20 ; 004132a4
        ;   XREF to: 00412b20 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412b20(CBatman * this_ptr)
    ADD ESP,0x4                         ; 004132a9
    JMP 0x00412cd0                      ; 004132ac
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 004132b1
        ;   Label: caseD_0
    PUSH 0x0                            ; 004132b3
    PUSH ESI                            ; 004132b5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004132b6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004132bb
    JMP 0x00412cd0                      ; 004132be
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0xc308]    ; 004132c3
        ;   Label: caseD_d
    CMP EAX,0x3                         ; 004132c9
    JA 0x00412cd0                       ; 004132cc
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EAX*0x4 + 0x412b58]  ; 004132d2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 004132d9
        ;   Label: caseD_8
    JNZ 0x00412cd0                      ; 004132e0
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    CMP dword ptr [EBX + 0xdc],0x0      ; 004132e6
    JNZ 0x00412cd0                      ; 004132ed
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH EAX                            ; 004132f3
    PUSH ESI                            ; 004132f4
    LEA ESI,[EBP + 0xfffffe92]          ; 004132f5
    LEA EDI,[EBP + 0xffffff52]          ; 004132fb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 00413301
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00413306
    LEA EAX,[EBP + 0xffffff52]          ; 00413309
    LEA ESI,[EBP + 0xfffffe92]          ; 0041330f
    PUSH EAX                            ; 00413315
    MOVSD ES:EDI,ESI                    ; 00413316
    MOVSD ES:EDI,ESI                    ; 00413317
    MOVSD ES:EDI,ESI                    ; 00413318
    PUSH EBX                            ; 00413319
    LEA ESI,[EBP + -0x42]               ; 0041331a
    CALL core_actor.cpp_FUN_00408b40    ; 0041331d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00413322
    PUSH 0x0                            ; 00413325
    LEA EAX,[EBP + 0xfffffe7a]          ; 00413327
    LEA EDI,[EBP + 0xfffffe7a]          ; 0041332d
    PUSH EAX                            ; 00413333
    MOV EAX,[0x0061dca4]                ; 00413334 | g_CGorePtr
    LEA ESI,[EBP + -0x42]               ; 00413339
    PUSH EAX                            ; 0041333c
    MOVSD ES:EDI,ESI                    ; 0041333d
    MOVSD ES:EDI,ESI                    ; 0041333e
    MOVSD ES:EDI,ESI                    ; 0041333f
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 00413340
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00413345
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 00413348
    JMP 0x00412cd0                      ; 00413352
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00413357
        ;   Label: caseD_9
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041335d
    PUSH EBX                            ; 00413363
    CALL dword ptr [EAX + 0x144]        ; 00413364
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0041336a
    ADD ESP,0x8                         ; 00413370
    TEST ECX,ECX                        ; 00413373
    JZ 0x004133ec                       ; 00413375
        ;   XREF to: 004133ec (CONDITIONAL_JUMP)  ; LAB_004133ec
    PUSH 0x1                            ; 00413377
        ;   Label: LAB_00413377
    PUSH 0xb                            ; 00413379
    LEA EAX,[EBX + 0x158]               ; 0041337b
    PUSH EAX                            ; 00413381
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00413382
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413387
    MOV EDI,dword ptr [EBX + 0xc320]    ; 0041338a
    PUSH EDI                            ; 00413390
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00413391
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00413396
    TEST EAX,EAX                        ; 00413399
    JNZ 0x00412cd0                      ; 0041339b
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0xc324]    ; 004133a1
    PUSH EAX                            ; 004133a7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004133a8
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004133ad
    TEST EAX,EAX                        ; 004133b0
    JNZ 0x00412cd0                      ; 004133b2
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,dword ptr [EBX + 0xc31c]    ; 004133b8
    PUSH EDX                            ; 004133be
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004133bf
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004133c4
    TEST EAX,EAX                        ; 004133c7
    JNZ 0x00412cd0                      ; 004133c9
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x5d3a81                       ; 004133cf | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004133d4
    PUSH EBX                            ; 004133da
    CALL dword ptr [EAX + 0x2c]         ; 004133db
    ADD ESP,0x8                         ; 004133de
    MOV dword ptr [EBX + 0xc31c],EAX    ; 004133e1
    JMP 0x00412cd0                      ; 004133e7
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    LEA EAX,[EBX + 0xc26c]              ; 004133ec
        ;   Label: LAB_004133ec
    PUSH EAX                            ; 004133f2
    MOV ESI,dword ptr [0x0061b4d0]      ; 004133f3 | DAT_0061b4d0
    PUSH ESI                            ; 004133f9
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004133fa
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004133ff
    TEST EAX,EAX                        ; 00413402
    JNZ 0x00413377                      ; 00413404
        ;   XREF to: 00413377 (CONDITIONAL_JUMP)  ; LAB_00413377
    JMP 0x00412cd0                      ; 0041340a
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [EBX + 0x2504]        ; 0041340f
        ;   Label: caseD_b
    FLD1                                ; 00413415
    FADDP                               ; 00413417
    FLD float ptr [EBX + 0x24]          ; 00413419
    FCOMPP                              ; 0041341c
    FNSTSW AX                           ; 0041341e
    SAHF                                ; 00413420
    JNC 0x00412cd0                      ; 00413421
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413427
    PUSH 0xc                            ; 00413429
    PUSH ESI                            ; 0041342b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041342c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413431
    JMP 0x00412cd0                      ; 00413434
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    LEA EAX,[EBP + 0xfffffe0e]          ; 00413439
        ;   Label: caseD_3
    PUSH EAX                            ; 0041343f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00413440
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00413445
    PUSH 0x41700000                     ; 00413448
    PUSH 0x40e00000                     ; 0041344d
    LEA ESI,[EBP + 0xfffffe86]          ; 00413452
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00413458
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041345d
    ADD ESP,0x8                         ; 00413460
    LEA EAX,[EBP + 0xfffffe0e]          ; 00413463
    MOV EDX,dword ptr [0x007c37c0]      ; 00413469 | DAT_007c37c0
    PUSH EAX                            ; 0041346f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00413470
    MOV dword ptr [EBP + 0xfffffe42],EBX ; 00413477
    SUB EAX,EDX                         ; 0041347d
    MOV dword ptr [EBP + 0xfffffe46],EBX ; 0041347f
    SHL EAX,0x4                         ; 00413485
    LEA EDX,[EBX + 0xfd8]               ; 00413488
    PUSH 0x3ecccccd                     ; 0041348e
    ADD EAX,EDX                         ; 00413493
    LEA EDI,[EBP + 0xfffffe4a]          ; 00413495
    PUSH EAX                            ; 0041349b
    FLD float ptr [EBP + 0x76]          ; 0041349c
    PUSH 0x2c8af28                      ; 0041349f | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffe12]   ; 004134a4
    CALL core_xform.cpp_FUN_005b5080    ; 004134aa
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004134af
    LEA EAX,[EBP + 0xfffffe4a]          ; 004134b2
    LEA ESI,[EBP + 0xfffffe86]          ; 004134b8
    PUSH EAX                            ; 004134be
    MOVSD ES:EDI,ESI                    ; 004134bf
    MOVSD ES:EDI,ESI                    ; 004134c0
    MOVSD ES:EDI,ESI                    ; 004134c1
    PUSH EBX                            ; 004134c2
    LEA ESI,[EBP + 0xfffffe9e]          ; 004134c3
    CALL core_actor.cpp_FUN_00408b40    ; 004134c9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004134ce
    LEA EAX,[EBP + -0x7e]               ; 004134d1
    PUSH EAX                            ; 004134d4
    LEA EDI,[EBP + -0x7e]               ; 004134d5
    LEA ESI,[EBP + 0xfffffe9e]          ; 004134d8
    PUSH EBX                            ; 004134de
    MOVSD ES:EDI,ESI                    ; 004134df
    MOVSD ES:EDI,ESI                    ; 004134e0
    MOVSD ES:EDI,ESI                    ; 004134e1
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 004134e2
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004134e7
    JMP 0x00412cd0                      ; 004134ea
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 004134ef
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004134f5
    PUSH EBX                            ; 004134fb
    CALL dword ptr [EAX + 0x144]        ; 004134fc
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00413502
    ADD ESP,0x8                         ; 00413508
    TEST EAX,EAX                        ; 0041350b
    JNZ 0x00413538                      ; 0041350d
        ;   XREF to: 00413538 (CONDITIONAL_JUMP)  ; LAB_00413538
    PUSH dword ptr [EBP + 0x92]         ; 0041350f
    PUSH EBX                            ; 00413515
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00413516
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041351b
    TEST EAX,EAX                        ; 0041351e
    JZ 0x00412cd0                       ; 00413520
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413526
    PUSH 0x1                            ; 00413528
    PUSH ESI                            ; 0041352a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041352b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413530
    JMP 0x00412cd0                      ; 00413533
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x3e800000                     ; 00413538
        ;   Label: LAB_00413538
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0041353d
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00413542
    TEST EAX,EAX                        ; 00413545
    JNZ 0x0041361e                      ; 00413547
        ;   XREF to: 0041361e (CONDITIONAL_JUMP)  ; LAB_0041361e
    LEA EDI,[EBP + 0xfffffeb6]          ; 0041354d
        ;   Label: LAB_0041354d
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00413553
    LEA ESI,[EBP + -0x72]               ; 00413559
    LEA EAX,[EBX + 0x20]                ; 0041355c
    FLD float ptr [EDX + 0x20]          ; 0041355f
    FLD float ptr [EDX + 0x24]          ; 00413562
    FLD float ptr [EDX + 0x28]          ; 00413565
    FXCH ST2                            ; 00413568
    FSUB float ptr [EAX]                ; 0041356a
    FXCH                                ; 0041356c
    FSUB float ptr [EAX + 0x4]          ; 0041356e
    FXCH ST2                            ; 00413571
    FSUB float ptr [EAX + 0x8]          ; 00413573
    FXCH                                ; 00413576
    FSTP float ptr [EBP + -0x72]        ; 00413578
    FXCH                                ; 0041357b
    FSTP float ptr [EBP + -0x6e]        ; 0041357d
    FSTP float ptr [EBP + -0x6a]        ; 00413580
    MOVSD ES:EDI,ESI                    ; 00413583
    MOVSD ES:EDI,ESI                    ; 00413584
    MOVSD ES:EDI,ESI                    ; 00413585
    FLD float ptr [EBP + 0xfffffeba]    ; 00413586
    FMUL ST0                            ; 0041358c
    FLD float ptr [EBP + 0xfffffeb6]    ; 0041358e
    FMUL ST0                            ; 00413594
    FADDP                               ; 00413596
    FLD float ptr [EBP + 0xfffffebe]    ; 00413598
    FMUL ST0                            ; 0041359e
    FADDP                               ; 004135a0
    FSQRT                               ; 004135a2
    FCOMP float ptr [0x005fc16c]        ; 004135a4 | DAT_005fc16c
    FNSTSW AX                           ; 004135aa
    SAHF                                ; 004135ac
    JNC 0x00413610                      ; 004135ad
        ;   XREF to: 00413610 (CONDITIONAL_JUMP)  ; LAB_00413610
    LEA EAX,[EBP + 0xfffffeb6]          ; 004135af
    PUSH EAX                            ; 004135b5
    LEA ESI,[EBP + 0xfffffeaa]          ; 004135b6
    LEA EDI,[EBP + 0xffffff76]          ; 004135bc
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004135c2
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffeaa]          ; 004135c7
    MOVSD ES:EDI,ESI                    ; 004135cd
    MOVSD ES:EDI,ESI                    ; 004135ce
    MOVSD ES:EDI,ESI                    ; 004135cf
    ADD ESP,0x4                         ; 004135d0
    FLD float ptr [EBP + 0xffffff7a]    ; 004135d3
    FSUB float ptr [EBX + 0x34]         ; 004135d9
    SUB ESP,0x4                         ; 004135dc
    FSTP float ptr [ESP]                ; 004135df
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004135e2
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004135e7
    FLD float ptr [EBP + 0x76]          ; 004135ea
    FABS                                ; 004135ed
    ADD ESP,0x4                         ; 004135ef
    FCOMP double ptr [0x005d3ac9]       ; 004135f2 | DAT_005d3ac9
    FNSTSW AX                           ; 004135f8
    SAHF                                ; 004135fa
    JNC 0x00413610                      ; 004135fb
        ;   XREF to: 00413610 (CONDITIONAL_JUMP)  ; LAB_00413610
    PUSH 0x1                            ; 004135fd
    PUSH 0x3                            ; 004135ff
    LEA EAX,[EBX + 0x158]               ; 00413601
    PUSH EAX                            ; 00413607
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00413608
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041360d
    PUSH EBX                            ; 00413610
        ;   Label: LAB_00413610
    CALL core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412b20 ; 00413611
        ;   XREF to: 00412b20 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412b20(CBatman * this_ptr)
    ADD ESP,0x4                         ; 00413616
    JMP 0x00412cd0                      ; 00413619
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x5d3a92                       ; 0041361e | = "CHero"
        ;   Label: LAB_0041361e
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00413623
    PUSH EDX                            ; 00413629
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0041362a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0041362f
    TEST EAX,EAX                        ; 00413632
    JZ 0x0041354d                       ; 00413634
        ;   XREF to: 0041354d (CONDITIONAL_JUMP)  ; LAB_0041354d
    XOR EDI,EDI                         ; 0041363a
    XOR ESI,ESI                         ; 0041363c
    MOV EAX,[0x00622c18]                ; 0041363e | g_CDemonSetPtr
        ;   Label: LAB_0041363e
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 00413643 | g_CDemonSetInstance.enemy_count
    JGE 0x00413675                      ; 00413649
        ;   XREF to: 00413675 (CONDITIONAL_JUMP)  ; LAB_00413675
    MOV ECX,dword ptr [0x007c3820]      ; 0041364b | g_CBatmanClassInfo.name_hash
    PUSH ECX                            ; 00413651
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 00413652
    PUSH EDX                            ; 00413659
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0041365a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0041365f
    TEST EAX,EAX                        ; 00413662
    JNZ 0x0041366c                      ; 00413664
        ;   XREF to: 0041366c (CONDITIONAL_JUMP)  ; LAB_0041366c
    INC ESI                             ; 00413666
        ;   Label: LAB_00413666
    ADD EDI,0x4                         ; 00413667
    JMP 0x0041363e                      ; 0041366a
        ;   XREF to: 0041363e (UNCONDITIONAL_JUMP)  ; LAB_0041363e
    CMP dword ptr [EAX + 0xc308],0x0    ; 0041366c
        ;   Label: LAB_0041366c
    JZ 0x00413666                       ; 00413673
        ;   XREF to: 00413666 (CONDITIONAL_JUMP)  ; LAB_00413666
    MOV EAX,[0x00622c18]                ; 00413675 | g_CDemonSetPtr
        ;   Label: LAB_00413675
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 0041367a | g_CDemonSetInstance.enemy_count
    JNZ 0x0041354d                      ; 00413680
        ;   XREF to: 0041354d (CONDITIONAL_JUMP)  ; LAB_0041354d
    PUSH 0x1                            ; 00413686
    PUSH 0xd                            ; 00413688
    LEA EAX,[EBX + 0x158]               ; 0041368a
    PUSH EAX                            ; 00413690
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00413691
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413696
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00413699
    LEA EDX,[EBX + 0xc310]              ; 0041369f
    ADD EAX,0x20                        ; 004136a5
    MOV dword ptr [EBX + 0xc308],0x1    ; 004136a8
    CMP EDX,EAX                         ; 004136b2
    JZ 0x004136c6                       ; 004136b4
        ;   XREF to: 004136c6 (CONDITIONAL_JUMP)  ; LAB_004136c6
    MOV ECX,dword ptr [EAX]             ; 004136b6
    MOV dword ptr [EDX],ECX             ; 004136b8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004136ba
    MOV dword ptr [EDX + 0x4],ECX       ; 004136bd
    MOV ECX,dword ptr [EAX + 0x8]       ; 004136c0
    MOV dword ptr [EDX + 0x8],ECX       ; 004136c3
    MOV EAX,0xd                         ; 004136c6
        ;   Label: LAB_004136c6
    PUSH 0x5d3a98                       ; 004136cb | = "batman-disappear.wav"
    MOV dword ptr [EBP + 0x72],EAX      ; 004136d0
    PUSH EBX                            ; 004136d3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004136d4
    MOV dword ptr [EBX + 0xc30c],0x0    ; 004136da
    CALL dword ptr [EAX + 0x2c]         ; 004136e4
    ADD ESP,0x8                         ; 004136e7
    JMP 0x00412cd0                      ; 004136ea
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 004136ef
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004136f5
    PUSH EBX                            ; 004136fb
    CALL dword ptr [EAX + 0x144]        ; 004136fc
    ADD ESP,0x8                         ; 00413702
    LEA EAX,[EBX + 0x158]               ; 00413705
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0041370b
    MOV dword ptr [EBP + 0x4a],EAX      ; 00413711
    TEST EDX,EDX                        ; 00413714
    JNZ 0x00413754                      ; 00413716
        ;   XREF to: 00413754 (CONDITIONAL_JUMP)  ; LAB_00413754
    PUSH dword ptr [EBP + 0x92]         ; 00413718
    PUSH EBX                            ; 0041371e
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0041371f
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00413724
    TEST EAX,EAX                        ; 00413727
    JZ 0x00413740                       ; 00413729
        ;   XREF to: 00413740 (CONDITIONAL_JUMP)  ; LAB_00413740
    PUSH 0x1                            ; 0041372b
    PUSH 0x1                            ; 0041372d
    MOV EDI,dword ptr [EBP + 0x4a]      ; 0041372f
    PUSH EDI                            ; 00413732
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00413733
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413738
    JMP 0x00412cd0                      ; 0041373b
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413740
        ;   Label: LAB_00413740
    PUSH EAX                            ; 00413742
    MOV ESI,dword ptr [EBP + 0x4a]      ; 00413743
    PUSH ESI                            ; 00413746
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00413747
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041374c
    JMP 0x00412cd0                      ; 0041374f
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x005fc16c]                ; 00413754 | DAT_005fc16c
        ;   Label: LAB_00413754
    PUSH 0x3e32b8c2                     ; 00413759
    MOV dword ptr [EBP + 0x46],EAX      ; 0041375e
    LEA EAX,[EBX + 0x249c]              ; 00413761
    PUSH 0x3f000000                     ; 00413767
    MOV dword ptr [EAX + 0x8],0x0       ; 0041376c
    XOR ECX,ECX                         ; 00413773
    MOV EDX,dword ptr [EAX + 0x8]       ; 00413775
    MOV dword ptr [EAX + 0x4],EDX       ; 00413778
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041377b
    MOV dword ptr [EAX],EDX             ; 0041377e
    MOV EAX,dword ptr [EBP + 0x46]      ; 00413780
    MOV dword ptr [EBP + -0x1e],ECX     ; 00413783
    MOV dword ptr [EBP + -0x16],EAX     ; 00413786
    LEA EAX,[EBP + -0x1e]               ; 00413789
    MOV dword ptr [EBP + -0x1a],ECX     ; 0041378c
    PUSH EAX                            ; 0041378f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00413790
    PUSH EAX                            ; 00413796
    MOV EDX,dword ptr [EAX + 0x154]     ; 00413797
    CALL dword ptr [EDX + 0xc4]         ; 0041379d
    ADD ESP,0x4                         ; 004137a3
    PUSH EAX                            ; 004137a6
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004137a7
    ADD EAX,0x20                        ; 004137ad
    PUSH EAX                            ; 004137b0
    PUSH EBX                            ; 004137b1
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004137b2
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004137b7
    TEST EAX,EAX                        ; 004137ba
    JL 0x00412cd0                       ; 004137bc
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    LEA EDI,[EBP + 0xffffff46]          ; 004137c2
    LEA EDX,[EBX + 0x20]                ; 004137c8
    LEA ESI,[EBP + 0x1e]                ; 004137cb
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 004137ce
    FLD float ptr [EDX]                 ; 004137d4
    FLD float ptr [EDX + 0x4]           ; 004137d6
    FLD float ptr [EDX + 0x8]           ; 004137d9
    FXCH ST2                            ; 004137dc
    FSUB float ptr [ECX + 0x20]         ; 004137de
    FXCH                                ; 004137e1
    FSUB float ptr [ECX + 0x24]         ; 004137e3
    FXCH ST2                            ; 004137e6
    FSUB float ptr [ECX + 0x28]         ; 004137e8
    FXCH                                ; 004137eb
    FSTP float ptr [EBP + 0x1e]         ; 004137ed
    FXCH                                ; 004137f0
    FSTP float ptr [EBP + 0x22]         ; 004137f2
    FSTP float ptr [EBP + 0x26]         ; 004137f5
    MOVSD ES:EDI,ESI                    ; 004137f8
    MOVSD ES:EDI,ESI                    ; 004137f9
    MOVSD ES:EDI,ESI                    ; 004137fa
    FLD float ptr [EBP + 0xffffff46]    ; 004137fb
    FMUL ST0                            ; 00413801
    FLD float ptr [EBP + 0xffffff4e]    ; 00413803
    FMUL ST0                            ; 00413809
    FADDP                               ; 0041380b
    FSQRT                               ; 0041380d
    XOR EDI,EDI                         ; 0041380f
    ADD ECX,0x20                        ; 00413811
    MOV dword ptr [EBP + 0xffffff4a],EDI ; 00413814
    FSTP float ptr [EBP + 0x3a]         ; 0041381a
    MOV EAX,dword ptr [EBP + 0x3a]      ; 0041381d
    FLD float ptr [EBP + 0x3a]          ; 00413820
    MOV dword ptr [EBP + 0x3e],EAX      ; 00413823
    FCOMP float ptr [EBP + 0x46]        ; 00413826
    FNSTSW AX                           ; 00413829
    SAHF                                ; 0041382b
    JA 0x004138fb                       ; 0041382c
        ;   XREF to: 004138fb (CONDITIONAL_JUMP)  ; LAB_004138fb
    FLD float ptr [EBX + 0xc1e4]        ; 00413832
    FLDZ                                ; 00413838
    FCOMPP                              ; 0041383a
    FNSTSW AX                           ; 0041383c
    SAHF                                ; 0041383e
    JC 0x004138fb                       ; 0041383f
        ;   XREF to: 004138fb (CONDITIONAL_JUMP)  ; LAB_004138fb
    FLD float ptr [ECX]                 ; 00413845
    FLD float ptr [ECX + 0x4]           ; 00413847
    FLD float ptr [ECX + 0x8]           ; 0041384a
    LEA EDI,[EBP + 0xfffffece]          ; 0041384d
    LEA ESI,[EBP + 0xffffff5e]          ; 00413853
    LEA EAX,[EBP + 0xfffffece]          ; 00413859
    FXCH ST2                            ; 0041385f
    FSUB float ptr [EDX]                ; 00413861
    FXCH                                ; 00413863
    FSUB float ptr [EDX + 0x4]          ; 00413865
    FXCH ST2                            ; 00413868
    FSUB float ptr [EDX + 0x8]          ; 0041386a
    FXCH                                ; 0041386d
    FSTP float ptr [EBP + 0xffffff5e]   ; 0041386f
    FXCH                                ; 00413875
    FSTP float ptr [EBP + 0xffffff62]   ; 00413877
    FSTP float ptr [EBP + 0xffffff66]   ; 0041387d
    MOVSD ES:EDI,ESI                    ; 00413883
    MOVSD ES:EDI,ESI                    ; 00413884
    MOVSD ES:EDI,ESI                    ; 00413885
    PUSH EAX                            ; 00413886
    LEA ESI,[EBP + 0xfffffef2]          ; 00413887
    LEA EDI,[EBP + 0xfffffeda]          ; 0041388d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00413893
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffef2]          ; 00413898
    MOVSD ES:EDI,ESI                    ; 0041389e
    MOVSD ES:EDI,ESI                    ; 0041389f
    MOVSD ES:EDI,ESI                    ; 004138a0
    ADD ESP,0x4                         ; 004138a1
    FLD float ptr [EBP + 0xfffffede]    ; 004138a4
    FSUB float ptr [EBX + 0x34]         ; 004138aa
    SUB ESP,0x4                         ; 004138ad
    FSTP float ptr [ESP]                ; 004138b0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004138b3
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004138b8
    FLD float ptr [EBP + 0x76]          ; 004138bb
    FABS                                ; 004138be
    ADD ESP,0x4                         ; 004138c0
    FCOMP double ptr [0x005d3ac9]       ; 004138c3 | DAT_005d3ac9
    FNSTSW AX                           ; 004138c9
    SAHF                                ; 004138cb
    JNC 0x004138fb                      ; 004138cc
        ;   XREF to: 004138fb (CONDITIONAL_JUMP)  ; LAB_004138fb
    PUSH 0x1                            ; 004138ce
    PUSH 0x3                            ; 004138d0
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004138d2
    PUSH EAX                            ; 004138d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004138d6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004138db
    MOV EDX,dword ptr [EBX + 0xc320]    ; 004138de
    PUSH EDX                            ; 004138e4
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 004138e5
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004138ef
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004138f4
    TEST EAX,EAX                        ; 004138f7
    JZ 0x00413925                       ; 004138f9
        ;   XREF to: 00413925 (CONDITIONAL_JUMP)  ; LAB_00413925
    FLD float ptr [EBP + 0x3e]          ; 004138fb
        ;   Label: LAB_004138fb
    FCOMP float ptr [EBX + 0xc1e0]      ; 004138fe
    FNSTSW AX                           ; 00413904
    SAHF                                ; 00413906
    JBE 0x00412cd0                      ; 00413907
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 0041390d
    PUSH 0x0                            ; 0041390f
    LEA EAX,[EBX + 0x158]               ; 00413911
    PUSH EAX                            ; 00413917
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00413918
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041391d
    JMP 0x00412cd0                      ; 00413920
        ;   XREF to: 00412cd0 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ECX,dword ptr [EBX + 0xc324]    ; 00413925
        ;   Label: LAB_00413925
    PUSH ECX                            ; 0041392b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 0041392c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00413931
    TEST EAX,EAX                        ; 00413934
    JNZ 0x004138fb                      ; 00413936
        ;   XREF to: 004138fb (CONDITIONAL_JUMP)  ; LAB_004138fb
    PUSH 0x5d3aad                       ; 00413938 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041393d
    PUSH EBX                            ; 00413943
    CALL dword ptr [EAX + 0x2c]         ; 00413944
    ADD ESP,0x8                         ; 00413947
    MOV dword ptr [EBX + 0xc324],EAX    ; 0041394a
    JMP 0x004138fb                      ; 00413950
        ;   XREF to: 004138fb (UNCONDITIONAL_JUMP)  ; LAB_004138fb
    CMP EDI,0xd                         ; 00413952
        ;   Label: LAB_00413952
    JA 0x00412cd0                       ; 00413955
        ;   XREF to: 00412cd0 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EDI*0x4 + 0x412b68]  ; 0041395b | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD

