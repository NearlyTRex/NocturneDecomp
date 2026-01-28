; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_004c9660(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_cloth.cpp_freeVectors_FUN_0043e460
;   core_particle.cpp_CParticle_dtor_FUN_00545670
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9660
        ;   Label: core_fire.cpp_CGlassParticle_dtor_FUN_004c9660
    PUSH 0x0                            ; 004c9664
    ADD EAX,0x78                        ; 004c9666
    PUSH EAX                            ; 004c9669
    CALL core_cloth.cpp_freeVectors_FUN_0043e460 ; 004c966a
        ;   XREF to: 0043e460 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_freeVectors_FUN_0043e460(CVector3f * * array)
    ADD ESP,0x8                         ; 004c966f
    PUSH 0x1                            ; 004c9672
    SUB EAX,0x78                        ; 004c9674
    PUSH EAX                            ; 004c9677
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004c9678
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr)
    ADD ESP,0x8                         ; 004c967d
    RET                                 ; 004c9680

