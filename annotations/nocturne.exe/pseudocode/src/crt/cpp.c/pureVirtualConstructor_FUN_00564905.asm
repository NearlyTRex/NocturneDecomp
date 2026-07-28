; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_cpp_c_pureVirtualConstructor_FUN_00564905(void)
;
;
; Referenced Globals:
;   TerminatedCString s_undefined_constructor_or_005989b8
;
; Called Functions:
;   crt_cpp.c_reportPureVirtualError_FUN_0056af76
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00564905
        ;   Label: crt_cpp.c_pureVirtualConstructor_FUN_00564905
    PUSH 0x5989b8                       ; 00564907 | = "undefined constructor or destructor c..."
    CALL crt_cpp.c_reportPureVirtualError_FUN_0056af76 ; 0056490c
        ;   XREF to: 0056af76 (UNCONDITIONAL_CALL)  ; void crt_cpp.c_reportPureVirtualError_FUN_0056af76(char * error_message, int exit_code)
    ADD ESP,0x8                         ; 00564911
    RET                                 ; 00564914

