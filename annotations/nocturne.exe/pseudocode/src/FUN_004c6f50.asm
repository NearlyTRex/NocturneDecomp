; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c6f50(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGhoul_00587a19
;   TerminatedCString s_CTVBat_00587a20
;   TerminatedCString s_CBatCreature_00587a27
;   TerminatedCString s_CWerewolf_00587a34
;   TerminatedCString s_CSvetlana_00587a3e
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6f50
        ;   Label: FUN_004c6f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6f51
    PUSH EBX                            ; 004c6f55
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c6f56
    CALL dword ptr [EAX + 0xd8]         ; 004c6f5c
    ADD ESP,0x4                         ; 004c6f62
    TEST EAX,EAX                        ; 004c6f65
    JZ 0x004c6f6d                       ; 004c6f67
        ;   XREF to: 004c6f6d (CONDITIONAL_JUMP)  ; LAB_004c6f6d
    XOR EAX,EAX                         ; 004c6f69
    POP EBX                             ; 004c6f6b
        ;   Label: LAB_004c6f6b
    RET                                 ; 004c6f6c
    PUSH 0x587a19                       ; 004c6f6d | = "CGhoul"
        ;   Label: LAB_004c6f6d
    PUSH EBX                            ; 004c6f72
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6f73
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c6f78
    TEST EAX,EAX                        ; 004c6f7b
    JZ 0x004c6f86                       ; 004c6f7d
        ;   XREF to: 004c6f86 (CONDITIONAL_JUMP)  ; LAB_004c6f86
    MOV EAX,0x1                         ; 004c6f7f
    POP EBX                             ; 004c6f84
    RET                                 ; 004c6f85
    PUSH 0x587a20                       ; 004c6f86 | = "CTVBat"
        ;   Label: LAB_004c6f86
    PUSH EBX                            ; 004c6f8b
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6f8c
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c6f91
    TEST EAX,EAX                        ; 004c6f94
    JZ 0x004c6f9f                       ; 004c6f96
        ;   XREF to: 004c6f9f (CONDITIONAL_JUMP)  ; LAB_004c6f9f
    MOV EAX,0x1                         ; 004c6f98
    POP EBX                             ; 004c6f9d
    RET                                 ; 004c6f9e
    PUSH 0x587a27                       ; 004c6f9f | = "CBatCreature"
        ;   Label: LAB_004c6f9f
    PUSH EBX                            ; 004c6fa4
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6fa5
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c6faa
    TEST EAX,EAX                        ; 004c6fad
    JZ 0x004c6fb8                       ; 004c6faf
        ;   XREF to: 004c6fb8 (CONDITIONAL_JUMP)  ; LAB_004c6fb8
    MOV EAX,0x1                         ; 004c6fb1
    POP EBX                             ; 004c6fb6
    RET                                 ; 004c6fb7
    PUSH 0x587a34                       ; 004c6fb8 | = "CWerewolf"
        ;   Label: LAB_004c6fb8
    PUSH EBX                            ; 004c6fbd
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6fbe
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c6fc3
    TEST EAX,EAX                        ; 004c6fc6
    JZ 0x004c6fd1                       ; 004c6fc8
        ;   XREF to: 004c6fd1 (CONDITIONAL_JUMP)  ; LAB_004c6fd1
    MOV EAX,0x1                         ; 004c6fca
    POP EBX                             ; 004c6fcf
    RET                                 ; 004c6fd0
    PUSH 0x587a3e                       ; 004c6fd1 | = "CSvetlana"
        ;   Label: LAB_004c6fd1
    PUSH EBX                            ; 004c6fd6
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6fd7
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c6fdc
    TEST EAX,EAX                        ; 004c6fdf
    JZ 0x004c6f6b                       ; 004c6fe1
        ;   XREF to: 004c6f6b (CONDITIONAL_JUMP)  ; LAB_004c6f6b
    MOV EAX,0x1                         ; 004c6fe3
    POP EBX                             ; 004c6fe8
    RET                                 ; 004c6fe9

