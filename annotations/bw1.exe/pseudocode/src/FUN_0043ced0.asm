; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043ced0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_0043de60 at 0043e48d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ced0
        ;   Label: FUN_0043ced0
    PUSH ESI                            ; 0043ced1
    PUSH EDI                            ; 0043ced2
    PUSH EBP                            ; 0043ced3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043ced4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043ced8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043cedc
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043cee0
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043cee3
    MOV EBX,dword ptr [ECX + 0x4]       ; 0043cee6
    MOV EBP,dword ptr [EDI + 0x8]       ; 0043cee9
    ADD EAX,EDX                         ; 0043ceec
    ADD EBX,EBP                         ; 0043ceee
    SUB EAX,EBX                         ; 0043cef0
    MOV EBX,EDX                         ; 0043cef2
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043cef4
    SUB EBX,EDX                         ; 0043cef7
    MOV EDX,EBX                         ; 0043cef9
    MOV EBX,EAX                         ; 0043cefb
    CMP EDX,EBX                         ; 0043cefd
    JGE 0x0043cf13                      ; 0043ceff
        ;   XREF to: 0043cf13 (CONDITIONAL_JUMP)  ; LAB_0043cf13
    NEG EBX                             ; 0043cf01
    CMP EDX,EBX                         ; 0043cf03
    JLE 0x0043cf1a                      ; 0043cf05
        ;   XREF to: 0043cf1a (CONDITIONAL_JUMP)  ; LAB_0043cf1a
    NEG EBX                             ; 0043cf07
    XOR EAX,EAX                         ; 0043cf09
    SAR EDX,0x1                         ; 0043cf0b
    RCR EAX,0x1                         ; 0043cf0d
    IDIV EBX                            ; 0043cf0f
    JMP 0x0043cf21                      ; 0043cf11
        ;   XREF to: 0043cf21 (UNCONDITIONAL_JUMP)  ; LAB_0043cf21
    MOV EAX,0x7fffffff                  ; 0043cf13
        ;   Label: LAB_0043cf13
    JMP 0x0043cf21                      ; 0043cf18
        ;   XREF to: 0043cf21 (UNCONDITIONAL_JUMP)  ; LAB_0043cf21
    NEG EBX                             ; 0043cf1a
        ;   Label: LAB_0043cf1a
    MOV EAX,0x80000000                  ; 0043cf1c
    MOV EBX,EAX                         ; 0043cf21
        ;   Label: LAB_0043cf21
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043cf23
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043cf26
    MOV EDX,EBX                         ; 0043cf29
    SUB EAX,EBP                         ; 0043cf2b
    IMUL EDX                            ; 0043cf2d
    ADD EAX,EAX                         ; 0043cf2f
    ADC EDX,EDX                         ; 0043cf31
    MOV EAX,EDX                         ; 0043cf33
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043cf35
    ADD EAX,EDX                         ; 0043cf38
    MOV dword ptr [ESI + 0x8],EAX       ; 0043cf3a
    MOV dword ptr [ESI + 0x4],EAX       ; 0043cf3d
    MOV EAX,dword ptr [EDI]             ; 0043cf40
    SUB EAX,dword ptr [ECX]             ; 0043cf42
    MOV EDX,EBX                         ; 0043cf44
    IMUL EDX                            ; 0043cf46
    ADD EAX,EAX                         ; 0043cf48
    ADC EDX,EDX                         ; 0043cf4a
    MOV EAX,EDX                         ; 0043cf4c
    MOV EDX,dword ptr [ECX]             ; 0043cf4e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0043cf50
    ADD EAX,EDX                         ; 0043cf57
    MOV dword ptr [ESI],EAX             ; 0043cf59
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043cf5b
    MOV EBP,dword ptr [ECX + 0x20]      ; 0043cf5e
    MOV EDX,EBX                         ; 0043cf61
    SUB EAX,EBP                         ; 0043cf63
    IMUL EDX                            ; 0043cf65
    ADD EAX,EAX                         ; 0043cf67
    ADC EDX,EDX                         ; 0043cf69
    MOV EAX,EDX                         ; 0043cf6b
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043cf6d
    ADD EAX,EDX                         ; 0043cf70
    MOV dword ptr [ESI + 0x20],EAX      ; 0043cf72
    MOV EAX,dword ptr [EDI + 0x24]      ; 0043cf75
    SUB EAX,dword ptr [ECX + 0x24]      ; 0043cf78
    MOV EDX,EBX                         ; 0043cf7b
    IMUL EDX                            ; 0043cf7d
    ADD EAX,EAX                         ; 0043cf7f
    ADC EDX,EDX                         ; 0043cf81
    MOV EAX,EDX                         ; 0043cf83
    MOV EDX,dword ptr [ECX + 0x24]      ; 0043cf85
    ADD EDX,EAX                         ; 0043cf88
    MOV dword ptr [ESI + 0x24],EDX      ; 0043cf8a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043cf8d
    MOV EBP,dword ptr [ECX + 0x28]      ; 0043cf90
    MOV EDX,EBX                         ; 0043cf93
    SUB EAX,EBP                         ; 0043cf95
    IMUL EDX                            ; 0043cf97
    ADD EAX,EAX                         ; 0043cf99
    ADC EDX,EDX                         ; 0043cf9b
    MOV EAX,EDX                         ; 0043cf9d
    MOV EDX,dword ptr [ECX + 0x28]      ; 0043cf9f
    ADD EDX,EAX                         ; 0043cfa2
    MOV dword ptr [ESI + 0x28],EDX      ; 0043cfa4
    MOV EAX,dword ptr [EDI + 0x18]      ; 0043cfa7
    SUB EAX,dword ptr [ECX + 0x18]      ; 0043cfaa
    MOV EDX,EBX                         ; 0043cfad
    IMUL EDX                            ; 0043cfaf
    ADD EAX,EAX                         ; 0043cfb1
    ADC EDX,EDX                         ; 0043cfb3
    MOV EAX,EDX                         ; 0043cfb5
    MOV EDX,dword ptr [ECX + 0x18]      ; 0043cfb7
    ADD EDX,EAX                         ; 0043cfba
    MOV dword ptr [ESI + 0x18],EDX      ; 0043cfbc
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043cfbf
    MOV EBP,dword ptr [ECX + 0x1c]      ; 0043cfc2
    MOV EDX,EBX                         ; 0043cfc5
    SUB EAX,EBP                         ; 0043cfc7
    IMUL EDX                            ; 0043cfc9
    ADD EAX,EAX                         ; 0043cfcb
    ADC EDX,EDX                         ; 0043cfcd
    MOV EAX,EDX                         ; 0043cfcf
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043cfd1
    ADD EDX,EAX                         ; 0043cfd4
    MOV dword ptr [ESI + 0x1c],EDX      ; 0043cfd6
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043cfd9
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043cfdc
    MOV EDX,EBX                         ; 0043cfdf
    IMUL EDX                            ; 0043cfe1
    ADD EAX,EAX                         ; 0043cfe3
    ADC EDX,EDX                         ; 0043cfe5
    MOV EAX,EDX                         ; 0043cfe7
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043cfe9
    ADD EDX,EAX                         ; 0043cfec
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043cfee
    POP EBP                             ; 0043cff1
    POP EDI                             ; 0043cff2
    POP ESI                             ; 0043cff3
    POP EBX                             ; 0043cff4
    RET                                 ; 0043cff5

