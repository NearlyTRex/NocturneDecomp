; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_haystack.cpp_CHaystack_FUN_004f1b70(CHaystack * this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0065f3e8
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
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1b70
        ;   Label: core_haystack.cpp_CHaystack_FUN_004f1b70
    PUSH ESI                            ; 004f1b71
    PUSH EDI                            ; 004f1b72
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f1b73
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f1b77
    TEST dword ptr [EBX + 0xbe24],0x7fffffff ; 004f1b7b
    JNZ 0x004f1c0c                      ; 004f1b85 | LAB_004f1c0c
        ;   XREF to: 004f1c0c (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004f1b8b | CGame * g_CGamePtr
        ;   Label: LAB_004f1b8b
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004f1b90 | DAT_02d81c6c
    JZ 0x004f1ba0                       ; 004f1b97 | LAB_004f1ba0
        ;   XREF to: 004f1ba0 (CONDITIONAL_JUMP)
    MOV dword ptr [EDI + 0x4],0x0       ; 004f1b99
    MOV EAX,[0x0067b654]                ; 004f1ba0 | CGame * g_CGamePtr
        ;   Label: LAB_004f1ba0
    MOV ESI,dword ptr [EAX + 0x22c]     ; 004f1ba5 | DAT_02d81cc8
    TEST ESI,ESI                        ; 004f1bab
    JZ 0x004f1c18                       ; 004f1bad | LAB_004f1c18
        ;   XREF to: 004f1c18 (CONDITIONAL_JUMP)
    MOV EAX,[0x0065f3e8]                ; 004f1baf | undefined4 DAT_0065f3e8
        ;   Label: LAB_004f1baf
    MOV dword ptr [EBX + 0xbe24],EAX    ; 004f1bb4
    FLD float ptr [EDI + 0x4]           ; 004f1bba
    FSUBR float ptr [EBX + 0x243c]      ; 004f1bbd
    LEA ESI,[EBX + 0x158]               ; 004f1bc3
    FST float ptr [EBX + 0x243c]        ; 004f1bc9
    FLDZ                                ; 004f1bcf
    FCOMPP                              ; 004f1bd1
    FNSTSW AX                           ; 004f1bd3
    SAHF                                ; 004f1bd5
    JNC 0x004f1c1d                      ; 004f1bd6 | LAB_004f1c1d
        ;   XREF to: 004f1c1d (CONDITIONAL_JUMP)
    FLD float ptr [EDI + 0x4]           ; 004f1bd8
    FLDZ                                ; 004f1bdb
    FCOMPP                              ; 004f1bdd
    FNSTSW AX                           ; 004f1bdf
    SAHF                                ; 004f1be1
    JNC 0x004f1bfe                      ; 004f1be2 | LAB_004f1bfe
        ;   XREF to: 004f1bfe (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f1be4
    JNZ 0x004f1c86                      ; 004f1beb | LAB_004f1c86
        ;   XREF to: 004f1c86 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004f1bf1
    PUSH 0x4                            ; 004f1bf3
    PUSH ESI                            ; 004f1bf5
        ;   Label: LAB_004f1bf5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f1bf6 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f1bfb
    PUSH EDI                            ; 004f1bfe
        ;   Label: LAB_004f1bfe
    PUSH EBX                            ; 004f1bff
    CALL core_charactr.cpp_CCharacter_FUN_0042c3c0 ; 004f1c00 | void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f1c05
    POP EDI                             ; 004f1c08
    POP ESI                             ; 004f1c09
    POP EBX                             ; 004f1c0a
    RET                                 ; 004f1c0b
    MOV dword ptr [EDI + 0x4],0x0       ; 004f1c0c
        ;   Label: LAB_004f1c0c
    JMP 0x004f1b8b                      ; 004f1c13 | LAB_004f1b8b
        ;   XREF to: 004f1b8b (UNCONDITIONAL_JUMP)
    MOV dword ptr [EDI + 0x4],ESI       ; 004f1c18
        ;   Label: LAB_004f1c18
    JMP 0x004f1baf                      ; 004f1c1b | LAB_004f1baf
        ;   XREF to: 004f1baf (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 004f1c1d
        ;   Label: LAB_004f1c1d
    MOV dword ptr [EBX + 0x243c],0x0    ; 004f1c1e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f1c28 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f1c2d
    ADD ESP,0x4                         ; 004f1c30
    CMP EAX,0x9                         ; 004f1c33
    JZ 0x004f1bfe                       ; 004f1c36 | LAB_004f1bfe
        ;   XREF to: 004f1bfe (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004f1c38
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f1c39 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f1c3e
    ADD ESP,0x4                         ; 004f1c41
    CMP EAX,0x8                         ; 004f1c44
    JZ 0x004f1bfe                       ; 004f1c47 | LAB_004f1bfe
        ;   XREF to: 004f1bfe (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004f1c49
    PUSH 0x8                            ; 004f1c4b
    PUSH ESI                            ; 004f1c4d
    MOV dword ptr [EBX + 0x2598],0x0    ; 004f1c4e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f1c58 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f1c5d
    PUSH 0x0                            ; 004f1c60
    PUSH 0x42480000                     ; 004f1c62
    PUSH 0x32                           ; 004f1c67
    PUSH EBX                            ; 004f1c69
    MOV EAX,[0x0067b9a0]                ; 004f1c6a | CGore g_CGoreInstance | CGore * g_CGorePtr
    PUSH EAX                            ; 004f1c6f | CGore g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ee030 ; 004f1c70 | void core_gore.cpp_CGore_FUN_004ee030(CGore * this_ptr, CDemonActor * actor)
        ;   XREF to: 004ee030 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004f1c75
    PUSH EDI                            ; 004f1c78
    PUSH EBX                            ; 004f1c79
    CALL core_charactr.cpp_CCharacter_FUN_0042c3c0 ; 004f1c7a | void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f1c7f
    POP EDI                             ; 004f1c82
    POP ESI                             ; 004f1c83
    POP EBX                             ; 004f1c84
    RET                                 ; 004f1c85
    PUSH 0x1                            ; 004f1c86
        ;   Label: LAB_004f1c86
    PUSH 0xb                            ; 004f1c88
    JMP 0x004f1bf5                      ; 004f1c8a | LAB_004f1bf5
        ;   XREF to: 004f1bf5 (UNCONDITIONAL_JUMP)

