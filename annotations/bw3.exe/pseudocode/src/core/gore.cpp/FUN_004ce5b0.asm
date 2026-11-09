; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004ce5b0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_set.cpp_FUN_00535a80 at 00535c63
;   core_set.cpp_FUN_00535da0 at 005360cc
;   core_set.cpp_FUN_005365c0 at 005367d6
;   core_set.cpp_FUN_00536990 at 00536b97
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field20_0x14
;   undefined4 g_BloodParticles[0].field36_0x24
;   undefined4 g_BloodParticles[0].field60_0x3c
;   undefined4 g_BloodParticles[1].field36_0x24
;   undefined4 g_BloodParticles[1].field60_0x3c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ccaf0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce5b0
        ;   Label: core_gore.cpp_FUN_004ce5b0
    PUSH ESI                            ; 004ce5b1
    PUSH EBP                            ; 004ce5b2
    MOV EBP,ESP                         ; 004ce5b3
    AND ESP,0xfffffff8                  ; 004ce5b5
    MOV EAX,[0x005fe9dc]                ; 004ce5b8 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x14],0x0      ; 004ce5bd | g_CGameInstance.field20_0x14
    JNZ 0x004ce5c9                      ; 004ce5c1
        ;   XREF to: 004ce5c9 (CONDITIONAL_JUMP)  ; LAB_004ce5c9
    MOV ESP,EBP                         ; 004ce5c3
        ;   Label: LAB_004ce5c3
    POP EBP                             ; 004ce5c5
    POP ESI                             ; 004ce5c6
    POP EBX                             ; 004ce5c7
    RET                                 ; 004ce5c8
    MOV ECX,dword ptr [0x005f2afc]      ; 004ce5c9 | DAT_005f2afc
        ;   Label: LAB_004ce5c9
    PUSH ECX                            ; 004ce5cf | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004ce5d0
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ce5d5
    TEST EAX,EAX                        ; 004ce5d8
    JNZ 0x004ce5c3                      ; 004ce5da
        ;   XREF to: 004ce5c3 (CONDITIONAL_JUMP)  ; LAB_004ce5c3
    PUSH EAX                            ; 004ce5dc
    PUSH EAX                            ; 004ce5dd
    PUSH EAX                            ; 004ce5de
    PUSH EAX                            ; 004ce5df
    PUSH EAX                            ; 004ce5e0
    MOV EBX,dword ptr [0x00603b28]      ; 004ce5e1 | g_CDemonSetPtr
    PUSH EBX                            ; 004ce5e7 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 004ce5e8
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004ce5ed
    PUSH 0x1d22eb4                      ; 004ce5f0
    MOV EBX,0x1d22eb4                   ; 004ce5f5
    CALL core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ccaf0 ; 004ce5fa
        ;   XREF to: 004ccaf0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ccaf0(CBloodParticle * this_ptr)
    LEA ESI,[EBX + 0x4800]              ; 004ce5ff
    ADD ESP,0x4                         ; 004ce605
    FLD float ptr [EBX + 0x24]          ; 004ce608 | g_BloodParticles[0].field36_0x24 | g_BloodParticles[1].field36_0x24
        ;   Label: LAB_004ce608
    FLDZ                                ; 004ce60b
    FCOMPP                              ; 004ce60d
    FNSTSW AX                           ; 004ce60f
    SAHF                                ; 004ce611
    JNC 0x004ce61e                      ; 004ce612
        ;   XREF to: 004ce61e (CONDITIONAL_JUMP)  ; LAB_004ce61e
    PUSH EBX                            ; 004ce614
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004ce615 | g_BloodParticles[0].field60_0x3c | g_BloodParticles[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004ce618
    ADD ESP,0x4                         ; 004ce61b
    ADD EBX,0x48                        ; 004ce61e
        ;   Label: LAB_004ce61e
    CMP EBX,ESI                         ; 004ce621
    JZ 0x004ce5c3                       ; 004ce623
        ;   XREF to: 004ce5c3 (CONDITIONAL_JUMP)  ; LAB_004ce5c3
    JMP 0x004ce608                      ; 004ce625
        ;   XREF to: 004ce608 (UNCONDITIONAL_JUMP)  ; LAB_004ce608

