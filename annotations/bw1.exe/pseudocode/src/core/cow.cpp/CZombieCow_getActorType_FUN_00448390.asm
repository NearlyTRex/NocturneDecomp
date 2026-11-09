; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_cow_cpp_CZombieCow_getActorType_FUN_00448390(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CZombieCowClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dc664                    ; 00448390 | g_CZombieCowClassInfo
        ;   Label: core_cow.cpp_CZombieCow_getActorType_FUN_00448390
    RET                                 ; 00448395

