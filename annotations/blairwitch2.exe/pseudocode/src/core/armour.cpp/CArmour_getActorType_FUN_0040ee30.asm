; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_armour_cpp_CArmour_getActorType_FUN_0040ee30(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CArmourClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc420                    ; 0040ee30 | g_CArmourClassInfo
        ;   Label: core_armour.cpp_CArmour_getActorType_FUN_0040ee30
    RET                                 ; 0040ee35

