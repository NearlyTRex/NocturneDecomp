; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510cc0(int param_1)
;
;
; XREF[1]:
;   FUN_0058e050 at 0058e072
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fa8bc = 00510cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510cc0
        ;   Label: FUN_00510cc0
    MOV dword ptr [EAX + 0x6a44],0x5fa8bc ; 00510cc4 | PTR_FUN_005fa8bc
    RET                                 ; 00510cce

