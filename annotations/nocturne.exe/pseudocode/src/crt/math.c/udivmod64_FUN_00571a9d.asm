; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulonglong __watcallRegister crt_math_c_udivmod64_FUN_00571a9d(ulonglong dividend,ulonglong divisor)
;
;
; XREF[1]:
;   crt_stdlib.c_i64toa_FUN_0056f3e0 at 0056f42f
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 00571a9d
        ;   Label: crt_math.c_udivmod64_FUN_00571a9d
    JNZ 0x00571abb                      ; 00571a9f
        ;   XREF to: 00571abb (CONDITIONAL_JUMP)  ; LAB_00571abb
    DEC EBX                             ; 00571aa1
    JZ 0x00571aba                       ; 00571aa2
        ;   XREF to: 00571aba (CONDITIONAL_JUMP)  ; LAB_00571aba
    INC EBX                             ; 00571aa4
    CMP EBX,EDX                         ; 00571aa5
    JA 0x00571ab2                       ; 00571aa7
        ;   XREF to: 00571ab2 (CONDITIONAL_JUMP)  ; LAB_00571ab2
    MOV ECX,EAX                         ; 00571aa9
    MOV EAX,EDX                         ; 00571aab
    SUB EDX,EDX                         ; 00571aad
    DIV EBX                             ; 00571aaf
    XCHG EAX,ECX                        ; 00571ab1
    DIV EBX                             ; 00571ab2
        ;   Label: LAB_00571ab2
    MOV EBX,EDX                         ; 00571ab4
    MOV EDX,ECX                         ; 00571ab6
    SUB ECX,ECX                         ; 00571ab8
    RET                                 ; 00571aba
        ;   Label: LAB_00571aba
    CMP ECX,EDX                         ; 00571abb
        ;   Label: LAB_00571abb
    JC 0x00571adb                       ; 00571abd
        ;   XREF to: 00571adb (CONDITIONAL_JUMP)  ; LAB_00571adb
    JNZ 0x00571ad3                      ; 00571abf
        ;   XREF to: 00571ad3 (CONDITIONAL_JUMP)  ; LAB_00571ad3
    CMP EBX,EAX                         ; 00571ac1
    JA 0x00571ad3                       ; 00571ac3
        ;   XREF to: 00571ad3 (CONDITIONAL_JUMP)  ; LAB_00571ad3
    SUB EAX,EBX                         ; 00571ac5
    MOV EBX,EAX                         ; 00571ac7
    SUB ECX,ECX                         ; 00571ac9
    SUB EDX,EDX                         ; 00571acb
    MOV EAX,0x1                         ; 00571acd
    RET                                 ; 00571ad2
    SUB ECX,ECX                         ; 00571ad3
        ;   Label: LAB_00571ad3
    SUB EBX,EBX                         ; 00571ad5
    XCHG EAX,EBX                        ; 00571ad7
    XCHG EDX,ECX                        ; 00571ad8
    RET                                 ; 00571ada
    PUSH EBP                            ; 00571adb
        ;   Label: LAB_00571adb
    PUSH ESI                            ; 00571adc
    PUSH EDI                            ; 00571add
    SUB ESI,ESI                         ; 00571ade
    MOV EDI,ESI                         ; 00571ae0
    MOV EBP,ESI                         ; 00571ae2
    ADD EBX,EBX                         ; 00571ae4
        ;   Label: LAB_00571ae4
    ADC ECX,ECX                         ; 00571ae6
    JC 0x00571afd                       ; 00571ae8
        ;   XREF to: 00571afd (CONDITIONAL_JUMP)  ; LAB_00571afd
    INC EBP                             ; 00571aea
    CMP ECX,EDX                         ; 00571aeb
    JC 0x00571ae4                       ; 00571aed
        ;   XREF to: 00571ae4 (CONDITIONAL_JUMP)  ; LAB_00571ae4
    JA 0x00571af5                       ; 00571aef
        ;   XREF to: 00571af5 (CONDITIONAL_JUMP)  ; LAB_00571af5
    CMP EBX,EAX                         ; 00571af1
    JBE 0x00571ae4                      ; 00571af3
        ;   XREF to: 00571ae4 (CONDITIONAL_JUMP)  ; LAB_00571ae4
    CLC                                 ; 00571af5
        ;   Label: LAB_00571af5
    ADC ESI,ESI                         ; 00571af6
        ;   Label: LAB_00571af6
    ADC EDI,EDI                         ; 00571af8
    DEC EBP                             ; 00571afa
    JS 0x00571b1f                       ; 00571afb
        ;   XREF to: 00571b1f (CONDITIONAL_JUMP)  ; LAB_00571b1f
    RCR ECX,0x1                         ; 00571afd
        ;   Label: LAB_00571afd
    RCR EBX,0x1                         ; 00571aff
    SUB EAX,EBX                         ; 00571b01
    SBB EDX,ECX                         ; 00571b03
    CMC                                 ; 00571b05
    JC 0x00571af6                       ; 00571b06
        ;   XREF to: 00571af6 (CONDITIONAL_JUMP)  ; LAB_00571af6
    ADD ESI,ESI                         ; 00571b08
        ;   Label: LAB_00571b08
    ADC EDI,EDI                         ; 00571b0a
    DEC EBP                             ; 00571b0c
    JS 0x00571b1b                       ; 00571b0d
        ;   XREF to: 00571b1b (CONDITIONAL_JUMP)  ; LAB_00571b1b
    SHR ECX,0x1                         ; 00571b0f
    RCR EBX,0x1                         ; 00571b11
    ADD EAX,EBX                         ; 00571b13
    ADC EDX,ECX                         ; 00571b15
    JNC 0x00571b08                      ; 00571b17
        ;   XREF to: 00571b08 (CONDITIONAL_JUMP)  ; LAB_00571b08
    JMP 0x00571af6                      ; 00571b19
        ;   XREF to: 00571af6 (UNCONDITIONAL_JUMP)  ; LAB_00571af6
    ADD EAX,EBX                         ; 00571b1b
        ;   Label: LAB_00571b1b
    ADC EDX,ECX                         ; 00571b1d
    MOV EBX,EAX                         ; 00571b1f
        ;   Label: LAB_00571b1f
    MOV ECX,EDX                         ; 00571b21
    MOV EAX,ESI                         ; 00571b23
    MOV EDX,EDI                         ; 00571b25
    POP EDI                             ; 00571b27
    POP ESI                             ; 00571b28
    POP EBP                             ; 00571b29
    RET                                 ; 00571b2a

