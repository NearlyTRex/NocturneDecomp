; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_colonel_cpp_CColonel_isWeaponDrawn_FUN_004405d0(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004405d0
        ;   Label: core_colonel.cpp_CColonel_isWeaponDrawn_FUN_004405d0
    MOV EAX,dword ptr [EAX + 0x1fbd4]   ; 004405d4
    RET                                 ; 004405da

