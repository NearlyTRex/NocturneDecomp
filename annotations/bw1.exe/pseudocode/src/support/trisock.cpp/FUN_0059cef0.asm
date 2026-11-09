; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_trisock_cpp_FUN_0059cef0(int param_1)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x0       ; 0059cef0
        ;   Label: support_trisock.cpp_FUN_0059cef0
    SETZ AL                             ; 0059cef5
    AND EAX,0xff                        ; 0059cef8
    RET                                 ; 0059cefd

