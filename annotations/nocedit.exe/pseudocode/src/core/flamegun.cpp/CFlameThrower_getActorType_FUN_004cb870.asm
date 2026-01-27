; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_flamegun.cpp_CFlameThrower_getActorType_FUN_004cb870(CFlameThrower * this_ptr)
;
; Parameters:
; CFlameThrower *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CFlameThrowerClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d7a73c                   ; 004cb870 | g_CFlameThrowerClassInfo
        ;   Label: core_flamegun.cpp_CFlameThrower_getActorType_FUN_004cb870
    RET                                 ; 004cb875

