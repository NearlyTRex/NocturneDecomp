; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005b9d7b(void)
;
;
; XREF[2]:
;   FUN_005b9d26 at 005b9d2e
;   FUN_005c2200 at 005c224f
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005b9d7b
        ;   Label: FUN_005b9d7b
    JNZ 0x005b9d99                      ; 005b9d7d
        ;   XREF to: 005b9d99 (CONDITIONAL_JUMP)  ; LAB_005b9d99
    DEC EBX                             ; 005b9d7f
    JZ 0x005b9d98                       ; 005b9d80
        ;   XREF to: 005b9d98 (CONDITIONAL_JUMP)  ; LAB_005b9d98
    INC EBX                             ; 005b9d82
    CMP EBX,EDX                         ; 005b9d83
    JA 0x005b9d90                       ; 005b9d85
        ;   XREF to: 005b9d90 (CONDITIONAL_JUMP)  ; LAB_005b9d90
    MOV ECX,EAX                         ; 005b9d87
    MOV EAX,EDX                         ; 005b9d89
    SUB EDX,EDX                         ; 005b9d8b
    DIV EBX                             ; 005b9d8d
    XCHG EAX,ECX                        ; 005b9d8f
    DIV EBX                             ; 005b9d90
        ;   Label: LAB_005b9d90
    MOV EBX,EDX                         ; 005b9d92
    MOV EDX,ECX                         ; 005b9d94
    SUB ECX,ECX                         ; 005b9d96
    RET                                 ; 005b9d98
        ;   Label: LAB_005b9d98
    CMP ECX,EDX                         ; 005b9d99
        ;   Label: LAB_005b9d99
    JC 0x005b9db9                       ; 005b9d9b
        ;   XREF to: 005b9db9 (CONDITIONAL_JUMP)  ; LAB_005b9db9
    JNZ 0x005b9db1                      ; 005b9d9d
        ;   XREF to: 005b9db1 (CONDITIONAL_JUMP)  ; LAB_005b9db1
    CMP EBX,EAX                         ; 005b9d9f
    JA 0x005b9db1                       ; 005b9da1
        ;   XREF to: 005b9db1 (CONDITIONAL_JUMP)  ; LAB_005b9db1
    SUB EAX,EBX                         ; 005b9da3
    MOV EBX,EAX                         ; 005b9da5
    SUB ECX,ECX                         ; 005b9da7
    SUB EDX,EDX                         ; 005b9da9
    MOV EAX,0x1                         ; 005b9dab
    RET                                 ; 005b9db0
    SUB ECX,ECX                         ; 005b9db1
        ;   Label: LAB_005b9db1
    SUB EBX,EBX                         ; 005b9db3
    XCHG EAX,EBX                        ; 005b9db5
    XCHG EDX,ECX                        ; 005b9db6
    RET                                 ; 005b9db8
    PUSH EBP                            ; 005b9db9
        ;   Label: LAB_005b9db9
    PUSH ESI                            ; 005b9dba
    PUSH EDI                            ; 005b9dbb
    SUB ESI,ESI                         ; 005b9dbc
    MOV EDI,ESI                         ; 005b9dbe
    MOV EBP,ESI                         ; 005b9dc0
    ADD EBX,EBX                         ; 005b9dc2
        ;   Label: LAB_005b9dc2
    ADC ECX,ECX                         ; 005b9dc4
    JC 0x005b9ddb                       ; 005b9dc6
        ;   XREF to: 005b9ddb (CONDITIONAL_JUMP)  ; LAB_005b9ddb
    INC EBP                             ; 005b9dc8
    CMP ECX,EDX                         ; 005b9dc9
    JC 0x005b9dc2                       ; 005b9dcb
        ;   XREF to: 005b9dc2 (CONDITIONAL_JUMP)  ; LAB_005b9dc2
    JA 0x005b9dd3                       ; 005b9dcd
        ;   XREF to: 005b9dd3 (CONDITIONAL_JUMP)  ; LAB_005b9dd3
    CMP EBX,EAX                         ; 005b9dcf
    JBE 0x005b9dc2                      ; 005b9dd1
        ;   XREF to: 005b9dc2 (CONDITIONAL_JUMP)  ; LAB_005b9dc2
    CLC                                 ; 005b9dd3
        ;   Label: LAB_005b9dd3
    ADC ESI,ESI                         ; 005b9dd4
        ;   Label: LAB_005b9dd4
    ADC EDI,EDI                         ; 005b9dd6
    DEC EBP                             ; 005b9dd8
    JS 0x005b9dfd                       ; 005b9dd9
        ;   XREF to: 005b9dfd (CONDITIONAL_JUMP)  ; LAB_005b9dfd
    RCR ECX,0x1                         ; 005b9ddb
        ;   Label: LAB_005b9ddb
    RCR EBX,0x1                         ; 005b9ddd
    SUB EAX,EBX                         ; 005b9ddf
    SBB EDX,ECX                         ; 005b9de1
    CMC                                 ; 005b9de3
    JC 0x005b9dd4                       ; 005b9de4
        ;   XREF to: 005b9dd4 (CONDITIONAL_JUMP)  ; LAB_005b9dd4
    ADD ESI,ESI                         ; 005b9de6
        ;   Label: LAB_005b9de6
    ADC EDI,EDI                         ; 005b9de8
    DEC EBP                             ; 005b9dea
    JS 0x005b9df9                       ; 005b9deb
        ;   XREF to: 005b9df9 (CONDITIONAL_JUMP)  ; LAB_005b9df9
    SHR ECX,0x1                         ; 005b9ded
    RCR EBX,0x1                         ; 005b9def
    ADD EAX,EBX                         ; 005b9df1
    ADC EDX,ECX                         ; 005b9df3
    JNC 0x005b9de6                      ; 005b9df5
        ;   XREF to: 005b9de6 (CONDITIONAL_JUMP)  ; LAB_005b9de6
    JMP 0x005b9dd4                      ; 005b9df7
        ;   XREF to: 005b9dd4 (UNCONDITIONAL_JUMP)  ; LAB_005b9dd4
    ADD EAX,EBX                         ; 005b9df9
        ;   Label: LAB_005b9df9
    ADC EDX,ECX                         ; 005b9dfb
    MOV EBX,EAX                         ; 005b9dfd
        ;   Label: LAB_005b9dfd
    MOV ECX,EDX                         ; 005b9dff
    MOV EAX,ESI                         ; 005b9e01
    MOV EDX,EDI                         ; 005b9e03
    POP EDI                             ; 005b9e05
    POP ESI                             ; 005b9e06
    POP EBP                             ; 005b9e07
    RET                                 ; 005b9e08

