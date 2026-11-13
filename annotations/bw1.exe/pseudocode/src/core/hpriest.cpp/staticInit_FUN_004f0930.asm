; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpriest_cpp_staticInit_FUN_004f0930(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d8136c                      ; 004f0930
        ;   Label: core_hpriest.cpp_staticInit_FUN_004f0930
    PUSH 0x1                            ; 004f0935
    PUSH 0x61efb8                       ; 004f0937
    PUSH 0x4f0960                       ; 004f093c
    PUSH 0x5e521a                       ; 004f0941
    PUSH 0x1d06c38                      ; 004f0946
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004f094b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f0950
    RET                                 ; 004f0953

