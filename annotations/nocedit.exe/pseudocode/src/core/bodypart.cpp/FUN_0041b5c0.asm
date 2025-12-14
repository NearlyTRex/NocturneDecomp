; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bodypart.cpp_FUN_0041b5c0()
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   float FLOAT_00615b78 = 0.5
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0041b5c0
        ;   Label: core_bodypart.cpp_FUN_0041b5c0
    MOV ECX,dword ptr [ESP + 0x10]      ; 0041b5c3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041b5c7
    LEA EAX,[ECX + 0xc]                 ; 0041b5cb
    FLD float ptr [ECX]                 ; 0041b5ce
    FADD float ptr [EAX]                ; 0041b5d0
    FSTP float ptr [ESP]                ; 0041b5d2
    FLD float ptr [ECX + 0x4]           ; 0041b5d5
    FADD float ptr [EAX + 0x4]          ; 0041b5d8
    FLD float ptr [ESP]                 ; 0041b5db
    FXCH                                ; 0041b5de
    FSTP float ptr [ESP + 0x4]          ; 0041b5e0
    FLD float ptr [ECX + 0x8]           ; 0041b5e4
    FADD float ptr [EAX + 0x8]          ; 0041b5e7
    FXCH                                ; 0041b5ea
    FLD float ptr [0x00615b78]          ; 0041b5ec | FLOAT_00615b78
    FXCH                                ; 0041b5f2
    FMUL ST1                            ; 0041b5f4
    FXCH ST2                            ; 0041b5f6
    FSTP float ptr [ESP + 0x8]          ; 0041b5f8
    FXCH                                ; 0041b5fc
    FSTP float ptr [EDX]                ; 0041b5fe
    FLD float ptr [ESP + 0x4]           ; 0041b600
    FMUL ST1                            ; 0041b604
    FSTP float ptr [EDX + 0x4]          ; 0041b606
    FMUL float ptr [ESP + 0x8]          ; 0041b609
    MOV EAX,EDX                         ; 0041b60d
    FSTP float ptr [EDX + 0x8]          ; 0041b60f
    ADD ESP,0xc                         ; 0041b612
    RET                                 ; 0041b615

