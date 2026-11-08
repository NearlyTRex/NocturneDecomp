; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005b0454(void)
;
;
; XREF[1]:
;   FUN_005aeba0 at 005aebf8
;
; Referenced Globals:
;   undefined4 DAT_006075c1
;
; *****************************************************************************

section .text

    XOR ECX,0x80000000                  ; 005b0454
        ;   Label: FUN_005b0454
    OR EBX,EBX                          ; 005b045a
    JNZ 0x005b0464                      ; 005b045c
        ;   XREF to: 005b0464 (CONDITIONAL_JUMP)  ; LAB_005b0464
    ADD ECX,ECX                         ; 005b045e
    JZ 0x005b0470                       ; 005b0460
        ;   XREF to: 005b0470 (CONDITIONAL_JUMP)  ; LAB_005b0470
    RCR ECX,0x1                         ; 005b0462
    OR EAX,EAX                          ; 005b0464
        ;   Label: LAB_005b0464
    JNZ 0x005b0473                      ; 005b0466
        ;   XREF to: 005b0473 (CONDITIONAL_JUMP)  ; LAB_005b0473
    ADD EDX,EDX                         ; 005b0468
    JNZ 0x005b0471                      ; 005b046a
        ;   XREF to: 005b0471 (CONDITIONAL_JUMP)  ; LAB_005b0471
    MOV EDX,ECX                         ; 005b046c
    MOV EAX,EBX                         ; 005b046e
    RET                                 ; 005b0470
        ;   Label: LAB_005b0470
    RCR EDX,0x1                         ; 005b0471
        ;   Label: LAB_005b0471
    CMP byte ptr [0x006075c1],0x0       ; 005b0473 | DAT_006075c1
        ;   Label: LAB_005b0473
    JZ 0x005b049d                       ; 005b047a
        ;   XREF to: 005b049d (CONDITIONAL_JUMP)  ; LAB_005b049d
    PUSH EDX                            ; 005b047c
    PUSH EAX                            ; 005b047d
    FLD double ptr [ESP]                ; 005b047e
    PUSH ECX                            ; 005b0481
    PUSH EBX                            ; 005b0482
    FADD double ptr [ESP]               ; 005b0483
    FSTP double ptr [ESP + 0x8]         ; 005b0486
        ;   Label: LAB_005b0486
    ADD ESP,0x8                         ; 005b048a
    WAIT                                ; 005b048d
    POP EAX                             ; 005b048e
    POP EDX                             ; 005b048f
    CMP EDX,0x80000000                  ; 005b0490
    JNZ 0x005b049c                      ; 005b0496
        ;   XREF to: 005b049c (CONDITIONAL_JUMP)  ; LAB_005b049c
    SUB EDX,EDX                         ; 005b0498
    MOV EAX,EDX                         ; 005b049a
    RET                                 ; 005b049c
        ;   Label: LAB_005b049c
    PUSH EBP                            ; 005b049d
        ;   Label: LAB_005b049d
    PUSH EDI                            ; 005b049e
    PUSH ESI                            ; 005b049f
    MOV EDI,EDX                         ; 005b04a0
    MOV ESI,ECX                         ; 005b04a2
    SAR EDI,0x14                        ; 005b04a4
    SAR ECX,0x14                        ; 005b04a7
    AND EDI,0x800007ff                  ; 005b04aa
    AND ECX,0x800007ff                  ; 005b04b0
    MOV EBP,ECX                         ; 005b04b6
    ROL EDI,0x10                        ; 005b04b8
    ROL ECX,0x10                        ; 005b04bb
    ADD CX,DI                           ; 005b04be
    ROL EDI,0x10                        ; 005b04c1
    ROL ECX,0x10                        ; 005b04c4
    AND EDX,0xfffff                     ; 005b04c7
    AND ESI,0xfffff                     ; 005b04cd
    OR DI,DI                            ; 005b04d3
    JZ 0x005b04de                       ; 005b04d6
        ;   XREF to: 005b04de (CONDITIONAL_JUMP)  ; LAB_005b04de
    OR EDX,0x100000                     ; 005b04d8
    OR CX,CX                            ; 005b04de
        ;   Label: LAB_005b04de
    JZ 0x005b04e9                       ; 005b04e1
        ;   XREF to: 005b04e9 (CONDITIONAL_JUMP)  ; LAB_005b04e9
    OR ESI,0x100000                     ; 005b04e3
    ADD EAX,EAX                         ; 005b04e9
        ;   Label: LAB_005b04e9
    ADC EDX,EDX                         ; 005b04eb
    ADD EBX,EBX                         ; 005b04ed
    ADC ESI,ESI                         ; 005b04ef
    SUB CX,DI                           ; 005b04f1
    JZ 0x005b0525                       ; 005b04f4
        ;   XREF to: 005b0525 (CONDITIONAL_JUMP)  ; LAB_005b0525
    JNC 0x005b0500                      ; 005b04f6
        ;   XREF to: 005b0500 (CONDITIONAL_JUMP)  ; LAB_005b0500
    MOV EBP,EDI                         ; 005b04f8
    NEG CX                              ; 005b04fa
    XCHG EAX,EBX                        ; 005b04fd
    XCHG EDX,ESI                        ; 005b04fe
    CMP CX,0x36                         ; 005b0500
        ;   Label: LAB_005b0500
    JBE 0x005b0525                      ; 005b0504
        ;   XREF to: 005b0525 (CONDITIONAL_JUMP)  ; LAB_005b0525
    MOV EDX,ESI                         ; 005b0506
    MOV EAX,EBX                         ; 005b0508
    ADD EBP,EBP                         ; 005b050a
    RCR EDX,0x1                         ; 005b050c
    RCR EAX,0x1                         ; 005b050e
    AND EDX,0x800fffff                  ; 005b0510
    ROR EBP,0xd                         ; 005b0516
    AND EBP,0x7ff00000                  ; 005b0519
    OR EDX,EBP                          ; 005b051f
    POP ESI                             ; 005b0521
    POP EDI                             ; 005b0522
    POP EBP                             ; 005b0523
    RET                                 ; 005b0524
    OR ECX,ECX                          ; 005b0525
        ;   Label: LAB_005b0525
    JNS 0x005b0536                      ; 005b0527
        ;   XREF to: 005b0536 (CONDITIONAL_JUMP)  ; LAB_005b0536
    NEG ESI                             ; 005b0529
    NEG EBX                             ; 005b052b
    SBB ESI,0x0                         ; 005b052d
    XOR EBP,0x80000000                  ; 005b0530
    SUB EDI,EDI                         ; 005b0536
        ;   Label: LAB_005b0536
    CMP CL,0x0                          ; 005b0538
    JZ 0x005b0560                       ; 005b053b
        ;   XREF to: 005b0560 (CONDITIONAL_JUMP)  ; LAB_005b0560
    PUSH EBX                            ; 005b053d
    SUB EBX,EBX                         ; 005b053e
    CMP CL,0x20                         ; 005b0540
    JC 0x005b0552                       ; 005b0543
        ;   XREF to: 005b0552 (CONDITIONAL_JUMP)  ; LAB_005b0552
    OR EAX,EAX                          ; 005b0545
    SETNZ BL                            ; 005b0547
    MOV EDI,EBX                         ; 005b054a
    SUB EBX,EBX                         ; 005b054c
    MOV EAX,EDX                         ; 005b054e
    SUB EDX,EDX                         ; 005b0550
    SHRD EBX,EAX,CL                     ; 005b0552
        ;   Label: LAB_005b0552
    OR EDI,EBX                          ; 005b0555
    SUB EBX,EBX                         ; 005b0557
    SHRD EAX,EDX,CL                     ; 005b0559
    SHRD EDX,EBX,CL                     ; 005b055c
    POP EBX                             ; 005b055f
    ADD EAX,EBX                         ; 005b0560
        ;   Label: LAB_005b0560
    ADC EDX,ESI                         ; 005b0562
    JNS 0x005b0589                      ; 005b0564
        ;   XREF to: 005b0589 (CONDITIONAL_JUMP)  ; LAB_005b0589
    CMP CL,0x35                         ; 005b0566
    JC 0x005b057c                       ; 005b0569
        ;   XREF to: 005b057c (CONDITIONAL_JUMP)  ; LAB_005b057c
    TEST EDI,0x7fffffff                 ; 005b056b
    SETNZ BL                            ; 005b0571
    SHR EBX,0x1                         ; 005b0574
    ADC EAX,0x0                         ; 005b0576
    ADC EDX,0x0                         ; 005b0579
    NEG EDX                             ; 005b057c
        ;   Label: LAB_005b057c
    NEG EAX                             ; 005b057e
    SBB EDX,0x0                         ; 005b0580
    XOR EBP,0x80000000                  ; 005b0583
    MOV EBX,EAX                         ; 005b0589
        ;   Label: LAB_005b0589
    OR EBX,EDX                          ; 005b058b
    JZ 0x005b05f9                       ; 005b058d
        ;   XREF to: 005b05f9 (CONDITIONAL_JUMP)  ; LAB_005b05f9
    OR BP,BP                            ; 005b058f
    JZ 0x005b05fd                       ; 005b0592
        ;   XREF to: 005b05fd (CONDITIONAL_JUMP)  ; LAB_005b05fd
    TEST EDX,0x7fe00000                 ; 005b0594
        ;   Label: LAB_005b0594
    JNZ 0x005b05a6                      ; 005b059a
        ;   XREF to: 005b05a6 (CONDITIONAL_JUMP)  ; LAB_005b05a6
    DEC BP                              ; 005b059c
    JZ 0x005b05fd                       ; 005b059e
        ;   XREF to: 005b05fd (CONDITIONAL_JUMP)  ; LAB_005b05fd
    ADD EAX,EAX                         ; 005b05a0
    ADC EDX,EDX                         ; 005b05a2
    JMP 0x005b0594                      ; 005b05a4
        ;   XREF to: 005b0594 (UNCONDITIONAL_JUMP)  ; LAB_005b0594
    TEST EDX,0x400000                   ; 005b05a6
        ;   Label: LAB_005b05a6
    JZ 0x005b05be                       ; 005b05ac
        ;   XREF to: 005b05be (CONDITIONAL_JUMP)  ; LAB_005b05be
    SHR EDX,0x1                         ; 005b05ae
    RCR EAX,0x1                         ; 005b05b0
    ADC EDI,0x0                         ; 005b05b2
    INC BP                              ; 005b05b5
    CMP BP,0x7ff                        ; 005b05b7
    JZ 0x005b0607                       ; 005b05bc
        ;   XREF to: 005b0607 (CONDITIONAL_JUMP)  ; LAB_005b0607
    SHR EDX,0x1                         ; 005b05be
        ;   Label: LAB_005b05be
    RCR EAX,0x1                         ; 005b05c0
    JNC 0x005b05e8                      ; 005b05c2
        ;   XREF to: 005b05e8 (CONDITIONAL_JUMP)  ; LAB_005b05e8
    OR EDI,EDI                          ; 005b05c4
    SETNZ BL                            ; 005b05c6
    OR EBX,EAX                          ; 005b05c9
    SHR EBX,0x1                         ; 005b05cb
    ADC EAX,0x0                         ; 005b05cd
    ADC EDX,0x0                         ; 005b05d0
    TEST EDX,0x200000                   ; 005b05d3
    JZ 0x005b05e8                       ; 005b05d9
        ;   XREF to: 005b05e8 (CONDITIONAL_JUMP)  ; LAB_005b05e8
    SHR EDX,0x1                         ; 005b05db
    RCR EAX,0x1                         ; 005b05dd
    INC BP                              ; 005b05df
    CMP BP,0x7ff                        ; 005b05e1
    JZ 0x005b0607                       ; 005b05e6
        ;   XREF to: 005b0607 (CONDITIONAL_JUMP)  ; LAB_005b0607
    AND EDX,0xfffff                     ; 005b05e8
        ;   Label: LAB_005b05e8
    MOV ECX,EBP                         ; 005b05ee
    SHL EBP,0x15                        ; 005b05f0
    ADD ECX,ECX                         ; 005b05f3
    RCR EBP,0x1                         ; 005b05f5
    OR EDX,EBP                          ; 005b05f7
    POP ESI                             ; 005b05f9
        ;   Label: LAB_005b05f9
    POP EDI                             ; 005b05fa
    POP EBP                             ; 005b05fb
    RET                                 ; 005b05fc
    ADD EBP,EBP                         ; 005b05fd
        ;   Label: LAB_005b05fd
    RCR EDX,0x1                         ; 005b05ff
    RCR EAX,0x1                         ; 005b0601
    POP ESI                             ; 005b0603
    POP EDI                             ; 005b0604
    POP EBP                             ; 005b0605
    RET                                 ; 005b0606
    MOV EAX,EBP                         ; 005b0607
        ;   Label: LAB_005b0607
    POP ESI                             ; 005b0609
    POP EDI                             ; 005b060a
    POP EBP                             ; 005b060b
    JMP 0x005b0e5b                      ; 005b060c
        ;   XREF to: 005b0e5b (UNCONDITIONAL_JUMP)  ; LAB_005b0e5b

