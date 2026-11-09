; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_blundrbs_cpp_staticInit_FUN_00410390(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 00410390
        ;   Label: core_blundrbs.cpp_staticInit_FUN_00410390
    PUSH 0x1                            ; 00410395
    PUSH 0x5f0c50                       ; 00410397
    PUSH 0x4103c0                       ; 0041039c
    PUSH 0x5b645a                       ; 004103a1
    PUSH 0x7dff4c                       ; 004103a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004103ab
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004103b0
    RET                                 ; 004103b3

