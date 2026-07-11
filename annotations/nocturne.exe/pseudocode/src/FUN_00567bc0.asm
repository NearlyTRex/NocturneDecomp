; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00567bc0(int param_1,int *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00567560 at 005677aa
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567bc0
        ;   Label: FUN_00567bc0
    PUSH ESI                            ; 00567bc1
    PUSH EDI                            ; 00567bc2
    PUSH ES                             ; 00567bc3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00567bc4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00567bc8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00567bcc
    MOV CL,byte ptr [EDX + 0x10]        ; 00567bd0
    TEST CL,0x1                         ; 00567bd3
    JZ 0x00567c25                       ; 00567bd6
        ;   XREF to: 00567c25 (CONDITIONAL_JUMP)  ; LAB_00567c25
    TEST CL,0x4                         ; 00567bd8
    JZ 0x00567be9                       ; 00567bdb
        ;   XREF to: 00567be9 (CONDITIONAL_JUMP)  ; LAB_00567be9
    MOV EDI,dword ptr [EAX]             ; 00567bdd
    ADD EDI,0x8                         ; 00567bdf
    MOV dword ptr [EAX],EDI             ; 00567be2
    LES EAX,[EDI + -0x8]                ; 00567be4
    JMP 0x00567c0e                      ; 00567be7
        ;   XREF to: 00567c0e (UNCONDITIONAL_JUMP)  ; LAB_00567c0e
    TEST CL,0x8                         ; 00567be9
        ;   Label: LAB_00567be9
    JZ 0x00567bfe                       ; 00567bec
        ;   XREF to: 00567bfe (CONDITIONAL_JUMP)  ; LAB_00567bfe
    MOV ESI,dword ptr [EAX]             ; 00567bee
    ADD ESI,0x4                         ; 00567bf0
    MOV CX,DS                           ; 00567bf3
    MOV dword ptr [EAX],ESI             ; 00567bf5
    MOV ES,CX                           ; 00567bf7
    MOV EAX,dword ptr [ESI + -0x4]      ; 00567bf9
    JMP 0x00567c0e                      ; 00567bfc
        ;   XREF to: 00567c0e (UNCONDITIONAL_JUMP)  ; LAB_00567c0e
    MOV ECX,dword ptr [EAX]             ; 00567bfe
        ;   Label: LAB_00567bfe
    ADD ECX,0x4                         ; 00567c00
    MOV dword ptr [EAX],ECX             ; 00567c03
    MOV EAX,ECX                         ; 00567c05
    MOV CX,DS                           ; 00567c07
    MOV ES,CX                           ; 00567c09
    MOV EAX,dword ptr [EAX + -0x4]      ; 00567c0b
    MOV CH,byte ptr [EDX + 0x10]        ; 00567c0e
        ;   Label: LAB_00567c0e
    TEST CH,0x10                        ; 00567c11
    JZ 0x00567c1f                       ; 00567c14
        ;   XREF to: 00567c1f (CONDITIONAL_JUMP)  ; LAB_00567c1f
    MOV word ptr ES:[EAX],BX            ; 00567c16
    POP ES                              ; 00567c1a
    POP EDI                             ; 00567c1b
    POP ESI                             ; 00567c1c
    POP EBX                             ; 00567c1d
    RET                                 ; 00567c1e
    TEST CH,0x20                        ; 00567c1f
        ;   Label: LAB_00567c1f
    MOV dword ptr ES:[EAX],EBX          ; 00567c22
    POP ES                              ; 00567c25
        ;   Label: LAB_00567c25
    POP EDI                             ; 00567c26
    POP ESI                             ; 00567c27
    POP EBX                             ; 00567c28
    RET                                 ; 00567c29

