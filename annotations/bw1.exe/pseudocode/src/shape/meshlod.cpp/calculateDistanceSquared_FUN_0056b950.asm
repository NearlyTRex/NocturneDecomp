; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl shape_meshlod_cpp_calculateDistanceSquared_FUN_0056b950(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0056b950
        ;   Label: shape_meshlod.cpp_calculateDistanceSquared_FUN_0056b950
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056b953
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056b957
    FLD float ptr [EDX]                 ; 0056b95b
    FSUB float ptr [EAX]                ; 0056b95d
    FMUL ST0                            ; 0056b95f
    FLD float ptr [EDX + 0x4]           ; 0056b961
    FSUB float ptr [EAX + 0x4]          ; 0056b964
    FMUL ST0                            ; 0056b967
    FLD float ptr [EDX + 0x8]           ; 0056b969
    FXCH                                ; 0056b96c
    FADDP ST2,ST0                       ; 0056b96e
    FSUB float ptr [EAX + 0x8]          ; 0056b970
    FMUL ST0                            ; 0056b973
    FADDP                               ; 0056b975
    FSTP float ptr [ESP + 0x4]          ; 0056b977
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b97b
    ADD ESP,0x10                        ; 0056b97f
    RET                                 ; 0056b982

