; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048e960(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 0048e960
        ;   Label: FUN_0048e960
    PUSH 0x1                            ; 0048e965
    PUSH 0x5b91dc                       ; 0048e967
    PUSH 0x48e990                       ; 0048e96c
    PUSH 0x58168e                       ; 0048e971
    PUSH 0x1c70690                      ; 0048e976
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0048e97b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0048e980
    RET                                 ; 0048e983

