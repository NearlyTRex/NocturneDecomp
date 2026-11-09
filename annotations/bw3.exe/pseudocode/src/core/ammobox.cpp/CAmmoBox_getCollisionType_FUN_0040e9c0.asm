; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040e9c0(CAmmoBox *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e9c0
        ;   Label: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_0040e9c0
    CMP dword ptr [EAX + 0x324],0x0     ; 0040e9c4
    SETNZ AL                            ; 0040e9cb
    AND EAX,0xff                        ; 0040e9ce
    RET                                 ; 0040e9d3

