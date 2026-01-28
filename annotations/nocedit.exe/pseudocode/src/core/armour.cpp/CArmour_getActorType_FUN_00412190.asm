; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_armour_cpp_CArmour_getActorType_FUN_00412190(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CArmourClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822420                    ; 00412190 | g_CArmourClassInfo
        ;   Label: core_armour.cpp_CArmour_getActorType_FUN_00412190
    RET                                 ; 00412195

