; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004d3a70(CHotDemon *this_ptr,float delta_time)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004d3a30 = 004d3e2e
;   TerminatedCString s_s_confused_while_walking_005da608
;   TerminatedCString s_hotdemon_attack_wav_005da632
;   TerminatedCString s_hotdemon_attack_wav_005da646
;   undefined4 DAT_005da661
;   undefined4 DAT_005f885c
;   undefined4 DAT_005f8868
;   CConsole* g_CConsolePtr = 007c158c
;   CGore* g_CGorePtr = 01cb8284
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01cee014
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
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
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3a70
        ;   Label: core_hotdemon.cpp_CHotDemon_process_FUN_004d3a70
    PUSH ESI                            ; 004d3a71
    PUSH EDI                            ; 004d3a72
    PUSH EBP                            ; 004d3a73
    MOV EBP,ESP                         ; 004d3a74
    SUB ESP,0x190                       ; 004d3a76
    SUB EBP,0x7a                        ; 004d3a7c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004d3a7f
    PUSH dword ptr [EBP + 0x92]         ; 004d3a85
    PUSH EBX                            ; 004d3a8b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004d3a8c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d3a91
    TEST EAX,EAX                        ; 004d3a94
    JZ 0x004d3ca8                       ; 004d3a96
        ;   XREF to: 004d3ca8 (CONDITIONAL_JUMP)  ; LAB_004d3ca8
    LEA EAX,[EBX + 0x2508]              ; 004d3a9c
    MOV dword ptr [EAX + 0x8],0x0       ; 004d3aa2
    FLD float ptr [EBP + 0x92]          ; 004d3aa9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d3aaf
    MOV dword ptr [EAX + 0x4],EDX       ; 004d3ab2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d3ab5
    MOV dword ptr [EAX],EDX             ; 004d3ab8
    FMUL float ptr [EBX + 0x10a60]      ; 004d3aba
    LEA ESI,[EBX + 0x2b4]               ; 004d3ac0
    FSTP float ptr [EBP + 0x56]         ; 004d3ac6
    FLD float ptr [EBP + 0x56]          ; 004d3ac9
        ;   Label: LAB_004d3ac9
    FLDZ                                ; 004d3acc
    FCOMPP                              ; 004d3ace
    FNSTSW AX                           ; 004d3ad0
    SAHF                                ; 004d3ad2
    JC 0x004d3cb0                       ; 004d3ad3
        ;   XREF to: 004d3cb0 (CONDITIONAL_JUMP)  ; LAB_004d3cb0
    FLD float ptr [EBP + 0x92]          ; 004d3ad9
    FMUL float ptr [EBX + 0x10a60]      ; 004d3adf
    SUB ESP,0x4                         ; 004d3ae5
    MOV EAX,dword ptr [EBX + 0x2510]    ; 004d3ae8
    MOV dword ptr [EBX + 0x2594],EAX    ; 004d3aee
    FSTP float ptr [ESP]                ; 004d3af4
    PUSH EBX                            ; 004d3af7
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004d3af8
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004d3afd
    PUSH ESI                            ; 004d3b00
    CALL core_motion.cpp_FUN_005035c0   ; 004d3b01
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004d3b06
    PUSH dword ptr [EBP + 0x92]         ; 004d3b09
    MOV EDI,dword ptr [EAX + 0x24]      ; 004d3b0f
    PUSH EBX                            ; 004d3b12
    MOV dword ptr [EBP + 0x6e],EDI      ; 004d3b13
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 004d3b16
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d3b1b
    TEST EAX,EAX                        ; 004d3b1e
    JZ 0x004d42bf                       ; 004d3b20
        ;   XREF to: 004d42bf (CONDITIONAL_JUMP)  ; LAB_004d42bf
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004d3b26
    CMP EAX,0x2                         ; 004d3b2c
    JNC 0x004d3cf0                      ; 004d3b2f
        ;   XREF to: 004d3cf0 (CONDITIONAL_JUMP)  ; LAB_004d3cf0
    CMP EAX,0x1                         ; 004d3b35
    JNZ 0x004d3cfb                      ; 004d3b38
        ;   XREF to: 004d3cfb (CONDITIONAL_JUMP)  ; LAB_004d3cfb
    PUSH 0x1                            ; 004d3b3e
        ;   Label: LAB_004d3b3e
    PUSH 0x1                            ; 004d3b40
    LEA EAX,[EBX + 0x2b4]               ; 004d3b42
        ;   Label: LAB_004d3b42
    PUSH EAX                            ; 004d3b48
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d3b49
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3b4e
        ;   Label: LAB_004d3b4e
    LEA EAX,[EBX + 0x2508]              ; 004d3b51
    MOV dword ptr [EAX + 0x8],0x0       ; 004d3b57
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d3b5e
    MOV dword ptr [EAX + 0x4],EDX       ; 004d3b61
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d3b64
    MOV dword ptr [EAX],EDX             ; 004d3b67
    FLD float ptr [EBX + 0x10a74]       ; 004d3b69
        ;   Label: caseD_3
    FLDZ                                ; 004d3b6f
    FCOMPP                              ; 004d3b71
    FNSTSW AX                           ; 004d3b73
    SAHF                                ; 004d3b75
    JNC 0x004d3b8a                      ; 004d3b76
        ;   XREF to: 004d3b8a (CONDITIONAL_JUMP)  ; LAB_004d3b8a
    FLD float ptr [EBX + 0x10a74]       ; 004d3b78
    FSUB float ptr [EBP + 0x92]         ; 004d3b7e
    FSTP float ptr [EBX + 0x10a74]      ; 004d3b84
    PUSH EBX                            ; 004d3b8a
        ;   Label: LAB_004d3b8a
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 004d3b8b
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d3b90
    TEST EAX,EAX                        ; 004d3b93
    JZ 0x004d3c81                       ; 004d3b95
        ;   XREF to: 004d3c81 (CONDITIONAL_JUMP)  ; LAB_004d3c81
    PUSH dword ptr [EBP + 0x92]         ; 004d3b9b
    PUSH EBX                            ; 004d3ba1
    LEA ESI,[EBX + 0x2588]              ; 004d3ba2
    CALL core_charactr.cpp_FUN_00423a10 ; 004d3ba8
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 004d3bad
    FMUL float ptr [EBP + 0x92]         ; 004d3baf
    FLD float ptr [ESI + 0x4]           ; 004d3bb5
    FMUL float ptr [EBP + 0x92]         ; 004d3bb8
    FLD float ptr [ESI + 0x8]           ; 004d3bbe
    FMUL float ptr [EBP + 0x92]         ; 004d3bc1
    LEA EDI,[EBP + -0x26]               ; 004d3bc7
    LEA ESI,[EBP + 0x2e]                ; 004d3bca
    FXCH ST2                            ; 004d3bcd
    FSTP float ptr [EBP + 0x2e]         ; 004d3bcf
    FSTP float ptr [EBP + 0x32]         ; 004d3bd2
    FSTP float ptr [EBP + 0x36]         ; 004d3bd5
    MOVSD ES:EDI,ESI                    ; 004d3bd8
    MOVSD ES:EDI,ESI                    ; 004d3bd9
    MOVSD ES:EDI,ESI                    ; 004d3bda
    LEA EDX,[EBX + 0x257c]              ; 004d3bdb
    FLD float ptr [EBP + -0x26]         ; 004d3be1
    FLD float ptr [EBP + -0x22]         ; 004d3be4
    FLD float ptr [EBP + -0x1e]         ; 004d3be7
    LEA EDI,[EBP + -0x4a]               ; 004d3bea
    LEA ESI,[EBP + 0xffffff32]          ; 004d3bed
    FXCH ST2                            ; 004d3bf3
    FADD float ptr [EDX]                ; 004d3bf5
    FXCH                                ; 004d3bf7
    FADD float ptr [EDX + 0x4]          ; 004d3bf9
    FXCH ST2                            ; 004d3bfc
    FADD float ptr [EDX + 0x8]          ; 004d3bfe
    FXCH                                ; 004d3c01
    FSTP float ptr [EBP + 0xffffff32]   ; 004d3c03
    FXCH                                ; 004d3c09
    FSTP float ptr [EBP + 0xffffff36]   ; 004d3c0b
    FSTP float ptr [EBP + 0xffffff3a]   ; 004d3c11
    MOVSD ES:EDI,ESI                    ; 004d3c17
    MOVSD ES:EDI,ESI                    ; 004d3c18
    MOVSD ES:EDI,ESI                    ; 004d3c19
    LEA EAX,[EBX + 0x2508]              ; 004d3c1a
    FLD float ptr [EBP + -0x4a]         ; 004d3c20
    FLD float ptr [EBP + -0x46]         ; 004d3c23
    FLD float ptr [EBP + -0x42]         ; 004d3c26
    LEA EDI,[EBP + -0x3e]               ; 004d3c29
    LEA ESI,[EBP + -0x56]               ; 004d3c2c
    FXCH ST2                            ; 004d3c2f
    FADD float ptr [EAX]                ; 004d3c31
    FXCH                                ; 004d3c33
    FADD float ptr [EAX + 0x4]          ; 004d3c35
    FXCH ST2                            ; 004d3c38
    FADD float ptr [EAX + 0x8]          ; 004d3c3a
    FXCH                                ; 004d3c3d
    FSTP float ptr [EBP + -0x56]        ; 004d3c3f
    FXCH                                ; 004d3c42
    FSTP float ptr [EBP + -0x52]        ; 004d3c44
    FSTP float ptr [EBP + -0x4e]        ; 004d3c47
    MOVSD ES:EDI,ESI                    ; 004d3c4a
    MOVSD ES:EDI,ESI                    ; 004d3c4b
    MOVSD ES:EDI,ESI                    ; 004d3c4c
    MOV dword ptr [EDX + 0x8],0x0       ; 004d3c4d
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d3c54
    MOV dword ptr [EDX + 0x4],ECX       ; 004d3c57
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d3c5a
    MOV dword ptr [EDX],ECX             ; 004d3c5d
    MOV dword ptr [EAX + 0x8],0x0       ; 004d3c5f
    ADD ESP,0x8                         ; 004d3c66
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d3c69
    MOV dword ptr [EAX + 0x4],EDX       ; 004d3c6c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d3c6f
    MOV dword ptr [EAX],EDX             ; 004d3c72
    LEA EAX,[EBP + -0x3e]               ; 004d3c74
    PUSH EAX                            ; 004d3c77
    PUSH EBX                            ; 004d3c78
    CALL core_charactr.cpp_FUN_00423a60 ; 004d3c79
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004d3c7e
    PUSH EBX                            ; 004d3c81
        ;   Label: LAB_004d3c81
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 004d3c82
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d3c87
    LEA EAX,[EBX + 0x2b4]               ; 004d3c8a
    PUSH EAX                            ; 004d3c90
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004d3c91
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d3c96
    PUSH dword ptr [EBP + 0x92]         ; 004d3c99
    PUSH EBX                            ; 004d3c9f
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 004d3ca0
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d3ca5
    LEA ESP,[EBP + 0x7a]                ; 004d3ca8
        ;   Label: LAB_004d3ca8
    POP EBP                             ; 004d3cab
    POP EDI                             ; 004d3cac
    POP ESI                             ; 004d3cad
    POP EBX                             ; 004d3cae
    RET                                 ; 004d3caf
    LEA EAX,[EBP + 0x56]                ; 004d3cb0
        ;   Label: LAB_004d3cb0
    PUSH EAX                            ; 004d3cb3
    PUSH ESI                            ; 004d3cb4
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004d3cb5
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004d3cba
    PUSH EAX                            ; 004d3cbd
    PUSH EBX                            ; 004d3cbe
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 004d3cbf
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004d3cc4
    JMP 0x004d3ac9                      ; 004d3cc7
        ;   XREF to: 004d3ac9 (UNCONDITIONAL_JUMP)  ; LAB_004d3ac9
    PUSH 0x1                            ; 004d3ccc
        ;   Label: LAB_004d3ccc
    PUSH 0x0                            ; 004d3cce
    PUSH ESI                            ; 004d3cd0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d3cd1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3cd6
    PUSH EBX                            ; 004d3cd9
    PUSH 0x5da608                       ; 004d3cda | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00609ed0]      ; 004d3cdf | g_CConsolePtr
    PUSH EDI                            ; 004d3ce5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004d3ce6
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x004d3b4e                      ; 004d3ceb
        ;   XREF to: 004d3b4e (UNCONDITIONAL_JUMP)  ; LAB_004d3b4e
    JBE 0x004d3b3e                      ; 004d3cf0
        ;   XREF to: 004d3b3e (CONDITIONAL_JUMP)  ; LAB_004d3b3e
        ;   Label: LAB_004d3cf0
    CMP EAX,0x3                         ; 004d3cf6
    JZ 0x004d3ccc                       ; 004d3cf9
        ;   XREF to: 004d3ccc (CONDITIONAL_JUMP)  ; LAB_004d3ccc
    PUSH 0x1                            ; 004d3cfb
        ;   Label: LAB_004d3cfb
    PUSH 0x0                            ; 004d3cfd
    JMP 0x004d3b42                      ; 004d3cff
        ;   XREF to: 004d3b42 (UNCONDITIONAL_JUMP)  ; LAB_004d3b42
    MOV EDX,dword ptr [EBX + 0x10a64]   ; 004d3d04
        ;   Label: caseD_5
    TEST EDX,EDX                        ; 004d3d0a
    JNZ 0x004d3b69                      ; 004d3d0c
        ;   XREF to: 004d3b69 (CONDITIONAL_JUMP)  ; caseD_e
    CMP dword ptr [EBX + 0xdc],0x0      ; 004d3d12
    JNZ 0x004d3b69                      ; 004d3d19
        ;   XREF to: 004d3b69 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH EDX                            ; 004d3d1f
    LEA EAX,[EBX + 0x2b4]               ; 004d3d20
    PUSH EAX                            ; 004d3d26
    LEA ESI,[EBP + -0x1a]               ; 004d3d27
    LEA EDI,[EBP + -0x32]               ; 004d3d2a
    CALL core_skeleton.cpp_FUN_005469a0 ; 004d3d2d
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004d3d32
    LEA EAX,[EBP + -0x32]               ; 004d3d35
    LEA ESI,[EBP + -0x1a]               ; 004d3d38
    PUSH EAX                            ; 004d3d3b
    MOVSD ES:EDI,ESI                    ; 004d3d3c
    MOVSD ES:EDI,ESI                    ; 004d3d3d
    MOVSD ES:EDI,ESI                    ; 004d3d3e
    PUSH EBX                            ; 004d3d3f
    LEA ESI,[EBP + -0xe]                ; 004d3d40
    LEA EDI,[EBP + 0xffffff26]          ; 004d3d43
    CALL core_actor.cpp_FUN_00408d70    ; 004d3d49
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004d3d4e
    LEA ESI,[EBP + -0xe]                ; 004d3d51
    LEA EAX,[EBP + 0xffffff26]          ; 004d3d54
    PUSH 0x0                            ; 004d3d5a
    MOVSD ES:EDI,ESI                    ; 004d3d5c
    MOVSD ES:EDI,ESI                    ; 004d3d5d
    MOVSD ES:EDI,ESI                    ; 004d3d5e
    PUSH EAX                            ; 004d3d5f
    MOV ESI,dword ptr [0x006167e0]      ; 004d3d60 | g_CGorePtr
    PUSH ESI                            ; 004d3d66
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 004d3d67
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004d3d6c
    MOV dword ptr [EBX + 0x10a64],0x1   ; 004d3d6f
    JMP 0x004d3b69                      ; 004d3d79
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBP + 0xfffffeea]          ; 004d3d7e
        ;   Label: caseD_2
    PUSH EAX                            ; 004d3d84
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004d3d85
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004d3d8a
    PUSH 0x41700000                     ; 004d3d8d
    PUSH 0x40e00000                     ; 004d3d92
    LEA ESI,[EBP + 0xffffff7a]          ; 004d3d97
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004d3d9d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d3da2
    ADD ESP,0x8                         ; 004d3da5
    LEA EAX,[EBP + 0xfffffeea]          ; 004d3da8
    MOV EDX,dword ptr [0x01cee014]      ; 004d3dae | DAT_01cee014
    PUSH EAX                            ; 004d3db4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d3db5
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 004d3dbc
    SUB EAX,EDX                         ; 004d3dc2
    MOV dword ptr [EBP + 0xffffff22],EBX ; 004d3dc4
    SHL EAX,0x4                         ; 004d3dca
    LEA EDX,[EBX + 0x1134]              ; 004d3dcd
    PUSH 0x3ecccccd                     ; 004d3dd3
    ADD EAX,EDX                         ; 004d3dd8
    LEA EDI,[EBP + -0x7a]               ; 004d3dda
    PUSH EAX                            ; 004d3ddd
    FLD float ptr [EBP + 0x76]          ; 004d3dde
    PUSH 0x265370c                      ; 004d3de1 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffeee]   ; 004d3de6
    CALL core_xform.cpp_FUN_00591530    ; 004d3dec
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004d3df1
    LEA EAX,[EBP + -0x7a]               ; 004d3df4
    LEA ESI,[EBP + 0xffffff7a]          ; 004d3df7
    PUSH EAX                            ; 004d3dfd
    MOVSD ES:EDI,ESI                    ; 004d3dfe
    MOVSD ES:EDI,ESI                    ; 004d3dff
    MOVSD ES:EDI,ESI                    ; 004d3e00
    PUSH EBX                            ; 004d3e01
    LEA ESI,[EBP + 0xffffff3e]          ; 004d3e02
    CALL core_actor.cpp_FUN_00408d70    ; 004d3e08
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004d3e0d
    LEA EAX,[EBP + -0x6e]               ; 004d3e10
    PUSH EAX                            ; 004d3e13
    LEA EDI,[EBP + -0x6e]               ; 004d3e14
    LEA ESI,[EBP + 0xffffff3e]          ; 004d3e17
    PUSH EBX                            ; 004d3e1d
    MOVSD ES:EDI,ESI                    ; 004d3e1e
    MOVSD ES:EDI,ESI                    ; 004d3e1f
    MOVSD ES:EDI,ESI                    ; 004d3e20
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 004d3e21
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004d3e26
    JMP 0x004d3b69                      ; 004d3e29
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004d3e2e
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d3e34
    PUSH EBX                            ; 004d3e3a
    CALL dword ptr [EAX + 0x150]        ; 004d3e3b
    ADD ESP,0x8                         ; 004d3e41
    LEA EAX,[EBX + 0x2b4]               ; 004d3e44
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004d3e4a
    MOV dword ptr [EBP + 0x66],EAX      ; 004d3e50
    TEST ESI,ESI                        ; 004d3e53
    JZ 0x004d3fc1                       ; 004d3e55
        ;   XREF to: 004d3fc1 (CONDITIONAL_JUMP)  ; LAB_004d3fc1
    MOV EDX,ESI                         ; 004d3e5b
    LEA EDI,[EBP + 0xffffff62]          ; 004d3e5d
    LEA EAX,[EBX + 0x20]                ; 004d3e63
    FLD float ptr [EDX + 0x20]          ; 004d3e66
    FLD float ptr [EDX + 0x24]          ; 004d3e69
    FLD float ptr [EDX + 0x28]          ; 004d3e6c
    LEA ESI,[EBP + 0x3a]                ; 004d3e6f
    FXCH ST2                            ; 004d3e72
    FSUB float ptr [EAX]                ; 004d3e74
    FXCH                                ; 004d3e76
    FSUB float ptr [EAX + 0x4]          ; 004d3e78
    FXCH ST2                            ; 004d3e7b
    FSUB float ptr [EAX + 0x8]          ; 004d3e7d
    FXCH                                ; 004d3e80
    FSTP float ptr [EBP + 0x3a]         ; 004d3e82
    FXCH                                ; 004d3e85
    FSTP float ptr [EBP + 0x3e]         ; 004d3e87
    FSTP float ptr [EBP + 0x42]         ; 004d3e8a
    MOVSD ES:EDI,ESI                    ; 004d3e8d
    MOVSD ES:EDI,ESI                    ; 004d3e8e
    MOVSD ES:EDI,ESI                    ; 004d3e8f
    FLD float ptr [EBP + 0xffffff66]    ; 004d3e90
    FMUL ST0                            ; 004d3e96
    FLD float ptr [EBP + 0xffffff62]    ; 004d3e98
    FMUL ST0                            ; 004d3e9e
    FADDP                               ; 004d3ea0
    FLD float ptr [EBP + 0xffffff6a]    ; 004d3ea2
    FMUL ST0                            ; 004d3ea8
    FADDP                               ; 004d3eaa
    FSQRT                               ; 004d3eac
    FSTP float ptr [EBP + 0x52]         ; 004d3eae
    MOV EAX,dword ptr [EBP + 0x52]      ; 004d3eb1
    FLD float ptr [EBP + 0x52]          ; 004d3eb4
    MOV dword ptr [EBP + 0x5e],EAX      ; 004d3eb7
    FCOMP float ptr [0x005f885c]        ; 004d3eba | DAT_005f885c
    FNSTSW AX                           ; 004d3ec0
    SAHF                                ; 004d3ec2
    JC 0x004d3f0b                       ; 004d3ec3
        ;   XREF to: 004d3f0b (CONDITIONAL_JUMP)  ; LAB_004d3f0b
    FLD float ptr [EBP + 0x5e]          ; 004d3ec5
        ;   Label: LAB_004d3ec5
    FCOMP float ptr [EBX + 0x10a70]     ; 004d3ec8
    FNSTSW AX                           ; 004d3ece
    SAHF                                ; 004d3ed0
    JNC 0x004d3b69                      ; 004d3ed1
        ;   XREF to: 004d3b69 (CONDITIONAL_JUMP)  ; caseD_e
    FLD float ptr [EBP + 0x5e]          ; 004d3ed7
    LEA EDX,[EBX + 0x2b4]               ; 004d3eda
    FCOMP float ptr [0x005f8868]        ; 004d3ee0 | DAT_005f8868
    FNSTSW AX                           ; 004d3ee6
    SAHF                                ; 004d3ee8
    JNC 0x004d3fa5                      ; 004d3ee9
        ;   XREF to: 004d3fa5 (CONDITIONAL_JUMP)  ; LAB_004d3fa5
    PUSH 0x1                            ; 004d3eef
    PUSH 0x1                            ; 004d3ef1
    PUSH EDX                            ; 004d3ef3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d3ef4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3ef9
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004d3efc
    JMP 0x004d3b69                      ; 004d3f06
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBP + 0xffffff62]          ; 004d3f0b
        ;   Label: LAB_004d3f0b
    PUSH EAX                            ; 004d3f11
    LEA ESI,[EBP + 0xa]                 ; 004d3f12
    LEA EDI,[EBP + -0x2]                ; 004d3f15
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004d3f18
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xa]                 ; 004d3f1d
    MOVSD ES:EDI,ESI                    ; 004d3f20
    MOVSD ES:EDI,ESI                    ; 004d3f21
    MOVSD ES:EDI,ESI                    ; 004d3f22
    ADD ESP,0x4                         ; 004d3f23
    FLD float ptr [EBP + 0x2]           ; 004d3f26
    FSUB float ptr [EBX + 0x34]         ; 004d3f29
    SUB ESP,0x4                         ; 004d3f2c
    FSTP float ptr [ESP]                ; 004d3f2f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004d3f32
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d3f37
    FLD float ptr [EBP + 0x76]          ; 004d3f3a
    FABS                                ; 004d3f3d
    ADD ESP,0x4                         ; 004d3f3f
    FCOMP double ptr [0x005da661]       ; 004d3f42 | DAT_005da661
    FNSTSW AX                           ; 004d3f48
    SAHF                                ; 004d3f4a
    JNC 0x004d3ec5                      ; 004d3f4b
        ;   XREF to: 004d3ec5 (CONDITIONAL_JUMP)  ; LAB_004d3ec5
    CMP dword ptr [EBP + 0x6e],0x0      ; 004d3f51
    JZ 0x004d3f9b                       ; 004d3f55
        ;   XREF to: 004d3f9b (CONDITIONAL_JUMP)  ; LAB_004d3f9b
    PUSH 0x1                            ; 004d3f57
    PUSH 0x8                            ; 004d3f59
    MOV EDX,dword ptr [EBP + 0x66]      ; 004d3f5b
    PUSH EDX                            ; 004d3f5e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d3f5f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004d3f5f
    ADD ESP,0xc                         ; 004d3f64
    MOV ESI,dword ptr [EBX + 0x10af8]   ; 004d3f67
    PUSH ESI                            ; 004d3f6d
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004d3f6e
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004d3f73
    TEST EAX,EAX                        ; 004d3f76
    JNZ 0x004d3ec5                      ; 004d3f78
        ;   XREF to: 004d3ec5 (CONDITIONAL_JUMP)  ; LAB_004d3ec5
    PUSH 0x5da632                       ; 004d3f7e | = "hotdemon-attack.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d3f83
    PUSH EBX                            ; 004d3f89
    CALL dword ptr [EAX + 0x34]         ; 004d3f8a
    ADD ESP,0x8                         ; 004d3f8d
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004d3f90
    JMP 0x004d3ec5                      ; 004d3f96
        ;   XREF to: 004d3ec5 (UNCONDITIONAL_JUMP)  ; LAB_004d3ec5
    PUSH 0x1                            ; 004d3f9b
        ;   Label: LAB_004d3f9b
    PUSH 0x2                            ; 004d3f9d
    MOV ECX,dword ptr [EBP + 0x66]      ; 004d3f9f
    PUSH ECX                            ; 004d3fa2
    JMP 0x004d3f5f                      ; 004d3fa3
        ;   XREF to: 004d3f5f (UNCONDITIONAL_JUMP)  ; LAB_004d3f5f
    PUSH 0x1                            ; 004d3fa5
        ;   Label: LAB_004d3fa5
    PUSH 0x7                            ; 004d3fa7
    PUSH EDX                            ; 004d3fa9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d3faa
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3faf
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004d3fb2
    JMP 0x004d3b69                      ; 004d3fbc
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004d3fc1
        ;   Label: LAB_004d3fc1
    PUSH EBX                            ; 004d3fc7
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004d3fc8
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d3fcd
    TEST EAX,EAX                        ; 004d3fd0
    JZ 0x004d3b69                       ; 004d3fd2
        ;   XREF to: 004d3b69 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004d3fd8
    PUSH 0x1                            ; 004d3fda
    MOV EDI,dword ptr [EBP + 0x66]      ; 004d3fdc
    PUSH EDI                            ; 004d3fdf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d3fe0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3fe5
    JMP 0x004d3b69                      ; 004d3fe8
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004d3fed
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d3ff3
    PUSH EBX                            ; 004d3ff9
    CALL dword ptr [EAX + 0x150]        ; 004d3ffa
    ADD ESP,0x8                         ; 004d4000
    LEA EAX,[EBX + 0x2b4]               ; 004d4003
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 004d4009
    MOV dword ptr [EBP + 0x6a],EAX      ; 004d400f
    TEST EDI,EDI                        ; 004d4012
    JNZ 0x004d406e                      ; 004d4014
        ;   XREF to: 004d406e (CONDITIONAL_JUMP)  ; LAB_004d406e
    PUSH dword ptr [EBP + 0x92]         ; 004d4016
    PUSH EBX                            ; 004d401c
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004d401d
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d4022
    TEST EAX,EAX                        ; 004d4025
    JNZ 0x004d4044                      ; 004d4027
        ;   XREF to: 004d4044 (CONDITIONAL_JUMP)  ; LAB_004d4044
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004d4029
    CMP EDI,0x1                         ; 004d402c
    JNZ 0x004d4059                      ; 004d402f
        ;   XREF to: 004d4059 (CONDITIONAL_JUMP)  ; LAB_004d4059
    PUSH EDI                            ; 004d4031
    PUSH EAX                            ; 004d4032
    MOV EDX,dword ptr [EBP + 0x6a]      ; 004d4033
    PUSH EDX                            ; 004d4036
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d4037
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d403c
    JMP 0x004d3b69                      ; 004d403f
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004d4044
        ;   Label: LAB_004d4044
    PUSH 0x1                            ; 004d4046
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004d4048
    PUSH ECX                            ; 004d404b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d404c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d4051
    JMP 0x004d3b69                      ; 004d4054
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004d4059
        ;   Label: LAB_004d4059
    PUSH 0x6                            ; 004d405b
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004d405d
    PUSH EAX                            ; 004d4060
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d4061
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d4066
    JMP 0x004d3b69                      ; 004d4069
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,[0x005f885c]                ; 004d406e | DAT_005f885c
        ;   Label: LAB_004d406e
    MOV dword ptr [EBP + 0x62],EAX      ; 004d4073
    LEA EAX,[EBX + 0x2508]              ; 004d4076
    MOV dword ptr [EAX + 0x8],0x0       ; 004d407c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d4083
    MOV dword ptr [EAX + 0x4],EDX       ; 004d4086
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d4089
    MOV dword ptr [EAX],EDX             ; 004d408c
    XOR EAX,EAX                         ; 004d408e
    MOV dword ptr [EBP + 0xffffff56],EAX ; 004d4090
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 004d4096
    MOV EAX,dword ptr [EBP + 0x62]      ; 004d409c
    PUSH 0x3e32b8c2                     ; 004d409f
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 004d40a4
    LEA EAX,[EBP + 0xffffff56]          ; 004d40aa
    PUSH 0x3f000000                     ; 004d40b0
    PUSH EAX                            ; 004d40b5
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d40b6
    PUSH EAX                            ; 004d40bc
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004d40bd
    CALL dword ptr [EDX + 0xcc]         ; 004d40c3
    ADD ESP,0x4                         ; 004d40c9
    PUSH EAX                            ; 004d40cc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d40cd
    ADD EAX,0x20                        ; 004d40d3
    PUSH EAX                            ; 004d40d6
    PUSH EBX                            ; 004d40d7
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004d40d8
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004d40dd
    TEST EAX,EAX                        ; 004d40e0
    JL 0x004d3b69                       ; 004d40e2
        ;   XREF to: 004d3b69 (CONDITIONAL_JUMP)  ; caseD_e
    LEA EDI,[EBP + 0xffffff4a]          ; 004d40e8
    LEA EAX,[EBX + 0x20]                ; 004d40ee
    LEA ESI,[EBP + 0xffffff6e]          ; 004d40f1
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004d40f7
    FLD float ptr [EAX]                 ; 004d40fd
    FLD float ptr [EAX + 0x4]           ; 004d40ff
    FLD float ptr [EAX + 0x8]           ; 004d4102
    FXCH ST2                            ; 004d4105
    FSUB float ptr [EDX + 0x20]         ; 004d4107
    FXCH                                ; 004d410a
    FSUB float ptr [EDX + 0x24]         ; 004d410c
    FXCH ST2                            ; 004d410f
    FSUB float ptr [EDX + 0x28]         ; 004d4111
    FXCH                                ; 004d4114
    FSTP float ptr [EBP + 0xffffff6e]   ; 004d4116
    FXCH                                ; 004d411c
    FSTP float ptr [EBP + 0xffffff72]   ; 004d411e
    FSTP float ptr [EBP + 0xffffff76]   ; 004d4124
    MOVSD ES:EDI,ESI                    ; 004d412a
    MOVSD ES:EDI,ESI                    ; 004d412b
    MOVSD ES:EDI,ESI                    ; 004d412c
    FLD float ptr [EBP + 0xffffff4a]    ; 004d412d
    FMUL ST0                            ; 004d4133
    FLD float ptr [EBP + 0xffffff52]    ; 004d4135
    FMUL ST0                            ; 004d413b
    FADDP                               ; 004d413d
    FSQRT                               ; 004d413f
    XOR ECX,ECX                         ; 004d4141
    MOV dword ptr [EBP + 0xffffff4e],ECX ; 004d4143
    FSTP float ptr [EBP + 0x72]         ; 004d4149
    MOV EAX,dword ptr [EBP + 0x72]      ; 004d414c
    FLD float ptr [EBP + 0x72]          ; 004d414f
    MOV dword ptr [EBP + 0x5a],EAX      ; 004d4152
    FCOMP float ptr [0x005f8868]        ; 004d4155 | DAT_005f8868
    FNSTSW AX                           ; 004d415b
    SAHF                                ; 004d415d
    JBE 0x004d417c                      ; 004d415e
        ;   XREF to: 004d417c (CONDITIONAL_JUMP)  ; LAB_004d417c
    CMP dword ptr [EBP + 0x6e],0x7      ; 004d4160
    JZ 0x004d417c                       ; 004d4164
        ;   XREF to: 004d417c (CONDITIONAL_JUMP)  ; LAB_004d417c
    PUSH 0x1                            ; 004d4166
    PUSH 0x7                            ; 004d4168
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004d416a
    PUSH EDI                            ; 004d416d
    MOV dword ptr [EBX + 0x10a74],ECX   ; 004d416e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d4174
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d4179
    FLD float ptr [EBP + 0x5a]          ; 004d417c
        ;   Label: LAB_004d417c
    FCOMP float ptr [EBP + 0x62]        ; 004d417f
    FNSTSW AX                           ; 004d4182
    SAHF                                ; 004d4184
    JA 0x004d4247                       ; 004d4185
        ;   XREF to: 004d4247 (CONDITIONAL_JUMP)  ; LAB_004d4247
    FLD float ptr [EBX + 0x10a74]       ; 004d418b
    FLDZ                                ; 004d4191
    FCOMPP                              ; 004d4193
    FNSTSW AX                           ; 004d4195
    SAHF                                ; 004d4197
    JC 0x004d4247                       ; 004d4198
        ;   XREF to: 004d4247 (CONDITIONAL_JUMP)  ; LAB_004d4247
    LEA EDI,[EBP + -0x62]               ; 004d419e
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004d41a1
    LEA ESI,[EBP + 0x16]                ; 004d41a7
    LEA EDX,[EBX + 0x20]                ; 004d41aa
    FLD float ptr [EAX + 0x24]          ; 004d41ad
    FLD float ptr [EAX + 0x28]          ; 004d41b0
    FLD float ptr [EAX + 0x20]          ; 004d41b3
    LEA EAX,[EBP + -0x62]               ; 004d41b6
    FSUB float ptr [EDX]                ; 004d41b9
    FXCH ST2                            ; 004d41bb
    FSUB float ptr [EDX + 0x4]          ; 004d41bd
    FXCH                                ; 004d41c0
    FSUB float ptr [EDX + 0x8]          ; 004d41c2
    FXCH ST2                            ; 004d41c5
    FSTP float ptr [EBP + 0x16]         ; 004d41c7
    FSTP float ptr [EBP + 0x1a]         ; 004d41ca
    FSTP float ptr [EBP + 0x1e]         ; 004d41cd
    MOVSD ES:EDI,ESI                    ; 004d41d0
    MOVSD ES:EDI,ESI                    ; 004d41d1
    MOVSD ES:EDI,ESI                    ; 004d41d2
    PUSH EAX                            ; 004d41d3
    LEA ESI,[EBP + 0x46]                ; 004d41d4
    LEA EDI,[EBP + 0x22]                ; 004d41d7
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004d41da
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0x46]                ; 004d41df
    MOVSD ES:EDI,ESI                    ; 004d41e2
    MOVSD ES:EDI,ESI                    ; 004d41e3
    MOVSD ES:EDI,ESI                    ; 004d41e4
    ADD ESP,0x4                         ; 004d41e5
    FLD float ptr [EBP + 0x26]          ; 004d41e8
    FSUB float ptr [EBX + 0x34]         ; 004d41eb
    SUB ESP,0x4                         ; 004d41ee
    FSTP float ptr [ESP]                ; 004d41f1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004d41f4
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d41f9
    FLD float ptr [EBP + 0x76]          ; 004d41fc
    FABS                                ; 004d41ff
    ADD ESP,0x4                         ; 004d4201
    FCOMP double ptr [0x005da661]       ; 004d4204 | DAT_005da661
    FNSTSW AX                           ; 004d420a
    SAHF                                ; 004d420c
    JNC 0x004d4247                      ; 004d420d
        ;   XREF to: 004d4247 (CONDITIONAL_JUMP)  ; LAB_004d4247
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004d420f
    LEA EAX,[EBX + 0x2b4]               ; 004d4212
    CMP EDX,0x7                         ; 004d4218
    JZ 0x004d4283                       ; 004d421b
        ;   XREF to: 004d4283 (CONDITIONAL_JUMP)  ; LAB_004d4283
    PUSH 0x1                            ; 004d421d
    PUSH 0x2                            ; 004d421f
    PUSH EAX                            ; 004d4221
        ;   Label: LAB_004d4221
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d4222
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d4227
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 004d422a
    PUSH ECX                            ; 004d4230
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004d4231
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004d4236
    TEST EAX,EAX                        ; 004d4239
    JZ 0x004d4289                       ; 004d423b
        ;   XREF to: 004d4289 (CONDITIONAL_JUMP)  ; LAB_004d4289
    MOV dword ptr [EBX + 0x10a74],0x40000000 ; 004d423d
        ;   Label: LAB_004d423d
    FLD float ptr [EBP + 0x5a]          ; 004d4247
        ;   Label: LAB_004d4247
    FCOMP float ptr [EBX + 0x10a70]     ; 004d424a
    FNSTSW AX                           ; 004d4250
    SAHF                                ; 004d4252
    JBE 0x004d3b69                      ; 004d4253
        ;   XREF to: 004d3b69 (CONDITIONAL_JUMP)  ; caseD_e
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004d4259
    LEA EAX,[EBX + 0x2b4]               ; 004d425c
    CMP ESI,0x7                         ; 004d4262
    JZ 0x004d42a3                       ; 004d4265
        ;   XREF to: 004d42a3 (CONDITIONAL_JUMP)  ; LAB_004d42a3
    PUSH 0x1                            ; 004d4267
    PUSH 0x0                            ; 004d4269
    PUSH EAX                            ; 004d426b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d426c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d4271
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004d4274
    JMP 0x004d3b69                      ; 004d427e
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004d4283
        ;   Label: LAB_004d4283
    PUSH 0x8                            ; 004d4285
    JMP 0x004d4221                      ; 004d4287
        ;   XREF to: 004d4221 (UNCONDITIONAL_JUMP)  ; LAB_004d4221
    PUSH 0x5da646                       ; 004d4289 | = "hotdemon-attack.wav"
        ;   Label: LAB_004d4289
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d428e
    PUSH EBX                            ; 004d4294
    CALL dword ptr [EAX + 0x34]         ; 004d4295
    ADD ESP,0x8                         ; 004d4298
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004d429b
    JMP 0x004d423d                      ; 004d42a1
        ;   XREF to: 004d423d (UNCONDITIONAL_JUMP)  ; LAB_004d423d
    PUSH 0x1                            ; 004d42a3
        ;   Label: LAB_004d42a3
    PUSH 0x6                            ; 004d42a5
    PUSH EAX                            ; 004d42a7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d42a8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d42ad
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004d42b0
    JMP 0x004d3b69                      ; 004d42ba
        ;   XREF to: 004d3b69 (UNCONDITIONAL_JUMP)  ; caseD_e
    CMP EDI,0xf                         ; 004d42bf
        ;   Label: LAB_004d42bf
    JA 0x004d3b69                       ; 004d42c2
        ;   XREF to: 004d3b69 (CONDITIONAL_JUMP)  ; caseD_e
    JMP dword ptr [EDI*0x4 + 0x4d3a30]  ; 004d42c8 | caseD_6 | caseD_f | caseD_8
        ;   Label: switchD

