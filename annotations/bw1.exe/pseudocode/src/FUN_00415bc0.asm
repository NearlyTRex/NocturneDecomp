; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00415bc0(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_00415df0 at 00415e24
;   FUN_00417630 at 00417664
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fc944 = 00415bc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00415bc0
        ;   Label: FUN_00415bc0
    MOV dword ptr [EAX],0x5fc944        ; 00415bc4 | PTR_FUN_005fc944
    LEA EAX,[EAX]                       ; 00415bca
    RET                                 ; 00415bd0
        ;   Label: LAB_00415bd0

