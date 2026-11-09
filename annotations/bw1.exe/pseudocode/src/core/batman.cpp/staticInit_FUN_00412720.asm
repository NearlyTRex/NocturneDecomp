; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batman_cpp_staticInit_FUN_00412720(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00412720
        ;   Label: core_batman.cpp_staticInit_FUN_00412720
    PUSH 0x3                            ; 00412725
    PUSH 0x610990                       ; 00412727
    PUSH 0x412750                       ; 0041272c
    PUSH 0x5d38d1                       ; 00412731
    PUSH 0x7c37e8                       ; 00412736
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0041273b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00412740
    RET                                 ; 00412743

