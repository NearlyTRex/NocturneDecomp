; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00532fc0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00532fc0
        ;   Label: FUN_00532fc0
    PUSH 0x1                            ; 00532fc5
    PUSH 0x5c0f90                       ; 00532fc7
    PUSH 0x532ff0                       ; 00532fcc
    PUSH 0x59500a                       ; 00532fd1
    PUSH 0x2dc9e28                      ; 00532fd6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00532fdb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00532fe0
    RET                                 ; 00532fe3

