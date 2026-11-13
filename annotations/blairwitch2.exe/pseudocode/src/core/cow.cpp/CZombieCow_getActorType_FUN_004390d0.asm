; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_cow_cpp_CZombieCow_getActorType_FUN_004390d0(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CZombieCowClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c25fc                    ; 004390d0 | g_CZombieCowClassInfo
        ;   Label: core_cow.cpp_CZombieCow_getActorType_FUN_004390d0
    RET                                 ; 004390d5

