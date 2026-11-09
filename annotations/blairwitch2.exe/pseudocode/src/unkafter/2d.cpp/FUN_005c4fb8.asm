; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005c4fb8(undefined4 param_1)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005c50b8 at 005c50de
;   unkafter_morph.cpp_FUN_005c30d8 at 005c31f0
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c4df0
;   unkafter_morph.cpp_FUN_005c4e44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4fb8
        ;   Label: unkafter_2d.cpp_FUN_005c4fb8
    PUSH 0x2                            ; 005c4fb9
    CALL unkafter_morph.cpp_FUN_005c4e44 ; 005c4fbb
        ;   XREF to: 005c4e44 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4e44()
    ADD ESP,0x4                         ; 005c4fc0
    MOV EBX,EAX                         ; 005c4fc3
    CMP EAX,0x1                         ; 005c4fc5
    JZ 0x005c4ff0                       ; 005c4fc8
        ;   XREF to: 005c4ff0 (CONDITIONAL_JUMP)  ; LAB_005c4ff0
    CMP EAX,0x2                         ; 005c4fca
    JZ 0x005c4ff0                       ; 005c4fcd
        ;   XREF to: 005c4ff0 (CONDITIONAL_JUMP)  ; LAB_005c4ff0
    CMP EAX,0x3                         ; 005c4fcf
    JZ 0x005c4ff0                       ; 005c4fd2
        ;   XREF to: 005c4ff0 (CONDITIONAL_JUMP)  ; LAB_005c4ff0
    PUSH 0x2                            ; 005c4fd4
    PUSH 0x2                            ; 005c4fd6
    CALL unkafter_morph.cpp_FUN_005c4df0 ; 005c4fd8
        ;   XREF to: 005c4df0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4df0()
    ADD ESP,0x8                         ; 005c4fdd
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c4fe0
    PUSH EDX                            ; 005c4fe4
    PUSH 0x2                            ; 005c4fe5
    CALL EBX                            ; 005c4fe7
    ADD ESP,0x8                         ; 005c4fe9
    XOR EAX,EAX                         ; 005c4fec
    POP EBX                             ; 005c4fee
    RET                                 ; 005c4fef
    MOV EAX,0xffffffff                  ; 005c4ff0
        ;   Label: LAB_005c4ff0
    POP EBX                             ; 005c4ff5
    RET                                 ; 005c4ff6

