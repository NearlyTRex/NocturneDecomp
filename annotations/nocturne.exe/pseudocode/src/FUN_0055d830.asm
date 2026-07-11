; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055d830(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_0055e040 at 0055e60f
;
; Referenced Globals:
;   undefined4 DAT_01c039a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d830
        ;   Label: FUN_0055d830
    PUSH ESI                            ; 0055d831
    PUSH EDI                            ; 0055d832
    PUSH EBP                            ; 0055d833
    MOV ECX,dword ptr [ESP + 0x14]      ; 0055d834
    MOV EDI,dword ptr [ESP + 0x18]      ; 0055d838
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0055d83c
    MOV EBX,dword ptr [EDI + 0x4]       ; 0055d840
    MOV EDX,dword ptr [ECX + 0x8]       ; 0055d843
    MOV EAX,dword ptr [ECX + 0x4]       ; 0055d846
    MOV EBP,dword ptr [EDI + 0x8]       ; 0055d849
    ADD EBX,EDX                         ; 0055d84c
    ADD EAX,EBP                         ; 0055d84e
    SUB EBX,EAX                         ; 0055d850
    MOV EAX,EDX                         ; 0055d852
    MOV EDX,dword ptr [ECX + 0x4]       ; 0055d854
    SUB EAX,EDX                         ; 0055d857
    MOV EDX,EAX                         ; 0055d859
    CMP EDX,EBX                         ; 0055d85b
    JGE 0x0055d871                      ; 0055d85d
        ;   XREF to: 0055d871 (CONDITIONAL_JUMP)  ; LAB_0055d871
    NEG EBX                             ; 0055d85f
    CMP EDX,EBX                         ; 0055d861
    JLE 0x0055d878                      ; 0055d863
        ;   XREF to: 0055d878 (CONDITIONAL_JUMP)  ; LAB_0055d878
    NEG EBX                             ; 0055d865
    XOR EAX,EAX                         ; 0055d867
    SAR EDX,0x1                         ; 0055d869
    RCR EAX,0x1                         ; 0055d86b
    IDIV EBX                            ; 0055d86d
    JMP 0x0055d87f                      ; 0055d86f
        ;   XREF to: 0055d87f (UNCONDITIONAL_JUMP)  ; LAB_0055d87f
    MOV EAX,0x7fffffff                  ; 0055d871
        ;   Label: LAB_0055d871
    JMP 0x0055d87f                      ; 0055d876
        ;   XREF to: 0055d87f (UNCONDITIONAL_JUMP)  ; LAB_0055d87f
    NEG EBX                             ; 0055d878
        ;   Label: LAB_0055d878
    MOV EAX,0x80000000                  ; 0055d87a
    MOV EBX,EAX                         ; 0055d87f
        ;   Label: LAB_0055d87f
    MOV EBP,dword ptr [ECX + 0x8]       ; 0055d881
    MOV EAX,dword ptr [EDI + 0x8]       ; 0055d884
    MOV EDX,EBX                         ; 0055d887
    SUB EAX,EBP                         ; 0055d889
    IMUL EDX                            ; 0055d88b
    ADD EAX,EAX                         ; 0055d88d
    ADC EDX,EDX                         ; 0055d88f
    MOV EAX,EDX                         ; 0055d891
    MOV EDX,dword ptr [ECX + 0x8]       ; 0055d893
    ADD EAX,EDX                         ; 0055d896
    MOV dword ptr [ESI + 0x8],EAX       ; 0055d898
    MOV dword ptr [ESI + 0x4],EAX       ; 0055d89b
    MOV EAX,dword ptr [EDI]             ; 0055d89e
    SUB EAX,dword ptr [ECX]             ; 0055d8a0
    MOV EDX,EBX                         ; 0055d8a2
    IMUL EDX                            ; 0055d8a4
    ADD EAX,EAX                         ; 0055d8a6
    ADC EDX,EDX                         ; 0055d8a8
    MOV EAX,EDX                         ; 0055d8aa
    MOV EDX,dword ptr [ECX]             ; 0055d8ac
    ADD EAX,EDX                         ; 0055d8ae
    MOV dword ptr [ESI],EAX             ; 0055d8b0
    MOV AH,byte ptr [0x01c039a0]        ; 0055d8b2 | DAT_01c039a0
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0055d8b8
    TEST AH,0x4                         ; 0055d8bf
    JNZ 0x0055d8c9                      ; 0055d8c2
        ;   XREF to: 0055d8c9 (CONDITIONAL_JUMP)  ; LAB_0055d8c9
    POP EBP                             ; 0055d8c4
    POP EDI                             ; 0055d8c5
    POP ESI                             ; 0055d8c6
    POP EBX                             ; 0055d8c7
    RET                                 ; 0055d8c8
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055d8c9
        ;   Label: LAB_0055d8c9
    MOV EDI,dword ptr [ECX + 0x20]      ; 0055d8cc
    MOV EDX,EBX                         ; 0055d8cf
    SUB EAX,EDI                         ; 0055d8d1
    IMUL EDX                            ; 0055d8d3
    ADD EAX,EAX                         ; 0055d8d5
    ADC EDX,EDX                         ; 0055d8d7
    MOV EAX,EDX                         ; 0055d8d9
    MOV EDX,dword ptr [ECX + 0x20]      ; 0055d8db
    ADD EAX,EDX                         ; 0055d8de
    MOV dword ptr [ESI + 0x20],EAX      ; 0055d8e0
    POP EBP                             ; 0055d8e3
    POP EDI                             ; 0055d8e4
    POP ESI                             ; 0055d8e5
    POP EBX                             ; 0055d8e6
    RET                                 ; 0055d8e7

