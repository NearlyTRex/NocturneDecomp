; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double unkafter_2d_cpp_FUN_005c5581(void)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c3a30 at 005c3a77
;
; Referenced Globals:
;   undefined4 DAT_0061ee9d
;
; Called Functions:
;   crt_unknown.c_FUN_005be19c
;   unkafter_2d.cpp_FUN_005c68d0
;
; *****************************************************************************

section .text

    OR EAX,EAX                          ; 005c5581
        ;   Label: unkafter_2d.cpp_FUN_005c5581
    JNZ 0x005c558c                      ; 005c5583
        ;   XREF to: 005c558c (CONDITIONAL_JUMP)  ; LAB_005c558c
    ADD EDX,EDX                         ; 005c5585
    JNZ 0x005c558a                      ; 005c5587
        ;   XREF to: 005c558a (CONDITIONAL_JUMP)  ; LAB_005c558a
    RET                                 ; 005c5589
    RCR EDX,0x1                         ; 005c558a
        ;   Label: LAB_005c558a
    OR EBX,EBX                          ; 005c558c
        ;   Label: LAB_005c558c
    JNZ 0x005c559b                      ; 005c558e
        ;   XREF to: 005c559b (CONDITIONAL_JUMP)  ; LAB_005c559b
    ADD ECX,ECX                         ; 005c5590
    JNZ 0x005c5599                      ; 005c5592
        ;   XREF to: 005c5599 (CONDITIONAL_JUMP)  ; LAB_005c5599
    SUB EAX,EAX                         ; 005c5594
    SUB EDX,EDX                         ; 005c5596
    RET                                 ; 005c5598
    RCR ECX,0x1                         ; 005c5599
        ;   Label: LAB_005c5599
    CMP byte ptr [0x0061ee9d],0x0       ; 005c559b | DAT_0061ee9d
        ;   Label: LAB_005c559b
    JZ 0x005c55b3                       ; 005c55a2
        ;   XREF to: 005c55b3 (CONDITIONAL_JUMP)  ; LAB_005c55b3
    PUSH EDX                            ; 005c55a4
    PUSH EAX                            ; 005c55a5
    FLD double ptr [ESP]                ; 005c55a6
    PUSH ECX                            ; 005c55a9
    PUSH EBX                            ; 005c55aa
    FMUL double ptr [ESP]               ; 005c55ab
    JMP 0x005c53f6                      ; 005c55ae
        ;   XREF to: 005c53f6 (UNCONDITIONAL_JUMP)  ; LAB_005c53f6
    PUSH EBP                            ; 005c55b3
        ;   Label: LAB_005c55b3
    PUSH EDI                            ; 005c55b4
    PUSH ESI                            ; 005c55b5
    MOV EDI,EDX                         ; 005c55b6
    MOV ESI,ECX                         ; 005c55b8
    SAR EDI,0x14                        ; 005c55ba
    SAR ECX,0x14                        ; 005c55bd
    AND EDI,0x800007ff                  ; 005c55c0
    AND ECX,0x800007ff                  ; 005c55c6
    ROL EDI,0x10                        ; 005c55cc
    ROL ECX,0x10                        ; 005c55cf
    ADD CX,DI                           ; 005c55d2
    ROL EDI,0x10                        ; 005c55d5
    ROL ECX,0x10                        ; 005c55d8
    AND EDX,0xfffff                     ; 005c55db
    AND ESI,0xfffff                     ; 005c55e1
    OR DI,DI                            ; 005c55e7
    JNZ 0x005c55fc                      ; 005c55ea
        ;   XREF to: 005c55fc (CONDITIONAL_JUMP)  ; LAB_005c55fc
    INC DI                              ; 005c55ec
    DEC DI                              ; 005c55ee
        ;   Label: LAB_005c55ee
    ADD EAX,EAX                         ; 005c55f0
    ADC EDX,EDX                         ; 005c55f2
    TEST EDX,0x100000                   ; 005c55f4
    JZ 0x005c55ee                       ; 005c55fa
        ;   XREF to: 005c55ee (CONDITIONAL_JUMP)  ; LAB_005c55ee
    OR EDX,0x100000                     ; 005c55fc
        ;   Label: LAB_005c55fc
    OR CX,CX                            ; 005c5602
    JNZ 0x005c5617                      ; 005c5605
        ;   XREF to: 005c5617 (CONDITIONAL_JUMP)  ; LAB_005c5617
    INC CX                              ; 005c5607
    DEC CX                              ; 005c5609
        ;   Label: LAB_005c5609
    ADD EBX,EBX                         ; 005c560b
    ADC ESI,ESI                         ; 005c560d
    TEST ESI,0x100000                   ; 005c560f
    JZ 0x005c5609                       ; 005c5615
        ;   XREF to: 005c5609 (CONDITIONAL_JUMP)  ; LAB_005c5609
    OR ESI,0x100000                     ; 005c5617
        ;   Label: LAB_005c5617
    ADD CX,DI                           ; 005c561d
    SUB CX,0x3ff                        ; 005c5620
    JS 0x005c5638                       ; 005c5625
        ;   XREF to: 005c5638 (CONDITIONAL_JUMP)  ; LAB_005c5638
    CMP CX,0x7ff                        ; 005c5627
    JC 0x005c5638                       ; 005c562c
        ;   XREF to: 005c5638 (CONDITIONAL_JUMP)  ; LAB_005c5638
    MOV EAX,ECX                         ; 005c562e
    POP ESI                             ; 005c5630
    POP EDI                             ; 005c5631
    POP EBP                             ; 005c5632
    JMP 0x005c5dcb                      ; 005c5633
        ;   XREF to: 005c5dcb (UNCONDITIONAL_JUMP)  ; LAB_005c5dcb
    CMP CX,-0x35                        ; 005c5638
        ;   Label: LAB_005c5638
    JGE 0x005c5646                      ; 005c563c
        ;   XREF to: 005c5646 (CONDITIONAL_JUMP)  ; LAB_005c5646
    POP ESI                             ; 005c563e
    POP EDI                             ; 005c563f
    POP EBP                             ; 005c5640
    JMP 0x005c5dae                      ; 005c5641
        ;   XREF to: 005c5dae (UNCONDITIONAL_JUMP)  ; LAB_005c5dae
    PUSH ECX                            ; 005c5646
        ;   Label: LAB_005c5646
    MOV CL,0xb                          ; 005c5647
    SHLD EDX,EAX,CL                     ; 005c5649
    SHLD EAX,EBP,CL                     ; 005c564c
    AND EAX,0xfffff800                  ; 005c564f
    SHLD ESI,EBX,CL                     ; 005c5654
    SHLD EBX,EBP,CL                     ; 005c5657
    AND EBX,0xfffff800                  ; 005c565a
    SUB EBP,EBP                         ; 005c5660
    PUSH ESI                            ; 005c5662
    PUSH EDX                            ; 005c5663
    PUSH EAX                            ; 005c5664
    MUL EBX                             ; 005c5665
    XCHG EAX,ESI                        ; 005c5667
    MOV ECX,EDX                         ; 005c5668
    POP EDX                             ; 005c566a
    MUL EDX                             ; 005c566b
    MOV EDI,EDX                         ; 005c566d
    ADD ECX,EAX                         ; 005c566f
    ADC EDI,EBP                         ; 005c5671
    ADC EBP,EBP                         ; 005c5673
    POP EAX                             ; 005c5675
    XCHG EAX,EBX                        ; 005c5676
    MUL EBX                             ; 005c5677
    ADD ECX,EAX                         ; 005c5679
    ADC EDI,EDX                         ; 005c567b
    ADC EBP,0x0                         ; 005c567d
    MOV EAX,EBX                         ; 005c5680
    POP EDX                             ; 005c5682
    MUL EDX                             ; 005c5683
    ADD EAX,EDI                         ; 005c5685
    ADC EDX,EBP                         ; 005c5687
    SUB EBX,EBX                         ; 005c5689
    MOV CL,0xa                          ; 005c568b
    SHRD EBX,EAX,CL                     ; 005c568d
    SHRD EAX,EDX,CL                     ; 005c5690
    SHRD EDX,EBX,CL                     ; 005c5693
    POP ECX                             ; 005c5696
    TEST EDX,0x200000                   ; 005c5697
        ;   Label: LAB_005c5697
    JZ 0x005c56b0                       ; 005c569d
        ;   XREF to: 005c56b0 (CONDITIONAL_JUMP)  ; LAB_005c56b0
    SHR EDX,0x1                         ; 005c569f
    RCR EAX,0x1                         ; 005c56a1
    RCR EBX,0x1                         ; 005c56a3
    INC CX                              ; 005c56a5
    CMP CX,0x7ff                        ; 005c56a7
    JZ 0x005c5714                       ; 005c56ac
        ;   XREF to: 005c5714 (CONDITIONAL_JUMP)  ; LAB_005c5714
    JMP 0x005c5697                      ; 005c56ae
        ;   XREF to: 005c5697 (UNCONDITIONAL_JUMP)  ; LAB_005c5697
    ADD EBX,EBX                         ; 005c56b0
        ;   Label: LAB_005c56b0
    JNC 0x005c56de                      ; 005c56b2
        ;   XREF to: 005c56de (CONDITIONAL_JUMP)  ; LAB_005c56de
    JNZ 0x005c56c3                      ; 005c56b4
        ;   XREF to: 005c56c3 (CONDITIONAL_JUMP)  ; LAB_005c56c3
    OR ESI,ESI                          ; 005c56b6
    SETNZ BL                            ; 005c56b8
    SHR EBX,0x1                         ; 005c56bb
    JC 0x005c56c3                       ; 005c56bd
        ;   XREF to: 005c56c3 (CONDITIONAL_JUMP)  ; LAB_005c56c3
    MOV ESI,EAX                         ; 005c56bf
    SHR ESI,0x1                         ; 005c56c1
    ADC EAX,0x0                         ; 005c56c3
        ;   Label: LAB_005c56c3
    ADC EDX,0x0                         ; 005c56c6
    TEST EDX,0x200000                   ; 005c56c9
    JZ 0x005c56de                       ; 005c56cf
        ;   XREF to: 005c56de (CONDITIONAL_JUMP)  ; LAB_005c56de
    SHR EDX,0x1                         ; 005c56d1
    RCR EAX,0x1                         ; 005c56d3
    INC CX                              ; 005c56d5
    CMP CX,0x7ff                        ; 005c56d7
    JZ 0x005c5714                       ; 005c56dc
        ;   XREF to: 005c5714 (CONDITIONAL_JUMP)  ; LAB_005c5714
    OR CX,CX                            ; 005c56de
        ;   Label: LAB_005c56de
    JG 0x005c56f9                       ; 005c56e1
        ;   XREF to: 005c56f9 (CONDITIONAL_JUMP)  ; LAB_005c56f9
    JNZ 0x005c56e9                      ; 005c56e3
        ;   XREF to: 005c56e9 (CONDITIONAL_JUMP)  ; LAB_005c56e9
    MOV CL,0x1                          ; 005c56e5
    JMP 0x005c56ee                      ; 005c56e7
        ;   XREF to: 005c56ee (UNCONDITIONAL_JUMP)  ; LAB_005c56ee
    NEG CX                              ; 005c56e9
        ;   Label: LAB_005c56e9
    DEC CX                              ; 005c56ec
    SUB EBX,EBX                         ; 005c56ee
        ;   Label: LAB_005c56ee
    SHRD EAX,EDX,CL                     ; 005c56f0
    SHRD EDX,EBX,CL                     ; 005c56f3
    SUB CX,CX                           ; 005c56f6
    AND EDX,0xfffff                     ; 005c56f9
        ;   Label: LAB_005c56f9
    MOV ESI,ECX                         ; 005c56ff
    ROR ECX,0xb                         ; 005c5701
    ADD ESI,ESI                         ; 005c5704
    RCR ECX,0x1                         ; 005c5706
    AND ECX,0xfff00000                  ; 005c5708
    OR EDX,ECX                          ; 005c570e
    POP ESI                             ; 005c5710
    POP EDI                             ; 005c5711
    POP EBP                             ; 005c5712
    RET                                 ; 005c5713
    MOV EAX,ECX                         ; 005c5714
        ;   Label: LAB_005c5714
    POP ESI                             ; 005c5716
    POP EDI                             ; 005c5717
    POP EBP                             ; 005c5718
    JMP 0x005c5dcb                      ; 005c5719
        ;   XREF to: 005c5dcb (UNCONDITIONAL_JUMP)  ; LAB_005c5dcb
    SUB EDX,EDX                         ; 005c5dae
        ;   Label: LAB_005c5dae
    SUB EAX,EAX                         ; 005c5db0
    RET                                 ; 005c5db2
    PUSH EAX                            ; 005c5dcb
        ;   Label: LAB_005c5dcb
    CALL crt_unknown.c_FUN_005be19c     ; 005c5dcc
        ;   XREF to: 005be19c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be19c()
    MOV EAX,0x84                        ; 005c5dd1
    CALL unkafter_2d.cpp_FUN_005c68d0   ; 005c5dd6
        ;   XREF to: 005c68d0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c68d0()
    POP EAX                             ; 005c5ddb
    AND EAX,0x80000000                  ; 005c5ddc
        ;   Label: LAB_005c5ddc
    OR EAX,0x7ff00000                   ; 005c5de1
    MOV EDX,EAX                         ; 005c5de6
    SUB EAX,EAX                         ; 005c5de8
    RET                                 ; 005c5dea

