; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tawiscara_cpp_staticInit_FUN_00593d40(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d24a54
;   undefined4 DAT_02d24a58
;   undefined4 DAT_02d24a5c
;   undefined4 DAT_02d24a60
;   undefined4 DAT_02d24a64
;   undefined4 DAT_02d24a68
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593d40
        ;   Label: core_tawiscara.cpp_staticInit_FUN_00593d40
    PUSH ESI                            ; 00593d41
    PUSH 0x1c5bc10                      ; 00593d42
    PUSH 0x1                            ; 00593d47
    MOV EDX,0xbe8f5c29                  ; 00593d49
    MOV ECX,0x3ed70a3d                  ; 00593d4e
    PUSH 0x60738c                       ; 00593d53
    MOV EBX,0x3f19999a                  ; 00593d58
    MOV ESI,0x3eb33333                  ; 00593d5d
    PUSH 0x593da0                       ; 00593d62
    MOV dword ptr [0x02d24a54],EDX      ; 00593d67 | DAT_02d24a54
    MOV dword ptr [0x02d24a58],ECX      ; 00593d6d | DAT_02d24a58
    PUSH 0x5d9249                       ; 00593d73
    MOV dword ptr [0x02d24a5c],EBX      ; 00593d78 | DAT_02d24a5c
    MOV dword ptr [0x02d24a60],ESI      ; 00593d7e | DAT_02d24a60
    PUSH 0x2d24a6c                      ; 00593d84
    MOV dword ptr [0x02d24a64],ECX      ; 00593d89 | DAT_02d24a64
    MOV dword ptr [0x02d24a68],EBX      ; 00593d8f | DAT_02d24a68
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00593d95
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00593d9a
    POP ESI                             ; 00593d9d
    POP EBX                             ; 00593d9e
    RET                                 ; 00593d9f

