; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd8d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1cae0ec                      ; 004dd8d0
        ;   Label: FUN_004dd8d0
    PUSH 0x1                            ; 004dd8d5
    PUSH 0x5bb144                       ; 004dd8d7
    PUSH 0x4dd900                       ; 004dd8dc
    PUSH 0x58a70a                       ; 004dd8e1
    PUSH 0x1ccdc14                      ; 004dd8e6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004dd8eb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004dd8f0
    RET                                 ; 004dd8f3

