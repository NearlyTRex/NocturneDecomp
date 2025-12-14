; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_zombie.cpp_CZombie_getActorType_FUN_005f8fd0(CZombie * this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CZombieClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f9ad20                   ; 005f8fd0 | g_CZombieClassInfo
        ;   Label: core_zombie.cpp_CZombie_getActorType_FUN_005f8fd0
    RET                                 ; 005f8fd5

