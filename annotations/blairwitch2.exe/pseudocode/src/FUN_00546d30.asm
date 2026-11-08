; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546d30(int param_1,float *param_2)
;
;
; Called Functions:
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546d30
        ;   Label: FUN_00546d30
    PUSH ESI                            ; 00546d31
    PUSH EDI                            ; 00546d32
    PUSH EBP                            ; 00546d33
    MOV ESI,dword ptr [ESP + 0x14]      ; 00546d34
    MOV EBX,dword ptr [ESP + 0x18]      ; 00546d38
    PUSH ESI                            ; 00546d3c
    CALL FUN_00547890                   ; 00546d3d
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 00546d42
    MOV ECX,EAX                         ; 00546d45
    MOV EDI,dword ptr [EAX + 0x1d1f8]   ; 00546d47
    XOR EDX,EDX                         ; 00546d4d
    TEST EDI,EDI                        ; 00546d4f
    JLE 0x00546d90                      ; 00546d51
        ;   XREF to: 00546d90 (CONDITIONAL_JUMP)  ; LAB_00546d90
    MOV EAX,ESI                         ; 00546d53
    FLD float ptr [EBX]                 ; 00546d55
        ;   Label: LAB_00546d55
    FADD float ptr [EAX + 0xe8c]        ; 00546d57
    FSTP float ptr [EAX + 0xe8c]        ; 00546d5d
    FLD float ptr [EBX + 0x4]           ; 00546d63
    FADD float ptr [EAX + 0xe9c]        ; 00546d66
    FSTP float ptr [EAX + 0xe9c]        ; 00546d6c
    FLD float ptr [EBX + 0x8]           ; 00546d72
    FADD float ptr [EAX + 0xeac]        ; 00546d75
    INC EDX                             ; 00546d7b
    FSTP float ptr [EAX + 0xeac]        ; 00546d7c
    MOV EBP,dword ptr [ECX + 0x1d1f8]   ; 00546d82
    ADD EAX,0x30                        ; 00546d88
    CMP EDX,EBP                         ; 00546d8b
    JL 0x00546d55                       ; 00546d8d
        ;   XREF to: 00546d55 (CONDITIONAL_JUMP)  ; LAB_00546d55
    NOP                                 ; 00546d8f
    MOV dword ptr [ESI + 0x2230],0xffffffff ; 00546d90
        ;   Label: LAB_00546d90
    POP EBP                             ; 00546d9a
    POP EDI                             ; 00546d9b
    POP ESI                             ; 00546d9c
    POP EBX                             ; 00546d9d
    RET                                 ; 00546d9e

