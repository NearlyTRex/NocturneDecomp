; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005907e0(float param_1)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_0059064e at 00590674
;
; Referenced Globals:
;   undefined4 DAT_02664fa0
;   undefined4 DAT_02664fa4
;
; *****************************************************************************

section .text

    FLD float ptr [0x02664fa0]          ; 005907e0 | DAT_02664fa0
        ;   Label: wincore_winrun.cpp_FUN_005907e0
    FLD float ptr [0x02664fa4]          ; 005907e6 | DAT_02664fa4
    MOV EAX,0x26656c4                   ; 005907ec
    FXCH                                ; 005907f1
    FLD float ptr [ESP + 0x4]           ; 005907f3
    FXCH                                ; 005907f7
    FADD ST0,ST1                        ; 005907f9
    FXCH ST2                            ; 005907fb
    FADDP                               ; 005907fd
    LEA EDX,[EAX + 0x2b0]               ; 005907ff
    FSTP float ptr [0x02664fa4]         ; 00590805 | DAT_02664fa4
    FSTP float ptr [0x02664fa0]         ; 0059080b | DAT_02664fa0
    MOV ECX,dword ptr [EAX]             ; 00590811
        ;   Label: LAB_00590811
    TEST ECX,ECX                        ; 00590813
    JNZ 0x00590821                      ; 00590815
        ;   XREF to: 00590821 (CONDITIONAL_JUMP)  ; LAB_00590821
    ADD EAX,0xac                        ; 00590817
    CMP EAX,EDX                         ; 0059081c
    JNZ 0x00590811                      ; 0059081e
        ;   XREF to: 00590811 (CONDITIONAL_JUMP)  ; LAB_00590811
    RET                                 ; 00590820
    CMP ECX,0x4                         ; 00590821
        ;   Label: LAB_00590821
    JNZ 0x0059083c                      ; 00590824
        ;   XREF to: 0059083c (CONDITIONAL_JUMP)  ; LAB_0059083c
    MOV ECX,dword ptr [0x02664fa0]      ; 00590826 | DAT_02664fa0
    MOV dword ptr [EAX + 0xa8],ECX      ; 0059082c
    ADD EAX,0xac                        ; 00590832
    CMP EAX,EDX                         ; 00590837
    JNZ 0x00590811                      ; 00590839
        ;   XREF to: 00590811 (CONDITIONAL_JUMP)  ; LAB_00590811
    RET                                 ; 0059083b
    FLD float ptr [EAX + 0xa8]          ; 0059083c
        ;   Label: LAB_0059083c
    FADD float ptr [ESP + 0x4]          ; 00590842
    FSTP float ptr [EAX + 0xa8]         ; 00590846
    ADD EAX,0xac                        ; 0059084c
    CMP EAX,EDX                         ; 00590851
    JNZ 0x00590811                      ; 00590853
        ;   XREF to: 00590811 (CONDITIONAL_JUMP)  ; LAB_00590811
    RET                                 ; 00590855

