; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lightgun_cpp_staticInit_FUN_004ffe50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 004ffe50
        ;   Label: core_lightgun.cpp_staticInit_FUN_004ffe50
    PUSH 0x1                            ; 004ffe55
    PUSH 0x61f320                       ; 004ffe57
    PUSH 0x4ffe80                       ; 004ffe5c
    PUSH 0x5e6dfa                       ; 004ffe61
    PUSH 0x1d1c244                      ; 004ffe66
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004ffe6b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ffe70
    RET                                 ; 004ffe73

