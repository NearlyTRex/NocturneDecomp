; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534860(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 s__00595170+0xa
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00534860
        ;   Label: FUN_00534860
    MOV EAX,dword ptr [ESP + 0x8]       ; 00534864
    FLD float ptr [EDX + 0x158]         ; 00534868
    FCHS                                ; 0053486e
    FLD double ptr [0x0059517a]         ; 00534870 | s__00595170+0xa
    FXCH                                ; 00534876
    FMUL ST1                            ; 00534878
    FSTP float ptr [EAX]                ; 0053487a
    FLD float ptr [EDX + 0x158]         ; 0053487c
    MOV dword ptr [EAX + 0x4],0x0       ; 00534882
    FMULP                               ; 00534889
    MOV dword ptr [EAX + 0x8],0x0       ; 0053488b
    FSTP float ptr [EAX + 0xc]          ; 00534892
    FILD dword ptr [EDX + 0x164]        ; 00534895
    FMUL float ptr [EDX + 0x150]        ; 0053489b
    FSTP float ptr [EAX + 0x10]         ; 005348a1
    FILD dword ptr [EDX + 0x164]        ; 005348a4
    FMUL float ptr [EDX + 0x154]        ; 005348aa
    FSTP float ptr [EAX + 0x14]         ; 005348b0
    RET                                 ; 005348b3

