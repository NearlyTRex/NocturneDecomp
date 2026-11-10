; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_0057b430(CWeapon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b430
        ;   Label: core_weapon.cpp_CWeapon_getCollisionType_FUN_0057b430
    CMP dword ptr [EAX],0x4             ; 0057b434
    SETZ AL                             ; 0057b437
    AND EAX,0xff                        ; 0057b43a
    RET                                 ; 0057b43f

