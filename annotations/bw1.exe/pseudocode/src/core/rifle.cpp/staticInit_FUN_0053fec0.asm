; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_rifle_cpp_staticInit_FUN_0053fec0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 0053fec0
        ;   Label: core_rifle.cpp_staticInit_FUN_0053fec0
    PUSH 0x1                            ; 0053fec5
    PUSH 0x622a88                       ; 0053fec7
    PUSH 0x53fef0                       ; 0053fecc
    PUSH 0x5edbff                       ; 0053fed1
    PUSH 0x1e7dfd8                      ; 0053fed6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0053fedb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0053fee0
    RET                                 ; 0053fee3

