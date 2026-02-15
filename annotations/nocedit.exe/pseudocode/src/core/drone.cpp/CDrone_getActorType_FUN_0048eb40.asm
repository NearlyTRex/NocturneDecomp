; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_drone_cpp_CDrone_getActorType_FUN_0048eb40(CDrone *this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CDroneClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2c9b2ec                   ; 0048eb40 | g_CDroneClassInfo
        ;   Label: core_drone.cpp_CDrone_getActorType_FUN_0048eb40
    RET                                 ; 0048eb45

