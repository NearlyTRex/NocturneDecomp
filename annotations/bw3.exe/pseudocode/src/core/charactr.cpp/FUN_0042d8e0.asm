; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042d8e0(CCharacter *param_1)
;
;
; XREF[13]:
;   core_asgaya.cpp_CAsgaya_renderOpaque_FUN_005a1760 at 005a17b9
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00418f90 at 0041901f
;   core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300 at 0042e355
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 at 0042e298
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510 at 0042f680
;   core_darkwolf.cpp_CDarkwolf_renderOpaque_FUN_00598e00 at 00598e74
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_0050a9b0 at 0050aa24
;   core_pryemorp.cpp_CPryeMorph_renderOpaque_FUN_00527970 at 005279e4
;   core_spirbear.cpp_CSpiritBear_renderOpaque_FUN_0059b2e0 at 0059b354
;   core_spireagl.cpp_CSpiritEagle_renderOpaque_FUN_00599a70 at 00599aa9
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01bdd7e4
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.collision_render_enabled
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042e3a0
;   core_charactr.cpp_FUN_0042d500
;   core_charactr.cpp_FUN_0042d9f0
;   core_charactr.cpp_FUN_0042f010
;   core_charactr.cpp_FUN_0042f310
;   core_cloth.cpp_CClothList_render_FUN_0043fc50
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d8e0
        ;   Label: core_charactr.cpp_FUN_0042d8e0
    PUSH EBP                            ; 0042d8e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042d8e2
    CMP dword ptr [EBX + 0xbc68],0x0    ; 0042d8e6
    JNZ 0x0042d95c                      ; 0042d8ed
        ;   XREF to: 0042d95c (CONDITIONAL_JUMP)  ; LAB_0042d95c
    PUSH ESI                            ; 0042d8ef
    PUSH EBX                            ; 0042d8f0
    CALL core_charactr.cpp_FUN_0042d500 ; 0042d8f1
        ;   XREF to: 0042d500 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d500()
    ADD ESP,0x4                         ; 0042d8f6
    MOV ECX,dword ptr [EBX + 0xcdc4]    ; 0042d8f9
    LEA ESI,[EBX + 0x158]               ; 0042d8ff
    TEST ECX,ECX                        ; 0042d905
    JZ 0x0042d9c7                       ; 0042d907
        ;   XREF to: 0042d9c7 (CONDITIONAL_JUMP)  ; LAB_0042d9c7
    PUSH EDI                            ; 0042d90d
    PUSH 0x1                            ; 0042d90e
    MOV EDI,dword ptr [0x005f2afc]      ; 0042d910 | DAT_005f2afc
    PUSH EDI                            ; 0042d916 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0042d917
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0042d91c
    PUSH 0x0                            ; 0042d91f
    PUSH 0x1                            ; 0042d921
    PUSH 0x2e7                          ; 0042d923
    PUSH -0x1                           ; 0042d928
    PUSH ESI                            ; 0042d92a
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0 ; 0042d92b
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0042d930
    PUSH 0x0                            ; 0042d933
    MOV EBP,dword ptr [0x005f2afc]      ; 0042d935 | DAT_005f2afc
    PUSH EBP                            ; 0042d93b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0042d93c
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0042d941
    POP EDI                             ; 0042d944
    LEA EAX,[EBX + 0x158]               ; 0042d945
        ;   Label: LAB_0042d945
    PUSH EAX                            ; 0042d94b
    LEA EAX,[EBX + 0x2f08]              ; 0042d94c
    PUSH EAX                            ; 0042d952
    CALL core_cloth.cpp_CClothList_render_FUN_0043fc50 ; 0042d953
        ;   XREF to: 0043fc50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_render_FUN_0043fc50(CClothList * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 0042d958
    POP ESI                             ; 0042d95b
    MOV EAX,[0x005f2afc]                ; 0042d95c | DAT_005f2afc
        ;   Label: LAB_0042d95c
    PUSH EAX                            ; 0042d961 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0042d962
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042d967
    TEST EAX,EAX                        ; 0042d96a
    JNZ 0x0042d9ac                      ; 0042d96c
        ;   XREF to: 0042d9ac (CONDITIONAL_JUMP)  ; LAB_0042d9ac
    CMP dword ptr [EBX + 0x27a4],0x0    ; 0042d96e
    JNZ 0x0042d980                      ; 0042d975
        ;   XREF to: 0042d980 (CONDITIONAL_JUMP)  ; LAB_0042d980
    PUSH EBX                            ; 0042d977
    CALL core_charactr.cpp_FUN_0042f010 ; 0042d978
        ;   XREF to: 0042f010 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f010()
    ADD ESP,0x4                         ; 0042d97d
    FLDZ                                ; 0042d980
        ;   Label: LAB_0042d980
    FCOMP float ptr [EBX + 0xbc70]      ; 0042d982
    FNSTSW AX                           ; 0042d988
    SAHF                                ; 0042d98a
    JNC 0x0042d996                      ; 0042d98b
        ;   XREF to: 0042d996 (CONDITIONAL_JUMP)  ; LAB_0042d996
    PUSH EBX                            ; 0042d98d
    CALL core_charactr.cpp_FUN_0042f310 ; 0042d98e
        ;   XREF to: 0042f310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042d993
    FLDZ                                ; 0042d996
        ;   Label: LAB_0042d996
    FCOMP float ptr [EBX + 0x3254]      ; 0042d998
    FNSTSW AX                           ; 0042d99e
    SAHF                                ; 0042d9a0
    JNC 0x0042d9ac                      ; 0042d9a1
        ;   XREF to: 0042d9ac (CONDITIONAL_JUMP)  ; LAB_0042d9ac
    PUSH EBX                            ; 0042d9a3
    CALL core_charactr.cpp_FUN_0042f310 ; 0042d9a4
        ;   XREF to: 0042f310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042d9a9
    PUSH EBX                            ; 0042d9ac
        ;   Label: LAB_0042d9ac
    CALL core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042e3a0 ; 0042d9ad
        ;   XREF to: 0042e3a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042e3a0(CCharacter * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 0042d9b2 | g_CGamePtr | g_CGameInstance
    MOV ECX,dword ptr [EAX + 0x240]     ; 0042d9b7 | g_CGameInstance.collision_render_enabled
    ADD ESP,0x4                         ; 0042d9bd
    TEST ECX,ECX                        ; 0042d9c0
    JNZ 0x0042d9dc                      ; 0042d9c2
        ;   XREF to: 0042d9dc (CONDITIONAL_JUMP)  ; LAB_0042d9dc
    POP EBP                             ; 0042d9c4
    POP EBX                             ; 0042d9c5
    RET                                 ; 0042d9c6
    PUSH ECX                            ; 0042d9c7
        ;   Label: LAB_0042d9c7
    PUSH 0x1                            ; 0042d9c8
    PUSH -0x1                           ; 0042d9ca
    PUSH -0x1                           ; 0042d9cc
    PUSH ESI                            ; 0042d9ce
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0 ; 0042d9cf
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0042d9d4
    JMP 0x0042d945                      ; 0042d9d7
        ;   XREF to: 0042d945 (UNCONDITIONAL_JUMP)  ; LAB_0042d945
    PUSH EBX                            ; 0042d9dc
        ;   Label: LAB_0042d9dc
    CALL core_charactr.cpp_FUN_0042d9f0 ; 0042d9dd
        ;   XREF to: 0042d9f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d9f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042d9e2
    POP EBP                             ; 0042d9e5
    POP EBX                             ; 0042d9e6
    RET                                 ; 0042d9e7

