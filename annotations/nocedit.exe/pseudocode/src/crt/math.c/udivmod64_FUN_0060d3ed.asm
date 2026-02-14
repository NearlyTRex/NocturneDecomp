; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister ulonglong __watcallRegister crt_math_c_udivmod64_FUN_0060d3ed(ulonglong dividend,ulonglong divisor)
;
;
; XREF[1]:
;   crt_stdlib.c_i64toa_FUN_0060ad40 at 0060ad8f
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 0060d3ed
        ;   Label: crt_math.c_udivmod64_FUN_0060d3ed
    JNZ 0x0060d40b                      ; 0060d3ef
        ;   XREF to: 0060d40b (CONDITIONAL_JUMP)  ; LAB_0060d40b
    DEC EBX                             ; 0060d3f1
    JZ 0x0060d40a                       ; 0060d3f2
        ;   XREF to: 0060d40a (CONDITIONAL_JUMP)  ; LAB_0060d40a
    INC EBX                             ; 0060d3f4
    CMP EBX,EDX                         ; 0060d3f5
    JA 0x0060d402                       ; 0060d3f7
        ;   XREF to: 0060d402 (CONDITIONAL_JUMP)  ; LAB_0060d402
    MOV ECX,EAX                         ; 0060d3f9
    MOV EAX,EDX                         ; 0060d3fb
    SUB EDX,EDX                         ; 0060d3fd
    DIV EBX                             ; 0060d3ff
    XCHG EAX,ECX                        ; 0060d401
    DIV EBX                             ; 0060d402
        ;   Label: LAB_0060d402
    MOV EBX,EDX                         ; 0060d404
    MOV EDX,ECX                         ; 0060d406
    SUB ECX,ECX                         ; 0060d408
    RET                                 ; 0060d40a
        ;   Label: LAB_0060d40a
    CMP ECX,EDX                         ; 0060d40b
        ;   Label: LAB_0060d40b
    JC 0x0060d42b                       ; 0060d40d
        ;   XREF to: 0060d42b (CONDITIONAL_JUMP)  ; LAB_0060d42b
    JNZ 0x0060d423                      ; 0060d40f
        ;   XREF to: 0060d423 (CONDITIONAL_JUMP)  ; LAB_0060d423
    CMP EBX,EAX                         ; 0060d411
    JA 0x0060d423                       ; 0060d413
        ;   XREF to: 0060d423 (CONDITIONAL_JUMP)  ; LAB_0060d423
    SUB EAX,EBX                         ; 0060d415
    MOV EBX,EAX                         ; 0060d417
    SUB ECX,ECX                         ; 0060d419
    SUB EDX,EDX                         ; 0060d41b
    MOV EAX,0x1                         ; 0060d41d
    RET                                 ; 0060d422
    SUB ECX,ECX                         ; 0060d423
        ;   Label: LAB_0060d423
    SUB EBX,EBX                         ; 0060d425
    XCHG EAX,EBX                        ; 0060d427
    XCHG EDX,ECX                        ; 0060d428
    RET                                 ; 0060d42a
    PUSH EBP                            ; 0060d42b
        ;   Label: LAB_0060d42b
    PUSH ESI                            ; 0060d42c
    PUSH EDI                            ; 0060d42d
    SUB ESI,ESI                         ; 0060d42e
    MOV EDI,ESI                         ; 0060d430
    MOV EBP,ESI                         ; 0060d432
    ADD EBX,EBX                         ; 0060d434
        ;   Label: LAB_0060d434
    ADC ECX,ECX                         ; 0060d436
    JC 0x0060d44d                       ; 0060d438
        ;   XREF to: 0060d44d (CONDITIONAL_JUMP)  ; LAB_0060d44d
    INC EBP                             ; 0060d43a
    CMP ECX,EDX                         ; 0060d43b
    JC 0x0060d434                       ; 0060d43d
        ;   XREF to: 0060d434 (CONDITIONAL_JUMP)  ; LAB_0060d434
    JA 0x0060d445                       ; 0060d43f
        ;   XREF to: 0060d445 (CONDITIONAL_JUMP)  ; LAB_0060d445
    CMP EBX,EAX                         ; 0060d441
    JBE 0x0060d434                      ; 0060d443
        ;   XREF to: 0060d434 (CONDITIONAL_JUMP)  ; LAB_0060d434
    CLC                                 ; 0060d445
        ;   Label: LAB_0060d445
    ADC ESI,ESI                         ; 0060d446
        ;   Label: LAB_0060d446
    ADC EDI,EDI                         ; 0060d448
    DEC EBP                             ; 0060d44a
    JS 0x0060d46f                       ; 0060d44b
        ;   XREF to: 0060d46f (CONDITIONAL_JUMP)  ; LAB_0060d46f
    RCR ECX,0x1                         ; 0060d44d
        ;   Label: LAB_0060d44d
    RCR EBX,0x1                         ; 0060d44f
    SUB EAX,EBX                         ; 0060d451
    SBB EDX,ECX                         ; 0060d453
    CMC                                 ; 0060d455
    JC 0x0060d446                       ; 0060d456
        ;   XREF to: 0060d446 (CONDITIONAL_JUMP)  ; LAB_0060d446
    ADD ESI,ESI                         ; 0060d458
        ;   Label: LAB_0060d458
    ADC EDI,EDI                         ; 0060d45a
    DEC EBP                             ; 0060d45c
    JS 0x0060d46b                       ; 0060d45d
        ;   XREF to: 0060d46b (CONDITIONAL_JUMP)  ; LAB_0060d46b
    SHR ECX,0x1                         ; 0060d45f
    RCR EBX,0x1                         ; 0060d461
    ADD EAX,EBX                         ; 0060d463
    ADC EDX,ECX                         ; 0060d465
    JNC 0x0060d458                      ; 0060d467
        ;   XREF to: 0060d458 (CONDITIONAL_JUMP)  ; LAB_0060d458
    JMP 0x0060d446                      ; 0060d469
        ;   XREF to: 0060d446 (UNCONDITIONAL_JUMP)  ; LAB_0060d446
    ADD EAX,EBX                         ; 0060d46b
        ;   Label: LAB_0060d46b
    ADC EDX,ECX                         ; 0060d46d
    MOV EBX,EAX                         ; 0060d46f
        ;   Label: LAB_0060d46f
    MOV ECX,EDX                         ; 0060d471
    MOV EAX,ESI                         ; 0060d473
    MOV EDX,EDI                         ; 0060d475
    POP EDI                             ; 0060d477
    POP ESI                             ; 0060d478
    POP EBP                             ; 0060d479
    RET                                 ; 0060d47a

