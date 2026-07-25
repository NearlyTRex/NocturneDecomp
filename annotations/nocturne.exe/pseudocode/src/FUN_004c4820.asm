; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4820(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 004c4820
        ;   Label: FUN_004c4820
    PUSH 0x2                            ; 004c4825
    PUSH 0x5bac7c                       ; 004c4827
    PUSH 0x4c4850                       ; 004c482c
    PUSH 0x587774                       ; 004c4831
    PUSH 0x1cc3124                      ; 004c4836
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004c483b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c4840
    RET                                 ; 004c4843

