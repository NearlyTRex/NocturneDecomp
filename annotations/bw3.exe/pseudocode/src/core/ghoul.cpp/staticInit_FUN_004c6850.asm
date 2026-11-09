; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_staticInit_FUN_004c6850(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d22d4c
;   undefined4 DAT_01d22d50
;   undefined4 DAT_01d22d54
;   undefined4 DAT_01d22d58
;   undefined4 DAT_01d22d5c
;   undefined4 DAT_01d22d60
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c6850
        ;   Label: core_ghoul.cpp_staticInit_FUN_004c6850
    PUSH 0x1c5bc10                      ; 004c6851
    PUSH 0x7                            ; 004c6856
    MOV EDX,0xbf19999a                  ; 004c6858
    PUSH 0x5fecac                       ; 004c685d
    MOV ESI,0x3f19999a                  ; 004c6862
    XOR ECX,ECX                         ; 004c6867
    PUSH 0x4c68b0                       ; 004c6869
    MOV dword ptr [0x01d22d4c],EDX      ; 004c686e | DAT_01d22d4c
    MOV dword ptr [0x01d22d50],ECX      ; 004c6874 | DAT_01d22d50
    PUSH 0x5c404d                       ; 004c687a
    MOV dword ptr [0x01d22d54],ECX      ; 004c687f | DAT_01d22d54
    MOV dword ptr [0x01d22d58],ESI      ; 004c6885 | DAT_01d22d58
    PUSH 0x1d22d64                      ; 004c688b
    MOV dword ptr [0x01d22d5c],ECX      ; 004c6890 | DAT_01d22d5c
    MOV dword ptr [0x01d22d60],ECX      ; 004c6896 | DAT_01d22d60
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004c689c
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c68a1
    POP ESI                             ; 004c68a4
    RET                                 ; 004c68a5

