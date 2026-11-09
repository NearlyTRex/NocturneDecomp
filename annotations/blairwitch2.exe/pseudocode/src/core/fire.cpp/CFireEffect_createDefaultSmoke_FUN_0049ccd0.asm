; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_0049ccd0(CFireEffect *this_ptr,CVector3f *position)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[1]:
;   core_fire.cpp_CMuzzleFlash_process_FUN_00496a60 at 00496a86
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;
; *****************************************************************************

section .text

    PUSH 0xffff                         ; 0049ccd0
        ;   Label: core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0049ccd0
    PUSH 0x0                            ; 0049ccd5
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049ccd7
    PUSH 0x3f19999a                     ; 0049ccdb
    PUSH EDX                            ; 0049cce0
    MOV ECX,dword ptr [0x00614d30]      ; 0049cce1 | DAT_00614d30
    PUSH ECX                            ; 0049cce7
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 0049cce8
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0049cced
    RET                                 ; 0049ccf0

