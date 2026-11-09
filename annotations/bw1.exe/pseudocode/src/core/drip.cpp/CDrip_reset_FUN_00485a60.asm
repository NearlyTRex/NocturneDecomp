; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_reset_FUN_00485a60(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_FUN_005a7160 at 005a71c9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00485a60
        ;   Label: core_drip.cpp_CDrip_reset_FUN_00485a60
    MOV dword ptr [EAX + 0x2dc],0x0     ; 00485a64
    RET                                 ; 00485a6e

