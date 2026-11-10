; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_colonel_cpp_CColonel_isWeaponDrawn_FUN_004452e0(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004452e0
        ;   Label: core_colonel.cpp_CColonel_isWeaponDrawn_FUN_004452e0
    MOV EAX,dword ptr [EAX + 0x1ffac]   ; 004452e4
    RET                                 ; 004452ea

