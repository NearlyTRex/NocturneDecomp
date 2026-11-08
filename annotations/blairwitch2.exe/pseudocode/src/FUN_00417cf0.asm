; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00417cf0(int param_1)
;
;
; Called Functions:
;   FUN_0044fc80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417cf0
        ;   Label: FUN_00417cf0
    ADD EAX,0x18                        ; 00417cf4
    PUSH EAX                            ; 00417cf7
    CALL FUN_0044fc80                   ; 00417cf8
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 00417cfd
    SUB EAX,0x18                        ; 00417d00
    RET                                 ; 00417d03

