; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_larva_cpp_staticInit_FUN_004e0520(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 004e0520
        ;   Label: core_larva.cpp_staticInit_FUN_004e0520
    PUSH 0x2                            ; 004e0525
    PUSH 0x617dec                       ; 004e0527
    PUSH 0x4e0550                       ; 004e052c
    PUSH 0x5dbd9e                       ; 004e0531
    PUSH 0x1d02fc4                      ; 004e0536
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004e053b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e0540
    RET                                 ; 004e0543

