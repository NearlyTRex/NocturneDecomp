; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00545b30(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 00545b30
        ;   Label: FUN_00545b30
    PUSH 0x1                            ; 00545b35
    PUSH 0x5c10f0                       ; 00545b37
    PUSH 0x545b60                       ; 00545b3c
    PUSH 0x596881                       ; 00545b41
    PUSH 0x2dd0fd0                      ; 00545b46
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00545b4b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00545b50
    RET                                 ; 00545b53

