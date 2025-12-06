; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_smiley.cpp_FUN_005a3580()
;
;
; Referenced Globals:
;   TerminatedCString s_smiley_die_wav_0064f37a
;
; Called Functions:
;   core_enemy.cpp_FUN_004a9f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_smiley.cpp_FUN_005a32a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3580
        ;   Label: core_smiley.cpp_FUN_005a3580
    PUSH ESI                            ; 005a3581
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3582
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a3586
    CMP dword ptr [EBX + 0xbefc],0x1    ; 005a358a
    JNZ 0x005a364e                      ; 005a3591 | LAB_005a364e
        ;   XREF to: 005a364e (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI + 0x30]      ; 005a3597
    CMP ECX,0x4                         ; 005a359a
    JZ 0x005a365f                       ; 005a359d | LAB_005a365f
        ;   XREF to: 005a365f (CONDITIONAL_JUMP)
    CMP ECX,0xb                         ; 005a35a3
    JLE 0x005a35b4                      ; 005a35a6 | LAB_005a35b4
        ;   XREF to: 005a35b4 (CONDITIONAL_JUMP)
    CMP ECX,0x6b                        ; 005a35a8
    JZ 0x005a35b4                       ; 005a35ab | LAB_005a35b4
        ;   XREF to: 005a35b4 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x4],0x0       ; 005a35ad
        ;   Label: LAB_005a35ad
    FLD float ptr [ESI + 0x4]           ; 005a35b4
        ;   Label: LAB_005a35b4
    FLDZ                                ; 005a35b7
    FCOMPP                              ; 005a35b9
    FNSTSW AX                           ; 005a35bb
    SAHF                                ; 005a35bd
    JNC 0x005a35ca                      ; 005a35be | LAB_005a35ca
        ;   XREF to: 005a35ca (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005a35c0
    PUSH EBX                            ; 005a35c1
    CALL core_smiley.cpp_FUN_005a32a0   ; 005a35c2 | undefined core_smiley.cpp_FUN_005a32a0()
        ;   XREF to: 005a32a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a35c7
    PUSH EDI                            ; 005a35ca
        ;   Label: LAB_005a35ca
    FLD float ptr [ESI + 0x4]           ; 005a35cb
    FSUBR float ptr [EBX + 0x243c]      ; 005a35ce
    LEA EDI,[EBX + 0x158]               ; 005a35d4
    FST float ptr [EBX + 0x243c]        ; 005a35da
    FLDZ                                ; 005a35e0
    FCOMPP                              ; 005a35e2
    FNSTSW AX                           ; 005a35e4
    SAHF                                ; 005a35e6
    JC 0x005a366b                       ; 005a35e7 | LAB_005a366b
        ;   XREF to: 005a366b (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005a35ed
    MOV dword ptr [EBX + 0x243c],0x0    ; 005a35ee
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005a35f8 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a35fd
    ADD ESP,0x4                         ; 005a3600
    CMP EAX,0x8                         ; 005a3603
    JZ 0x005a3640                       ; 005a3606 | LAB_005a3640
        ;   XREF to: 005a3640 (CONDITIONAL_JUMP)
    CMP EAX,0x7                         ; 005a3608
    JZ 0x005a3640                       ; 005a360b | LAB_005a3640
        ;   XREF to: 005a3640 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005a360d
    PUSH 0x7                            ; 005a360f
    PUSH EDI                            ; 005a3611
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a3612 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a3617
    PUSH 0x0                            ; 005a361a
    PUSH 0x1                            ; 005a361c
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a361e
    PUSH EBX                            ; 005a3624
    CALL dword ptr [EAX + 0x13c]        ; 005a3625
    ADD ESP,0xc                         ; 005a362b
    PUSH 0x64f37a                       ; 005a362e | = "smiley_die??.wav" | s_smiley_die_wav_0064f37a = smiley_die??.wav
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a3633
    PUSH EBX                            ; 005a3639
    CALL dword ptr [EAX + 0x24]         ; 005a363a
    ADD ESP,0x8                         ; 005a363d
    PUSH ESI                            ; 005a3640
        ;   Label: LAB_005a3640
    PUSH EBX                            ; 005a3641
    CALL core_enemy.cpp_FUN_004a9f10    ; 005a3642 | undefined core_enemy.cpp_FUN_004a9f10()
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a3647
    POP EDI                             ; 005a364a
    POP ESI                             ; 005a364b
    POP EBX                             ; 005a364c
    RET                                 ; 005a364d
    MOV dword ptr [ESI + 0x30],0x64     ; 005a364e
        ;   Label: LAB_005a364e
    MOV dword ptr [ESI + 0x4],0x0       ; 005a3655
    POP ESI                             ; 005a365c
    POP EBX                             ; 005a365d
    RET                                 ; 005a365e
    MOV dword ptr [ESI + 0x30],0x64     ; 005a365f
        ;   Label: LAB_005a365f
    JMP 0x005a35ad                      ; 005a3666 | LAB_005a35ad
        ;   XREF to: 005a35ad (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 005a366b
        ;   Label: LAB_005a366b
    PUSH 0x3                            ; 005a366d
    PUSH EDI                            ; 005a366f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005a3670 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a3675
    PUSH ESI                            ; 005a3678
    PUSH EBX                            ; 005a3679
    CALL core_enemy.cpp_FUN_004a9f10    ; 005a367a | undefined core_enemy.cpp_FUN_004a9f10()
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a367f
    POP EDI                             ; 005a3682
    POP ESI                             ; 005a3683
    POP EBX                             ; 005a3684
    RET                                 ; 005a3685

