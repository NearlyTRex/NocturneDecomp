; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6d70(int param_1)
;
;
; XREF[1]:
;   FUN_004f5b80 at 004f5b86
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d5ba00
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_004f6bf0
;   FUN_004f6ca0
;   FUN_0053ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6d70
        ;   Label: FUN_004f6d70
    PUSH EDI                            ; 004f6d71
    PUSH EBP                            ; 004f6d72
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f6d73
    CMP dword ptr [EBX + 0x143c],0x0    ; 004f6d77
    JZ 0x004f6d9e                       ; 004f6d7e
        ;   XREF to: 004f6d9e (CONDITIONAL_JUMP)  ; LAB_004f6d9e
    PUSH ESI                            ; 004f6d80
    PUSH 0x1                            ; 004f6d81
        ;   Label: LAB_004f6d81
    MOV ECX,dword ptr [EBX + 0x143c]    ; 004f6d83
    PUSH ECX                            ; 004f6d89
    PUSH EBX                            ; 004f6d8a
    CALL FUN_004f6ca0                   ; 004f6d8b
        ;   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6ca0()
    MOV ESI,dword ptr [EBX + 0x143c]    ; 004f6d90
    ADD ESP,0xc                         ; 004f6d96
    TEST ESI,ESI                        ; 004f6d99
    JNZ 0x004f6d81                      ; 004f6d9b
        ;   XREF to: 004f6d81 (CONDITIONAL_JUMP)  ; LAB_004f6d81
    POP ESI                             ; 004f6d9d
    PUSH EBX                            ; 004f6d9e
        ;   Label: LAB_004f6d9e
    CALL FUN_004f6bf0                   ; 004f6d9f
        ;   XREF to: 004f6bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6bf0()
    ADD ESP,0x4                         ; 004f6da4
    MOV EBP,dword ptr [0x00603b28]      ; 004f6da7 | DAT_00603b28
    XOR EDI,EDI                         ; 004f6dad
    PUSH EBP                            ; 004f6daf | DAT_01ed78c8
    MOV dword ptr [0x01d5ba00],EDI      ; 004f6db0 | DAT_01d5ba00
    MOV dword ptr [EBX + 0x1454],0xffffffff ; 004f6db6
    CALL FUN_0053ef40                   ; 004f6dc0
        ;   XREF to: 0053ef40 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ef40()
    ADD ESP,0x4                         ; 004f6dc5
    MOV dword ptr [EBX + 0x1018],EDI    ; 004f6dc8
    POP EBP                             ; 004f6dce
    POP EDI                             ; 004f6dcf
    POP EBX                             ; 004f6dd0
    RET                                 ; 004f6dd1

