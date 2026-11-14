; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hellhag_cpp_CHag_startBurn_FUN_005aad70(CHag *this_ptr,CVector3f *direction,float strength)
;
; Parameters:
; CHag *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   direction
; float            Stack[0xc]:4   strength
;
; Referenced Globals:
;   undefined4 DAT_005f0c0e
;   TerminatedCString s_BurnComplete_005f0c13
;   undefined4 DAT_005f0c20
;   undefined4 DAT_005f0c26
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_muzzle.cpp_FUN_0059d7f0
;   core_muzzle.cpp_FUN_0059d8e0
;   core_muzzle.cpp_FUN_0059daa0
;   core_muzzle.cpp_FUN_0059db70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aad70
        ;   Label: core_hellhag.cpp_CHag_startBurn_FUN_005aad70
    PUSH ESI                            ; 005aad71
    PUSH EDI                            ; 005aad72
    PUSH EBP                            ; 005aad73
    MOV EBP,ESP                         ; 005aad74
    SUB ESP,0x8                         ; 005aad76
    AND ESP,0xfffffff8                  ; 005aad79
    MOV EBX,dword ptr [EBP + 0x14]      ; 005aad7c
    MOV EDI,dword ptr [EBP + 0x18]      ; 005aad7f
    PUSH 0x1                            ; 005aad82
    PUSH 0x8                            ; 005aad84
    LEA EAX,[EBX + 0x2b4]               ; 005aad86
    PUSH EAX                            ; 005aad8c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005aad8d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005aad92
    PUSH 0x5f0c0e                       ; 005aad95 | DAT_005f0c0e
    LEA ESI,[EBX + 0x10af8]             ; 005aad9a
    PUSH ESI                            ; 005aada0
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005aada1
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aada6
    TEST EAX,EAX                        ; 005aada9
    JNZ 0x005aadc5                      ; 005aadab
        ;   XREF to: 005aadc5 (CONDITIONAL_JUMP)  ; LAB_005aadc5
    PUSH ESI                            ; 005aadad
    CALL core_muzzle.cpp_FUN_0059db70   ; 005aadae
        ;   XREF to: 0059db70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059db70()
    ADD ESP,0x4                         ; 005aadb3
    PUSH EAX                            ; 005aadb6
    PUSH 0x5f0c13                       ; 005aadb7 | = "BurnComplete"
    PUSH ESI                            ; 005aadbc
    CALL core_muzzle.cpp_FUN_0059d7f0   ; 005aadbd
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005aadc2
    PUSH 0x5f0c20                       ; 005aadc5 | DAT_005f0c20
        ;   Label: LAB_005aadc5
    LEA EAX,[EBX + 0x10af8]             ; 005aadca
    PUSH EAX                            ; 005aadd0
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 005aadd1
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aadd6
    FLD float ptr [EBP + 0x1c]          ; 005aadd9
    FMUL float ptr [0x005f0c26]         ; 005aaddc | DAT_005f0c26
    LEA EDX,[EBX + 0x11434]             ; 005aade2
    FSTP float ptr [EBX + 0x11430]      ; 005aade8
    CMP EDX,EDI                         ; 005aadee
    JZ 0x005aae02                       ; 005aadf0
        ;   XREF to: 005aae02 (CONDITIONAL_JUMP)  ; LAB_005aae02
    MOV EAX,dword ptr [EDI]             ; 005aadf2
    MOV dword ptr [EDX],EAX             ; 005aadf4
    MOV EAX,dword ptr [EDI + 0x4]       ; 005aadf6
    MOV dword ptr [EDX + 0x4],EAX       ; 005aadf9
    MOV EAX,dword ptr [EDI + 0x8]       ; 005aadfc
    MOV dword ptr [EDX + 0x8],EAX       ; 005aadff
    LEA EDX,[EBX + 0x11434]             ; 005aae02
        ;   Label: LAB_005aae02
    MOV dword ptr [EBX + 0x11438],0x0   ; 005aae08
    FLD float ptr [EDX + 0x4]           ; 005aae12
    FMUL ST0                            ; 005aae15
    FLD float ptr [EDX]                 ; 005aae17
    FMUL ST0                            ; 005aae19
    FADDP                               ; 005aae1b
    FLD float ptr [EDX + 0x8]           ; 005aae1d
    FMUL ST0                            ; 005aae20
    FADDP                               ; 005aae22
    FSQRT                               ; 005aae24
    FLDZ                                ; 005aae26
    FXCH                                ; 005aae28
    FSTP float ptr [ESP]                ; 005aae2a
    FCOMP float ptr [ESP]               ; 005aae2d
    FNSTSW AX                           ; 005aae30
    SAHF                                ; 005aae32
    JNC 0x005aae5d                      ; 005aae33
        ;   XREF to: 005aae5d (CONDITIONAL_JUMP)  ; LAB_005aae5d
    FLD1                                ; 005aae35
    FLD float ptr [EDX]                 ; 005aae37
    FXCH                                ; 005aae39
    FDIV float ptr [ESP]                ; 005aae3b
    FXCH                                ; 005aae3e
    FMUL ST1                            ; 005aae40
    FLD float ptr [EDX + 0x4]           ; 005aae42
    FMUL ST2                            ; 005aae45
    FLD float ptr [EDX + 0x8]           ; 005aae47
    FMULP ST3                           ; 005aae4a
    FXCH                                ; 005aae4c
    FSTP float ptr [EDX]                ; 005aae4e
    FSTP float ptr [EDX + 0x4]          ; 005aae50
    FSTP float ptr [EDX + 0x8]          ; 005aae53
    MOV ESP,EBP                         ; 005aae56
    POP EBP                             ; 005aae58
    POP EDI                             ; 005aae59
    POP ESI                             ; 005aae5a
    POP EBX                             ; 005aae5b
    RET                                 ; 005aae5c
    MOV dword ptr [EDX + 0x8],0x0       ; 005aae5d
        ;   Label: LAB_005aae5d
    MOV EAX,dword ptr [EDX + 0x8]       ; 005aae64
    MOV dword ptr [EDX + 0x4],EAX       ; 005aae67
    MOV EAX,dword ptr [EDX + 0x4]       ; 005aae6a
    MOV dword ptr [EDX],EAX             ; 005aae6d
    MOV ESP,EBP                         ; 005aae6f
    POP EBP                             ; 005aae71
    POP EDI                             ; 005aae72
    POP ESI                             ; 005aae73
    POP EBX                             ; 005aae74
    RET                                 ; 005aae75

