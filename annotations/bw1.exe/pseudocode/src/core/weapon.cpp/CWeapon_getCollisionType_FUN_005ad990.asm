; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_005ad990(CWeapon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005ad990
        ;   Label: core_weapon.cpp_CWeapon_getCollisionType_FUN_005ad990
    CMP dword ptr [EAX],0x4             ; 005ad994
    SETZ AL                             ; 005ad997
    AND EAX,0xff                        ; 005ad99a
    RET                                 ; 005ad99f

