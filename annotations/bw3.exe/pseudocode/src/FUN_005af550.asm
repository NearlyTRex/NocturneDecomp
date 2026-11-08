; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005af550(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005af560 at 005af5a9
;
; Called Functions:
;   FUN_005a3650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005af550
        ;   Label: FUN_005af550
    PUSH EDX                            ; 005af554
    CALL FUN_005a3650                   ; 005af555
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 005af55a
    RET                                 ; 005af55d

