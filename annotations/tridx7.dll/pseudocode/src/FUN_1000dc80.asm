; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000dc80(char *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 1000dc80
        ;   Label: FUN_1000dc80
    PUSH EBX                            ; 1000dc84
    CMP byte ptr [EAX],0x0              ; 1000dc85
    JZ 0x1000dcc5                       ; 1000dc88
        ;   XREF to: 1000dcc5 (CONDITIONAL_JUMP)  ; LAB_1000dcc5
    MOV CL,byte ptr [EAX]               ; 1000dc8a
        ;   Label: LAB_1000dc8a
    CMP CL,0x30                         ; 1000dc8c
    JL 0x1000dca3                       ; 1000dc8f
        ;   XREF to: 1000dca3 (CONDITIONAL_JUMP)  ; LAB_1000dca3
    CMP CL,0x39                         ; 1000dc91
    JG 0x1000dca3                       ; 1000dc94
        ;   XREF to: 1000dca3 (CONDITIONAL_JUMP)  ; LAB_1000dca3
    SUB CL,0x30                         ; 1000dc96
    MOV byte ptr [EAX],CL               ; 1000dc99
    INC EAX                             ; 1000dc9b
    CMP byte ptr [EAX],0x0              ; 1000dc9c
    JNZ 0x1000dc8a                      ; 1000dc9f
        ;   XREF to: 1000dc8a (CONDITIONAL_JUMP)  ; LAB_1000dc8a
    POP EBX                             ; 1000dca1
    RET                                 ; 1000dca2
    CMP CL,0x3b                         ; 1000dca3
        ;   Label: LAB_1000dca3
    JNZ 0x1000dcbf                      ; 1000dca6
        ;   XREF to: 1000dcbf (CONDITIONAL_JUMP)  ; LAB_1000dcbf
    MOV EDX,EAX                         ; 1000dca8
    LEA ECX,[EDX + 0x1]                 ; 1000dcaa
        ;   Label: LAB_1000dcaa
    MOV BL,byte ptr [ECX]               ; 1000dcad
    MOV byte ptr [EDX],BL               ; 1000dcaf
    MOV EDX,ECX                         ; 1000dcb1
    CMP byte ptr [ECX],0x0              ; 1000dcb3
    JNZ 0x1000dcaa                      ; 1000dcb6
        ;   XREF to: 1000dcaa (CONDITIONAL_JUMP)  ; LAB_1000dcaa
    CMP byte ptr [EAX],0x0              ; 1000dcb8
    JNZ 0x1000dc8a                      ; 1000dcbb
        ;   XREF to: 1000dc8a (CONDITIONAL_JUMP)  ; LAB_1000dc8a
    POP EBX                             ; 1000dcbd
    RET                                 ; 1000dcbe
    INC EAX                             ; 1000dcbf
        ;   Label: LAB_1000dcbf
    CMP byte ptr [EAX],0x0              ; 1000dcc0
    JNZ 0x1000dc8a                      ; 1000dcc3
        ;   XREF to: 1000dc8a (CONDITIONAL_JUMP)  ; LAB_1000dc8a
    POP EBX                             ; 1000dcc5
        ;   Label: LAB_1000dcc5
    RET                                 ; 1000dcc6

