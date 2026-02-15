; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_superopt_cpp_FUN_005d86d0(double *param_1,double *param_2)
;
; Parameters:
; double *         Stack[0x4]:4   param_1
; double *         Stack[0x8]:4   param_2
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
;
; *****************************************************************************

section .text

    SUB ESP,0x20                        ; 005d86d0
        ;   Label: shape_superopt.cpp_FUN_005d86d0
    MOV EDX,dword ptr [ESP + 0x24]      ; 005d86d3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005d86d7
    FLD double ptr [EAX]                ; 005d86db
    FSUB double ptr [EDX]               ; 005d86dd
    FMUL ST0                            ; 005d86df
    FLD double ptr [EAX + 0x8]          ; 005d86e1
    FSUB double ptr [EDX + 0x8]         ; 005d86e4
    FMUL ST0                            ; 005d86e7
    FLD double ptr [EAX + 0x10]         ; 005d86e9
    FXCH                                ; 005d86ec
    FADDP ST2,ST0                       ; 005d86ee
    FSUB double ptr [EDX + 0x10]        ; 005d86f0
    FMUL ST0                            ; 005d86f3
    FADDP                               ; 005d86f5
    FSQRT                               ; 005d86f7
    FSTP double ptr [ESP]               ; 005d86f9
    MOV EAX,dword ptr [ESP]             ; 005d86fc
    MOV EDX,dword ptr [ESP + 0x4]       ; 005d86ff
    ADD ESP,0x20                        ; 005d8703
    RET                                 ; 005d8706

