; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * crt_unknown_c_FUN_005a9510(void)
;
;
; XREF[1]:
;   crt_unknown.c_InternalHeapAlloc_FUN_005a3660 at 005a36fb
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a9510
        ;   Label: crt_unknown.c_FUN_005a9510
    PUSH EDI                            ; 005a9511
    PUSH EBP                            ; 005a9512
    XOR EBP,EBP                         ; 005a9513
    TEST EAX,EAX                        ; 005a9515
    JZ 0x005a95b7                       ; 005a9517
        ;   XREF to: 005a95b7 (CONDITIONAL_JUMP)  ; LAB_005a95b7
    LEA ECX,[EAX + 0xb]                 ; 005a951d
    CMP ECX,EAX                         ; 005a9520
    JC 0x005a95b7                       ; 005a9522
        ;   XREF to: 005a95b7 (CONDITIONAL_JUMP)  ; LAB_005a95b7
    MOV EDI,EBX                         ; 005a9528
    AND CL,0xf8                         ; 005a952a
    MOV EAX,dword ptr [EBX + 0x14]      ; 005a952d
    CMP ECX,0x10                        ; 005a9530
    JNC 0x005a953a                      ; 005a9533
        ;   XREF to: 005a953a (CONDITIONAL_JUMP)  ; LAB_005a953a
    MOV ECX,0x10                        ; 005a9535
    CMP ECX,EAX                         ; 005a953a
        ;   Label: LAB_005a953a
    JA 0x005a95b7                       ; 005a953c
        ;   XREF to: 005a95b7 (CONDITIONAL_JUMP)  ; LAB_005a95b7
    MOV EBX,dword ptr [EDI + 0x10]      ; 005a9542
    MOV EAX,dword ptr [EDI + 0xc]       ; 005a9545
    CMP ECX,EBX                         ; 005a9548
    JA 0x005a9551                       ; 005a954a
        ;   XREF to: 005a9551 (CONDITIONAL_JUMP)  ; LAB_005a9551
    MOV EAX,dword ptr [EDI + 0x28]      ; 005a954c
    XOR EBX,EBX                         ; 005a954f
    LEA ESI,[EDI + 0x20]                ; 005a9551
        ;   Label: LAB_005a9551
    MOV EDX,dword ptr [EAX]             ; 005a9554
        ;   Label: LAB_005a9554
    CMP ECX,EDX                         ; 005a9556
    JBE 0x005a956c                      ; 005a9558
        ;   XREF to: 005a956c (CONDITIONAL_JUMP)  ; LAB_005a956c
    CMP EDX,EBX                         ; 005a955a
    JBE 0x005a9560                      ; 005a955c
        ;   XREF to: 005a9560 (CONDITIONAL_JUMP)  ; LAB_005a9560
    MOV EBX,EDX                         ; 005a955e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a9560
        ;   Label: LAB_005a9560
    CMP EAX,ESI                         ; 005a9563
    JNZ 0x005a9554                      ; 005a9565
        ;   XREF to: 005a9554 (CONDITIONAL_JUMP)  ; LAB_005a9554
    MOV dword ptr [EDI + 0x14],EBX      ; 005a9567
    JMP 0x005a95b7                      ; 005a956a
        ;   XREF to: 005a95b7 (UNCONDITIONAL_JUMP)  ; LAB_005a95b7
    MOV dword ptr [EDI + 0x10],EBX      ; 005a956c
        ;   Label: LAB_005a956c
    MOV EBX,dword ptr [EDI + 0x18]      ; 005a956f
    INC EBX                             ; 005a9572
    SUB EDX,ECX                         ; 005a9573
    MOV dword ptr [EDI + 0x18],EBX      ; 005a9575
    CMP EDX,0x10                        ; 005a9578
    JC 0x005a959b                       ; 005a957b
        ;   XREF to: 005a959b (CONDITIONAL_JUMP)  ; LAB_005a959b
    LEA EBX,[EAX + ECX*0x1]             ; 005a957d
    MOV dword ptr [EDI + 0xc],EBX       ; 005a9580
    MOV dword ptr [EBX],EDX             ; 005a9583
    MOV dword ptr [EAX],ECX             ; 005a9585
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a9587
    MOV dword ptr [EBX + 0x4],ECX       ; 005a958a
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a958d
    MOV dword ptr [EBX + 0x8],EDX       ; 005a9590
    MOV dword ptr [ECX + 0x8],EBX       ; 005a9593
    MOV dword ptr [EDX + 0x4],EBX       ; 005a9596
    JMP 0x005a95ad                      ; 005a9599
        ;   XREF to: 005a95ad (UNCONDITIONAL_JUMP)  ; LAB_005a95ad
    DEC dword ptr [EDI + 0x1c]          ; 005a959b
        ;   Label: LAB_005a959b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a959e
    MOV dword ptr [EDI + 0xc],EDX       ; 005a95a1
    MOV EBX,dword ptr [EAX + 0x8]       ; 005a95a4
    MOV dword ptr [EDX + 0x8],EBX       ; 005a95a7
    MOV dword ptr [EBX + 0x4],EDX       ; 005a95aa
    MOV DL,byte ptr [EAX]               ; 005a95ad
        ;   Label: LAB_005a95ad
    OR DL,0x1                           ; 005a95af
    LEA EBP,[EAX + 0x4]                 ; 005a95b2
    MOV byte ptr [EAX],DL               ; 005a95b5
    MOV EAX,EBP                         ; 005a95b7
        ;   Label: LAB_005a95b7
    POP EBP                             ; 005a95b9
    POP EDI                             ; 005a95ba
    POP ESI                             ; 005a95bb
    RET                                 ; 005a95bc

