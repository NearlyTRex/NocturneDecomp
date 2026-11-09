; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baron_cpp_CBaronWeapon_renderOpaque_FUN_00410980(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410980
        ;   Label: core_baron.cpp_CBaronWeapon_renderOpaque_FUN_00410980
    PUSH EDX                            ; 00410984
    CALL core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90 ; 00410985
        ;   XREF to: 00589b90 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0041098a
    RET                                 ; 0041098d

