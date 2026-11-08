; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558c10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060425c
;   undefined4 DAT_00604260
;   undefined4 DAT_00604264
;   undefined4 DAT_02cf3c68
;   undefined4 DAT_02cf3c6c
;   undefined4 DAT_02cf3c70
;
; Called Functions:
;   FUN_00556fd0
;   FUN_00558af0
;   FUN_00558b00
;   FUN_00558b20
;   FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558c10
        ;   Label: FUN_00558c10
    PUSH ESI                            ; 00558c11
    CALL FUN_00558af0                   ; 00558c12
        ;   XREF to: 00558af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00558af0()
    TEST EAX,EAX                        ; 00558c17
    JNZ 0x00558c1e                      ; 00558c19
        ;   XREF to: 00558c1e (CONDITIONAL_JUMP)  ; LAB_00558c1e
    POP ESI                             ; 00558c1b
    POP EBX                             ; 00558c1c
    RET                                 ; 00558c1d
    CALL FUN_00558b00                   ; 00558c1e
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00558b00()
        ;   Label: LAB_00558c1e
    TEST EAX,EAX                        ; 00558c23
    JZ 0x00558c2f                       ; 00558c25
        ;   XREF to: 00558c2f (CONDITIONAL_JUMP)  ; LAB_00558c2f
    MOV EAX,0x1                         ; 00558c27
    POP ESI                             ; 00558c2c
    POP EBX                             ; 00558c2d
    RET                                 ; 00558c2e
    CALL FUN_00558e90                   ; 00558c2f
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00558e90()
        ;   Label: LAB_00558c2f
    MOV EDX,dword ptr [0x02cf3c70]      ; 00558c34 | DAT_02cf3c70
    PUSH EDX                            ; 00558c3a
    MOV ECX,dword ptr [0x00604264]      ; 00558c3b | DAT_00604264
    PUSH ECX                            ; 00558c41
    MOV EBX,dword ptr [0x00604260]      ; 00558c42 | DAT_00604260
    PUSH EBX                            ; 00558c48
    MOV ESI,dword ptr [0x0060425c]      ; 00558c49 | DAT_0060425c
    PUSH ESI                            ; 00558c4f
    CALL FUN_00558b20                   ; 00558c50
        ;   XREF to: 00558b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00558b20()
    ADD ESP,0x10                        ; 00558c55
    TEST EAX,EAX                        ; 00558c58
    JZ 0x00558c85                       ; 00558c5a
        ;   XREF to: 00558c85 (CONDITIONAL_JUMP)  ; LAB_00558c85
    MOV EAX,[0x02cf3c68]                ; 00558c5c | DAT_02cf3c68
    PUSH EAX                            ; 00558c61
    MOV EDX,dword ptr [EAX]             ; 00558c62
    CALL dword ptr [EDX + 0x4]          ; 00558c64
    ADD ESP,0x4                         ; 00558c67
    TEST EAX,EAX                        ; 00558c6a
    JZ 0x00558c85                       ; 00558c6c
        ;   XREF to: 00558c85 (CONDITIONAL_JUMP)  ; LAB_00558c85
    PUSH EDI                            ; 00558c6e
    MOV EDI,0x1                         ; 00558c6f
    MOV dword ptr [0x02cf3c6c],EDI      ; 00558c74 | DAT_02cf3c6c
    CALL FUN_00556fd0                   ; 00558c7a
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    MOV EAX,EDI                         ; 00558c7f
    POP EDI                             ; 00558c81
    POP ESI                             ; 00558c82
    POP EBX                             ; 00558c83
    RET                                 ; 00558c84
    CALL FUN_00556fd0                   ; 00558c85
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
        ;   Label: LAB_00558c85
    XOR EAX,EAX                         ; 00558c8a
    POP ESI                             ; 00558c8c
    POP EBX                             ; 00558c8d
    RET                                 ; 00558c8e

