; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005cd6c4(void)
;
;
; XREF[1]:
;   FUN_005cbd30 at 005cbd88
;
; Referenced Globals:
;   undefined4 DAT_0062621d
;
; *****************************************************************************

section .text

    XOR ECX,0x80000000                  ; 005cd6c4
        ;   Label: FUN_005cd6c4
    OR EBX,EBX                          ; 005cd6ca
    JNZ 0x005cd6d4                      ; 005cd6cc
        ;   XREF to: 005cd6d4 (CONDITIONAL_JUMP)  ; LAB_005cd6d4
    ADD ECX,ECX                         ; 005cd6ce
    JZ 0x005cd6e0                       ; 005cd6d0
        ;   XREF to: 005cd6e0 (CONDITIONAL_JUMP)  ; LAB_005cd6e0
    RCR ECX,0x1                         ; 005cd6d2
    OR EAX,EAX                          ; 005cd6d4
        ;   Label: LAB_005cd6d4
    JNZ 0x005cd6e3                      ; 005cd6d6
        ;   XREF to: 005cd6e3 (CONDITIONAL_JUMP)  ; LAB_005cd6e3
    ADD EDX,EDX                         ; 005cd6d8
    JNZ 0x005cd6e1                      ; 005cd6da
        ;   XREF to: 005cd6e1 (CONDITIONAL_JUMP)  ; LAB_005cd6e1
    MOV EDX,ECX                         ; 005cd6dc
    MOV EAX,EBX                         ; 005cd6de
    RET                                 ; 005cd6e0
        ;   Label: LAB_005cd6e0
    RCR EDX,0x1                         ; 005cd6e1
        ;   Label: LAB_005cd6e1
    CMP byte ptr [0x0062621d],0x0       ; 005cd6e3 | DAT_0062621d
        ;   Label: LAB_005cd6e3
    JZ 0x005cd70d                       ; 005cd6ea
        ;   XREF to: 005cd70d (CONDITIONAL_JUMP)  ; LAB_005cd70d
    PUSH EDX                            ; 005cd6ec
    PUSH EAX                            ; 005cd6ed
    FLD double ptr [ESP]                ; 005cd6ee
    PUSH ECX                            ; 005cd6f1
    PUSH EBX                            ; 005cd6f2
    FADD double ptr [ESP]               ; 005cd6f3
    FSTP double ptr [ESP + 0x8]         ; 005cd6f6
        ;   Label: LAB_005cd6f6
    ADD ESP,0x8                         ; 005cd6fa
    WAIT                                ; 005cd6fd
    POP EAX                             ; 005cd6fe
    POP EDX                             ; 005cd6ff
    CMP EDX,0x80000000                  ; 005cd700
    JNZ 0x005cd70c                      ; 005cd706
        ;   XREF to: 005cd70c (CONDITIONAL_JUMP)  ; LAB_005cd70c
    SUB EDX,EDX                         ; 005cd708
    MOV EAX,EDX                         ; 005cd70a
    RET                                 ; 005cd70c
        ;   Label: LAB_005cd70c
    PUSH EBP                            ; 005cd70d
        ;   Label: LAB_005cd70d
    PUSH EDI                            ; 005cd70e
    PUSH ESI                            ; 005cd70f
    MOV EDI,EDX                         ; 005cd710
    MOV ESI,ECX                         ; 005cd712
    SAR EDI,0x14                        ; 005cd714
    SAR ECX,0x14                        ; 005cd717
    AND EDI,0x800007ff                  ; 005cd71a
    AND ECX,0x800007ff                  ; 005cd720
    MOV EBP,ECX                         ; 005cd726
    ROL EDI,0x10                        ; 005cd728
    ROL ECX,0x10                        ; 005cd72b
    ADD CX,DI                           ; 005cd72e
    ROL EDI,0x10                        ; 005cd731
    ROL ECX,0x10                        ; 005cd734
    AND EDX,0xfffff                     ; 005cd737
    AND ESI,0xfffff                     ; 005cd73d
    OR DI,DI                            ; 005cd743
    JZ 0x005cd74e                       ; 005cd746
        ;   XREF to: 005cd74e (CONDITIONAL_JUMP)  ; LAB_005cd74e
    OR EDX,0x100000                     ; 005cd748
    OR CX,CX                            ; 005cd74e
        ;   Label: LAB_005cd74e
    JZ 0x005cd759                       ; 005cd751
        ;   XREF to: 005cd759 (CONDITIONAL_JUMP)  ; LAB_005cd759
    OR ESI,0x100000                     ; 005cd753
    ADD EAX,EAX                         ; 005cd759
        ;   Label: LAB_005cd759
    ADC EDX,EDX                         ; 005cd75b
    ADD EBX,EBX                         ; 005cd75d
    ADC ESI,ESI                         ; 005cd75f
    SUB CX,DI                           ; 005cd761
    JZ 0x005cd795                       ; 005cd764
        ;   XREF to: 005cd795 (CONDITIONAL_JUMP)  ; LAB_005cd795
    JNC 0x005cd770                      ; 005cd766
        ;   XREF to: 005cd770 (CONDITIONAL_JUMP)  ; LAB_005cd770
    MOV EBP,EDI                         ; 005cd768
    NEG CX                              ; 005cd76a
    XCHG EAX,EBX                        ; 005cd76d
    XCHG EDX,ESI                        ; 005cd76e
    CMP CX,0x36                         ; 005cd770
        ;   Label: LAB_005cd770
    JBE 0x005cd795                      ; 005cd774
        ;   XREF to: 005cd795 (CONDITIONAL_JUMP)  ; LAB_005cd795
    MOV EDX,ESI                         ; 005cd776
    MOV EAX,EBX                         ; 005cd778
    ADD EBP,EBP                         ; 005cd77a
    RCR EDX,0x1                         ; 005cd77c
    RCR EAX,0x1                         ; 005cd77e
    AND EDX,0x800fffff                  ; 005cd780
    ROR EBP,0xd                         ; 005cd786
    AND EBP,0x7ff00000                  ; 005cd789
    OR EDX,EBP                          ; 005cd78f
    POP ESI                             ; 005cd791
    POP EDI                             ; 005cd792
    POP EBP                             ; 005cd793
    RET                                 ; 005cd794
    OR ECX,ECX                          ; 005cd795
        ;   Label: LAB_005cd795
    JNS 0x005cd7a6                      ; 005cd797
        ;   XREF to: 005cd7a6 (CONDITIONAL_JUMP)  ; LAB_005cd7a6
    NEG ESI                             ; 005cd799
    NEG EBX                             ; 005cd79b
    SBB ESI,0x0                         ; 005cd79d
    XOR EBP,0x80000000                  ; 005cd7a0
    SUB EDI,EDI                         ; 005cd7a6
        ;   Label: LAB_005cd7a6
    CMP CL,0x0                          ; 005cd7a8
    JZ 0x005cd7d0                       ; 005cd7ab
        ;   XREF to: 005cd7d0 (CONDITIONAL_JUMP)  ; LAB_005cd7d0
    PUSH EBX                            ; 005cd7ad
    SUB EBX,EBX                         ; 005cd7ae
    CMP CL,0x20                         ; 005cd7b0
    JC 0x005cd7c2                       ; 005cd7b3
        ;   XREF to: 005cd7c2 (CONDITIONAL_JUMP)  ; LAB_005cd7c2
    OR EAX,EAX                          ; 005cd7b5
    SETNZ BL                            ; 005cd7b7
    MOV EDI,EBX                         ; 005cd7ba
    SUB EBX,EBX                         ; 005cd7bc
    MOV EAX,EDX                         ; 005cd7be
    SUB EDX,EDX                         ; 005cd7c0
    SHRD EBX,EAX,CL                     ; 005cd7c2
        ;   Label: LAB_005cd7c2
    OR EDI,EBX                          ; 005cd7c5
    SUB EBX,EBX                         ; 005cd7c7
    SHRD EAX,EDX,CL                     ; 005cd7c9
    SHRD EDX,EBX,CL                     ; 005cd7cc
    POP EBX                             ; 005cd7cf
    ADD EAX,EBX                         ; 005cd7d0
        ;   Label: LAB_005cd7d0
    ADC EDX,ESI                         ; 005cd7d2
    JNS 0x005cd7f9                      ; 005cd7d4
        ;   XREF to: 005cd7f9 (CONDITIONAL_JUMP)  ; LAB_005cd7f9
    CMP CL,0x35                         ; 005cd7d6
    JC 0x005cd7ec                       ; 005cd7d9
        ;   XREF to: 005cd7ec (CONDITIONAL_JUMP)  ; LAB_005cd7ec
    TEST EDI,0x7fffffff                 ; 005cd7db
    SETNZ BL                            ; 005cd7e1
    SHR EBX,0x1                         ; 005cd7e4
    ADC EAX,0x0                         ; 005cd7e6
    ADC EDX,0x0                         ; 005cd7e9
    NEG EDX                             ; 005cd7ec
        ;   Label: LAB_005cd7ec
    NEG EAX                             ; 005cd7ee
    SBB EDX,0x0                         ; 005cd7f0
    XOR EBP,0x80000000                  ; 005cd7f3
    MOV EBX,EAX                         ; 005cd7f9
        ;   Label: LAB_005cd7f9
    OR EBX,EDX                          ; 005cd7fb
    JZ 0x005cd869                       ; 005cd7fd
        ;   XREF to: 005cd869 (CONDITIONAL_JUMP)  ; LAB_005cd869
    OR BP,BP                            ; 005cd7ff
    JZ 0x005cd86d                       ; 005cd802
        ;   XREF to: 005cd86d (CONDITIONAL_JUMP)  ; LAB_005cd86d
    TEST EDX,0x7fe00000                 ; 005cd804
        ;   Label: LAB_005cd804
    JNZ 0x005cd816                      ; 005cd80a
        ;   XREF to: 005cd816 (CONDITIONAL_JUMP)  ; LAB_005cd816
    DEC BP                              ; 005cd80c
    JZ 0x005cd86d                       ; 005cd80e
        ;   XREF to: 005cd86d (CONDITIONAL_JUMP)  ; LAB_005cd86d
    ADD EAX,EAX                         ; 005cd810
    ADC EDX,EDX                         ; 005cd812
    JMP 0x005cd804                      ; 005cd814
        ;   XREF to: 005cd804 (UNCONDITIONAL_JUMP)  ; LAB_005cd804
    TEST EDX,0x400000                   ; 005cd816
        ;   Label: LAB_005cd816
    JZ 0x005cd82e                       ; 005cd81c
        ;   XREF to: 005cd82e (CONDITIONAL_JUMP)  ; LAB_005cd82e
    SHR EDX,0x1                         ; 005cd81e
    RCR EAX,0x1                         ; 005cd820
    ADC EDI,0x0                         ; 005cd822
    INC BP                              ; 005cd825
    CMP BP,0x7ff                        ; 005cd827
    JZ 0x005cd877                       ; 005cd82c
        ;   XREF to: 005cd877 (CONDITIONAL_JUMP)  ; LAB_005cd877
    SHR EDX,0x1                         ; 005cd82e
        ;   Label: LAB_005cd82e
    RCR EAX,0x1                         ; 005cd830
    JNC 0x005cd858                      ; 005cd832
        ;   XREF to: 005cd858 (CONDITIONAL_JUMP)  ; LAB_005cd858
    OR EDI,EDI                          ; 005cd834
    SETNZ BL                            ; 005cd836
    OR EBX,EAX                          ; 005cd839
    SHR EBX,0x1                         ; 005cd83b
    ADC EAX,0x0                         ; 005cd83d
    ADC EDX,0x0                         ; 005cd840
    TEST EDX,0x200000                   ; 005cd843
    JZ 0x005cd858                       ; 005cd849
        ;   XREF to: 005cd858 (CONDITIONAL_JUMP)  ; LAB_005cd858
    SHR EDX,0x1                         ; 005cd84b
    RCR EAX,0x1                         ; 005cd84d
    INC BP                              ; 005cd84f
    CMP BP,0x7ff                        ; 005cd851
    JZ 0x005cd877                       ; 005cd856
        ;   XREF to: 005cd877 (CONDITIONAL_JUMP)  ; LAB_005cd877
    AND EDX,0xfffff                     ; 005cd858
        ;   Label: LAB_005cd858
    MOV ECX,EBP                         ; 005cd85e
    SHL EBP,0x15                        ; 005cd860
    ADD ECX,ECX                         ; 005cd863
    RCR EBP,0x1                         ; 005cd865
    OR EDX,EBP                          ; 005cd867
    POP ESI                             ; 005cd869
        ;   Label: LAB_005cd869
    POP EDI                             ; 005cd86a
    POP EBP                             ; 005cd86b
    RET                                 ; 005cd86c
    ADD EBP,EBP                         ; 005cd86d
        ;   Label: LAB_005cd86d
    RCR EDX,0x1                         ; 005cd86f
    RCR EAX,0x1                         ; 005cd871
    POP ESI                             ; 005cd873
    POP EDI                             ; 005cd874
    POP EBP                             ; 005cd875
    RET                                 ; 005cd876
    MOV EAX,EBP                         ; 005cd877
        ;   Label: LAB_005cd877
    POP ESI                             ; 005cd879
    POP EDI                             ; 005cd87a
    POP EBP                             ; 005cd87b
    JMP 0x005ce0cb                      ; 005cd87c
        ;   XREF to: 005ce0cb (UNCONDITIONAL_JUMP)  ; LAB_005ce0cb

