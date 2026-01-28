; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004c9630(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   CParticle_vtable g_CGlassParticleVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00545650
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9630
        ;   Label: core_fire.cpp_CGlassParticle_ctor_FUN_004c9630
    PUSH EAX                            ; 004c9634
    CALL core_particle.cpp_CParticle_ctor_FUN_00545650 ; 004c9635
        ;   XREF to: 00545650 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004c963a
    PUSH 0x6598c0                       ; 004c963d | g_CVectorTypeInfo
    PUSH 0x3                            ; 004c9642
    ADD EAX,0x78                        ; 004c9644
    PUSH EAX                            ; 004c9647
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004c9648
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c964d
    MOV dword ptr [EAX + -0x44],0x65dd34 ; 004c9650 | g_CGlassParticleVTable
    SUB EAX,0x78                        ; 004c9657
    RET                                 ; 004c965a

