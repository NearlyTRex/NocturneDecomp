; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_trisock_cpp_FUN_0056fee0(int param_1)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x0       ; 0056fee0
        ;   Label: support_trisock.cpp_FUN_0056fee0
    SETZ AL                             ; 0056fee5
    AND EAX,0xff                        ; 0056fee8
    RET                                 ; 0056feed

