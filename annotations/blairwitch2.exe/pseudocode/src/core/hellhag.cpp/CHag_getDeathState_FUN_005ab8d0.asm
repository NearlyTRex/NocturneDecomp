; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_hellhag_cpp_CHag_getDeathState_FUN_005ab8d0(CHag *this_ptr)
;
; Parameters:
; CHag *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0c9e
;   TerminatedCString s_Animation_005f0ca4
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   core_muzzle.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab8d0
        ;   Label: core_hellhag.cpp_CHag_getDeathState_FUN_005ab8d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ab8d1
    PUSH 0x5f0c9e                       ; 005ab8d5 | = "Death"
    ADD EBX,0x10af8                     ; 005ab8da
    PUSH EBX                            ; 005ab8e0
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005ab8e1
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ab8e6
    TEST EAX,EAX                        ; 005ab8e9
    JNZ 0x005ab8ff                      ; 005ab8eb
        ;   XREF to: 005ab8ff (CONDITIONAL_JUMP)  ; LAB_005ab8ff
    PUSH 0x5f0ca4                       ; 005ab8ed | = "Animation"
    PUSH EBX                            ; 005ab8f2
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005ab8f3
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ab8f8
    TEST EAX,EAX                        ; 005ab8fb
    JZ 0x005ab92e                       ; 005ab8fd
        ;   XREF to: 005ab92e (CONDITIONAL_JUMP)  ; LAB_005ab92e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ab8ff
        ;   Label: LAB_005ab8ff
    ADD EAX,0x2b4                       ; 005ab903
    PUSH EAX                            ; 005ab908
    CALL core_motion.cpp_FUN_005035c0   ; 005ab909
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005ab90e
    ADD ESP,0x4                         ; 005ab911
    CMP EAX,0x6                         ; 005ab914
    JC 0x005ab92e                       ; 005ab917
        ;   XREF to: 005ab92e (CONDITIONAL_JUMP)  ; LAB_005ab92e
    JBE 0x005ab927                      ; 005ab919
        ;   XREF to: 005ab927 (CONDITIONAL_JUMP)  ; LAB_005ab927
    CMP EAX,0x7                         ; 005ab91b
    JNZ 0x005ab92e                      ; 005ab91e
        ;   XREF to: 005ab92e (CONDITIONAL_JUMP)  ; LAB_005ab92e
    MOV EAX,0x2                         ; 005ab920
    POP EBX                             ; 005ab925
    RET                                 ; 005ab926
    MOV EAX,0x1                         ; 005ab927
        ;   Label: LAB_005ab927
    POP EBX                             ; 005ab92c
    RET                                 ; 005ab92d
    XOR EAX,EAX                         ; 005ab92e
        ;   Label: LAB_005ab92e
    POP EBX                             ; 005ab930
    RET                                 ; 005ab931

