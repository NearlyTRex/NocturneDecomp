; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_staticInit_FUN_004fefe0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004fefe0
        ;   Label: core_lever.cpp_staticInit_FUN_004fefe0
    PUSH 0x8                            ; 004fefe5
    PUSH 0x61f2fc                       ; 004fefe7
    PUSH 0x4ff010                       ; 004fefec
    PUSH 0x5e6d0a                       ; 004feff1
    PUSH 0x1d1c1e4                      ; 004feff6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004feffb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ff000
    RET                                 ; 004ff003

