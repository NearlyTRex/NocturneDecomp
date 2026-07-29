; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_haystack_cpp_CHaystack_isWeaponDrawn_FUN_004b4120(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b4120
        ;   Label: core_haystack.cpp_CHaystack_isWeaponDrawn_FUN_004b4120
    MOV EAX,dword ptr [EAX + 0x1fa3c]   ; 004b4124
    RET                                 ; 004b412a

