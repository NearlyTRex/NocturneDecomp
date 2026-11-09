; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flamegun_cpp_staticInit_FUN_004b9560(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 004b9560
        ;   Label: core_flamegun.cpp_staticInit_FUN_004b9560
    PUSH 0x1                            ; 004b9565
    PUSH 0x61d19c                       ; 004b9567
    PUSH 0x4b9590                       ; 004b956c
    PUSH 0x5df7d2                       ; 004b9571
    PUSH 0x1cc4188                      ; 004b9576
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004b957b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b9580
    RET                                 ; 004b9583

