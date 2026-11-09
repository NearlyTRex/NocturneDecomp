; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_flattn_cpp_FUN_004bf890(undefined4 *param_1)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bf890
        ;   Label: unkafter_flattn.cpp_FUN_004bf890
    FLD float ptr [EAX]                 ; 004bf894
    FLD float ptr [EAX + 0x4]           ; 004bf896
    FLD float ptr [EAX + 0x8]           ; 004bf899
    FLD float ptr [EAX + 0xc]           ; 004bf89c
    FLD float ptr [EAX + 0x10]          ; 004bf89f
    FLD float ptr [EAX + 0x14]          ; 004bf8a2
    FLD float ptr [EAX + 0x18]          ; 004bf8a5
    FXCH ST5                            ; 004bf8a8
    FSTP float ptr [0x01cc8060]         ; 004bf8aa | DAT_01cc8060
    FLD float ptr [EAX + 0x1c]          ; 004bf8b0
    FXCH ST4                            ; 004bf8b3
    FSTP float ptr [0x01cc806c]         ; 004bf8b5 | DAT_01cc806c
    FLD float ptr [EAX + 0x20]          ; 004bf8bb
    FXCH ST3                            ; 004bf8be
    FSTP float ptr [0x01cc8058]         ; 004bf8c0 | DAT_01cc8058
    FXCH                                ; 004bf8c6
    FSTP float ptr [0x01cc8064]         ; 004bf8c8 | DAT_01cc8064
    FSTP float ptr [0x01cc8070]         ; 004bf8ce | DAT_01cc8070
    FXCH ST2                            ; 004bf8d4
    FSTP float ptr [0x01cc805c]         ; 004bf8d6 | DAT_01cc805c
    FSTP float ptr [0x01cc8068]         ; 004bf8dc | DAT_01cc8068
    FSTP float ptr [0x01cc8074]         ; 004bf8e2 | DAT_01cc8074
    XOR EDX,EDX                         ; 004bf8e8
    FSTP float ptr [0x01cc8054]         ; 004bf8ea | DAT_01cc8054
    MOV dword ptr [0x01cc8078],EDX      ; 004bf8f0 | DAT_01cc8078
    MOV dword ptr [0x01cc807c],EDX      ; 004bf8f6 | DAT_01cc807c
    MOV dword ptr [0x01cc8080],EDX      ; 004bf8fc | DAT_01cc8080
    RET                                 ; 004bf902

