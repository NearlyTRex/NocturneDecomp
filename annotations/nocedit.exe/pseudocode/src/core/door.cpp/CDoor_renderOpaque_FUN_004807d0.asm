; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_004807d0(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CEditorTools g_CEditorToolsInstance
;   int g_ActiveRenderColor
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   undefined4 DAT_02f33768
;
; Called Functions:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_door.cpp_CDoor_reposition_FUN_0047fd20
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004807d0
        ;   Label: core_door.cpp_CDoor_renderOpaque_FUN_004807d0
    PUSH ESI                            ; 004807d1
    PUSH EDI                            ; 004807d2
    PUSH EBP                            ; 004807d3
    MOV EBP,ESP                         ; 004807d4
    SUB ESP,0x4c                        ; 004807d6
    AND ESP,0xfffffff8                  ; 004807d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004807dc
    CMP dword ptr [EBX + 0x9c8],0x2     ; 004807df
    JLE 0x004807f1                      ; 004807e6
        ;   XREF to: 004807f1 (CONDITIONAL_JUMP)  ; LAB_004807f1
    XOR EAX,EAX                         ; 004807e8
    MOV ESP,EBP                         ; 004807ea
    POP EBP                             ; 004807ec
    POP EDI                             ; 004807ed
    POP ESI                             ; 004807ee
    POP EBX                             ; 004807ef
    RET                                 ; 004807f0
    PUSH EBX                            ; 004807f1
        ;   Label: LAB_004807f1
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004807f2
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004807f7
    LEA ESI,[ESP + 0x4]                 ; 004807fa
    PUSH ESI                            ; 004807fe
    MOV EAX,dword ptr [EBX + 0x154]     ; 004807ff
    PUSH EBX                            ; 00480805
    CALL dword ptr [EAX + 0x14]         ; 00480806
    ADD ESP,0x8                         ; 00480809
    PUSH EAX                            ; 0048080c
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0048080d
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00480812
    MOV EDI,EAX                         ; 00480815
    TEST EAX,EAX                        ; 00480817
    JZ 0x0048085a                       ; 00480819
        ;   XREF to: 0048085a (CONDITIONAL_JUMP)  ; LAB_0048085a
    CMP dword ptr [EBX + 0x9d4],0x0     ; 0048081b
    JZ 0x004809c5                       ; 00480822
        ;   XREF to: 004809c5 (CONDITIONAL_JUMP)  ; LAB_004809c5
    MOV ESI,dword ptr [0x006703ec]      ; 00480828 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0048082e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0048082f
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00480834
    TEST EAX,EAX                        ; 00480837
    JZ 0x004809c5                       ; 00480839
        ;   XREF to: 004809c5 (CONDITIONAL_JUMP)  ; LAB_004809c5
    LEA EAX,[ESP + 0x1c]                ; 0048083f
    PUSH EAX                            ; 00480843
    MOV ESI,dword ptr [EBX + 0x154]     ; 00480844
    PUSH EBX                            ; 0048084a
    CALL dword ptr [ESI + 0x14]         ; 0048084b
    ADD ESP,0x8                         ; 0048084e
    PUSH EAX                            ; 00480851
    CALL core_box.cpp_CBoundingBox3D_render_FUN_004210b0 ; 00480852
        ;   XREF to: 004210b0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D * this_ptr, int param1, int param2, int param3)
    ADD ESP,0x4                         ; 00480857
    PUSH EBX                            ; 0048085a
        ;   Label: LAB_0048085a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0048085b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00480860
    TEST EDI,EDI                        ; 00480863
    JZ 0x004809bc                       ; 00480865
        ;   XREF to: 004809bc (CONDITIONAL_JUMP)  ; LAB_004809bc
    MOV EAX,[0x0067d550]                ; 0048086b | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 00480870 | DAT_02f33744
    JZ 0x004809bc                       ; 00480874
        ;   XREF to: 004809bc (CONDITIONAL_JUMP)  ; LAB_004809bc
    MOV ECX,dword ptr [0x006703ec]      ; 0048087a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00480880 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00480881
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00480886
    TEST EAX,EAX                        ; 00480889
    JNZ 0x004809bc                      ; 0048088b
        ;   XREF to: 004809bc (CONDITIONAL_JUMP)  ; LAB_004809bc
    MOV EAX,[0x0067d550]                ; 00480891 | g_CDemonMissionPtr
    MOV ESI,dword ptr [EAX + 0x28]      ; 00480896 | DAT_02f33768
    CMP EBX,ESI                         ; 00480899
    JNZ 0x004809bc                      ; 0048089b
        ;   XREF to: 004809bc (CONDITIONAL_JUMP)  ; LAB_004809bc
    MOV EAX,dword ptr [ESI + 0x9ac]     ; 004808a1
    MOV dword ptr [ESP],EAX             ; 004808a7
    FLD float ptr [ESP]                 ; 004808aa
    FLDZ                                ; 004808ad
    FCOMPP                              ; 004808af
    FNSTSW AX                           ; 004808b1
    SAHF                                ; 004808b3
    JNC 0x004808d4                      ; 004808b4
        ;   XREF to: 004808d4 (CONDITIONAL_JUMP)  ; LAB_004808d4
    PUSH ESI                            ; 004808b6
    MOV dword ptr [ESI + 0x9ac],0x0     ; 004808b7
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 004808c1
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004808c6
    PUSH 0x2                            ; 004808c9
    PUSH ESI                            ; 004808cb
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 004808cc
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    ADD ESP,0x8                         ; 004808d1
    FLD float ptr [ESP]                 ; 004808d4
        ;   Label: LAB_004808d4
    FCOMP float ptr [EBX + 0x9b0]       ; 004808d7
    FNSTSW AX                           ; 004808dd
    SAHF                                ; 004808df
    JNC 0x00480902                      ; 004808e0
        ;   XREF to: 00480902 (CONDITIONAL_JUMP)  ; LAB_00480902
    FLD float ptr [EBX + 0x9b0]         ; 004808e2
    PUSH EBX                            ; 004808e8
    FSTP float ptr [EBX + 0x9ac]        ; 004808e9
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 004808ef
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004808f4
    PUSH 0x1                            ; 004808f7
    PUSH EBX                            ; 004808f9
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 004808fa
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    ADD ESP,0x8                         ; 004808ff
    PUSH EBX                            ; 00480902
        ;   Label: LAB_00480902
    MOV dword ptr [EBX + 0x9ac],0x0     ; 00480903
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 0048090d
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00480912
    PUSH EBX                            ; 00480915
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00480916
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0048091b
    MOV EAX,0x2                         ; 0048091e
    PUSH EAX                            ; 00480923
    LEA ESI,[EBX + 0x9bc]               ; 00480924
    PUSH ESI                            ; 0048092a
    MOV [0x02d02570],EAX                ; 0048092b | g_ActiveRenderColor
    LEA EAX,[ESP + 0x3c]                ; 00480930
    PUSH EAX                            ; 00480934
    PUSH EBX                            ; 00480935
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00480936
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0048093b
    PUSH EAX                            ; 0048093e
    MOV EDX,dword ptr [0x00678a60]      ; 0048093f | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 00480945 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0 ; 00480946
        ;   XREF to: 004a28a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0(CEditorTools * this_ptr, CQuaternion4f * world_point, int line_length)
    ADD ESP,0xc                         ; 0048094b
    PUSH EBX                            ; 0048094e
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0048094f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00480954
    FLD float ptr [EBX + 0x9b0]         ; 00480957
    PUSH EBX                            ; 0048095d
    FSTP float ptr [EBX + 0x9ac]        ; 0048095e
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 00480964
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00480969
    PUSH EBX                            ; 0048096c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0048096d
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00480972
    PUSH 0x2                            ; 00480975
    PUSH ESI                            ; 00480977
    LEA EAX,[ESP + 0x48]                ; 00480978
    PUSH EAX                            ; 0048097c
    MOV ECX,0x1                         ; 0048097d
    PUSH EBX                            ; 00480982
    MOV dword ptr [0x02d02570],ECX      ; 00480983 | g_ActiveRenderColor
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00480989
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0048098e
    PUSH EAX                            ; 00480991
    MOV ESI,dword ptr [0x00678a60]      ; 00480992 | g_CEditorToolsPtr
    PUSH ESI                            ; 00480998 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0 ; 00480999
        ;   XREF to: 004a28a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0(CEditorTools * this_ptr, CQuaternion4f * world_point, int line_length)
    ADD ESP,0xc                         ; 0048099e
    PUSH EBX                            ; 004809a1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004809a2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004809a7
    MOV EAX,dword ptr [ESP]             ; 004809aa
    PUSH EBX                            ; 004809ad
    MOV dword ptr [EBX + 0x9ac],EAX     ; 004809ae
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 004809b4
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004809b9
    MOV EAX,EDI                         ; 004809bc
        ;   Label: LAB_004809bc
    MOV ESP,EBP                         ; 004809be
    POP EBP                             ; 004809c0
    POP EDI                             ; 004809c1
    POP ESI                             ; 004809c2
    POP EBX                             ; 004809c3
    RET                                 ; 004809c4
    PUSH -0x1                           ; 004809c5
        ;   Label: LAB_004809c5
    LEA EAX,[EBX + 0x158]               ; 004809c7
    PUSH 0x0                            ; 004809cd
    PUSH EAX                            ; 004809cf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004809d0
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004809d5
    JMP 0x0048085a                      ; 004809d8
        ;   XREF to: 0048085a (UNCONDITIONAL_JUMP)  ; LAB_0048085a

