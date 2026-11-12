; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_CSmiley_process_FUN_00549ba0(CSmiley *this_ptr,float delta_time)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00549b70 = 0054a233
;   TerminatedCString s_s_confused_while_walking_005e77c2
;   TerminatedCString s_Capture_005e77ec
;   TerminatedCString s_Capture_005e77f4
;   undefined4 DAT_005e77fd
;   undefined4 DAT_005fba58
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_006141f0
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02628618
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
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
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549ba0
        ;   Label: core_smiley.cpp_CSmiley_process_FUN_00549ba0
    PUSH ESI                            ; 00549ba1
    PUSH EDI                            ; 00549ba2
    PUSH EBP                            ; 00549ba3
    MOV EBP,ESP                         ; 00549ba4
    SUB ESP,0x254                       ; 00549ba6
    SUB EBP,0x7a                        ; 00549bac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00549baf
    FLD float ptr [EBX + 0x10b34]       ; 00549bb5
    FSUB float ptr [EBP + 0x92]         ; 00549bbb
    FST float ptr [EBX + 0x10b34]       ; 00549bc1
    FLDZ                                ; 00549bc7
    FCOMPP                              ; 00549bc9
    FNSTSW AX                           ; 00549bcb
    SAHF                                ; 00549bcd
    JA 0x00549cbf                       ; 00549bce
        ;   XREF to: 00549cbf (CONDITIONAL_JUMP)  ; LAB_00549cbf
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 00549bd4
        ;   Label: LAB_00549bd4
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00549bda
    JNZ 0x00549c3d                      ; 00549be2
        ;   XREF to: 00549c3d (CONDITIONAL_JUMP)  ; LAB_00549c3d
    PUSH EBX                            ; 00549be4
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00549be5
    CALL dword ptr [EAX + 0x114]        ; 00549beb
    ADD ESP,0x4                         ; 00549bf1
    TEST EAX,EAX                        ; 00549bf4
    JNZ 0x00549c3d                      ; 00549bf6
        ;   XREF to: 00549c3d (CONDITIONAL_JUMP)  ; LAB_00549c3d
    LEA EAX,[EBP + 0xfffffe26]          ; 00549bf8
    PUSH EAX                            ; 00549bfe
    XOR ESI,ESI                         ; 00549bff
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00549c01
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV ECX,0x461c3f9a                  ; 00549c06
    LEA EAX,[EBP + 0xfffffe26]          ; 00549c0b
    ADD ESP,0x4                         ; 00549c11
    MOV dword ptr [EBP + 0xfffffe56],ESI ; 00549c14
    MOV dword ptr [EBP + 0xfffffe5a],EBX ; 00549c1a
    PUSH EAX                            ; 00549c20
    MOV dword ptr [EBP + 0xfffffe5e],EBX ; 00549c21
    MOV dword ptr [EBP + 0xfffffe2a],ECX ; 00549c27
    PUSH EBX                            ; 00549c2d
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00549c2e
    CALL dword ptr [EDX + 0x110]        ; 00549c34
    ADD ESP,0x8                         ; 00549c3a
    PUSH dword ptr [EBP + 0x92]         ; 00549c3d
        ;   Label: LAB_00549c3d
    PUSH EBX                            ; 00549c43
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 00549c44
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00549c49
    TEST EAX,EAX                        ; 00549c4c
    JZ 0x00549f1c                       ; 00549c4e
        ;   XREF to: 00549f1c (CONDITIONAL_JUMP)  ; LAB_00549f1c
    LEA EAX,[EBX + 0x2508]              ; 00549c54
    MOV dword ptr [EAX + 0x8],0x0       ; 00549c5a
    FLD float ptr [EBP + 0x92]          ; 00549c61
    MOV EDX,dword ptr [EAX + 0x8]       ; 00549c67
    MOV dword ptr [EAX + 0x4],EDX       ; 00549c6a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00549c6d
    MOV dword ptr [EAX],EDX             ; 00549c70
    FMUL float ptr [EBX + 0x10a60]      ; 00549c72
    LEA ESI,[EBX + 0x2b4]               ; 00549c78
    FSTP float ptr [EBP + 0x5a]         ; 00549c7e
    MOV EDI,0x1                         ; 00549c81
    FLD float ptr [EBP + 0x5a]          ; 00549c86
        ;   Label: LAB_00549c86
    FLDZ                                ; 00549c89
    FCOMPP                              ; 00549c8b
    FNSTSW AX                           ; 00549c8d
    SAHF                                ; 00549c8f
    JNC 0x00549dcb                      ; 00549c90
        ;   XREF to: 00549dcb (CONDITIONAL_JUMP)  ; LAB_00549dcb
    LEA EAX,[EBP + 0x5a]                ; 00549c96
    PUSH EAX                            ; 00549c99
    PUSH ESI                            ; 00549c9a
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 00549c9b
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00549ca0
    MOV EDX,EAX                         ; 00549ca3
    CMP EAX,0x66                        ; 00549ca5
    JNC 0x00549dad                      ; 00549ca8
        ;   XREF to: 00549dad (CONDITIONAL_JUMP)  ; LAB_00549dad
    CMP EAX,0x65                        ; 00549cae
    JZ 0x00549cce                       ; 00549cb1
        ;   XREF to: 00549cce (CONDITIONAL_JUMP)  ; LAB_00549cce
    PUSH EDX                            ; 00549cb3
    PUSH EBX                            ; 00549cb4
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00549cb5
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00549cba
    JMP 0x00549c86                      ; 00549cbd
        ;   XREF to: 00549c86 (UNCONDITIONAL_JUMP)  ; LAB_00549c86
    MOV dword ptr [EBX + 0x10b34],0x0   ; 00549cbf
        ;   Label: LAB_00549cbf
    JMP 0x00549bd4                      ; 00549cc9
        ;   XREF to: 00549bd4 (UNCONDITIONAL_JUMP)  ; LAB_00549bd4
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 00549cce
        ;   Label: LAB_00549cce
    TEST ECX,ECX                        ; 00549cd4
    JNZ 0x00549ce5                      ; 00549cd6
        ;   XREF to: 00549ce5 (CONDITIONAL_JUMP)  ; LAB_00549ce5
    PUSH EDI                            ; 00549cd8
    PUSH EDI                            ; 00549cd9
    PUSH ESI                            ; 00549cda
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00549cdb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00549ce0
    JMP 0x00549c86                      ; 00549ce3
        ;   XREF to: 00549c86 (UNCONDITIONAL_JUMP)  ; LAB_00549c86
    PUSH 0x0                            ; 00549ce5
        ;   Label: LAB_00549ce5
    PUSH EBX                            ; 00549ce7
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 00549ce8
    PUSH ECX                            ; 00549cee
    CALL dword ptr [EDX + 0xf4]         ; 00549cef
    ADD ESP,0xc                         ; 00549cf5
    TEST EAX,EAX                        ; 00549cf8
    JNZ 0x00549c86                      ; 00549cfa
        ;   XREF to: 00549c86 (CONDITIONAL_JUMP)  ; LAB_00549c86
    PUSH EDI                            ; 00549cfc
    PUSH EDI                            ; 00549cfd
    PUSH ESI                            ; 00549cfe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00549cff
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00549d04
    JMP 0x00549c86                      ; 00549d07
        ;   XREF to: 00549c86 (UNCONDITIONAL_JUMP)  ; LAB_00549c86
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 00549d0c
        ;   Label: LAB_00549d0c
    TEST EDX,EDX                        ; 00549d12
    JZ 0x00549c86                       ; 00549d14
        ;   XREF to: 00549c86 (CONDITIONAL_JUMP)  ; LAB_00549c86
    MOV EAX,EDX                         ; 00549d1a
    PUSH EAX                            ; 00549d1c
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 00549d1d
    CALL dword ptr [EDX + 0xf8]         ; 00549d23
    ADD ESP,0x4                         ; 00549d29
    JMP 0x00549c86                      ; 00549d2c
        ;   XREF to: 00549c86 (UNCONDITIONAL_JUMP)  ; LAB_00549c86
    MOV EAX,dword ptr [EBX + 0x10b2c]   ; 00549d31
        ;   Label: LAB_00549d31
    INC EAX                             ; 00549d37
    MOV dword ptr [EBX + 0x10b2c],EAX   ; 00549d38
    CMP EAX,0x3                         ; 00549d3e
    JL 0x00549c86                       ; 00549d41
        ;   XREF to: 00549c86 (CONDITIONAL_JUMP)  ; LAB_00549c86
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 00549d47
    TEST ECX,ECX                        ; 00549d4d
    JZ 0x00549d8d                       ; 00549d4f
        ;   XREF to: 00549d8d (CONDITIONAL_JUMP)  ; LAB_00549d8d
    LEA EAX,[EBP + 0xfffffe62]          ; 00549d51
    PUSH EAX                            ; 00549d57
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00549d58
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,0x4                         ; 00549d5d
    ADD ESP,0x4                         ; 00549d62
    LEA EDX,[EBP + 0xfffffe62]          ; 00549d65
    MOV dword ptr [EBP + 0xfffffe92],EAX ; 00549d6b
    PUSH EDX                            ; 00549d71
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00549d72
    PUSH EAX                            ; 00549d78
    MOV ECX,dword ptr [EAX + 0x2b0]     ; 00549d79
    CALL dword ptr [ECX + 0x110]        ; 00549d7f
    ADD ESP,0x8                         ; 00549d85
    JMP 0x00549c86                      ; 00549d88
        ;   XREF to: 00549c86 (UNCONDITIONAL_JUMP)  ; LAB_00549c86
    PUSH ECX                            ; 00549d8d
        ;   Label: LAB_00549d8d
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 00549d8e
    CALL dword ptr [EDX + 0xf8]         ; 00549d94
    ADD ESP,0x4                         ; 00549d9a
    PUSH EDI                            ; 00549d9d
    PUSH EDI                            ; 00549d9e
    PUSH ESI                            ; 00549d9f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00549da0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00549da5
    JMP 0x00549c86                      ; 00549da8
        ;   XREF to: 00549c86 (UNCONDITIONAL_JUMP)  ; LAB_00549c86
    JBE 0x00549d0c                      ; 00549dad
        ;   XREF to: 00549d0c (CONDITIONAL_JUMP)  ; LAB_00549d0c
        ;   Label: LAB_00549dad
    CMP EAX,0x67                        ; 00549db3
    JZ 0x00549d31                       ; 00549db6
        ;   XREF to: 00549d31 (CONDITIONAL_JUMP)  ; LAB_00549d31
    PUSH EDX                            ; 00549dbc
    PUSH EBX                            ; 00549dbd
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00549dbe
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00549dc3
    JMP 0x00549c86                      ; 00549dc6
        ;   XREF to: 00549c86 (UNCONDITIONAL_JUMP)  ; LAB_00549c86
    FLD float ptr [EBP + 0x92]          ; 00549dcb
        ;   Label: LAB_00549dcb
    FMUL float ptr [EBX + 0x10a60]      ; 00549dd1
    SUB ESP,0x4                         ; 00549dd7
    MOV EAX,dword ptr [EBX + 0x2510]    ; 00549dda
    MOV dword ptr [EBX + 0x2594],EAX    ; 00549de0
    FSTP float ptr [ESP]                ; 00549de6
    PUSH EBX                            ; 00549de9
    CALL core_charactr.cpp_FUN_0042b2a0 ; 00549dea
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 00549def
    LEA EAX,[EBX + 0x2b4]               ; 00549df2
    PUSH EAX                            ; 00549df8
    MOV dword ptr [EBP + 0x6e],EAX      ; 00549df9
    CALL core_motion.cpp_FUN_005035c0   ; 00549dfc
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00549e01
    PUSH dword ptr [EBP + 0x92]         ; 00549e04
    MOV ESI,dword ptr [EAX + 0x24]      ; 00549e0a
    PUSH EBX                            ; 00549e0d
    MOV dword ptr [EBP + 0x66],ESI      ; 00549e0e
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 00549e11
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00549e16
    TEST EAX,EAX                        ; 00549e19
    JZ 0x0054a4f1                       ; 00549e1b
        ;   XREF to: 0054a4f1 (CONDITIONAL_JUMP)  ; LAB_0054a4f1
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00549e21
    CMP EAX,0x2                         ; 00549e27
    JNC 0x00549f4f                      ; 00549e2a
        ;   XREF to: 00549f4f (CONDITIONAL_JUMP)  ; LAB_00549f4f
    CMP EAX,0x1                         ; 00549e30
    JNZ 0x00549f5a                      ; 00549e33
        ;   XREF to: 00549f5a (CONDITIONAL_JUMP)  ; LAB_00549f5a
    PUSH 0x1                            ; 00549e39
        ;   Label: LAB_00549e39
    PUSH 0x2                            ; 00549e3b
    LEA EAX,[EBX + 0x2b4]               ; 00549e3d
        ;   Label: LAB_00549e3d
    PUSH EAX                            ; 00549e43
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00549e44
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00549e49
        ;   Label: LAB_00549e49
    LEA EAX,[EBX + 0x2508]              ; 00549e4c
    MOV dword ptr [EAX + 0x8],0x0       ; 00549e52
    MOV EDX,dword ptr [EAX + 0x8]       ; 00549e59
    MOV dword ptr [EAX + 0x4],EDX       ; 00549e5c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00549e5f
    MOV dword ptr [EAX],EDX             ; 00549e62
    FLD float ptr [EBX + 0x10af8]       ; 00549e64
        ;   Label: caseD_3
    FLDZ                                ; 00549e6a
    FCOMPP                              ; 00549e6c
    FNSTSW AX                           ; 00549e6e
    SAHF                                ; 00549e70
    JNC 0x00549e85                      ; 00549e71
        ;   XREF to: 00549e85 (CONDITIONAL_JUMP)  ; LAB_00549e85
    FLD float ptr [EBX + 0x10af8]       ; 00549e73
    FSUB float ptr [EBP + 0x92]         ; 00549e79
    FSTP float ptr [EBX + 0x10af8]      ; 00549e7f
    CMP dword ptr [EBP + 0x66],0xb      ; 00549e85
        ;   Label: LAB_00549e85
    JNZ 0x0054a504                      ; 00549e89
        ;   XREF to: 0054a504 (CONDITIONAL_JUMP)  ; LAB_0054a504
    LEA EAX,[EBX + 0x2508]              ; 00549e8f
    PUSH EAX                            ; 00549e95
    LEA ESI,[EBP + 0x12]                ; 00549e96
    PUSH EBX                            ; 00549e99
    LEA EDI,[EBP + 0xffffff2e]          ; 00549e9a
    MOV dword ptr [EBP + 0x76],EAX      ; 00549ea0
    CALL core_actor.cpp_FUN_00408cf0    ; 00549ea3
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + 0x12]                ; 00549ea8
    LEA EAX,[EBX + 0x20]                ; 00549eab
    MOVSD ES:EDI,ESI                    ; 00549eae
    MOVSD ES:EDI,ESI                    ; 00549eaf
    MOVSD ES:EDI,ESI                    ; 00549eb0
    FLD float ptr [EAX]                 ; 00549eb1
    FLD float ptr [EAX + 0x4]           ; 00549eb3
    FLD float ptr [EAX + 0x8]           ; 00549eb6
    FXCH ST2                            ; 00549eb9
    FADD float ptr [EBP + 0xffffff2e]   ; 00549ebb
    FXCH                                ; 00549ec1
    FADD float ptr [EBP + 0xffffff32]   ; 00549ec3
    FXCH ST2                            ; 00549ec9
    FADD float ptr [EBP + 0xffffff36]   ; 00549ecb
    FXCH                                ; 00549ed1
    FSTP float ptr [EAX]                ; 00549ed3
    FXCH                                ; 00549ed5
    FSTP float ptr [EAX + 0x4]          ; 00549ed7
    FSTP float ptr [EAX + 0x8]          ; 00549eda
    MOV EAX,dword ptr [EBP + 0x76]      ; 00549edd
    MOV dword ptr [EAX + 0x8],0x0       ; 00549ee0
    ADD ESP,0x8                         ; 00549ee7
    MOV EDX,dword ptr [EAX + 0x8]       ; 00549eea
    MOV dword ptr [EAX + 0x4],EDX       ; 00549eed
    MOV EDX,dword ptr [EAX + 0x4]       ; 00549ef0
    MOV dword ptr [EAX],EDX             ; 00549ef3
    PUSH EBX                            ; 00549ef5
        ;   Label: LAB_00549ef5
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 00549ef6
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00549efb
    LEA EAX,[EBX + 0x2b4]               ; 00549efe
    PUSH EAX                            ; 00549f04
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 00549f05
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00549f0a
    PUSH dword ptr [EBP + 0x92]         ; 00549f0d
    PUSH EBX                            ; 00549f13
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 00549f14
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00549f19
    LEA ESP,[EBP + 0x7a]                ; 00549f1c
        ;   Label: LAB_00549f1c
    POP EBP                             ; 00549f1f
    POP EDI                             ; 00549f20
    POP ESI                             ; 00549f21
    POP EBX                             ; 00549f22
    RET                                 ; 00549f23
    PUSH 0x1                            ; 00549f24
        ;   Label: LAB_00549f24
    PUSH 0x1                            ; 00549f26
    LEA EAX,[EBX + 0x2b4]               ; 00549f28
    PUSH EAX                            ; 00549f2e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00549f2f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00549f34
    PUSH EBX                            ; 00549f37
    MOV EAX,0x5e77c2                    ; 00549f38 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00549f3d | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00609ed0]      ; 00549f3e | g_CConsolePtr
    PUSH ECX                            ; 00549f44 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00549f45
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x00549e49                      ; 00549f4a
        ;   XREF to: 00549e49 (UNCONDITIONAL_JUMP)  ; LAB_00549e49
    JBE 0x00549e39                      ; 00549f4f
        ;   XREF to: 00549e39 (CONDITIONAL_JUMP)  ; LAB_00549e39
        ;   Label: LAB_00549f4f
    CMP EAX,0x3                         ; 00549f55
    JZ 0x00549f24                       ; 00549f58
        ;   XREF to: 00549f24 (CONDITIONAL_JUMP)  ; LAB_00549f24
    PUSH 0x1                            ; 00549f5a
        ;   Label: LAB_00549f5a
    PUSH 0x1                            ; 00549f5c
    JMP 0x00549e3d                      ; 00549f5e
        ;   XREF to: 00549e3d (UNCONDITIONAL_JUMP)  ; LAB_00549e3d
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00549f63
        ;   Label: caseD_6
    TEST EAX,EAX                        ; 00549f69
    JNZ 0x00549f92                      ; 00549f6b
        ;   XREF to: 00549f92 (CONDITIONAL_JUMP)  ; LAB_00549f92
    PUSH EAX                            ; 00549f6d
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00549f6e
    CALL dword ptr [EDX + 0xf8]         ; 00549f74
    ADD ESP,0x4                         ; 00549f7a
    PUSH 0x1                            ; 00549f7d
    PUSH 0x1                            ; 00549f7f
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00549f81
    PUSH EDX                            ; 00549f84
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00549f85
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00549f8a
    JMP 0x00549e64                      ; 00549f8d
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffe9e]          ; 00549f92
        ;   Label: LAB_00549f92
    PUSH EAX                            ; 00549f98
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00549f99
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00549f9e
    PUSH 0x41700000                     ; 00549fa1
    PUSH 0x40e00000                     ; 00549fa6
    LEA ESI,[EBP + 0xffffff76]          ; 00549fab
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00549fb1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00549fb6
    ADD ESP,0x8                         ; 00549fb9
    LEA EAX,[EBP + 0xfffffe9e]          ; 00549fbc
    MOV EDX,dword ptr [0x02628618]      ; 00549fc2 | DAT_02628618
    PUSH EAX                            ; 00549fc8
    LEA EAX,[EDX*0x4 + 0x0]             ; 00549fc9
    MOV dword ptr [EBP + 0xfffffed2],EBX ; 00549fd0
    SUB EAX,EDX                         ; 00549fd6
    MOV dword ptr [EBP + 0xfffffed6],EBX ; 00549fd8
    SHL EAX,0x4                         ; 00549fde
    LEA EDX,[EBX + 0x1134]              ; 00549fe1
    PUSH 0x3f800000                     ; 00549fe7
    ADD EAX,EDX                         ; 00549fec
    LEA EDI,[EBP + -0x72]               ; 00549fee
    PUSH EAX                            ; 00549ff1
    FLD float ptr [EBP + 0x76]          ; 00549ff2
    PUSH 0x265370c                      ; 00549ff5 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffea2]   ; 00549ffa
    CALL core_xform.cpp_FUN_00591530    ; 0054a000
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0054a005
    LEA EAX,[EBP + -0x72]               ; 0054a008
    LEA ESI,[EBP + 0xffffff76]          ; 0054a00b
    PUSH EAX                            ; 0054a011
    MOVSD ES:EDI,ESI                    ; 0054a012
    MOVSD ES:EDI,ESI                    ; 0054a013
    MOVSD ES:EDI,ESI                    ; 0054a014
    PUSH EBX                            ; 0054a015
    LEA ESI,[EBP + 0xffffff16]          ; 0054a016
    CALL core_actor.cpp_FUN_00408d70    ; 0054a01c
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0054a021
    LEA EAX,[EBP + -0x66]               ; 0054a024
    PUSH EAX                            ; 0054a027
    LEA EDI,[EBP + -0x66]               ; 0054a028
    LEA ESI,[EBP + 0xffffff16]          ; 0054a02b
    PUSH EBX                            ; 0054a031
    MOVSD ES:EDI,ESI                    ; 0054a032
    MOVSD ES:EDI,ESI                    ; 0054a033
    MOVSD ES:EDI,ESI                    ; 0054a034
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0054a035
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0054a03a
    JMP 0x00549e64                      ; 0054a03d
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0054a042
        ;   Label: caseD_9
    TEST EDX,EDX                        ; 0054a048
    JZ 0x0054a06d                       ; 0054a04a
        ;   XREF to: 0054a06d (CONDITIONAL_JUMP)  ; LAB_0054a06d
    MOV ECX,dword ptr [EDX + 0x276c]    ; 0054a04c
    MOV EAX,EDX                         ; 0054a052
    TEST ECX,ECX                        ; 0054a054
    JNZ 0x0054a082                      ; 0054a056
        ;   XREF to: 0054a082 (CONDITIONAL_JUMP)  ; LAB_0054a082
    PUSH 0x1                            ; 0054a058
    PUSH 0x1                            ; 0054a05a
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0054a05c
    PUSH EDI                            ; 0054a05f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a060
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a065
    JMP 0x00549e64                      ; 0054a068
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0054a06d
        ;   Label: LAB_0054a06d
    PUSH 0x1                            ; 0054a06f
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0054a071
    PUSH EAX                            ; 0054a074
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a075
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a07a
    JMP 0x00549e64                      ; 0054a07d
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 0054a082
        ;   Label: LAB_0054a082
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0054a083
    CALL dword ptr [EDX + 0x114]        ; 0054a089
    ADD ESP,0x4                         ; 0054a08f
    TEST EAX,EAX                        ; 0054a092
    JZ 0x0054a0c1                       ; 0054a094
        ;   XREF to: 0054a0c1 (CONDITIONAL_JUMP)  ; LAB_0054a0c1
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0054a096
    PUSH EAX                            ; 0054a09c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0054a09d
    CALL dword ptr [EDX + 0xf8]         ; 0054a0a3
    ADD ESP,0x4                         ; 0054a0a9
    PUSH 0x1                            ; 0054a0ac
    PUSH 0x1                            ; 0054a0ae
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0054a0b0
    PUSH ESI                            ; 0054a0b3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a0b4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a0b9
    JMP 0x00549e64                      ; 0054a0bc
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffeda]          ; 0054a0c1
        ;   Label: LAB_0054a0c1
    PUSH EAX                            ; 0054a0c7
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0054a0c8
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0054a0cd
    PUSH 0x41700000                     ; 0054a0d0
    PUSH 0x40e00000                     ; 0054a0d5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0054a0da
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0054a0df
    ADD ESP,0x8                         ; 0054a0e2
    LEA EAX,[EBP + 0xfffffeda]          ; 0054a0e5
    MOV EDX,dword ptr [0x02628618]      ; 0054a0eb | DAT_02628618
    PUSH EAX                            ; 0054a0f1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054a0f2
    LEA ESI,[EBP + -0x36]               ; 0054a0f9
    SUB EAX,EDX                         ; 0054a0fc
    MOV dword ptr [EBP + 0xffffff0e],EBX ; 0054a0fe
    MOV EDX,EAX                         ; 0054a104
    MOV dword ptr [EBP + 0xffffff12],EBX ; 0054a106
    SHL EDX,0x4                         ; 0054a10c
    LEA EAX,[EBX + 0x1134]              ; 0054a10f
    PUSH 0x3f800000                     ; 0054a115
    ADD EAX,EDX                         ; 0054a11a
    LEA EDI,[EBP + 0x36]                ; 0054a11c
    PUSH EAX                            ; 0054a11f
    FLD float ptr [EBP + 0x76]          ; 0054a120
    PUSH 0x265370c                      ; 0054a123 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffede]   ; 0054a128
    CALL core_xform.cpp_FUN_00591530    ; 0054a12e
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0054a133
    LEA EAX,[EBP + 0x36]                ; 0054a136
    LEA ESI,[EBP + -0x36]               ; 0054a139
    PUSH EAX                            ; 0054a13c
    MOVSD ES:EDI,ESI                    ; 0054a13d
    MOVSD ES:EDI,ESI                    ; 0054a13e
    MOVSD ES:EDI,ESI                    ; 0054a13f
    PUSH EBX                            ; 0054a140
    LEA ESI,[EBP + 0xffffff6a]          ; 0054a141
    CALL core_actor.cpp_FUN_00408d70    ; 0054a147
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0054a14c
    LEA EAX,[EBP + 0x2a]                ; 0054a14f
    PUSH EAX                            ; 0054a152
    LEA EDI,[EBP + 0x2a]                ; 0054a153
    LEA ESI,[EBP + 0xffffff6a]          ; 0054a156
    PUSH EBX                            ; 0054a15c
    MOVSD ES:EDI,ESI                    ; 0054a15d
    MOVSD ES:EDI,ESI                    ; 0054a15e
    MOVSD ES:EDI,ESI                    ; 0054a15f
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0054a160
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0054a165
    JMP 0x00549e64                      ; 0054a168
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0054a16d
        ;   Label: caseD_a
    PUSH EAX                            ; 0054a173
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0054a174
    CALL dword ptr [EDX + 0x114]        ; 0054a17a
    ADD ESP,0x4                         ; 0054a180
    TEST EAX,EAX                        ; 0054a183
    JZ 0x00549e64                       ; 0054a185
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0054a18b
    PUSH EAX                            ; 0054a191
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0054a192
    CALL dword ptr [EDX + 0xf8]         ; 0054a198
    ADD ESP,0x4                         ; 0054a19e
    PUSH 0x1                            ; 0054a1a1
    PUSH 0x1                            ; 0054a1a3
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0054a1a5
    PUSH EAX                            ; 0054a1a8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a1a9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a1ae
    JMP 0x00549e64                      ; 0054a1b1
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0x10a64]   ; 0054a1b6
        ;   Label: caseD_8
    TEST EDX,EDX                        ; 0054a1bc
    JNZ 0x00549e64                      ; 0054a1be
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 0054a1c4
    JNZ 0x00549e64                      ; 0054a1cb
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EDX                            ; 0054a1d1
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0054a1d2
    PUSH ESI                            ; 0054a1d5
    LEA ESI,[EBP + 0xffffff52]          ; 0054a1d6
    LEA EDI,[EBP + -0x42]               ; 0054a1dc
    CALL core_skeleton.cpp_FUN_005469a0 ; 0054a1df
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0054a1e4
    LEA EAX,[EBP + -0x42]               ; 0054a1e7
    LEA ESI,[EBP + 0xffffff52]          ; 0054a1ea
    PUSH EAX                            ; 0054a1f0
    MOVSD ES:EDI,ESI                    ; 0054a1f1
    MOVSD ES:EDI,ESI                    ; 0054a1f2
    MOVSD ES:EDI,ESI                    ; 0054a1f3
    PUSH EBX                            ; 0054a1f4
    LEA ESI,[EBP + 0x42]                ; 0054a1f5
    LEA EDI,[EBP + 0xffffff3a]          ; 0054a1f8
    CALL core_actor.cpp_FUN_00408d70    ; 0054a1fe
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0054a203
    LEA ESI,[EBP + 0x42]                ; 0054a206
    LEA EAX,[EBP + 0xffffff3a]          ; 0054a209
    PUSH 0x0                            ; 0054a20f
    MOVSD ES:EDI,ESI                    ; 0054a211
    MOVSD ES:EDI,ESI                    ; 0054a212
    MOVSD ES:EDI,ESI                    ; 0054a213
    PUSH EAX                            ; 0054a214
    MOV EDI,dword ptr [0x006167e0]      ; 0054a215 | g_CGorePtr
    PUSH EDI                            ; 0054a21b
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 0054a21c
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0054a221
    MOV dword ptr [EBX + 0x10a64],0x1   ; 0054a224
    JMP 0x00549e64                      ; 0054a22e
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x5e77ec                       ; 0054a233 | = "Capture"
        ;   Label: caseD_1
    MOV EDI,dword ptr [0x006141f0]      ; 0054a238 | DAT_006141f0
    PUSH EDI                            ; 0054a23e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0054a23f
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054a244
    TEST EAX,EAX                        ; 0054a247
    JNZ 0x00549e64                      ; 0054a249
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0054a24f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0054a255
    PUSH EBX                            ; 0054a25b
    CALL dword ptr [EAX + 0x150]        ; 0054a25c
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0054a262
    ADD ESP,0x8                         ; 0054a268
    TEST EAX,EAX                        ; 0054a26b
    JZ 0x00549e64                       ; 0054a26d
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,EAX                         ; 0054a273
    LEA EDI,[EBP + -0x7e]               ; 0054a275
    LEA ESI,[EBP + 0x6]                 ; 0054a278
    FLD float ptr [EDX + 0x20]          ; 0054a27b
    FLD float ptr [EDX + 0x24]          ; 0054a27e
    LEA EAX,[EBX + 0x20]                ; 0054a281
    FLD float ptr [EDX + 0x28]          ; 0054a284
    FXCH ST2                            ; 0054a287
    FSUB float ptr [EAX]                ; 0054a289
    FXCH                                ; 0054a28b
    FSUB float ptr [EAX + 0x4]          ; 0054a28d
    FXCH ST2                            ; 0054a290
    FSUB float ptr [EAX + 0x8]          ; 0054a292
    FXCH                                ; 0054a295
    FSTP float ptr [EBP + 0x6]          ; 0054a297
    FXCH                                ; 0054a29a
    FSTP float ptr [EBP + 0xa]          ; 0054a29c
    FSTP float ptr [EBP + 0xe]          ; 0054a29f
    MOVSD ES:EDI,ESI                    ; 0054a2a2
    MOVSD ES:EDI,ESI                    ; 0054a2a3
    MOVSD ES:EDI,ESI                    ; 0054a2a4
    FLD float ptr [EBP + -0x7a]         ; 0054a2a5
    FMUL ST0                            ; 0054a2a8
    FLD float ptr [EBP + -0x7e]         ; 0054a2aa
    FMUL ST0                            ; 0054a2ad
    FADDP                               ; 0054a2af
    FLD float ptr [EBP + -0x76]         ; 0054a2b1
    FMUL ST0                            ; 0054a2b4
    FADDP                               ; 0054a2b6
    FSQRT                               ; 0054a2b8
    FLD float ptr [0x005fba58]          ; 0054a2ba | DAT_005fba58
    FLD1                                ; 0054a2c0
    FADDP                               ; 0054a2c2
    FXCH                                ; 0054a2c4
    FSTP float ptr [EBP + 0x72]         ; 0054a2c6
    MOV EAX,dword ptr [EBP + 0x72]      ; 0054a2c9
    FLD float ptr [EBP + 0x72]          ; 0054a2cc
    MOV dword ptr [EBP + 0x62],EAX      ; 0054a2cf
    FCOMPP                              ; 0054a2d2
    FNSTSW AX                           ; 0054a2d4
    SAHF                                ; 0054a2d6
    JC 0x0054a303                       ; 0054a2d7
        ;   XREF to: 0054a303 (CONDITIONAL_JUMP)  ; LAB_0054a303
    FLD float ptr [EBP + 0x62]          ; 0054a2d9
        ;   Label: LAB_0054a2d9
    FCOMP float ptr [EBX + 0x10afc]     ; 0054a2dc
    FNSTSW AX                           ; 0054a2e2
    SAHF                                ; 0054a2e4
    JNC 0x00549e64                      ; 0054a2e5
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0054a2eb
    PUSH 0x2                            ; 0054a2ed
    LEA EAX,[EBX + 0x2b4]               ; 0054a2ef
    PUSH EAX                            ; 0054a2f5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a2f6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a2fb
    JMP 0x00549e64                      ; 0054a2fe
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + -0x7e]               ; 0054a303
        ;   Label: LAB_0054a303
    PUSH EAX                            ; 0054a306
    LEA ESI,[EBP + -0x6]                ; 0054a307
    LEA EDI,[EBP + 0xffffff46]          ; 0054a30a
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0054a310
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + -0x6]                ; 0054a315
    MOVSD ES:EDI,ESI                    ; 0054a318
    MOVSD ES:EDI,ESI                    ; 0054a319
    MOVSD ES:EDI,ESI                    ; 0054a31a
    ADD ESP,0x4                         ; 0054a31b
    FLD float ptr [EBP + 0xffffff4a]    ; 0054a31e
    FSUB float ptr [EBX + 0x34]         ; 0054a324
    SUB ESP,0x4                         ; 0054a327
    FSTP float ptr [ESP]                ; 0054a32a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0054a32d
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0054a332
    FLD float ptr [EBP + 0x76]          ; 0054a335
    FABS                                ; 0054a338
    ADD ESP,0x4                         ; 0054a33a
    FCOMP double ptr [0x005e77fd]       ; 0054a33d | DAT_005e77fd
    FNSTSW AX                           ; 0054a343
    SAHF                                ; 0054a345
    JNC 0x0054a2d9                      ; 0054a346
        ;   XREF to: 0054a2d9 (CONDITIONAL_JUMP)  ; LAB_0054a2d9
    PUSH 0x1                            ; 0054a348
    PUSH 0x9                            ; 0054a34a
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0054a34c
    PUSH EDX                            ; 0054a34f
    MOV dword ptr [EBX + 0x10b2c],0x0   ; 0054a350
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a35a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a35f
    JMP 0x0054a2d9                      ; 0054a362
        ;   XREF to: 0054a2d9 (UNCONDITIONAL_JUMP)  ; LAB_0054a2d9
    PUSH 0x5e77f4                       ; 0054a367 | = "Capture"
        ;   Label: caseD_2
    MOV ECX,dword ptr [0x006141f0]      ; 0054a36c | DAT_006141f0
    PUSH ECX                            ; 0054a372
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0054a373
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054a378
    TEST EAX,EAX                        ; 0054a37b
    JZ 0x0054a394                       ; 0054a37d
        ;   XREF to: 0054a394 (CONDITIONAL_JUMP)  ; LAB_0054a394
    PUSH 0x1                            ; 0054a37f
    PUSH 0x1                            ; 0054a381
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0054a383
    PUSH ESI                            ; 0054a386
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a387
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a38c
    JMP 0x00549e64                      ; 0054a38f
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0054a394
        ;   Label: LAB_0054a394
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0054a39a
    PUSH EBX                            ; 0054a3a0
    CALL dword ptr [EAX + 0x150]        ; 0054a3a1
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0054a3a7
    ADD ESP,0x8                         ; 0054a3ad
    TEST ESI,ESI                        ; 0054a3b0
    JZ 0x0054a4dc                       ; 0054a3b2
        ;   XREF to: 0054a4dc (CONDITIONAL_JUMP)  ; LAB_0054a4dc
    MOV EDI,dword ptr [ESI + 0x276c]    ; 0054a3b8
    MOV EAX,ESI                         ; 0054a3be
    CMP EBX,EDI                         ; 0054a3c0
    JNZ 0x0054a3d4                      ; 0054a3c2
        ;   XREF to: 0054a3d4 (CONDITIONAL_JUMP)  ; LAB_0054a3d4
    PUSH ESI                            ; 0054a3c4
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 0054a3c5
    CALL dword ptr [EDX + 0xf8]         ; 0054a3cb
    ADD ESP,0x4                         ; 0054a3d1
    MOV EAX,[0x005fba58]                ; 0054a3d4 | DAT_005fba58
        ;   Label: LAB_0054a3d4
    MOV dword ptr [EBP + 0x6a],EAX      ; 0054a3d9
    LEA EAX,[EBX + 0x2508]              ; 0054a3dc
    MOV dword ptr [EAX + 0x8],0x0       ; 0054a3e2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054a3e9
    MOV dword ptr [EAX + 0x4],EDX       ; 0054a3ec
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054a3ef
    MOV dword ptr [EAX],EDX             ; 0054a3f2
    XOR EAX,EAX                         ; 0054a3f4
    MOV dword ptr [EBP + 0x4e],EAX      ; 0054a3f6
    MOV dword ptr [EBP + 0x52],EAX      ; 0054a3f9
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0054a3fc
    PUSH 0x3e32b8c2                     ; 0054a3ff
    MOV dword ptr [EBP + 0x56],EAX      ; 0054a404
    LEA EAX,[EBP + 0x4e]                ; 0054a407
    PUSH 0x3f000000                     ; 0054a40a
    PUSH EAX                            ; 0054a40f
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0054a410
    PUSH EAX                            ; 0054a416
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0054a417
    CALL dword ptr [EDX + 0xcc]         ; 0054a41d
    ADD ESP,0x4                         ; 0054a423
    PUSH EAX                            ; 0054a426
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0054a427
    ADD EAX,0x20                        ; 0054a42d
    PUSH EAX                            ; 0054a430
    PUSH EBX                            ; 0054a431
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0054a432
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0054a437
    TEST EAX,EAX                        ; 0054a43a
    JL 0x00549e64                       ; 0054a43c
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    JLE 0x00549e64                      ; 0054a442
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + 0x1e]                ; 0054a448
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0054a44b
    LEA ESI,[EBP + -0x2a]               ; 0054a451
    LEA EDX,[EBX + 0x20]                ; 0054a454
    FLD float ptr [EAX + 0x20]          ; 0054a457
    FLD float ptr [EAX + 0x24]          ; 0054a45a
    FLD float ptr [EAX + 0x28]          ; 0054a45d
    FXCH ST2                            ; 0054a460
    FSUB float ptr [EDX]                ; 0054a462
    FXCH                                ; 0054a464
    FSUB float ptr [EDX + 0x4]          ; 0054a466
    FXCH ST2                            ; 0054a469
    FSUB float ptr [EDX + 0x8]          ; 0054a46b
    FXCH                                ; 0054a46e
    FSTP float ptr [EBP + -0x2a]        ; 0054a470
    FXCH                                ; 0054a473
    FSTP float ptr [EBP + -0x26]        ; 0054a475
    FSTP float ptr [EBP + -0x22]        ; 0054a478
    MOVSD ES:EDI,ESI                    ; 0054a47b
    MOVSD ES:EDI,ESI                    ; 0054a47c
    MOVSD ES:EDI,ESI                    ; 0054a47d
    FLD float ptr [EBP + 0x22]          ; 0054a47e
    FMUL ST0                            ; 0054a481
    FLD float ptr [EBP + 0x1e]          ; 0054a483
    FMUL ST0                            ; 0054a486
    FADDP                               ; 0054a488
    FLD float ptr [EBP + 0x26]          ; 0054a48a
    FMUL ST0                            ; 0054a48d
    FADDP                               ; 0054a48f
    FSQRT                               ; 0054a491
    FLD float ptr [EBP + 0x6a]          ; 0054a493
    FLD1                                ; 0054a496
    FADDP                               ; 0054a498
    FXCH                                ; 0054a49a
    FCOMPP                              ; 0054a49c
    FNSTSW AX                           ; 0054a49e
    SAHF                                ; 0054a4a0
    JNC 0x00549e64                      ; 0054a4a1
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0x10af8]       ; 0054a4a7
    FLDZ                                ; 0054a4ad
    FCOMPP                              ; 0054a4af
    FNSTSW AX                           ; 0054a4b1
    SAHF                                ; 0054a4b3
    JC 0x00549e64                       ; 0054a4b4
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0054a4ba
    PUSH 0x6                            ; 0054a4bc
    LEA EAX,[EBX + 0x2b4]               ; 0054a4be
    PUSH EAX                            ; 0054a4c4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a4c5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a4ca
    MOV dword ptr [EBX + 0x10af8],0x3f800000 ; 0054a4cd
    JMP 0x00549e64                      ; 0054a4d7
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0054a4dc
        ;   Label: LAB_0054a4dc
    PUSH 0x1                            ; 0054a4de
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0054a4e0
    PUSH ECX                            ; 0054a4e3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054a4e4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054a4e9
    JMP 0x00549e64                      ; 0054a4ec
        ;   XREF to: 00549e64 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[ESI + -0x1]                ; 0054a4f1
        ;   Label: LAB_0054a4f1
    CMP EAX,0x9                         ; 0054a4f4
    JA 0x00549e64                       ; 0054a4f7
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x549b70]  ; 0054a4fd | caseD_1 | caseD_2 | caseD_7
        ;   Label: switchD
    PUSH EBX                            ; 0054a504
        ;   Label: LAB_0054a504
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 0054a505
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0054a50a
    TEST EAX,EAX                        ; 0054a50d
    JZ 0x00549ef5                       ; 0054a50f
        ;   XREF to: 00549ef5 (CONDITIONAL_JUMP)  ; LAB_00549ef5
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0054a515
    TEST EDI,EDI                        ; 0054a51b
    JZ 0x0054a549                       ; 0054a51d
        ;   XREF to: 0054a549 (CONDITIONAL_JUMP)  ; LAB_0054a549
    PUSH EDI                            ; 0054a51f
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 0054a520
    CALL dword ptr [EDX + 0xfc]         ; 0054a526
    ADD ESP,0x4                         ; 0054a52c
    CMP EAX,EBX                         ; 0054a52f
    JNZ 0x0054a549                      ; 0054a531
        ;   XREF to: 0054a549 (CONDITIONAL_JUMP)  ; LAB_0054a549
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0054a533
    PUSH EAX                            ; 0054a539
    MOV EDX,dword ptr [0x0061b5a8]      ; 0054a53a | g_CDemonSetPtr
    PUSH EDX                            ; 0054a540 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0054a541
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0054a546
    PUSH dword ptr [EBP + 0x92]         ; 0054a549
        ;   Label: LAB_0054a549
    PUSH EBX                            ; 0054a54f
    CALL core_charactr.cpp_FUN_00423a10 ; 0054a550
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA ECX,[EBX + 0x2588]              ; 0054a555
    FLD float ptr [ECX]                 ; 0054a55b
    FMUL float ptr [EBP + 0x92]         ; 0054a55d
    FLD float ptr [ECX + 0x4]           ; 0054a563
    FMUL float ptr [EBP + 0x92]         ; 0054a566
    FLD float ptr [ECX + 0x8]           ; 0054a56c
    FMUL float ptr [EBP + 0x92]         ; 0054a56f
    LEA EDI,[EBP + -0x4e]               ; 0054a575
    LEA ESI,[EBP + -0x5a]               ; 0054a578
    FXCH ST2                            ; 0054a57b
    FSTP float ptr [EBP + -0x5a]        ; 0054a57d
    FSTP float ptr [EBP + -0x56]        ; 0054a580
    FSTP float ptr [EBP + -0x52]        ; 0054a583
    MOVSD ES:EDI,ESI                    ; 0054a586
    MOVSD ES:EDI,ESI                    ; 0054a587
    MOVSD ES:EDI,ESI                    ; 0054a588
    LEA EAX,[EBX + 0x257c]              ; 0054a589
    FLD float ptr [EBP + -0x4e]         ; 0054a58f
    FLD float ptr [EBP + -0x4a]         ; 0054a592
    FLD float ptr [EBP + -0x46]         ; 0054a595
    LEA EDI,[EBP + 0xffffff22]          ; 0054a598
    LEA ESI,[EBP + -0x1e]               ; 0054a59e
    FXCH ST2                            ; 0054a5a1
    FADD float ptr [EAX]                ; 0054a5a3
    FXCH                                ; 0054a5a5
    FADD float ptr [EAX + 0x4]          ; 0054a5a7
    FXCH ST2                            ; 0054a5aa
    FADD float ptr [EAX + 0x8]          ; 0054a5ac
    FXCH                                ; 0054a5af
    FSTP float ptr [EBP + -0x1e]        ; 0054a5b1
    FXCH                                ; 0054a5b4
    FSTP float ptr [EBP + -0x1a]        ; 0054a5b6
    FSTP float ptr [EBP + -0x16]        ; 0054a5b9
    MOVSD ES:EDI,ESI                    ; 0054a5bc
    MOVSD ES:EDI,ESI                    ; 0054a5bd
    MOVSD ES:EDI,ESI                    ; 0054a5be
    LEA EDX,[EBX + 0x2508]              ; 0054a5bf
    FLD float ptr [EBP + 0xffffff22]    ; 0054a5c5
    FLD float ptr [EBP + 0xffffff26]    ; 0054a5cb
    FLD float ptr [EBP + 0xffffff2a]    ; 0054a5d1
    LEA EDI,[EBP + 0xffffff5e]          ; 0054a5d7
    LEA ESI,[EBP + -0x12]               ; 0054a5dd
    FXCH ST2                            ; 0054a5e0
    FADD float ptr [EDX]                ; 0054a5e2
    FXCH                                ; 0054a5e4
    FADD float ptr [EDX + 0x4]          ; 0054a5e6
    FXCH ST2                            ; 0054a5e9
    FADD float ptr [EDX + 0x8]          ; 0054a5eb
    FXCH                                ; 0054a5ee
    FSTP float ptr [EBP + -0x12]        ; 0054a5f0
    FXCH                                ; 0054a5f3
    FSTP float ptr [EBP + -0xe]         ; 0054a5f5
    FSTP float ptr [EBP + -0xa]         ; 0054a5f8
    MOVSD ES:EDI,ESI                    ; 0054a5fb
    MOVSD ES:EDI,ESI                    ; 0054a5fc
    MOVSD ES:EDI,ESI                    ; 0054a5fd
    MOV dword ptr [EAX + 0x8],0x0       ; 0054a5fe
    ADD ESP,0x8                         ; 0054a605
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054a608
    MOV dword ptr [EAX + 0x4],ECX       ; 0054a60b
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054a60e
    MOV dword ptr [EAX],ECX             ; 0054a611
    MOV dword ptr [EDX + 0x8],0x0       ; 0054a613
    LEA EAX,[EBP + 0xffffff5e]          ; 0054a61a
    FLD float ptr [EDX + 0x8]           ; 0054a620
    PUSH EAX                            ; 0054a623
    FST float ptr [EDX + 0x4]           ; 0054a624
    PUSH EBX                            ; 0054a627
    FSTP float ptr [EDX]                ; 0054a628
    CALL core_charactr.cpp_FUN_00423a60 ; 0054a62a
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0054a62f
    JMP 0x00549ef5                      ; 0054a632
        ;   XREF to: 00549ef5 (UNCONDITIONAL_JUMP)  ; LAB_00549ef5

