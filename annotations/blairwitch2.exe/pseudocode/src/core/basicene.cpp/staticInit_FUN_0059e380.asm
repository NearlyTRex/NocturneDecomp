; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicene_cpp_staticInit_FUN_0059e380(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0059e380
        ;   Label: core_basicene.cpp_staticInit_FUN_0059e380
    PUSH 0xa                            ; 0059e385
    PUSH 0x61ead0                       ; 0059e387
    PUSH 0x0                            ; 0059e38c
    PUSH 0x5ef857                       ; 0059e38e
    PUSH 0x2668460                      ; 0059e393
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0059e398
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059e39d
    RET                                 ; 0059e3a0

