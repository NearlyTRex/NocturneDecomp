; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_staticInit_FUN_004fd5f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 004fd5f0
        ;   Label: core_mobster.cpp_staticInit_FUN_004fd5f0
    PUSH 0x7                            ; 004fd5f5
    PUSH 0x6182e4                       ; 004fd5f7
    PUSH 0x4fd7e0                       ; 004fd5fc
    PUSH 0x5debdd                       ; 004fd601
    PUSH 0x1d1c740                      ; 004fd606
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004fd60b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004fd610
    RET                                 ; 004fd613

