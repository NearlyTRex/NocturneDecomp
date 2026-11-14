; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_melee_cpp_CMelee_getAllowedMeleeAttackTypes_FUN_004e72a0(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e72a0
        ;   Label: core_melee.cpp_CMelee_getAllowedMeleeAttackTypes_FUN_004e72a0
    MOV EAX,dword ptr [EAX + 0x594]     ; 004e72a4
    RET                                 ; 004e72aa

