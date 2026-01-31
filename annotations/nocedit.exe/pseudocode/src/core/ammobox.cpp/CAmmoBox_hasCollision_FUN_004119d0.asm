; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_ammobox_cpp_CAmmoBox_hasCollision_FUN_004119d0 (CAmmoBox *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004119d0
        ;   Label: core_ammobox.cpp_CAmmoBox_hasCollision_FUN_004119d0
    CMP dword ptr [EAX + 0x324],0x0     ; 004119d4
    SETNZ AL                            ; 004119db
    AND EAX,0xff                        ; 004119de
    RET                                 ; 004119e3

