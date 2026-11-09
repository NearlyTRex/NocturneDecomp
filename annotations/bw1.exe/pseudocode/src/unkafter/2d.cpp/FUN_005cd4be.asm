; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double unkafter_2d_cpp_FUN_005cd4be(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cbd30 at 005cbd6b
;
; Referenced Globals:
;   undefined4 DAT_0062621d
;   undefined4 DAT_006267b8
;
; Called Functions:
;   crt_unknown.c_FUN_005c7cd4
;   unkafter_2d.cpp_FUN_005cebd0
;
; *****************************************************************************

section .text

    OR EBX,EBX                          ; 005cd4be
        ;   Label: unkafter_2d.cpp_FUN_005cd4be
    JNZ 0x005cd4cd                      ; 005cd4c0
        ;   XREF to: 005cd4cd (CONDITIONAL_JUMP)  ; LAB_005cd4cd
    ADD ECX,ECX                         ; 005cd4c2
    JNZ 0x005cd4cb                      ; 005cd4c4
        ;   XREF to: 005cd4cb (CONDITIONAL_JUMP)  ; LAB_005cd4cb
    JMP 0x005ce0bf                      ; 005cd4c6
        ;   XREF to: 005ce0bf (UNCONDITIONAL_JUMP)  ; LAB_005ce0bf
    RCR ECX,0x1                         ; 005cd4cb
        ;   Label: LAB_005cd4cb
    OR EAX,EAX                          ; 005cd4cd
        ;   Label: LAB_005cd4cd
    JNZ 0x005cd4d8                      ; 005cd4cf
        ;   XREF to: 005cd4d8 (CONDITIONAL_JUMP)  ; LAB_005cd4d8
    ADD EDX,EDX                         ; 005cd4d1
    JNZ 0x005cd4d6                      ; 005cd4d3
        ;   XREF to: 005cd4d6 (CONDITIONAL_JUMP)  ; LAB_005cd4d6
    RET                                 ; 005cd4d5
    RCR EDX,0x1                         ; 005cd4d6
        ;   Label: LAB_005cd4d6
    CMP byte ptr [0x0062621d],0x0       ; 005cd4d8 | DAT_0062621d
        ;   Label: LAB_005cd4d8
    JZ 0x005cd511                       ; 005cd4df
        ;   XREF to: 005cd511 (CONDITIONAL_JUMP)  ; LAB_005cd511
    PUSH EDX                            ; 005cd4e1
    PUSH EAX                            ; 005cd4e2
    FLD double ptr [ESP]                ; 005cd4e3
    PUSH ECX                            ; 005cd4e6
    PUSH EBX                            ; 005cd4e7
    TEST byte ptr [0x006267b8],0x1      ; 005cd4e8 | DAT_006267b8
    JZ 0x005cd4f8                       ; 005cd4ef
        ;   XREF to: 005cd4f8 (CONDITIONAL_JUMP)  ; LAB_005cd4f8
    CALL crt_unknown.c_FUN_005c7cd4     ; 005cd4f1
        ;   XREF to: 005c7cd4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7cd4()
    JMP 0x005cd4fe                      ; 005cd4f6
        ;   XREF to: 005cd4fe (UNCONDITIONAL_JUMP)  ; LAB_005cd4fe
    FDIV double ptr [ESP]               ; 005cd4f8
        ;   Label: LAB_005cd4f8
    ADD ESP,0x8                         ; 005cd4fb
    FSTP double ptr [ESP]               ; 005cd4fe
        ;   Label: LAB_005cd4fe
    WAIT                                ; 005cd501
    POP EAX                             ; 005cd502
    POP EDX                             ; 005cd503
    CMP EDX,0x80000000                  ; 005cd504
    JNZ 0x005cd510                      ; 005cd50a
        ;   XREF to: 005cd510 (CONDITIONAL_JUMP)  ; LAB_005cd510
    SUB EDX,EDX                         ; 005cd50c
    MOV EAX,EDX                         ; 005cd50e
    RET                                 ; 005cd510
        ;   Label: LAB_005cd510
    PUSH EBP                            ; 005cd511
        ;   Label: LAB_005cd511
    MOV EBP,ESP                         ; 005cd512
    PUSH EDI                            ; 005cd514
    PUSH ESI                            ; 005cd515
    MOV EDI,EDX                         ; 005cd516
    MOV ESI,ECX                         ; 005cd518
    SAR EDI,0x14                        ; 005cd51a
    SAR ECX,0x14                        ; 005cd51d
    AND EDI,0x800007ff                  ; 005cd520
    AND ECX,0x800007ff                  ; 005cd526
    ROL EDI,0x10                        ; 005cd52c
    ROL ECX,0x10                        ; 005cd52f
    ADD DI,CX                           ; 005cd532
    ROL EDI,0x10                        ; 005cd535
    ROL ECX,0x10                        ; 005cd538
    AND EDX,0xfffff                     ; 005cd53b
    AND ESI,0xfffff                     ; 005cd541
    OR DI,DI                            ; 005cd547
    JZ 0x005cd554                       ; 005cd54a
        ;   XREF to: 005cd554 (CONDITIONAL_JUMP)  ; LAB_005cd554
    OR EDX,0x100000                     ; 005cd54c
    JMP 0x005cd562                      ; 005cd552
        ;   XREF to: 005cd562 (UNCONDITIONAL_JUMP)  ; LAB_005cd562
    ADD EAX,EAX                         ; 005cd554
        ;   Label: LAB_005cd554
    ADC EDX,EDX                         ; 005cd556
    DEC DI                              ; 005cd558
    TEST EDX,0x100000                   ; 005cd55a
    JZ 0x005cd554                       ; 005cd560
        ;   XREF to: 005cd554 (CONDITIONAL_JUMP)  ; LAB_005cd554
    OR CX,CX                            ; 005cd562
        ;   Label: LAB_005cd562
    JZ 0x005cd56f                       ; 005cd565
        ;   XREF to: 005cd56f (CONDITIONAL_JUMP)  ; LAB_005cd56f
    OR ESI,0x100000                     ; 005cd567
    JMP 0x005cd57d                      ; 005cd56d
        ;   XREF to: 005cd57d (UNCONDITIONAL_JUMP)  ; LAB_005cd57d
    ADD EBX,EBX                         ; 005cd56f
        ;   Label: LAB_005cd56f
    ADC ESI,ESI                         ; 005cd571
    DEC CX                              ; 005cd573
    TEST ESI,0x100000                   ; 005cd575
    JZ 0x005cd56f                       ; 005cd57b
        ;   XREF to: 005cd56f (CONDITIONAL_JUMP)  ; LAB_005cd56f
    SUB DI,CX                           ; 005cd57d
        ;   Label: LAB_005cd57d
    ADD DI,0x3ff                        ; 005cd580
    JS 0x005cd598                       ; 005cd585
        ;   XREF to: 005cd598 (CONDITIONAL_JUMP)  ; LAB_005cd598
    CMP DI,0x7ff                        ; 005cd587
    JC 0x005cd598                       ; 005cd58c
        ;   XREF to: 005cd598 (CONDITIONAL_JUMP)  ; LAB_005cd598
    MOV EAX,ECX                         ; 005cd58e
    POP ESI                             ; 005cd590
    POP EDI                             ; 005cd591
    POP EBP                             ; 005cd592
    JMP 0x005ce0cb                      ; 005cd593
        ;   XREF to: 005ce0cb (UNCONDITIONAL_JUMP)  ; LAB_005ce0cb
    CMP DI,-0x34                        ; 005cd598
        ;   Label: LAB_005cd598
    JGE 0x005cd5a6                      ; 005cd59c
        ;   XREF to: 005cd5a6 (CONDITIONAL_JUMP)  ; LAB_005cd5a6
    POP ESI                             ; 005cd59e
    POP EDI                             ; 005cd59f
    POP EBP                             ; 005cd5a0
    JMP 0x005ce0ae                      ; 005cd5a1
        ;   XREF to: 005ce0ae (UNCONDITIONAL_JUMP)  ; LAB_005ce0ae
    PUSH EDI                            ; 005cd5a6
        ;   Label: LAB_005cd5a6
    MOV CL,0xb                          ; 005cd5a7
    SHLD EDX,EAX,CL                     ; 005cd5a9
    SHLD EAX,EBP,CL                     ; 005cd5ac
    AND EAX,0xfffff800                  ; 005cd5af
    SHLD ESI,EBX,CL                     ; 005cd5b4
    SHLD EBX,EBP,CL                     ; 005cd5b7
    AND EBX,0xfffff800                  ; 005cd5ba
    PUSH ESI                            ; 005cd5c0
    PUSH EBX                            ; 005cd5c1
    MOV ECX,ESI                         ; 005cd5c2
    MOV EDI,EDX                         ; 005cd5c4
    MOV ESI,EAX                         ; 005cd5c6
    SUB EAX,EAX                         ; 005cd5c8
    CMP ECX,EDX                         ; 005cd5ca
    JA 0x005cd5d1                       ; 005cd5cc
        ;   XREF to: 005cd5d1 (CONDITIONAL_JUMP)  ; LAB_005cd5d1
    SUB EDX,ECX                         ; 005cd5ce
    INC EAX                             ; 005cd5d0
    PUSH EAX                            ; 005cd5d1
        ;   Label: LAB_005cd5d1
    MOV EAX,ESI                         ; 005cd5d2
    DIV ECX                             ; 005cd5d4
    PUSH EAX                            ; 005cd5d6
    XCHG EAX,EBX                        ; 005cd5d7
    MUL EBX                             ; 005cd5d8
    XCHG EAX,ECX                        ; 005cd5da
    XCHG EBX,EDX                        ; 005cd5db
    MUL EDX                             ; 005cd5dd
    ADD EAX,EBX                         ; 005cd5df
    ADC EDX,0x0                         ; 005cd5e1
    MOV EBX,dword ptr [EBP + -0x14]     ; 005cd5e4
    TEST byte ptr [EBP + -0x18],0x1     ; 005cd5e7
    JZ 0x005cd5f2                       ; 005cd5eb
        ;   XREF to: 005cd5f2 (CONDITIONAL_JUMP)  ; LAB_005cd5f2
    ADD EAX,EBX                         ; 005cd5ed
    ADC EDX,dword ptr [EBP + -0x10]     ; 005cd5ef
    NEG ECX                             ; 005cd5f2
        ;   Label: LAB_005cd5f2
    SBB ESI,EAX                         ; 005cd5f4
    SBB EDI,EDX                         ; 005cd5f6
    JZ 0x005cd60c                       ; 005cd5f8
        ;   XREF to: 005cd60c (CONDITIONAL_JUMP)  ; LAB_005cd60c
    SUB dword ptr [EBP + -0x1c],0x1     ; 005cd5fa
        ;   Label: LAB_005cd5fa
    SBB dword ptr [EBP + -0x18],0x0     ; 005cd5fe
    ADD ECX,EBX                         ; 005cd602
    ADC ESI,dword ptr [EBP + -0x10]     ; 005cd604
    ADC EDI,0x0                         ; 005cd607
    JNZ 0x005cd5fa                      ; 005cd60a
        ;   XREF to: 005cd5fa (CONDITIONAL_JUMP)  ; LAB_005cd5fa
    MOV EDI,ESI                         ; 005cd60c
        ;   Label: LAB_005cd60c
    MOV ESI,ECX                         ; 005cd60e
    MOV ECX,dword ptr [EBP + -0x10]     ; 005cd610
    CMP ECX,EDI                         ; 005cd613
    JA 0x005cd621                       ; 005cd615
        ;   XREF to: 005cd621 (CONDITIONAL_JUMP)  ; LAB_005cd621
    SUB EDI,ECX                         ; 005cd617
    ADD dword ptr [EBP + -0x1c],0x1     ; 005cd619
    ADC dword ptr [EBP + -0x18],0x0     ; 005cd61d
    MOV EDX,EDI                         ; 005cd621
        ;   Label: LAB_005cd621
    MOV EAX,ESI                         ; 005cd623
    DIV ECX                             ; 005cd625
    PUSH EAX                            ; 005cd627
    OR EAX,EAX                          ; 005cd628
    JZ 0x005cd658                       ; 005cd62a
        ;   XREF to: 005cd658 (CONDITIONAL_JUMP)  ; LAB_005cd658
    XCHG EAX,EBX                        ; 005cd62c
    MUL EBX                             ; 005cd62d
    XCHG EAX,ECX                        ; 005cd62f
    XCHG EBX,EDX                        ; 005cd630
    MUL EDX                             ; 005cd632
    ADD EAX,EBX                         ; 005cd634
    ADC EDX,0x0                         ; 005cd636
    NEG ECX                             ; 005cd639
    SBB ESI,EAX                         ; 005cd63b
    SBB EDI,EDX                         ; 005cd63d
    JZ 0x005cd658                       ; 005cd63f
        ;   XREF to: 005cd658 (CONDITIONAL_JUMP)  ; LAB_005cd658
    SUB dword ptr [EBP + -0x20],0x1     ; 005cd641
        ;   Label: LAB_005cd641
    SBB dword ptr [EBP + -0x1c],0x0     ; 005cd645
    SBB dword ptr [EBP + -0x18],0x0     ; 005cd649
    ADD ECX,dword ptr [EBP + -0x14]     ; 005cd64d
    ADC ESI,dword ptr [EBP + -0x10]     ; 005cd650
    ADC EDI,0x0                         ; 005cd653
    JNZ 0x005cd641                      ; 005cd656
        ;   XREF to: 005cd641 (CONDITIONAL_JUMP)  ; LAB_005cd641
    POP EAX                             ; 005cd658
        ;   Label: LAB_005cd658
    POP EDX                             ; 005cd659
    POP EBX                             ; 005cd65a
    ADD ESP,0x8                         ; 005cd65b
    POP EDI                             ; 005cd65e
    DEC DI                              ; 005cd65f
    SHR EBX,0x1                         ; 005cd661
    JNC 0x005cd66a                      ; 005cd663
        ;   XREF to: 005cd66a (CONDITIONAL_JUMP)  ; LAB_005cd66a
    RCR EDX,0x1                         ; 005cd665
    RCR EAX,0x1                         ; 005cd667
    INC EDI                             ; 005cd669
    SUB ESI,ESI                         ; 005cd66a
        ;   Label: LAB_005cd66a
    MOV CL,0xb                          ; 005cd66c
    SHRD EAX,EDX,CL                     ; 005cd66e
    RCR ESI,0x1                         ; 005cd671
    SHRD EDX,ESI,CL                     ; 005cd673
    OR EDX,0xfff00000                   ; 005cd676
    ADD ESI,ESI                         ; 005cd67c
    ADC EAX,0x0                         ; 005cd67e
    ADC EDX,0x0                         ; 005cd681
    ADC EDI,0x0                         ; 005cd684
    OR DI,DI                            ; 005cd687
    JG 0x005cd6a9                       ; 005cd68a
        ;   XREF to: 005cd6a9 (CONDITIONAL_JUMP)  ; LAB_005cd6a9
    JNZ 0x005cd692                      ; 005cd68c
        ;   XREF to: 005cd692 (CONDITIONAL_JUMP)  ; LAB_005cd692
    MOV CL,0x1                          ; 005cd68e
    JMP 0x005cd698                      ; 005cd690
        ;   XREF to: 005cd698 (UNCONDITIONAL_JUMP)  ; LAB_005cd698
    NEG DI                              ; 005cd692
        ;   Label: LAB_005cd692
    MOV CX,DI                           ; 005cd695
    AND EDX,0x1fffff                    ; 005cd698
        ;   Label: LAB_005cd698
    SUB EBX,EBX                         ; 005cd69e
    SHRD EAX,EDX,CL                     ; 005cd6a0
    SHRD EDX,EBX,CL                     ; 005cd6a3
    SUB DI,DI                           ; 005cd6a6
    AND EDX,0xfffff                     ; 005cd6a9
        ;   Label: LAB_005cd6a9
    MOV ESI,EDI                         ; 005cd6af
    ROR EDI,0xb                         ; 005cd6b1
    ADD ESI,ESI                         ; 005cd6b4
    RCR EDI,0x1                         ; 005cd6b6
    AND EDI,0xfff00000                  ; 005cd6b8
    OR EDX,EDI                          ; 005cd6be
    POP ESI                             ; 005cd6c0
    POP EDI                             ; 005cd6c1
    POP EBP                             ; 005cd6c2
    RET                                 ; 005cd6c3
    MOV EAX,0x83                        ; 005ce0bf
        ;   Label: LAB_005ce0bf
    CALL unkafter_2d.cpp_FUN_005cebd0   ; 005ce0c4
        ;   XREF to: 005cebd0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005cebd0()
    JMP 0x005ce0dc                      ; 005ce0c9
        ;   XREF to: 005ce0dc (UNCONDITIONAL_JUMP)  ; LAB_005ce0dc

