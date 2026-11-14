; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_staticInit_FUN_00485bf0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00485bf0
        ;   Label: core_drone.cpp_staticInit_FUN_00485bf0
    PUSH 0x2                            ; 00485bf5
    PUSH 0x6144bc                       ; 00485bf7
    PUSH 0x485c20                       ; 00485bfc
    PUSH 0x5db612                       ; 00485c01
    PUSH 0x1beef80                      ; 00485c06
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00485c0b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00485c10
    RET                                 ; 00485c13

