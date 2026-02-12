; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSmokeParticle * __cdecl core_fire_cpp_CSmokeParticle_arrdtor_FUN_004c9a10(CSmokeParticle *objs,uint flags)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSmokeParticleTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65ddb0                       ; 004c9a10 | g_CSmokeParticleTypeInfo
        ;   Label: core_fire.cpp_CSmokeParticle_arrdtor_FUN_004c9a10
    PUSH 0x800                          ; 004c9a15
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9a1a
    PUSH EDX                            ; 004c9a1e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c9a1f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9a24
    RET                                 ; 004c9a27

