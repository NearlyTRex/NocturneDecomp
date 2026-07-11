; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055d770(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_0055e040 at 0055e575
;
; Referenced Globals:
;   undefined4 DAT_01c039a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d770
        ;   Label: FUN_0055d770
    PUSH ESI                            ; 0055d771
    PUSH EDI                            ; 0055d772
    PUSH EBP                            ; 0055d773
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055d774
    MOV EBP,dword ptr [ESP + 0x18]      ; 0055d778
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0055d77c
    MOV EDX,dword ptr [ESI]             ; 0055d780
    ADD EDX,dword ptr [ESI + 0x8]       ; 0055d782
    MOV EAX,dword ptr [EBP]             ; 0055d785
    MOV EBX,EDX                         ; 0055d788
    MOV ECX,dword ptr [EBP + 0x8]       ; 0055d78a
    SUB EBX,EAX                         ; 0055d78d
    SUB EBX,ECX                         ; 0055d78f
    CMP EDX,EBX                         ; 0055d791
    JGE 0x0055d7a7                      ; 0055d793
        ;   XREF to: 0055d7a7 (CONDITIONAL_JUMP)  ; LAB_0055d7a7
    NEG EBX                             ; 0055d795
    CMP EDX,EBX                         ; 0055d797
    JLE 0x0055d7ae                      ; 0055d799
        ;   XREF to: 0055d7ae (CONDITIONAL_JUMP)  ; LAB_0055d7ae
    NEG EBX                             ; 0055d79b
    XOR EAX,EAX                         ; 0055d79d
    SAR EDX,0x1                         ; 0055d79f
    RCR EAX,0x1                         ; 0055d7a1
    IDIV EBX                            ; 0055d7a3
    JMP 0x0055d7b5                      ; 0055d7a5
        ;   XREF to: 0055d7b5 (UNCONDITIONAL_JUMP)  ; LAB_0055d7b5
    MOV EAX,0x7fffffff                  ; 0055d7a7
        ;   Label: LAB_0055d7a7
    JMP 0x0055d7b5                      ; 0055d7ac
        ;   XREF to: 0055d7b5 (UNCONDITIONAL_JUMP)  ; LAB_0055d7b5
    NEG EBX                             ; 0055d7ae
        ;   Label: LAB_0055d7ae
    MOV EAX,0x80000000                  ; 0055d7b0
    MOV ECX,EAX                         ; 0055d7b5
        ;   Label: LAB_0055d7b5
    MOV EBX,dword ptr [ESI + 0x8]       ; 0055d7b7
    MOV EAX,dword ptr [EBP + 0x8]       ; 0055d7ba
    MOV EDX,ECX                         ; 0055d7bd
    SUB EAX,EBX                         ; 0055d7bf
    IMUL EDX                            ; 0055d7c1
    ADD EAX,EAX                         ; 0055d7c3
    ADC EDX,EDX                         ; 0055d7c5
    MOV EAX,EDX                         ; 0055d7c7
    MOV EDX,dword ptr [ESI + 0x8]       ; 0055d7c9
    ADD EAX,EDX                         ; 0055d7cc
    MOV dword ptr [EDI + 0x8],EAX       ; 0055d7ce
    MOV dword ptr [EDI],EAX             ; 0055d7d1
    NEG EAX                             ; 0055d7d3
    MOV dword ptr [EDI],EAX             ; 0055d7d5
    MOV EAX,dword ptr [EBP + 0x4]       ; 0055d7d7
    SUB EAX,dword ptr [ESI + 0x4]       ; 0055d7da
    MOV EDX,ECX                         ; 0055d7dd
    IMUL EDX                            ; 0055d7df
    ADD EAX,EAX                         ; 0055d7e1
    ADC EDX,EDX                         ; 0055d7e3
    MOV EAX,EDX                         ; 0055d7e5
    MOV EDX,dword ptr [ESI + 0x4]       ; 0055d7e7
    ADD EAX,EDX                         ; 0055d7ea
    MOV dword ptr [EDI + 0x4],EAX       ; 0055d7ec
    MOV AH,byte ptr [0x01c039a0]        ; 0055d7ef | DAT_01c039a0
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0055d7f5
    TEST AH,0x4                         ; 0055d7fc
    JNZ 0x0055d806                      ; 0055d7ff
        ;   XREF to: 0055d806 (CONDITIONAL_JUMP)  ; LAB_0055d806
    POP EBP                             ; 0055d801
    POP EDI                             ; 0055d802
    POP ESI                             ; 0055d803
    POP EBX                             ; 0055d804
    RET                                 ; 0055d805
    MOV EAX,dword ptr [EBP + 0x20]      ; 0055d806
        ;   Label: LAB_0055d806
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055d809
    MOV EDX,ECX                         ; 0055d80c
    SUB EAX,EBX                         ; 0055d80e
    IMUL EDX                            ; 0055d810
    ADD EAX,EAX                         ; 0055d812
    ADC EDX,EDX                         ; 0055d814
    MOV EAX,EDX                         ; 0055d816
    MOV EDX,dword ptr [ESI + 0x20]      ; 0055d818
    ADD EAX,EDX                         ; 0055d81b
    MOV dword ptr [EDI + 0x20],EAX      ; 0055d81d
    POP EBP                             ; 0055d820
    POP EDI                             ; 0055d821
    POP ESI                             ; 0055d822
    POP EBX                             ; 0055d823
    RET                                 ; 0055d824

