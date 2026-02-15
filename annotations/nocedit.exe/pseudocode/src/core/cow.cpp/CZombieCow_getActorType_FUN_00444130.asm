; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_cow_cpp_CZombieCow_getActorType_FUN_00444130(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CZombieCowClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x83c19c                    ; 00444130 | g_CZombieCowClassInfo
        ;   Label: core_cow.cpp_CZombieCow_getActorType_FUN_00444130
    RET                                 ; 00444135

