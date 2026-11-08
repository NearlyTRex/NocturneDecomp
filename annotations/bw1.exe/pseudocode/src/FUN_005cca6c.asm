; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cca6c(void)
;
;
; XREF[1]:
;   FUN_005ca0c0 at 005ca220
;
; Called Functions:
;   FUN_005ccace
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005cca6c
        ;   Label: FUN_005cca6c
    PUSH ESI                            ; 005cca6d
    PUSH EDI                            ; 005cca6e
    PUSH ECX                            ; 005cca6f
    PUSH EBX                            ; 005cca70
    PUSH EDX                            ; 005cca71
    MOV ESI,EAX                         ; 005cca72
    SUB EDX,EDX                         ; 005cca74
    SUB ECX,ECX                         ; 005cca76
    SUB EBP,EBP                         ; 005cca78
    SUB EAX,EAX                         ; 005cca7a
    MOV AL,byte ptr [ESI]               ; 005cca7c
        ;   Label: LAB_005cca7c
    CMP AL,0x0                          ; 005cca7e
    JZ 0x005ccab1                       ; 005cca80
        ;   XREF to: 005ccab1 (CONDITIONAL_JUMP)  ; LAB_005ccab1
    MOV EDI,EDX                         ; 005cca82
    MOV EBX,ECX                         ; 005cca84
    MOV EAX,EBP                         ; 005cca86
    ADD EBP,EBP                         ; 005cca88
    ADC ECX,ECX                         ; 005cca8a
    ADC EDX,EDX                         ; 005cca8c
    ADD EBP,EBP                         ; 005cca8e
    ADC ECX,ECX                         ; 005cca90
    ADC EDX,EDX                         ; 005cca92
    ADD EBP,EAX                         ; 005cca94
    ADC ECX,EBX                         ; 005cca96
    ADC EDX,EDI                         ; 005cca98
    ADD EBP,EBP                         ; 005cca9a
    ADC ECX,ECX                         ; 005cca9c
    ADC EDX,EDX                         ; 005cca9e
    SUB EAX,EAX                         ; 005ccaa0
    MOV AL,byte ptr [ESI]               ; 005ccaa2
    AND AL,0xf                          ; 005ccaa4
    ADD EBP,EAX                         ; 005ccaa6
    ADC ECX,0x0                         ; 005ccaa8
    ADC EDX,0x0                         ; 005ccaab
    INC ESI                             ; 005ccaae
    JMP 0x005cca7c                      ; 005ccaaf
        ;   XREF to: 005cca7c (UNCONDITIONAL_JUMP)  ; LAB_005cca7c
    MOV EAX,ECX                         ; 005ccab1
        ;   Label: LAB_005ccab1
    MOV EDI,0x405e                      ; 005ccab3
    CALL FUN_005ccace                   ; 005ccab8
        ;   XREF to: 005ccace (UNCONDITIONAL_CALL)  ; undefined FUN_005ccace()
    POP EBP                             ; 005ccabd
    MOV dword ptr [EBP + 0x4],EDX       ; 005ccabe
    MOV dword ptr [EBP],EAX             ; 005ccac1
    MOV word ptr [EBP + 0x8],SI         ; 005ccac4
    POP EBX                             ; 005ccac8
    POP ECX                             ; 005ccac9
    POP EDI                             ; 005ccaca
    POP ESI                             ; 005ccacb
    POP EBP                             ; 005ccacc
    RET                                 ; 005ccacd

