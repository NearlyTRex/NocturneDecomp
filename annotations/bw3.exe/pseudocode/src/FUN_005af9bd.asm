; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005af9bd(void)
;
;
; XREF[1]:
;   FUN_005ad370 at 005ad3bf
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005af9bd
        ;   Label: FUN_005af9bd
    JNZ 0x005af9db                      ; 005af9bf
        ;   XREF to: 005af9db (CONDITIONAL_JUMP)  ; LAB_005af9db
    DEC EBX                             ; 005af9c1
    JZ 0x005af9da                       ; 005af9c2
        ;   XREF to: 005af9da (CONDITIONAL_JUMP)  ; LAB_005af9da
    INC EBX                             ; 005af9c4
    CMP EBX,EDX                         ; 005af9c5
    JA 0x005af9d2                       ; 005af9c7
        ;   XREF to: 005af9d2 (CONDITIONAL_JUMP)  ; LAB_005af9d2
    MOV ECX,EAX                         ; 005af9c9
    MOV EAX,EDX                         ; 005af9cb
    SUB EDX,EDX                         ; 005af9cd
    DIV EBX                             ; 005af9cf
    XCHG EAX,ECX                        ; 005af9d1
    DIV EBX                             ; 005af9d2
        ;   Label: LAB_005af9d2
    MOV EBX,EDX                         ; 005af9d4
    MOV EDX,ECX                         ; 005af9d6
    SUB ECX,ECX                         ; 005af9d8
    RET                                 ; 005af9da
        ;   Label: LAB_005af9da
    CMP ECX,EDX                         ; 005af9db
        ;   Label: LAB_005af9db
    JC 0x005af9fb                       ; 005af9dd
        ;   XREF to: 005af9fb (CONDITIONAL_JUMP)  ; LAB_005af9fb
    JNZ 0x005af9f3                      ; 005af9df
        ;   XREF to: 005af9f3 (CONDITIONAL_JUMP)  ; LAB_005af9f3
    CMP EBX,EAX                         ; 005af9e1
    JA 0x005af9f3                       ; 005af9e3
        ;   XREF to: 005af9f3 (CONDITIONAL_JUMP)  ; LAB_005af9f3
    SUB EAX,EBX                         ; 005af9e5
    MOV EBX,EAX                         ; 005af9e7
    SUB ECX,ECX                         ; 005af9e9
    SUB EDX,EDX                         ; 005af9eb
    MOV EAX,0x1                         ; 005af9ed
    RET                                 ; 005af9f2
    SUB ECX,ECX                         ; 005af9f3
        ;   Label: LAB_005af9f3
    SUB EBX,EBX                         ; 005af9f5
    XCHG EAX,EBX                        ; 005af9f7
    XCHG EDX,ECX                        ; 005af9f8
    RET                                 ; 005af9fa
    PUSH EBP                            ; 005af9fb
        ;   Label: LAB_005af9fb
    PUSH ESI                            ; 005af9fc
    PUSH EDI                            ; 005af9fd
    SUB ESI,ESI                         ; 005af9fe
    MOV EDI,ESI                         ; 005afa00
    MOV EBP,ESI                         ; 005afa02
    ADD EBX,EBX                         ; 005afa04
        ;   Label: LAB_005afa04
    ADC ECX,ECX                         ; 005afa06
    JC 0x005afa1d                       ; 005afa08
        ;   XREF to: 005afa1d (CONDITIONAL_JUMP)  ; LAB_005afa1d
    INC EBP                             ; 005afa0a
    CMP ECX,EDX                         ; 005afa0b
    JC 0x005afa04                       ; 005afa0d
        ;   XREF to: 005afa04 (CONDITIONAL_JUMP)  ; LAB_005afa04
    JA 0x005afa15                       ; 005afa0f
        ;   XREF to: 005afa15 (CONDITIONAL_JUMP)  ; LAB_005afa15
    CMP EBX,EAX                         ; 005afa11
    JBE 0x005afa04                      ; 005afa13
        ;   XREF to: 005afa04 (CONDITIONAL_JUMP)  ; LAB_005afa04
    CLC                                 ; 005afa15
        ;   Label: LAB_005afa15
    ADC ESI,ESI                         ; 005afa16
        ;   Label: LAB_005afa16
    ADC EDI,EDI                         ; 005afa18
    DEC EBP                             ; 005afa1a
    JS 0x005afa3f                       ; 005afa1b
        ;   XREF to: 005afa3f (CONDITIONAL_JUMP)  ; LAB_005afa3f
    RCR ECX,0x1                         ; 005afa1d
        ;   Label: LAB_005afa1d
    RCR EBX,0x1                         ; 005afa1f
    SUB EAX,EBX                         ; 005afa21
    SBB EDX,ECX                         ; 005afa23
    CMC                                 ; 005afa25
    JC 0x005afa16                       ; 005afa26
        ;   XREF to: 005afa16 (CONDITIONAL_JUMP)  ; LAB_005afa16
    ADD ESI,ESI                         ; 005afa28
        ;   Label: LAB_005afa28
    ADC EDI,EDI                         ; 005afa2a
    DEC EBP                             ; 005afa2c
    JS 0x005afa3b                       ; 005afa2d
        ;   XREF to: 005afa3b (CONDITIONAL_JUMP)  ; LAB_005afa3b
    SHR ECX,0x1                         ; 005afa2f
    RCR EBX,0x1                         ; 005afa31
    ADD EAX,EBX                         ; 005afa33
    ADC EDX,ECX                         ; 005afa35
    JNC 0x005afa28                      ; 005afa37
        ;   XREF to: 005afa28 (CONDITIONAL_JUMP)  ; LAB_005afa28
    JMP 0x005afa16                      ; 005afa39
        ;   XREF to: 005afa16 (UNCONDITIONAL_JUMP)  ; LAB_005afa16
    ADD EAX,EBX                         ; 005afa3b
        ;   Label: LAB_005afa3b
    ADC EDX,ECX                         ; 005afa3d
    MOV EBX,EAX                         ; 005afa3f
        ;   Label: LAB_005afa3f
    MOV ECX,EDX                         ; 005afa41
    MOV EAX,ESI                         ; 005afa43
    MOV EDX,EDI                         ; 005afa45
    POP EDI                             ; 005afa47
    POP ESI                             ; 005afa48
    POP EBP                             ; 005afa49
    RET                                 ; 005afa4a

