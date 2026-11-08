; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c5ab0(int param_1,int *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005c5450 at 005c569a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5ab0
        ;   Label: FUN_005c5ab0
    PUSH ESI                            ; 005c5ab1
    PUSH EDI                            ; 005c5ab2
    PUSH ES                             ; 005c5ab3
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c5ab4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c5ab8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c5abc
    MOV CL,byte ptr [EDX + 0x10]        ; 005c5ac0
    TEST CL,0x1                         ; 005c5ac3
    JZ 0x005c5b15                       ; 005c5ac6
        ;   XREF to: 005c5b15 (CONDITIONAL_JUMP)  ; LAB_005c5b15
    TEST CL,0x4                         ; 005c5ac8
    JZ 0x005c5ad9                       ; 005c5acb
        ;   XREF to: 005c5ad9 (CONDITIONAL_JUMP)  ; LAB_005c5ad9
    MOV EDI,dword ptr [EAX]             ; 005c5acd
    ADD EDI,0x8                         ; 005c5acf
    MOV dword ptr [EAX],EDI             ; 005c5ad2
    LES EAX,[EDI + -0x8]                ; 005c5ad4
    JMP 0x005c5afe                      ; 005c5ad7
        ;   XREF to: 005c5afe (UNCONDITIONAL_JUMP)  ; LAB_005c5afe
    TEST CL,0x8                         ; 005c5ad9
        ;   Label: LAB_005c5ad9
    JZ 0x005c5aee                       ; 005c5adc
        ;   XREF to: 005c5aee (CONDITIONAL_JUMP)  ; LAB_005c5aee
    MOV ESI,dword ptr [EAX]             ; 005c5ade
    ADD ESI,0x4                         ; 005c5ae0
    MOV CX,DS                           ; 005c5ae3
    MOV dword ptr [EAX],ESI             ; 005c5ae5
    MOV ES,CX                           ; 005c5ae7
    MOV EAX,dword ptr [ESI + -0x4]      ; 005c5ae9
    JMP 0x005c5afe                      ; 005c5aec
        ;   XREF to: 005c5afe (UNCONDITIONAL_JUMP)  ; LAB_005c5afe
    MOV ECX,dword ptr [EAX]             ; 005c5aee
        ;   Label: LAB_005c5aee
    ADD ECX,0x4                         ; 005c5af0
    MOV dword ptr [EAX],ECX             ; 005c5af3
    MOV EAX,ECX                         ; 005c5af5
    MOV CX,DS                           ; 005c5af7
    MOV ES,CX                           ; 005c5af9
    MOV EAX,dword ptr [EAX + -0x4]      ; 005c5afb
    MOV CH,byte ptr [EDX + 0x10]        ; 005c5afe
        ;   Label: LAB_005c5afe
    TEST CH,0x10                        ; 005c5b01
    JZ 0x005c5b0f                       ; 005c5b04
        ;   XREF to: 005c5b0f (CONDITIONAL_JUMP)  ; LAB_005c5b0f
    MOV word ptr ES:[EAX],BX            ; 005c5b06
    POP ES                              ; 005c5b0a
    POP EDI                             ; 005c5b0b
    POP ESI                             ; 005c5b0c
    POP EBX                             ; 005c5b0d
    RET                                 ; 005c5b0e
    TEST CH,0x20                        ; 005c5b0f
        ;   Label: LAB_005c5b0f
    MOV dword ptr ES:[EAX],EBX          ; 005c5b12
    POP ES                              ; 005c5b15
        ;   Label: LAB_005c5b15
    POP EDI                             ; 005c5b16
    POP ESI                             ; 005c5b17
    POP EBX                             ; 005c5b18
    RET                                 ; 005c5b19

