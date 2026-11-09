; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00460900(undefined *param_1)
;
;
; Referenced Globals:
;   void* PTR_engine_dosio.cpp_getRelativeFilePath_FUN_004608b0_0060b228 = 004608b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00460900
        ;   Label: engine_dosio.cpp_FUN_00460900
    MOV [0x0060b228],EAX                ; 00460904 | PTR_engine_dosio.cpp_getRelativeFilePath_FUN_004608b0_0060b228
    RET                                 ; 00460909

