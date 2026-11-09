; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00465650(undefined *param_1)
;
;
; Referenced Globals:
;   void* PTR_engine_dosio.cpp_getRelativeFilePath_FUN_00465600_005f2ad0 = 00465600
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00465650
        ;   Label: engine_dosio.cpp_FUN_00465650
    MOV [0x005f2ad0],EAX                ; 00465654 | PTR_engine_dosio.cpp_getRelativeFilePath_FUN_00465600_005f2ad0
    RET                                 ; 00465659

