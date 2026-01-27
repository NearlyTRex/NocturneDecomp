; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_pendulum.cpp_CPendulum_getActorType_FUN_00549380(CPendulum * this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CPendulumClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x30d5018                   ; 00549380 | g_CPendulumClassInfo
        ;   Label: core_pendulum.cpp_CPendulum_getActorType_FUN_00549380
    RET                                 ; 00549385

