; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; uint             Stack[0xc]:4   render_flags
; int              Stack[0x10]:4   lighting_mode
; int              Stack[0x14]:4   render_pass
;
; XREF[12]:
;   core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0 at 005a190f
;   core_baal.cpp_CBaal_renderTransparent_FUN_00597970 at 00597ab2
;   core_charactr.cpp_FUN_0042d8e0 at 0042d92b
;   core_charactr.cpp_FUN_0042f010 at 0042f1d0
;   core_hecaitmx.cpp_CHecaitomix_renderTransparent_FUN_00598480 at 00598530
;   core_hino.cpp_CHino_renderTransparent_FUN_0059d120 at 0059d2c4
;   core_kedward.cpp_CKedward_renderTransparent_FUN_00591680 at 005917b6
;   core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710 at 00593896
;   core_npc.cpp_CNPC_renderTransparent_FUN_005095f0 at 0050974f
;   core_shadow.cpp_FUN_00545710 at 0054588b
;   ... and 2 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0054af10
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0054e550
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0054e4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e3a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
    PUSH ESI                            ; 0054e3a1
    PUSH EDI                            ; 0054e3a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054e3a3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054e3a7
    MOV ESI,EAX                         ; 0054e3ab
    TEST EAX,EAX                        ; 0054e3ad
    JL 0x0054e3e7                       ; 0054e3af
        ;   XREF to: 0054e3e7 (CONDITIONAL_JUMP)  ; LAB_0054e3e7
    PUSH ESI                            ; 0054e3b1
        ;   Label: LAB_0054e3b1
    PUSH EBX                            ; 0054e3b2
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0054e4b0 ; 0054e3b3
        ;   XREF to: 0054e4b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0054e4b0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054e3b8
    CMP dword ptr [ESP + 0x1c],0x0      ; 0054e3bb
    JNZ 0x0054e404                      ; 0054e3c0
        ;   XREF to: 0054e404 (CONDITIONAL_JUMP)  ; LAB_0054e404
    CMP dword ptr [ESP + 0x18],0x0      ; 0054e3c2
    JL 0x0054e410                       ; 0054e3c7
        ;   XREF to: 0054e410 (CONDITIONAL_JUMP)  ; LAB_0054e410
    TEST byte ptr [ESP + 0x19],0x1      ; 0054e3c9
    JZ 0x0054e410                       ; 0054e3ce
        ;   XREF to: 0054e410 (CONDITIONAL_JUMP)  ; LAB_0054e410
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054e3d0
        ;   Label: LAB_0054e3d0
    PUSH ESI                            ; 0054e3d4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054e3d5
    PUSH EDI                            ; 0054e3d9
    PUSH EBX                            ; 0054e3da
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0 ; 0054e3db
        ;   XREF to: 0054e5a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0(CDeformableModelInstance * this_ptr, int render_flags, int skip_texture_capture)
    ADD ESP,0xc                         ; 0054e3e0
    POP EDI                             ; 0054e3e3
    POP ESI                             ; 0054e3e4
    POP EBX                             ; 0054e3e5
    RET                                 ; 0054e3e6
    LEA EAX,[EBX + 0x2328]              ; 0054e3e7
        ;   Label: LAB_0054e3e7
    PUSH EAX                            ; 0054e3ed
    PUSH EBX                            ; 0054e3ee
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054e3ef
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e3f4
    PUSH EAX                            ; 0054e3f7
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0054af10 ; 0054e3f8
        ;   XREF to: 0054af10 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0054af10(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 0054e3fd
    MOV ESI,EAX                         ; 0054e400
    JMP 0x0054e3b1                      ; 0054e402
        ;   XREF to: 0054e3b1 (UNCONDITIONAL_JUMP)  ; LAB_0054e3b1
    PUSH ESI                            ; 0054e404
        ;   Label: LAB_0054e404
    PUSH EBX                            ; 0054e405
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500 ; 0054e406
        ;   XREF to: 0054e500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054e40b
    JMP 0x0054e3d0                      ; 0054e40e
        ;   XREF to: 0054e3d0 (UNCONDITIONAL_JUMP)  ; LAB_0054e3d0
    PUSH ESI                            ; 0054e410
        ;   Label: LAB_0054e410
    PUSH EBX                            ; 0054e411
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0054e550 ; 0054e412
        ;   XREF to: 0054e550 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0054e550(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054e417
    JMP 0x0054e3d0                      ; 0054e41a
        ;   XREF to: 0054e3d0 (UNCONDITIONAL_JUMP)  ; LAB_0054e3d0

