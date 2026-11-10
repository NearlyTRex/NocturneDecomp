; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_process_FUN_004768a0(CZombieDog *this_ptr,float delta_time)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00476878 = 00476cfb
;   TerminatedCString s_s_confused_while_walking_005da6a8
;   TerminatedCString s_dog5_wav_005da6d2
;   TerminatedCString s_dog5_wav_005da6db
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005da6e4
;   undefined4 DAT_005da708
;   undefined4 DAT_005da710
;   undefined4 DAT_005fee88
;   undefined4 DAT_005fee94
;   CConsole* g_CConsolePtr = 007db5f0
;   CGore* g_CGorePtr = 01cd0e3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01cc804c
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00432f10
;   core_charactr.cpp_FUN_00434790
;   core_charactr.cpp_FUN_00435320
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004768a0
        ;   Label: core_dog.cpp_CZombieDog_process_FUN_004768a0
    PUSH ESI                            ; 004768a1
    PUSH EDI                            ; 004768a2
    PUSH EBP                            ; 004768a3
    MOV EBP,ESP                         ; 004768a4
    SUB ESP,0x148                       ; 004768a6
    SUB EBP,0x7a                        ; 004768ac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004768af
    PUSH dword ptr [EBP + 0x92]         ; 004768b5
    PUSH EBX                            ; 004768bb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004768bc
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004768c1
    TEST EAX,EAX                        ; 004768c4
    JNZ 0x004768d0                      ; 004768c6
        ;   XREF to: 004768d0 (CONDITIONAL_JUMP)  ; LAB_004768d0
    LEA ESP,[EBP + 0x7a]                ; 004768c8
    POP EBP                             ; 004768cb
    POP EDI                             ; 004768cc
    POP ESI                             ; 004768cd
    POP EBX                             ; 004768ce
    RET                                 ; 004768cf
    PUSH dword ptr [EBP + 0x92]         ; 004768d0
        ;   Label: LAB_004768d0
    PUSH EBX                            ; 004768d6
    CALL core_charactr.cpp_FUN_00434790 ; 004768d7
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
    ADD ESP,0x8                         ; 004768dc
    PUSH 0x0                            ; 004768df
    PUSH dword ptr [EBP + 0x92]         ; 004768e1
    PUSH EBX                            ; 004768e7
    CALL core_charactr.cpp_FUN_00432f10 ; 004768e8
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432f10()
    LEA EAX,[EBX + 0x249c]              ; 004768ed
    MOV dword ptr [EAX + 0x8],0x0       ; 004768f3
    FLD float ptr [EBP + 0x92]          ; 004768fa
    MOV EDX,dword ptr [EAX + 0x8]       ; 00476900
    MOV dword ptr [EAX + 0x4],EDX       ; 00476903
    MOV EDX,dword ptr [EAX + 0x4]       ; 00476906
    MOV dword ptr [EAX],EDX             ; 00476909
    FMUL float ptr [EBX + 0xc1d0]       ; 0047690b
    ADD ESP,0xc                         ; 00476911
    LEA ESI,[EBX + 0x158]               ; 00476914
    FSTP float ptr [EBP + 0x66]         ; 0047691a
    FLD float ptr [EBP + 0x66]          ; 0047691d
        ;   Label: LAB_0047691d
    FLDZ                                ; 00476920
    FCOMPP                              ; 00476922
    FNSTSW AX                           ; 00476924
    SAHF                                ; 00476926
    JNC 0x00476942                      ; 00476927
        ;   XREF to: 00476942 (CONDITIONAL_JUMP)  ; LAB_00476942
    LEA EAX,[EBP + 0x66]                ; 00476929
    PUSH EAX                            ; 0047692c
    PUSH ESI                            ; 0047692d
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0047692e
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00476933
    PUSH EAX                            ; 00476936
    PUSH EBX                            ; 00476937
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00476938
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0047693d
    JMP 0x0047691d                      ; 00476940
        ;   XREF to: 0047691d (UNCONDITIONAL_JUMP)  ; LAB_0047691d
    PUSH ESI                            ; 00476942
        ;   Label: LAB_00476942
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00476943
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    FLD float ptr [EBP + 0x92]          ; 00476948
    FMUL float ptr [EBX + 0xc1d0]       ; 0047694e
    FLD float ptr [EBX + 0x24a4]        ; 00476954
    ADD ESP,0x4                         ; 0047695a
    MOV ESI,dword ptr [EAX + 0x24]      ; 0047695d
    SUB ESP,0x4                         ; 00476960
    FSTP float ptr [EBX + 0x2524]       ; 00476963
    FSTP float ptr [ESP]                ; 00476969
    PUSH EBX                            ; 0047696c
    MOV dword ptr [EBP + 0x72],ESI      ; 0047696d
    CALL core_charactr.cpp_FUN_00435320 ; 00476970
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00476975
    CMP ESI,0x2                         ; 00476978
    JNZ 0x00476993                      ; 0047697b
        ;   XREF to: 00476993 (CONDITIONAL_JUMP)  ; LAB_00476993
    FLD float ptr [EBX + 0x2528]        ; 0047697d
    FLD ST0                             ; 00476983
    FMUL double ptr [0x005da708]        ; 00476985 | DAT_005da708
    FSTP ST1                            ; 0047698b
    FSTP float ptr [EBX + 0x2528]       ; 0047698d
    PUSH dword ptr [EBP + 0x92]         ; 00476993
        ;   Label: LAB_00476993
    PUSH EBX                            ; 00476999
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0047699a
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047699f
    TEST EAX,EAX                        ; 004769a2
    JZ 0x00476fd2                       ; 004769a4
        ;   XREF to: 00476fd2 (CONDITIONAL_JUMP)  ; LAB_00476fd2
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004769aa
    CMP EAX,0x2                         ; 004769b0
    JNC 0x00476b91                      ; 004769b3
        ;   XREF to: 00476b91 (CONDITIONAL_JUMP)  ; LAB_00476b91
    CMP EAX,0x1                         ; 004769b9
    JNZ 0x00476b9c                      ; 004769bc
        ;   XREF to: 00476b9c (CONDITIONAL_JUMP)  ; LAB_00476b9c
    PUSH 0x1                            ; 004769c2
        ;   Label: LAB_004769c2
    PUSH 0x1                            ; 004769c4
    LEA EAX,[EBX + 0x158]               ; 004769c6
        ;   Label: LAB_004769c6
    PUSH EAX                            ; 004769cc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004769cd
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004769d2
        ;   Label: LAB_004769d2
    LEA EAX,[EBX + 0x249c]              ; 004769d5
    MOV dword ptr [EAX + 0x8],0x0       ; 004769db
    MOV EDX,dword ptr [EAX + 0x8]       ; 004769e2
    MOV dword ptr [EAX + 0x4],EDX       ; 004769e5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004769e8
    MOV dword ptr [EAX],EDX             ; 004769eb
    FLD float ptr [EBX + 0xc1e4]        ; 004769ed
        ;   Label: caseD_5
    FLDZ                                ; 004769f3
    FCOMPP                              ; 004769f5
    FNSTSW AX                           ; 004769f7
    SAHF                                ; 004769f9
    JNC 0x00476a0e                      ; 004769fa
        ;   XREF to: 00476a0e (CONDITIONAL_JUMP)  ; LAB_00476a0e
    FLD float ptr [EBX + 0xc1e4]        ; 004769fc
    FSUB float ptr [EBP + 0x92]         ; 00476a02
    FSTP float ptr [EBX + 0xc1e4]       ; 00476a08
    PUSH EBX                            ; 00476a0e
        ;   Label: LAB_00476a0e
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 00476a0f
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00476a14
    TEST EAX,EAX                        ; 00476a17
    JZ 0x00476b38                       ; 00476a19
        ;   XREF to: 00476b38 (CONDITIONAL_JUMP)  ; LAB_00476b38
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00476a1f
    TEST ESI,ESI                        ; 00476a25
    JZ 0x00476a52                       ; 00476a27
        ;   XREF to: 00476a52 (CONDITIONAL_JUMP)  ; LAB_00476a52
    PUSH ESI                            ; 00476a29
    MOV EDX,dword ptr [ESI + 0x154]     ; 00476a2a
    CALL dword ptr [EDX + 0xf4]         ; 00476a30
    ADD ESP,0x4                         ; 00476a36
    CMP EAX,EBX                         ; 00476a39
    JNZ 0x00476a52                      ; 00476a3b
        ;   XREF to: 00476a52 (CONDITIONAL_JUMP)  ; LAB_00476a52
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 00476a3d
    PUSH EDI                            ; 00476a43
    MOV EAX,[0x00622c18]                ; 00476a44 | g_CDemonSetPtr
    PUSH EAX                            ; 00476a49 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00476a4a
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00476a4f
    PUSH dword ptr [EBP + 0x92]         ; 00476a52
        ;   Label: LAB_00476a52
    PUSH EBX                            ; 00476a58
    LEA ESI,[EBX + 0x2518]              ; 00476a59
    CALL core_charactr.cpp_FUN_0042d700 ; 00476a5f
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 00476a64
    FMUL float ptr [EBP + 0x92]         ; 00476a66
    FLD float ptr [ESI + 0x4]           ; 00476a6c
    FMUL float ptr [EBP + 0x92]         ; 00476a6f
    FLD float ptr [ESI + 0x8]           ; 00476a75
    FMUL float ptr [EBP + 0x92]         ; 00476a78
    LEA EDI,[EBP + -0x2]                ; 00476a7e
    LEA ESI,[EBP + 0x3a]                ; 00476a81
    FXCH ST2                            ; 00476a84
    FSTP float ptr [EBP + 0x3a]         ; 00476a86
    FSTP float ptr [EBP + 0x3e]         ; 00476a89
    FSTP float ptr [EBP + 0x42]         ; 00476a8c
    MOVSD ES:EDI,ESI                    ; 00476a8f
    MOVSD ES:EDI,ESI                    ; 00476a90
    MOVSD ES:EDI,ESI                    ; 00476a91
    LEA EDX,[EBX + 0x250c]              ; 00476a92
    FLD float ptr [EBP + -0x2]          ; 00476a98
    FLD float ptr [EBP + 0x2]           ; 00476a9b
    FLD float ptr [EBP + 0x6]           ; 00476a9e
    LEA EDI,[EBP + 0xffffff6e]          ; 00476aa1
    LEA ESI,[EBP + 0x16]                ; 00476aa7
    FXCH ST2                            ; 00476aaa
    FADD float ptr [EDX]                ; 00476aac
    FXCH                                ; 00476aae
    FADD float ptr [EDX + 0x4]          ; 00476ab0
    FXCH ST2                            ; 00476ab3
    FADD float ptr [EDX + 0x8]          ; 00476ab5
    FXCH                                ; 00476ab8
    FSTP float ptr [EBP + 0x16]         ; 00476aba
    FXCH                                ; 00476abd
    FSTP float ptr [EBP + 0x1a]         ; 00476abf
    FSTP float ptr [EBP + 0x1e]         ; 00476ac2
    MOVSD ES:EDI,ESI                    ; 00476ac5
    MOVSD ES:EDI,ESI                    ; 00476ac6
    MOVSD ES:EDI,ESI                    ; 00476ac7
    LEA EAX,[EBX + 0x249c]              ; 00476ac8
    FLD float ptr [EBP + 0xffffff6e]    ; 00476ace
    FLD float ptr [EBP + 0xffffff72]    ; 00476ad4
    FLD float ptr [EBP + 0xffffff76]    ; 00476ada
    LEA EDI,[EBP + -0x56]               ; 00476ae0
    LEA ESI,[EBP + -0x1a]               ; 00476ae3
    FXCH ST2                            ; 00476ae6
    FADD float ptr [EAX]                ; 00476ae8
    FXCH                                ; 00476aea
    FADD float ptr [EAX + 0x4]          ; 00476aec
    FXCH ST2                            ; 00476aef
    FADD float ptr [EAX + 0x8]          ; 00476af1
    FXCH                                ; 00476af4
    FSTP float ptr [EBP + -0x1a]        ; 00476af6
    FXCH                                ; 00476af9
    FSTP float ptr [EBP + -0x16]        ; 00476afb
    FSTP float ptr [EBP + -0x12]        ; 00476afe
    MOVSD ES:EDI,ESI                    ; 00476b01
    MOVSD ES:EDI,ESI                    ; 00476b02
    MOVSD ES:EDI,ESI                    ; 00476b03
    MOV dword ptr [EDX + 0x8],0x0       ; 00476b04
    MOV ECX,dword ptr [EDX + 0x8]       ; 00476b0b
    MOV dword ptr [EDX + 0x4],ECX       ; 00476b0e
    MOV ECX,dword ptr [EDX + 0x4]       ; 00476b11
    MOV dword ptr [EDX],ECX             ; 00476b14
    MOV dword ptr [EAX + 0x8],0x0       ; 00476b16
    ADD ESP,0x8                         ; 00476b1d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00476b20
    MOV dword ptr [EAX + 0x4],EDX       ; 00476b23
    MOV EDX,dword ptr [EAX + 0x4]       ; 00476b26
    MOV dword ptr [EAX],EDX             ; 00476b29
    LEA EAX,[EBP + -0x56]               ; 00476b2b
    PUSH EAX                            ; 00476b2e
    PUSH EBX                            ; 00476b2f
    CALL core_charactr.cpp_FUN_0042d750 ; 00476b30
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00476b35
    PUSH EBX                            ; 00476b38
        ;   Label: LAB_00476b38
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00476b39
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00476b3e
    LEA EAX,[EBX + 0x158]               ; 00476b41
    PUSH EAX                            ; 00476b47
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00476b48
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00476b4d
    PUSH dword ptr [EBP + 0x92]         ; 00476b50
    PUSH EBX                            ; 00476b56
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 00476b57
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00476b5c
    LEA ESP,[EBP + 0x7a]                ; 00476b5f
    POP EBP                             ; 00476b62
    POP EDI                             ; 00476b63
    POP ESI                             ; 00476b64
    POP EBX                             ; 00476b65
    RET                                 ; 00476b66
    PUSH 0x1                            ; 00476b67
        ;   Label: LAB_00476b67
    PUSH 0x0                            ; 00476b69
    LEA EAX,[EBX + 0x158]               ; 00476b6b
    PUSH EAX                            ; 00476b71
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00476b72
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00476b77
    PUSH EBX                            ; 00476b7a
    PUSH 0x5da6a8                       ; 00476b7b | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00611100]      ; 00476b80 | g_CConsolePtr
    PUSH ECX                            ; 00476b86 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00476b87
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x004769d2                      ; 00476b8c
        ;   XREF to: 004769d2 (UNCONDITIONAL_JUMP)  ; LAB_004769d2
    JBE 0x004769c2                      ; 00476b91
        ;   XREF to: 004769c2 (CONDITIONAL_JUMP)  ; LAB_004769c2
        ;   Label: LAB_00476b91
    CMP EAX,0x3                         ; 00476b97
    JZ 0x00476b67                       ; 00476b9a
        ;   XREF to: 00476b67 (CONDITIONAL_JUMP)  ; LAB_00476b67
    PUSH 0x1                            ; 00476b9c
        ;   Label: LAB_00476b9c
    PUSH 0x0                            ; 00476b9e
    JMP 0x004769c6                      ; 00476ba0
        ;   XREF to: 004769c6 (UNCONDITIONAL_JUMP)  ; LAB_004769c6
    LEA EAX,[EBP + 0xffffff32]          ; 00476ba5
        ;   Label: caseD_3
    PUSH EAX                            ; 00476bab
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00476bac
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00476bb1
    PUSH 0x41700000                     ; 00476bb4
    PUSH 0x40e00000                     ; 00476bb9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00476bbe
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00476bc3
    MOV dword ptr [EBP + 0xffffff66],EBX ; 00476bc6
    MOV dword ptr [EBP + 0xffffff6a],EBX ; 00476bcc
    ADD ESP,0x8                         ; 00476bd2
    FLD float ptr [EBP + 0x76]          ; 00476bd5
    LEA EAX,[EBP + 0xffffff32]          ; 00476bd8
    FSTP float ptr [EBP + 0xffffff36]   ; 00476bde
    MOV EDX,dword ptr [EBX + 0xc26c]    ; 00476be4
    PUSH EAX                            ; 00476bea
    LEA EAX,[EDX*0x4 + 0x0]             ; 00476beb
    SUB EAX,EDX                         ; 00476bf2
    MOV EDX,EAX                         ; 00476bf4
    SHL EDX,0x4                         ; 00476bf6
    LEA EAX,[EBX + 0xfd8]               ; 00476bf9
    ADD EAX,EDX                         ; 00476bff
    PUSH 0x3f333333                     ; 00476c01
    PUSH EAX                            ; 00476c06
    PUSH 0x2c8af28                      ; 00476c07 | DAT_02c8af28
    LEA ESI,[EBP + 0xffffff7a]          ; 00476c0c
    LEA EDI,[EBP + 0x46]                ; 00476c12
    CALL core_xform.cpp_FUN_005b5080    ; 00476c15
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00476c1a
    LEA EAX,[EBP + 0x46]                ; 00476c1d
    LEA ESI,[EBP + 0xffffff7a]          ; 00476c20
    PUSH EAX                            ; 00476c26
    MOVSD ES:EDI,ESI                    ; 00476c27
    MOVSD ES:EDI,ESI                    ; 00476c28
    MOVSD ES:EDI,ESI                    ; 00476c29
    PUSH EBX                            ; 00476c2a
    LEA ESI,[EBP + 0x22]                ; 00476c2b
    CALL core_actor.cpp_FUN_00408b40    ; 00476c2e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00476c33
    LEA EAX,[EBP + -0x26]               ; 00476c36
    PUSH EAX                            ; 00476c39
    LEA EDI,[EBP + -0x26]               ; 00476c3a
    LEA ESI,[EBP + 0x22]                ; 00476c3d
    PUSH EBX                            ; 00476c40
    MOVSD ES:EDI,ESI                    ; 00476c41
    MOVSD ES:EDI,ESI                    ; 00476c42
    MOVSD ES:EDI,ESI                    ; 00476c43
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 00476c44
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00476c49
    MOV EAX,dword ptr [EBX + 0xc270]    ; 00476c4c
    PUSH EAX                            ; 00476c52
    MOV EDX,dword ptr [0x006236b8]      ; 00476c53 | DAT_006236b8
    PUSH EDX                            ; 00476c59
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 00476c5a
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00476c5f
    TEST EAX,EAX                        ; 00476c62
    JNZ 0x004769ed                      ; 00476c64
        ;   XREF to: 004769ed (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5da6d2                       ; 00476c6a | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00476c6f
    PUSH EBX                            ; 00476c75
    CALL dword ptr [EAX + 0x2c]         ; 00476c76
    ADD ESP,0x8                         ; 00476c79
    MOV dword ptr [EBX + 0xc270],EAX    ; 00476c7c
    JMP 0x004769ed                      ; 00476c82
        ;   XREF to: 004769ed (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ECX,dword ptr [EBX + 0xc1d4]    ; 00476c87
        ;   Label: caseD_7
    TEST ECX,ECX                        ; 00476c8d
    JNZ 0x004769ed                      ; 00476c8f
        ;   XREF to: 004769ed (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xdc],0x0      ; 00476c95
    JNZ 0x004769ed                      ; 00476c9c
        ;   XREF to: 004769ed (CONDITIONAL_JUMP)  ; caseD_6
    PUSH ECX                            ; 00476ca2
    LEA EAX,[EBX + 0x158]               ; 00476ca3
    PUSH EAX                            ; 00476ca9
    LEA ESI,[EBP + 0x2e]                ; 00476caa
    LEA EDI,[EBP + -0x32]               ; 00476cad
    CALL core_skeleton.cpp_FUN_00569040 ; 00476cb0
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00476cb5
    LEA EAX,[EBP + -0x32]               ; 00476cb8
    LEA ESI,[EBP + 0x2e]                ; 00476cbb
    PUSH EAX                            ; 00476cbe
    MOVSD ES:EDI,ESI                    ; 00476cbf
    MOVSD ES:EDI,ESI                    ; 00476cc0
    MOVSD ES:EDI,ESI                    ; 00476cc1
    PUSH EBX                            ; 00476cc2
    LEA ESI,[EBP + -0xe]                ; 00476cc3
    LEA EDI,[EBP + -0x3e]               ; 00476cc6
    CALL core_actor.cpp_FUN_00408b40    ; 00476cc9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00476cce
    LEA ESI,[EBP + -0xe]                ; 00476cd1
    LEA EAX,[EBP + -0x3e]               ; 00476cd4
    PUSH 0x0                            ; 00476cd7
    MOVSD ES:EDI,ESI                    ; 00476cd9
    MOVSD ES:EDI,ESI                    ; 00476cda
    MOVSD ES:EDI,ESI                    ; 00476cdb
    PUSH EAX                            ; 00476cdc
    MOV EDI,dword ptr [0x0061dca4]      ; 00476cdd | g_CGorePtr
    PUSH EDI                            ; 00476ce3
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 00476ce4
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00476ce9
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 00476cec
    JMP 0x004769ed                      ; 00476cf6
        ;   XREF to: 004769ed (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00476cfb
        ;   Label: caseD_0
    PUSH EBX                            ; 00476d01
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00476d02
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    LEA EDX,[EBX + 0x158]               ; 00476d07
    ADD ESP,0x8                         ; 00476d0d
    MOV dword ptr [EBP + 0x6e],EDX      ; 00476d10
    TEST EAX,EAX                        ; 00476d13
    JZ 0x00476d29                       ; 00476d15
        ;   XREF to: 00476d29 (CONDITIONAL_JUMP)  ; LAB_00476d29
    PUSH 0x1                            ; 00476d17
    PUSH 0x1                            ; 00476d19
    PUSH EDX                            ; 00476d1b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00476d1c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00476d21
    JMP 0x004769ed                      ; 00476d24
        ;   XREF to: 004769ed (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00476d29
        ;   Label: LAB_00476d29
    MOV EAX,dword ptr [EBX + 0x154]     ; 00476d2f
    PUSH EBX                            ; 00476d35
    CALL dword ptr [EAX + 0x144]        ; 00476d36
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00476d3c
    ADD ESP,0x8                         ; 00476d42
    TEST EAX,EAX                        ; 00476d45
    JZ 0x004769ed                       ; 00476d47
        ;   XREF to: 004769ed (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EAX + 0x20]          ; 00476d4d
    FLD float ptr [EAX + 0x24]          ; 00476d50
    FLD float ptr [EAX + 0x28]          ; 00476d53
    LEA EDX,[EBX + 0x20]                ; 00476d56
    LEA EDI,[EBP + -0x7a]               ; 00476d59
    LEA ESI,[EBP + 0xa]                 ; 00476d5c
    FXCH ST2                            ; 00476d5f
    FSUB float ptr [EDX]                ; 00476d61
    FXCH                                ; 00476d63
    FSUB float ptr [EDX + 0x4]          ; 00476d65
    FXCH ST2                            ; 00476d68
    FSUB float ptr [EDX + 0x8]          ; 00476d6a
    FXCH                                ; 00476d6d
    FSTP float ptr [EBP + 0xa]          ; 00476d6f
    FXCH                                ; 00476d72
    FSTP float ptr [EBP + 0xe]          ; 00476d74
    FSTP float ptr [EBP + 0x12]         ; 00476d77
    MOVSD ES:EDI,ESI                    ; 00476d7a
    MOVSD ES:EDI,ESI                    ; 00476d7b
    MOVSD ES:EDI,ESI                    ; 00476d7c
    FLD float ptr [EBP + -0x76]         ; 00476d7d
    FMUL ST0                            ; 00476d80
    FLD float ptr [EBP + -0x7a]         ; 00476d82
    FMUL ST0                            ; 00476d85
    FADDP                               ; 00476d87
    FLD float ptr [EBP + -0x72]         ; 00476d89
    FMUL ST0                            ; 00476d8c
    FADDP                               ; 00476d8e
    FSTP float ptr [EBP + 0x5e]         ; 00476d90
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00476d93
    MOV EDX,dword ptr [0x01cc804c]      ; 00476d96 | DAT_01cc804c
    SAR EAX,0x1                         ; 00476d9c
    ADD EAX,EDX                         ; 00476d9e
    MOV dword ptr [EBP + 0x62],EAX      ; 00476da0
    FLD float ptr [EBP + 0x62]          ; 00476da3
    FCOMP float ptr [0x005fee94]        ; 00476da6 | DAT_005fee94
    FNSTSW AX                           ; 00476dac
    SAHF                                ; 00476dae
    JC 0x00476dfb                       ; 00476daf
        ;   XREF to: 00476dfb (CONDITIONAL_JUMP)  ; LAB_00476dfb
    PUSH 0x1                            ; 00476db1
    PUSH 0x2                            ; 00476db3
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00476db5
    PUSH ECX                            ; 00476db8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00476db9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00476db9
    ADD ESP,0xc                         ; 00476dbe
    MOV EDI,dword ptr [EBX + 0xc270]    ; 00476dc1
    PUSH EDI                            ; 00476dc7
    MOV EAX,[0x006236b8]                ; 00476dc8 | DAT_006236b8
    PUSH EAX                            ; 00476dcd
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 00476dce
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00476dd3
    TEST EAX,EAX                        ; 00476dd6
    JNZ 0x004769ed                      ; 00476dd8
        ;   XREF to: 004769ed (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5da6db                       ; 00476dde | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00476de3
    PUSH EBX                            ; 00476de9
    CALL dword ptr [EAX + 0x2c]         ; 00476dea
    ADD ESP,0x8                         ; 00476ded
    MOV dword ptr [EBX + 0xc270],EAX    ; 00476df0
    JMP 0x004769ed                      ; 00476df6
        ;   XREF to: 004769ed (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00476dfb
        ;   Label: LAB_00476dfb
    PUSH 0x1                            ; 00476dfd
    MOV ESI,dword ptr [EBP + 0x6e]      ; 00476dff
    PUSH ESI                            ; 00476e02
    JMP 0x00476db9                      ; 00476e03
        ;   XREF to: 00476db9 (UNCONDITIONAL_JUMP)  ; LAB_00476db9
    PUSH dword ptr [EBP + 0x92]         ; 00476e05
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 00476e0b
    PUSH EBX                            ; 00476e11
    CALL dword ptr [EAX + 0x144]        ; 00476e12
    ADD ESP,0x8                         ; 00476e18
    LEA EAX,[EBX + 0x158]               ; 00476e1b
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 00476e21
    MOV dword ptr [EBP + 0x6a],EAX      ; 00476e27
    TEST ECX,ECX                        ; 00476e2a
    JZ 0x00476f66                       ; 00476e2c
        ;   XREF to: 00476f66 (CONDITIONAL_JUMP)  ; LAB_00476f66
    LEA EDX,[EBX + 0x20]                ; 00476e32
    LEA EDI,[EBP + -0x6e]               ; 00476e35
    LEA ESI,[EBP + -0x4a]               ; 00476e38
    FLD float ptr [EDX]                 ; 00476e3b
    FLD float ptr [EDX + 0x4]           ; 00476e3d
    FLD float ptr [EDX + 0x8]           ; 00476e40
    FXCH ST2                            ; 00476e43
    FSUB float ptr [ECX + 0x20]         ; 00476e45
    FXCH                                ; 00476e48
    FSUB float ptr [ECX + 0x24]         ; 00476e4a
    FXCH ST2                            ; 00476e4d
    FSUB float ptr [ECX + 0x28]         ; 00476e4f
    FXCH                                ; 00476e52
    FSTP float ptr [EBP + -0x4a]        ; 00476e54
    FXCH                                ; 00476e57
    FSTP float ptr [EBP + -0x46]        ; 00476e59
    FSTP float ptr [EBP + -0x42]        ; 00476e5c
    MOVSD ES:EDI,ESI                    ; 00476e5f
    MOVSD ES:EDI,ESI                    ; 00476e60
    MOVSD ES:EDI,ESI                    ; 00476e61
    FLD float ptr [EBP + -0x6a]         ; 00476e62
    FMUL ST0                            ; 00476e65
    FLD float ptr [EBP + -0x6e]         ; 00476e67
    FMUL ST0                            ; 00476e6a
    FADDP                               ; 00476e6c
    FLD float ptr [EBP + -0x66]         ; 00476e6e
    FMUL ST0                            ; 00476e71
    FADDP                               ; 00476e73
    FSQRT                               ; 00476e75
    FCOMP float ptr [0x005fee94]        ; 00476e77 | DAT_005fee94
    FNSTSW AX                           ; 00476e7d
    SAHF                                ; 00476e7f
    JBE 0x00476e99                      ; 00476e80
        ;   XREF to: 00476e99 (CONDITIONAL_JUMP)  ; LAB_00476e99
    MOV ESI,dword ptr [EBP + 0x72]      ; 00476e82
    CMP ESI,0x1                         ; 00476e85
    JNZ 0x00476e99                      ; 00476e88
        ;   XREF to: 00476e99 (CONDITIONAL_JUMP)  ; LAB_00476e99
    PUSH ESI                            ; 00476e8a
    PUSH 0x2                            ; 00476e8b
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00476e8d
    PUSH EDI                            ; 00476e90
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00476e91
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00476e96
    MOV EAX,[0x005fee88]                ; 00476e99 | DAT_005fee88
        ;   Label: LAB_00476e99
    MOV dword ptr [EBP + 0x5a],EAX      ; 00476e9e
    LEA EAX,[EBX + 0x249c]              ; 00476ea1
    MOV dword ptr [EAX + 0x8],0x0       ; 00476ea7
    MOV EDX,dword ptr [EAX + 0x8]       ; 00476eae
    MOV dword ptr [EAX + 0x4],EDX       ; 00476eb1
    MOV EDX,dword ptr [EAX + 0x4]       ; 00476eb4
    MOV dword ptr [EAX],EDX             ; 00476eb7
    XOR EAX,EAX                         ; 00476eb9
    MOV dword ptr [EBP + -0x62],EAX     ; 00476ebb
    MOV dword ptr [EBP + -0x5e],EAX     ; 00476ebe
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00476ec1
    PUSH 0x3e32b8c2                     ; 00476ec4
    MOV dword ptr [EBP + -0x5a],EAX     ; 00476ec9
    LEA EAX,[EBP + -0x62]               ; 00476ecc
    PUSH 0x3f000000                     ; 00476ecf
    PUSH EAX                            ; 00476ed4
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00476ed5
    PUSH EAX                            ; 00476edb
    MOV EDX,dword ptr [EAX + 0x154]     ; 00476edc
    CALL dword ptr [EDX + 0xc4]         ; 00476ee2
    ADD ESP,0x4                         ; 00476ee8
    PUSH EAX                            ; 00476eeb
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00476eec
    ADD EAX,0x20                        ; 00476ef2
    PUSH EAX                            ; 00476ef5
    PUSH EBX                            ; 00476ef6
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00476ef7
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00476efc
    LEA ESI,[EBX + 0x158]               ; 00476eff
    TEST EAX,EAX                        ; 00476f05
    JL 0x00476fa2                       ; 00476f07
        ;   XREF to: 00476fa2 (CONDITIONAL_JUMP)  ; LAB_00476fa2
    JLE 0x004769ed                      ; 00476f0d
        ;   XREF to: 004769ed (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0xc1e4]        ; 00476f13
    FLDZ                                ; 00476f19
    FCOMPP                              ; 00476f1b
    FNSTSW AX                           ; 00476f1d
    SAHF                                ; 00476f1f
    JC 0x004769ed                       ; 00476f20
        ;   XREF to: 004769ed (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x3f800000                     ; 00476f26
    PUSH 0x0                            ; 00476f2b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00476f2d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00476f32
    ADD ESP,0x8                         ; 00476f35
    FLD float ptr [EBP + 0x76]          ; 00476f38
    FCOMP double ptr [0x005da710]       ; 00476f3b | DAT_005da710
    FNSTSW AX                           ; 00476f41
    SAHF                                ; 00476f43
    JA 0x00476fc9                       ; 00476f44
        ;   XREF to: 00476fc9 (CONDITIONAL_JUMP)  ; LAB_00476fc9
    PUSH 0x1                            ; 00476f4a
    PUSH 0x4                            ; 00476f4c
    PUSH ESI                            ; 00476f4e
        ;   Label: LAB_00476f4e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00476f4f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00476f54
    MOV dword ptr [EBX + 0xc1e4],0x40200000 ; 00476f57
    JMP 0x004769ed                      ; 00476f61
        ;   XREF to: 004769ed (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00476f66
        ;   Label: LAB_00476f66
    PUSH EBX                            ; 00476f6c
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00476f6d
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00476f72
    TEST EAX,EAX                        ; 00476f75
    JZ 0x00476f8e                       ; 00476f77
        ;   XREF to: 00476f8e (CONDITIONAL_JUMP)  ; LAB_00476f8e
    PUSH 0x1                            ; 00476f79
    PUSH 0x1                            ; 00476f7b
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00476f7d
    PUSH EDI                            ; 00476f80
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00476f81
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00476f86
    JMP 0x004769ed                      ; 00476f89
        ;   XREF to: 004769ed (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00476f8e
        ;   Label: LAB_00476f8e
    PUSH EAX                            ; 00476f90
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00476f91
    PUSH ESI                            ; 00476f94
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00476f95
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00476f9a
    JMP 0x004769ed                      ; 00476f9d
        ;   XREF to: 004769ed (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 00476fa2
        ;   Label: LAB_00476fa2
    PUSH 0x5da6e4                       ; 00476fa3 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00611100]      ; 00476fa8 | g_CConsolePtr
    PUSH ECX                            ; 00476fae | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00476faf
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00476fb4
    PUSH 0x1                            ; 00476fb7
    PUSH 0x0                            ; 00476fb9
    PUSH ESI                            ; 00476fbb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00476fbc
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00476fc1
    JMP 0x004769ed                      ; 00476fc4
        ;   XREF to: 004769ed (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00476fc9
        ;   Label: LAB_00476fc9
    PUSH 0x3                            ; 00476fcb
    JMP 0x00476f4e                      ; 00476fcd
        ;   XREF to: 00476f4e (UNCONDITIONAL_JUMP)  ; LAB_00476f4e
    MOV EDX,dword ptr [EBP + 0x72]      ; 00476fd2
        ;   Label: LAB_00476fd2
    CMP EDX,0x7                         ; 00476fd5
    JA 0x004769ed                       ; 00476fd8
        ;   XREF to: 004769ed (CONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,EDX                         ; 00476fde
    JMP dword ptr [EAX*0x4 + 0x476878]  ; 00476fe0 | caseD_0 | caseD_2 | caseD_4
        ;   Label: switchD

