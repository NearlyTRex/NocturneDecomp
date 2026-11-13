; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_ammobox_cpp_CAmmoBox_getActorType_FUN_0040e500(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAmmoBoxClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc3a8                    ; 0040e500 | g_CAmmoBoxClassInfo
        ;   Label: core_ammobox.cpp_CAmmoBox_getActorType_FUN_0040e500
    RET                                 ; 0040e505

