; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00423ea0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;
; *****************************************************************************

section .text

    PUSH 0x7658e4                       ; 00423ea0
        ;   Label: FUN_00423ea0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00423ea5
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 00423eaa
    PUSH 0x763e48                       ; 00423ead
    PUSH 0x6                            ; 00423eb2
    PUSH 0x5ad1e8                       ; 00423eb4
    PUSH 0x0                            ; 00423eb9
    PUSH 0x579daa                       ; 00423ebb
    PUSH 0x765a60                       ; 00423ec0
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00423ec5
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00423eca
    RET                                 ; 00423ecd

