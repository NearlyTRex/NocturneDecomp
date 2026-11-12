; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_005271d0(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005271d0
        ;   Label: core_prye.cpp_FUN_005271d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005271d3
    FLD1                                ; 005271d7
    MOV EDX,dword ptr [ESP + 0xc]       ; 005271d9
    FLD float ptr [EAX]                 ; 005271dd
    FXCH                                ; 005271df
    FDIV float ptr [EDX]                ; 005271e1
    FXCH                                ; 005271e3
    FMUL ST1                            ; 005271e5
    FLD float ptr [EAX + 0x4]           ; 005271e7
    FMUL ST2                            ; 005271ea
    FLD float ptr [EAX + 0x8]           ; 005271ec
    FMULP ST3                           ; 005271ef
    FXCH                                ; 005271f1
    FSTP float ptr [EAX]                ; 005271f3
    FSTP float ptr [EAX + 0x4]          ; 005271f5
    FSTP float ptr [EAX + 0x8]          ; 005271f8
    ADD ESP,0x4                         ; 005271fb
    RET                                 ; 005271fe

