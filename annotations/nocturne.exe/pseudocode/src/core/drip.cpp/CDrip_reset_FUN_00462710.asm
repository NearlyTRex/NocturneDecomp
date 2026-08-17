; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_reset_FUN_00462710(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0 at 0054e119
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00462710
        ;   Label: core_drip.cpp_CDrip_reset_FUN_00462710
    MOV dword ptr [EAX + 0x2d4],0x0     ; 00462714
    RET                                 ; 0046271e

