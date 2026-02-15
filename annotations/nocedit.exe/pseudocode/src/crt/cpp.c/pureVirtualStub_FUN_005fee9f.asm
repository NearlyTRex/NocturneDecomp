; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_cpp_c_pureVirtualStub_FUN_005fee9f(void)
;
;
; Referenced Globals:
;   TerminatedCString s_undefined_constructor_or_00658af4
;
; Called Functions:
;   crt_cpp.c_reportPureVirtualError_FUN_00605b23
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005fee9f
        ;   Label: crt_cpp.c_pureVirtualStub_FUN_005fee9f
    PUSH 0x658af4                       ; 005feea1 | = "undefined constructor or destructor c..."
    CALL crt_cpp.c_reportPureVirtualError_FUN_00605b23 ; 005feea6
        ;   XREF to: 00605b23 (UNCONDITIONAL_CALL)  ; void crt_cpp.c_reportPureVirtualError_FUN_00605b23(char * error_message, int exit_code)
    ADD ESP,0x8                         ; 005feeab
    RET                                 ; 005feeae

