; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c476c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c1d70 at 005c1ed0
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c47ce
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c476c
        ;   Label: unkafter_morph.cpp_FUN_005c476c
    PUSH ESI                            ; 005c476d
    PUSH EDI                            ; 005c476e
    PUSH ECX                            ; 005c476f
    PUSH EBX                            ; 005c4770
    PUSH EDX                            ; 005c4771
    MOV ESI,EAX                         ; 005c4772
    SUB EDX,EDX                         ; 005c4774
    SUB ECX,ECX                         ; 005c4776
    SUB EBP,EBP                         ; 005c4778
    SUB EAX,EAX                         ; 005c477a
    MOV AL,byte ptr [ESI]               ; 005c477c
        ;   Label: LAB_005c477c
    CMP AL,0x0                          ; 005c477e
    JZ 0x005c47b1                       ; 005c4780
        ;   XREF to: 005c47b1 (CONDITIONAL_JUMP)  ; LAB_005c47b1
    MOV EDI,EDX                         ; 005c4782
    MOV EBX,ECX                         ; 005c4784
    MOV EAX,EBP                         ; 005c4786
    ADD EBP,EBP                         ; 005c4788
    ADC ECX,ECX                         ; 005c478a
    ADC EDX,EDX                         ; 005c478c
    ADD EBP,EBP                         ; 005c478e
    ADC ECX,ECX                         ; 005c4790
    ADC EDX,EDX                         ; 005c4792
    ADD EBP,EAX                         ; 005c4794
    ADC ECX,EBX                         ; 005c4796
    ADC EDX,EDI                         ; 005c4798
    ADD EBP,EBP                         ; 005c479a
    ADC ECX,ECX                         ; 005c479c
    ADC EDX,EDX                         ; 005c479e
    SUB EAX,EAX                         ; 005c47a0
    MOV AL,byte ptr [ESI]               ; 005c47a2
    AND AL,0xf                          ; 005c47a4
    ADD EBP,EAX                         ; 005c47a6
    ADC ECX,0x0                         ; 005c47a8
    ADC EDX,0x0                         ; 005c47ab
    INC ESI                             ; 005c47ae
    JMP 0x005c477c                      ; 005c47af
        ;   XREF to: 005c477c (UNCONDITIONAL_JUMP)  ; LAB_005c477c
    MOV EAX,ECX                         ; 005c47b1
        ;   Label: LAB_005c47b1
    MOV EDI,0x405e                      ; 005c47b3
    CALL unkafter_morph.cpp_FUN_005c47ce ; 005c47b8
        ;   XREF to: 005c47ce (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c47ce()
    POP EBP                             ; 005c47bd
    MOV dword ptr [EBP + 0x4],EDX       ; 005c47be
    MOV dword ptr [EBP],EAX             ; 005c47c1
    MOV word ptr [EBP + 0x8],SI         ; 005c47c4
    POP EBX                             ; 005c47c8
    POP ECX                             ; 005c47c9
    POP EDI                             ; 005c47ca
    POP ESI                             ; 005c47cb
    POP EBP                             ; 005c47cc
    RET                                 ; 005c47cd

