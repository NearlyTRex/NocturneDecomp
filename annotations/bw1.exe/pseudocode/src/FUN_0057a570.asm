; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057a570(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c82a4c
;   undefined4 DAT_02c82a50
;
; *****************************************************************************

section .text

    MOV ECX,0x605bf8                    ; 0057a570
        ;   Label: FUN_0057a570
    MOV EDX,0x605c10                    ; 0057a575
    MOV dword ptr [0x02c82a50],ECX      ; 0057a57a | DAT_02c82a50
    MOV dword ptr [0x02c82a4c],EDX      ; 0057a580 | DAT_02c82a4c
    RET                                 ; 0057a586

