; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_flattn_cpp_FUN_004bf780(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc8054
;   undefined4 DAT_01cc8058
;   undefined4 DAT_01cc805c
;   undefined4 DAT_01cc8060
;   undefined4 DAT_01cc8064
;   undefined4 DAT_01cc8068
;   undefined4 DAT_01cc806c
;   undefined4 DAT_01cc8070
;   undefined4 DAT_01cc8074
;   undefined4 DAT_01cc8078
;   undefined4 DAT_01cc807c
;   undefined4 DAT_01cc8080
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bf780
        ;   Label: unkafter_flattn.cpp_FUN_004bf780
    FLD float ptr [EAX]                 ; 004bf784
    FLD float ptr [EAX + 0x4]           ; 004bf786
    FLD float ptr [EAX + 0x8]           ; 004bf789
    FLD float ptr [EAX + 0xc]           ; 004bf78c
    FLD float ptr [EAX + 0x10]          ; 004bf78f
    FLD float ptr [EAX + 0x14]          ; 004bf792
    FLD float ptr [EAX + 0x18]          ; 004bf795
    FXCH ST5                            ; 004bf798
    FSTP float ptr [0x01cc8058]         ; 004bf79a | DAT_01cc8058
    FLD float ptr [EAX + 0x1c]          ; 004bf7a0
    FXCH ST4                            ; 004bf7a3
    FSTP float ptr [0x01cc805c]         ; 004bf7a5 | DAT_01cc805c
    FLD float ptr [EAX + 0x20]          ; 004bf7ab
    FXCH ST3                            ; 004bf7ae
    FSTP float ptr [0x01cc8060]         ; 004bf7b0 | DAT_01cc8060
    FXCH                                ; 004bf7b6
    FSTP float ptr [0x01cc8064]         ; 004bf7b8 | DAT_01cc8064
    FSTP float ptr [0x01cc8068]         ; 004bf7be | DAT_01cc8068
    FXCH ST2                            ; 004bf7c4
    FSTP float ptr [0x01cc806c]         ; 004bf7c6 | DAT_01cc806c
    FSTP float ptr [0x01cc8070]         ; 004bf7cc | DAT_01cc8070
    FSTP float ptr [0x01cc8074]         ; 004bf7d2 | DAT_01cc8074
    XOR EDX,EDX                         ; 004bf7d8
    FSTP float ptr [0x01cc8054]         ; 004bf7da | DAT_01cc8054
    MOV dword ptr [0x01cc8078],EDX      ; 004bf7e0 | DAT_01cc8078
    MOV dword ptr [0x01cc807c],EDX      ; 004bf7e6 | DAT_01cc807c
    MOV dword ptr [0x01cc8080],EDX      ; 004bf7ec | DAT_01cc8080
    RET                                 ; 004bf7f2

