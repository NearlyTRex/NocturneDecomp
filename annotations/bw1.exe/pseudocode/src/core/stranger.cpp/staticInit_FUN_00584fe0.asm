; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_staticInit_FUN_00584fe0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c835e4
;   undefined4 DAT_02c835e8
;   undefined4 DAT_02c835ec
;   undefined4 DAT_02c835f0
;   undefined4 DAT_02c835f4
;   undefined4 DAT_02c835f8
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584fe0
        ;   Label: core_stranger.cpp_staticInit_FUN_00584fe0
    PUSH ESI                            ; 00584fe1
    PUSH 0x1d06ad8                      ; 00584fe2
    PUSH 0x9                            ; 00584fe7
    MOV EDX,0x3f05e354                  ; 00584fe9
    MOV ECX,0x3d656042                  ; 00584fee
    PUSH 0x625930                       ; 00584ff3
    MOV EBX,0x3e010625                  ; 00584ff8
    MOV ESI,0xbf05e354                  ; 00584ffd
    PUSH 0x585240                       ; 00585002
    MOV dword ptr [0x02c835e4],EDX      ; 00585007 | DAT_02c835e4
    MOV dword ptr [0x02c835e8],ECX      ; 0058500d | DAT_02c835e8
    PUSH 0x5f6399                       ; 00585013
    MOV dword ptr [0x02c835ec],EBX      ; 00585018 | DAT_02c835ec
    MOV dword ptr [0x02c835f0],ESI      ; 0058501e | DAT_02c835f0
    PUSH 0x2c8365c                      ; 00585024
    MOV dword ptr [0x02c835f4],ECX      ; 00585029 | DAT_02c835f4
    MOV dword ptr [0x02c835f8],EBX      ; 0058502f | DAT_02c835f8
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00585035
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0058503a
    POP ESI                             ; 0058503d
    POP EBX                             ; 0058503e
    RET                                 ; 0058503f

