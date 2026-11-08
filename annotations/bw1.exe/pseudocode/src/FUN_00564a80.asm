; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564a80(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_00483e20
;   FUN_00483e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564a80
        ;   Label: FUN_00564a80
    PUSH ESI                            ; 00564a81
    PUSH EDI                            ; 00564a82
    PUSH EBP                            ; 00564a83
    MOV EBP,dword ptr [ESP + 0x18]      ; 00564a84
    XOR EDI,EDI                         ; 00564a88
    XOR ESI,ESI                         ; 00564a8a
    SHL EBP,0x2                         ; 00564a8c
    MOV EBX,dword ptr [ESP + 0x14]      ; 00564a8f
        ;   Label: LAB_00564a8f
    ADD EBX,EBP                         ; 00564a93
    CMP ESI,dword ptr [EBX + 0x54]      ; 00564a95
    JL 0x00564ab0                       ; 00564a98
        ;   XREF to: 00564ab0 (CONDITIONAL_JUMP)  ; LAB_00564ab0
    PUSH 0x1                            ; 00564a9a
    MOV ECX,dword ptr [0x00612560]      ; 00564a9c | DAT_00612560
    PUSH ECX                            ; 00564aa2
    CALL FUN_00483e20                   ; 00564aa3
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e20()
    ADD ESP,0x8                         ; 00564aa8
    POP EBP                             ; 00564aab
    POP EDI                             ; 00564aac
    POP ESI                             ; 00564aad
    POP EBX                             ; 00564aae
    RET                                 ; 00564aaf
    MOV EBX,dword ptr [EBX + 0x7c]      ; 00564ab0
        ;   Label: LAB_00564ab0
    XOR EAX,EAX                         ; 00564ab3
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 00564ab5
    PUSH EAX                            ; 00564aba
    XOR EAX,EAX                         ; 00564abb
    MOV AX,word ptr [EDI + EBX*0x1]     ; 00564abd
    PUSH EAX                            ; 00564ac1
    MOV ECX,dword ptr [0x00612560]      ; 00564ac2 | DAT_00612560
    PUSH ECX                            ; 00564ac8
    CALL FUN_00483e70                   ; 00564ac9
        ;   XREF to: 00483e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e70()
    XOR EAX,EAX                         ; 00564ace
    ADD ESP,0xc                         ; 00564ad0
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 00564ad3
    PUSH EAX                            ; 00564ad8
    XOR EAX,EAX                         ; 00564ad9
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 00564adb
    PUSH EAX                            ; 00564ae0
    MOV EAX,[0x00612560]                ; 00564ae1 | DAT_00612560
    PUSH EAX                            ; 00564ae6
    CALL FUN_00483e70                   ; 00564ae7
        ;   XREF to: 00483e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e70()
    XOR EAX,EAX                         ; 00564aec
    ADD ESP,0xc                         ; 00564aee
    MOV AX,word ptr [EDI + EBX*0x1]     ; 00564af1
    PUSH EAX                            ; 00564af5
    XOR EAX,EAX                         ; 00564af6
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 00564af8
    PUSH EAX                            ; 00564afd
    MOV EDX,dword ptr [0x00612560]      ; 00564afe | DAT_00612560
    PUSH EDX                            ; 00564b04
    ADD EDI,0x12                        ; 00564b05
    INC ESI                             ; 00564b08
    CALL FUN_00483e70                   ; 00564b09
        ;   XREF to: 00483e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e70()
    ADD ESP,0xc                         ; 00564b0e
    JMP 0x00564a8f                      ; 00564b11
        ;   XREF to: 00564a8f (UNCONDITIONAL_JUMP)  ; LAB_00564a8f

