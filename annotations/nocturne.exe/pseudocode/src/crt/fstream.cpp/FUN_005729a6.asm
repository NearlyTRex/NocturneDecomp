; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_fstream_cpp_FUN_005729a6(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00570630 at 00570697
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005729a6
        ;   Label: crt_fstream.cpp_FUN_005729a6
    TEST EDX,0x7ff00000                 ; 005729a7
    JNZ 0x005729b1                      ; 005729ad
        ;   XREF to: 005729b1 (CONDITIONAL_JUMP)  ; LAB_005729b1
    SUB EDX,EDX                         ; 005729af
    TEST ECX,0x7ff00000                 ; 005729b1
        ;   Label: LAB_005729b1
    JNZ 0x005729bb                      ; 005729b7
        ;   XREF to: 005729bb (CONDITIONAL_JUMP)  ; LAB_005729bb
    SUB ECX,ECX                         ; 005729b9
    MOV EBP,ECX                         ; 005729bb
        ;   Label: LAB_005729bb
    XOR EBP,EDX                         ; 005729bd
    MOV EBP,0x0                         ; 005729bf
    JS 0x005729d2                       ; 005729c4
        ;   XREF to: 005729d2 (CONDITIONAL_JUMP)  ; LAB_005729d2
    CMP EDX,ECX                         ; 005729c6
    JNZ 0x005729cc                      ; 005729c8
        ;   XREF to: 005729cc (CONDITIONAL_JUMP)  ; LAB_005729cc
    CMP EAX,EBX                         ; 005729ca
    JZ 0x005729da                       ; 005729cc
        ;   XREF to: 005729da (CONDITIONAL_JUMP)  ; LAB_005729da
        ;   Label: LAB_005729cc
    RCR ECX,0x1                         ; 005729ce
    XOR EDX,ECX                         ; 005729d0
    ADD EDX,EDX                         ; 005729d2
        ;   Label: LAB_005729d2
    SBB EBP,0x0                         ; 005729d4
    ADD EBP,EBP                         ; 005729d7
    INC EBP                             ; 005729d9
    MOV EAX,EBP                         ; 005729da
        ;   Label: LAB_005729da
    POP EBP                             ; 005729dc
    RET                                 ; 005729dd

