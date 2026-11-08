; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b9870(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_005b9fc0 at 005ba629
;
; Referenced Globals:
;   undefined4 DAT_01c51d14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9870
        ;   Label: FUN_005b9870
    PUSH ESI                            ; 005b9871
    PUSH EDI                            ; 005b9872
    PUSH EBP                            ; 005b9873
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b9874
    MOV EBP,dword ptr [ESP + 0x18]      ; 005b9878
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005b987c
    MOV EDX,dword ptr [ESI + 0x4]       ; 005b9880
    MOV ECX,dword ptr [ESI + 0x8]       ; 005b9883
    MOV EAX,dword ptr [EBP + 0x4]       ; 005b9886
    MOV EBX,dword ptr [EBP + 0x8]       ; 005b9889
    ADD EDX,ECX                         ; 005b988c
    ADD EAX,EBX                         ; 005b988e
    MOV EBX,EDX                         ; 005b9890
    SUB EBX,EAX                         ; 005b9892
    CMP EDX,EBX                         ; 005b9894
    JGE 0x005b98aa                      ; 005b9896
        ;   XREF to: 005b98aa (CONDITIONAL_JUMP)  ; LAB_005b98aa
    NEG EBX                             ; 005b9898
    CMP EDX,EBX                         ; 005b989a
    JLE 0x005b98b1                      ; 005b989c
        ;   XREF to: 005b98b1 (CONDITIONAL_JUMP)  ; LAB_005b98b1
    NEG EBX                             ; 005b989e
    XOR EAX,EAX                         ; 005b98a0
    SAR EDX,0x1                         ; 005b98a2
    RCR EAX,0x1                         ; 005b98a4
    IDIV EBX                            ; 005b98a6
    JMP 0x005b98b8                      ; 005b98a8
        ;   XREF to: 005b98b8 (UNCONDITIONAL_JUMP)  ; LAB_005b98b8
    MOV EAX,0x7fffffff                  ; 005b98aa
        ;   Label: LAB_005b98aa
    JMP 0x005b98b8                      ; 005b98af
        ;   XREF to: 005b98b8 (UNCONDITIONAL_JUMP)  ; LAB_005b98b8
    NEG EBX                             ; 005b98b1
        ;   Label: LAB_005b98b1
    MOV EAX,0x80000000                  ; 005b98b3
    MOV ECX,EAX                         ; 005b98b8
        ;   Label: LAB_005b98b8
    MOV EDX,dword ptr [ESI + 0x8]       ; 005b98ba
    MOV EAX,dword ptr [EBP + 0x8]       ; 005b98bd
    SUB EAX,EDX                         ; 005b98c0
    MOV EDX,ECX                         ; 005b98c2
    IMUL EDX                            ; 005b98c4
    ADD EAX,EAX                         ; 005b98c6
    ADC EDX,EDX                         ; 005b98c8
    MOV EAX,EDX                         ; 005b98ca
    MOV EDX,dword ptr [ESI + 0x8]       ; 005b98cc
    ADD EAX,EDX                         ; 005b98cf
    MOV dword ptr [EDI + 0x8],EAX       ; 005b98d1
    MOV EBX,EAX                         ; 005b98d4
    MOV dword ptr [EDI + 0x4],EAX       ; 005b98d6
    NEG EBX                             ; 005b98d9
    MOV dword ptr [EDI + 0x4],EBX       ; 005b98db
    MOV EAX,dword ptr [EBP]             ; 005b98de
    SUB EAX,dword ptr [ESI]             ; 005b98e1
    MOV EDX,ECX                         ; 005b98e3
    IMUL EDX                            ; 005b98e5
    ADD EAX,EAX                         ; 005b98e7
    ADC EDX,EDX                         ; 005b98e9
    MOV EAX,EDX                         ; 005b98eb
    MOV EDX,dword ptr [ESI]             ; 005b98ed
    ADD EAX,EDX                         ; 005b98ef
    MOV dword ptr [EDI],EAX             ; 005b98f1
    MOV AH,byte ptr [0x01c51d14]        ; 005b98f3 | DAT_01c51d14
    MOV dword ptr [EDI + 0x10],0xffffffff ; 005b98f9
    TEST AH,0x4                         ; 005b9900
    JNZ 0x005b990a                      ; 005b9903
        ;   XREF to: 005b990a (CONDITIONAL_JUMP)  ; LAB_005b990a
    POP EBP                             ; 005b9905
    POP EDI                             ; 005b9906
    POP ESI                             ; 005b9907
    POP EBX                             ; 005b9908
    RET                                 ; 005b9909
    MOV EAX,dword ptr [EBP + 0x20]      ; 005b990a
        ;   Label: LAB_005b990a
    MOV EBX,dword ptr [ESI + 0x20]      ; 005b990d
    MOV EDX,ECX                         ; 005b9910
    SUB EAX,EBX                         ; 005b9912
    IMUL EDX                            ; 005b9914
    ADD EAX,EAX                         ; 005b9916
    ADC EDX,EDX                         ; 005b9918
    MOV EAX,EDX                         ; 005b991a
    MOV EDX,dword ptr [ESI + 0x20]      ; 005b991c
    ADD EAX,EDX                         ; 005b991f
    MOV dword ptr [EDI + 0x20],EAX      ; 005b9921
    POP EBP                             ; 005b9924
    POP EDI                             ; 005b9925
    POP ESI                             ; 005b9926
    POP EBX                             ; 005b9927
    RET                                 ; 005b9928

