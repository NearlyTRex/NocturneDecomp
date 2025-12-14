; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_FUN_004c7620(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00 at 004c1a26
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;
; *****************************************************************************

section .text

    PUSH 0xffff                         ; 004c7620
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c7620
    PUSH 0x0                            ; 004c7625
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c7627
    PUSH 0x3f19999a                     ; 004c762b
    PUSH EDX                            ; 004c7630
    MOV ECX,dword ptr [0x0067a3d0]      ; 004c7631 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 004c7637 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 004c7638
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004c763d
    RET                                 ; 004c7640

