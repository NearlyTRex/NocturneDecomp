; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004b5620(CFireEffect *this_ptr,CVector3f *position)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[1]:
;   core_fire.cpp_CMuzzleFlash_process_FUN_004af400 at 004af426
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;
; *****************************************************************************

section .text

    PUSH 0xffff                         ; 004b5620
        ;   Label: core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004b5620
    PUSH 0x0                            ; 004b5625
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b5627
    PUSH 0x3f19999a                     ; 004b562b
    PUSH EDX                            ; 004b5630
    MOV ECX,dword ptr [0x0061c010]      ; 004b5631 | DAT_0061c010
    PUSH ECX                            ; 004b5637
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 004b5638
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004b563d
    RET                                 ; 004b5640

