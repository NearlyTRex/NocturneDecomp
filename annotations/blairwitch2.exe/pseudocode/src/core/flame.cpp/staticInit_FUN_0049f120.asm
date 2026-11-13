; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_staticInit_FUN_0049f120(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0049f120
        ;   Label: core_flame.cpp_staticInit_FUN_0049f120
    PUSH 0x7                            ; 0049f125
    PUSH 0x615ec0                       ; 0049f127
    PUSH 0x49f150                       ; 0049f12c
    PUSH 0x5d5845                       ; 0049f131
    PUSH 0x1cab684                      ; 0049f136
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0049f13b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0049f140
    RET                                 ; 0049f143

