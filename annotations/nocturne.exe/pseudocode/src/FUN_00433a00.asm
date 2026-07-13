; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433a00(int *param_1,int *param_2,int *param_3)
;
;
; XREF[2]:
;   FUN_00433ef0 at 00433fab
;   FUN_004349a0 at 00434fcd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433a00
        ;   Label: FUN_00433a00
    PUSH ESI                            ; 00433a01
    PUSH EDI                            ; 00433a02
    PUSH EBP                            ; 00433a03
    MOV ECX,dword ptr [ESP + 0x14]      ; 00433a04
    MOV EDI,dword ptr [ESP + 0x18]      ; 00433a08
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00433a0c
    MOV EAX,dword ptr [EDI + 0x4]       ; 00433a10
    MOV EDX,dword ptr [ECX + 0x8]       ; 00433a13
    MOV EBX,dword ptr [ECX + 0x4]       ; 00433a16
    MOV EBP,dword ptr [EDI + 0x8]       ; 00433a19
    ADD EAX,EDX                         ; 00433a1c
    ADD EBX,EBP                         ; 00433a1e
    SUB EAX,EBX                         ; 00433a20
    MOV EBX,EDX                         ; 00433a22
    MOV EDX,dword ptr [ECX + 0x4]       ; 00433a24
    SUB EBX,EDX                         ; 00433a27
    MOV EDX,EBX                         ; 00433a29
    MOV EBX,EAX                         ; 00433a2b
    CMP EDX,EBX                         ; 00433a2d
    JGE 0x00433a43                      ; 00433a2f
        ;   XREF to: 00433a43 (CONDITIONAL_JUMP)  ; LAB_00433a43
    NEG EBX                             ; 00433a31
    CMP EDX,EBX                         ; 00433a33
    JLE 0x00433a4a                      ; 00433a35
        ;   XREF to: 00433a4a (CONDITIONAL_JUMP)  ; LAB_00433a4a
    NEG EBX                             ; 00433a37
    XOR EAX,EAX                         ; 00433a39
    SAR EDX,0x1                         ; 00433a3b
    RCR EAX,0x1                         ; 00433a3d
    IDIV EBX                            ; 00433a3f
    JMP 0x00433a51                      ; 00433a41
        ;   XREF to: 00433a51 (UNCONDITIONAL_JUMP)  ; LAB_00433a51
    MOV EAX,0x7fffffff                  ; 00433a43
        ;   Label: LAB_00433a43
    JMP 0x00433a51                      ; 00433a48
        ;   XREF to: 00433a51 (UNCONDITIONAL_JUMP)  ; LAB_00433a51
    NEG EBX                             ; 00433a4a
        ;   Label: LAB_00433a4a
    MOV EAX,0x80000000                  ; 00433a4c
    MOV EBX,EAX                         ; 00433a51
        ;   Label: LAB_00433a51
    MOV EBP,dword ptr [ECX + 0x8]       ; 00433a53
    MOV EAX,dword ptr [EDI + 0x8]       ; 00433a56
    MOV EDX,EBX                         ; 00433a59
    SUB EAX,EBP                         ; 00433a5b
    IMUL EDX                            ; 00433a5d
    ADD EAX,EAX                         ; 00433a5f
    ADC EDX,EDX                         ; 00433a61
    MOV EAX,EDX                         ; 00433a63
    MOV EDX,dword ptr [ECX + 0x8]       ; 00433a65
    ADD EAX,EDX                         ; 00433a68
    MOV dword ptr [ESI + 0x8],EAX       ; 00433a6a
    MOV dword ptr [ESI + 0x4],EAX       ; 00433a6d
    MOV EAX,dword ptr [EDI]             ; 00433a70
    SUB EAX,dword ptr [ECX]             ; 00433a72
    MOV EDX,EBX                         ; 00433a74
    IMUL EDX                            ; 00433a76
    ADD EAX,EAX                         ; 00433a78
    ADC EDX,EDX                         ; 00433a7a
    MOV EAX,EDX                         ; 00433a7c
    MOV EDX,dword ptr [ECX]             ; 00433a7e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00433a80
    ADD EAX,EDX                         ; 00433a87
    MOV dword ptr [ESI],EAX             ; 00433a89
    MOV EAX,dword ptr [EDI + 0x20]      ; 00433a8b
    MOV EBP,dword ptr [ECX + 0x20]      ; 00433a8e
    MOV EDX,EBX                         ; 00433a91
    SUB EAX,EBP                         ; 00433a93
    IMUL EDX                            ; 00433a95
    ADD EAX,EAX                         ; 00433a97
    ADC EDX,EDX                         ; 00433a99
    MOV EAX,EDX                         ; 00433a9b
    MOV EDX,dword ptr [ECX + 0x20]      ; 00433a9d
    ADD EAX,EDX                         ; 00433aa0
    MOV dword ptr [ESI + 0x20],EAX      ; 00433aa2
    MOV EAX,dword ptr [EDI + 0x24]      ; 00433aa5
    SUB EAX,dword ptr [ECX + 0x24]      ; 00433aa8
    MOV EDX,EBX                         ; 00433aab
    IMUL EDX                            ; 00433aad
    ADD EAX,EAX                         ; 00433aaf
    ADC EDX,EDX                         ; 00433ab1
    MOV EAX,EDX                         ; 00433ab3
    MOV EDX,dword ptr [ECX + 0x24]      ; 00433ab5
    ADD EDX,EAX                         ; 00433ab8
    MOV dword ptr [ESI + 0x24],EDX      ; 00433aba
    MOV EAX,dword ptr [EDI + 0x28]      ; 00433abd
    MOV EBP,dword ptr [ECX + 0x28]      ; 00433ac0
    MOV EDX,EBX                         ; 00433ac3
    SUB EAX,EBP                         ; 00433ac5
    IMUL EDX                            ; 00433ac7
    ADD EAX,EAX                         ; 00433ac9
    ADC EDX,EDX                         ; 00433acb
    MOV EAX,EDX                         ; 00433acd
    MOV EDX,dword ptr [ECX + 0x28]      ; 00433acf
    ADD EDX,EAX                         ; 00433ad2
    MOV dword ptr [ESI + 0x28],EDX      ; 00433ad4
    MOV EAX,dword ptr [EDI + 0x18]      ; 00433ad7
    SUB EAX,dword ptr [ECX + 0x18]      ; 00433ada
    MOV EDX,EBX                         ; 00433add
    IMUL EDX                            ; 00433adf
    ADD EAX,EAX                         ; 00433ae1
    ADC EDX,EDX                         ; 00433ae3
    MOV EAX,EDX                         ; 00433ae5
    MOV EDX,dword ptr [ECX + 0x18]      ; 00433ae7
    ADD EDX,EAX                         ; 00433aea
    MOV dword ptr [ESI + 0x18],EDX      ; 00433aec
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00433aef
    MOV EBP,dword ptr [ECX + 0x1c]      ; 00433af2
    MOV EDX,EBX                         ; 00433af5
    SUB EAX,EBP                         ; 00433af7
    IMUL EDX                            ; 00433af9
    ADD EAX,EAX                         ; 00433afb
    ADC EDX,EDX                         ; 00433afd
    MOV EAX,EDX                         ; 00433aff
    MOV EDX,dword ptr [ECX + 0x1c]      ; 00433b01
    ADD EDX,EAX                         ; 00433b04
    MOV dword ptr [ESI + 0x1c],EDX      ; 00433b06
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00433b09
    SUB EAX,dword ptr [ECX + 0x2c]      ; 00433b0c
    MOV EDX,EBX                         ; 00433b0f
    IMUL EDX                            ; 00433b11
    ADD EAX,EAX                         ; 00433b13
    ADC EDX,EDX                         ; 00433b15
    MOV EAX,EDX                         ; 00433b17
    MOV EDX,dword ptr [ECX + 0x2c]      ; 00433b19
    ADD EDX,EAX                         ; 00433b1c
    MOV dword ptr [ESI + 0x2c],EDX      ; 00433b1e
    POP EBP                             ; 00433b21
    POP EDI                             ; 00433b22
    POP ESI                             ; 00433b23
    POP EBX                             ; 00433b24
    RET                                 ; 00433b25

