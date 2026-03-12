; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_004a8860(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; Local Variables:
; SLaserInfo       Stack[-0xd0]:84  local_d0
; SLaserInfo       Stack[-0x7c]:84  local_7c
; CVector3f        Stack[-0x28]:12  local_28
; CVector3f        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CEditorTools g_CEditorToolsInstance
;   int g_SlewTargetMode
;   CVector3f g_EmitterTarget
;   UOrientationVector UNION_UOrientationVector_02cf2b6c
;   CEmitter* PTR_02cf2b78
;   CFireEffect g_CFireEffectInstance
;   undefined4 DAT_02f33744
;   undefined4 DAT_02f33768
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230
;   core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8860
        ;   Label: core_emitter.cpp_CEmitter_renderOpaque_FUN_004a8860
    PUSH ESI                            ; 004a8861
    PUSH EDI                            ; 004a8862
    PUSH EBP                            ; 004a8863
    MOV EBP,ESP                         ; 004a8864
    SUB ESP,0xc0                        ; 004a8866
    SUB EBP,0x7e                        ; 004a886c
    MOV EBX,dword ptr [EBP + 0x92]      ; 004a886f
    MOV EDX,dword ptr [0x006703ec]      ; 004a8875 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004a887b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004a887c
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a8881
    TEST EAX,EAX                        ; 004a8884
    JNZ 0x004a88a9                      ; 004a8886
        ;   XREF to: 004a88a9 (CONDITIONAL_JUMP)  ; LAB_004a88a9
    CMP dword ptr [EBX + 0x158],0x3     ; 004a8888
    JNZ 0x004a889a                      ; 004a888f
        ;   XREF to: 004a889a (CONDITIONAL_JUMP)  ; LAB_004a889a
    CMP dword ptr [EBX + 0x168],0x0     ; 004a8891
    JNZ 0x004a88b3                      ; 004a8898
        ;   XREF to: 004a88b3 (CONDITIONAL_JUMP)  ; LAB_004a88b3
    MOV EAX,[0x0067d550]                ; 004a889a | g_CDemonMissionPtr
        ;   Label: LAB_004a889a
    CMP dword ptr [EAX + 0x4],0x0       ; 004a889f | DAT_02f33744
    JNZ 0x004a89df                      ; 004a88a3
        ;   XREF to: 004a89df (CONDITIONAL_JUMP)  ; LAB_004a89df
    XOR EAX,EAX                         ; 004a88a9
        ;   Label: LAB_004a88a9
    LEA ESP,[EBP + 0x7e]                ; 004a88ab
    POP EBP                             ; 004a88ae
    POP EDI                             ; 004a88af
    POP ESI                             ; 004a88b0
    POP EBX                             ; 004a88b1
    RET                                 ; 004a88b2
    MOV ECX,dword ptr [0x006810c8]      ; 004a88b3 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004a88b3
    PUSH ECX                            ; 004a88b9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004a88ba
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004a88bf
    PUSH EBX                            ; 004a88c2
    MOV ESI,dword ptr [0x006810c8]      ; 004a88c3 | g_CDemonSetPtr
    PUSH ESI                            ; 004a88c9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004a88ca
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a88cf
    LEA EAX,[EBP + 0x12]                ; 004a88d2
    PUSH EAX                            ; 004a88d5
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0 ; 004a88d6
        ;   XREF to: 004c81f0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0(SLaserInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0x238]     ; 004a88db
    MOV dword ptr [EBP + 0x1a],EAX      ; 004a88e1
    MOV EAX,dword ptr [EBX + 0x23c]     ; 004a88e4
    MOV dword ptr [EBP + 0x1e],EAX      ; 004a88ea
    MOV EAX,dword ptr [EBX + 0x240]     ; 004a88ed
    MOV dword ptr [EBP + 0x22],EAX      ; 004a88f3
    MOV EAX,dword ptr [EBX + 0x244]     ; 004a88f6
    MOV dword ptr [EBP + 0x26],EAX      ; 004a88fc
    XOR EAX,EAX                         ; 004a88ff
    ADD ESP,0x4                         ; 004a8901
    MOV dword ptr [EBP + 0x2a],EAX      ; 004a8904
    MOV dword ptr [EBP + 0x2e],EAX      ; 004a8907
    PUSH EAX                            ; 004a890a
    MOV EAX,dword ptr [EBP + 0x16]      ; 004a890b
    MOV dword ptr [EBP + -0x3e],EAX     ; 004a890e
    MOV EAX,dword ptr [EBP + 0x1a]      ; 004a8911
    MOV dword ptr [EBP + -0x3a],EAX     ; 004a8914
    MOV EAX,dword ptr [EBP + 0x1e]      ; 004a8917
    MOV dword ptr [EBP + -0x36],EAX     ; 004a891a
    MOV EAX,dword ptr [EBP + 0x22]      ; 004a891d
    MOV dword ptr [EBP + -0x32],EAX     ; 004a8920
    MOV EAX,dword ptr [EBP + 0x26]      ; 004a8923
    MOV dword ptr [EBP + -0x2e],EAX     ; 004a8926
    MOV EAX,dword ptr [EBP + 0x32]      ; 004a8929
    MOV dword ptr [EBP + -0x22],EAX     ; 004a892c
    MOV EAX,dword ptr [EBP + 0x36]      ; 004a892f
    MOV dword ptr [EBP + -0x1e],EAX     ; 004a8932
    MOV EAX,dword ptr [EBP + 0x3a]      ; 004a8935
    MOV dword ptr [EBP + -0x1a],EAX     ; 004a8938
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004a893b
    MOV dword ptr [EBP + -0x16],EAX     ; 004a893e
    MOV EAX,dword ptr [EBP + 0x42]      ; 004a8941
    MOV dword ptr [EBP + -0x12],EAX     ; 004a8944
    MOV EAX,dword ptr [EBP + 0x46]      ; 004a8947
    MOV dword ptr [EBP + -0xe],EAX      ; 004a894a
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004a894d
    MOV dword ptr [EBP + -0xa],EAX      ; 004a8950
    MOV EAX,dword ptr [EBP + 0x4e]      ; 004a8953
    MOV dword ptr [EBP + -0x6],EAX      ; 004a8956
    MOV EAX,dword ptr [EBP + 0x52]      ; 004a8959
    MOV dword ptr [EBP + -0x2],EAX      ; 004a895c
    MOV EAX,dword ptr [EBP + 0x56]      ; 004a895f
    MOV EDI,0x3f800000                  ; 004a8962
    MOV dword ptr [EBP + 0x2],EAX       ; 004a8967
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004a896a
    XOR ESI,ESI                         ; 004a896d
    MOV dword ptr [EBP + 0x6],EAX       ; 004a896f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004a8972
    MOV ECX,0x42c80000                  ; 004a8975
    MOV dword ptr [EBP + 0xa],EAX       ; 004a897a
    MOV EAX,dword ptr [EBP + 0x62]      ; 004a897d
    XOR EDX,EDX                         ; 004a8980
    MOV dword ptr [EBP + 0xe],EAX       ; 004a8982
    LEA EAX,[EBP + -0x42]               ; 004a8985
    MOV dword ptr [EBP + 0x12],EDI      ; 004a8988
    PUSH EAX                            ; 004a898b
    LEA EAX,[EBP + 0x72]                ; 004a898c
    MOV dword ptr [EBP + -0x42],EDI     ; 004a898f
    PUSH EAX                            ; 004a8992
    LEA EAX,[EBP + 0x66]                ; 004a8993
    MOV dword ptr [EBP + -0x2a],ESI     ; 004a8996
    PUSH EAX                            ; 004a8999
    MOV dword ptr [EBP + -0x26],EDX     ; 004a899a
    MOV dword ptr [EBP + 0x72],EDX      ; 004a899d
    PUSH EBX                            ; 004a89a0
    MOV dword ptr [EBP + 0x76],EDX      ; 004a89a1
    MOV dword ptr [EBP + 0x7a],ECX      ; 004a89a4
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004a89a7
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004a89ac
    PUSH EAX                            ; 004a89af
    ADD EBX,0x20                        ; 004a89b0
    PUSH EBX                            ; 004a89b3
    MOV EBX,dword ptr [0x0067a3d0]      ; 004a89b4 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EBX                            ; 004a89ba | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230 ; 004a89bb
        ;   XREF to: 004c8230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230(CFireEffect * this_ptr, CVector3f * origin, CVector3f * direction, SLaserInfo * laser_info, ...)
    ADD ESP,0x14                        ; 004a89c0
    MOV ESI,dword ptr [0x006810c8]      ; 004a89c3 | g_CDemonSetPtr
    PUSH ESI                            ; 004a89c9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004a89ca
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 004a89cf
    ADD ESP,0x4                         ; 004a89d4
    LEA ESP,[EBP + 0x7e]                ; 004a89d7
    POP EBP                             ; 004a89da
    POP EDI                             ; 004a89db
    POP ESI                             ; 004a89dc
    POP EBX                             ; 004a89dd
    RET                                 ; 004a89de
    MOV EAX,[0x006703ec]                ; 004a89df | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_004a89df
    PUSH EAX                            ; 004a89e4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004a89e5
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a89ea
    TEST EAX,EAX                        ; 004a89ed
    JNZ 0x004a88a9                      ; 004a89ef
        ;   XREF to: 004a88a9 (CONDITIONAL_JUMP)  ; LAB_004a88a9
    PUSH 0xfb                           ; 004a89f5
    PUSH EBX                            ; 004a89fa
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 004a89fb
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    MOV EDX,dword ptr [EBX + 0x158]     ; 004a8a00
    ADD ESP,0x8                         ; 004a8a06
    CMP EDX,0x3                         ; 004a8a09
    JNZ 0x004a88a9                      ; 004a8a0c
        ;   XREF to: 004a88a9 (CONDITIONAL_JUMP)  ; LAB_004a88a9
    CMP dword ptr [0x02cf2b5c],0x0      ; 004a8a12 | g_SlewTargetMode
    JZ 0x004a88a9                       ; 004a8a19
        ;   XREF to: 004a88a9 (CONDITIONAL_JUMP)  ; LAB_004a88a9
    MOV ESI,dword ptr [0x02cf2b78]      ; 004a8a1f | PTR_02cf2b78
    CMP EBX,ESI                         ; 004a8a25
    JNZ 0x004a88a9                      ; 004a8a27
        ;   XREF to: 004a88a9 (CONDITIONAL_JUMP)  ; LAB_004a88a9
    MOV EAX,[0x0067d550]                ; 004a8a2d | g_CDemonMissionPtr
    CMP ESI,dword ptr [EAX + 0x28]      ; 004a8a32 | DAT_02f33768
    JNZ 0x004a88a9                      ; 004a8a35
        ;   XREF to: 004a88a9 (CONDITIONAL_JUMP)  ; LAB_004a88a9
    PUSH 0x2cf2b6c                      ; 004a8a3b | UNION_UOrientationVector_02cf2b6c
    PUSH 0x2cf2b60                      ; 004a8a40 | g_EmitterTarget
    MOV EAX,[0x00678a60]                ; 004a8a45 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004a8a4a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 004a8a4b
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004a8a50
    PUSH EAX                            ; 004a8a53
    MOV EDX,dword ptr [0x00678a60]      ; 004a8a54 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH 0x3f800000                     ; 004a8a5a
    PUSH EDX                            ; 004a8a5f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 ; 004a8a60
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90(CEditorTools * this_ptr, float scale_factor, int text_color, CVector3f * world_position, ...)
    ADD ESP,0x14                        ; 004a8a65
    XOR EAX,EAX                         ; 004a8a68
    LEA ESP,[EBP + 0x7e]                ; 004a8a6a
    POP EBP                             ; 004a8a6d
    POP EDI                             ; 004a8a6e
    POP ESI                             ; 004a8a6f
    POP EBX                             ; 004a8a70
    RET                                 ; 004a8a71

