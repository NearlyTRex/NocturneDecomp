; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004eda6e(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00606830
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004eda6e
        ;   Label: engine_mini3d.cpp_FUN_004eda6e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004eda70
    MOV [0x00606830],EAX                ; 004eda74 | DAT_00606830
    RET                                 ; 004eda79

