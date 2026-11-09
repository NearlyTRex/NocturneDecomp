; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dynamite_cpp_staticInit_FUN_00479f80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c225dc
;   undefined4 DAT_01c225e0
;   undefined4 DAT_01c225e4
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 00479f80
        ;   Label: core_dynamite.cpp_staticInit_FUN_00479f80
    PUSH 0x1                            ; 00479f85
    PUSH 0x6138b8                       ; 00479f87
    PUSH 0x479fc0                       ; 00479f8c
    PUSH 0x5d1e3b                       ; 00479f91
    PUSH 0x1c225a0                      ; 00479f96
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00479f9b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    MOV ECX,0xc2000000                  ; 00479fa0
    XOR EDX,EDX                         ; 00479fa5
    ADD ESP,0x18                        ; 00479fa7
    MOV dword ptr [0x01c225dc],EDX      ; 00479faa | DAT_01c225dc
    MOV dword ptr [0x01c225e0],ECX      ; 00479fb0 | DAT_01c225e0
    MOV dword ptr [0x01c225e4],EDX      ; 00479fb6 | DAT_01c225e4
    RET                                 ; 00479fbc

