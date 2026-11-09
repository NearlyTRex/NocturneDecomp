; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tentacle_cpp_staticInit_FUN_00572570(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00572570
        ;   Label: core_tentacle.cpp_staticInit_FUN_00572570
    PUSH 0x2                            ; 00572575
    PUSH 0x61e3a0                       ; 00572577
    PUSH 0x5725a0                       ; 0057257c
    PUSH 0x5ec45a                       ; 00572581
    PUSH 0x264c0c0                      ; 00572586
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0057258b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00572590
    RET                                 ; 00572593

