; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_setRenderAlpha_FUN_0057b030(CWeapon *this_ptr,int alpha)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057b030
        ;   Label: core_weapon.cpp_CWeapon_setRenderAlpha_FUN_0057b030
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b034
    MOV dword ptr [EDX + 0x588],EAX     ; 0057b038
    RET                                 ; 0057b03e

