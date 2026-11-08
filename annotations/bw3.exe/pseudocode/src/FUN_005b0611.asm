; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005b0611(void)
;
;
; XREF[1]:
;   FUN_005aeba0 at 005aebe7
;
; Referenced Globals:
;   undefined4 DAT_006075c1
;
; Called Functions:
;   FUN_005a92dc
;   FUN_005b1960
;
; *****************************************************************************

section .text

    OR EAX,EAX                          ; 005b0611
        ;   Label: FUN_005b0611
    JNZ 0x005b061c                      ; 005b0613
        ;   XREF to: 005b061c (CONDITIONAL_JUMP)  ; LAB_005b061c
    ADD EDX,EDX                         ; 005b0615
    JNZ 0x005b061a                      ; 005b0617
        ;   XREF to: 005b061a (CONDITIONAL_JUMP)  ; LAB_005b061a
    RET                                 ; 005b0619
    RCR EDX,0x1                         ; 005b061a
        ;   Label: LAB_005b061a
    OR EBX,EBX                          ; 005b061c
        ;   Label: LAB_005b061c
    JNZ 0x005b062b                      ; 005b061e
        ;   XREF to: 005b062b (CONDITIONAL_JUMP)  ; LAB_005b062b
    ADD ECX,ECX                         ; 005b0620
    JNZ 0x005b0629                      ; 005b0622
        ;   XREF to: 005b0629 (CONDITIONAL_JUMP)  ; LAB_005b0629
    SUB EAX,EAX                         ; 005b0624
    SUB EDX,EDX                         ; 005b0626
    RET                                 ; 005b0628
    RCR ECX,0x1                         ; 005b0629
        ;   Label: LAB_005b0629
    CMP byte ptr [0x006075c1],0x0       ; 005b062b | DAT_006075c1
        ;   Label: LAB_005b062b
    JZ 0x005b0643                       ; 005b0632
        ;   XREF to: 005b0643 (CONDITIONAL_JUMP)  ; LAB_005b0643
    PUSH EDX                            ; 005b0634
    PUSH EAX                            ; 005b0635
    FLD double ptr [ESP]                ; 005b0636
    PUSH ECX                            ; 005b0639
    PUSH EBX                            ; 005b063a
    FMUL double ptr [ESP]               ; 005b063b
    JMP 0x005b0486                      ; 005b063e
        ;   XREF to: 005b0486 (UNCONDITIONAL_JUMP)  ; LAB_005b0486
    PUSH EBP                            ; 005b0643
        ;   Label: LAB_005b0643
    PUSH EDI                            ; 005b0644
    PUSH ESI                            ; 005b0645
    MOV EDI,EDX                         ; 005b0646
    MOV ESI,ECX                         ; 005b0648
    SAR EDI,0x14                        ; 005b064a
    SAR ECX,0x14                        ; 005b064d
    AND EDI,0x800007ff                  ; 005b0650
    AND ECX,0x800007ff                  ; 005b0656
    ROL EDI,0x10                        ; 005b065c
    ROL ECX,0x10                        ; 005b065f
    ADD CX,DI                           ; 005b0662
    ROL EDI,0x10                        ; 005b0665
    ROL ECX,0x10                        ; 005b0668
    AND EDX,0xfffff                     ; 005b066b
    AND ESI,0xfffff                     ; 005b0671
    OR DI,DI                            ; 005b0677
    JNZ 0x005b068c                      ; 005b067a
        ;   XREF to: 005b068c (CONDITIONAL_JUMP)  ; LAB_005b068c
    INC DI                              ; 005b067c
    DEC DI                              ; 005b067e
        ;   Label: LAB_005b067e
    ADD EAX,EAX                         ; 005b0680
    ADC EDX,EDX                         ; 005b0682
    TEST EDX,0x100000                   ; 005b0684
    JZ 0x005b067e                       ; 005b068a
        ;   XREF to: 005b067e (CONDITIONAL_JUMP)  ; LAB_005b067e
    OR EDX,0x100000                     ; 005b068c
        ;   Label: LAB_005b068c
    OR CX,CX                            ; 005b0692
    JNZ 0x005b06a7                      ; 005b0695
        ;   XREF to: 005b06a7 (CONDITIONAL_JUMP)  ; LAB_005b06a7
    INC CX                              ; 005b0697
    DEC CX                              ; 005b0699
        ;   Label: LAB_005b0699
    ADD EBX,EBX                         ; 005b069b
    ADC ESI,ESI                         ; 005b069d
    TEST ESI,0x100000                   ; 005b069f
    JZ 0x005b0699                       ; 005b06a5
        ;   XREF to: 005b0699 (CONDITIONAL_JUMP)  ; LAB_005b0699
    OR ESI,0x100000                     ; 005b06a7
        ;   Label: LAB_005b06a7
    ADD CX,DI                           ; 005b06ad
    SUB CX,0x3ff                        ; 005b06b0
    JS 0x005b06c8                       ; 005b06b5
        ;   XREF to: 005b06c8 (CONDITIONAL_JUMP)  ; LAB_005b06c8
    CMP CX,0x7ff                        ; 005b06b7
    JC 0x005b06c8                       ; 005b06bc
        ;   XREF to: 005b06c8 (CONDITIONAL_JUMP)  ; LAB_005b06c8
    MOV EAX,ECX                         ; 005b06be
    POP ESI                             ; 005b06c0
    POP EDI                             ; 005b06c1
    POP EBP                             ; 005b06c2
    JMP 0x005b0e5b                      ; 005b06c3
        ;   XREF to: 005b0e5b (UNCONDITIONAL_JUMP)  ; LAB_005b0e5b
    CMP CX,-0x35                        ; 005b06c8
        ;   Label: LAB_005b06c8
    JGE 0x005b06d6                      ; 005b06cc
        ;   XREF to: 005b06d6 (CONDITIONAL_JUMP)  ; LAB_005b06d6
    POP ESI                             ; 005b06ce
    POP EDI                             ; 005b06cf
    POP EBP                             ; 005b06d0
    JMP 0x005b0e3e                      ; 005b06d1
        ;   XREF to: 005b0e3e (UNCONDITIONAL_JUMP)  ; LAB_005b0e3e
    PUSH ECX                            ; 005b06d6
        ;   Label: LAB_005b06d6
    MOV CL,0xb                          ; 005b06d7
    SHLD EDX,EAX,CL                     ; 005b06d9
    SHLD EAX,EBP,CL                     ; 005b06dc
    AND EAX,0xfffff800                  ; 005b06df
    SHLD ESI,EBX,CL                     ; 005b06e4
    SHLD EBX,EBP,CL                     ; 005b06e7
    AND EBX,0xfffff800                  ; 005b06ea
    SUB EBP,EBP                         ; 005b06f0
    PUSH ESI                            ; 005b06f2
    PUSH EDX                            ; 005b06f3
    PUSH EAX                            ; 005b06f4
    MUL EBX                             ; 005b06f5
    XCHG EAX,ESI                        ; 005b06f7
    MOV ECX,EDX                         ; 005b06f8
    POP EDX                             ; 005b06fa
    MUL EDX                             ; 005b06fb
    MOV EDI,EDX                         ; 005b06fd
    ADD ECX,EAX                         ; 005b06ff
    ADC EDI,EBP                         ; 005b0701
    ADC EBP,EBP                         ; 005b0703
    POP EAX                             ; 005b0705
    XCHG EAX,EBX                        ; 005b0706
    MUL EBX                             ; 005b0707
    ADD ECX,EAX                         ; 005b0709
    ADC EDI,EDX                         ; 005b070b
    ADC EBP,0x0                         ; 005b070d
    MOV EAX,EBX                         ; 005b0710
    POP EDX                             ; 005b0712
    MUL EDX                             ; 005b0713
    ADD EAX,EDI                         ; 005b0715
    ADC EDX,EBP                         ; 005b0717
    SUB EBX,EBX                         ; 005b0719
    MOV CL,0xa                          ; 005b071b
    SHRD EBX,EAX,CL                     ; 005b071d
    SHRD EAX,EDX,CL                     ; 005b0720
    SHRD EDX,EBX,CL                     ; 005b0723
    POP ECX                             ; 005b0726
    TEST EDX,0x200000                   ; 005b0727
        ;   Label: LAB_005b0727
    JZ 0x005b0740                       ; 005b072d
        ;   XREF to: 005b0740 (CONDITIONAL_JUMP)  ; LAB_005b0740
    SHR EDX,0x1                         ; 005b072f
    RCR EAX,0x1                         ; 005b0731
    RCR EBX,0x1                         ; 005b0733
    INC CX                              ; 005b0735
    CMP CX,0x7ff                        ; 005b0737
    JZ 0x005b07a4                       ; 005b073c
        ;   XREF to: 005b07a4 (CONDITIONAL_JUMP)  ; LAB_005b07a4
    JMP 0x005b0727                      ; 005b073e
        ;   XREF to: 005b0727 (UNCONDITIONAL_JUMP)  ; LAB_005b0727
    ADD EBX,EBX                         ; 005b0740
        ;   Label: LAB_005b0740
    JNC 0x005b076e                      ; 005b0742
        ;   XREF to: 005b076e (CONDITIONAL_JUMP)  ; LAB_005b076e
    JNZ 0x005b0753                      ; 005b0744
        ;   XREF to: 005b0753 (CONDITIONAL_JUMP)  ; LAB_005b0753
    OR ESI,ESI                          ; 005b0746
    SETNZ BL                            ; 005b0748
    SHR EBX,0x1                         ; 005b074b
    JC 0x005b0753                       ; 005b074d
        ;   XREF to: 005b0753 (CONDITIONAL_JUMP)  ; LAB_005b0753
    MOV ESI,EAX                         ; 005b074f
    SHR ESI,0x1                         ; 005b0751
    ADC EAX,0x0                         ; 005b0753
        ;   Label: LAB_005b0753
    ADC EDX,0x0                         ; 005b0756
    TEST EDX,0x200000                   ; 005b0759
    JZ 0x005b076e                       ; 005b075f
        ;   XREF to: 005b076e (CONDITIONAL_JUMP)  ; LAB_005b076e
    SHR EDX,0x1                         ; 005b0761
    RCR EAX,0x1                         ; 005b0763
    INC CX                              ; 005b0765
    CMP CX,0x7ff                        ; 005b0767
    JZ 0x005b07a4                       ; 005b076c
        ;   XREF to: 005b07a4 (CONDITIONAL_JUMP)  ; LAB_005b07a4
    OR CX,CX                            ; 005b076e
        ;   Label: LAB_005b076e
    JG 0x005b0789                       ; 005b0771
        ;   XREF to: 005b0789 (CONDITIONAL_JUMP)  ; LAB_005b0789
    JNZ 0x005b0779                      ; 005b0773
        ;   XREF to: 005b0779 (CONDITIONAL_JUMP)  ; LAB_005b0779
    MOV CL,0x1                          ; 005b0775
    JMP 0x005b077e                      ; 005b0777
        ;   XREF to: 005b077e (UNCONDITIONAL_JUMP)  ; LAB_005b077e
    NEG CX                              ; 005b0779
        ;   Label: LAB_005b0779
    DEC CX                              ; 005b077c
    SUB EBX,EBX                         ; 005b077e
        ;   Label: LAB_005b077e
    SHRD EAX,EDX,CL                     ; 005b0780
    SHRD EDX,EBX,CL                     ; 005b0783
    SUB CX,CX                           ; 005b0786
    AND EDX,0xfffff                     ; 005b0789
        ;   Label: LAB_005b0789
    MOV ESI,ECX                         ; 005b078f
    ROR ECX,0xb                         ; 005b0791
    ADD ESI,ESI                         ; 005b0794
    RCR ECX,0x1                         ; 005b0796
    AND ECX,0xfff00000                  ; 005b0798
    OR EDX,ECX                          ; 005b079e
    POP ESI                             ; 005b07a0
    POP EDI                             ; 005b07a1
    POP EBP                             ; 005b07a2
    RET                                 ; 005b07a3
    MOV EAX,ECX                         ; 005b07a4
        ;   Label: LAB_005b07a4
    POP ESI                             ; 005b07a6
    POP EDI                             ; 005b07a7
    POP EBP                             ; 005b07a8
    JMP 0x005b0e5b                      ; 005b07a9
        ;   XREF to: 005b0e5b (UNCONDITIONAL_JUMP)  ; LAB_005b0e5b
    SUB EDX,EDX                         ; 005b0e3e
        ;   Label: LAB_005b0e3e
    SUB EAX,EAX                         ; 005b0e40
    RET                                 ; 005b0e42
    PUSH EAX                            ; 005b0e5b
        ;   Label: LAB_005b0e5b
    CALL FUN_005a92dc                   ; 005b0e5c
        ;   XREF to: 005a92dc (UNCONDITIONAL_CALL)  ; undefined FUN_005a92dc()
    MOV EAX,0x84                        ; 005b0e61
    CALL FUN_005b1960                   ; 005b0e66
        ;   XREF to: 005b1960 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1960()
    POP EAX                             ; 005b0e6b
    AND EAX,0x80000000                  ; 005b0e6c
        ;   Label: LAB_005b0e6c
    OR EAX,0x7ff00000                   ; 005b0e71
    MOV EDX,EAX                         ; 005b0e76
    SUB EAX,EAX                         ; 005b0e78
    RET                                 ; 005b0e7a

