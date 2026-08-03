; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_0048aae0(CFireEffect *this_ptr,CVector3f *position)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[1]:
;   core_fire.cpp_CMuzzleFlash_process_FUN_00484ed0 at 00484ef6
;
; Referenced Globals:
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
;
; *****************************************************************************

section .text

    PUSH 0xffff                         ; 0048aae0
        ;   Label: core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0048aae0
    PUSH 0x0                            ; 0048aae5
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048aae7
    PUSH 0x3f19999a                     ; 0048aaeb
    PUSH EDX                            ; 0048aaf0
    MOV ECX,dword ptr [0x005b80f0]      ; 0048aaf1 | g_CFireEffect_PTR_005b80f0
    PUSH ECX                            ; 0048aaf7
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 0048aaf8
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0048aafd
    RET                                 ; 0048ab00

