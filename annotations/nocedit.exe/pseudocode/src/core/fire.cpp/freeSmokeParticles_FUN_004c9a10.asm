; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_freeSmokeParticles_FUN_004c9a10(CSmokeParticle * * array)
;
; Parameters:
; CSmokeParticle * * Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CSmokeParticleTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65ddb0                       ; 004c9a10 | WatcomTypeInfo g_CSmokeParticleTypeInfo
        ;   Label: core_fire.cpp_freeSmokeParticles_FUN_004c9a10
    PUSH 0x800                          ; 004c9a15
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9a1a
    PUSH EDX                            ; 004c9a1e
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004c9a1f | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004c9a24
    RET                                 ; 004c9a27

