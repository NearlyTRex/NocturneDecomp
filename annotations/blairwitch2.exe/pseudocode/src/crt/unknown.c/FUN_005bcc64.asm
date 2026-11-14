; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bcc64(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bcca0 at 005bccc4
;
; Referenced Globals:
;   undefined4 DAT_0061ee9d
;   undefined4 DAT_0061f6b4
;   undefined4 DAT_0061f6b8
;   undefined4 DAT_0061f6bc
;
; Called Functions:
;   crt_unknown.c_FUN_005c25f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bcc64
        ;   Label: crt_unknown.c_FUN_005bcc64
    CMP byte ptr [0x0061ee9d],0x0       ; 005bcc65 | DAT_0061ee9d
    JZ 0x005bcc84                       ; 005bcc6c
        ;   XREF to: 005bcc84 (CONDITIONAL_JUMP)  ; LAB_005bcc84
    MOV EDX,0x5bcc50                    ; 005bcc6e
    MOV EBX,0x5bcc5c                    ; 005bcc73
    MOV dword ptr [0x0061f6b4],EDX      ; 005bcc78 | DAT_0061f6b4
    MOV dword ptr [0x0061f6b8],EBX      ; 005bcc7e | DAT_0061f6b8
    XOR EAX,EAX                         ; 005bcc84
        ;   Label: LAB_005bcc84
    MOV AX,[0x0061f6bc]                 ; 005bcc86 | DAT_0061f6bc
    CALL crt_unknown.c_FUN_005c25f0     ; 005bcc8c
        ;   XREF to: 005c25f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c25f0()
    POP EBX                             ; 005bcc91
    RET                                 ; 005bcc92

