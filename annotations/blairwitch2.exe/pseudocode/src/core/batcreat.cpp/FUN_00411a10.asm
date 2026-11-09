; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batcreat_cpp_FUN_00411a10(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004119ec = 00411df5
;   TerminatedCString s_s_confused_while_walking_005cb87d
;   TerminatedCString s_batman_attack_wav_005cb8a7
;   TerminatedCString s_batman_alert_wav_005cb8ba
;   TerminatedCString s_batman_attack_wav_005cb8cb
;   TerminatedCString s_batman_attack_wav_005cb8de
;   undefined4 DAT_005cb8f6
;   undefined4 DAT_005cb8fe
;   undefined4 DAT_005f2edc
;   undefined4 DAT_005f2ee8
;   CConsole* g_CConsolePtr = 007c158c
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 DAT_007bc754
;   CConsole g_CConsoleInstance
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040d060
;   core_actor.cpp_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00424430
;   core_charactr.cpp_FUN_00424470
;   core_charactr.cpp_FUN_004287f0
;   core_charactr.cpp_FUN_00429e90
;   core_charactr.cpp_FUN_0042b2a0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411a10
        ;   Label: core_batcreat.cpp_FUN_00411a10
    PUSH ESI                            ; 00411a11
    PUSH EDI                            ; 00411a12
    PUSH EBP                            ; 00411a13
    MOV EBP,ESP                         ; 00411a14
    SUB ESP,0x1f0                       ; 00411a16
    SUB EBP,0x7a                        ; 00411a1c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00411a1f
    PUSH dword ptr [EBP + 0x92]         ; 00411a25
    PUSH EBX                            ; 00411a2b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 00411a2c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00411a31
    TEST EAX,EAX                        ; 00411a34
    JZ 0x00411c69                       ; 00411a36
        ;   XREF to: 00411c69 (CONDITIONAL_JUMP)  ; LAB_00411c69
    LEA EAX,[EBX + 0x2508]              ; 00411a3c
    MOV dword ptr [EAX + 0x8],0x0       ; 00411a42
    FLD float ptr [EBP + 0x92]          ; 00411a49
    MOV EDX,dword ptr [EAX + 0x8]       ; 00411a4f
    MOV dword ptr [EAX + 0x4],EDX       ; 00411a52
    MOV EDX,dword ptr [EAX + 0x4]       ; 00411a55
    MOV dword ptr [EAX],EDX             ; 00411a58
    FMUL float ptr [EBX + 0x10a60]      ; 00411a5a
    LEA ESI,[EBX + 0x2b4]               ; 00411a60
    FSTP float ptr [EBP + 0x52]         ; 00411a66
    FLD float ptr [EBP + 0x52]          ; 00411a69
        ;   Label: LAB_00411a69
    FLDZ                                ; 00411a6c
    FCOMPP                              ; 00411a6e
    FNSTSW AX                           ; 00411a70
    SAHF                                ; 00411a72
    JC 0x00411c71                       ; 00411a73
        ;   XREF to: 00411c71 (CONDITIONAL_JUMP)  ; LAB_00411c71
    FLD float ptr [EBP + 0x92]          ; 00411a79
    FMUL float ptr [EBX + 0x10a60]      ; 00411a7f
    SUB ESP,0x4                         ; 00411a85
    MOV EAX,dword ptr [EBX + 0x2510]    ; 00411a88
    MOV dword ptr [EBX + 0x2594],EAX    ; 00411a8e
    FSTP float ptr [ESP]                ; 00411a94
    PUSH EBX                            ; 00411a97
    CALL core_charactr.cpp_FUN_0042b2a0 ; 00411a98
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 00411a9d
    LEA EAX,[EBX + 0x2b4]               ; 00411aa0
    PUSH EAX                            ; 00411aa6
    MOV dword ptr [EBP + 0x6a],EAX      ; 00411aa7
    CALL core_motion.cpp_FUN_005035c0   ; 00411aaa
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00411aaf
    PUSH dword ptr [EBP + 0x92]         ; 00411ab2
    MOV EAX,dword ptr [EAX + 0x24]      ; 00411ab8
    PUSH EBX                            ; 00411abb
    MOV dword ptr [EBP + 0x62],EAX      ; 00411abc
    CALL core_charactr.cpp_FUN_004287f0 ; 00411abf
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00411ac4
    TEST EAX,EAX                        ; 00411ac7
    JZ 0x00412483                       ; 00411ac9
        ;   XREF to: 00412483 (CONDITIONAL_JUMP)  ; LAB_00412483
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00411acf
    CMP EAX,0x2                         ; 00411ad5
    JNC 0x00411cb8                      ; 00411ad8
        ;   XREF to: 00411cb8 (CONDITIONAL_JUMP)  ; LAB_00411cb8
    CMP EAX,0x1                         ; 00411ade
    JNZ 0x00411cc3                      ; 00411ae1
        ;   XREF to: 00411cc3 (CONDITIONAL_JUMP)  ; LAB_00411cc3
    PUSH 0x1                            ; 00411ae7
        ;   Label: LAB_00411ae7
    PUSH 0x1                            ; 00411ae9
    LEA EAX,[EBX + 0x2b4]               ; 00411aeb
        ;   Label: LAB_00411aeb
    PUSH EAX                            ; 00411af1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00411af2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00411af7
        ;   Label: LAB_00411af7
    LEA EAX,[EBX + 0x2508]              ; 00411afa
    MOV dword ptr [EAX + 0x8],0x0       ; 00411b00
    MOV EDX,dword ptr [EAX + 0x8]       ; 00411b07
    MOV dword ptr [EAX + 0x4],EDX       ; 00411b0a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00411b0d
    MOV dword ptr [EAX],EDX             ; 00411b10
    FLD float ptr [EBX + 0x10a74]       ; 00411b12
        ;   Label: caseD_2
    FLDZ                                ; 00411b18
    FCOMPP                              ; 00411b1a
    FNSTSW AX                           ; 00411b1c
    SAHF                                ; 00411b1e
    JNC 0x00411b33                      ; 00411b1f
        ;   XREF to: 00411b33 (CONDITIONAL_JUMP)  ; LAB_00411b33
    FLD float ptr [EBX + 0x10a74]       ; 00411b21
    FSUB float ptr [EBP + 0x92]         ; 00411b27
    FSTP float ptr [EBX + 0x10a74]      ; 00411b2d
    PUSH EBX                            ; 00411b33
        ;   Label: LAB_00411b33
    CALL core_charactr.cpp_FUN_00424430 ; 00411b34
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00411b39
    TEST EAX,EAX                        ; 00411b3c
    JZ 0x00411c42                       ; 00411b3e
        ;   XREF to: 00411c42 (CONDITIONAL_JUMP)  ; LAB_00411c42
    PUSH dword ptr [EBP + 0x92]         ; 00411b44
    PUSH EBX                            ; 00411b4a
    LEA ESI,[EBX + 0x2588]              ; 00411b4b
    CALL core_charactr.cpp_FUN_00423a10 ; 00411b51
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 00411b56
    FMUL float ptr [EBP + 0x92]         ; 00411b58
    FLD float ptr [ESI + 0x4]           ; 00411b5e
    FMUL float ptr [EBP + 0x92]         ; 00411b61
    FLD float ptr [ESI + 0x8]           ; 00411b67
    FMUL float ptr [EBP + 0x92]         ; 00411b6a
    LEA EDI,[EBP + 0xffffff62]          ; 00411b70
    LEA ESI,[EBP + 0xffffff0e]          ; 00411b76
    FXCH ST2                            ; 00411b7c
    FSTP float ptr [EBP + 0xffffff0e]   ; 00411b7e
    FSTP float ptr [EBP + 0xffffff12]   ; 00411b84
    FSTP float ptr [EBP + 0xffffff16]   ; 00411b8a
    MOVSD ES:EDI,ESI                    ; 00411b90
    MOVSD ES:EDI,ESI                    ; 00411b91
    MOVSD ES:EDI,ESI                    ; 00411b92
    LEA EDX,[EBX + 0x257c]              ; 00411b93
    FLD float ptr [EBP + 0xffffff62]    ; 00411b99
    FLD float ptr [EBP + 0xffffff66]    ; 00411b9f
    FLD float ptr [EBP + 0xffffff6a]    ; 00411ba5
    LEA EDI,[EBP + 0x22]                ; 00411bab
    LEA ESI,[EBP + 0xfffffed2]          ; 00411bae
    FXCH ST2                            ; 00411bb4
    FADD float ptr [EDX]                ; 00411bb6
    FXCH                                ; 00411bb8
    FADD float ptr [EDX + 0x4]          ; 00411bba
    FXCH ST2                            ; 00411bbd
    FADD float ptr [EDX + 0x8]          ; 00411bbf
    FXCH                                ; 00411bc2
    FSTP float ptr [EBP + 0xfffffed2]   ; 00411bc4
    FXCH                                ; 00411bca
    FSTP float ptr [EBP + 0xfffffed6]   ; 00411bcc
    FSTP float ptr [EBP + 0xfffffeda]   ; 00411bd2
    MOVSD ES:EDI,ESI                    ; 00411bd8
    MOVSD ES:EDI,ESI                    ; 00411bd9
    MOVSD ES:EDI,ESI                    ; 00411bda
    LEA EAX,[EBX + 0x2508]              ; 00411bdb
    FLD float ptr [EBP + 0x22]          ; 00411be1
    FLD float ptr [EBP + 0x26]          ; 00411be4
    FLD float ptr [EBP + 0x2a]          ; 00411be7
    LEA EDI,[EBP + 0x16]                ; 00411bea
    LEA ESI,[EBP + -0x26]               ; 00411bed
    FXCH ST2                            ; 00411bf0
    FADD float ptr [EAX]                ; 00411bf2
    FXCH                                ; 00411bf4
    FADD float ptr [EAX + 0x4]          ; 00411bf6
    FXCH ST2                            ; 00411bf9
    FADD float ptr [EAX + 0x8]          ; 00411bfb
    FXCH                                ; 00411bfe
    FSTP float ptr [EBP + -0x26]        ; 00411c00
    FXCH                                ; 00411c03
    FSTP float ptr [EBP + -0x22]        ; 00411c05
    FSTP float ptr [EBP + -0x1e]        ; 00411c08
    MOVSD ES:EDI,ESI                    ; 00411c0b
    MOVSD ES:EDI,ESI                    ; 00411c0c
    MOVSD ES:EDI,ESI                    ; 00411c0d
    MOV dword ptr [EDX + 0x8],0x0       ; 00411c0e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00411c15
    MOV dword ptr [EDX + 0x4],ECX       ; 00411c18
    MOV ECX,dword ptr [EDX + 0x4]       ; 00411c1b
    MOV dword ptr [EDX],ECX             ; 00411c1e
    MOV dword ptr [EAX + 0x8],0x0       ; 00411c20
    ADD ESP,0x8                         ; 00411c27
    MOV EDX,dword ptr [EAX + 0x8]       ; 00411c2a
    MOV dword ptr [EAX + 0x4],EDX       ; 00411c2d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00411c30
    MOV dword ptr [EAX],EDX             ; 00411c33
    LEA EAX,[EBP + 0x16]                ; 00411c35
    PUSH EAX                            ; 00411c38
    PUSH EBX                            ; 00411c39
    CALL core_charactr.cpp_FUN_00423a60 ; 00411c3a
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00411c3f
    PUSH EBX                            ; 00411c42
        ;   Label: LAB_00411c42
    CALL core_charactr.cpp_FUN_00424470 ; 00411c43
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00411c48
    LEA EAX,[EBX + 0x2b4]               ; 00411c4b
    PUSH EAX                            ; 00411c51
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 00411c52
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411c57
    PUSH dword ptr [EBP + 0x92]         ; 00411c5a
    PUSH EBX                            ; 00411c60
    CALL core_charactr.cpp_FUN_00429e90 ; 00411c61
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00411c66
    LEA ESP,[EBP + 0x7a]                ; 00411c69
        ;   Label: LAB_00411c69
    POP EBP                             ; 00411c6c
    POP EDI                             ; 00411c6d
    POP ESI                             ; 00411c6e
    POP EBX                             ; 00411c6f
    RET                                 ; 00411c70
    LEA EAX,[EBP + 0x52]                ; 00411c71
        ;   Label: LAB_00411c71
    PUSH EAX                            ; 00411c74
    PUSH ESI                            ; 00411c75
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 00411c76
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00411c7b
    PUSH EAX                            ; 00411c7e
    PUSH EBX                            ; 00411c7f
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00411c80
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00411c85
    JMP 0x00411a69                      ; 00411c88
        ;   XREF to: 00411a69 (UNCONDITIONAL_JUMP)  ; LAB_00411a69
    PUSH 0x1                            ; 00411c8d
        ;   Label: LAB_00411c8d
    PUSH 0x0                            ; 00411c8f
    LEA EAX,[EBX + 0x2b4]               ; 00411c91
    PUSH EAX                            ; 00411c97
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00411c98
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00411c9d
    PUSH EBX                            ; 00411ca0
    MOV EAX,0x5cb87d                    ; 00411ca1 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00411ca6 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00609ed0]      ; 00411ca7 | g_CConsolePtr
    PUSH EDI                            ; 00411cad | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00411cae
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    JMP 0x00411af7                      ; 00411cb3
        ;   XREF to: 00411af7 (UNCONDITIONAL_JUMP)  ; LAB_00411af7
    JBE 0x00411ae7                      ; 00411cb8
        ;   XREF to: 00411ae7 (CONDITIONAL_JUMP)  ; LAB_00411ae7
        ;   Label: LAB_00411cb8
    CMP EAX,0x3                         ; 00411cbe
    JZ 0x00411c8d                       ; 00411cc1
        ;   XREF to: 00411c8d (CONDITIONAL_JUMP)  ; LAB_00411c8d
    PUSH 0x1                            ; 00411cc3
        ;   Label: LAB_00411cc3
    PUSH 0x0                            ; 00411cc5
    JMP 0x00411aeb                      ; 00411cc7
        ;   XREF to: 00411aeb (UNCONDITIONAL_JUMP)  ; LAB_00411aeb
    MOV ESI,dword ptr [EBX + 0x10a64]   ; 00411ccc
        ;   Label: caseD_8
    TEST ESI,ESI                        ; 00411cd2
    JNZ 0x00411b12                      ; 00411cd4
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 00411cda
    JNZ 0x00411b12                      ; 00411ce1
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH ESI                            ; 00411ce7
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00411ce8
    PUSH EAX                            ; 00411ceb
    LEA ESI,[EBP + -0x6e]               ; 00411cec
    LEA EDI,[EBP + -0x7a]               ; 00411cef
    CALL core_skeleton.cpp_FUN_005469a0 ; 00411cf2
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 00411cf7
    LEA EAX,[EBP + -0x7a]               ; 00411cfa
    LEA ESI,[EBP + -0x6e]               ; 00411cfd
    PUSH EAX                            ; 00411d00
    MOVSD ES:EDI,ESI                    ; 00411d01
    MOVSD ES:EDI,ESI                    ; 00411d02
    MOVSD ES:EDI,ESI                    ; 00411d03
    PUSH EBX                            ; 00411d04
    LEA ESI,[EBP + 0xfffffec6]          ; 00411d05
    CALL core_actor.cpp_FUN_00408d70    ; 00411d0b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00411d10
    PUSH 0x0                            ; 00411d13
    LEA EAX,[EBP + 0xffffff7a]          ; 00411d15
    LEA EDI,[EBP + 0xffffff7a]          ; 00411d1b
    PUSH EAX                            ; 00411d21
    MOV EDX,dword ptr [0x006167e0]      ; 00411d22 | g_CGorePtr
    LEA ESI,[EBP + 0xfffffec6]          ; 00411d28
    PUSH EDX                            ; 00411d2e
    MOVSD ES:EDI,ESI                    ; 00411d2f
    MOVSD ES:EDI,ESI                    ; 00411d30
    MOVSD ES:EDI,ESI                    ; 00411d31
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 00411d32
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00411d37
    MOV dword ptr [EBX + 0x10a64],0x1   ; 00411d3a
    JMP 0x00411b12                      ; 00411d44
        ;   XREF to: 00411b12 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffe8a]          ; 00411d49
        ;   Label: caseD_3
    PUSH EAX                            ; 00411d4f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00411d50
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00411d55
    PUSH 0x41700000                     ; 00411d58
    PUSH 0x40e00000                     ; 00411d5d
    CALL core_actor.cpp_FUN_0040cf60    ; 00411d62
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00411d67
    ADD ESP,0x8                         ; 00411d6a
    LEA EAX,[EBP + 0xfffffe8a]          ; 00411d6d
    MOV EDX,dword ptr [0x007bc754]      ; 00411d73 | DAT_007bc754
    PUSH EAX                            ; 00411d79
    LEA EAX,[EDX*0x4 + 0x0]             ; 00411d7a
    LEA ESI,[EBP + -0x56]               ; 00411d81
    SUB EAX,EDX                         ; 00411d84
    MOV dword ptr [EBP + 0xfffffebe],EBX ; 00411d86
    MOV EDX,EAX                         ; 00411d8c
    MOV dword ptr [EBP + 0xfffffec2],EBX ; 00411d8e
    SHL EDX,0x4                         ; 00411d94
    LEA EAX,[EBX + 0x1134]              ; 00411d97
    PUSH 0x3ecccccd                     ; 00411d9d
    ADD EAX,EDX                         ; 00411da2
    LEA EDI,[EBP + 0xfffffef6]          ; 00411da4
    PUSH EAX                            ; 00411daa
    FLD float ptr [EBP + 0x76]          ; 00411dab
    PUSH 0x265370c                      ; 00411dae | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffe8e]   ; 00411db3
    CALL core_xform.cpp_FUN_00591530    ; 00411db9
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 00411dbe
    LEA EAX,[EBP + 0xfffffef6]          ; 00411dc1
    LEA ESI,[EBP + -0x56]               ; 00411dc7
    PUSH EAX                            ; 00411dca
    MOVSD ES:EDI,ESI                    ; 00411dcb
    MOVSD ES:EDI,ESI                    ; 00411dcc
    MOVSD ES:EDI,ESI                    ; 00411dcd
    PUSH EBX                            ; 00411dce
    LEA ESI,[EBP + -0x3e]               ; 00411dcf
    CALL core_actor.cpp_FUN_00408d70    ; 00411dd2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00411dd7
    LEA EAX,[EBP + -0x1a]               ; 00411dda
    PUSH EAX                            ; 00411ddd
    LEA EDI,[EBP + -0x1a]               ; 00411dde
    LEA ESI,[EBP + -0x3e]               ; 00411de1
    PUSH EBX                            ; 00411de4
    MOVSD ES:EDI,ESI                    ; 00411de5
    MOVSD ES:EDI,ESI                    ; 00411de6
    MOVSD ES:EDI,ESI                    ; 00411de7
    CALL core_enemy.cpp_FUN_00488110    ; 00411de8
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00411ded
    JMP 0x00411b12                      ; 00411df0
        ;   XREF to: 00411b12 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00411df5
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00411dfb
    PUSH EBX                            ; 00411e01
    CALL dword ptr [EAX + 0x150]        ; 00411e02
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00411e08
    ADD ESP,0x8                         ; 00411e0e
    TEST EAX,EAX                        ; 00411e11
    JZ 0x004120e6                       ; 00411e13
        ;   XREF to: 004120e6 (CONDITIONAL_JUMP)  ; LAB_004120e6
    MOV EDX,EAX                         ; 00411e19
    LEA EDI,[EBP + 0x2e]                ; 00411e1b
    LEA ESI,[EBP + 0xfffffede]          ; 00411e1e
    FLD float ptr [EDX + 0x20]          ; 00411e24
    FLD float ptr [EDX + 0x24]          ; 00411e27
    LEA EAX,[EBX + 0x20]                ; 00411e2a
    FLD float ptr [EDX + 0x28]          ; 00411e2d
    FXCH ST2                            ; 00411e30
    FSUB float ptr [EAX]                ; 00411e32
    FXCH                                ; 00411e34
    FSUB float ptr [EAX + 0x4]          ; 00411e36
    FXCH ST2                            ; 00411e39
    FSUB float ptr [EAX + 0x8]          ; 00411e3b
    FXCH                                ; 00411e3e
    FSTP float ptr [EBP + 0xfffffede]   ; 00411e40
    FXCH                                ; 00411e46
    FSTP float ptr [EBP + 0xfffffee2]   ; 00411e48
    FSTP float ptr [EBP + 0xfffffee6]   ; 00411e4e
    MOVSD ES:EDI,ESI                    ; 00411e54
    MOVSD ES:EDI,ESI                    ; 00411e55
    MOVSD ES:EDI,ESI                    ; 00411e56
    FLD float ptr [EBP + 0x32]          ; 00411e57
    FMUL ST0                            ; 00411e5a
    FLD float ptr [EBP + 0x2e]          ; 00411e5c
    FMUL ST0                            ; 00411e5f
    FADDP                               ; 00411e61
    FLD float ptr [EBP + 0x36]          ; 00411e63
    FMUL ST0                            ; 00411e66
    FADDP                               ; 00411e68
    FSQRT                               ; 00411e6a
    FSTP float ptr [EBP + 0x5e]         ; 00411e6c
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00411e6f
    FLD float ptr [EBP + 0x5e]          ; 00411e72
    MOV dword ptr [EBP + 0x56],EAX      ; 00411e75
    FCOMP float ptr [0x005f2edc]        ; 00411e78 | DAT_005f2edc
    FNSTSW AX                           ; 00411e7e
    SAHF                                ; 00411e80
    JC 0x00411ffe                       ; 00411e81
        ;   XREF to: 00411ffe (CONDITIONAL_JUMP)  ; LAB_00411ffe
    FLD float ptr [EBP + 0x56]          ; 00411e87
        ;   Label: LAB_00411e87
    FCOMP float ptr [EBX + 0x10a70]     ; 00411e8a
    FNSTSW AX                           ; 00411e90
    SAHF                                ; 00411e92
    JNC 0x00411b12                      ; 00411e93
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBX + 0x2b4]               ; 00411e99
    FLD float ptr [EBP + 0x56]          ; 00411e9f
    MOV dword ptr [EBP + 0x66],EAX      ; 00411ea2
    FCOMP float ptr [0x005f2ee8]        ; 00411ea5 | DAT_005f2ee8
    FNSTSW AX                           ; 00411eab
    SAHF                                ; 00411ead
    JC 0x004120a8                       ; 00411eae
        ;   XREF to: 004120a8 (CONDITIONAL_JUMP)  ; LAB_004120a8
    PUSH 0x3dcccccd                     ; 00411eb4
    MOV dword ptr [EBX + 0x10a74],0x0   ; 00411eb9
    CALL core_actor.cpp_FUN_0040d060    ; 00411ec3
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00411ec8
    TEST EAX,EAX                        ; 00411ecb
    JZ 0x004120d9                       ; 00411ecd
        ;   XREF to: 004120d9 (CONDITIONAL_JUMP)  ; LAB_004120d9
    LEA EDI,[EBP + -0x32]               ; 00411ed3
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 00411ed6
    LEA ESI,[EBP + -0x62]               ; 00411edc
    LEA EAX,[EBX + 0x20]                ; 00411edf
    FLD float ptr [EDX + 0x20]          ; 00411ee2
    FLD float ptr [EDX + 0x24]          ; 00411ee5
    FLD float ptr [EDX + 0x28]          ; 00411ee8
    FXCH ST2                            ; 00411eeb
    FSUB float ptr [EAX]                ; 00411eed
    FXCH                                ; 00411eef
    FSUB float ptr [EAX + 0x4]          ; 00411ef1
    FXCH ST2                            ; 00411ef4
    FSUB float ptr [EAX + 0x8]          ; 00411ef6
    FXCH                                ; 00411ef9
    FSTP float ptr [EBP + -0x62]        ; 00411efb
    FXCH                                ; 00411efe
    FSTP float ptr [EBP + -0x5e]        ; 00411f00
    FSTP float ptr [EBP + -0x5a]        ; 00411f03
    LEA EAX,[EBP + -0x32]               ; 00411f06
    MOVSD ES:EDI,ESI                    ; 00411f09
    MOVSD ES:EDI,ESI                    ; 00411f0a
    MOVSD ES:EDI,ESI                    ; 00411f0b
    PUSH EAX                            ; 00411f0c
    LEA ESI,[EBP + 0xffffff1a]          ; 00411f0d
    LEA EDI,[EBP + 0xfffffeea]          ; 00411f13
    CALL core_vecdir.cpp_FUN_005838f0   ; 00411f19
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[EBP + 0xffffff1a]          ; 00411f1e
    MOVSD ES:EDI,ESI                    ; 00411f24
    MOVSD ES:EDI,ESI                    ; 00411f25
    MOVSD ES:EDI,ESI                    ; 00411f26
    ADD ESP,0x4                         ; 00411f27
    FLD float ptr [EBP + 0xfffffeee]    ; 00411f2a
    FSUB float ptr [EBX + 0x34]         ; 00411f30
    SUB ESP,0x4                         ; 00411f33
    FSTP float ptr [ESP]                ; 00411f36
    CALL core_actor.cpp_FUN_0040d0c0    ; 00411f39
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00411f3e
    FLD float ptr [EBP + 0x76]          ; 00411f41
    FABS                                ; 00411f44
    ADD ESP,0x4                         ; 00411f46
    FCOMP double ptr [0x005cb8f6]       ; 00411f49 | DAT_005cb8f6
    FNSTSW AX                           ; 00411f4f
    SAHF                                ; 00411f51
    JNC 0x004120cc                      ; 00411f52
        ;   XREF to: 004120cc (CONDITIONAL_JUMP)  ; LAB_004120cc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00411f58
    FLD float ptr [EAX + 0x24]          ; 00411f5e
    FSUB float ptr [EBX + 0x24]         ; 00411f61
    FABS                                ; 00411f64
    FCOMP double ptr [0x005cb8fe]       ; 00411f66 | DAT_005cb8fe
    FNSTSW AX                           ; 00411f6c
    SAHF                                ; 00411f6e
    JNC 0x004120bf                      ; 00411f6f
        ;   XREF to: 004120bf (CONDITIONAL_JUMP)  ; LAB_004120bf
    PUSH 0x1                            ; 00411f75
    PUSH 0x2                            ; 00411f77
    MOV ESI,dword ptr [EBP + 0x66]      ; 00411f79
    PUSH ESI                            ; 00411f7c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00411f7d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00411f7d
    ADD ESP,0xc                         ; 00411f82
    CMP dword ptr [EBX + 0x10b3c],0x0   ; 00411f85
    JNZ 0x00411b12                      ; 00411f8c
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0x10b34]   ; 00411f92
    PUSH EDX                            ; 00411f98
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00411f99
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00411f9e
    TEST EAX,EAX                        ; 00411fa1
    JNZ 0x00411b12                      ; 00411fa3
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    MOV ECX,dword ptr [EBX + 0x10b38]   ; 00411fa9
    PUSH ECX                            ; 00411faf
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00411fb0
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00411fb5
    TEST EAX,EAX                        ; 00411fb8
    JNZ 0x00411b12                      ; 00411fba
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    MOV ESI,dword ptr [EBX + 0x10b30]   ; 00411fc0
    PUSH ESI                            ; 00411fc6
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00411fc7
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00411fcc
    TEST EAX,EAX                        ; 00411fcf
    JNZ 0x00411b12                      ; 00411fd1
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x5cb8ba                       ; 00411fd7 | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00411fdc
    PUSH EBX                            ; 00411fe2
    CALL dword ptr [EAX + 0x34]         ; 00411fe3
    MOV dword ptr [EBX + 0x10b3c],0x1   ; 00411fe6
    ADD ESP,0x8                         ; 00411ff0
    MOV dword ptr [EBX + 0x10b30],EAX   ; 00411ff3
    JMP 0x00411b12                      ; 00411ff9
        ;   XREF to: 00411b12 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0x2e]                ; 00411ffe
        ;   Label: LAB_00411ffe
    PUSH EAX                            ; 00412001
    LEA ESI,[EBP + 0xffffff4a]          ; 00412002
    LEA EDI,[EBP + 0xffffff32]          ; 00412008
    CALL core_vecdir.cpp_FUN_005838f0   ; 0041200e
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[EBP + 0xffffff4a]          ; 00412013
    MOVSD ES:EDI,ESI                    ; 00412019
    MOVSD ES:EDI,ESI                    ; 0041201a
    MOVSD ES:EDI,ESI                    ; 0041201b
    ADD ESP,0x4                         ; 0041201c
    FLD float ptr [EBP + 0xffffff36]    ; 0041201f
    FSUB float ptr [EBX + 0x34]         ; 00412025
    SUB ESP,0x4                         ; 00412028
    FSTP float ptr [ESP]                ; 0041202b
    CALL core_actor.cpp_FUN_0040d0c0    ; 0041202e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00412033
    FLD float ptr [EBP + 0x76]          ; 00412036
    FABS                                ; 00412039
    ADD ESP,0x4                         ; 0041203b
    FCOMP double ptr [0x005cb8f6]       ; 0041203e | DAT_005cb8f6
    FNSTSW AX                           ; 00412044
    SAHF                                ; 00412046
    JNC 0x00411e87                      ; 00412047
        ;   XREF to: 00411e87 (CONDITIONAL_JUMP)  ; LAB_00411e87
    PUSH 0x1                            ; 0041204d
    PUSH 0x3                            ; 0041204f
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00412051
    PUSH ECX                            ; 00412054
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00412055
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041205a
    MOV ESI,dword ptr [EBX + 0x10b34]   ; 0041205d
    PUSH ESI                            ; 00412063
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00412064
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00412069
    TEST EAX,EAX                        ; 0041206c
    JNZ 0x00411e87                      ; 0041206e
        ;   XREF to: 00411e87 (CONDITIONAL_JUMP)  ; LAB_00411e87
    MOV EDI,dword ptr [EBX + 0x10b38]   ; 00412074
    PUSH EDI                            ; 0041207a
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041207b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00412080
    TEST EAX,EAX                        ; 00412083
    JNZ 0x00411e87                      ; 00412085
        ;   XREF to: 00411e87 (CONDITIONAL_JUMP)  ; LAB_00411e87
    PUSH 0x5cb8a7                       ; 0041208b | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00412090
    PUSH EBX                            ; 00412096
    CALL dword ptr [EAX + 0x34]         ; 00412097
    ADD ESP,0x8                         ; 0041209a
    MOV dword ptr [EBX + 0x10b38],EAX   ; 0041209d
    JMP 0x00411e87                      ; 004120a3
        ;   XREF to: 00411e87 (UNCONDITIONAL_JUMP)  ; LAB_00411e87
    PUSH 0x1                            ; 004120a8
        ;   Label: LAB_004120a8
    PUSH 0x1                            ; 004120aa
    MOV EDI,dword ptr [EBP + 0x66]      ; 004120ac
    PUSH EDI                            ; 004120af
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004120b0
    JMP 0x00411f7d                      ; 004120ba
        ;   XREF to: 00411f7d (UNCONDITIONAL_JUMP)  ; LAB_00411f7d
    PUSH 0x1                            ; 004120bf
        ;   Label: LAB_004120bf
    PUSH 0x1                            ; 004120c1
    MOV ECX,dword ptr [EBP + 0x66]      ; 004120c3
    PUSH ECX                            ; 004120c6
    JMP 0x00411f7d                      ; 004120c7
        ;   XREF to: 00411f7d (UNCONDITIONAL_JUMP)  ; LAB_00411f7d
    PUSH 0x1                            ; 004120cc
        ;   Label: LAB_004120cc
    PUSH 0x1                            ; 004120ce
    MOV EDX,dword ptr [EBP + 0x66]      ; 004120d0
    PUSH EDX                            ; 004120d3
    JMP 0x00411f7d                      ; 004120d4
        ;   XREF to: 00411f7d (UNCONDITIONAL_JUMP)  ; LAB_00411f7d
    PUSH 0x1                            ; 004120d9
        ;   Label: LAB_004120d9
    PUSH 0x1                            ; 004120db
    MOV EAX,dword ptr [EBP + 0x66]      ; 004120dd
    PUSH EAX                            ; 004120e0
    JMP 0x00411f7d                      ; 004120e1
        ;   XREF to: 00411f7d (UNCONDITIONAL_JUMP)  ; LAB_00411f7d
    PUSH dword ptr [EBP + 0x92]         ; 004120e6
        ;   Label: LAB_004120e6
    PUSH EBX                            ; 004120ec
    CALL core_enemy.cpp_FUN_00488970    ; 004120ed
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004120f2
    TEST EAX,EAX                        ; 004120f5
    JZ 0x00411b12                       ; 004120f7
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004120fd
    PUSH 0x1                            ; 004120ff
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00412101
    PUSH EDX                            ; 00412104
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00412105
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041210a
    JMP 0x00411b12                      ; 0041210d
        ;   XREF to: 00411b12 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00412112
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00412118
    PUSH EBX                            ; 0041211e
    CALL dword ptr [EAX + 0x150]        ; 0041211f
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 00412125
    ADD ESP,0x8                         ; 0041212b
    TEST ECX,ECX                        ; 0041212e
    JNZ 0x0041216e                      ; 00412130
        ;   XREF to: 0041216e (CONDITIONAL_JUMP)  ; LAB_0041216e
    PUSH dword ptr [EBP + 0x92]         ; 00412132
    PUSH EBX                            ; 00412138
    CALL core_enemy.cpp_FUN_00488970    ; 00412139
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041213e
    TEST EAX,EAX                        ; 00412141
    JZ 0x0041215a                       ; 00412143
        ;   XREF to: 0041215a (CONDITIONAL_JUMP)  ; LAB_0041215a
    PUSH 0x1                            ; 00412145
    PUSH 0x1                            ; 00412147
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00412149
    PUSH EDI                            ; 0041214c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041214d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412152
    JMP 0x00411b12                      ; 00412155
        ;   XREF to: 00411b12 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0041215a
        ;   Label: LAB_0041215a
    PUSH EAX                            ; 0041215c
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0041215d
    PUSH ESI                            ; 00412160
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00412161
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412166
    JMP 0x00411b12                      ; 00412169
        ;   XREF to: 00411b12 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x005f2edc]                ; 0041216e | DAT_005f2edc
        ;   Label: LAB_0041216e
    PUSH 0x3e32b8c2                     ; 00412173
    MOV dword ptr [EBP + 0x72],EAX      ; 00412178
    LEA EAX,[EBX + 0x2508]              ; 0041217b
    PUSH 0x3f000000                     ; 00412181
    MOV dword ptr [EAX + 0x8],0x0       ; 00412186
    XOR ESI,ESI                         ; 0041218d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041218f
    MOV dword ptr [EAX + 0x4],EDX       ; 00412192
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412195
    MOV dword ptr [EAX],EDX             ; 00412198
    MOV EAX,dword ptr [EBP + 0x72]      ; 0041219a
    MOV dword ptr [EBP + 0xffffff02],ESI ; 0041219d
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 004121a3
    LEA EAX,[EBP + 0xffffff02]          ; 004121a9
    MOV dword ptr [EBP + 0xffffff06],ESI ; 004121af
    PUSH EAX                            ; 004121b5
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004121b6
    PUSH EAX                            ; 004121bc
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004121bd
    CALL dword ptr [EDX + 0xcc]         ; 004121c3
    ADD ESP,0x4                         ; 004121c9
    PUSH EAX                            ; 004121cc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004121cd
    ADD EAX,0x20                        ; 004121d3
    PUSH EAX                            ; 004121d6
    PUSH EBX                            ; 004121d7
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004121d8
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004121dd
    TEST EAX,EAX                        ; 004121e0
    JL 0x00411b12                       ; 004121e2
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + 0xa]                 ; 004121e8
    LEA EDX,[EBX + 0x20]                ; 004121eb
    LEA ESI,[EBP + 0x3a]                ; 004121ee
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004121f1
    FLD float ptr [EDX]                 ; 004121f7
    FLD float ptr [EDX + 0x4]           ; 004121f9
    FLD float ptr [EDX + 0x8]           ; 004121fc
    FXCH ST2                            ; 004121ff
    FSUB float ptr [EAX + 0x20]         ; 00412201
    FXCH                                ; 00412204
    FSUB float ptr [EAX + 0x24]         ; 00412206
    FXCH ST2                            ; 00412209
    FSUB float ptr [EAX + 0x28]         ; 0041220b
    FXCH                                ; 0041220e
    FSTP float ptr [EBP + 0x3a]         ; 00412210
    FXCH                                ; 00412213
    FSTP float ptr [EBP + 0x3e]         ; 00412215
    FSTP float ptr [EBP + 0x42]         ; 00412218
    MOVSD ES:EDI,ESI                    ; 0041221b
    MOVSD ES:EDI,ESI                    ; 0041221c
    MOVSD ES:EDI,ESI                    ; 0041221d
    FLD float ptr [EBP + 0xa]           ; 0041221e
    FMUL ST0                            ; 00412221
    FLD float ptr [EBP + 0x12]          ; 00412223
    FMUL ST0                            ; 00412226
    XOR EAX,EAX                         ; 00412228
    FADDP                               ; 0041222a
    MOV dword ptr [EBP + 0xe],EAX       ; 0041222c
    FSQRT                               ; 0041222f
    FSTP float ptr [EBP + 0x6e]         ; 00412231
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00412234
    FLD float ptr [EBP + 0x6e]          ; 00412237
    MOV dword ptr [EBP + 0x5a],EAX      ; 0041223a
    FCOMP float ptr [0x005f2ee8]        ; 0041223d | DAT_005f2ee8
    FNSTSW AX                           ; 00412243
    SAHF                                ; 00412245
    JBE 0x00412320                      ; 00412246
        ;   XREF to: 00412320 (CONDITIONAL_JUMP)  ; LAB_00412320
    MOV ECX,dword ptr [EBP + 0x62]      ; 0041224c
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0041224f
    CMP ECX,0x1                         ; 00412259
    JNZ 0x00412320                      ; 0041225c
        ;   XREF to: 00412320 (CONDITIONAL_JUMP)  ; LAB_00412320
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00412262
    LEA EDI,[EBP + -0x2]                ; 00412268
    LEA ESI,[EBP + 0x46]                ; 0041226b
    FLD float ptr [EAX + 0x24]          ; 0041226e
    FLD float ptr [EAX + 0x28]          ; 00412271
    FLD float ptr [EAX + 0x20]          ; 00412274
    LEA EAX,[EBP + -0x2]                ; 00412277
    FSUB float ptr [EDX]                ; 0041227a
    FXCH ST2                            ; 0041227c
    FSUB float ptr [EDX + 0x4]          ; 0041227e
    FXCH                                ; 00412281
    FSUB float ptr [EDX + 0x8]          ; 00412283
    FXCH ST2                            ; 00412286
    FSTP float ptr [EBP + 0x46]         ; 00412288
    FSTP float ptr [EBP + 0x4a]         ; 0041228b
    FSTP float ptr [EBP + 0x4e]         ; 0041228e
    MOVSD ES:EDI,ESI                    ; 00412291
    MOVSD ES:EDI,ESI                    ; 00412292
    MOVSD ES:EDI,ESI                    ; 00412293
    PUSH EAX                            ; 00412294
    LEA ESI,[EBP + 0xffffff56]          ; 00412295
    LEA EDI,[EBP + -0xe]                ; 0041229b
    CALL core_vecdir.cpp_FUN_005838f0   ; 0041229e
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[EBP + 0xffffff56]          ; 004122a3
    MOVSD ES:EDI,ESI                    ; 004122a9
    MOVSD ES:EDI,ESI                    ; 004122aa
    MOVSD ES:EDI,ESI                    ; 004122ab
    ADD ESP,0x4                         ; 004122ac
    FLD float ptr [EBP + -0xa]          ; 004122af
    FSUB float ptr [EBX + 0x34]         ; 004122b2
    SUB ESP,0x4                         ; 004122b5
    FSTP float ptr [ESP]                ; 004122b8
    CALL core_actor.cpp_FUN_0040d0c0    ; 004122bb
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004122c0
    FLD float ptr [EBP + 0x76]          ; 004122c3
    FABS                                ; 004122c6
    ADD ESP,0x4                         ; 004122c8
    FCOMP double ptr [0x005cb8f6]       ; 004122cb | DAT_005cb8f6
    FNSTSW AX                           ; 004122d1
    SAHF                                ; 004122d3
    JNC 0x00412320                      ; 004122d4
        ;   XREF to: 00412320 (CONDITIONAL_JUMP)  ; LAB_00412320
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004122d6
    FLD float ptr [EAX + 0x24]          ; 004122dc
    FSUB float ptr [EBX + 0x24]         ; 004122df
    FABS                                ; 004122e2
    FCOMP double ptr [0x005cb8fe]       ; 004122e4 | DAT_005cb8fe
    FNSTSW AX                           ; 004122ea
    SAHF                                ; 004122ec
    JNC 0x00412320                      ; 004122ed
        ;   XREF to: 00412320 (CONDITIONAL_JUMP)  ; LAB_00412320
    PUSH 0x1                            ; 004122ef
    PUSH 0x2                            ; 004122f1
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004122f3
    PUSH ESI                            ; 004122f6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004122f7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004122fc
    MOV EDI,dword ptr [EBX + 0x10b34]   ; 004122ff
    PUSH EDI                            ; 00412305
    MOV dword ptr [EBX + 0x10a74],0x0   ; 00412306
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00412310
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00412315
    TEST EAX,EAX                        ; 00412318
    JZ 0x0041241f                       ; 0041231a
        ;   XREF to: 0041241f (CONDITIONAL_JUMP)  ; LAB_0041241f
    FLD float ptr [EBP + 0x5a]          ; 00412320
        ;   Label: LAB_00412320
    FCOMP float ptr [EBP + 0x72]        ; 00412323
    FNSTSW AX                           ; 00412326
    SAHF                                ; 00412328
    JA 0x004123f5                       ; 00412329
        ;   XREF to: 004123f5 (CONDITIONAL_JUMP)  ; LAB_004123f5
    FLD float ptr [EBX + 0x10a74]       ; 0041232f
    FLDZ                                ; 00412335
    FCOMPP                              ; 00412337
    FNSTSW AX                           ; 00412339
    SAHF                                ; 0041233b
    JC 0x004123f5                       ; 0041233c
        ;   XREF to: 004123f5 (CONDITIONAL_JUMP)  ; LAB_004123f5
    LEA EDI,[EBP + 0xffffff26]          ; 00412342
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00412348
    LEA ESI,[EBP + -0x4a]               ; 0041234e
    LEA EDX,[EBX + 0x20]                ; 00412351
    FLD float ptr [EAX + 0x24]          ; 00412354
    FLD float ptr [EAX + 0x28]          ; 00412357
    FLD float ptr [EAX + 0x20]          ; 0041235a
    LEA EAX,[EBP + 0xffffff26]          ; 0041235d
    FSUB float ptr [EDX]                ; 00412363
    FXCH ST2                            ; 00412365
    FSUB float ptr [EDX + 0x4]          ; 00412367
    FXCH                                ; 0041236a
    FSUB float ptr [EDX + 0x8]          ; 0041236c
    FXCH ST2                            ; 0041236f
    FSTP float ptr [EBP + -0x4a]        ; 00412371
    FSTP float ptr [EBP + -0x46]        ; 00412374
    FSTP float ptr [EBP + -0x42]        ; 00412377
    MOVSD ES:EDI,ESI                    ; 0041237a
    MOVSD ES:EDI,ESI                    ; 0041237b
    MOVSD ES:EDI,ESI                    ; 0041237c
    PUSH EAX                            ; 0041237d
    LEA ESI,[EBP + 0xffffff6e]          ; 0041237e
    LEA EDI,[EBP + 0xffffff3e]          ; 00412384
    CALL core_vecdir.cpp_FUN_005838f0   ; 0041238a
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[EBP + 0xffffff6e]          ; 0041238f
    MOVSD ES:EDI,ESI                    ; 00412395
    MOVSD ES:EDI,ESI                    ; 00412396
    MOVSD ES:EDI,ESI                    ; 00412397
    ADD ESP,0x4                         ; 00412398
    FLD float ptr [EBP + 0xffffff42]    ; 0041239b
    FSUB float ptr [EBX + 0x34]         ; 004123a1
    SUB ESP,0x4                         ; 004123a4
    FSTP float ptr [ESP]                ; 004123a7
    CALL core_actor.cpp_FUN_0040d0c0    ; 004123aa
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004123af
    FLD float ptr [EBP + 0x76]          ; 004123b2
    FABS                                ; 004123b5
    ADD ESP,0x4                         ; 004123b7
    FCOMP double ptr [0x005cb8f6]       ; 004123ba | DAT_005cb8f6
    FNSTSW AX                           ; 004123c0
    SAHF                                ; 004123c2
    JNC 0x004123f5                      ; 004123c3
        ;   XREF to: 004123f5 (CONDITIONAL_JUMP)  ; LAB_004123f5
    PUSH 0x1                            ; 004123c5
    PUSH 0x3                            ; 004123c7
    LEA EAX,[EBX + 0x2b4]               ; 004123c9
    PUSH EAX                            ; 004123cf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004123d0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004123d5
    MOV EDX,dword ptr [EBX + 0x10b34]   ; 004123d8
    PUSH EDX                            ; 004123de
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 004123df
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004123e9
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004123ee
    TEST EAX,EAX                        ; 004123f1
    JZ 0x00412453                       ; 004123f3
        ;   XREF to: 00412453 (CONDITIONAL_JUMP)  ; LAB_00412453
    FLD float ptr [EBP + 0x5a]          ; 004123f5
        ;   Label: LAB_004123f5
    FCOMP float ptr [EBX + 0x10a70]     ; 004123f8
    FNSTSW AX                           ; 004123fe
    SAHF                                ; 00412400
    JBE 0x00411b12                      ; 00412401
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00412407
    PUSH 0x0                            ; 00412409
    LEA EAX,[EBX + 0x2b4]               ; 0041240b
    PUSH EAX                            ; 00412411
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00412412
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412417
    JMP 0x00411b12                      ; 0041241a
        ;   XREF to: 00411b12 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0x10b38]   ; 0041241f
        ;   Label: LAB_0041241f
    PUSH EAX                            ; 00412425
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00412426
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041242b
    TEST EAX,EAX                        ; 0041242e
    JNZ 0x00412320                      ; 00412430
        ;   XREF to: 00412320 (CONDITIONAL_JUMP)  ; LAB_00412320
    PUSH 0x5cb8cb                       ; 00412436 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041243b
    PUSH EBX                            ; 00412441
    CALL dword ptr [EAX + 0x34]         ; 00412442
    ADD ESP,0x8                         ; 00412445
    MOV dword ptr [EBX + 0x10b38],EAX   ; 00412448
    JMP 0x00412320                      ; 0041244e
        ;   XREF to: 00412320 (UNCONDITIONAL_JUMP)  ; LAB_00412320
    MOV ECX,dword ptr [EBX + 0x10b38]   ; 00412453
        ;   Label: LAB_00412453
    PUSH ECX                            ; 00412459
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041245a
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041245f
    TEST EAX,EAX                        ; 00412462
    JNZ 0x004123f5                      ; 00412464
        ;   XREF to: 004123f5 (CONDITIONAL_JUMP)  ; LAB_004123f5
    PUSH 0x5cb8de                       ; 00412466 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041246b
    PUSH EBX                            ; 00412471
    CALL dword ptr [EAX + 0x34]         ; 00412472
    ADD ESP,0x8                         ; 00412475
    MOV dword ptr [EBX + 0x10b38],EAX   ; 00412478
    JMP 0x004123f5                      ; 0041247e
        ;   XREF to: 004123f5 (UNCONDITIONAL_JUMP)  ; LAB_004123f5
    MOV ECX,dword ptr [EBP + 0x62]      ; 00412483
        ;   Label: LAB_00412483
    CMP ECX,0x8                         ; 00412486
    JA 0x00411b12                       ; 00412489
        ;   XREF to: 00411b12 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,ECX                         ; 0041248f
    JMP dword ptr [EAX*0x4 + 0x4119ec]  ; 00412491 | caseD_0 | caseD_1 | caseD_7
        ;   Label: switchD

