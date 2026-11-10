; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_haystack_cpp_CHaystack_isWeaponDrawn_FUN_004ea260(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ea260
        ;   Label: core_haystack.cpp_CHaystack_isWeaponDrawn_FUN_004ea260
    MOV EAX,dword ptr [EAX + 0x1ffac]   ; 004ea264
    RET                                 ; 004ea26a

