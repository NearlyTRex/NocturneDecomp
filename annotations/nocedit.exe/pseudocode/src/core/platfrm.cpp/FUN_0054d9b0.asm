; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_platfrm_cpp_FUN_0054d9b0(void)
;
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   float FLOAT_00662280 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonCamera* g_CurrentSceneCamera
;   int g_FlatShadingLightLevel
;   CDemonRenderer g_CDemonRendererInstance
;   CEventList g_CEventListInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0326eef0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d9b0
        ;   Label: core_platfrm.cpp_FUN_0054d9b0
    PUSH ESI                            ; 0054d9b1
    SUB ESP,0x24                        ; 0054d9b2
    MOV ESI,dword ptr [ESP + 0x30]      ; 0054d9b5
    MOV EDX,dword ptr [0x006703ec]      ; 0054d9b9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0054d9bf | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0054d9c0
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054d9c5
    TEST EAX,EAX                        ; 0054d9c8
    JNZ 0x0054d9fe                      ; 0054d9ca
        ;   XREF to: 0054d9fe (CONDITIONAL_JUMP)  ; LAB_0054d9fe
    CMP dword ptr [ESP + 0x34],0x0      ; 0054d9cc
    JZ 0x0054d9fe                       ; 0054d9d1
        ;   XREF to: 0054d9fe (CONDITIONAL_JUMP)  ; LAB_0054d9fe
    CMP dword ptr [ESI + 0x4c0],0x2     ; 0054d9d3
    JGE 0x0054d9e5                      ; 0054d9da
        ;   XREF to: 0054d9e5 (CONDITIONAL_JUMP)  ; LAB_0054d9e5
    CMP dword ptr [ESI + 0x4c8],0x0     ; 0054d9dc
    JZ 0x0054d9fe                       ; 0054d9e3
        ;   XREF to: 0054d9fe (CONDITIONAL_JUMP)  ; LAB_0054d9fe
    CMP dword ptr [ESI + 0x4c8],0x0     ; 0054d9e5
        ;   Label: LAB_0054d9e5
    JZ 0x0054da38                       ; 0054d9ec
        ;   XREF to: 0054da38 (CONDITIONAL_JUMP)  ; LAB_0054da38
    MOV EAX,dword ptr [ESI + 0x2d4]     ; 0054d9ee
    CMP EAX,0x3                         ; 0054d9f4
    JZ 0x0054d9fe                       ; 0054d9f7
        ;   XREF to: 0054d9fe (CONDITIONAL_JUMP)  ; LAB_0054d9fe
    CMP EAX,0x4                         ; 0054d9f9
    JNZ 0x0054da04                      ; 0054d9fc
        ;   XREF to: 0054da04 (CONDITIONAL_JUMP)  ; LAB_0054da04
    ADD ESP,0x24                        ; 0054d9fe
        ;   Label: LAB_0054d9fe
    POP ESI                             ; 0054da01
    POP EBX                             ; 0054da02
    RET                                 ; 0054da03
    LEA EAX,[ESI + 0x3b8]               ; 0054da04
        ;   Label: LAB_0054da04
    PUSH EAX                            ; 0054da0a
    MOV ECX,dword ptr [0x006793d0]      ; 0054da0b | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 0054da11 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054da12
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054da17
    TEST EAX,EAX                        ; 0054da1a
    JNZ 0x0054d9fe                      ; 0054da1c
        ;   XREF to: 0054d9fe (CONDITIONAL_JUMP)  ; LAB_0054d9fe
    LEA EAX,[ESI + 0x354]               ; 0054da1e
    PUSH EAX                            ; 0054da24
    MOV EBX,dword ptr [0x006793d0]      ; 0054da25 | g_CEventListInstance | g_CEventListPtr
    PUSH EBX                            ; 0054da2b | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054da2c
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054da31
    TEST EAX,EAX                        ; 0054da34
    JNZ 0x0054d9fe                      ; 0054da36
        ;   XREF to: 0054d9fe (CONDITIONAL_JUMP)  ; LAB_0054d9fe
    PUSH EDI                            ; 0054da38
        ;   Label: LAB_0054da38
    MOV EDI,dword ptr [0x006703ec]      ; 0054da39 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0054da3f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0054da40
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054da45
    TEST EAX,EAX                        ; 0054da48
    JNZ 0x0054da63                      ; 0054da4a
        ;   XREF to: 0054da63 (CONDITIONAL_JUMP)  ; LAB_0054da63
    CMP dword ptr [ESI + 0x4c8],0x0     ; 0054da4c
    JNZ 0x0054db38                      ; 0054da53
        ;   XREF to: 0054db38 (CONDITIONAL_JUMP)  ; LAB_0054db38
    MOV dword ptr [ESI + 0x4c0],0x3     ; 0054da59
    PUSH ESI                            ; 0054da63
        ;   Label: LAB_0054da63
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0054da64
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0054da69
    LEA EAX,[ESP + 0x4]                 ; 0054da6c
    PUSH EAX                            ; 0054da70
    MOV EBX,dword ptr [ESI + 0x154]     ; 0054da71
    PUSH ESI                            ; 0054da77
    CALL dword ptr [EBX + 0x14]         ; 0054da78
    ADD ESP,0x8                         ; 0054da7b
    PUSH EAX                            ; 0054da7e
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0054da7f
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0054da84
    TEST EAX,EAX                        ; 0054da87
    JZ 0x0054db28                       ; 0054da89
        ;   XREF to: 0054db28 (CONDITIONAL_JUMP)  ; LAB_0054db28
    CMP dword ptr [ESI + 0x514],0x0     ; 0054da8f
    JZ 0x0054db47                       ; 0054da96
        ;   XREF to: 0054db47 (CONDITIONAL_JUMP)  ; LAB_0054db47
    MOV EDX,dword ptr [0x006703ec]      ; 0054da9c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0054daa2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0054daa3
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054daa8
    TEST EAX,EAX                        ; 0054daab
    JNZ 0x0054db47                      ; 0054daad
        ;   XREF to: 0054db47 (CONDITIONAL_JUMP)  ; LAB_0054db47
    MOV EAX,[0x006810c8]                ; 0054dab3 | g_CDemonSetPtr
    LEA EBX,[ESP + 0x1c]                ; 0054dab8
    MOV dword ptr [EAX + 0x15ac78],0x1  ; 0054dabc | DAT_0326eef0
    LEA EAX,[ESI + 0x20]                ; 0054dac6
    FLD float ptr [EAX]                 ; 0054dac9
    FMUL float ptr [0x00662280]         ; 0054dacb | FLOAT_00662280
    FISTP dword ptr [EBX]               ; 0054dad1
    FLD float ptr [EAX + 0x4]           ; 0054dad3
    FMUL float ptr [0x00662280]         ; 0054dad6 | FLOAT_00662280
    FISTP dword ptr [EBX + 0x4]         ; 0054dadc
    FLD float ptr [EAX + 0x8]           ; 0054dadf
    FMUL float ptr [0x00662280]         ; 0054dae2 | FLOAT_00662280
    FISTP dword ptr [EBX + 0x8]         ; 0054dae8
    PUSH 0x0                            ; 0054daeb
    LEA EBX,[ESP + 0x20]                ; 0054daed
    MOV EAX,[0x00823a74]                ; 0054daf1 | g_CurrentSceneCamera
    PUSH EBX                            ; 0054daf6
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0054daf7
    PUSH EAX                            ; 0054dafa
    CALL dword ptr [EDX + 0x8]          ; 0054dafb
    ADD ESP,0xc                         ; 0054dafe
    PUSH -0x1                           ; 0054db01
    MOV [0x015c2ea8],EAX                ; 0054db03 | g_FlatShadingLightLevel
    LEA EAX,[ESI + 0x158]               ; 0054db08
    PUSH 0x0                            ; 0054db0e
    PUSH EAX                            ; 0054db10
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0054db11
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    MOV EAX,[0x006810c8]                ; 0054db16 | g_CDemonSetInstance | g_CDemonSetPtr
    ADD ESP,0xc                         ; 0054db1b
    MOV dword ptr [EAX + 0x15ac78],0x0  ; 0054db1e | DAT_0326eef0
    PUSH ESI                            ; 0054db28
        ;   Label: LAB_0054db28
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0054db29
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054db2e
    POP EDI                             ; 0054db31
    ADD ESP,0x24                        ; 0054db32
    POP ESI                             ; 0054db35
    POP EBX                             ; 0054db36
    RET                                 ; 0054db37
    MOV dword ptr [ESI + 0x728],0x1     ; 0054db38
        ;   Label: LAB_0054db38
    JMP 0x0054da63                      ; 0054db42
        ;   XREF to: 0054da63 (UNCONDITIONAL_JUMP)  ; LAB_0054da63
    PUSH -0x1                           ; 0054db47
        ;   Label: LAB_0054db47
    LEA EAX,[ESI + 0x158]               ; 0054db49
    PUSH 0x0                            ; 0054db4f
    PUSH EAX                            ; 0054db51
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0054db52
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0054db57
    PUSH ESI                            ; 0054db5a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0054db5b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054db60
    POP EDI                             ; 0054db63
    ADD ESP,0x24                        ; 0054db64
    POP ESI                             ; 0054db67
    POP EBX                             ; 0054db68
    RET                                 ; 0054db69

