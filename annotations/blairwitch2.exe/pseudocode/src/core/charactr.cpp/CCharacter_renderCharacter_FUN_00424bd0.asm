; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413c70 at 00413d29
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415120 at 00415237
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00419b80 at 00419c0f
;   core_charactr.cpp_CCharacter_renderBackground_FUN_00425a00 at 00425a55
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 at 00425540
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0 at 00426919
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00464ac0 at 00464bcd
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_005020c0 at 005021ee
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_00511980 at 005119f4
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_0056fe50 at 0056ffda
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01ba5c50
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.collision_render_enabled
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0
;   core_charactr.cpp_CCharacter_renderBurn_FUN_004264d0
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730
;   core_charactr.cpp_FUN_004247f0
;   core_charactr.cpp_FUN_00424c80
;   core_cloth.cpp_CClothList_render_FUN_005b17d0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424bd0
        ;   Label: core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0
    PUSH EDI                            ; 00424bd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00424bd2
    CMP dword ptr [EBX + 0x10224],0x0   ; 00424bd6
    JZ 0x00424c35                       ; 00424bdd
        ;   XREF to: 00424c35 (CONDITIONAL_JUMP)  ; LAB_00424c35
    MOV ECX,dword ptr [0x0060b280]      ; 00424bdf | DAT_0060b280
        ;   Label: LAB_00424bdf
    PUSH ECX                            ; 00424be5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00424be6
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00424beb
    TEST EAX,EAX                        ; 00424bee
    JNZ 0x00424c1a                      ; 00424bf0
        ;   XREF to: 00424c1a (CONDITIONAL_JUMP)  ; LAB_00424c1a
    CMP dword ptr [EBX + 0x2810],0x0    ; 00424bf2
    JNZ 0x00424c04                      ; 00424bf9
        ;   XREF to: 00424c04 (CONDITIONAL_JUMP)  ; LAB_00424c04
    PUSH EBX                            ; 00424bfb
    CALL core_charactr.cpp_CCharacter_renderBurn_FUN_004264d0 ; 00424bfc
        ;   XREF to: 004264d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBurn_FUN_004264d0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00424c01
    FLDZ                                ; 00424c04
        ;   Label: LAB_00424c04
    FCOMP float ptr [EBX + 0x1022c]     ; 00424c06
    FNSTSW AX                           ; 00424c0c
    SAHF                                ; 00424c0e
    JNC 0x00424c1a                      ; 00424c0f
        ;   XREF to: 00424c1a (CONDITIONAL_JUMP)  ; LAB_00424c1a
    PUSH EBX                            ; 00424c11
    CALL core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730 ; 00424c12
        ;   XREF to: 00426730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00424c17
    PUSH EBX                            ; 00424c1a
        ;   Label: LAB_00424c1a
    CALL core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0 ; 00424c1b
        ;   XREF to: 00425aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0(CCharacter * this_ptr)
    MOV EAX,[0x00616494]                ; 00424c20 | g_CGamePtr | g_CGameInstance
    MOV EDI,dword ptr [EAX + 0x238]     ; 00424c25 | g_CGameInstance.collision_render_enabled
    ADD ESP,0x4                         ; 00424c2b
    TEST EDI,EDI                        ; 00424c2e
    JNZ 0x00424c6c                      ; 00424c30
        ;   XREF to: 00424c6c (CONDITIONAL_JUMP)  ; LAB_00424c6c
    POP EDI                             ; 00424c32
    POP EBX                             ; 00424c33
    RET                                 ; 00424c34
    PUSH ESI                            ; 00424c35
        ;   Label: LAB_00424c35
    PUSH EBX                            ; 00424c36
    CALL core_charactr.cpp_FUN_004247f0 ; 00424c37
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004247f0()
    ADD ESP,0x4                         ; 00424c3c
    PUSH 0x0                            ; 00424c3f
    PUSH 0x1                            ; 00424c41
    PUSH -0x1                           ; 00424c43
    PUSH -0x1                           ; 00424c45
    LEA ESI,[EBX + 0x2b4]               ; 00424c47
    PUSH ESI                            ; 00424c4d
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 ; 00424c4e
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00424c53
    PUSH ESI                            ; 00424c56
    LEA EAX,[EBX + 0x2d0c]              ; 00424c57
    PUSH EAX                            ; 00424c5d
    CALL core_cloth.cpp_CClothList_render_FUN_005b17d0 ; 00424c5e
        ;   XREF to: 005b17d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_render_FUN_005b17d0(CClothList * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 00424c63
    POP ESI                             ; 00424c66
    JMP 0x00424bdf                      ; 00424c67
        ;   XREF to: 00424bdf (UNCONDITIONAL_JUMP)  ; LAB_00424bdf
    PUSH EBX                            ; 00424c6c
        ;   Label: LAB_00424c6c
    CALL core_charactr.cpp_FUN_00424c80 ; 00424c6d
        ;   XREF to: 00424c80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424c80(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00424c72
    POP EDI                             ; 00424c75
    POP EBX                             ; 00424c76
    RET                                 ; 00424c77

