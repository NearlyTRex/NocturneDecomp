; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_armour_cpp_CArmour_getActorType_FUN_0040e9d0(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CArmourClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c3420                    ; 0040e9d0 | g_CArmourClassInfo
        ;   Label: core_armour.cpp_CArmour_getActorType_FUN_0040e9d0
    RET                                 ; 0040e9d5

