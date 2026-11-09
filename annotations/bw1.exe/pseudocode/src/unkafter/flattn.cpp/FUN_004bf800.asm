; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_flattn_cpp_FUN_004bf800(undefined4 *param_1,undefined4 *param_2)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bf800
        ;   Label: unkafter_flattn.cpp_FUN_004bf800
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bf804
    FLD float ptr [EAX]                 ; 004bf808
    FLD float ptr [EAX + 0x4]           ; 004bf80a
    FLD float ptr [EAX + 0x8]           ; 004bf80d
    FLD float ptr [EAX + 0xc]           ; 004bf810
    FLD float ptr [EAX + 0x10]          ; 004bf813
    FLD float ptr [EAX + 0x14]          ; 004bf816
    FLD float ptr [EAX + 0x18]          ; 004bf819
    FXCH ST5                            ; 004bf81c
    FSTP float ptr [0x01cc8058]         ; 004bf81e | DAT_01cc8058
    FLD float ptr [EAX + 0x1c]          ; 004bf824
    FXCH ST4                            ; 004bf827
    FSTP float ptr [0x01cc805c]         ; 004bf829 | DAT_01cc805c
    FLD float ptr [EAX + 0x20]          ; 004bf82f
    FXCH ST3                            ; 004bf832
    FSTP float ptr [0x01cc8060]         ; 004bf834 | DAT_01cc8060
    FLD float ptr [EDX]                 ; 004bf83a
    FXCH ST2                            ; 004bf83c
    FSTP float ptr [0x01cc8064]         ; 004bf83e | DAT_01cc8064
    FLD float ptr [EDX + 0x4]           ; 004bf844
    FXCH                                ; 004bf847
    FSTP float ptr [0x01cc8068]         ; 004bf849 | DAT_01cc8068
    FLD float ptr [EDX + 0x8]           ; 004bf84f
    FXCH ST5                            ; 004bf852
    FSTP float ptr [0x01cc806c]         ; 004bf854 | DAT_01cc806c
    FXCH ST3                            ; 004bf85a
    FSTP float ptr [0x01cc8070]         ; 004bf85c | DAT_01cc8070
    FXCH                                ; 004bf862
    FSTP float ptr [0x01cc8074]         ; 004bf864 | DAT_01cc8074
    FSTP float ptr [0x01cc8078]         ; 004bf86a | DAT_01cc8078
    FSTP float ptr [0x01cc807c]         ; 004bf870 | DAT_01cc807c
    FSTP float ptr [0x01cc8080]         ; 004bf876 | DAT_01cc8080
    FSTP float ptr [0x01cc8054]         ; 004bf87c | DAT_01cc8054
    RET                                 ; 004bf882

