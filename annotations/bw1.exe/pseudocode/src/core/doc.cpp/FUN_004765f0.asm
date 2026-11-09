; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_004765f0(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004765f0
        ;   Label: core_doc.cpp_FUN_004765f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004765f3
    FLD1                                ; 004765f7
    MOV EDX,dword ptr [ESP + 0xc]       ; 004765f9
    FLD float ptr [EAX]                 ; 004765fd
    FXCH                                ; 004765ff
    FDIV float ptr [EDX]                ; 00476601
    FXCH                                ; 00476603
    FMUL ST1                            ; 00476605
    FLD float ptr [EAX + 0x4]           ; 00476607
    FMUL ST2                            ; 0047660a
    FLD float ptr [EAX + 0x8]           ; 0047660c
    FMULP ST3                           ; 0047660f
    FXCH                                ; 00476611
    FSTP float ptr [EAX]                ; 00476613
    FSTP float ptr [EAX + 0x4]          ; 00476615
    FSTP float ptr [EAX + 0x8]          ; 00476618
    ADD ESP,0x4                         ; 0047661b
    RET                                 ; 0047661e

