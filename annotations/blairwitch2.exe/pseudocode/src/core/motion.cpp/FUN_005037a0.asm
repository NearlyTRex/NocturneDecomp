; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005037a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5dfc98                    ; 005037a0
        ;   Label: FUN_005037a0
    MOV ECX,0x2fa                       ; 005037a5
    PUSH 0x5dfcab                       ; 005037aa
    MOV dword ptr [0x01d046a0],EDX      ; 005037af | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005037b5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005037bb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005037c0
    XOR EAX,EAX                         ; 005037c3
    RET                                 ; 005037c5

