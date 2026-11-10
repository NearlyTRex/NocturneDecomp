; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_haystack_cpp_CHaystack_isWeaponDrawn_FUN_004cd9a0(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cd9a0
        ;   Label: core_haystack.cpp_CHaystack_isWeaponDrawn_FUN_004cd9a0
    MOV EAX,dword ptr [EAX + 0x25640]   ; 004cd9a4
    RET                                 ; 004cd9aa

