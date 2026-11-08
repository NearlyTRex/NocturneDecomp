; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea120(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea120
        ;   Label: FUN_004ea120
    PUSH EDX                            ; 004ea124
    CALL FUN_004eab00                   ; 004ea125
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; undefined FUN_004eab00()
    ADD ESP,0x4                         ; 004ea12a
    RET                                 ; 004ea12d

