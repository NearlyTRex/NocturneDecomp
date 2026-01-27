; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_shovel.cpp_CShovel_getActorType_FUN_00588b90(CShovel * this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CShovelClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x36597ac                   ; 00588b90 | g_CShovelClassInfo
        ;   Label: core_shovel.cpp_CShovel_getActorType_FUN_00588b90
    RET                                 ; 00588b95

