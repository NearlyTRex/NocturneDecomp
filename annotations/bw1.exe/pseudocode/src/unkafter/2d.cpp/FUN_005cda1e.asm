; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005cda1e(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cbd30 at 005cbd97
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005cda1e
        ;   Label: unkafter_2d.cpp_FUN_005cda1e
    TEST EDX,0x7ff00000                 ; 005cda1f
    JNZ 0x005cda29                      ; 005cda25
        ;   XREF to: 005cda29 (CONDITIONAL_JUMP)  ; LAB_005cda29
    SUB EDX,EDX                         ; 005cda27
    TEST ECX,0x7ff00000                 ; 005cda29
        ;   Label: LAB_005cda29
    JNZ 0x005cda33                      ; 005cda2f
        ;   XREF to: 005cda33 (CONDITIONAL_JUMP)  ; LAB_005cda33
    SUB ECX,ECX                         ; 005cda31
    MOV EBP,ECX                         ; 005cda33
        ;   Label: LAB_005cda33
    XOR EBP,EDX                         ; 005cda35
    MOV EBP,0x0                         ; 005cda37
    JS 0x005cda4a                       ; 005cda3c
        ;   XREF to: 005cda4a (CONDITIONAL_JUMP)  ; LAB_005cda4a
    CMP EDX,ECX                         ; 005cda3e
    JNZ 0x005cda44                      ; 005cda40
        ;   XREF to: 005cda44 (CONDITIONAL_JUMP)  ; LAB_005cda44
    CMP EAX,EBX                         ; 005cda42
    JZ 0x005cda52                       ; 005cda44
        ;   XREF to: 005cda52 (CONDITIONAL_JUMP)  ; LAB_005cda52
        ;   Label: LAB_005cda44
    RCR ECX,0x1                         ; 005cda46
    XOR EDX,ECX                         ; 005cda48
    ADD EDX,EDX                         ; 005cda4a
        ;   Label: LAB_005cda4a
    SBB EBP,0x0                         ; 005cda4c
    ADD EBP,EBP                         ; 005cda4f
    INC EBP                             ; 005cda51
    MOV EAX,EBP                         ; 005cda52
        ;   Label: LAB_005cda52
    POP EBP                             ; 005cda54
    RET                                 ; 005cda55

