; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_CSentinel_process_FUN_0052a9a0(CSentinel *this_ptr,float delta_time)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0052a940 = 0052ac03
;   undefined1* switchdataD_0052a954 = 0052ae61
;   TerminatedCString s_wing_wav_005e5399
;   TerminatedCString s_sentinel_fall_wav_005e53a3
;   TerminatedCString s_s_confused_while_walking_005e53b5
;   undefined4 DAT_005e53e5
;   undefined4 DAT_005e53ed
;   undefined4 DAT_005e53f5
;   undefined4 DAT_005fb048
;   undefined4 DAT_005fb054
;   CConsole* g_CConsolePtr = 007c158c
;   CGore* g_CGorePtr = 01cb8284
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01e6614c
;   undefined4 DAT_01e66154
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_actor.cpp_randomChance_FUN_0040d060
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
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a9a0
        ;   Label: core_sentinel.cpp_CSentinel_process_FUN_0052a9a0
    PUSH ESI                            ; 0052a9a1
    PUSH EDI                            ; 0052a9a2
    PUSH EBP                            ; 0052a9a3
    MOV EBP,ESP                         ; 0052a9a4
    SUB ESP,0x280                       ; 0052a9a6
    SUB EBP,0x7a                        ; 0052a9ac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0052a9af
    PUSH dword ptr [EBP + 0x92]         ; 0052a9b5
    PUSH EBX                            ; 0052a9bb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0052a9bc
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052a9c1
    TEST EAX,EAX                        ; 0052a9c4
    JZ 0x0052abfb                       ; 0052a9c6
        ;   XREF to: 0052abfb (CONDITIONAL_JUMP)  ; LAB_0052abfb
    LEA EAX,[EBX + 0x2508]              ; 0052a9cc
    MOV dword ptr [EAX + 0x8],0x0       ; 0052a9d2
    FLD float ptr [EBP + 0x92]          ; 0052a9d9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0052a9df
    MOV dword ptr [EAX + 0x4],EDX       ; 0052a9e2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052a9e5
    MOV dword ptr [EAX],EDX             ; 0052a9e8
    FMUL float ptr [EBX + 0x10a60]      ; 0052a9ea
    LEA EAX,[EBX + 0x2b4]               ; 0052a9f0
    FSTP float ptr [EBP + 0x4a]         ; 0052a9f6
    MOV dword ptr [EBP + 0x66],EAX      ; 0052a9f9
    FLD float ptr [EBP + 0x4a]          ; 0052a9fc
        ;   Label: LAB_0052a9fc
    FLDZ                                ; 0052a9ff
    FCOMPP                              ; 0052aa01
    FNSTSW AX                           ; 0052aa03
    SAHF                                ; 0052aa05
    JC 0x0052ade2                       ; 0052aa06
        ;   XREF to: 0052ade2 (CONDITIONAL_JUMP)  ; LAB_0052ade2
    FLD float ptr [EBP + 0x92]          ; 0052aa0c
    FMUL float ptr [EBX + 0x10a60]      ; 0052aa12
    SUB ESP,0x4                         ; 0052aa18
    MOV EAX,dword ptr [EBX + 0x2510]    ; 0052aa1b
    MOV dword ptr [EBX + 0x2594],EAX    ; 0052aa21
    FSTP float ptr [ESP]                ; 0052aa27
    PUSH EBX                            ; 0052aa2a
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0052aa2b
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0052aa30
    MOV EDX,dword ptr [EBP + 0x66]      ; 0052aa33
    PUSH EDX                            ; 0052aa36
    CALL core_motion.cpp_FUN_005035c0   ; 0052aa37
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0052aa3c
    PUSH dword ptr [EBP + 0x92]         ; 0052aa3f
    MOV ESI,dword ptr [EAX + 0x24]      ; 0052aa45
    PUSH EBX                            ; 0052aa48
    MOV EDI,ESI                         ; 0052aa49
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 0052aa4b
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052aa50
    TEST EAX,EAX                        ; 0052aa53
    JZ 0x0052ae3e                       ; 0052aa55
        ;   XREF to: 0052ae3e (CONDITIONAL_JUMP)  ; LAB_0052ae3e
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 0052aa5b
    CMP EAX,0x2                         ; 0052aa61
    JNC 0x0052ae2a                      ; 0052aa64
        ;   XREF to: 0052ae2a (CONDITIONAL_JUMP)  ; LAB_0052ae2a
    CMP EAX,0x1                         ; 0052aa6a
    JNZ 0x0052ae35                      ; 0052aa6d
        ;   XREF to: 0052ae35 (CONDITIONAL_JUMP)  ; LAB_0052ae35
    PUSH 0x1                            ; 0052aa73
        ;   Label: LAB_0052aa73
    PUSH 0x2                            ; 0052aa75
    LEA EAX,[EBX + 0x2b4]               ; 0052aa77
        ;   Label: LAB_0052aa77
    PUSH EAX                            ; 0052aa7d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052aa7e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052aa83
        ;   Label: LAB_0052aa83
    LEA EAX,[EBX + 0x2508]              ; 0052aa86
    MOV dword ptr [EAX + 0x8],0x0       ; 0052aa8c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0052aa93
    MOV dword ptr [EAX + 0x4],EDX       ; 0052aa96
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052aa99
    MOV dword ptr [EAX],EDX             ; 0052aa9c
    FLD float ptr [EBX + 0x10a74]       ; 0052aa9e
        ;   Label: caseD_5
    FLDZ                                ; 0052aaa4
    FCOMPP                              ; 0052aaa6
    FNSTSW AX                           ; 0052aaa8
    SAHF                                ; 0052aaaa
    JNC 0x0052aabf                      ; 0052aaab
        ;   XREF to: 0052aabf (CONDITIONAL_JUMP)  ; LAB_0052aabf
    FLD float ptr [EBX + 0x10a74]       ; 0052aaad
    FSUB float ptr [EBP + 0x92]         ; 0052aab3
    FSTP float ptr [EBX + 0x10a74]      ; 0052aab9
    PUSH EBX                            ; 0052aabf
        ;   Label: LAB_0052aabf
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 0052aac0
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0052aac5
    TEST EAX,EAX                        ; 0052aac8
    JZ 0x0052abd4                       ; 0052aaca
        ;   XREF to: 0052abd4 (CONDITIONAL_JUMP)  ; LAB_0052abd4
    PUSH dword ptr [EBP + 0x92]         ; 0052aad0
    PUSH EBX                            ; 0052aad6
    LEA ESI,[EBX + 0x2588]              ; 0052aad7
    CALL core_charactr.cpp_FUN_00423a10 ; 0052aadd
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 0052aae2
    FMUL float ptr [EBP + 0x92]         ; 0052aae4
    FLD float ptr [ESI + 0x4]           ; 0052aaea
    FMUL float ptr [EBP + 0x92]         ; 0052aaed
    FLD float ptr [ESI + 0x8]           ; 0052aaf3
    FMUL float ptr [EBP + 0x92]         ; 0052aaf6
    LEA EDI,[EBP + 0xffffff26]          ; 0052aafc
    LEA ESI,[EBP + 0xfffffed2]          ; 0052ab02
    FXCH ST2                            ; 0052ab08
    FSTP float ptr [EBP + 0xfffffed2]   ; 0052ab0a
    FSTP float ptr [EBP + 0xfffffed6]   ; 0052ab10
    FSTP float ptr [EBP + 0xfffffeda]   ; 0052ab16
    MOVSD ES:EDI,ESI                    ; 0052ab1c
    MOVSD ES:EDI,ESI                    ; 0052ab1d
    MOVSD ES:EDI,ESI                    ; 0052ab1e
    LEA EDX,[EBX + 0x257c]              ; 0052ab1f
    FLD float ptr [EBP + 0xffffff26]    ; 0052ab25
    FLD float ptr [EBP + 0xffffff2a]    ; 0052ab2b
    FLD float ptr [EBP + 0xffffff2e]    ; 0052ab31
    LEA EDI,[EBP + 0xfffffef6]          ; 0052ab37
    LEA ESI,[EBP + -0x62]               ; 0052ab3d
    FXCH ST2                            ; 0052ab40
    FADD float ptr [EDX]                ; 0052ab42
    FXCH                                ; 0052ab44
    FADD float ptr [EDX + 0x4]          ; 0052ab46
    FXCH ST2                            ; 0052ab49
    FADD float ptr [EDX + 0x8]          ; 0052ab4b
    FXCH                                ; 0052ab4e
    FSTP float ptr [EBP + -0x62]        ; 0052ab50
    FXCH                                ; 0052ab53
    FSTP float ptr [EBP + -0x5e]        ; 0052ab55
    FSTP float ptr [EBP + -0x5a]        ; 0052ab58
    MOVSD ES:EDI,ESI                    ; 0052ab5b
    MOVSD ES:EDI,ESI                    ; 0052ab5c
    MOVSD ES:EDI,ESI                    ; 0052ab5d
    LEA EAX,[EBX + 0x2508]              ; 0052ab5e
    FLD float ptr [EBP + 0xfffffef6]    ; 0052ab64
    FLD float ptr [EBP + 0xfffffefa]    ; 0052ab6a
    FLD float ptr [EBP + 0xfffffefe]    ; 0052ab70
    LEA EDI,[EBP + 0xfffffea2]          ; 0052ab76
    LEA ESI,[EBP + 0x16]                ; 0052ab7c
    FXCH ST2                            ; 0052ab7f
    FADD float ptr [EAX]                ; 0052ab81
    FXCH                                ; 0052ab83
    FADD float ptr [EAX + 0x4]          ; 0052ab85
    FXCH ST2                            ; 0052ab88
    FADD float ptr [EAX + 0x8]          ; 0052ab8a
    FXCH                                ; 0052ab8d
    FSTP float ptr [EBP + 0x16]         ; 0052ab8f
    FXCH                                ; 0052ab92
    FSTP float ptr [EBP + 0x1a]         ; 0052ab94
    FSTP float ptr [EBP + 0x1e]         ; 0052ab97
    MOVSD ES:EDI,ESI                    ; 0052ab9a
    MOVSD ES:EDI,ESI                    ; 0052ab9b
    MOVSD ES:EDI,ESI                    ; 0052ab9c
    MOV dword ptr [EDX + 0x8],0x0       ; 0052ab9d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0052aba4
    MOV dword ptr [EDX + 0x4],ECX       ; 0052aba7
    MOV ECX,dword ptr [EDX + 0x4]       ; 0052abaa
    MOV dword ptr [EDX],ECX             ; 0052abad
    MOV dword ptr [EAX + 0x8],0x0       ; 0052abaf
    ADD ESP,0x8                         ; 0052abb6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0052abb9
    MOV dword ptr [EAX + 0x4],EDX       ; 0052abbc
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052abbf
    MOV dword ptr [EAX],EDX             ; 0052abc2
    LEA EAX,[EBP + 0xfffffea2]          ; 0052abc4
    PUSH EAX                            ; 0052abca
    PUSH EBX                            ; 0052abcb
    CALL core_charactr.cpp_FUN_00423a60 ; 0052abcc
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0052abd1
    PUSH EBX                            ; 0052abd4
        ;   Label: LAB_0052abd4
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 0052abd5
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0052abda
    LEA EAX,[EBX + 0x2b4]               ; 0052abdd
    PUSH EAX                            ; 0052abe3
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0052abe4
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052abe9
    PUSH dword ptr [EBP + 0x92]         ; 0052abec
    PUSH EBX                            ; 0052abf2
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0052abf3
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052abf8
    LEA ESP,[EBP + 0x7a]                ; 0052abfb
        ;   Label: LAB_0052abfb
    POP EBP                             ; 0052abfe
    POP EDI                             ; 0052abff
    POP ESI                             ; 0052ac00
    POP EBX                             ; 0052ac01
    RET                                 ; 0052ac02
    MOV EDX,0x1                         ; 0052ac03
        ;   Label: caseD_64
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 0052ac08
    MOV dword ptr [EBP + 0x6a],EDX      ; 0052ac0e
    TEST ECX,ECX                        ; 0052ac11
    JNZ 0x0052ac2a                      ; 0052ac13
        ;   XREF to: 0052ac2a (CONDITIONAL_JUMP)  ; LAB_0052ac2a
    PUSH 0x1                            ; 0052ac15
        ;   Label: LAB_0052ac15
    PUSH 0x0                            ; 0052ac17
    MOV EDI,dword ptr [EBP + 0x66]      ; 0052ac19
    PUSH EDI                            ; 0052ac1c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052ac1d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052ac22
    JMP 0x0052a9fc                      ; 0052ac25
        ;   XREF to: 0052a9fc (UNCONDITIONAL_JUMP)  ; LAB_0052a9fc
    PUSH ECX                            ; 0052ac2a
        ;   Label: LAB_0052ac2a
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 0052ac2b
    CALL dword ptr [EDX + 0x114]        ; 0052ac31
    ADD ESP,0x4                         ; 0052ac37
    TEST EAX,EAX                        ; 0052ac3a
    JNZ 0x0052ac15                      ; 0052ac3c
        ;   XREF to: 0052ac15 (CONDITIONAL_JUMP)  ; LAB_0052ac15
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052ac3e
    PUSH EAX                            ; 0052ac44
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052ac45
    CALL dword ptr [EDX + 0xfc]         ; 0052ac4b
    ADD ESP,0x4                         ; 0052ac51
    TEST EAX,EAX                        ; 0052ac54
    JNZ 0x0052ac15                      ; 0052ac56
        ;   XREF to: 0052ac15 (CONDITIONAL_JUMP)  ; LAB_0052ac15
    PUSH 0x0                            ; 0052ac58
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052ac5a
    PUSH EBX                            ; 0052ac60
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052ac61
    PUSH EAX                            ; 0052ac67
    CALL dword ptr [EDX + 0xf0]         ; 0052ac68
    ADD ESP,0xc                         ; 0052ac6e
    TEST EAX,EAX                        ; 0052ac71
    JZ 0x0052ac15                       ; 0052ac73
        ;   XREF to: 0052ac15 (CONDITIONAL_JUMP)  ; LAB_0052ac15
    MOV EAX,[0x005fb048]                ; 0052ac75 | DAT_005fb048
    MOV dword ptr [EBP + 0xfffffe86],EAX ; 0052ac7a
    LEA EAX,[EBP + 0xfffffe7e]          ; 0052ac80
    XOR ESI,ESI                         ; 0052ac86
    PUSH EAX                            ; 0052ac88
    MOV dword ptr [EBP + 0xfffffe7e],ESI ; 0052ac89
    MOV dword ptr [EBP + 0xfffffe82],ESI ; 0052ac8f
    PUSH EBX                            ; 0052ac95
    LEA ESI,[EBP + 0xffffff6e]          ; 0052ac96
    LEA EDI,[EBP + 0xfffffe8a]          ; 0052ac9c
    CALL core_actor.cpp_FUN_00408d70    ; 0052aca2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xffffff6e]          ; 0052aca7
    MOVSD ES:EDI,ESI                    ; 0052acad
    MOVSD ES:EDI,ESI                    ; 0052acae
    MOVSD ES:EDI,ESI                    ; 0052acaf
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052acb0
    FLD float ptr [EBP + 0xfffffe8a]    ; 0052acb6
    FSUB float ptr [EAX + 0x20]         ; 0052acbc
    FMUL ST0                            ; 0052acbf
    FLD float ptr [EBP + 0xfffffe92]    ; 0052acc1
    FSUB float ptr [EAX + 0x28]         ; 0052acc7
    FMUL ST0                            ; 0052acca
    FADDP                               ; 0052accc
    FSQRT                               ; 0052acce
    ADD ESP,0x8                         ; 0052acd0
    FCOMP double ptr [0x005e53ed]       ; 0052acd3 | DAT_005e53ed
    FNSTSW AX                           ; 0052acd9
    SAHF                                ; 0052acdb
    JBE 0x0052ace3                      ; 0052acdc
        ;   XREF to: 0052ace3 (CONDITIONAL_JUMP)  ; LAB_0052ace3
    XOR EAX,EAX                         ; 0052acde
    MOV dword ptr [EBP + 0x6a],EAX      ; 0052ace0
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0052ace3
        ;   Label: LAB_0052ace3
    FLD float ptr [EBP + 0xfffffe8e]    ; 0052ace9
    FSUB float ptr [EDX + 0x24]         ; 0052acef
    FABS                                ; 0052acf2
    FCOMP double ptr [0x005e53f5]       ; 0052acf4 | DAT_005e53f5
    FNSTSW AX                           ; 0052acfa
    SAHF                                ; 0052acfc
    JA 0x0052ac15                       ; 0052acfd
        ;   XREF to: 0052ac15 (CONDITIONAL_JUMP)  ; LAB_0052ac15
    CMP dword ptr [EBP + 0x6a],0x0      ; 0052ad03
    JNZ 0x0052ad18                      ; 0052ad07
        ;   XREF to: 0052ad18 (CONDITIONAL_JUMP)  ; LAB_0052ad18
    CMP dword ptr [EBP + 0x6a],0x0      ; 0052ad09
        ;   Label: LAB_0052ad09
    JNZ 0x0052a9fc                      ; 0052ad0d
        ;   XREF to: 0052a9fc (CONDITIONAL_JUMP)  ; LAB_0052a9fc
    JMP 0x0052ac15                      ; 0052ad13
        ;   XREF to: 0052ac15 (UNCONDITIONAL_JUMP)  ; LAB_0052ac15
    PUSH 0x0                            ; 0052ad18
        ;   Label: LAB_0052ad18
    PUSH EBX                            ; 0052ad1a
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 0052ad1b
    PUSH EDX                            ; 0052ad21
    CALL dword ptr [EAX + 0xf4]         ; 0052ad22
    ADD ESP,0xc                         ; 0052ad28
    TEST EAX,EAX                        ; 0052ad2b
    JNZ 0x0052ad09                      ; 0052ad2d
        ;   XREF to: 0052ad09 (CONDITIONAL_JUMP)  ; LAB_0052ad09
    JMP 0x0052ac15                      ; 0052ad2f
        ;   XREF to: 0052ac15 (UNCONDITIONAL_JUMP)  ; LAB_0052ac15
    PUSH EBX                            ; 0052ad34
        ;   Label: caseD_65
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052ad35
    CALL dword ptr [EAX + 0x100]        ; 0052ad3b
    ADD ESP,0x4                         ; 0052ad41
    JMP 0x0052a9fc                      ; 0052ad44
        ;   XREF to: 0052a9fc (UNCONDITIONAL_JUMP)  ; LAB_0052a9fc
    CMP dword ptr [EBX + 0x10a78],0x0   ; 0052ad49
        ;   Label: caseD_66
    JZ 0x0052a9fc                       ; 0052ad50
        ;   XREF to: 0052a9fc (CONDITIONAL_JUMP)  ; LAB_0052a9fc
    LEA EAX,[EBP + 0xfffffe36]          ; 0052ad56
    PUSH EAX                            ; 0052ad5c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0052ad5d
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0052ad62
    PUSH 0x40a00000                     ; 0052ad65
    PUSH 0x3f800000                     ; 0052ad6a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0052ad6f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    LEA EDX,[EBP + 0xfffffe36]          ; 0052ad74
    MOV dword ptr [EBP + 0x76],EAX      ; 0052ad7a
    ADD ESP,0x8                         ; 0052ad7d
    FLD float ptr [EBP + 0x76]          ; 0052ad80
    PUSH EDX                            ; 0052ad83
    FSTP float ptr [EBP + 0xfffffe3a]   ; 0052ad84
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052ad8a
    PUSH EAX                            ; 0052ad90
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0052ad91
    CALL dword ptr [ESI + 0x110]        ; 0052ad97
    ADD ESP,0x8                         ; 0052ad9d
    JMP 0x0052a9fc                      ; 0052ada0
        ;   XREF to: 0052a9fc (UNCONDITIONAL_JUMP)  ; LAB_0052a9fc
    PUSH 0x5e5399                       ; 0052ada5 | = "wing?.wav"
        ;   Label: caseD_67
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052adaa
    PUSH EBX                            ; 0052adb0
    CALL dword ptr [EAX + 0x34]         ; 0052adb1
    ADD ESP,0x8                         ; 0052adb4
    JMP 0x0052a9fc                      ; 0052adb7
        ;   XREF to: 0052a9fc (UNCONDITIONAL_JUMP)  ; LAB_0052a9fc
    PUSH 0x5e53a3                       ; 0052adbc | = "sentinel-fall.wav"
        ;   Label: caseD_68
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052adc1
    PUSH EBX                            ; 0052adc7
    CALL dword ptr [EAX + 0x34]         ; 0052adc8
    ADD ESP,0x8                         ; 0052adcb
    JMP 0x0052a9fc                      ; 0052adce
        ;   XREF to: 0052a9fc (UNCONDITIONAL_JUMP)  ; LAB_0052a9fc
    PUSH EDX                            ; 0052add3
        ;   Label: default
    PUSH EBX                            ; 0052add4
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0052add5
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0052adda
    JMP 0x0052a9fc                      ; 0052addd
        ;   XREF to: 0052a9fc (UNCONDITIONAL_JUMP)  ; LAB_0052a9fc
    LEA EAX,[EBP + 0x4a]                ; 0052ade2
        ;   Label: LAB_0052ade2
    PUSH EAX                            ; 0052ade5
    MOV EDI,dword ptr [EBP + 0x66]      ; 0052ade6
    PUSH EDI                            ; 0052ade9
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0052adea
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 0052adef
    SUB EAX,0x64                        ; 0052adf1
    ADD ESP,0x8                         ; 0052adf4
    CMP EAX,0x4                         ; 0052adf7
    JA 0x0052add3                       ; 0052adfa
        ;   XREF to: 0052add3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x52a940]  ; 0052adfc | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    PUSH 0x1                            ; 0052ae03
        ;   Label: LAB_0052ae03
    PUSH 0x0                            ; 0052ae05
    MOV ECX,dword ptr [EBP + 0x66]      ; 0052ae07
    PUSH ECX                            ; 0052ae0a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052ae0b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052ae10
    PUSH EBX                            ; 0052ae13
    PUSH 0x5e53b5                       ; 0052ae14 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 0052ae19 | g_CConsolePtr
    PUSH ESI                            ; 0052ae1f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0052ae20
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    JMP 0x0052aa83                      ; 0052ae25
        ;   XREF to: 0052aa83 (UNCONDITIONAL_JUMP)  ; LAB_0052aa83
    JBE 0x0052aa73                      ; 0052ae2a
        ;   XREF to: 0052aa73 (CONDITIONAL_JUMP)  ; LAB_0052aa73
        ;   Label: LAB_0052ae2a
    CMP EAX,0x3                         ; 0052ae30
    JZ 0x0052ae03                       ; 0052ae33
        ;   XREF to: 0052ae03 (CONDITIONAL_JUMP)  ; LAB_0052ae03
    PUSH 0x1                            ; 0052ae35
        ;   Label: LAB_0052ae35
    PUSH 0x0                            ; 0052ae37
    JMP 0x0052aa77                      ; 0052ae39
        ;   XREF to: 0052aa77 (UNCONDITIONAL_JUMP)  ; LAB_0052aa77
    CMP ESI,0xa                         ; 0052ae3e
        ;   Label: LAB_0052ae3e
    JNZ 0x0052af19                      ; 0052ae41
        ;   XREF to: 0052af19 (CONDITIONAL_JUMP)  ; LAB_0052af19
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 0052ae47
        ;   Label: LAB_0052ae47
    CMP EDI,0xf                         ; 0052ae51
    JA 0x0052aa9e                       ; 0052ae54
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EDI*0x4 + 0x52a954]  ; 0052ae5a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [EBP + 0x92]         ; 0052ae61
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052ae67
    PUSH EBX                            ; 0052ae6d
    CALL dword ptr [EAX + 0x150]        ; 0052ae6e
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0052ae74
    ADD ESP,0x8                         ; 0052ae7a
    TEST EDX,EDX                        ; 0052ae7d
    JZ 0x0052b155                       ; 0052ae7f
        ;   XREF to: 0052b155 (CONDITIONAL_JUMP)  ; LAB_0052b155
    MOV EAX,EDX                         ; 0052ae85
    LEA EDI,[EBP + -0x3e]               ; 0052ae87
    LEA ESI,[EBP + 0xfffffeba]          ; 0052ae8a
    FLD float ptr [EAX + 0x20]          ; 0052ae90
    FLD float ptr [EAX + 0x24]          ; 0052ae93
    LEA EDX,[EBX + 0x20]                ; 0052ae96
    FLD float ptr [EAX + 0x28]          ; 0052ae99
    FXCH ST2                            ; 0052ae9c
    FSUB float ptr [EDX]                ; 0052ae9e
    FXCH                                ; 0052aea0
    FSUB float ptr [EDX + 0x4]          ; 0052aea2
    FXCH ST2                            ; 0052aea5
    FSUB float ptr [EDX + 0x8]          ; 0052aea7
    FXCH                                ; 0052aeaa
    FSTP float ptr [EBP + 0xfffffeba]   ; 0052aeac
    FXCH                                ; 0052aeb2
    FSTP float ptr [EBP + 0xfffffebe]   ; 0052aeb4
    FSTP float ptr [EBP + 0xfffffec2]   ; 0052aeba
    MOVSD ES:EDI,ESI                    ; 0052aec0
    MOVSD ES:EDI,ESI                    ; 0052aec1
    MOVSD ES:EDI,ESI                    ; 0052aec2
    LEA EDI,[EBP + -0x56]               ; 0052aec3
    LEA ESI,[EBP + -0x3e]               ; 0052aec6
    MOVSD ES:EDI,ESI                    ; 0052aec9
    MOVSD ES:EDI,ESI                    ; 0052aeca
    MOVSD ES:EDI,ESI                    ; 0052aecb
    LEA EDI,[EBP + -0x4a]               ; 0052aecc
    LEA ESI,[EBP + -0x56]               ; 0052aecf
    MOVSD ES:EDI,ESI                    ; 0052aed2
    MOVSD ES:EDI,ESI                    ; 0052aed3
    MOVSD ES:EDI,ESI                    ; 0052aed4
    FLD float ptr [EBP + -0x46]         ; 0052aed5
    FMUL ST0                            ; 0052aed8
    FLD float ptr [EBP + -0x4a]         ; 0052aeda
    FMUL ST0                            ; 0052aedd
    FADDP                               ; 0052aedf
    FLD float ptr [EBP + -0x42]         ; 0052aee1
    FMUL ST0                            ; 0052aee4
    FADDP                               ; 0052aee6
    LEA EAX,[EBP + 0x56]                ; 0052aee8
    FSTP float ptr [EBP + 0x56]         ; 0052aeeb
    FLD float ptr [EAX]                 ; 0052aeee
    FSQRT                               ; 0052aef0
    FCOMP float ptr [0x005fb054]        ; 0052aef2 | DAT_005fb054
    FNSTSW AX                           ; 0052aef8
    SAHF                                ; 0052aefa
    JBE 0x0052b13d                      ; 0052aefb
        ;   XREF to: 0052b13d (CONDITIONAL_JUMP)  ; LAB_0052b13d
    PUSH 0x1                            ; 0052af01
    PUSH 0x3                            ; 0052af03
    LEA EAX,[EBX + 0x2b4]               ; 0052af05
    PUSH EAX                            ; 0052af0b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052af0c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052af11
    JMP 0x0052aa9e                      ; 0052af14
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP ESI,0xb                         ; 0052af19
        ;   Label: LAB_0052af19
    JZ 0x0052ae47                       ; 0052af1c
        ;   XREF to: 0052ae47 (CONDITIONAL_JUMP)  ; LAB_0052ae47
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 0052af22
    CMP EDI,0xf                         ; 0052af2c
    JA 0x0052aa9e                       ; 0052af2f
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EDI*0x4 + 0x52a954]  ; 0052af35 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [EBX + 0x10a64]   ; 0052af3c
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 0052af42
    JNZ 0x0052aa9e                      ; 0052af44
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    CMP dword ptr [EBX + 0xdc],0x0      ; 0052af4a
    JNZ 0x0052aa9e                      ; 0052af51
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH ESI                            ; 0052af57
    LEA EAX,[EBX + 0x2b4]               ; 0052af58
    PUSH EAX                            ; 0052af5e
    LEA ESI,[EBP + 0xffffff32]          ; 0052af5f
    LEA EDI,[EBP + -0x26]               ; 0052af65
    CALL core_skeleton.cpp_FUN_005469a0 ; 0052af68
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0052af6d
    LEA EAX,[EBP + -0x26]               ; 0052af70
    LEA ESI,[EBP + 0xffffff32]          ; 0052af73
    PUSH EAX                            ; 0052af79
    MOVSD ES:EDI,ESI                    ; 0052af7a
    MOVSD ES:EDI,ESI                    ; 0052af7b
    MOVSD ES:EDI,ESI                    ; 0052af7c
    PUSH EBX                            ; 0052af7d
    LEA ESI,[EBP + 0xffffff3e]          ; 0052af7e
    CALL core_actor.cpp_FUN_00408d70    ; 0052af84
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0052af89
    PUSH 0x0                            ; 0052af8c
    LEA EAX,[EBP + 0xffffff0e]          ; 0052af8e
    LEA EDI,[EBP + 0xffffff0e]          ; 0052af94
    PUSH EAX                            ; 0052af9a
    MOV EAX,[0x006167e0]                ; 0052af9b | g_CGorePtr
    LEA ESI,[EBP + 0xffffff3e]          ; 0052afa0
    PUSH EAX                            ; 0052afa6
    MOVSD ES:EDI,ESI                    ; 0052afa7
    MOVSD ES:EDI,ESI                    ; 0052afa8
    MOVSD ES:EDI,ESI                    ; 0052afa9
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 0052afaa
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0052afaf
    MOV dword ptr [EBX + 0x10a64],0x1   ; 0052afb2
    JMP 0x0052aa9e                      ; 0052afbc
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBP + 0xfffffdfa]          ; 0052afc1
        ;   Label: caseD_4
    PUSH EAX                            ; 0052afc7
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0052afc8
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0052afcd
    PUSH 0x41700000                     ; 0052afd0
    PUSH 0x40e00000                     ; 0052afd5
    LEA ESI,[EBP + -0x32]               ; 0052afda
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0052afdd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0052afe2
    ADD ESP,0x8                         ; 0052afe5
    LEA EAX,[EBP + 0xfffffdfa]          ; 0052afe8
    MOV EDX,dword ptr [0x01e66154]      ; 0052afee | DAT_01e66154
    PUSH EAX                            ; 0052aff4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052aff5
    MOV dword ptr [EBP + 0xfffffe2e],EBX ; 0052affc
    SUB EAX,EDX                         ; 0052b002
    MOV dword ptr [EBP + 0xfffffe32],EBX ; 0052b004
    SHL EAX,0x4                         ; 0052b00a
    LEA EDX,[EBX + 0x1134]              ; 0052b00d
    PUSH 0x3f800000                     ; 0052b013
    ADD EAX,EDX                         ; 0052b018
    LEA EDI,[EBP + 0xffffff7a]          ; 0052b01a
    PUSH EAX                            ; 0052b020
    FLD float ptr [EBP + 0x76]          ; 0052b021
    PUSH 0x265370c                      ; 0052b024 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0052b029
    MOV dword ptr [EBP + 0x46],EDX      ; 0052b02f
    CALL core_xform.cpp_FUN_00591530    ; 0052b032
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0052b037
    LEA EAX,[EBP + 0xffffff7a]          ; 0052b03a
    LEA ESI,[EBP + -0x32]               ; 0052b040
    PUSH EAX                            ; 0052b043
    MOVSD ES:EDI,ESI                    ; 0052b044
    MOVSD ES:EDI,ESI                    ; 0052b045
    MOVSD ES:EDI,ESI                    ; 0052b046
    PUSH EBX                            ; 0052b047
    LEA ESI,[EBP + -0x1a]               ; 0052b048
    CALL core_actor.cpp_FUN_00408d70    ; 0052b04b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0052b050
    LEA EAX,[EBP + 0x22]                ; 0052b053
    PUSH EAX                            ; 0052b056
    LEA EDI,[EBP + 0x22]                ; 0052b057
    LEA ESI,[EBP + -0x1a]               ; 0052b05a
    PUSH EBX                            ; 0052b05d
    MOVSD ES:EDI,ESI                    ; 0052b05e
    MOVSD ES:EDI,ESI                    ; 0052b05f
    MOVSD ES:EDI,ESI                    ; 0052b060
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0052b061
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0052b066
    PUSH 0x41f00000                     ; 0052b069
    LEA ESI,[EBP + 0xfffffeea]          ; 0052b06e
    PUSH 0x41700000                     ; 0052b074
    LEA EDI,[EBP + -0x6e]               ; 0052b079
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0052b07c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0052b081
    ADD ESP,0x8                         ; 0052b084
    LEA EAX,[EBP + 0xfffffdfa]          ; 0052b087
    MOV EDX,dword ptr [0x01e6614c]      ; 0052b08d | DAT_01e6614c
    PUSH EAX                            ; 0052b093
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b094
    MOV ECX,dword ptr [EBP + 0x46]      ; 0052b09b
    SUB EAX,EDX                         ; 0052b09e
    MOV dword ptr [EBP + 0xfffffe2e],EBX ; 0052b0a0
    SHL EAX,0x4                         ; 0052b0a6
    PUSH 0x3f800000                     ; 0052b0a9
    ADD EAX,ECX                         ; 0052b0ae
    MOV dword ptr [EBP + 0xfffffe32],EBX ; 0052b0b0
    PUSH EAX                            ; 0052b0b6
    FLD float ptr [EBP + 0x76]          ; 0052b0b7
    PUSH 0x265370c                      ; 0052b0ba | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0052b0bf
    CALL core_xform.cpp_FUN_00591530    ; 0052b0c5
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0052b0ca
    LEA EAX,[EBP + -0x6e]               ; 0052b0cd
    LEA ESI,[EBP + 0xfffffeea]          ; 0052b0d0
    PUSH EAX                            ; 0052b0d6
    MOVSD ES:EDI,ESI                    ; 0052b0d7
    MOVSD ES:EDI,ESI                    ; 0052b0d8
    MOVSD ES:EDI,ESI                    ; 0052b0d9
    PUSH EBX                            ; 0052b0da
    LEA ESI,[EBP + -0x2]                ; 0052b0db
    CALL core_actor.cpp_FUN_00408d70    ; 0052b0de
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0052b0e3
    LEA EAX,[EBP + 0x3a]                ; 0052b0e6
    PUSH EAX                            ; 0052b0e9
    LEA EDI,[EBP + 0x3a]                ; 0052b0ea
    LEA ESI,[EBP + -0x2]                ; 0052b0ed
    PUSH EBX                            ; 0052b0f0
    MOVSD ES:EDI,ESI                    ; 0052b0f1
    MOVSD ES:EDI,ESI                    ; 0052b0f2
    MOVSD ES:EDI,ESI                    ; 0052b0f3
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0052b0f4
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0052b0f9
    JMP 0x0052aa9e                      ; 0052b0fc
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0052b101
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052b107
    PUSH EBX                            ; 0052b10d
    CALL dword ptr [EAX + 0x150]        ; 0052b10e
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052b114
    ADD ESP,0x8                         ; 0052b11a
    TEST EAX,EAX                        ; 0052b11d
    JZ 0x0052aa9e                       ; 0052b11f
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b125
    PUSH 0x0                            ; 0052b127
    LEA EAX,[EBX + 0x2b4]               ; 0052b129
    PUSH EAX                            ; 0052b12f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b130
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b135
    JMP 0x0052aa9e                      ; 0052b138
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b13d
        ;   Label: LAB_0052b13d
    PUSH 0x2                            ; 0052b13f
    LEA EAX,[EBX + 0x2b4]               ; 0052b141
    PUSH EAX                            ; 0052b147
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b148
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b14d
    JMP 0x0052aa9e                      ; 0052b150
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0052b155
        ;   Label: LAB_0052b155
    PUSH EBX                            ; 0052b15b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0052b15c
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052b161
    TEST EAX,EAX                        ; 0052b164
    JZ 0x0052b180                       ; 0052b166
        ;   XREF to: 0052b180 (CONDITIONAL_JUMP)  ; LAB_0052b180
    PUSH 0x1                            ; 0052b168
    PUSH 0x2                            ; 0052b16a
    LEA EAX,[EBX + 0x2b4]               ; 0052b16c
    PUSH EAX                            ; 0052b172
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b173
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b178
    JMP 0x0052aa9e                      ; 0052b17b
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b180
        ;   Label: LAB_0052b180
    PUSH 0x1                            ; 0052b182
    LEA EAX,[EBX + 0x2b4]               ; 0052b184
    PUSH EAX                            ; 0052b18a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b18b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b190
    JMP 0x0052aa9e                      ; 0052b193
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBX + 0x10afc]       ; 0052b198
        ;   Label: caseD_a
    FSUB float ptr [EBP + 0x92]         ; 0052b19e
    FST float ptr [EBX + 0x10afc]       ; 0052b1a4
    FLDZ                                ; 0052b1aa
    FCOMPP                              ; 0052b1ac
    FNSTSW AX                           ; 0052b1ae
    SAHF                                ; 0052b1b0
    JBE 0x0052aa9e                      ; 0052b1b1
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b1b7
    PUSH 0xb                            ; 0052b1b9
    LEA EAX,[EBX + 0x2b4]               ; 0052b1bb
    PUSH EAX                            ; 0052b1c1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b1c2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b1c7
    JMP 0x0052aa9e                      ; 0052b1ca
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0052b1cf
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052b1d5
    PUSH EBX                            ; 0052b1db
    CALL dword ptr [EAX + 0x150]        ; 0052b1dc
    ADD ESP,0x8                         ; 0052b1e2
    LEA EAX,[EBX + 0x2b4]               ; 0052b1e5
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0052b1eb
    MOV dword ptr [EBP + 0x5e],EAX      ; 0052b1f1
    TEST ESI,ESI                        ; 0052b1f4
    JNZ 0x0052b234                      ; 0052b1f6
        ;   XREF to: 0052b234 (CONDITIONAL_JUMP)  ; LAB_0052b234
    PUSH dword ptr [EBP + 0x92]         ; 0052b1f8
    PUSH EBX                            ; 0052b1fe
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0052b1ff
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052b204
    TEST EAX,EAX                        ; 0052b207
    JZ 0x0052b220                       ; 0052b209
        ;   XREF to: 0052b220 (CONDITIONAL_JUMP)  ; LAB_0052b220
    PUSH 0x1                            ; 0052b20b
    PUSH 0x2                            ; 0052b20d
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0052b20f
    PUSH EDI                            ; 0052b212
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b213
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b218
    JMP 0x0052aa9e                      ; 0052b21b
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b220
        ;   Label: LAB_0052b220
    PUSH ESI                            ; 0052b222
    MOV ESI,dword ptr [EBP + 0x5e]      ; 0052b223
    PUSH ESI                            ; 0052b226
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b227
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b22c
    JMP 0x0052aa9e                      ; 0052b22f
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,[0x005fb048]                ; 0052b234 | DAT_005fb048
        ;   Label: LAB_0052b234
    PUSH 0x3e32b8c2                     ; 0052b239
    MOV dword ptr [EBP + 0x6e],EAX      ; 0052b23e
    LEA EAX,[EBX + 0x2508]              ; 0052b241
    PUSH 0x3f000000                     ; 0052b247
    MOV dword ptr [EAX + 0x8],0x0       ; 0052b24c
    XOR EDI,EDI                         ; 0052b253
    MOV EDX,dword ptr [EAX + 0x8]       ; 0052b255
    MOV dword ptr [EAX + 0x4],EDX       ; 0052b258
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052b25b
    MOV dword ptr [EAX],EDX             ; 0052b25e
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0052b260
    MOV dword ptr [EBP + -0x7a],EDI     ; 0052b263
    MOV dword ptr [EBP + -0x72],EAX     ; 0052b266
    LEA EAX,[EBP + -0x7a]               ; 0052b269
    MOV dword ptr [EBP + -0x76],EDI     ; 0052b26c
    PUSH EAX                            ; 0052b26f
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052b270
    PUSH EAX                            ; 0052b276
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052b277
    CALL dword ptr [EDX + 0xcc]         ; 0052b27d
    ADD ESP,0x4                         ; 0052b283
    PUSH EAX                            ; 0052b286
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052b287
    ADD EAX,0x20                        ; 0052b28d
    PUSH EAX                            ; 0052b290
    PUSH EBX                            ; 0052b291
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0052b292
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0052b297
    TEST EAX,EAX                        ; 0052b29a
    JL 0x0052aa9e                       ; 0052b29c
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    LEA EDI,[EBP + 0xa]                 ; 0052b2a2
    LEA EAX,[EBX + 0x20]                ; 0052b2a5
    LEA ESI,[EBP + 0x2e]                ; 0052b2a8
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0052b2ab
    FLD float ptr [EAX]                 ; 0052b2b1
    FLD float ptr [EAX + 0x4]           ; 0052b2b3
    FLD float ptr [EAX + 0x8]           ; 0052b2b6
    FXCH ST2                            ; 0052b2b9
    FSUB float ptr [EDX + 0x20]         ; 0052b2bb
    FXCH                                ; 0052b2be
    FSUB float ptr [EDX + 0x24]         ; 0052b2c0
    FXCH ST2                            ; 0052b2c3
    FSUB float ptr [EDX + 0x28]         ; 0052b2c5
    FXCH                                ; 0052b2c8
    FSTP float ptr [EBP + 0x2e]         ; 0052b2ca
    FXCH                                ; 0052b2cd
    FSTP float ptr [EBP + 0x32]         ; 0052b2cf
    FSTP float ptr [EBP + 0x36]         ; 0052b2d2
    MOVSD ES:EDI,ESI                    ; 0052b2d5
    MOVSD ES:EDI,ESI                    ; 0052b2d6
    MOVSD ES:EDI,ESI                    ; 0052b2d7
    FLD float ptr [EBP + 0xa]           ; 0052b2d8
    FMUL ST0                            ; 0052b2db
    FLD float ptr [EBP + 0x12]          ; 0052b2dd
    FMUL ST0                            ; 0052b2e0
    FADDP                               ; 0052b2e2
    FSQRT                               ; 0052b2e4
    XOR EDX,EDX                         ; 0052b2e6
    MOV dword ptr [EBP + 0xe],EDX       ; 0052b2e8
    FSTP float ptr [EBP + 0x5a]         ; 0052b2eb
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0052b2ee
    FLD float ptr [EBP + 0x5a]          ; 0052b2f1
    MOV dword ptr [EBP + 0x72],EAX      ; 0052b2f4
    FCOMP float ptr [0x005fb054]        ; 0052b2f7 | DAT_005fb054
    FNSTSW AX                           ; 0052b2fd
    SAHF                                ; 0052b2ff
    JBE 0x0052b312                      ; 0052b300
        ;   XREF to: 0052b312 (CONDITIONAL_JUMP)  ; LAB_0052b312
    PUSH 0x1                            ; 0052b302
    PUSH 0x3                            ; 0052b304
    MOV ECX,dword ptr [EBP + 0x5e]      ; 0052b306
    PUSH ECX                            ; 0052b309
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b30a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b30f
    FLD float ptr [EBP + 0x72]          ; 0052b312
        ;   Label: LAB_0052b312
    FCOMP float ptr [EBP + 0x6e]        ; 0052b315
    FNSTSW AX                           ; 0052b318
    SAHF                                ; 0052b31a
    JA 0x0052b3f1                       ; 0052b31b
        ;   XREF to: 0052b3f1 (CONDITIONAL_JUMP)  ; LAB_0052b3f1
    FLD float ptr [EBX + 0x10a74]       ; 0052b321
    FLDZ                                ; 0052b327
    FCOMPP                              ; 0052b329
    FNSTSW AX                           ; 0052b32b
    SAHF                                ; 0052b32d
    JC 0x0052b3f1                       ; 0052b32e
        ;   XREF to: 0052b3f1 (CONDITIONAL_JUMP)  ; LAB_0052b3f1
    LEA EDI,[EBP + 0xffffff62]          ; 0052b334
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052b33a
    LEA ESI,[EBP + 0xfffffede]          ; 0052b340
    LEA EDX,[EBX + 0x20]                ; 0052b346
    FLD float ptr [EAX + 0x24]          ; 0052b349
    FLD float ptr [EAX + 0x28]          ; 0052b34c
    FLD float ptr [EAX + 0x20]          ; 0052b34f
    LEA EAX,[EBP + 0xffffff62]          ; 0052b352
    FSUB float ptr [EDX]                ; 0052b358
    FXCH ST2                            ; 0052b35a
    FSUB float ptr [EDX + 0x4]          ; 0052b35c
    FXCH                                ; 0052b35f
    FSUB float ptr [EDX + 0x8]          ; 0052b361
    FXCH ST2                            ; 0052b364
    FSTP float ptr [EBP + 0xfffffede]   ; 0052b366
    FSTP float ptr [EBP + 0xfffffee2]   ; 0052b36c
    FSTP float ptr [EBP + 0xfffffee6]   ; 0052b372
    MOVSD ES:EDI,ESI                    ; 0052b378
    MOVSD ES:EDI,ESI                    ; 0052b379
    MOVSD ES:EDI,ESI                    ; 0052b37a
    PUSH EAX                            ; 0052b37b
    LEA ESI,[EBP + 0xfffffe96]          ; 0052b37c
    LEA EDI,[EBP + 0xfffffe72]          ; 0052b382
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0052b388
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xfffffe96]          ; 0052b38d
    MOVSD ES:EDI,ESI                    ; 0052b393
    MOVSD ES:EDI,ESI                    ; 0052b394
    MOVSD ES:EDI,ESI                    ; 0052b395
    ADD ESP,0x4                         ; 0052b396
    FLD float ptr [EBP + 0xfffffe76]    ; 0052b399
    FSUB float ptr [EBX + 0x34]         ; 0052b39f
    SUB ESP,0x4                         ; 0052b3a2
    FSTP float ptr [ESP]                ; 0052b3a5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0052b3a8
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0052b3ad
    FLD float ptr [EBP + 0x76]          ; 0052b3b0
    FABS                                ; 0052b3b3
    ADD ESP,0x4                         ; 0052b3b5
    FCOMP double ptr [0x005e53e5]       ; 0052b3b8 | DAT_005e53e5
    FNSTSW AX                           ; 0052b3be
    SAHF                                ; 0052b3c0
    JNC 0x0052b3f1                      ; 0052b3c1
        ;   XREF to: 0052b3f1 (CONDITIONAL_JUMP)  ; LAB_0052b3f1
    PUSH 0x3f000000                     ; 0052b3c3
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0052b3c8
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0052b3cd
    LEA EDX,[EBX + 0x2b4]               ; 0052b3d0
    TEST EAX,EAX                        ; 0052b3d6
    JZ 0x0052b41b                       ; 0052b3d8
        ;   XREF to: 0052b41b (CONDITIONAL_JUMP)  ; LAB_0052b41b
    PUSH 0x1                            ; 0052b3da
    PUSH 0x4                            ; 0052b3dc
    PUSH EDX                            ; 0052b3de
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b3df
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b3e4
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 0052b3e7
        ;   Label: LAB_0052b3e7
    FLD float ptr [EBP + 0x72]          ; 0052b3f1
        ;   Label: LAB_0052b3f1
    FCOMP float ptr [EBX + 0x10a70]     ; 0052b3f4
    FNSTSW AX                           ; 0052b3fa
    SAHF                                ; 0052b3fc
    JBE 0x0052aa9e                      ; 0052b3fd
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b403
    PUSH 0x0                            ; 0052b405
    LEA EAX,[EBX + 0x2b4]               ; 0052b407
    PUSH EAX                            ; 0052b40d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b40e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b413
    JMP 0x0052aa9e                      ; 0052b416
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b41b
        ;   Label: LAB_0052b41b
    PUSH 0xa                            ; 0052b41d
    PUSH EDX                            ; 0052b41f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b420
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b425
    MOV dword ptr [EBX + 0x10afc],0x40a00000 ; 0052b428
    JMP 0x0052b3e7                      ; 0052b432
        ;   XREF to: 0052b3e7 (UNCONDITIONAL_JUMP)  ; LAB_0052b3e7
    PUSH dword ptr [EBP + 0x92]         ; 0052b434
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052b43a
    PUSH EBX                            ; 0052b440
    CALL dword ptr [EAX + 0x150]        ; 0052b441
    ADD ESP,0x8                         ; 0052b447
    LEA EAX,[EBX + 0x2b4]               ; 0052b44a
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0052b450
    MOV dword ptr [EBP + 0x62],EAX      ; 0052b456
    TEST ESI,ESI                        ; 0052b459
    JNZ 0x0052b46e                      ; 0052b45b
        ;   XREF to: 0052b46e (CONDITIONAL_JUMP)  ; LAB_0052b46e
    PUSH 0x1                            ; 0052b45d
    PUSH ESI                            ; 0052b45f
    PUSH EAX                            ; 0052b460
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b461
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b466
    JMP 0x0052aa9e                      ; 0052b469
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3e32b8c2                     ; 0052b46e
        ;   Label: LAB_0052b46e
    LEA EAX,[EBX + 0x2508]              ; 0052b473
    PUSH 0x3f000000                     ; 0052b479
    MOV dword ptr [EAX + 0x8],0x0       ; 0052b47e
    XOR EDI,EDI                         ; 0052b485
    MOV EDX,dword ptr [EAX + 0x8]       ; 0052b487
    MOV dword ptr [EAX + 0x4],EDX       ; 0052b48a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052b48d
    MOV dword ptr [EAX],EDX             ; 0052b490
    MOV EAX,[0x005fb048]                ; 0052b492 | DAT_005fb048
    MOV dword ptr [EBP + 0xffffff02],EDI ; 0052b497
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0052b49d
    LEA EAX,[EBP + 0xffffff02]          ; 0052b4a3
    MOV dword ptr [EBP + 0xffffff06],EDI ; 0052b4a9
    PUSH EAX                            ; 0052b4af
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052b4b0
    PUSH EAX                            ; 0052b4b6
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052b4b7
    CALL dword ptr [EDX + 0xcc]         ; 0052b4bd
    ADD ESP,0x4                         ; 0052b4c3
    PUSH EAX                            ; 0052b4c6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0052b4c7
    ADD EAX,0x20                        ; 0052b4cd
    PUSH EAX                            ; 0052b4d0
    PUSH EBX                            ; 0052b4d1
    LEA ESI,[EBP + 0xffffff4a]          ; 0052b4d2
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0052b4d8
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EAX,[EBX + 0x20]                ; 0052b4dd
    LEA EDI,[EBP + 0xffffff56]          ; 0052b4e0
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0052b4e6
    FLD float ptr [EAX]                 ; 0052b4ec
    FLD float ptr [EAX + 0x4]           ; 0052b4ee
    FLD float ptr [EAX + 0x8]           ; 0052b4f1
    FXCH ST2                            ; 0052b4f4
    FSUB float ptr [EDX + 0x20]         ; 0052b4f6
    FXCH                                ; 0052b4f9
    FSUB float ptr [EDX + 0x24]         ; 0052b4fb
    FXCH ST2                            ; 0052b4fe
    FSUB float ptr [EDX + 0x28]         ; 0052b500
    FXCH                                ; 0052b503
    FSTP float ptr [EBP + 0xffffff4a]   ; 0052b505
    FXCH                                ; 0052b50b
    FSTP float ptr [EBP + 0xffffff4e]   ; 0052b50d
    FSTP float ptr [EBP + 0xffffff52]   ; 0052b513
    MOVSD ES:EDI,ESI                    ; 0052b519
    MOVSD ES:EDI,ESI                    ; 0052b51a
    MOVSD ES:EDI,ESI                    ; 0052b51b
    FLD float ptr [EBP + 0xffffff5a]    ; 0052b51c
    FMUL ST0                            ; 0052b522
    FLD float ptr [EBP + 0xffffff56]    ; 0052b524
    FMUL ST0                            ; 0052b52a
    FADDP                               ; 0052b52c
    FLD float ptr [EBP + 0xffffff5e]    ; 0052b52e
    FMUL ST0                            ; 0052b534
    FADDP                               ; 0052b536
    FSQRT                               ; 0052b538
    ADD ESP,0x18                        ; 0052b53a
    FCOMP float ptr [0x005fb054]        ; 0052b53d | DAT_005fb054
    FNSTSW AX                           ; 0052b543
    SAHF                                ; 0052b545
    JNC 0x0052b5d3                      ; 0052b546
        ;   XREF to: 0052b5d3 (CONDITIONAL_JUMP)  ; LAB_0052b5d3
    PUSH 0x3f000000                     ; 0052b54c
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0052b551
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0052b556
    TEST EAX,EAX                        ; 0052b559
    JZ 0x0052b598                       ; 0052b55b
        ;   XREF to: 0052b598 (CONDITIONAL_JUMP)  ; LAB_0052b598
    PUSH 0x3f000000                     ; 0052b55d
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0052b562
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0052b567
    TEST EAX,EAX                        ; 0052b56a
    JZ 0x0052b583                       ; 0052b56c
        ;   XREF to: 0052b583 (CONDITIONAL_JUMP)  ; LAB_0052b583
    PUSH 0x1                            ; 0052b56e
    PUSH 0xe                            ; 0052b570
    MOV EDX,dword ptr [EBP + 0x62]      ; 0052b572
    PUSH EDX                            ; 0052b575
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b576
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b57b
    JMP 0x0052aa9e                      ; 0052b57e
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b583
        ;   Label: LAB_0052b583
    PUSH 0xf                            ; 0052b585
    MOV EAX,dword ptr [EBP + 0x62]      ; 0052b587
    PUSH EAX                            ; 0052b58a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b58b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b590
    JMP 0x0052aa9e                      ; 0052b593
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3f000000                     ; 0052b598
        ;   Label: LAB_0052b598
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0052b59d
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0052b5a2
    TEST EAX,EAX                        ; 0052b5a5
    JZ 0x0052b5be                       ; 0052b5a7
        ;   XREF to: 0052b5be (CONDITIONAL_JUMP)  ; LAB_0052b5be
    PUSH 0x1                            ; 0052b5a9
    PUSH 0x4                            ; 0052b5ab
    MOV EDI,dword ptr [EBP + 0x62]      ; 0052b5ad
    PUSH EDI                            ; 0052b5b0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b5b1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b5b6
    JMP 0x0052aa9e                      ; 0052b5b9
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b5be
        ;   Label: LAB_0052b5be
    PUSH 0x2                            ; 0052b5c0
    MOV ESI,dword ptr [EBP + 0x62]      ; 0052b5c2
    PUSH ESI                            ; 0052b5c5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b5c6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b5cb
    JMP 0x0052aa9e                      ; 0052b5ce
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3dcccccd                     ; 0052b5d3
        ;   Label: LAB_0052b5d3
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0052b5d8
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0052b5dd
    TEST EAX,EAX                        ; 0052b5e0
    JZ 0x0052aa9e                       ; 0052b5e2
        ;   XREF to: 0052aa9e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3f000000                     ; 0052b5e8
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0052b5ed
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0052b5f2
    TEST EAX,EAX                        ; 0052b5f5
    JZ 0x0052b60e                       ; 0052b5f7
        ;   XREF to: 0052b60e (CONDITIONAL_JUMP)  ; LAB_0052b60e
    PUSH 0x1                            ; 0052b5f9
    PUSH 0xe                            ; 0052b5fb
    MOV ECX,dword ptr [EBP + 0x62]      ; 0052b5fd
    PUSH ECX                            ; 0052b600
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b601
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b606
    JMP 0x0052aa9e                      ; 0052b609
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0052b60e
        ;   Label: LAB_0052b60e
    PUSH 0xf                            ; 0052b610
    MOV EDX,dword ptr [EBP + 0x62]      ; 0052b612
    PUSH EDX                            ; 0052b615
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b616
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b61b
    JMP 0x0052aa9e                      ; 0052b61e
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0052b623
        ;   Label: caseD_e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052b629
    PUSH EBX                            ; 0052b62f
    CALL dword ptr [EAX + 0x150]        ; 0052b630
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 0052b636
    ADD ESP,0x8                         ; 0052b63c
    TEST ECX,ECX                        ; 0052b63f
    JNZ 0x0052b65a                      ; 0052b641
        ;   XREF to: 0052b65a (CONDITIONAL_JUMP)  ; LAB_0052b65a
    PUSH 0x1                            ; 0052b643
    PUSH ECX                            ; 0052b645
    LEA EAX,[EBX + 0x2b4]               ; 0052b646
    PUSH EAX                            ; 0052b64c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b64d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b652
    JMP 0x0052aa9e                      ; 0052b655
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EDI,[EBP + -0xe]                ; 0052b65a
        ;   Label: LAB_0052b65a
    MOV EAX,ECX                         ; 0052b65d
    LEA ESI,[EBP + 0xfffffeae]          ; 0052b65f
    LEA EDX,[EBX + 0x20]                ; 0052b665
    FLD float ptr [EAX + 0x24]          ; 0052b668
    FLD float ptr [EAX + 0x28]          ; 0052b66b
    FLD float ptr [EAX + 0x20]          ; 0052b66e
    LEA EAX,[EBP + -0xe]                ; 0052b671
    FSUB float ptr [EDX]                ; 0052b674
    FXCH ST2                            ; 0052b676
    FSUB float ptr [EDX + 0x4]          ; 0052b678
    FXCH                                ; 0052b67b
    FSUB float ptr [EDX + 0x8]          ; 0052b67d
    FXCH ST2                            ; 0052b680
    FSTP float ptr [EBP + 0xfffffeae]   ; 0052b682
    FSTP float ptr [EBP + 0xfffffeb2]   ; 0052b688
    FSTP float ptr [EBP + 0xfffffeb6]   ; 0052b68e
    MOVSD ES:EDI,ESI                    ; 0052b694
    MOVSD ES:EDI,ESI                    ; 0052b695
    MOVSD ES:EDI,ESI                    ; 0052b696
    PUSH EAX                            ; 0052b697
    LEA ESI,[EBP + 0xfffffec6]          ; 0052b698
    LEA EDI,[EBP + 0xffffff1a]          ; 0052b69e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0052b6a4
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xfffffec6]          ; 0052b6a9
    MOVSD ES:EDI,ESI                    ; 0052b6af
    MOVSD ES:EDI,ESI                    ; 0052b6b0
    MOVSD ES:EDI,ESI                    ; 0052b6b1
    MOV EAX,dword ptr [EBP + 0xffffff1e] ; 0052b6b2
    ADD ESP,0x4                         ; 0052b6b8
    MOV dword ptr [EBX + 0x34],EAX      ; 0052b6bb
    JMP 0x0052aa9e                      ; 0052b6be
        ;   XREF to: 0052aa9e (UNCONDITIONAL_JUMP)  ; caseD_d

