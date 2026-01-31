; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_melee_cpp_CMelee_getAllowedMeleeAttackTypes_FUN_0050eae0(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050eae0
        ;   Label: core_melee.cpp_CMelee_getAllowedMeleeAttackTypes_FUN_0050eae0
    MOV EAX,dword ptr [EAX + 0x578]     ; 0050eae4
    RET                                 ; 0050eaea

