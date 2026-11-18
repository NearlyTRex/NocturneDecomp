; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_defaultHttpStatusCallback_FUN_00579880(int is_error)
;
; Parameters:
; int              Stack[0x4]:4   is_error
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x0       ; 00579880
        ;   Label: support_trisock.cpp_defaultHttpStatusCallback_FUN_00579880
    SETZ AL                             ; 00579885
    AND EAX,0xff                        ; 00579888
    RET                                 ; 0057988d

