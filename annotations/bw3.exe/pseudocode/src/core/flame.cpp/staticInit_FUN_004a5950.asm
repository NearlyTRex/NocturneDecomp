; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_staticInit_FUN_004a5950(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004a5950
        ;   Label: core_flame.cpp_staticInit_FUN_004a5950
    PUSH 0x7                            ; 004a5955
    PUSH 0x5fe248                       ; 004a5957
    PUSH 0x4a5980                       ; 004a595c
    PUSH 0x5c0b94                       ; 004a5961
    PUSH 0x1d0ceec                      ; 004a5966
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004a596b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a5970
    RET                                 ; 004a5973

