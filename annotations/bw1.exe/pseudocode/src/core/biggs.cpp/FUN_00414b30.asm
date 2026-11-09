; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_biggs_cpp_FUN_00414b30(CCharacter *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005d3c27
;   undefined4 DAT_005fc5c0
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061b4d0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e120
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00433e80
;   core_charactr.cpp_FUN_00435320
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414b30
        ;   Label: core_biggs.cpp_FUN_00414b30
    PUSH ESI                            ; 00414b31
    PUSH EDI                            ; 00414b32
    PUSH EBP                            ; 00414b33
    MOV EBP,ESP                         ; 00414b34
    SUB ESP,0x4c                        ; 00414b36
    AND ESP,0xfffffff8                  ; 00414b39
    MOV EBX,dword ptr [EBP + 0x14]      ; 00414b3c
    PUSH dword ptr [EBP + 0x18]         ; 00414b3f
    PUSH EBX                            ; 00414b42
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00414b43
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00414b48
    TEST EAX,EAX                        ; 00414b4b
    JZ 0x00414d89                       ; 00414b4d
        ;   XREF to: 00414d89 (CONDITIONAL_JUMP)  ; LAB_00414d89
    LEA EAX,[EBX + 0x249c]              ; 00414b53
    MOV dword ptr [EAX + 0x8],0x0       ; 00414b59
    FLD float ptr [EBP + 0x18]          ; 00414b60
    MOV EDX,dword ptr [EAX + 0x8]       ; 00414b63
    MOV dword ptr [EAX + 0x4],EDX       ; 00414b66
    MOV EDX,dword ptr [EAX + 0x4]       ; 00414b69
    MOV dword ptr [EAX],EDX             ; 00414b6c
    FMUL float ptr [EBX + 0xc1d0]       ; 00414b6e
    LEA ESI,[EBX + 0x158]               ; 00414b74
    FSTP float ptr [ESP]                ; 00414b7a
    FLD float ptr [ESP]                 ; 00414b7d
        ;   Label: LAB_00414b7d
    FLDZ                                ; 00414b80
    FCOMPP                              ; 00414b82
    FNSTSW AX                           ; 00414b84
    SAHF                                ; 00414b86
    JC 0x00414d90                       ; 00414b87
        ;   XREF to: 00414d90 (CONDITIONAL_JUMP)  ; LAB_00414d90
    PUSH dword ptr [EBP + 0x18]         ; 00414b8d
    FLD float ptr [EBX + 0x24a4]        ; 00414b90
    PUSH EBX                            ; 00414b96
    FSTP float ptr [EBX + 0x2524]       ; 00414b97
    CALL core_charactr.cpp_FUN_00435320 ; 00414b9d
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00414ba2
    PUSH ESI                            ; 00414ba5
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00414ba6
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00414bab
    PUSH dword ptr [EBP + 0x18]         ; 00414bae
    PUSH EBX                            ; 00414bb1
    CALL core_charactr.cpp_FUN_00432240 ; 00414bb2
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00414bb7
    TEST EAX,EAX                        ; 00414bba
    JZ 0x00414c01                       ; 00414bbc
        ;   XREF to: 00414c01 (CONDITIONAL_JUMP)  ; LAB_00414c01
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00414bbe
    CMP EAX,0x2                         ; 00414bc4
    JNC 0x00414dcf                      ; 00414bc7
        ;   XREF to: 00414dcf (CONDITIONAL_JUMP)  ; LAB_00414dcf
    CMP EAX,0x1                         ; 00414bcd
    JNZ 0x00414dda                      ; 00414bd0
        ;   XREF to: 00414dda (CONDITIONAL_JUMP)  ; LAB_00414dda
    PUSH 0x1                            ; 00414bd6
        ;   Label: LAB_00414bd6
    PUSH 0x1                            ; 00414bd8
    LEA EAX,[EBX + 0x158]               ; 00414bda
        ;   Label: LAB_00414bda
    PUSH EAX                            ; 00414be0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00414be1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414be6
        ;   Label: LAB_00414be6
    LEA EAX,[EBX + 0x249c]              ; 00414be9
    MOV dword ptr [EAX + 0x8],0x0       ; 00414bef
    MOV EDX,dword ptr [EAX + 0x8]       ; 00414bf6
    MOV dword ptr [EAX + 0x4],EDX       ; 00414bf9
    MOV EDX,dword ptr [EAX + 0x4]       ; 00414bfc
    MOV dword ptr [EAX],EDX             ; 00414bff
    FLD float ptr [EBX + 0xc1e4]        ; 00414c01
        ;   Label: LAB_00414c01
    FLDZ                                ; 00414c07
    FCOMPP                              ; 00414c09
    FNSTSW AX                           ; 00414c0b
    SAHF                                ; 00414c0d
    JNC 0x00414c1f                      ; 00414c0e
        ;   XREF to: 00414c1f (CONDITIONAL_JUMP)  ; LAB_00414c1f
    FLD float ptr [EBX + 0xc1e4]        ; 00414c10
    FSUB float ptr [EBP + 0x18]         ; 00414c16
    FSTP float ptr [EBX + 0xc1e4]       ; 00414c19
    PUSH EBX                            ; 00414c1f
        ;   Label: LAB_00414c1f
    CALL core_charactr.cpp_FUN_0042e120 ; 00414c20
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00414c25
    TEST EAX,EAX                        ; 00414c28
    JZ 0x00414d14                       ; 00414c2a
        ;   XREF to: 00414d14 (CONDITIONAL_JUMP)  ; LAB_00414d14
    PUSH dword ptr [EBP + 0x18]         ; 00414c30
    PUSH EBX                            ; 00414c33
    LEA ESI,[EBX + 0x2518]              ; 00414c34
    CALL core_charactr.cpp_FUN_0042d700 ; 00414c3a
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    ADD ESP,0x8                         ; 00414c3f
    FLD float ptr [ESI]                 ; 00414c42
    FMUL float ptr [EBP + 0x18]         ; 00414c44
    FLD float ptr [ESI + 0x4]           ; 00414c47
    FMUL float ptr [EBP + 0x18]         ; 00414c4a
    FLD float ptr [ESI + 0x8]           ; 00414c4d
    FMUL float ptr [EBP + 0x18]         ; 00414c50
    LEA EDI,[ESP + 0x28]                ; 00414c53
    LEA ESI,[ESP + 0x10]                ; 00414c57
    FXCH ST2                            ; 00414c5b
    FSTP float ptr [ESP + 0x10]         ; 00414c5d
    FSTP float ptr [ESP + 0x14]         ; 00414c61
    FSTP float ptr [ESP + 0x18]         ; 00414c65
    MOVSD ES:EDI,ESI                    ; 00414c69
    MOVSD ES:EDI,ESI                    ; 00414c6a
    MOVSD ES:EDI,ESI                    ; 00414c6b
    LEA EDX,[EBX + 0x250c]              ; 00414c6c
    FLD float ptr [ESP + 0x28]          ; 00414c72
    FLD float ptr [ESP + 0x2c]          ; 00414c76
    FLD float ptr [ESP + 0x30]          ; 00414c7a
    LEA EDI,[ESP + 0x40]                ; 00414c7e
    LEA ESI,[ESP + 0x4]                 ; 00414c82
    FXCH ST2                            ; 00414c86
    FADD float ptr [EDX]                ; 00414c88
    FXCH                                ; 00414c8a
    FADD float ptr [EDX + 0x4]          ; 00414c8c
    FXCH ST2                            ; 00414c8f
    FADD float ptr [EDX + 0x8]          ; 00414c91
    FXCH                                ; 00414c94
    FSTP float ptr [ESP + 0x4]          ; 00414c96
    FXCH                                ; 00414c9a
    FSTP float ptr [ESP + 0x8]          ; 00414c9c
    FSTP float ptr [ESP + 0xc]          ; 00414ca0
    MOVSD ES:EDI,ESI                    ; 00414ca4
    MOVSD ES:EDI,ESI                    ; 00414ca5
    MOVSD ES:EDI,ESI                    ; 00414ca6
    LEA EAX,[EBX + 0x249c]              ; 00414ca7
    FLD float ptr [ESP + 0x40]          ; 00414cad
    FLD float ptr [ESP + 0x44]          ; 00414cb1
    FLD float ptr [ESP + 0x48]          ; 00414cb5
    LEA EDI,[ESP + 0x34]                ; 00414cb9
    LEA ESI,[ESP + 0x1c]                ; 00414cbd
    FXCH ST2                            ; 00414cc1
    FADD float ptr [EAX]                ; 00414cc3
    FXCH                                ; 00414cc5
    FADD float ptr [EAX + 0x4]          ; 00414cc7
    FXCH ST2                            ; 00414cca
    FADD float ptr [EAX + 0x8]          ; 00414ccc
    FXCH                                ; 00414ccf
    FSTP float ptr [ESP + 0x1c]         ; 00414cd1
    FXCH                                ; 00414cd5
    FSTP float ptr [ESP + 0x20]         ; 00414cd7
    FSTP float ptr [ESP + 0x24]         ; 00414cdb
    MOVSD ES:EDI,ESI                    ; 00414cdf
    MOVSD ES:EDI,ESI                    ; 00414ce0
    MOVSD ES:EDI,ESI                    ; 00414ce1
    MOV dword ptr [EDX + 0x8],0x0       ; 00414ce2
    MOV ECX,dword ptr [EDX + 0x8]       ; 00414ce9
    MOV dword ptr [EDX + 0x4],ECX       ; 00414cec
    MOV ECX,dword ptr [EDX + 0x4]       ; 00414cef
    MOV dword ptr [EDX],ECX             ; 00414cf2
    MOV dword ptr [EAX + 0x8],0x0       ; 00414cf4
    MOV EDX,dword ptr [EAX + 0x8]       ; 00414cfb
    MOV dword ptr [EAX + 0x4],EDX       ; 00414cfe
    MOV EDX,dword ptr [EAX + 0x4]       ; 00414d01
    MOV dword ptr [EAX],EDX             ; 00414d04
    LEA EAX,[ESP + 0x34]                ; 00414d06
    PUSH EAX                            ; 00414d0a
    PUSH EBX                            ; 00414d0b
    CALL core_charactr.cpp_FUN_0042d750 ; 00414d0c
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00414d11
    PUSH EBX                            ; 00414d14
        ;   Label: LAB_00414d14
    CALL core_charactr.cpp_FUN_0042e160 ; 00414d15
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00414d1a
    LEA EAX,[EBX + 0x158]               ; 00414d1d
    PUSH EAX                            ; 00414d23
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00414d24
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414d29
    PUSH dword ptr [EBP + 0x18]         ; 00414d2c
    PUSH EBX                            ; 00414d2f
    CALL core_charactr.cpp_FUN_00433e80 ; 00414d30
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00414d35
    LEA EAX,[EBX + 0xd018]              ; 00414d38
    PUSH EAX                            ; 00414d3e
    MOV ECX,dword ptr [0x0061b4d0]      ; 00414d3f | DAT_0061b4d0
    PUSH ECX                            ; 00414d45
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00414d46
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00414d4b
    TEST EAX,EAX                        ; 00414d4e
    JZ 0x00414d66                       ; 00414d50
        ;   XREF to: 00414d66 (CONDITIONAL_JUMP)  ; LAB_00414d66
    MOV dword ptr [EBX + 0xc3e8],0x0    ; 00414d52
    MOV dword ptr [EBX + 0xc3e4],0x1    ; 00414d5c
    CMP dword ptr [EBX + 0xc3e4],0x0    ; 00414d66
        ;   Label: LAB_00414d66
    JZ 0x00414d89                       ; 00414d6d
        ;   XREF to: 00414d89 (CONDITIONAL_JUMP)  ; LAB_00414d89
    FLD float ptr [EBX + 0xc3e8]        ; 00414d6f
    FADD float ptr [EBP + 0x18]         ; 00414d75
    FST float ptr [EBX + 0xc3e8]        ; 00414d78
    FCOMP float ptr [0x005fc5c0]        ; 00414d7e | DAT_005fc5c0
    FNSTSW AX                           ; 00414d84
    SAHF                                ; 00414d86
    JA 0x00414de3                       ; 00414d87
        ;   XREF to: 00414de3 (CONDITIONAL_JUMP)  ; LAB_00414de3
    MOV ESP,EBP                         ; 00414d89
        ;   Label: LAB_00414d89
    POP EBP                             ; 00414d8b
    POP EDI                             ; 00414d8c
    POP ESI                             ; 00414d8d
    POP EBX                             ; 00414d8e
    RET                                 ; 00414d8f
    MOV EAX,ESP                         ; 00414d90
        ;   Label: LAB_00414d90
    PUSH EAX                            ; 00414d92
    PUSH ESI                            ; 00414d93
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00414d94
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00414d99
    PUSH EAX                            ; 00414d9c
    PUSH EBX                            ; 00414d9d
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00414d9e
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00414da3
    JMP 0x00414b7d                      ; 00414da6
        ;   XREF to: 00414b7d (UNCONDITIONAL_JUMP)  ; LAB_00414b7d
    PUSH 0x1                            ; 00414dab
        ;   Label: LAB_00414dab
    PUSH 0x0                            ; 00414dad
    PUSH ESI                            ; 00414daf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00414db0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414db5
    PUSH EBX                            ; 00414db8
    PUSH 0x5d3c27                       ; 00414db9 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00611100]      ; 00414dbe | g_CConsolePtr
    PUSH EDX                            ; 00414dc4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00414dc5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x00414be6                      ; 00414dca
        ;   XREF to: 00414be6 (UNCONDITIONAL_JUMP)  ; LAB_00414be6
    JBE 0x00414bd6                      ; 00414dcf
        ;   XREF to: 00414bd6 (CONDITIONAL_JUMP)  ; LAB_00414bd6
        ;   Label: LAB_00414dcf
    CMP EAX,0x3                         ; 00414dd5
    JZ 0x00414dab                       ; 00414dd8
        ;   XREF to: 00414dab (CONDITIONAL_JUMP)  ; LAB_00414dab
    PUSH 0x1                            ; 00414dda
        ;   Label: LAB_00414dda
    PUSH 0x0                            ; 00414ddc
    JMP 0x00414bda                      ; 00414dde
        ;   XREF to: 00414bda (UNCONDITIONAL_JUMP)  ; LAB_00414bda
    MOV EAX,[0x005fc5c0]                ; 00414de3 | DAT_005fc5c0
        ;   Label: LAB_00414de3
    MOV dword ptr [EBX + 0xc3e8],EAX    ; 00414de8
    MOV ESP,EBP                         ; 00414dee
    POP EBP                             ; 00414df0
    POP EDI                             ; 00414df1
    POP ESI                             ; 00414df2
    POP EBX                             ; 00414df3
    RET                                 ; 00414df4

