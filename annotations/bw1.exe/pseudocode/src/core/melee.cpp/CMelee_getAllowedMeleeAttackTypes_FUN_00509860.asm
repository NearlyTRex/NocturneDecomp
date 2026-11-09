; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_melee_cpp_CMelee_getAllowedMeleeAttackTypes_FUN_00509860(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509860
        ;   Label: core_melee.cpp_CMelee_getAllowedMeleeAttackTypes_FUN_00509860
    MOV EAX,dword ptr [EAX + 0x578]     ; 00509864
    RET                                 ; 0050986a

