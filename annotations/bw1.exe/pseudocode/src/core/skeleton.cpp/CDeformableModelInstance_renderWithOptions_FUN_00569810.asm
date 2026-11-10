; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; uint             Stack[0xc]:4   render_flags
; int              Stack[0x10]:4   lighting_mode
; int              Stack[0x14]:4   render_pass
;
; XREF[11]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_004101f0 at 00410370
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413970 at 00413b01
;   core_charactr.cpp_CCharacter_renderBurn_FUN_0042fe00 at 0042ffc0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 at 0042e9de
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0047cfe0 at 0047d180
;   core_mimic.cpp_CMimic_renderBackground_FUN_00510910 at 00510983
;   core_mimic.cpp_CMimic_renderMirrored_FUN_00510620 at 00510738
;   core_shadow.cpp_CShadow_renderTransparent_FUN_0055fc60 at 0055fd51
;   core_shadowsc.cpp_CShadowsc_renderTransparent_FUN_005611a0 at 0056127f
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_00592aa0 at 00592b3a
;   ... and 1 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00566380
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005699c0
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_00569970
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569810
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
    PUSH ESI                            ; 00569811
    PUSH EDI                            ; 00569812
    MOV EBX,dword ptr [ESP + 0x10]      ; 00569813
    MOV EAX,dword ptr [ESP + 0x14]      ; 00569817
    MOV ESI,EAX                         ; 0056981b
    TEST EAX,EAX                        ; 0056981d
    JL 0x00569857                       ; 0056981f
        ;   XREF to: 00569857 (CONDITIONAL_JUMP)  ; LAB_00569857
    PUSH ESI                            ; 00569821
        ;   Label: LAB_00569821
    PUSH EBX                            ; 00569822
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920 ; 00569823
        ;   XREF to: 00569920 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00569828
    CMP dword ptr [ESP + 0x1c],0x0      ; 0056982b
    JNZ 0x00569874                      ; 00569830
        ;   XREF to: 00569874 (CONDITIONAL_JUMP)  ; LAB_00569874
    CMP dword ptr [ESP + 0x18],0x0      ; 00569832
    JL 0x00569880                       ; 00569837
        ;   XREF to: 00569880 (CONDITIONAL_JUMP)  ; LAB_00569880
    TEST byte ptr [ESP + 0x19],0x1      ; 00569839
    JZ 0x00569880                       ; 0056983e
        ;   XREF to: 00569880 (CONDITIONAL_JUMP)  ; LAB_00569880
    MOV ESI,dword ptr [ESP + 0x20]      ; 00569840
        ;   Label: LAB_00569840
    PUSH ESI                            ; 00569844
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00569845
    PUSH EDI                            ; 00569849
    PUSH EBX                            ; 0056984a
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10 ; 0056984b
        ;   XREF to: 00569a10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10(CDeformableModelInstance * this_ptr, int render_flags, int skip_texture_capture)
    ADD ESP,0xc                         ; 00569850
    POP EDI                             ; 00569853
    POP ESI                             ; 00569854
    POP EBX                             ; 00569855
    RET                                 ; 00569856
    LEA EAX,[EBX + 0x2328]              ; 00569857
        ;   Label: LAB_00569857
    PUSH EAX                            ; 0056985d
    PUSH EBX                            ; 0056985e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0056985f
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569864
    PUSH EAX                            ; 00569867
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00566380 ; 00569868
        ;   XREF to: 00566380 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00566380(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 0056986d
    MOV ESI,EAX                         ; 00569870
    JMP 0x00569821                      ; 00569872
        ;   XREF to: 00569821 (UNCONDITIONAL_JUMP)  ; LAB_00569821
    PUSH ESI                            ; 00569874
        ;   Label: LAB_00569874
    PUSH EBX                            ; 00569875
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_00569970 ; 00569876
        ;   XREF to: 00569970 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_00569970(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0056987b
    JMP 0x00569840                      ; 0056987e
        ;   XREF to: 00569840 (UNCONDITIONAL_JUMP)  ; LAB_00569840
    PUSH ESI                            ; 00569880
        ;   Label: LAB_00569880
    PUSH EBX                            ; 00569881
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005699c0 ; 00569882
        ;   XREF to: 005699c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005699c0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00569887
    JMP 0x00569840                      ; 0056988a
        ;   XREF to: 00569840 (UNCONDITIONAL_JUMP)  ; LAB_00569840

