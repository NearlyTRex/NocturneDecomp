; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_bodypart_cpp_FUN_0041803d(float *param_1)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_00578e76
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 0041803d
        ;   Label: core_bodypart.cpp_FUN_0041803d
    AND AL,byte ptr [EAX]               ; 0041803e
    SUB ESP,0xc                         ; 00418040
    MOV ECX,dword ptr [ESP + 0x10]      ; 00418043
    MOV EDX,dword ptr [ESP + 0x14]      ; 00418047
    LEA EAX,[ECX + 0xc]                 ; 0041804b
    FLD float ptr [ECX]                 ; 0041804e
    FADD float ptr [EAX]                ; 00418050
    FSTP float ptr [ESP]                ; 00418052
    FLD float ptr [ECX + 0x4]           ; 00418055
    FADD float ptr [EAX + 0x4]          ; 00418058
    FLD float ptr [ESP]                 ; 0041805b
    FXCH                                ; 0041805e
    FSTP float ptr [ESP + 0x4]          ; 00418060
    FLD float ptr [ECX + 0x8]           ; 00418064
    FADD float ptr [EAX + 0x8]          ; 00418067
    FXCH                                ; 0041806a
    FLD float ptr [0x00578e76]          ; 0041806c | DAT_00578e76
    FXCH                                ; 00418072
    FMUL ST1                            ; 00418074
    FXCH ST2                            ; 00418076
    FSTP float ptr [ESP + 0x8]          ; 00418078
    FXCH                                ; 0041807c
    FSTP float ptr [EDX]                ; 0041807e
    FLD float ptr [ESP + 0x4]           ; 00418080
    FMUL ST1                            ; 00418084
    FSTP float ptr [EDX + 0x4]          ; 00418086
    FMUL float ptr [ESP + 0x8]          ; 00418089
    MOV EAX,EDX                         ; 0041808d
    FSTP float ptr [EDX + 0x8]          ; 0041808f
    ADD ESP,0xc                         ; 00418092
    RET                                 ; 00418095

