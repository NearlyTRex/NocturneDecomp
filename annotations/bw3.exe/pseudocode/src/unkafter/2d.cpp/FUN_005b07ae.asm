; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005b07ae(void)
;
;
; XREF[1]:
;   unkafter_asgaya.cpp_FUN_005aeba0 at 005aec07
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b07ae
        ;   Label: unkafter_2d.cpp_FUN_005b07ae
    TEST EDX,0x7ff00000                 ; 005b07af
    JNZ 0x005b07b9                      ; 005b07b5
        ;   XREF to: 005b07b9 (CONDITIONAL_JUMP)  ; LAB_005b07b9
    SUB EDX,EDX                         ; 005b07b7
    TEST ECX,0x7ff00000                 ; 005b07b9
        ;   Label: LAB_005b07b9
    JNZ 0x005b07c3                      ; 005b07bf
        ;   XREF to: 005b07c3 (CONDITIONAL_JUMP)  ; LAB_005b07c3
    SUB ECX,ECX                         ; 005b07c1
    MOV EBP,ECX                         ; 005b07c3
        ;   Label: LAB_005b07c3
    XOR EBP,EDX                         ; 005b07c5
    MOV EBP,0x0                         ; 005b07c7
    JS 0x005b07da                       ; 005b07cc
        ;   XREF to: 005b07da (CONDITIONAL_JUMP)  ; LAB_005b07da
    CMP EDX,ECX                         ; 005b07ce
    JNZ 0x005b07d4                      ; 005b07d0
        ;   XREF to: 005b07d4 (CONDITIONAL_JUMP)  ; LAB_005b07d4
    CMP EAX,EBX                         ; 005b07d2
    JZ 0x005b07e2                       ; 005b07d4
        ;   XREF to: 005b07e2 (CONDITIONAL_JUMP)  ; LAB_005b07e2
        ;   Label: LAB_005b07d4
    RCR ECX,0x1                         ; 005b07d6
    XOR EDX,ECX                         ; 005b07d8
    ADD EDX,EDX                         ; 005b07da
        ;   Label: LAB_005b07da
    SBB EBP,0x0                         ; 005b07dc
    ADD EBP,EBP                         ; 005b07df
    INC EBP                             ; 005b07e1
    MOV EAX,EBP                         ; 005b07e2
        ;   Label: LAB_005b07e2
    POP EBP                             ; 005b07e4
    RET                                 ; 005b07e5

