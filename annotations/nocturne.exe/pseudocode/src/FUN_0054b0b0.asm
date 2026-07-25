; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054b0b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 0054b0b0
        ;   Label: FUN_0054b0b0
    PUSH 0x5                            ; 0054b0b5
    PUSH 0x5c1174                       ; 0054b0b7
    PUSH 0x54b0e0                       ; 0054b0bc
    PUSH 0x596ecd                       ; 0054b0c1
    PUSH 0x2dd110c                      ; 0054b0c6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0054b0cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0054b0d0
    RET                                 ; 0054b0d3

