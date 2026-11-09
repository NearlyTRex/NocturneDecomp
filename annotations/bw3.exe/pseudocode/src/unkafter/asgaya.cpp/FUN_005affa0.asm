; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_asgaya_cpp_FUN_005affa0(void)
;
;
; XREF[3]:
;   unkafter_2d.cpp_FUN_005b0088 at 005b00fa
;   unkafter_2d.cpp_FUN_005b0148 at 005b01a5
;   unkafter_2d.cpp_FUN_005b020c at 005b020c
;
; Called Functions:
;   unkafter_asgaya.cpp_FUN_005afed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005affa0
        ;   Label: unkafter_asgaya.cpp_FUN_005affa0
    PUSH 0x4                            ; 005affa1
    CALL unkafter_asgaya.cpp_FUN_005afed4 ; 005affa3
        ;   XREF to: 005afed4 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afed4()
    ADD ESP,0x4                         ; 005affa8
    PUSH 0x7                            ; 005affab
    MOV EBX,EAX                         ; 005affad
    CALL unkafter_asgaya.cpp_FUN_005afed4 ; 005affaf
        ;   XREF to: 005afed4 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afed4()
    ADD ESP,0x4                         ; 005affb4
    CMP EBX,0x2                         ; 005affb7
    JZ 0x005affc1                       ; 005affba
        ;   XREF to: 005affc1 (CONDITIONAL_JUMP)  ; LAB_005affc1
    CMP EBX,0x3                         ; 005affbc
    JNZ 0x005affcb                      ; 005affbf
        ;   XREF to: 005affcb (CONDITIONAL_JUMP)  ; LAB_005affcb
    CMP EAX,0x2                         ; 005affc1
        ;   Label: LAB_005affc1
    JZ 0x005affd2                       ; 005affc4
        ;   XREF to: 005affd2 (CONDITIONAL_JUMP)  ; LAB_005affd2
    CMP EAX,0x3                         ; 005affc6
    JZ 0x005affd2                       ; 005affc9
        ;   XREF to: 005affd2 (CONDITIONAL_JUMP)  ; LAB_005affd2
    MOV EAX,0x1                         ; 005affcb
        ;   Label: LAB_005affcb
    POP EBX                             ; 005affd0
    RET                                 ; 005affd1
    XOR EAX,EAX                         ; 005affd2
        ;   Label: LAB_005affd2
    POP EBX                             ; 005affd4
    RET                                 ; 005affd5

