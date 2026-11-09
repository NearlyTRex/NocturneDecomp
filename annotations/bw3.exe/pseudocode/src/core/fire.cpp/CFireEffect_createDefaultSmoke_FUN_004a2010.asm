; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect *this_ptr,CVector3f *position)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[3]:
;   core_blundrbs.cpp_FUN_00410490 at 00410e1f
;   core_fire.cpp_CMuzzleFlash_process_FUN_0049a450 at 0049a476
;   core_flintlck.cpp_FUN_004ae850 at 004aebe9
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
;
; *****************************************************************************

section .text

    PUSH 0x4000                         ; 004a2010
        ;   Label: core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010
    PUSH 0x0                            ; 004a2015
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a2017
    PUSH 0x3f19999a                     ; 004a201b
    PUSH EDX                            ; 004a2020
    MOV ECX,dword ptr [0x005fc5a0]      ; 004a2021 | DAT_005fc5a0
    PUSH ECX                            ; 004a2027
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 ; 004a2028
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004a202d
    RET                                 ; 004a2030

