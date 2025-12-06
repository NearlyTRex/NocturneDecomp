; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CRainDrop * core_fire.cpp_CRainDrop_ctor_FUN_004c9490(CRainDrop * this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CRainDropVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00545650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c9490
        ;   Label: core_fire.cpp_CRainDrop_ctor_FUN_004c9490
    PUSH EDX                            ; 004c9494
    CALL core_particle.cpp_CParticle_ctor_FUN_00545650 ; 004c9495 | CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
        ;   XREF to: 00545650 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c949a
    MOV dword ptr [EAX + 0x34],0x65dcd4 ; 004c949d | CParticle_vtable g_CRainDropVTable
    RET                                 ; 004c94a4

