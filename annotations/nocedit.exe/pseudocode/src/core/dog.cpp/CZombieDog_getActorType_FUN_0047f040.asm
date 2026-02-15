; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_dog_cpp_CZombieDog_getActorType_FUN_0047f040(CZombieDog *this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CZombieDogClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2c14c9c                   ; 0047f040 | g_CZombieDogClassInfo
        ;   Label: core_dog.cpp_CZombieDog_getActorType_FUN_0047f040
    RET                                 ; 0047f045

