; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ee8f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x765a60                       ; 004ee8f0
        ;   Label: FUN_004ee8f0
    PUSH 0x4                            ; 004ee8f5
    PUSH 0x5be074                       ; 004ee8f7
    PUSH 0x4ee920                       ; 004ee8fc
    PUSH 0x58cabb                       ; 004ee901
    PUSH 0x1d46820                      ; 004ee906
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004ee90b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ee910
    RET                                 ; 004ee913

