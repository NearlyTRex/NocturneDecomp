; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_005ee330(CWeapon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[1]:
;   core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 at 005ee6ec
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 005ee330
        ;   Label: core_weapon.cpp_CWeapon_getCollisionType_FUN_005ee330
    RET                                 ; 005ee332

