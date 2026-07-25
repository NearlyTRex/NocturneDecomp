; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b9cc0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1cae0ec                      ; 004b9cc0
        ;   Label: FUN_004b9cc0
    PUSH 0x1                            ; 004b9cc5
    PUSH 0x5ba9cc                       ; 004b9cc7
    PUSH 0x4b9cf0                       ; 004b9ccc
    PUSH 0x586002                       ; 004b9cd1
    PUSH 0x1cae2d0                      ; 004b9cd6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b9cdb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b9ce0
    RET                                 ; 004b9ce3

