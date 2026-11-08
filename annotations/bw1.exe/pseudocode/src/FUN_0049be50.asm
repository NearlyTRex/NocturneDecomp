; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049be50(int *param_1)
;
;
; XREF[2]:
;   FUN_0049a980 at 0049a9a3
;   FUN_0049add0 at 0049ade0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049be50
        ;   Label: FUN_0049be50
    PUSH ESI                            ; 0049be51
    PUSH EDI                            ; 0049be52
    PUSH EBP                            ; 0049be53
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049be54
    MOV ECX,dword ptr [EAX]             ; 0049be58
    CMP ECX,dword ptr [EAX + 0x194]     ; 0049be5a
    JLE 0x0049be97                      ; 0049be60
        ;   XREF to: 0049be97 (CONDITIONAL_JUMP)  ; LAB_0049be97
    CMP dword ptr [EAX + 0x194],0x0     ; 0049be62
        ;   Label: LAB_0049be62
    JL 0x0049bea2                       ; 0049be69
        ;   XREF to: 0049bea2 (CONDITIONAL_JUMP)  ; LAB_0049bea2
    MOV ESI,dword ptr [EAX + 0x198]     ; 0049be6b
        ;   Label: LAB_0049be6b
    TEST ESI,ESI                        ; 0049be71
    JL 0x0049beae                       ; 0049be73
        ;   XREF to: 0049beae (CONDITIONAL_JUMP)  ; LAB_0049beae
    MOV EBP,dword ptr [EAX]             ; 0049be75
        ;   Label: LAB_0049be75
    MOV EDX,dword ptr [EAX + 0x198]     ; 0049be77
    CMP EDX,EBP                         ; 0049be7d
    JL 0x0049bebf                       ; 0049be7f
        ;   XREF to: 0049bebf (CONDITIONAL_JUMP)  ; LAB_0049bebf
    MOV EBX,dword ptr [EAX + 0x198]     ; 0049be81
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 0049be87
    SUB EBX,EDX                         ; 0049be8d
    MOV dword ptr [EAX + 0x198],EBX     ; 0049be8f
    JMP 0x0049be75                      ; 0049be95
        ;   XREF to: 0049be75 (UNCONDITIONAL_JUMP)  ; LAB_0049be75
    LEA EDX,[ECX + -0x1]                ; 0049be97
        ;   Label: LAB_0049be97
    MOV dword ptr [EAX + 0x194],EDX     ; 0049be9a
    JMP 0x0049be62                      ; 0049bea0
        ;   XREF to: 0049be62 (UNCONDITIONAL_JUMP)  ; LAB_0049be62
    MOV dword ptr [EAX + 0x194],0x0     ; 0049bea2
        ;   Label: LAB_0049bea2
    JMP 0x0049be6b                      ; 0049beac
        ;   XREF to: 0049be6b (UNCONDITIONAL_JUMP)  ; LAB_0049be6b
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 0049beae
        ;   Label: LAB_0049beae
    LEA EDI,[ESI + EDX*0x1]             ; 0049beb4
    MOV dword ptr [EAX + 0x198],EDI     ; 0049beb7
    JMP 0x0049be6b                      ; 0049bebd
        ;   XREF to: 0049be6b (UNCONDITIONAL_JUMP)  ; LAB_0049be6b
    TEST EDX,EDX                        ; 0049bebf
        ;   Label: LAB_0049bebf
    JL 0x0049bf10                       ; 0049bec1
        ;   XREF to: 0049bf10 (CONDITIONAL_JUMP)  ; LAB_0049bf10
    MOV ECX,dword ptr [EAX]             ; 0049bec3
        ;   Label: LAB_0049bec3
    CMP ECX,dword ptr [EAX + 0x194]     ; 0049bec5
    JLE 0x0049bf6c                      ; 0049becb
        ;   XREF to: 0049bf6c (CONDITIONAL_JUMP)  ; LAB_0049bf6c
    XOR ECX,ECX                         ; 0049bed1
    MOV ESI,dword ptr [EAX + 0x198]     ; 0049bed3
        ;   Label: LAB_0049bed3
    CMP ESI,dword ptr [EAX + 0x194]     ; 0049bed9
    JG 0x0049bf1c                       ; 0049bedf
        ;   XREF to: 0049bf1c (CONDITIONAL_JUMP)  ; LAB_0049bf1c
    MOV ESI,dword ptr [EAX + 0x19c]     ; 0049bee1
        ;   Label: LAB_0049bee1
    MOV EDX,dword ptr [EAX + 0x198]     ; 0049bee7
    MOV EDI,dword ptr [EAX + 0x194]     ; 0049beed
    ADD EDX,ESI                         ; 0049bef3
    CMP EDX,EDI                         ; 0049bef5
    JG 0x0049bf6c                       ; 0049bef7
        ;   XREF to: 0049bf6c (CONDITIONAL_JUMP)  ; LAB_0049bf6c
    MOV EBP,dword ptr [EAX + 0x1a8]     ; 0049befd
    CMP EBP,0x1                         ; 0049bf03
    JNZ 0x0049bf53                      ; 0049bf06
        ;   XREF to: 0049bf53 (CONDITIONAL_JUMP)  ; LAB_0049bf53
    ADD dword ptr [EAX + 0x198],EBP     ; 0049bf08
    JMP 0x0049bee1                      ; 0049bf0e
        ;   XREF to: 0049bee1 (UNCONDITIONAL_JUMP)  ; LAB_0049bee1
    MOV dword ptr [EAX + 0x198],0x0     ; 0049bf10
        ;   Label: LAB_0049bf10
    JMP 0x0049bec3                      ; 0049bf1a
        ;   XREF to: 0049bec3 (UNCONDITIONAL_JUMP)  ; LAB_0049bec3
    MOV EDI,dword ptr [EAX + 0x1a8]     ; 0049bf1c
        ;   Label: LAB_0049bf1c
    CMP EDI,0x1                         ; 0049bf22
    JNZ 0x0049bf41                      ; 0049bf25
        ;   XREF to: 0049bf41 (CONDITIONAL_JUMP)  ; LAB_0049bf41
    MOV EDX,ESI                         ; 0049bf27
    SUB EDX,EDI                         ; 0049bf29
    MOV dword ptr [EAX + 0x198],EDX     ; 0049bf2b
    CMP ECX,dword ptr [EAX + 0x198]     ; 0049bf31
        ;   Label: LAB_0049bf31
    JLE 0x0049bed3                      ; 0049bf37
        ;   XREF to: 0049bed3 (CONDITIONAL_JUMP)  ; LAB_0049bed3
    MOV dword ptr [EAX + 0x198],ECX     ; 0049bf39
    JMP 0x0049bed3                      ; 0049bf3f
        ;   XREF to: 0049bed3 (UNCONDITIONAL_JUMP)  ; LAB_0049bed3
    MOV EBP,ESI                         ; 0049bf41
        ;   Label: LAB_0049bf41
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 0049bf43
    SUB EBP,EDX                         ; 0049bf49
    MOV dword ptr [EAX + 0x198],EBP     ; 0049bf4b
    JMP 0x0049bf31                      ; 0049bf51
        ;   XREF to: 0049bf31 (UNCONDITIONAL_JUMP)  ; LAB_0049bf31
    MOV ECX,dword ptr [EAX + 0x198]     ; 0049bf53
        ;   Label: LAB_0049bf53
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 0049bf59
    ADD ECX,EDX                         ; 0049bf5f
    MOV dword ptr [EAX + 0x198],ECX     ; 0049bf61
    JMP 0x0049bee1                      ; 0049bf67
        ;   XREF to: 0049bee1 (UNCONDITIONAL_JUMP)  ; LAB_0049bee1
    CMP dword ptr [EAX + 0x1a8],0x1     ; 0049bf6c
        ;   Label: LAB_0049bf6c
    JNZ 0x0049bf8f                      ; 0049bf73
        ;   XREF to: 0049bf8f (CONDITIONAL_JUMP)  ; LAB_0049bf8f
    MOV EDI,dword ptr [EAX + 0x1a0]     ; 0049bf75
    MOV EDX,dword ptr [EAX]             ; 0049bf7b
    MOV EBP,dword ptr [EAX + 0x198]     ; 0049bf7d
    SUB EDX,EDI                         ; 0049bf83
    CMP EDX,EBP                         ; 0049bf85
    JGE 0x0049bf8f                      ; 0049bf87
        ;   XREF to: 0049bf8f (CONDITIONAL_JUMP)  ; LAB_0049bf8f
    MOV dword ptr [EAX + 0x198],EDX     ; 0049bf89
    CMP dword ptr [EAX + 0x198],0x0     ; 0049bf8f
        ;   Label: LAB_0049bf8f
    JL 0x0049bf9d                       ; 0049bf96
        ;   XREF to: 0049bf9d (CONDITIONAL_JUMP)  ; LAB_0049bf9d
    POP EBP                             ; 0049bf98
    POP EDI                             ; 0049bf99
    POP ESI                             ; 0049bf9a
    POP EBX                             ; 0049bf9b
    RET                                 ; 0049bf9c
    MOV dword ptr [EAX + 0x198],0x0     ; 0049bf9d
        ;   Label: LAB_0049bf9d
    POP EBP                             ; 0049bfa7
    POP EDI                             ; 0049bfa8
    POP ESI                             ; 0049bfa9
    POP EBX                             ; 0049bfaa
    RET                                 ; 0049bfab

