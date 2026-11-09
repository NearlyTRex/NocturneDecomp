; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dynamite_cpp_staticInit_FUN_00492470(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3db98
;   undefined4 DAT_01c3db9c
;   undefined4 DAT_01c3dba0
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 00492470
        ;   Label: core_dynamite.cpp_staticInit_FUN_00492470
    PUSH 0x1                            ; 00492475
    PUSH 0x61ab98                       ; 00492477
    PUSH 0x4924b0                       ; 0049247c
    PUSH 0x5dbc34                       ; 00492481
    PUSH 0x1c3db5c                      ; 00492486
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0049248b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    MOV ECX,0xc2000000                  ; 00492490
    XOR EDX,EDX                         ; 00492495
    ADD ESP,0x18                        ; 00492497
    MOV dword ptr [0x01c3db98],EDX      ; 0049249a | DAT_01c3db98
    MOV dword ptr [0x01c3db9c],ECX      ; 004924a0 | DAT_01c3db9c
    MOV dword ptr [0x01c3dba0],EDX      ; 004924a6 | DAT_01c3dba0
    RET                                 ; 004924ac

