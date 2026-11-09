; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6750(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0a00 at 005c0acd
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c6750
        ;   Label: crt_unknown.c_FUN_005c6750
    PUSH EDI                            ; 005c6751
    PUSH EBP                            ; 005c6752
    MOV ECX,EBX                         ; 005c6753
    TEST EAX,EAX                        ; 005c6755
    JZ 0x005c687a                       ; 005c6757
        ;   XREF to: 005c687a (CONDITIONAL_JUMP)  ; LAB_005c687a
    LEA EBX,[EAX + -0x4]                ; 005c675d
    TEST byte ptr [EBX],0x1             ; 005c6760
    JZ 0x005c687a                       ; 005c6763
        ;   XREF to: 005c687a (CONDITIONAL_JUMP)  ; LAB_005c687a
    MOV EDX,dword ptr [EBX]             ; 005c6769
    AND DL,0xfe                         ; 005c676b
    LEA EAX,[EBX + EDX*0x1]             ; 005c676e
    MOV ESI,ECX                         ; 005c6771
    TEST byte ptr [EAX],0x1             ; 005c6773
    JNZ 0x005c679a                      ; 005c6776
        ;   XREF to: 005c679a (CONDITIONAL_JUMP)  ; LAB_005c679a
    MOV EDI,dword ptr [EAX]             ; 005c6778
    ADD EDX,EDI                         ; 005c677a
    MOV dword ptr [EBX],EDX             ; 005c677c
    CMP EAX,dword ptr [ECX + 0xc]       ; 005c677e
    JNZ 0x005c6786                      ; 005c6781
        ;   XREF to: 005c6786 (CONDITIONAL_JUMP)  ; LAB_005c6786
    MOV dword ptr [ECX + 0xc],EBX       ; 005c6783
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c6786
        ;   Label: LAB_005c6786
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c6789
    MOV dword ptr [EDX + 0x8],EAX       ; 005c678c
    MOV dword ptr [EAX + 0x4],EDX       ; 005c678f
    DEC dword ptr [ESI + 0x1c]          ; 005c6792
    JMP 0x005c682e                      ; 005c6795
        ;   XREF to: 005c682e (UNCONDITIONAL_JUMP)  ; LAB_005c682e
    MOV dword ptr [EBX],EDX             ; 005c679a
        ;   Label: LAB_005c679a
    MOV EAX,dword ptr [ECX + 0xc]       ; 005c679c
    CMP EBX,EAX                         ; 005c679f
    JNC 0x005c67b9                      ; 005c67a1
        ;   XREF to: 005c67b9 (CONDITIONAL_JUMP)  ; LAB_005c67b9
    CMP EBX,dword ptr [EAX + 0x4]       ; 005c67a3
    JA 0x005c682e                       ; 005c67a6
        ;   XREF to: 005c682e (CONDITIONAL_JUMP)  ; LAB_005c682e
    MOV EAX,dword ptr [ECX + 0x28]      ; 005c67ac
    CMP EBX,EAX                         ; 005c67af
    JC 0x005c682e                       ; 005c67b1
        ;   XREF to: 005c682e (CONDITIONAL_JUMP)  ; LAB_005c682e
    JMP 0x005c67d2                      ; 005c67b7
        ;   XREF to: 005c67d2 (UNCONDITIONAL_JUMP)  ; LAB_005c67d2
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c67b9
        ;   Label: LAB_005c67b9
    CMP EBX,EAX                         ; 005c67bc
    JC 0x005c682e                       ; 005c67be
        ;   XREF to: 005c682e (CONDITIONAL_JUMP)  ; LAB_005c682e
    LEA EAX,[ECX + 0x20]                ; 005c67c4
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c67c7
    CMP EBX,EDX                         ; 005c67ca
    JA 0x005c682e                       ; 005c67cc
        ;   XREF to: 005c682e (CONDITIONAL_JUMP)  ; LAB_005c682e
    MOV EDI,dword ptr [ESI + 0x1c]      ; 005c67d2
        ;   Label: LAB_005c67d2
    MOV EAX,dword ptr [ESI + 0x18]      ; 005c67d5
    XOR EDX,EDX                         ; 005c67d8
    LEA ECX,[EDI + 0x1]                 ; 005c67da
    DIV ECX                             ; 005c67dd
    MOV ECX,EAX                         ; 005c67df
    CMP EAX,EDI                         ; 005c67e1
    JNC 0x005c680d                      ; 005c67e3
        ;   XREF to: 005c680d (CONDITIONAL_JUMP)  ; LAB_005c680d
    MOV EAX,dword ptr [ESI + 0x18]      ; 005c67e5
    SUB EAX,EDI                         ; 005c67e8
    ADD ECX,ECX                         ; 005c67ea
    CMP EAX,EDI                         ; 005c67ec
    JA 0x005c67f5                       ; 005c67ee
        ;   XREF to: 005c67f5 (CONDITIONAL_JUMP)  ; LAB_005c67f5
    MOV ECX,0xffffffff                  ; 005c67f0
    MOV EAX,dword ptr [EBX]             ; 005c67f5
        ;   Label: LAB_005c67f5
    ADD EAX,EBX                         ; 005c67f7
    MOV EDX,dword ptr [EAX]             ; 005c67f9
        ;   Label: LAB_005c67f9
    TEST DL,0x1                         ; 005c67fb
    JZ 0x005c682e                       ; 005c67fe
        ;   XREF to: 005c682e (CONDITIONAL_JUMP)  ; LAB_005c682e
    CMP EDX,-0x1                        ; 005c6800
    JZ 0x005c680d                       ; 005c6803
        ;   XREF to: 005c680d (CONDITIONAL_JUMP)  ; LAB_005c680d
    AND DL,0xfe                         ; 005c6805
    ADD EAX,EDX                         ; 005c6808
    DEC ECX                             ; 005c680a
    JNZ 0x005c67f9                      ; 005c680b
        ;   XREF to: 005c67f9 (CONDITIONAL_JUMP)  ; LAB_005c67f9
    MOV EAX,dword ptr [ESI + 0xc]       ; 005c680d
        ;   Label: LAB_005c680d
    CMP EBX,EAX                         ; 005c6810
    JNC 0x005c6817                      ; 005c6812
        ;   XREF to: 005c6817 (CONDITIONAL_JUMP)  ; LAB_005c6817
    MOV EAX,dword ptr [ESI + 0x28]      ; 005c6814
    CMP EBX,EAX                         ; 005c6817
        ;   Label: LAB_005c6817
    JC 0x005c682e                       ; 005c6819
        ;   XREF to: 005c682e (CONDITIONAL_JUMP)  ; LAB_005c682e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c681b
    CMP EBX,EAX                         ; 005c681e
    JC 0x005c682e                       ; 005c6820
        ;   XREF to: 005c682e (CONDITIONAL_JUMP)  ; LAB_005c682e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c6822
    CMP EBX,EAX                         ; 005c6825
    JC 0x005c682e                       ; 005c6827
        ;   XREF to: 005c682e (CONDITIONAL_JUMP)  ; LAB_005c682e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c6829
    JMP 0x005c6817                      ; 005c682c
        ;   XREF to: 005c6817 (UNCONDITIONAL_JUMP)  ; LAB_005c6817
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c682e
        ;   Label: LAB_005c682e
    MOV EDI,dword ptr [EDX]             ; 005c6831
    ADD EDI,EDX                         ; 005c6833
    MOV ECX,dword ptr [EBX]             ; 005c6835
    CMP EDI,EBX                         ; 005c6837
    JNZ 0x005c684d                      ; 005c6839
        ;   XREF to: 005c684d (CONDITIONAL_JUMP)  ; LAB_005c684d
    MOV EBP,dword ptr [EDX]             ; 005c683b
    ADD ECX,EBP                         ; 005c683d
    MOV dword ptr [EDX],ECX             ; 005c683f
    CMP EBX,dword ptr [ESI + 0xc]       ; 005c6841
    JNZ 0x005c6849                      ; 005c6844
        ;   XREF to: 005c6849 (CONDITIONAL_JUMP)  ; LAB_005c6849
    MOV dword ptr [ESI + 0xc],EDX       ; 005c6846
    MOV EBX,EDX                         ; 005c6849
        ;   Label: LAB_005c6849
    JMP 0x005c685c                      ; 005c684b
        ;   XREF to: 005c685c (UNCONDITIONAL_JUMP)  ; LAB_005c685c
    INC dword ptr [ESI + 0x1c]          ; 005c684d
        ;   Label: LAB_005c684d
    MOV dword ptr [EBX + 0x8],EAX       ; 005c6850
    MOV dword ptr [EBX + 0x4],EDX       ; 005c6853
    MOV dword ptr [EDX + 0x8],EBX       ; 005c6856
    MOV dword ptr [EAX + 0x4],EBX       ; 005c6859
    MOV EDX,dword ptr [ESI + 0x18]      ; 005c685c
        ;   Label: LAB_005c685c
    DEC EDX                             ; 005c685f
    MOV EDI,dword ptr [ESI + 0xc]       ; 005c6860
    MOV dword ptr [ESI + 0x18],EDX      ; 005c6863
    CMP EBX,EDI                         ; 005c6866
    JNC 0x005c6872                      ; 005c6868
        ;   XREF to: 005c6872 (CONDITIONAL_JUMP)  ; LAB_005c6872
    CMP ECX,dword ptr [ESI + 0x10]      ; 005c686a
    JBE 0x005c6872                      ; 005c686d
        ;   XREF to: 005c6872 (CONDITIONAL_JUMP)  ; LAB_005c6872
    MOV dword ptr [ESI + 0x10],ECX      ; 005c686f
    CMP ECX,dword ptr [ESI + 0x14]      ; 005c6872
        ;   Label: LAB_005c6872
    JBE 0x005c687a                      ; 005c6875
        ;   XREF to: 005c687a (CONDITIONAL_JUMP)  ; LAB_005c687a
    MOV dword ptr [ESI + 0x14],ECX      ; 005c6877
    POP EBP                             ; 005c687a
        ;   Label: LAB_005c687a
    POP EDI                             ; 005c687b
    POP ESI                             ; 005c687c
    RET                                 ; 005c687d

