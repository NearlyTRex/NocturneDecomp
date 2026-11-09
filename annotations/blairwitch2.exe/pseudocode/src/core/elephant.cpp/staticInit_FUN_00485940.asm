; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_elephant_cpp_staticInit_FUN_00485940(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 00485940
        ;   Label: core_elephant.cpp_staticInit_FUN_00485940
    PUSH 0x1                            ; 00485945
    PUSH 0x614174                       ; 00485947
    PUSH 0x485970                       ; 0048594c
    PUSH 0x5d2b06                       ; 00485951
    PUSH 0x1c26430                      ; 00485956
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0048595b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00485960
    RET                                 ; 00485963

