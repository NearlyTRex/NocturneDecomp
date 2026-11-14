; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_00589e40(CWeapon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[2]:
;   core_weapon.cpp_CWeapon_fire_FUN_0058a290 at 0058a29c
;   core_weapon.cpp_FUN_0058a5f0 at 0058a601
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00589e40
        ;   Label: core_weapon.cpp_CWeapon_getCollisionType_FUN_00589e40
    RET                                 ; 00589e42

