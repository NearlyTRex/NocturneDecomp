; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_scat_cpp_FUN_00557ea0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_scat_die_wav_00641424
;   TerminatedCString s_scat_hurt_wav_00641433
;   float FLOAT_00662458 = 0.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   undefined4 DAT_02d81c6c
;   undefined4 DAT_02d81cc8
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042c3c0
;   core_gore.cpp_CGore_FUN_004ee030
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_scat.cpp_FUN_00558010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557ea0
        ;   Label: core_scat.cpp_FUN_00557ea0
    PUSH ESI                            ; 00557ea1
    PUSH EDI                            ; 00557ea2
    PUSH EBP                            ; 00557ea3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00557ea4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00557ea8
    TEST dword ptr [EBX + 0xbe24],0x7fffffff ; 00557eac
    JNZ 0x00557f24                      ; 00557eb6
        ;   XREF to: 00557f24 (CONDITIONAL_JUMP)  ; LAB_00557f24
    MOV EAX,[0x0067b654]                ; 00557eb8 | g_CGamePtr
        ;   Label: LAB_00557eb8
    CMP dword ptr [EAX + 0x1d0],0x0     ; 00557ebd | DAT_02d81c6c
    JZ 0x00557ecd                       ; 00557ec4
        ;   XREF to: 00557ecd (CONDITIONAL_JUMP)  ; LAB_00557ecd
    MOV dword ptr [EDI + 0x4],0x0       ; 00557ec6
    MOV EAX,[0x0067b654]                ; 00557ecd | g_CGamePtr
        ;   Label: LAB_00557ecd
    MOV ESI,dword ptr [EAX + 0x22c]     ; 00557ed2 | DAT_02d81cc8
    TEST ESI,ESI                        ; 00557ed8
    JZ 0x00557f2d                       ; 00557eda
        ;   XREF to: 00557f2d (CONDITIONAL_JUMP)  ; LAB_00557f2d
    MOV EAX,[0x00662458]                ; 00557edc | FLOAT_00662458
        ;   Label: LAB_00557edc
    MOV dword ptr [EBX + 0xbe24],EAX    ; 00557ee1
    FLD float ptr [EDI + 0x4]           ; 00557ee7
    FSUBR float ptr [EBX + 0x243c]      ; 00557eea
    LEA ESI,[EBX + 0x158]               ; 00557ef0
    FST float ptr [EBX + 0x243c]        ; 00557ef6
    FLDZ                                ; 00557efc
    FCOMPP                              ; 00557efe
    FNSTSW AX                           ; 00557f00
    SAHF                                ; 00557f02
    JNC 0x00557f32                      ; 00557f03
        ;   XREF to: 00557f32 (CONDITIONAL_JUMP)  ; LAB_00557f32
    FLD float ptr [EDI + 0x4]           ; 00557f05
    FLDZ                                ; 00557f08
    FCOMPP                              ; 00557f0a
    FNSTSW AX                           ; 00557f0c
    SAHF                                ; 00557f0e
    JC 0x00557faf                       ; 00557f0f
        ;   XREF to: 00557faf (CONDITIONAL_JUMP)  ; LAB_00557faf
    PUSH EDI                            ; 00557f15
    PUSH EBX                            ; 00557f16
    CALL core_charactr.cpp_CCharacter_FUN_0042c3c0 ; 00557f17
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00557f1c
    POP EBP                             ; 00557f1f
    POP EDI                             ; 00557f20
    POP ESI                             ; 00557f21
    POP EBX                             ; 00557f22
    RET                                 ; 00557f23
    MOV dword ptr [EDI + 0x4],0x0       ; 00557f24
        ;   Label: LAB_00557f24
    JMP 0x00557eb8                      ; 00557f2b
        ;   XREF to: 00557eb8 (UNCONDITIONAL_JUMP)  ; LAB_00557eb8
    MOV dword ptr [EDI + 0x4],ESI       ; 00557f2d
        ;   Label: LAB_00557f2d
    JMP 0x00557edc                      ; 00557f30
        ;   XREF to: 00557edc (UNCONDITIONAL_JUMP)  ; LAB_00557edc
    PUSH ESI                            ; 00557f32
        ;   Label: LAB_00557f32
    MOV dword ptr [EBX + 0x243c],0x0    ; 00557f33
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00557f3d
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00557f42
    ADD ESP,0x4                         ; 00557f45
    CMP EAX,0x5                         ; 00557f48
    JZ 0x00557f8e                       ; 00557f4b
        ;   XREF to: 00557f8e (CONDITIONAL_JUMP)  ; LAB_00557f8e
    PUSH ESI                            ; 00557f4d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00557f4e
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00557f53
    ADD ESP,0x4                         ; 00557f56
    CMP EAX,0x4                         ; 00557f59
    JZ 0x00557f8e                       ; 00557f5c
        ;   XREF to: 00557f8e (CONDITIONAL_JUMP)  ; LAB_00557f8e
    PUSH 0x1                            ; 00557f5e
    PUSH 0x4                            ; 00557f60
    PUSH ESI                            ; 00557f62
    MOV dword ptr [EBX + 0x2598],0x0    ; 00557f63
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00557f6d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00557f72
    PUSH 0x0                            ; 00557f75
    PUSH 0x42480000                     ; 00557f77
    PUSH 0x32                           ; 00557f7c
    PUSH EBX                            ; 00557f7e
    MOV EBP,dword ptr [0x0067b9a0]      ; 00557f7f | g_CGorePtr
    PUSH EBP                            ; 00557f85 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ee030 ; 00557f86
        ;   XREF to: 004ee030 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ee030(CGore * this_ptr, CDemonActor * actor)
    ADD ESP,0x14                        ; 00557f8b
    PUSH 0x641424                       ; 00557f8e | = "scat-die-?.wav"
        ;   Label: LAB_00557f8e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00557f93
    PUSH EBX                            ; 00557f99
    CALL dword ptr [EAX + 0x24]         ; 00557f9a
    ADD ESP,0x8                         ; 00557f9d
    PUSH EDI                            ; 00557fa0
    PUSH EBX                            ; 00557fa1
    CALL core_charactr.cpp_CCharacter_FUN_0042c3c0 ; 00557fa2
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00557fa7
    POP EBP                             ; 00557faa
    POP EDI                             ; 00557fab
    POP ESI                             ; 00557fac
    POP EBX                             ; 00557fad
    RET                                 ; 00557fae
    PUSH EBX                            ; 00557faf
        ;   Label: LAB_00557faf
    CALL core_scat.cpp_FUN_00558010     ; 00557fb0
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_FUN_00558010()
    ADD ESP,0x4                         ; 00557fb5
    TEST EAX,EAX                        ; 00557fb8
    JZ 0x00557fea                       ; 00557fba
        ;   XREF to: 00557fea (CONDITIONAL_JUMP)  ; LAB_00557fea
    PUSH 0x1                            ; 00557fbc
    PUSH 0xd                            ; 00557fbe
    PUSH ESI                            ; 00557fc0
        ;   Label: LAB_00557fc0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00557fc1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00557fc6
    PUSH 0x641433                       ; 00557fc9 | = "scat-hurt-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00557fce
    PUSH EBX                            ; 00557fd4
    CALL dword ptr [EAX + 0x24]         ; 00557fd5
    ADD ESP,0x8                         ; 00557fd8
    PUSH EDI                            ; 00557fdb
    PUSH EBX                            ; 00557fdc
    CALL core_charactr.cpp_CCharacter_FUN_0042c3c0 ; 00557fdd
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00557fe2
    POP EBP                             ; 00557fe5
    POP EDI                             ; 00557fe6
    POP ESI                             ; 00557fe7
    POP EBX                             ; 00557fe8
    RET                                 ; 00557fe9
    PUSH 0x1                            ; 00557fea
        ;   Label: LAB_00557fea
    PUSH 0xc                            ; 00557fec
    JMP 0x00557fc0                      ; 00557fee
        ;   XREF to: 00557fc0 (UNCONDITIONAL_JUMP)  ; LAB_00557fc0

