; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504c10(int param_1)
;
;
; XREF[1]:
;   FUN_00504270 at 005042fd
;
; Referenced Globals:
;   undefined4 DAT_0060728c
;
; Called Functions:
;   FUN_0056f960
;   FUN_0056fb10
;   FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00504c10
        ;   Label: FUN_00504c10
    PUSH EBP                            ; 00504c11
    MOV ESI,dword ptr [ESP + 0xc]       ; 00504c12
    ADD ESI,0x180                       ; 00504c16
    PUSH ESI                            ; 00504c1c
    CALL FUN_0056f960                   ; 00504c1d
        ;   XREF to: 0056f960 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f960()
    ADD ESP,0x4                         ; 00504c22
    TEST EAX,EAX                        ; 00504c25
    JZ 0x00504c6a                       ; 00504c27
        ;   XREF to: 00504c6a (CONDITIONAL_JUMP)  ; LAB_00504c6a
    PUSH EDI                            ; 00504c29
    PUSH EBX                            ; 00504c2a
    XOR EDX,EDX                         ; 00504c2b
    MOV EDI,dword ptr [0x0060728c]      ; 00504c2d | DAT_0060728c
    MOV dword ptr [0x0060728c],EDX      ; 00504c33 | DAT_0060728c
    XOR EBP,EBP                         ; 00504c39
    CALL FUN_0057a8a0                   ; 00504c3b
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
        ;   Label: LAB_00504c3b
    MOV EBX,EBP                         ; 00504c40
    PUSH EBP                            ; 00504c42
        ;   Label: LAB_00504c42
    PUSH 0x405                          ; 00504c43
    PUSH 0x1dd4488                      ; 00504c48
    PUSH ESI                            ; 00504c4d
    CALL FUN_0056fb10                   ; 00504c4e
        ;   XREF to: 0056fb10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fb10()
    ADD ESP,0x10                        ; 00504c53
    TEST EAX,EAX                        ; 00504c56
    JLE 0x00504c62                      ; 00504c58
        ;   XREF to: 00504c62 (CONDITIONAL_JUMP)  ; LAB_00504c62
    INC EBX                             ; 00504c5a
    CMP EBX,0x14                        ; 00504c5b
    JL 0x00504c42                       ; 00504c5e
        ;   XREF to: 00504c42 (CONDITIONAL_JUMP)  ; LAB_00504c42
    JMP 0x00504c3b                      ; 00504c60
        ;   XREF to: 00504c3b (UNCONDITIONAL_JUMP)  ; LAB_00504c3b
    MOV dword ptr [0x0060728c],EDI      ; 00504c62 | DAT_0060728c
        ;   Label: LAB_00504c62
    POP EBX                             ; 00504c68
    POP EDI                             ; 00504c69
    POP EBP                             ; 00504c6a
        ;   Label: LAB_00504c6a
    POP ESI                             ; 00504c6b
    RET                                 ; 00504c6c

