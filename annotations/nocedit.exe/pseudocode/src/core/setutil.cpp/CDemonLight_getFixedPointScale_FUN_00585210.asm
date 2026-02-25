; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setutil_cpp_CDemonLight_getFixedPointScale_FUN_00585210(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00585210
        ;   Label: core_setutil.cpp_CDemonLight_getFixedPointScale_FUN_00585210
    MOV EAX,dword ptr [EAX]             ; 00585214
    RET                                 ; 00585216

