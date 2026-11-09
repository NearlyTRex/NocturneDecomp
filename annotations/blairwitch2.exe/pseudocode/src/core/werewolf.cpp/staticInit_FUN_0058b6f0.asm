; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_staticInit_FUN_0058b6f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02662d04
;   undefined4 DAT_02662d08
;   undefined4 DAT_02662d0c
;   undefined4 DAT_02662d10
;   undefined4 DAT_02662d14
;   undefined4 DAT_02662d18
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058b6f0
        ;   Label: core_werewolf.cpp_staticInit_FUN_0058b6f0
    PUSH ESI                            ; 0058b6f1
    PUSH 0x1c264a8                      ; 0058b6f2
    PUSH 0x6                            ; 0058b6f7
    MOV EDX,0xbe8f5c29                  ; 0058b6f9
    MOV ECX,0x3ed70a3d                  ; 0058b6fe
    PUSH 0x61e940                       ; 0058b703
    MOV EBX,0x3f19999a                  ; 0058b708
    MOV ESI,0x3eb33333                  ; 0058b70d
    PUSH 0x58b750                       ; 0058b712
    MOV dword ptr [0x02662d04],EDX      ; 0058b717 | DAT_02662d04
    MOV dword ptr [0x02662d08],ECX      ; 0058b71d | DAT_02662d08
    PUSH 0x5ee5f2                       ; 0058b723
    MOV dword ptr [0x02662d0c],EBX      ; 0058b728 | DAT_02662d0c
    MOV dword ptr [0x02662d10],ESI      ; 0058b72e | DAT_02662d10
    PUSH 0x2662d1c                      ; 0058b734
    MOV dword ptr [0x02662d14],ECX      ; 0058b739 | DAT_02662d14
    MOV dword ptr [0x02662d18],EBX      ; 0058b73f | DAT_02662d18
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0058b745
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0058b74a
    POP ESI                             ; 0058b74d
    POP EBX                             ; 0058b74e
    RET                                 ; 0058b74f

