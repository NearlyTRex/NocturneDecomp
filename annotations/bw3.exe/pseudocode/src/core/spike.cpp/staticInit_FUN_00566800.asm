; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_staticInit_FUN_00566800(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00566800
        ;   Label: core_spike.cpp_staticInit_FUN_00566800
    PUSH 0x1                            ; 00566805
    PUSH 0x606844                       ; 00566807
    PUSH 0x566830                       ; 0056680c
    PUSH 0x5d5b02                       ; 00566811
    PUSH 0x2cf6134                      ; 00566816
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0056681b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00566820
    RET                                 ; 00566823

