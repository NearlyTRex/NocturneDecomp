; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 (CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode, int render_pass)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; uint             Stack[0xc]:4   render_flags
; int              Stack[0x10]:4   lighting_mode
; int              Stack[0x14]:4   render_pass
;
; XREF[11]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413c4c
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 0041752e
;   core_charactr.cpp_CCharacter_FUN_00429aa0 at 00429b15
;   core_charactr.cpp_CCharacter_FUN_0042ad00 at 0042aec0
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043cae4
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 at 00485d6d
;   core_mimic.cpp_CMimic_FUN_005205f0 at 005206f7
;   core_mimic.cpp_FUN_005208b0 at 00520907
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005971ca
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 at 005c760e
;   ... and 1 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0150
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
    PUSH ESI                            ; 005a0151
    PUSH EDI                            ; 005a0152
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a0153
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a0157
    MOV ESI,EAX                         ; 005a015b
    TEST EAX,EAX                        ; 005a015d
    JL 0x005a0197                       ; 005a015f
        ;   XREF to: 005a0197 (CONDITIONAL_JUMP)  ; LAB_005a0197
    PUSH ESI                            ; 005a0161
        ;   Label: LAB_005a0161
    PUSH EBX                            ; 005a0162
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250 ; 005a0163
        ;   XREF to: 005a0250 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a0168
    CMP dword ptr [ESP + 0x1c],0x0      ; 005a016b
    JNZ 0x005a01b4                      ; 005a0170
        ;   XREF to: 005a01b4 (CONDITIONAL_JUMP)  ; LAB_005a01b4
    CMP dword ptr [ESP + 0x18],0x0      ; 005a0172
    JL 0x005a01c0                       ; 005a0177
        ;   XREF to: 005a01c0 (CONDITIONAL_JUMP)  ; LAB_005a01c0
    TEST byte ptr [ESP + 0x19],0x1      ; 005a0179
    JZ 0x005a01c0                       ; 005a017e
        ;   XREF to: 005a01c0 (CONDITIONAL_JUMP)  ; LAB_005a01c0
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a0180
        ;   Label: LAB_005a0180
    PUSH ESI                            ; 005a0184
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a0185
    PUSH EDI                            ; 005a0189
    PUSH EBX                            ; 005a018a
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340 ; 005a018b
        ;   XREF to: 005a0340 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(CDeformableModelInstance * this_ptr)
    ADD ESP,0xc                         ; 005a0190
    POP EDI                             ; 005a0193
    POP ESI                             ; 005a0194
    POP EBX                             ; 005a0195
    RET                                 ; 005a0196
    LEA EAX,[EBX + 0x2238]              ; 005a0197
        ;   Label: LAB_005a0197
    PUSH EAX                            ; 005a019d
    PUSH EBX                            ; 005a019e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a019f
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a01a4
    PUSH EAX                            ; 005a01a7
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40 ; 005a01a8
        ;   XREF to: 0059ce40 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 005a01ad
    MOV ESI,EAX                         ; 005a01b0
    JMP 0x005a0161                      ; 005a01b2
        ;   XREF to: 005a0161 (UNCONDITIONAL_JUMP)  ; LAB_005a0161
    PUSH ESI                            ; 005a01b4
        ;   Label: LAB_005a01b4
    PUSH EBX                            ; 005a01b5
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0 ; 005a01b6
        ;   XREF to: 005a02a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a01bb
    JMP 0x005a0180                      ; 005a01be
        ;   XREF to: 005a0180 (UNCONDITIONAL_JUMP)  ; LAB_005a0180
    PUSH ESI                            ; 005a01c0
        ;   Label: LAB_005a01c0
    PUSH EBX                            ; 005a01c1
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0 ; 005a01c2
        ;   XREF to: 005a02f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a01c7
    JMP 0x005a0180                      ; 005a01ca
        ;   XREF to: 005a0180 (UNCONDITIONAL_JUMP)  ; LAB_005a0180

