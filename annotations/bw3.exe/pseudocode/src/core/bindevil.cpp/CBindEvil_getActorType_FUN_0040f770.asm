; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_bindevil_cpp_CBindEvil_getActorType_FUN_0040f770(CBindEvil *this_ptr)
;
; Parameters:
; CBindEvil *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBindEvilClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dfecc                    ; 0040f770 | g_CBindEvilClassInfo
        ;   Label: core_bindevil.cpp_CBindEvil_getActorType_FUN_0040f770
    RET                                 ; 0040f775

