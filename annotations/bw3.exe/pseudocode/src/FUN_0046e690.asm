; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046e690(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0044c130 at 0044c80e
;
; Called Functions:
;   FUN_0056ac80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0046e690
        ;   Label: FUN_0046e690
    PUSH EDX                            ; 0046e694
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046e695
    PUSH ECX                            ; 0046e699
    CALL FUN_0056ac80                   ; 0046e69a
        ;   XREF to: 0056ac80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ac80()
    ADD ESP,0x8                         ; 0046e69f
    RET                                 ; 0046e6a2

