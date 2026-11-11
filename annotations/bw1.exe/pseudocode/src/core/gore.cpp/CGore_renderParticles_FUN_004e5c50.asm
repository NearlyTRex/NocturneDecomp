; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004e5c50(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 at 00550443
;   core_set.cpp_FUN_00550580 at 005508ac
;   core_set.cpp_FUN_00550da0 at 00550fb6
;   core_set.cpp_FUN_00551170 at 00551387
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_BloodParticles[0].base.lifetime_remaining
;   undefined4 g_BloodParticles[0].base.vtable
;   undefined4 g_BloodParticles[1].base.lifetime_remaining
;   undefined4 g_BloodParticles[1].base.vtable
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_gore.cpp_CBloodParticle_setupRenderState_FUN_004e3e50
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5c50
        ;   Label: core_gore.cpp_CGore_renderParticles_FUN_004e5c50
    PUSH ESI                            ; 004e5c51
    PUSH EBP                            ; 004e5c52
    MOV EBP,ESP                         ; 004e5c53
    AND ESP,0xfffffff8                  ; 004e5c55
    MOV EAX,[0x0061d95c]                ; 004e5c58 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x14],0x0      ; 004e5c5d | g_CGameInstance.blood_flag
    JNZ 0x004e5c69                      ; 004e5c61
        ;   XREF to: 004e5c69 (CONDITIONAL_JUMP)  ; LAB_004e5c69
    MOV ESP,EBP                         ; 004e5c63
        ;   Label: LAB_004e5c63
    POP EBP                             ; 004e5c65
    POP ESI                             ; 004e5c66
    POP EBX                             ; 004e5c67
    RET                                 ; 004e5c68
    MOV ECX,dword ptr [0x00612560]      ; 004e5c69 | DAT_00612560
        ;   Label: LAB_004e5c69
    PUSH ECX                            ; 004e5c6f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004e5c70
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e5c75
    TEST EAX,EAX                        ; 004e5c78
    JNZ 0x004e5c63                      ; 004e5c7a
        ;   XREF to: 004e5c63 (CONDITIONAL_JUMP)  ; LAB_004e5c63
    PUSH EAX                            ; 004e5c7c
    PUSH EAX                            ; 004e5c7d
    PUSH EAX                            ; 004e5c7e
    PUSH EAX                            ; 004e5c7f
    PUSH EAX                            ; 004e5c80
    MOV EBX,dword ptr [0x00622c18]      ; 004e5c81 | g_CDemonSetPtr
    PUSH EBX                            ; 004e5c87 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30 ; 004e5c88
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004e5c8d
    PUSH 0x1cd0eac                      ; 004e5c90
    MOV EBX,0x1cd0eac                   ; 004e5c95
    CALL core_gore.cpp_CBloodParticle_setupRenderState_FUN_004e3e50 ; 004e5c9a
        ;   XREF to: 004e3e50 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodParticle_setupRenderState_FUN_004e3e50(CBloodParticle * this_ptr)
    LEA ESI,[EBX + 0x4800]              ; 004e5c9f
    ADD ESP,0x4                         ; 004e5ca5
    FLD float ptr [EBX + 0x24]          ; 004e5ca8 | g_BloodParticles[0].base.lifetime_remaining | g_BloodParticles[1].base.lifetime_remaining
        ;   Label: LAB_004e5ca8
    FLDZ                                ; 004e5cab
    FCOMPP                              ; 004e5cad
    FNSTSW AX                           ; 004e5caf
    SAHF                                ; 004e5cb1
    JNC 0x004e5cbe                      ; 004e5cb2
        ;   XREF to: 004e5cbe (CONDITIONAL_JUMP)  ; LAB_004e5cbe
    PUSH EBX                            ; 004e5cb4
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004e5cb5 | g_BloodParticles[0].base.vtable | g_BloodParticles[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004e5cb8
    ADD ESP,0x4                         ; 004e5cbb
    ADD EBX,0x48                        ; 004e5cbe
        ;   Label: LAB_004e5cbe
    CMP EBX,ESI                         ; 004e5cc1
    JZ 0x004e5c63                       ; 004e5cc3
        ;   XREF to: 004e5c63 (CONDITIONAL_JUMP)  ; LAB_004e5c63
    JMP 0x004e5ca8                      ; 004e5cc5
        ;   XREF to: 004e5ca8 (UNCONDITIONAL_JUMP)  ; LAB_004e5ca8

