; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461e62(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01ba51c8
;   undefined4 DAT_01ba56cc
;   undefined4 DAT_01ba56d0
;   undefined4 DAT_01ba5714
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00461e62
        ;   Label: FUN_00461e62
    MOV EDX,0x4568901                   ; 00461e63
    CMP EAX,EBP                         ; 00461e68
    JGE 0x00461e71                      ; 00461e6a
        ;   XREF to: 00461e71 (CONDITIONAL_JUMP)  ; LAB_00461e71
    MOV [0x01ba56cc],EAX                ; 00461e6c | DAT_01ba56cc
    CMP EDX,dword ptr [0x01ba56d0]      ; 00461e71 | DAT_01ba56d0
        ;   Label: LAB_00461e71
    JLE 0x00461e7f                      ; 00461e77
        ;   XREF to: 00461e7f (CONDITIONAL_JUMP)  ; LAB_00461e7f
    MOV dword ptr [0x01ba56d0],EDX      ; 00461e79 | DAT_01ba56d0
    MOV EDX,dword ptr [EBX + 0x14]      ; 00461e7f
        ;   Label: LAB_00461e7f
    MOV ECX,dword ptr [EDI + 0x14]      ; 00461e82
    SUB ECX,EDX                         ; 00461e85
    CMP ECX,0x10000                     ; 00461e87
    JNC 0x00461f12                      ; 00461e8d
        ;   XREF to: 00461f12 (CONDITIONAL_JUMP)  ; LAB_00461f12
    XOR ECX,ECX                         ; 00461e93
    MOV EDX,dword ptr [EDI + 0x10]      ; 00461e95
        ;   Label: LAB_00461e95
    MOV EBP,dword ptr [EBX + 0x10]      ; 00461e98
    MOV EAX,ECX                         ; 00461e9b
    SUB EDX,EBP                         ; 00461e9d
    IMUL EDX                            ; 00461e9f
    SHRD EAX,EDX,0x10                   ; 00461ea1
    MOV dword ptr [ESI + 0xc],EAX       ; 00461ea5
    MOV EAX,dword ptr [EDI + 0x8]       ; 00461ea8
    MOV EDX,dword ptr [EBX + 0x8]       ; 00461eab
    SUB EAX,EDX                         ; 00461eae
    MOV EDX,EAX                         ; 00461eb0
    SHL EDX,0x8                         ; 00461eb2
    MOV EAX,ECX                         ; 00461eb5
    IMUL EDX                            ; 00461eb7
    SHRD EAX,EDX,0x10                   ; 00461eb9
    MOV dword ptr [ESI + 0x2c],EAX      ; 00461ebd
    MOV ECX,dword ptr [EBX + 0x14]      ; 00461ec0
    AND ECX,0xffff                      ; 00461ec3
    XOR CX,0xffff                       ; 00461ec9
    MOV EDX,dword ptr [ESI + 0xc]       ; 00461ecd
    MOV EAX,ECX                         ; 00461ed0
    IMUL EDX                            ; 00461ed2
    SHRD EAX,EDX,0x10                   ; 00461ed4
    MOV EDX,EAX                         ; 00461ed8
    MOV EAX,dword ptr [EBX + 0x10]      ; 00461eda
    MOV EDI,dword ptr [0x01ba5714]      ; 00461edd | DAT_01ba5714
    ADD EAX,EDX                         ; 00461ee3
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00461ee5
    MOV dword ptr [ESI + 0x8],EAX       ; 00461ee8
    MOV EAX,ECX                         ; 00461eeb
    MOV EBX,dword ptr [EBX + 0x8]       ; 00461eed
    IMUL EDX                            ; 00461ef0
    SHRD EAX,EDX,0x10                   ; 00461ef2
    SHL EBX,0x8                         ; 00461ef6
    MOV EBP,dword ptr [0x01ba51c8]      ; 00461ef9 | DAT_01ba51c8
    SUB EBX,EDI                         ; 00461eff
    INC EBP                             ; 00461f01
    ADD EBX,EAX                         ; 00461f02
    MOV dword ptr [0x01ba51c8],EBP      ; 00461f04 | DAT_01ba51c8
    MOV dword ptr [ESI + 0x28],EBX      ; 00461f0a
    POP ESI                             ; 00461f0d
    POP EBP                             ; 00461f0e
    POP EDI                             ; 00461f0f
    POP EBX                             ; 00461f10
    RET                                 ; 00461f11
    MOV EAX,0xffffffff                  ; 00461f12
        ;   Label: LAB_00461f12
    XOR EDX,EDX                         ; 00461f17
    DIV ECX                             ; 00461f19
    MOV ECX,EAX                         ; 00461f1b
    JMP 0x00461e95                      ; 00461f1d
        ;   XREF to: 00461e95 (UNCONDITIONAL_JUMP)  ; LAB_00461e95

