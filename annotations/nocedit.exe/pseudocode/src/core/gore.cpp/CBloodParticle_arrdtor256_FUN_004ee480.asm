; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_arrdtor256_FUN_004ee480(CBloodParticle *this_ptr,uint flags)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBloodParticleTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65f080                       ; 004ee480 | g_CBloodParticleTypeInfo
        ;   Label: core_gore.cpp_CBloodParticle_arrdtor256_FUN_004ee480
    PUSH 0x100                          ; 004ee485
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ee48a
    PUSH EDX                            ; 004ee48e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004ee48f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ee494
    RET                                 ; 004ee497

