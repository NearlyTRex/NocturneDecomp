; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00478e10(undefined *param_1)
;
;
; Referenced Globals:
;   void* PTR_engine_dosio.cpp_getRelativeFilePath_FUN_00478dc0_00612508 = 00478dc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00478e10
        ;   Label: engine_dosio.cpp_FUN_00478e10
    MOV [0x00612508],EAX                ; 00478e14 | PTR_engine_dosio.cpp_getRelativeFilePath_FUN_00478dc0_00612508
    RET                                 ; 00478e19

