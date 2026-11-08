; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510ca0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0058df90 at 0058df96
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fa8bc = 00510cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510ca0
        ;   Label: FUN_00510ca0
    MOV dword ptr [EAX],0x0             ; 00510ca4
    MOV dword ptr [EAX + 0x6a44],0x5fa8bc ; 00510caa | PTR_FUN_005fa8bc
    RET                                 ; 00510cb4

