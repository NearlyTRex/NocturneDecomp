; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_platfrm.cpp_FUN_0054d720()
;
; Local Variables:
; undefined1       Stack[-0x54]:1  local_54
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   undefined4 DAT_02f33768
;
; Called Functions:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d720
        ;   Label: core_platfrm.cpp_FUN_0054d720
    PUSH ESI                            ; 0054d721
    PUSH EDI                            ; 0054d722
    SUB ESP,0x60                        ; 0054d723
    MOV EBX,dword ptr [ESP + 0x70]      ; 0054d726
    MOV EDX,dword ptr [0x006703ec]      ; 0054d72a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0054d730 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0054d731
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054d736
    TEST EAX,EAX                        ; 0054d739
    JZ 0x0054d74a                       ; 0054d73b
        ;   XREF to: 0054d74a (CONDITIONAL_JUMP)  ; LAB_0054d74a
    CMP dword ptr [EBX + 0x518],0x0     ; 0054d73d
    JZ 0x0054d963                       ; 0054d744
        ;   XREF to: 0054d963 (CONDITIONAL_JUMP)  ; LAB_0054d963
    CMP dword ptr [EBX + 0x4c0],0x2     ; 0054d74a
        ;   Label: LAB_0054d74a
    JG 0x0054d96c                       ; 0054d751
        ;   XREF to: 0054d96c (CONDITIONAL_JUMP)  ; LAB_0054d96c
    CMP dword ptr [EBX + 0x4c8],0x0     ; 0054d757
        ;   Label: LAB_0054d757
    JZ 0x0054d79c                       ; 0054d75e
        ;   XREF to: 0054d79c (CONDITIONAL_JUMP)  ; LAB_0054d79c
    MOV EAX,[0x0067d550]                ; 0054d760 | g_CDemonMissionPtr
    MOV EAX,dword ptr [EAX + 0x4]       ; 0054d765 | DAT_02f33744
    TEST EAX,EAX                        ; 0054d768
    JNZ 0x0054d79c                      ; 0054d76a
        ;   XREF to: 0054d79c (CONDITIONAL_JUMP)  ; LAB_0054d79c
    MOV EAX,dword ptr [EBX + 0x2d4]     ; 0054d76c
    CMP EAX,0x3                         ; 0054d772
    JZ 0x0054d79c                       ; 0054d775
        ;   XREF to: 0054d79c (CONDITIONAL_JUMP)  ; LAB_0054d79c
    CMP EAX,0x4                         ; 0054d777
    JZ 0x0054d79c                       ; 0054d77a
        ;   XREF to: 0054d79c (CONDITIONAL_JUMP)  ; LAB_0054d79c
    CMP dword ptr [EBX + 0x728],0x0     ; 0054d77c
    JZ 0x0054d79c                       ; 0054d783
        ;   XREF to: 0054d79c (CONDITIONAL_JUMP)  ; LAB_0054d79c
    MOV ESI,dword ptr [0x006703ec]      ; 0054d785 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0054d78b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0054d78c
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054d791
    TEST EAX,EAX                        ; 0054d794
    JZ 0x0054d95c                       ; 0054d796
        ;   XREF to: 0054d95c (CONDITIONAL_JUMP)  ; LAB_0054d95c
    PUSH EBX                            ; 0054d79c
        ;   Label: LAB_0054d79c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0054d79d
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0054d7a2
    LEA EAX,[ESP + 0x18]                ; 0054d7a5
    PUSH EAX                            ; 0054d7a9
    MOV EDX,dword ptr [EBX + 0x154]     ; 0054d7aa
    PUSH EBX                            ; 0054d7b0
    CALL dword ptr [EDX + 0x14]         ; 0054d7b1
    ADD ESP,0x8                         ; 0054d7b4
    PUSH EAX                            ; 0054d7b7
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0054d7b8
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0054d7bd
    MOV EDI,EAX                         ; 0054d7c0
    TEST EAX,EAX                        ; 0054d7c2
    JZ 0x0054d802                       ; 0054d7c4
        ;   XREF to: 0054d802 (CONDITIONAL_JUMP)  ; LAB_0054d802
    CMP dword ptr [EBX + 0x50c],0x0     ; 0054d7c6
    JZ 0x0054d98a                       ; 0054d7cd
        ;   XREF to: 0054d98a (CONDITIONAL_JUMP)  ; LAB_0054d98a
    MOV EAX,[0x006703ec]                ; 0054d7d3 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0054d7d8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0054d7d9
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054d7de
    TEST EAX,EAX                        ; 0054d7e1
    JZ 0x0054d98a                       ; 0054d7e3
        ;   XREF to: 0054d98a (CONDITIONAL_JUMP)  ; LAB_0054d98a
    MOV EAX,ESP                         ; 0054d7e9
    PUSH EAX                            ; 0054d7eb
    MOV EDX,dword ptr [EBX + 0x154]     ; 0054d7ec
    PUSH EBX                            ; 0054d7f2
    CALL dword ptr [EDX + 0x14]         ; 0054d7f3
    ADD ESP,0x8                         ; 0054d7f6
    PUSH EAX                            ; 0054d7f9
    CALL core_box.cpp_CBoundingBox3D_render_FUN_004210b0 ; 0054d7fa
        ;   XREF to: 004210b0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D * this_ptr, int param1, int param2, int param3)
    ADD ESP,0x4                         ; 0054d7ff
    PUSH EBX                            ; 0054d802
        ;   Label: LAB_0054d802
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0054d803
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV EAX,[0x0067d550]                ; 0054d808 | g_CDemonMissionInstance | g_CDemonMissionPtr
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054d80d | DAT_02f33744
    ADD ESP,0x4                         ; 0054d810
    TEST EDX,EDX                        ; 0054d813
    JZ 0x0054d95a                       ; 0054d815
        ;   XREF to: 0054d95a (CONDITIONAL_JUMP)  ; LAB_0054d95a
    MOV ECX,dword ptr [0x006703ec]      ; 0054d81b | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0054d821 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0054d822
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054d827
    TEST EAX,EAX                        ; 0054d82a
    JNZ 0x0054d95a                      ; 0054d82c
        ;   XREF to: 0054d95a (CONDITIONAL_JUMP)  ; LAB_0054d95a
    MOV EAX,[0x0067d550]                ; 0054d832 | g_CDemonMissionPtr
    MOV ESI,dword ptr [EAX + 0x28]      ; 0054d837 | DAT_02f33768
    CMP EBX,ESI                         ; 0054d83a
    JNZ 0x0054d95a                      ; 0054d83c
        ;   XREF to: 0054d95a (CONDITIONAL_JUMP)  ; LAB_0054d95a
    CMP byte ptr [ESI + 0x2f0],0x0      ; 0054d842
    JNZ 0x0054d95a                      ; 0054d849
        ;   XREF to: 0054d95a (CONDITIONAL_JUMP)  ; LAB_0054d95a
    LEA EDX,[ESI + 0x20]                ; 0054d84f
    MOV EAX,dword ptr [EDX]             ; 0054d852
    MOV dword ptr [ESP + 0x54],EAX      ; 0054d854
    LEA EAX,[EDX + 0x4]                 ; 0054d858
    MOV EAX,dword ptr [EAX]             ; 0054d85b
    MOV dword ptr [ESP + 0x58],EAX      ; 0054d85d
    LEA EAX,[EDX + 0x8]                 ; 0054d861
    MOV EAX,dword ptr [EAX]             ; 0054d864
    MOV dword ptr [ESP + 0x5c],EAX      ; 0054d866
    MOV EAX,dword ptr [ESI + 0x30]      ; 0054d86a
    ADD ESI,0x30                        ; 0054d86d
    MOV dword ptr [ESP + 0x30],EAX      ; 0054d870
    LEA EAX,[ESI + 0x4]                 ; 0054d874
    MOV EAX,dword ptr [EAX]             ; 0054d877
    MOV dword ptr [ESP + 0x34],EAX      ; 0054d879
    LEA EAX,[ESI + 0x8]                 ; 0054d87d
    MOV EAX,dword ptr [EAX]             ; 0054d880
    MOV dword ptr [ESP + 0x38],EAX      ; 0054d882
    LEA EAX,[EBX + 0x31c]               ; 0054d886
    MOV ECX,dword ptr [EAX]             ; 0054d88c
    MOV dword ptr [EDX],ECX             ; 0054d88e
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054d890
    MOV dword ptr [EDX + 0x4],ECX       ; 0054d893
    FLD float ptr [EAX + 0x8]           ; 0054d896
    LEA EAX,[EBX + 0x334]               ; 0054d899
    PUSH EAX                            ; 0054d89f
    LEA EAX,[ESP + 0x40]                ; 0054d8a0
    PUSH EAX                            ; 0054d8a4
    FSTP float ptr [EDX + 0x8]          ; 0054d8a5
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 0054d8a8
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f * euler_out, CQuaternion4f * quat_ptr)
    ADD ESP,0x8                         ; 0054d8ad
    CMP ESI,EAX                         ; 0054d8b0
    JZ 0x0054d8c4                       ; 0054d8b2
        ;   XREF to: 0054d8c4 (CONDITIONAL_JUMP)  ; LAB_0054d8c4
    MOV EDX,dword ptr [EAX]             ; 0054d8b4
    MOV dword ptr [ESI],EDX             ; 0054d8b6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054d8b8
    MOV dword ptr [ESI + 0x4],EDX       ; 0054d8bb
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054d8be
    MOV dword ptr [ESI + 0x8],EDX       ; 0054d8c1
    PUSH 0xfa                           ; 0054d8c4
        ;   Label: LAB_0054d8c4
    PUSH EBX                            ; 0054d8c9
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 0054d8ca
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    LEA EDX,[EBX + 0x20]                ; 0054d8cf
    LEA EAX,[EBX + 0x328]               ; 0054d8d2
    ADD ESP,0x8                         ; 0054d8d8
    MOV ECX,dword ptr [EAX]             ; 0054d8db
    MOV dword ptr [EDX],ECX             ; 0054d8dd
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054d8df
    MOV dword ptr [EDX + 0x4],ECX       ; 0054d8e2
    FLD float ptr [EAX + 0x8]           ; 0054d8e5
    LEA EAX,[EBX + 0x344]               ; 0054d8e8
    PUSH EAX                            ; 0054d8ee
    LEA EAX,[ESP + 0x4c]                ; 0054d8ef
    PUSH EAX                            ; 0054d8f3
    FSTP float ptr [EDX + 0x8]          ; 0054d8f4
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 0054d8f7
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f * euler_out, CQuaternion4f * quat_ptr)
    LEA EDX,[EBX + 0x30]                ; 0054d8fc
    ADD ESP,0x8                         ; 0054d8ff
    CMP EDX,EAX                         ; 0054d902
    JZ 0x0054d916                       ; 0054d904
        ;   XREF to: 0054d916 (CONDITIONAL_JUMP)  ; LAB_0054d916
    MOV ECX,dword ptr [EAX]             ; 0054d906
    MOV dword ptr [EDX],ECX             ; 0054d908
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054d90a
    MOV dword ptr [EDX + 0x4],ECX       ; 0054d90d
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054d910
    MOV dword ptr [EDX + 0x8],ECX       ; 0054d913
    PUSH 0xf9                           ; 0054d916
        ;   Label: LAB_0054d916
    PUSH EBX                            ; 0054d91b
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 0054d91c
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    ADD ESP,0x8                         ; 0054d921
    LEA EDX,[EBX + 0x20]                ; 0054d924
    MOV EAX,dword ptr [ESP + 0x54]      ; 0054d927
    MOV dword ptr [EDX],EAX             ; 0054d92b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054d92d
    MOV dword ptr [EDX + 0x4],EAX       ; 0054d931
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0054d934
    ADD EBX,0x30                        ; 0054d938
    MOV dword ptr [EDX + 0x8],EAX       ; 0054d93b
    LEA EAX,[ESP + 0x30]                ; 0054d93e
    CMP EBX,EAX                         ; 0054d942
    JZ 0x0054d95a                       ; 0054d944
        ;   XREF to: 0054d95a (CONDITIONAL_JUMP)  ; LAB_0054d95a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0054d946
    MOV dword ptr [EBX],EAX             ; 0054d94a
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054d94c
    MOV dword ptr [EBX + 0x4],EAX       ; 0054d950
    MOV EAX,dword ptr [ESP + 0x38]      ; 0054d953
    MOV dword ptr [EBX + 0x8],EAX       ; 0054d957
    MOV EAX,EDI                         ; 0054d95a
        ;   Label: LAB_0054d95a
    ADD ESP,0x60                        ; 0054d95c
        ;   Label: LAB_0054d95c
    POP EDI                             ; 0054d95f
    POP ESI                             ; 0054d960
    POP EBX                             ; 0054d961
    RET                                 ; 0054d962
    XOR EAX,EAX                         ; 0054d963
        ;   Label: LAB_0054d963
    ADD ESP,0x60                        ; 0054d965
    POP EDI                             ; 0054d968
    POP ESI                             ; 0054d969
    POP EBX                             ; 0054d96a
    RET                                 ; 0054d96b
    MOV EDI,dword ptr [0x006703ec]      ; 0054d96c | g_CDemonRendererPtr2
        ;   Label: LAB_0054d96c
    PUSH EDI                            ; 0054d972 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0054d973
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054d978
    TEST EAX,EAX                        ; 0054d97b
    JNZ 0x0054d757                      ; 0054d97d
        ;   XREF to: 0054d757 (CONDITIONAL_JUMP)  ; LAB_0054d757
    ADD ESP,0x60                        ; 0054d983
    POP EDI                             ; 0054d986
    POP ESI                             ; 0054d987
    POP EBX                             ; 0054d988
    RET                                 ; 0054d989
    PUSH -0x1                           ; 0054d98a
        ;   Label: LAB_0054d98a
    LEA EAX,[EBX + 0x158]               ; 0054d98c
    PUSH 0x0                            ; 0054d992
    PUSH EAX                            ; 0054d994
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0054d995
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0054d99a
    JMP 0x0054d802                      ; 0054d99d
        ;   XREF to: 0054d802 (UNCONDITIONAL_JUMP)  ; LAB_0054d802

