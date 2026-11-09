; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005c571e(void)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c3a30 at 005c3a97
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c571e
        ;   Label: unkafter_2d.cpp_FUN_005c571e
    TEST EDX,0x7ff00000                 ; 005c571f
    JNZ 0x005c5729                      ; 005c5725
        ;   XREF to: 005c5729 (CONDITIONAL_JUMP)  ; LAB_005c5729
    SUB EDX,EDX                         ; 005c5727
    TEST ECX,0x7ff00000                 ; 005c5729
        ;   Label: LAB_005c5729
    JNZ 0x005c5733                      ; 005c572f
        ;   XREF to: 005c5733 (CONDITIONAL_JUMP)  ; LAB_005c5733
    SUB ECX,ECX                         ; 005c5731
    MOV EBP,ECX                         ; 005c5733
        ;   Label: LAB_005c5733
    XOR EBP,EDX                         ; 005c5735
    MOV EBP,0x0                         ; 005c5737
    JS 0x005c574a                       ; 005c573c
        ;   XREF to: 005c574a (CONDITIONAL_JUMP)  ; LAB_005c574a
    CMP EDX,ECX                         ; 005c573e
    JNZ 0x005c5744                      ; 005c5740
        ;   XREF to: 005c5744 (CONDITIONAL_JUMP)  ; LAB_005c5744
    CMP EAX,EBX                         ; 005c5742
    JZ 0x005c5752                       ; 005c5744
        ;   XREF to: 005c5752 (CONDITIONAL_JUMP)  ; LAB_005c5752
        ;   Label: LAB_005c5744
    RCR ECX,0x1                         ; 005c5746
    XOR EDX,ECX                         ; 005c5748
    ADD EDX,EDX                         ; 005c574a
        ;   Label: LAB_005c574a
    SBB EBP,0x0                         ; 005c574c
    ADD EBP,EBP                         ; 005c574f
    INC EBP                             ; 005c5751
    MOV EAX,EBP                         ; 005c5752
        ;   Label: LAB_005c5752
    POP EBP                             ; 005c5754
    RET                                 ; 005c5755

