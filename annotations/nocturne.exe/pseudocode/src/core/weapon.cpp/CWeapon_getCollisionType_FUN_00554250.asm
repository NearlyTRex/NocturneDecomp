; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_00554250(CWeapon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[1]:
;   core_weapon.cpp_CWeapon_fire_FUN_00554600 at 0055460c
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00554250
        ;   Label: core_weapon.cpp_CWeapon_getCollisionType_FUN_00554250
    RET                                 ; 00554252

