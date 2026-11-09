; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_cow_cpp_CZombieCow_getActorType_FUN_00444f50(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CZombieCowClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7f8f54                    ; 00444f50 | g_CZombieCowClassInfo
        ;   Label: core_cow.cpp_CZombieCow_getActorType_FUN_00444f50
    RET                                 ; 00444f55

