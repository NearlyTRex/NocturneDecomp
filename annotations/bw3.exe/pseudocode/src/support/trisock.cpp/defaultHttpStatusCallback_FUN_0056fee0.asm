; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_defaultHttpStatusCallback_FUN_0056fee0(int is_error)
;
; Parameters:
; int              Stack[0x4]:4   is_error
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x0       ; 0056fee0
        ;   Label: support_trisock.cpp_defaultHttpStatusCallback_FUN_0056fee0
    SETZ AL                             ; 0056fee5
    AND EAX,0xff                        ; 0056fee8
    RET                                 ; 0056feed

