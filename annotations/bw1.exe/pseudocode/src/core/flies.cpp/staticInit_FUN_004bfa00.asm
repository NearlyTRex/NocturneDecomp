; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_staticInit_FUN_004bfa00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004bfa00
        ;   Label: core_flies.cpp_staticInit_FUN_004bfa00
    PUSH 0x3                            ; 004bfa05
    PUSH 0x61d824                       ; 004bfa07
    PUSH 0x4bfa30                       ; 004bfa0c
    PUSH 0x5e071a                       ; 004bfa11
    PUSH 0x1cc8088                      ; 004bfa16
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004bfa1b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004bfa20
    RET                                 ; 004bfa23

