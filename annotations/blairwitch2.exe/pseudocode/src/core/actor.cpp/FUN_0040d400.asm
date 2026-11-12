; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040d400(undefined4 param_1)
;
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930 at 00408959
;
; Referenced Globals:
;   WatcomTypeInfo g_CSimpleParticleSystemTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f2270                       ; 0040d400 | g_CSimpleParticleSystemTypeInfo
        ;   Label: core_actor.cpp_FUN_0040d400
    PUSH 0x5                            ; 0040d405
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d407
    PUSH EDX                            ; 0040d40b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0040d40c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 0040d411
    RET                                 ; 0040d414

