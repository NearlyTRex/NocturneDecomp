; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_ammo_cpp_CAmmo_getCollisionType_FUN_0040e060(CAmmo *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e060
        ;   Label: core_ammo.cpp_CAmmo_getCollisionType_FUN_0040e060
    CMP dword ptr [EAX],0x4             ; 0040e064
    SETZ AL                             ; 0040e067
    AND EAX,0xff                        ; 0040e06a
    RET                                 ; 0040e06f

