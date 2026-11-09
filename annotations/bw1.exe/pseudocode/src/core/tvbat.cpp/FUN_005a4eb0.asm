; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_FUN_005a4eb0(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_FUN_005a70f0 at 005a7143
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a4eb0
        ;   Label: core_tvbat.cpp_FUN_005a4eb0
    MOV dword ptr [EAX + 0xc414],0x40400000 ; 005a4eb4
    RET                                 ; 005a4ebe

