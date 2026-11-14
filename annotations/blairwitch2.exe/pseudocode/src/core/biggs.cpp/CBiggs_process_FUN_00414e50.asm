; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_process_FUN_00414e50(CBiggs *this_ptr,float delta_time)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005cbcac
;   undefined4 DAT_005f3510
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_006141f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414e50
        ;   Label: core_biggs.cpp_CBiggs_process_FUN_00414e50
    PUSH ESI                            ; 00414e51
    PUSH EDI                            ; 00414e52
    PUSH EBP                            ; 00414e53
    MOV EBP,ESP                         ; 00414e54
    SUB ESP,0x4c                        ; 00414e56
    AND ESP,0xfffffff8                  ; 00414e59
    MOV EBX,dword ptr [EBP + 0x14]      ; 00414e5c
    PUSH dword ptr [EBP + 0x18]         ; 00414e5f
    PUSH EBX                            ; 00414e62
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 00414e63
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00414e68
    TEST EAX,EAX                        ; 00414e6b
    JZ 0x004150a9                       ; 00414e6d
        ;   XREF to: 004150a9 (CONDITIONAL_JUMP)  ; LAB_004150a9
    LEA EAX,[EBX + 0x2508]              ; 00414e73
    MOV dword ptr [EAX + 0x8],0x0       ; 00414e79
    FLD float ptr [EBP + 0x18]          ; 00414e80
    MOV EDX,dword ptr [EAX + 0x8]       ; 00414e83
    MOV dword ptr [EAX + 0x4],EDX       ; 00414e86
    MOV EDX,dword ptr [EAX + 0x4]       ; 00414e89
    MOV dword ptr [EAX],EDX             ; 00414e8c
    FMUL float ptr [EBX + 0x10a60]      ; 00414e8e
    LEA ESI,[EBX + 0x2b4]               ; 00414e94
    FSTP float ptr [ESP]                ; 00414e9a
    FLD float ptr [ESP]                 ; 00414e9d
        ;   Label: LAB_00414e9d
    FLDZ                                ; 00414ea0
    FCOMPP                              ; 00414ea2
    FNSTSW AX                           ; 00414ea4
    SAHF                                ; 00414ea6
    JC 0x004150b0                       ; 00414ea7
        ;   XREF to: 004150b0 (CONDITIONAL_JUMP)  ; LAB_004150b0
    PUSH dword ptr [EBP + 0x18]         ; 00414ead
    FLD float ptr [EBX + 0x2510]        ; 00414eb0
    PUSH EBX                            ; 00414eb6
    FSTP float ptr [EBX + 0x2594]       ; 00414eb7
    CALL core_charactr.cpp_FUN_0042b2a0 ; 00414ebd
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 00414ec2
    PUSH ESI                            ; 00414ec5
    CALL core_motion.cpp_FUN_005035c0   ; 00414ec6
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00414ecb
    PUSH dword ptr [EBP + 0x18]         ; 00414ece
    PUSH EBX                            ; 00414ed1
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 00414ed2
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00414ed7
    TEST EAX,EAX                        ; 00414eda
    JZ 0x00414f21                       ; 00414edc
        ;   XREF to: 00414f21 (CONDITIONAL_JUMP)  ; LAB_00414f21
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00414ede
    CMP EAX,0x2                         ; 00414ee4
    JNC 0x004150ef                      ; 00414ee7
        ;   XREF to: 004150ef (CONDITIONAL_JUMP)  ; LAB_004150ef
    CMP EAX,0x1                         ; 00414eed
    JNZ 0x004150fa                      ; 00414ef0
        ;   XREF to: 004150fa (CONDITIONAL_JUMP)  ; LAB_004150fa
    PUSH 0x1                            ; 00414ef6
        ;   Label: LAB_00414ef6
    PUSH 0x1                            ; 00414ef8
    LEA EAX,[EBX + 0x2b4]               ; 00414efa
        ;   Label: LAB_00414efa
    PUSH EAX                            ; 00414f00
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00414f01
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414f06
        ;   Label: LAB_00414f06
    LEA EAX,[EBX + 0x2508]              ; 00414f09
    MOV dword ptr [EAX + 0x8],0x0       ; 00414f0f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00414f16
    MOV dword ptr [EAX + 0x4],EDX       ; 00414f19
    MOV EDX,dword ptr [EAX + 0x4]       ; 00414f1c
    MOV dword ptr [EAX],EDX             ; 00414f1f
    FLD float ptr [EBX + 0x10a74]       ; 00414f21
        ;   Label: LAB_00414f21
    FLDZ                                ; 00414f27
    FCOMPP                              ; 00414f29
    FNSTSW AX                           ; 00414f2b
    SAHF                                ; 00414f2d
    JNC 0x00414f3f                      ; 00414f2e
        ;   XREF to: 00414f3f (CONDITIONAL_JUMP)  ; LAB_00414f3f
    FLD float ptr [EBX + 0x10a74]       ; 00414f30
    FSUB float ptr [EBP + 0x18]         ; 00414f36
    FSTP float ptr [EBX + 0x10a74]      ; 00414f39
    PUSH EBX                            ; 00414f3f
        ;   Label: LAB_00414f3f
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 00414f40
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00414f45
    TEST EAX,EAX                        ; 00414f48
    JZ 0x00415034                       ; 00414f4a
        ;   XREF to: 00415034 (CONDITIONAL_JUMP)  ; LAB_00415034
    PUSH dword ptr [EBP + 0x18]         ; 00414f50
    PUSH EBX                            ; 00414f53
    LEA ESI,[EBX + 0x2588]              ; 00414f54
    CALL core_charactr.cpp_FUN_00423a10 ; 00414f5a
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    ADD ESP,0x8                         ; 00414f5f
    FLD float ptr [ESI]                 ; 00414f62
    FMUL float ptr [EBP + 0x18]         ; 00414f64
    FLD float ptr [ESI + 0x4]           ; 00414f67
    FMUL float ptr [EBP + 0x18]         ; 00414f6a
    FLD float ptr [ESI + 0x8]           ; 00414f6d
    FMUL float ptr [EBP + 0x18]         ; 00414f70
    LEA EDI,[ESP + 0x28]                ; 00414f73
    LEA ESI,[ESP + 0x10]                ; 00414f77
    FXCH ST2                            ; 00414f7b
    FSTP float ptr [ESP + 0x10]         ; 00414f7d
    FSTP float ptr [ESP + 0x14]         ; 00414f81
    FSTP float ptr [ESP + 0x18]         ; 00414f85
    MOVSD ES:EDI,ESI                    ; 00414f89
    MOVSD ES:EDI,ESI                    ; 00414f8a
    MOVSD ES:EDI,ESI                    ; 00414f8b
    LEA EDX,[EBX + 0x257c]              ; 00414f8c
    FLD float ptr [ESP + 0x28]          ; 00414f92
    FLD float ptr [ESP + 0x2c]          ; 00414f96
    FLD float ptr [ESP + 0x30]          ; 00414f9a
    LEA EDI,[ESP + 0x40]                ; 00414f9e
    LEA ESI,[ESP + 0x4]                 ; 00414fa2
    FXCH ST2                            ; 00414fa6
    FADD float ptr [EDX]                ; 00414fa8
    FXCH                                ; 00414faa
    FADD float ptr [EDX + 0x4]          ; 00414fac
    FXCH ST2                            ; 00414faf
    FADD float ptr [EDX + 0x8]          ; 00414fb1
    FXCH                                ; 00414fb4
    FSTP float ptr [ESP + 0x4]          ; 00414fb6
    FXCH                                ; 00414fba
    FSTP float ptr [ESP + 0x8]          ; 00414fbc
    FSTP float ptr [ESP + 0xc]          ; 00414fc0
    MOVSD ES:EDI,ESI                    ; 00414fc4
    MOVSD ES:EDI,ESI                    ; 00414fc5
    MOVSD ES:EDI,ESI                    ; 00414fc6
    LEA EAX,[EBX + 0x2508]              ; 00414fc7
    FLD float ptr [ESP + 0x40]          ; 00414fcd
    FLD float ptr [ESP + 0x44]          ; 00414fd1
    FLD float ptr [ESP + 0x48]          ; 00414fd5
    LEA EDI,[ESP + 0x34]                ; 00414fd9
    LEA ESI,[ESP + 0x1c]                ; 00414fdd
    FXCH ST2                            ; 00414fe1
    FADD float ptr [EAX]                ; 00414fe3
    FXCH                                ; 00414fe5
    FADD float ptr [EAX + 0x4]          ; 00414fe7
    FXCH ST2                            ; 00414fea
    FADD float ptr [EAX + 0x8]          ; 00414fec
    FXCH                                ; 00414fef
    FSTP float ptr [ESP + 0x1c]         ; 00414ff1
    FXCH                                ; 00414ff5
    FSTP float ptr [ESP + 0x20]         ; 00414ff7
    FSTP float ptr [ESP + 0x24]         ; 00414ffb
    MOVSD ES:EDI,ESI                    ; 00414fff
    MOVSD ES:EDI,ESI                    ; 00415000
    MOVSD ES:EDI,ESI                    ; 00415001
    MOV dword ptr [EDX + 0x8],0x0       ; 00415002
    MOV ECX,dword ptr [EDX + 0x8]       ; 00415009
    MOV dword ptr [EDX + 0x4],ECX       ; 0041500c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041500f
    MOV dword ptr [EDX],ECX             ; 00415012
    MOV dword ptr [EAX + 0x8],0x0       ; 00415014
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041501b
    MOV dword ptr [EAX + 0x4],EDX       ; 0041501e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00415021
    MOV dword ptr [EAX],EDX             ; 00415024
    LEA EAX,[ESP + 0x34]                ; 00415026
    PUSH EAX                            ; 0041502a
    PUSH EBX                            ; 0041502b
    CALL core_charactr.cpp_FUN_00423a60 ; 0041502c
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00415031
    PUSH EBX                            ; 00415034
        ;   Label: LAB_00415034
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 00415035
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041503a
    LEA EAX,[EBX + 0x2b4]               ; 0041503d
    PUSH EAX                            ; 00415043
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 00415044
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00415049
    PUSH dword ptr [EBP + 0x18]         ; 0041504c
    PUSH EBX                            ; 0041504f
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 00415050
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00415055
    LEA EAX,[EBX + 0x118a8]             ; 00415058
    PUSH EAX                            ; 0041505e
    MOV ECX,dword ptr [0x006141f0]      ; 0041505f | DAT_006141f0
    PUSH ECX                            ; 00415065
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00415066
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0041506b
    TEST EAX,EAX                        ; 0041506e
    JZ 0x00415086                       ; 00415070
        ;   XREF to: 00415086 (CONDITIONAL_JUMP)  ; LAB_00415086
    MOV dword ptr [EBX + 0x10c78],0x0   ; 00415072
    MOV dword ptr [EBX + 0x10c74],0x1   ; 0041507c
    CMP dword ptr [EBX + 0x10c74],0x0   ; 00415086
        ;   Label: LAB_00415086
    JZ 0x004150a9                       ; 0041508d
        ;   XREF to: 004150a9 (CONDITIONAL_JUMP)  ; LAB_004150a9
    FLD float ptr [EBX + 0x10c78]       ; 0041508f
    FADD float ptr [EBP + 0x18]         ; 00415095
    FST float ptr [EBX + 0x10c78]       ; 00415098
    FCOMP float ptr [0x005f3510]        ; 0041509e | DAT_005f3510
    FNSTSW AX                           ; 004150a4
    SAHF                                ; 004150a6
    JA 0x00415103                       ; 004150a7
        ;   XREF to: 00415103 (CONDITIONAL_JUMP)  ; LAB_00415103
    MOV ESP,EBP                         ; 004150a9
        ;   Label: LAB_004150a9
    POP EBP                             ; 004150ab
    POP EDI                             ; 004150ac
    POP ESI                             ; 004150ad
    POP EBX                             ; 004150ae
    RET                                 ; 004150af
    MOV EAX,ESP                         ; 004150b0
        ;   Label: LAB_004150b0
    PUSH EAX                            ; 004150b2
    PUSH ESI                            ; 004150b3
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004150b4
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004150b9
    PUSH EAX                            ; 004150bc
    PUSH EBX                            ; 004150bd
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 004150be
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004150c3
    JMP 0x00414e9d                      ; 004150c6
        ;   XREF to: 00414e9d (UNCONDITIONAL_JUMP)  ; LAB_00414e9d
    PUSH 0x1                            ; 004150cb
        ;   Label: LAB_004150cb
    PUSH 0x0                            ; 004150cd
    PUSH ESI                            ; 004150cf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004150d0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004150d5
    PUSH EBX                            ; 004150d8
    PUSH 0x5cbcac                       ; 004150d9 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00609ed0]      ; 004150de | g_CConsolePtr
    PUSH EDX                            ; 004150e4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004150e5
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x00414f06                      ; 004150ea
        ;   XREF to: 00414f06 (UNCONDITIONAL_JUMP)  ; LAB_00414f06
    JBE 0x00414ef6                      ; 004150ef
        ;   XREF to: 00414ef6 (CONDITIONAL_JUMP)  ; LAB_00414ef6
        ;   Label: LAB_004150ef
    CMP EAX,0x3                         ; 004150f5
    JZ 0x004150cb                       ; 004150f8
        ;   XREF to: 004150cb (CONDITIONAL_JUMP)  ; LAB_004150cb
    PUSH 0x1                            ; 004150fa
        ;   Label: LAB_004150fa
    PUSH 0x0                            ; 004150fc
    JMP 0x00414efa                      ; 004150fe
        ;   XREF to: 00414efa (UNCONDITIONAL_JUMP)  ; LAB_00414efa
    MOV EAX,[0x005f3510]                ; 00415103 | DAT_005f3510
        ;   Label: LAB_00415103
    MOV dword ptr [EBX + 0x10c78],EAX   ; 00415108
    MOV ESP,EBP                         ; 0041510e
    POP EBP                             ; 00415110
    POP EDI                             ; 00415111
    POP ESI                             ; 00415112
    POP EBX                             ; 00415113
    RET                                 ; 00415114

