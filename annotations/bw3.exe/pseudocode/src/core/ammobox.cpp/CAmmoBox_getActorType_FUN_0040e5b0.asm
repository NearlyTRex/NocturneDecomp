; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_ammobox_cpp_CAmmoBox_getActorType_FUN_0040e5b0(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAmmoBoxClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dfddc                    ; 0040e5b0 | g_CAmmoBoxClassInfo
        ;   Label: core_ammobox.cpp_CAmmoBox_getActorType_FUN_0040e5b0
    RET                                 ; 0040e5b5

