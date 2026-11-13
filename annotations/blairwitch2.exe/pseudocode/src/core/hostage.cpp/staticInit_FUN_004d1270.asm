; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_staticInit_FUN_004d1270(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1d65404                      ; 004d1270
        ;   Label: core_hostage.cpp_staticInit_FUN_004d1270
    PUSH 0xc                            ; 004d1275
    PUSH 0x617ac8                       ; 004d1277
    PUSH 0x4d12a0                       ; 004d127c
    PUSH 0x5da0fe                       ; 004d1281
    PUSH 0x1cedfd0                      ; 004d1286
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004d128b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d1290
    RET                                 ; 004d1293

