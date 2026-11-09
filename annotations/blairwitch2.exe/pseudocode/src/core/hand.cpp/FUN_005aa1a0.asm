; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hand_cpp_FUN_005aa1a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0a67
;   TerminatedCString s_Animation_005f0a6d
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa1a0
        ;   Label: core_hand.cpp_FUN_005aa1a0
    PUSH ESI                            ; 005aa1a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005aa1a2
    PUSH 0x5f0a67                       ; 005aa1a6 | = "Death"
    LEA EBX,[ESI + 0x10af8]             ; 005aa1ab
    PUSH EBX                            ; 005aa1b1
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005aa1b2
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aa1b7
    TEST EAX,EAX                        ; 005aa1ba
    JZ 0x005aa1c1                       ; 005aa1bc
        ;   XREF to: 005aa1c1 (CONDITIONAL_JUMP)  ; LAB_005aa1c1
    POP ESI                             ; 005aa1be
        ;   Label: LAB_005aa1be
    POP EBX                             ; 005aa1bf
    RET                                 ; 005aa1c0
    PUSH 0x5f0a6d                       ; 005aa1c1 | = "Animation"
        ;   Label: LAB_005aa1c1
    PUSH EBX                            ; 005aa1c6
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005aa1c7
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aa1cc
    TEST EAX,EAX                        ; 005aa1cf
    JNZ 0x005aa1be                      ; 005aa1d1
        ;   XREF to: 005aa1be (CONDITIONAL_JUMP)  ; LAB_005aa1be
    PUSH ESI                            ; 005aa1d3
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005aa1d4
    CALL dword ptr [EAX + 0x17c]        ; 005aa1da
    ADD ESP,0x4                         ; 005aa1e0
    POP ESI                             ; 005aa1e3
    POP EBX                             ; 005aa1e4
    RET                                 ; 005aa1e5

