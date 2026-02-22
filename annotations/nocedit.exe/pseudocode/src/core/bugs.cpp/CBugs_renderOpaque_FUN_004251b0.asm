; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_004251b0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x44]:1  local_44
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004251b0
        ;   Label: core_bugs.cpp_CBugs_renderOpaque_FUN_004251b0
    SUB ESP,0x40                        ; 004251b1
    MOV EAX,dword ptr [ESP + 0x48]      ; 004251b4
    CMP dword ptr [EAX + 0x240c],0x0    ; 004251b8
    JZ 0x004251c8                       ; 004251bf
        ;   XREF to: 004251c8 (CONDITIONAL_JUMP)  ; LAB_004251c8
    XOR EAX,EAX                         ; 004251c1
        ;   Label: LAB_004251c1
    ADD ESP,0x40                        ; 004251c3
    POP EBP                             ; 004251c6
    RET                                 ; 004251c7
    MOV ECX,dword ptr [0x006703ec]      ; 004251c8 | g_CDemonRendererPtr2
        ;   Label: LAB_004251c8
    PUSH ECX                            ; 004251ce | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004251cf
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004251d4
    TEST EAX,EAX                        ; 004251d7
    JNZ 0x004251c1                      ; 004251d9
        ;   XREF to: 004251c1 (CONDITIONAL_JUMP)  ; LAB_004251c1
    PUSH EBX                            ; 004251db
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004251dc
    PUSH EBX                            ; 004251e0
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004251e1
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004251e6
    LEA EDX,[ESP + 0x4]                 ; 004251e9
    PUSH EDX                            ; 004251ed
    MOV EAX,dword ptr [EBX + 0x154]     ; 004251ee
    PUSH EBX                            ; 004251f4
    CALL dword ptr [EAX + 0x14]         ; 004251f5
    ADD ESP,0x8                         ; 004251f8
    PUSH EAX                            ; 004251fb
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004251fc
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00425201
    MOV dword ptr [ESP + 0x34],EAX      ; 00425204
    TEST EAX,EAX                        ; 00425208
    JZ 0x00425327                       ; 0042520a
        ;   XREF to: 00425327 (CONDITIONAL_JUMP)  ; LAB_00425327
    PUSH EDI                            ; 00425210
    PUSH ESI                            ; 00425211
    MOV EDI,dword ptr [EBX + 0xbec0]    ; 00425212
    XOR ESI,ESI                         ; 00425218
    TEST EDI,EDI                        ; 0042521a
    JLE 0x00425314                      ; 0042521c
        ;   XREF to: 00425314 (CONDITIONAL_JUMP)  ; LAB_00425314
    LEA EAX,[EBX + 0x122c8]             ; 00425222
    MOV dword ptr [ESP + 0x40],EAX      ; 00425228
    LEA EAX,[EBX + 0xbec4]              ; 0042522c
    LEA EDI,[EBX + 0x20]                ; 00425232
    LEA EBP,[EBX + 0xbed8]              ; 00425235
    MOV dword ptr [ESP + 0x44],EAX      ; 0042523b
    ADD EBX,0xbecc                      ; 0042523f
    MOV EDX,dword ptr [ESP + 0x44]      ; 00425245
        ;   Label: LAB_00425245
    MOV EAX,ESI                         ; 00425249
    PUSH EBX                            ; 0042524b
    SHL EAX,0x6                         ; 0042524c
    PUSH EBP                            ; 0042524f
    ADD EDX,EAX                         ; 00425250
    MOV EAX,[0x006703ec]                ; 00425252 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00425257 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x54],EDX      ; 00425258
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0042525c
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    FLD float ptr [EDI]                 ; 00425261
    FADD float ptr [EBX]                ; 00425263
    ADD ESP,0xc                         ; 00425265
    FSTP float ptr [ESP + 0x30]         ; 00425268
    FLD float ptr [EDI + 0x4]           ; 0042526c
    FADD float ptr [EBX + 0x4]          ; 0042526f
    LEA EDX,[ESP + 0x30]                ; 00425272
    FSTP float ptr [ESP + 0x34]         ; 00425276
    FLD float ptr [EDI + 0x8]           ; 0042527a
    FADD float ptr [EBX + 0x8]          ; 0042527d
    LEA EAX,[ESP + 0x24]                ; 00425280
    FSTP float ptr [ESP + 0x38]         ; 00425284
    CMP EAX,EDX                         ; 00425288
    JZ 0x004252a4                       ; 0042528a
        ;   XREF to: 004252a4 (CONDITIONAL_JUMP)  ; LAB_004252a4
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042528c
    MOV dword ptr [ESP + 0x24],EAX      ; 00425290
    MOV EAX,dword ptr [ESP + 0x34]      ; 00425294
    MOV dword ptr [ESP + 0x28],EAX      ; 00425298
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042529c
    MOV dword ptr [ESP + 0x2c],EAX      ; 004252a0
    LEA EAX,[ESP + 0x24]                ; 004252a4
        ;   Label: LAB_004252a4
    PUSH EAX                            ; 004252a8
    MOV EAX,[0x006810c8]                ; 004252a9 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004252ae | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0 ; 004252af
        ;   XREF to: 00570cd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0(CDemonSet * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004252b4
    PUSH 0xffff                         ; 004252b7
    MOV EDX,dword ptr [0x006703ec]      ; 004252bc | g_CDemonRendererPtr2
    PUSH EDX                            ; 004252c2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004252c3
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004252c8
    MOV EAX,dword ptr [ESP + 0x48]      ; 004252cb
    IMUL EAX,dword ptr [EAX + 0x4],0x17c ; 004252cf
    MOV EDX,dword ptr [ESP + 0x40]      ; 004252d6
    PUSH 0x2e7                          ; 004252da
    ADD EAX,EDX                         ; 004252df
    PUSH 0x0                            ; 004252e1
    PUSH EAX                            ; 004252e3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004252e4
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004252e9
    MOV ECX,dword ptr [0x006703ec]      ; 004252ec | g_CDemonRendererPtr2
    PUSH ECX                            ; 004252f2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004252f3
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH 0x0                            ; 00425314
        ;   Label: LAB_00425314
    MOV ECX,dword ptr [0x006810c8]      ; 00425316 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0042531c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0 ; 0042531d
        ;   XREF to: 00570cd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0(CDemonSet * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00425322
    POP ESI                             ; 00425325
    POP EDI                             ; 00425326
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00425327
        ;   Label: LAB_00425327
    PUSH EDX                            ; 0042532b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0042532c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00425331
    MOV EAX,dword ptr [ESP + 0x34]      ; 00425334
    POP EBX                             ; 00425338
    ADD ESP,0x40                        ; 00425339
    POP EBP                             ; 0042533c
    RET                                 ; 0042533d

