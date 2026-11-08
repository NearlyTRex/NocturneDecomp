; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b9630(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_005b9fc0 at 005ba45b
;
; Referenced Globals:
;   undefined4 DAT_01c51d14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9630
        ;   Label: FUN_005b9630
    PUSH ESI                            ; 005b9631
    PUSH EDI                            ; 005b9632
    PUSH EBP                            ; 005b9633
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b9634
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b9638
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b963c
    MOV EBX,dword ptr [EDI]             ; 005b9640
    MOV EDX,dword ptr [ECX + 0x8]       ; 005b9642
    MOV EAX,dword ptr [ECX]             ; 005b9645
    MOV EBP,dword ptr [EDI + 0x8]       ; 005b9647
    ADD EBX,EDX                         ; 005b964a
    ADD EAX,EBP                         ; 005b964c
    SUB EBX,EAX                         ; 005b964e
    MOV EAX,EDX                         ; 005b9650
    MOV EDX,dword ptr [ECX]             ; 005b9652
    SUB EAX,EDX                         ; 005b9654
    MOV EDX,EAX                         ; 005b9656
    CMP EDX,EBX                         ; 005b9658
    JGE 0x005b966e                      ; 005b965a
        ;   XREF to: 005b966e (CONDITIONAL_JUMP)  ; LAB_005b966e
    NEG EBX                             ; 005b965c
    CMP EDX,EBX                         ; 005b965e
    JLE 0x005b9675                      ; 005b9660
        ;   XREF to: 005b9675 (CONDITIONAL_JUMP)  ; LAB_005b9675
    NEG EBX                             ; 005b9662
    XOR EAX,EAX                         ; 005b9664
    SAR EDX,0x1                         ; 005b9666
    RCR EAX,0x1                         ; 005b9668
    IDIV EBX                            ; 005b966a
    JMP 0x005b967c                      ; 005b966c
        ;   XREF to: 005b967c (UNCONDITIONAL_JUMP)  ; LAB_005b967c
    MOV EAX,0x7fffffff                  ; 005b966e
        ;   Label: LAB_005b966e
    JMP 0x005b967c                      ; 005b9673
        ;   XREF to: 005b967c (UNCONDITIONAL_JUMP)  ; LAB_005b967c
    NEG EBX                             ; 005b9675
        ;   Label: LAB_005b9675
    MOV EAX,0x80000000                  ; 005b9677
    MOV EBX,EAX                         ; 005b967c
        ;   Label: LAB_005b967c
    MOV EBP,dword ptr [ECX + 0x8]       ; 005b967e
    MOV EAX,dword ptr [EDI + 0x8]       ; 005b9681
    MOV EDX,EBX                         ; 005b9684
    SUB EAX,EBP                         ; 005b9686
    IMUL EDX                            ; 005b9688
    ADD EAX,EAX                         ; 005b968a
    ADC EDX,EDX                         ; 005b968c
    MOV EAX,EDX                         ; 005b968e
    MOV EDX,dword ptr [ECX + 0x8]       ; 005b9690
    ADD EAX,EDX                         ; 005b9693
    MOV dword ptr [ESI + 0x8],EAX       ; 005b9695
    MOV dword ptr [ESI],EAX             ; 005b9698
    MOV EAX,dword ptr [EDI + 0x4]       ; 005b969a
    SUB EAX,dword ptr [ECX + 0x4]       ; 005b969d
    MOV EDX,EBX                         ; 005b96a0
    IMUL EDX                            ; 005b96a2
    ADD EAX,EAX                         ; 005b96a4
    ADC EDX,EDX                         ; 005b96a6
    MOV EAX,EDX                         ; 005b96a8
    MOV EDX,dword ptr [ECX + 0x4]       ; 005b96aa
    ADD EAX,EDX                         ; 005b96ad
    MOV dword ptr [ESI + 0x4],EAX       ; 005b96af
    MOV AH,byte ptr [0x01c51d14]        ; 005b96b2 | DAT_01c51d14
    MOV dword ptr [ESI + 0x10],0xffffffff ; 005b96b8
    TEST AH,0x4                         ; 005b96bf
    JNZ 0x005b96c9                      ; 005b96c2
        ;   XREF to: 005b96c9 (CONDITIONAL_JUMP)  ; LAB_005b96c9
    POP EBP                             ; 005b96c4
    POP EDI                             ; 005b96c5
    POP ESI                             ; 005b96c6
    POP EBX                             ; 005b96c7
    RET                                 ; 005b96c8
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b96c9
        ;   Label: LAB_005b96c9
    MOV EDI,dword ptr [ECX + 0x20]      ; 005b96cc
    MOV EDX,EBX                         ; 005b96cf
    SUB EAX,EDI                         ; 005b96d1
    IMUL EDX                            ; 005b96d3
    ADD EAX,EAX                         ; 005b96d5
    ADC EDX,EDX                         ; 005b96d7
    MOV EAX,EDX                         ; 005b96d9
    MOV EDX,dword ptr [ECX + 0x20]      ; 005b96db
    ADD EAX,EDX                         ; 005b96de
    MOV dword ptr [ESI + 0x20],EAX      ; 005b96e0
    POP EBP                             ; 005b96e3
    POP EDI                             ; 005b96e4
    POP ESI                             ; 005b96e5
    POP EBX                             ; 005b96e6
    RET                                 ; 005b96e7

