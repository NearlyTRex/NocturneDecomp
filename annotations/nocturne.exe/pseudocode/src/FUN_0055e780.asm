; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055e780(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 0055e780
        ;   Label: FUN_0055e780
    PUSH 0xb                            ; 0055e785
    PUSH 0x5c166c                       ; 0055e787
    PUSH 0x55ea90                       ; 0055e78c
    PUSH 0x598396                       ; 0055e791
    PUSH 0x2de4940                      ; 0055e796
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0055e79b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0055e7a0
    RET                                 ; 0055e7a3

