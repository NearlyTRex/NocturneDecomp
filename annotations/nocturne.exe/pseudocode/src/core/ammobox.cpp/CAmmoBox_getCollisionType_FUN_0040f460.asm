; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040f460(CAmmoBox *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040f460
        ;   Label: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_0040f460
    CMP dword ptr [EAX + 0x31c],0x0     ; 0040f464
    SETNZ AL                            ; 0040f46b
    AND EAX,0xff                        ; 0040f46e
    RET                                 ; 0040f473

