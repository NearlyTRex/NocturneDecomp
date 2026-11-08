; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00412bc0(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412bc0
        ;   Label: FUN_00412bc0
    PUSH ESI                            ; 00412bc1
    PUSH EDI                            ; 00412bc2
    PUSH EBP                            ; 00412bc3
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00412bc4
    MOV EAX,dword ptr [ESP + 0x14]      ; 00412bc8
    XOR EDX,EDX                         ; 00412bcc
    MOV ECX,dword ptr [ESP + 0x14]      ; 00412bce
        ;   Label: LAB_00412bce
    MOV ECX,dword ptr [ECX + 0x1c]      ; 00412bd2
    INC ECX                             ; 00412bd5
    CMP EDX,ECX                         ; 00412bd6
    JGE 0x00412c1b                      ; 00412bd8
        ;   XREF to: 00412c1b (CONDITIONAL_JUMP)  ; LAB_00412c1b
    CMP dword ptr [EAX + 0x7c],0x1      ; 00412bda
    JZ 0x00412be6                       ; 00412bde
        ;   XREF to: 00412be6 (CONDITIONAL_JUMP)  ; LAB_00412be6
    INC EDX                             ; 00412be0
        ;   Label: LAB_00412be0
    ADD EAX,0x2c                        ; 00412be1
    JMP 0x00412bce                      ; 00412be4
        ;   XREF to: 00412bce (UNCONDITIONAL_JUMP)  ; LAB_00412bce
    MOV EDI,dword ptr [EAX + 0x74]      ; 00412be6
        ;   Label: LAB_00412be6
    MOV ECX,dword ptr [EAX + 0x6c]      ; 00412be9
    MOV EBX,dword ptr [EAX + 0x70]      ; 00412bec
    MOV ESI,dword ptr [EAX + 0x78]      ; 00412bef
    ADD EDI,ECX                         ; 00412bf2
    ADD ESI,EBX                         ; 00412bf4
    CMP ECX,dword ptr [ESP + 0x18]      ; 00412bf6
    JG 0x00412be0                       ; 00412bfa
        ;   XREF to: 00412be0 (CONDITIONAL_JUMP)  ; LAB_00412be0
    CMP EDI,dword ptr [ESP + 0x18]      ; 00412bfc
    JL 0x00412be0                       ; 00412c00
        ;   XREF to: 00412be0 (CONDITIONAL_JUMP)  ; LAB_00412be0
    CMP EBP,EBX                         ; 00412c02
    JL 0x00412be0                       ; 00412c04
        ;   XREF to: 00412be0 (CONDITIONAL_JUMP)  ; LAB_00412be0
    CMP EBP,ESI                         ; 00412c06
    JG 0x00412be0                       ; 00412c08
        ;   XREF to: 00412be0 (CONDITIONAL_JUMP)  ; LAB_00412be0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00412c0a
    MOV dword ptr [EAX + 0x20],EDX      ; 00412c0e
    MOV EAX,0x1                         ; 00412c11
    POP EBP                             ; 00412c16
    POP EDI                             ; 00412c17
    POP ESI                             ; 00412c18
    POP EBX                             ; 00412c19
    RET                                 ; 00412c1a
    XOR EAX,EAX                         ; 00412c1b
        ;   Label: LAB_00412c1b
    POP EBP                             ; 00412c1d
    POP EDI                             ; 00412c1e
    POP ESI                             ; 00412c1f
    POP EBX                             ; 00412c20
    RET                                 ; 00412c21

