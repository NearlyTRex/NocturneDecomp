; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_melee_cpp_CMelee_getAllowedMeleeAttackTypes_FUN_004eabc0(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eabc0
        ;   Label: core_melee.cpp_CMelee_getAllowedMeleeAttackTypes_FUN_004eabc0
    MOV EAX,dword ptr [EAX + 0x6d4]     ; 004eabc4
    RET                                 ; 004eabca

