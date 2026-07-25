; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4230(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004c4230
        ;   Label: FUN_004c4230
    PUSH 0x2                            ; 004c4235
    PUSH 0x5bac68                       ; 004c4237
    PUSH 0x4c4260                       ; 004c423c
    PUSH 0x587724                       ; 004c4241
    PUSH 0x1cc30e8                      ; 004c4246
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004c424b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c4250
    RET                                 ; 004c4253

