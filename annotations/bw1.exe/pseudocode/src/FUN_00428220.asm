; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00428220(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0044caa0 at 0044caa5
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd414 = 00428240
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00428220
        ;   Label: FUN_00428220
    MOV dword ptr [EAX + 0x38],0x41e00000 ; 00428224
    MOV dword ptr [EAX],0x43800000      ; 0042822b
    MOV dword ptr [EAX + 0x3c],0x5fd414 ; 00428231 | PTR_FUN_005fd414
    RET                                 ; 00428238

