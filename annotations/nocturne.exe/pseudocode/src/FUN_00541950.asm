; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541950(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1cae0ec                      ; 00541950
        ;   Label: FUN_00541950
    PUSH 0x1                            ; 00541955
    PUSH 0x5c1020                       ; 00541957
    PUSH 0x541980                       ; 0054195c
    PUSH 0x5961e9                       ; 00541961
    PUSH 0x2dca0a4                      ; 00541966
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0054196b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00541970
    RET                                 ; 00541973

