; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_melee_cpp_CMelee_getAllowedMeleeAttackTypes_FUN_004cef70(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cef70
        ;   Label: core_melee.cpp_CMelee_getAllowedMeleeAttackTypes_FUN_004cef70
    MOV EAX,dword ptr [EAX + 0x570]     ; 004cef74
    RET                                 ; 004cef7a

