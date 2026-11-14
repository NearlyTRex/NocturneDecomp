; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040e930(CAmmoBox *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e930
        ;   Label: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_0040e930
    CMP dword ptr [EAX + 0x480],0x0     ; 0040e934
    SETNZ AL                            ; 0040e93b
    AND EAX,0xff                        ; 0040e93e
    RET                                 ; 0040e943

