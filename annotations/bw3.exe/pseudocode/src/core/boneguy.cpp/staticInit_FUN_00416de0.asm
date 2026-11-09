; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_staticInit_FUN_00416de0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00416de0
        ;   Label: core_boneguy.cpp_staticInit_FUN_00416de0
    PUSH 0x5                            ; 00416de5
    PUSH 0x5f0d74                       ; 00416de7
    PUSH 0x417050                       ; 00416dec
    PUSH 0x5b6cda                       ; 00416df1
    PUSH 0x7e164c                       ; 00416df6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00416dfb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00416e00
    PUSH 0x7e164c                       ; 00416e03
    PUSH 0x1                            ; 00416e08
    PUSH 0x5f0d78                       ; 00416e0a
    PUSH 0x4198b0                       ; 00416e0f
    PUSH 0x5b6ce3                       ; 00416e14
    PUSH 0x7e1688                       ; 00416e19
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00416e1e
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00416e23
    PUSH 0x7e164c                       ; 00416e26
    PUSH 0x1                            ; 00416e2b
    PUSH 0x5f0d7c                       ; 00416e2d
    PUSH 0x419950                       ; 00416e32
    PUSH 0x5b6cf4                       ; 00416e37
    PUSH 0x7e16c4                       ; 00416e3c
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00416e41
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00416e46
    PUSH 0x7e164c                       ; 00416e49
    PUSH 0x1                            ; 00416e4e
    PUSH 0x5f0d80                       ; 00416e50
    PUSH 0x4199f0                       ; 00416e55
    PUSH 0x5b6d05                       ; 00416e5a
    PUSH 0x7e1700                       ; 00416e5f
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00416e64
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00416e69
    PUSH 0x7e164c                       ; 00416e6c
    PUSH 0x1                            ; 00416e71
    PUSH 0x5f0d84                       ; 00416e73
    PUSH 0x419a90                       ; 00416e78
    PUSH 0x5b6d15                       ; 00416e7d
    PUSH 0x7e173c                       ; 00416e82
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00416e87
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00416e8c
    RET                                 ; 00416e8f

