; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_staticInit_FUN_004ddcd0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cd0d44
;   undefined4 DAT_01cd0d48
;   undefined4 DAT_01cd0d4c
;   undefined4 DAT_01cd0d50
;   undefined4 DAT_01cd0d54
;   undefined4 DAT_01cd0d58
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ddcd0
        ;   Label: core_ghoul.cpp_staticInit_FUN_004ddcd0
    PUSH 0x1c3f668                      ; 004ddcd1
    PUSH 0x7                            ; 004ddcd6
    MOV EDX,0xbf19999a                  ; 004ddcd8
    PUSH 0x61dc2c                       ; 004ddcdd
    MOV ESI,0x3f19999a                  ; 004ddce2
    XOR ECX,ECX                         ; 004ddce7
    PUSH 0x4ddd30                       ; 004ddce9
    MOV dword ptr [0x01cd0d44],EDX      ; 004ddcee | DAT_01cd0d44
    MOV dword ptr [0x01cd0d48],ECX      ; 004ddcf4 | DAT_01cd0d48
    PUSH 0x5e3a41                       ; 004ddcfa
    MOV dword ptr [0x01cd0d4c],ECX      ; 004ddcff | DAT_01cd0d4c
    MOV dword ptr [0x01cd0d50],ESI      ; 004ddd05 | DAT_01cd0d50
    PUSH 0x1cd0d5c                      ; 004ddd0b
    MOV dword ptr [0x01cd0d54],ECX      ; 004ddd10 | DAT_01cd0d54
    MOV dword ptr [0x01cd0d58],ECX      ; 004ddd16 | DAT_01cd0d58
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004ddd1c
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ddd21
    POP ESI                             ; 004ddd24
    RET                                 ; 004ddd25

