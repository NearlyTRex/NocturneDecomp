; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eceb0(float *param_1)
;
;
; XREF[1]:
;   FUN_004ef920 at 004efa13
;
; Referenced Globals:
;   undefined4 DAT_01d76c90
;   undefined4 DAT_01d76c94
;   undefined4 DAT_01d76c98
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d7977c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004eceb0
        ;   Label: FUN_004eceb0
    FLD float ptr [0x01d76c90]          ; 004eceb4 | DAT_01d76c90
    MOV EAX,[0x01d76cfc]                ; 004eceba | DAT_01d76cfc
    FSUB float ptr [EDX]                ; 004ecebf
    FLD float ptr [0x01d76c94]          ; 004ecec1 | DAT_01d76c94
    FXCH                                ; 004ecec7
    FSTP float ptr [EAX + 0x24]         ; 004ecec9
    FSUB float ptr [EDX + 0x4]          ; 004ececc
    FLD float ptr [0x01d76c98]          ; 004ececf | DAT_01d76c98
    FXCH                                ; 004eced5
    FSTP float ptr [EAX + 0x28]         ; 004eced7
    FSUB float ptr [EDX + 0x8]          ; 004eceda
    MOV EDX,0x1                         ; 004ecedd
    FSTP float ptr [EAX + 0x2c]         ; 004ecee2
    MOV dword ptr [0x01d7977c],EDX      ; 004ecee5 | DAT_01d7977c
    RET                                 ; 004eceeb

