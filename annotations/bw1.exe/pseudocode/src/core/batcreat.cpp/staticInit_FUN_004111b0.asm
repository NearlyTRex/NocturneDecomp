; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_staticInit_FUN_004111b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 004111b0
        ;   Label: core_batcreat.cpp_staticInit_FUN_004111b0
    PUSH 0x1                            ; 004111b5
    PUSH 0x610978                       ; 004111b7
    PUSH 0x4111e0                       ; 004111bc
    PUSH 0x5d3679                       ; 004111c1
    PUSH 0x7c377c                       ; 004111c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004111cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004111d0
    RET                                 ; 004111d3

