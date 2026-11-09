; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gun_cpp_staticInit_FUN_004e8570(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 004e8570
        ;   Label: core_gun.cpp_staticInit_FUN_004e8570
    PUSH 0x1                            ; 004e8575
    PUSH 0x61eee0                       ; 004e8577
    PUSH 0x4e85a0                       ; 004e857c
    PUSH 0x5e43a3                       ; 004e8581
    PUSH 0x1d0699c                      ; 004e8586
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004e858b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e8590
    RET                                 ; 004e8593

