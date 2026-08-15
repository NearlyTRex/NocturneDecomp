; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_arrdtor256_FUN_004c9970(CGlassParticle *this_ptr,uint flags)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGlassParticleTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65de50                       ; 004c9970 | g_CGlassParticleTypeInfo
        ;   Label: core_fire.cpp_CGlassParticle_arrdtor256_FUN_004c9970
    PUSH 0x100                          ; 004c9975
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c997a
    PUSH EDX                            ; 004c997e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c997f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9984
    RET                                 ; 004c9987

