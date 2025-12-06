; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_pendulum.cpp_staticInit_FUN_00549320(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CPendulum_0063ec51
;   int g_CPendulumClassVersion = 0x8
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CPendulumClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00549320 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_pendulum.cpp_staticInit_FUN_00549320
    PUSH 0x8                            ; 00549325
    PUSH 0x680c84                       ; 00549327 | int g_CPendulumClassVersion
    PUSH 0x549350                       ; 0054932c
    PUSH 0x63ec51                       ; 00549331 | = "CPendulum" | s_CPendulum_0063ec51 = CPendulum
    PUSH 0x30d5018                      ; 00549336 | CDemonActorType g_CPendulumClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0054933b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00549340
    RET                                 ; 00549343

