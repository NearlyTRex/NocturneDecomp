; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_meshlod_cpp_staticInit_FUN_0050f000(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 0050f000
        ;   Label: shape_meshlod.cpp_staticInit_FUN_0050f000
    PUSH 0x3                            ; 0050f005
    PUSH 0x61f5a0                       ; 0050f007
    PUSH 0x50f090                       ; 0050f00c
    PUSH 0x5e87c8                       ; 0050f011
    PUSH 0x1d223e8                      ; 0050f016
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0050f01b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0050f020
    RET                                 ; 0050f023

