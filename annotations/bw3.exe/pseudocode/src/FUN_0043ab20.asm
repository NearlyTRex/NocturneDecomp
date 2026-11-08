; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043ab20(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_0043bac0 at 0043c0ed
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ab20
        ;   Label: FUN_0043ab20
    PUSH ESI                            ; 0043ab21
    PUSH EDI                            ; 0043ab22
    PUSH EBP                            ; 0043ab23
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043ab24
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043ab28
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043ab2c
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043ab30
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043ab33
    MOV EBX,dword ptr [ECX + 0x4]       ; 0043ab36
    MOV EBP,dword ptr [EDI + 0x8]       ; 0043ab39
    ADD EAX,EDX                         ; 0043ab3c
    ADD EBX,EBP                         ; 0043ab3e
    SUB EAX,EBX                         ; 0043ab40
    MOV EBX,EDX                         ; 0043ab42
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043ab44
    SUB EBX,EDX                         ; 0043ab47
    MOV EDX,EBX                         ; 0043ab49
    MOV EBX,EAX                         ; 0043ab4b
    CMP EDX,EBX                         ; 0043ab4d
    JGE 0x0043ab63                      ; 0043ab4f
        ;   XREF to: 0043ab63 (CONDITIONAL_JUMP)  ; LAB_0043ab63
    NEG EBX                             ; 0043ab51
    CMP EDX,EBX                         ; 0043ab53
    JLE 0x0043ab6a                      ; 0043ab55
        ;   XREF to: 0043ab6a (CONDITIONAL_JUMP)  ; LAB_0043ab6a
    NEG EBX                             ; 0043ab57
    XOR EAX,EAX                         ; 0043ab59
    SAR EDX,0x1                         ; 0043ab5b
    RCR EAX,0x1                         ; 0043ab5d
    IDIV EBX                            ; 0043ab5f
    JMP 0x0043ab71                      ; 0043ab61
        ;   XREF to: 0043ab71 (UNCONDITIONAL_JUMP)  ; LAB_0043ab71
    MOV EAX,0x7fffffff                  ; 0043ab63
        ;   Label: LAB_0043ab63
    JMP 0x0043ab71                      ; 0043ab68
        ;   XREF to: 0043ab71 (UNCONDITIONAL_JUMP)  ; LAB_0043ab71
    NEG EBX                             ; 0043ab6a
        ;   Label: LAB_0043ab6a
    MOV EAX,0x80000000                  ; 0043ab6c
    MOV EBX,EAX                         ; 0043ab71
        ;   Label: LAB_0043ab71
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043ab73
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043ab76
    MOV EDX,EBX                         ; 0043ab79
    SUB EAX,EBP                         ; 0043ab7b
    IMUL EDX                            ; 0043ab7d
    ADD EAX,EAX                         ; 0043ab7f
    ADC EDX,EDX                         ; 0043ab81
    MOV EAX,EDX                         ; 0043ab83
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043ab85
    ADD EAX,EDX                         ; 0043ab88
    MOV dword ptr [ESI + 0x8],EAX       ; 0043ab8a
    MOV dword ptr [ESI + 0x4],EAX       ; 0043ab8d
    MOV EAX,dword ptr [EDI]             ; 0043ab90
    SUB EAX,dword ptr [ECX]             ; 0043ab92
    MOV EDX,EBX                         ; 0043ab94
    IMUL EDX                            ; 0043ab96
    ADD EAX,EAX                         ; 0043ab98
    ADC EDX,EDX                         ; 0043ab9a
    MOV EAX,EDX                         ; 0043ab9c
    MOV EDX,dword ptr [ECX]             ; 0043ab9e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0043aba0
    ADD EAX,EDX                         ; 0043aba7
    MOV dword ptr [ESI],EAX             ; 0043aba9
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043abab
    MOV EBP,dword ptr [ECX + 0x20]      ; 0043abae
    MOV EDX,EBX                         ; 0043abb1
    SUB EAX,EBP                         ; 0043abb3
    IMUL EDX                            ; 0043abb5
    ADD EAX,EAX                         ; 0043abb7
    ADC EDX,EDX                         ; 0043abb9
    MOV EAX,EDX                         ; 0043abbb
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043abbd
    ADD EAX,EDX                         ; 0043abc0
    MOV dword ptr [ESI + 0x20],EAX      ; 0043abc2
    MOV EAX,dword ptr [EDI + 0x24]      ; 0043abc5
    SUB EAX,dword ptr [ECX + 0x24]      ; 0043abc8
    MOV EDX,EBX                         ; 0043abcb
    IMUL EDX                            ; 0043abcd
    ADD EAX,EAX                         ; 0043abcf
    ADC EDX,EDX                         ; 0043abd1
    MOV EAX,EDX                         ; 0043abd3
    MOV EDX,dword ptr [ECX + 0x24]      ; 0043abd5
    ADD EDX,EAX                         ; 0043abd8
    MOV dword ptr [ESI + 0x24],EDX      ; 0043abda
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043abdd
    MOV EBP,dword ptr [ECX + 0x28]      ; 0043abe0
    MOV EDX,EBX                         ; 0043abe3
    SUB EAX,EBP                         ; 0043abe5
    IMUL EDX                            ; 0043abe7
    ADD EAX,EAX                         ; 0043abe9
    ADC EDX,EDX                         ; 0043abeb
    MOV EAX,EDX                         ; 0043abed
    MOV EDX,dword ptr [ECX + 0x28]      ; 0043abef
    ADD EDX,EAX                         ; 0043abf2
    MOV dword ptr [ESI + 0x28],EDX      ; 0043abf4
    MOV EAX,dword ptr [EDI + 0x18]      ; 0043abf7
    SUB EAX,dword ptr [ECX + 0x18]      ; 0043abfa
    MOV EDX,EBX                         ; 0043abfd
    IMUL EDX                            ; 0043abff
    ADD EAX,EAX                         ; 0043ac01
    ADC EDX,EDX                         ; 0043ac03
    MOV EAX,EDX                         ; 0043ac05
    MOV EDX,dword ptr [ECX + 0x18]      ; 0043ac07
    ADD EDX,EAX                         ; 0043ac0a
    MOV dword ptr [ESI + 0x18],EDX      ; 0043ac0c
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043ac0f
    MOV EBP,dword ptr [ECX + 0x1c]      ; 0043ac12
    MOV EDX,EBX                         ; 0043ac15
    SUB EAX,EBP                         ; 0043ac17
    IMUL EDX                            ; 0043ac19
    ADD EAX,EAX                         ; 0043ac1b
    ADC EDX,EDX                         ; 0043ac1d
    MOV EAX,EDX                         ; 0043ac1f
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043ac21
    ADD EDX,EAX                         ; 0043ac24
    MOV dword ptr [ESI + 0x1c],EDX      ; 0043ac26
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043ac29
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043ac2c
    MOV EDX,EBX                         ; 0043ac2f
    IMUL EDX                            ; 0043ac31
    ADD EAX,EAX                         ; 0043ac33
    ADC EDX,EDX                         ; 0043ac35
    MOV EAX,EDX                         ; 0043ac37
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043ac39
    ADD EDX,EAX                         ; 0043ac3c
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043ac3e
    POP EBP                             ; 0043ac41
    POP EDI                             ; 0043ac42
    POP ESI                             ; 0043ac43
    POP EBX                             ; 0043ac44
    RET                                 ; 0043ac45

