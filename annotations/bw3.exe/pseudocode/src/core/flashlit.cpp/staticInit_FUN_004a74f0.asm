; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flashlit_cpp_staticInit_FUN_004a74f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004a74f0
        ;   Label: core_flashlit.cpp_staticInit_FUN_004a74f0
    PUSH 0x1                            ; 004a74f5
    PUSH 0x5fe264                       ; 004a74f7
    PUSH 0x4a7520                       ; 004a74fc
    PUSH 0x5c0ce7                       ; 004a7501
    PUSH 0x1d0cf64                      ; 004a7506
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004a750b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a7510
    RET                                 ; 004a7513

