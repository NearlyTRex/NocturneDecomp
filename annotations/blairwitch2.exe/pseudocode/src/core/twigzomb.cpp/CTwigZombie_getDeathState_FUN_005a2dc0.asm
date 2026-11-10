; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_twigzomb_cpp_CTwigZombie_getDeathState_FUN_005a2dc0(CTwigZombie *this_ptr)
;
; Parameters:
; CTwigZombie *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0023
;   TerminatedCString s_Animation_005f0029
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2dc0
        ;   Label: core_twigzomb.cpp_CTwigZombie_getDeathState_FUN_005a2dc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a2dc1
    PUSH 0x5f0023                       ; 005a2dc5 | = "Death"
    ADD EBX,0x10af8                     ; 005a2dca
    PUSH EBX                            ; 005a2dd0
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a2dd1
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a2dd6
    TEST EAX,EAX                        ; 005a2dd9
    JNZ 0x005a2def                      ; 005a2ddb
        ;   XREF to: 005a2def (CONDITIONAL_JUMP)  ; LAB_005a2def
    PUSH 0x5f0029                       ; 005a2ddd | = "Animation"
    PUSH EBX                            ; 005a2de2
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a2de3
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a2de8
    TEST EAX,EAX                        ; 005a2deb
    JZ 0x005a2e1e                       ; 005a2ded
        ;   XREF to: 005a2e1e (CONDITIONAL_JUMP)  ; LAB_005a2e1e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a2def
        ;   Label: LAB_005a2def
    ADD EAX,0x2b4                       ; 005a2df3
    PUSH EAX                            ; 005a2df8
    CALL core_motion.cpp_FUN_005035c0   ; 005a2df9
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a2dfe
    ADD ESP,0x4                         ; 005a2e01
    CMP EAX,0x3                         ; 005a2e04
    JC 0x005a2e1e                       ; 005a2e07
        ;   XREF to: 005a2e1e (CONDITIONAL_JUMP)  ; LAB_005a2e1e
    JBE 0x005a2e17                      ; 005a2e09
        ;   XREF to: 005a2e17 (CONDITIONAL_JUMP)  ; LAB_005a2e17
    CMP EAX,0x4                         ; 005a2e0b
    JNZ 0x005a2e1e                      ; 005a2e0e
        ;   XREF to: 005a2e1e (CONDITIONAL_JUMP)  ; LAB_005a2e1e
    MOV EAX,0x2                         ; 005a2e10
    POP EBX                             ; 005a2e15
    RET                                 ; 005a2e16
    MOV EAX,0x1                         ; 005a2e17
        ;   Label: LAB_005a2e17
    POP EBX                             ; 005a2e1c
    RET                                 ; 005a2e1d
    XOR EAX,EAX                         ; 005a2e1e
        ;   Label: LAB_005a2e1e
    POP EBX                             ; 005a2e20
    RET                                 ; 005a2e21

