; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eefb0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00557f50 at 00557f56
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a0ff0 = 004eefc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eefb0
        ;   Label: FUN_004eefb0
    MOV dword ptr [EAX],0x5a0ff0        ; 004eefb4 | PTR_FUN_005a0ff0
    RET                                 ; 004eefba

