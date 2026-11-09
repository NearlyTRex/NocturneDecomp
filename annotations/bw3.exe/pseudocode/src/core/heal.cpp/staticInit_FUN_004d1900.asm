; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_heal_cpp_staticInit_FUN_004d1900(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004d1900
        ;   Label: core_heal.cpp_staticInit_FUN_004d1900
    PUSH 0x1                            ; 004d1905
    PUSH 0x5fff70                       ; 004d1907
    PUSH 0x4d1930                       ; 004d190c
    PUSH 0x5c4a0f                       ; 004d1911
    PUSH 0x1d5b940                      ; 004d1916
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004d191b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d1920
    RET                                 ; 004d1923

