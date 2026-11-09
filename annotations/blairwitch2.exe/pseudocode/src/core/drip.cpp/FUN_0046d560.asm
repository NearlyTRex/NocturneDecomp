; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_FUN_0046d560(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_FUN_00583520 at 00583589
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d560
        ;   Label: core_drip.cpp_FUN_0046d560
    MOV dword ptr [EAX + 0x438],0x0     ; 0046d564
    RET                                 ; 0046d56e

