; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_gore.cpp_cleanupBloodParticles_FUN_004ee480(CBloodParticle * ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CBloodParticleTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65f080                       ; 004ee480 | WatcomTypeInfo g_CBloodParticleTypeInfo
        ;   Label: core_gore.cpp_cleanupBloodParticles_FUN_004ee480
    PUSH 0x100                          ; 004ee485
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ee48a
    PUSH EDX                            ; 004ee48e
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004ee48f | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004ee494
    RET                                 ; 004ee497

