; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; uint             Stack[0xc]:4   render_flags
; int              Stack[0x10]:4   lighting_mode
; int              Stack[0x14]:4   render_pass
;
; XREF[10]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 004107f0
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413c70 at 00413e01
;   core_charactr.cpp_CCharacter_renderBurn_FUN_004264d0 at 00426690
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0 at 00424c4e
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00464ac0 at 00464c60
;   core_mimic.cpp_CMimic_renderBackground_FUN_004f1b80 at 004f1bf3
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890 at 004f19a8
;   core_shadow.cpp_FUN_0053e6c0 at 0053e7b1
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_0056fe50 at 0056feea
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_00582ec0 at 00582f48
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00543d00
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547170
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
    PUSH ESI                            ; 00547171
    PUSH EDI                            ; 00547172
    MOV EBX,dword ptr [ESP + 0x10]      ; 00547173
    MOV EAX,dword ptr [ESP + 0x14]      ; 00547177
    MOV ESI,EAX                         ; 0054717b
    TEST EAX,EAX                        ; 0054717d
    JL 0x005471b7                       ; 0054717f
        ;   XREF to: 005471b7 (CONDITIONAL_JUMP)  ; LAB_005471b7
    PUSH ESI                            ; 00547181
        ;   Label: LAB_00547181
    PUSH EBX                            ; 00547182
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280 ; 00547183
        ;   XREF to: 00547280 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00547188
    CMP dword ptr [ESP + 0x1c],0x0      ; 0054718b
    JNZ 0x005471d4                      ; 00547190
        ;   XREF to: 005471d4 (CONDITIONAL_JUMP)  ; LAB_005471d4
    CMP dword ptr [ESP + 0x18],0x0      ; 00547192
    JL 0x005471e0                       ; 00547197
        ;   XREF to: 005471e0 (CONDITIONAL_JUMP)  ; LAB_005471e0
    TEST byte ptr [ESP + 0x19],0x1      ; 00547199
    JZ 0x005471e0                       ; 0054719e
        ;   XREF to: 005471e0 (CONDITIONAL_JUMP)  ; LAB_005471e0
    MOV ESI,dword ptr [ESP + 0x20]      ; 005471a0
        ;   Label: LAB_005471a0
    PUSH ESI                            ; 005471a4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005471a5
    PUSH EDI                            ; 005471a9
    PUSH EBX                            ; 005471aa
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370 ; 005471ab
        ;   XREF to: 00547370 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370(CDeformableModelInstance * this_ptr, int render_flags, int skip_texture_capture)
    ADD ESP,0xc                         ; 005471b0
    POP EDI                             ; 005471b3
    POP ESI                             ; 005471b4
    POP EBX                             ; 005471b5
    RET                                 ; 005471b6
    LEA EAX,[EBX + 0x2238]              ; 005471b7
        ;   Label: LAB_005471b7
    PUSH EAX                            ; 005471bd
    PUSH EBX                            ; 005471be
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 005471bf
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005471c4
    PUSH EAX                            ; 005471c7
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00543d00 ; 005471c8
        ;   XREF to: 00543d00 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00543d00(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 005471cd
    MOV ESI,EAX                         ; 005471d0
    JMP 0x00547181                      ; 005471d2
        ;   XREF to: 00547181 (UNCONDITIONAL_JUMP)  ; LAB_00547181
    PUSH ESI                            ; 005471d4
        ;   Label: LAB_005471d4
    PUSH EBX                            ; 005471d5
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0 ; 005471d6
        ;   XREF to: 005472d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005471db
    JMP 0x005471a0                      ; 005471de
        ;   XREF to: 005471a0 (UNCONDITIONAL_JUMP)  ; LAB_005471a0
    PUSH ESI                            ; 005471e0
        ;   Label: LAB_005471e0
    PUSH EBX                            ; 005471e1
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320 ; 005471e2
        ;   XREF to: 00547320 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005471e7
    JMP 0x005471a0                      ; 005471ea
        ;   XREF to: 005471a0 (UNCONDITIONAL_JUMP)  ; LAB_005471a0

