; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_moloch.cpp_CMoloch_getActorType_FUN_00528b20(CMoloch * this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CMolochClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2f37f34                   ; 00528b20 | g_CMolochClassInfo
        ;   Label: core_moloch.cpp_CMoloch_getActorType_FUN_00528b20
    RET                                 ; 00528b25

