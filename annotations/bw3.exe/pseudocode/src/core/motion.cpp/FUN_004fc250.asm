; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fc250(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5c9d04                    ; 004fc250
        ;   Label: FUN_004fc250
    MOV ECX,0x313                       ; 004fc255
    PUSH 0x5c9d17                       ; 004fc25a
    MOV dword ptr [0x01d71de0],EDX      ; 004fc25f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004fc265 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004fc26b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004fc270
    XOR EAX,EAX                         ; 004fc273
    RET                                 ; 004fc275

