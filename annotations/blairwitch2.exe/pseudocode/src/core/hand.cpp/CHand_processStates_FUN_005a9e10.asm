; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hand_cpp_CHand_processStates_FUN_005a9e10(CHand *this_ptr,float delta_time,int mode)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_hand.cpp_CHand_ctor_FUN_005a9c00 at 005a9cca
;
; Referenced Globals:
;   TerminatedCString s_Sleeping_005f0a1c
;   TerminatedCString s_Sleeping_005f0a25
;   TerminatedCString s_MeleeAttack_005f0a2e
;   TerminatedCString s_MeleeAttack_005f0a3a
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059d650
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkafter_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9e10
        ;   Label: core_hand.cpp_CHand_processStates_FUN_005a9e10
    PUSH ESI                            ; 005a9e11
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a9e12
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a9e16
    TEST EBX,EBX                        ; 005a9e1a
    JNZ 0x005a9e3f                      ; 005a9e1c
        ;   XREF to: 005a9e3f (CONDITIONAL_JUMP)  ; LAB_005a9e3f
    LEA EAX,[ESI + 0x10af8]             ; 005a9e1e
        ;   Label: LAB_005a9e1e
    TEST EBX,EBX                        ; 005a9e24
    JBE 0x005a9e4f                      ; 005a9e26
        ;   XREF to: 005a9e4f (CONDITIONAL_JUMP)  ; LAB_005a9e4f
    CMP EBX,0x1                         ; 005a9e28
    JZ 0x005a9e5f                       ; 005a9e2b
        ;   XREF to: 005a9e5f (CONDITIONAL_JUMP)  ; LAB_005a9e5f
    LEA EAX,[ESI + 0x10af8]             ; 005a9e2d
        ;   Label: LAB_005a9e2d
    TEST EBX,EBX                        ; 005a9e33
    JBE 0x005a9e88                      ; 005a9e35
        ;   XREF to: 005a9e88 (CONDITIONAL_JUMP)  ; LAB_005a9e88
    CMP EBX,0x1                         ; 005a9e37
    JZ 0x005a9e99                       ; 005a9e3a
        ;   XREF to: 005a9e99 (CONDITIONAL_JUMP)  ; LAB_005a9e99
    POP ESI                             ; 005a9e3c
        ;   Label: LAB_005a9e3c
    POP EBX                             ; 005a9e3d
    RET                                 ; 005a9e3e
    PUSH EBX                            ; 005a9e3f
        ;   Label: LAB_005a9e3f
    PUSH dword ptr [ESP + 0x14]         ; 005a9e40
    PUSH ESI                            ; 005a9e44
    CALL unkafter_basicene.cpp_FUN_0059e8c0 ; 005a9e45
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a9e4a
    JMP 0x005a9e1e                      ; 005a9e4d
        ;   XREF to: 005a9e1e (UNCONDITIONAL_JUMP)  ; LAB_005a9e1e
    PUSH 0x5f0a1c                       ; 005a9e4f | = "Sleeping"
        ;   Label: LAB_005a9e4f
    PUSH EAX                            ; 005a9e54
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005a9e55
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a9e5a
    JMP 0x005a9e2d                      ; 005a9e5d
        ;   XREF to: 005a9e2d (UNCONDITIONAL_JUMP)  ; LAB_005a9e2d
    PUSH 0x5f0a25                       ; 005a9e5f | = "Sleeping"
        ;   Label: LAB_005a9e5f
    PUSH EAX                            ; 005a9e64
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a9e65
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a9e6a
    TEST EAX,EAX                        ; 005a9e6d
    JZ 0x005a9e2d                       ; 005a9e6f
        ;   XREF to: 005a9e2d (CONDITIONAL_JUMP)  ; LAB_005a9e2d
    PUSH dword ptr [ESP + 0x10]         ; 005a9e71
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a9e75
    PUSH ESI                            ; 005a9e7b
    CALL dword ptr [EAX + 0x184]        ; 005a9e7c
    ADD ESP,0x8                         ; 005a9e82
    POP ESI                             ; 005a9e85
    POP EBX                             ; 005a9e86
    RET                                 ; 005a9e87
    PUSH 0x5f0a2e                       ; 005a9e88 | = "MeleeAttack"
        ;   Label: LAB_005a9e88
    PUSH EAX                            ; 005a9e8d
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005a9e8e
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a9e93
    POP ESI                             ; 005a9e96
    POP EBX                             ; 005a9e97
    RET                                 ; 005a9e98
    PUSH 0x5f0a3a                       ; 005a9e99 | = "MeleeAttack"
        ;   Label: LAB_005a9e99
    PUSH EAX                            ; 005a9e9e
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a9e9f
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a9ea4
    TEST EAX,EAX                        ; 005a9ea7
    JZ 0x005a9e3c                       ; 005a9ea9
        ;   XREF to: 005a9e3c (CONDITIONAL_JUMP)  ; LAB_005a9e3c
    PUSH dword ptr [ESP + 0x10]         ; 005a9eab
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a9eaf
    PUSH ESI                            ; 005a9eb5
    CALL dword ptr [EAX + 0x180]        ; 005a9eb6
    ADD ESP,0x8                         ; 005a9ebc
    POP ESI                             ; 005a9ebf
    POP EBX                             ; 005a9ec0
    RET                                 ; 005a9ec1

