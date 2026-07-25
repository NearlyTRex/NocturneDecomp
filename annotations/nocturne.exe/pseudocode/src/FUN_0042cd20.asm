; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0042cd20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c7070c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042cd20
        ;   Label: FUN_0042cd20
    MOV EDX,dword ptr [0x01c7070c]      ; 0042cd24 | DAT_01c7070c
    SAR EAX,0x1                         ; 0042cd2a
    ADD EAX,EDX                         ; 0042cd2c
    RET                                 ; 0042cd2e

