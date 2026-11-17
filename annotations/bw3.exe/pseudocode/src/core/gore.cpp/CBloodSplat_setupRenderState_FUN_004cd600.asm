; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004cd600(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004ce630 at 004ce65a
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[1].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[1].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[2].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[2].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[3].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[3].v
;   CDemonRenderer g_CDemonRenderer_01bdd7e4
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.base.base.count
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[0]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[1]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[2]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[3]
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd600
        ;   Label: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004cd600
    PUSH ESI                            ; 004cd601
    PUSH EDI                            ; 004cd602
    PUSH EBP                            ; 004cd603
    MOV EDX,0x4                         ; 004cd604
    MOV EBX,0x1                         ; 004cd609
    MOV ESI,0x2                         ; 004cd60e
    MOV EDI,0x3                         ; 004cd613
    MOV EBP,0x80000                     ; 004cd618
    MOV EAX,0xf80000                    ; 004cd61d
    PUSH 0xffff                         ; 004cd622
    XOR ECX,ECX                         ; 004cd627
    MOV dword ptr [0x01d22e4c],EDX      ; 004cd629 | g_SMRGLPrimitiveQuadIndex_01d22e48.base.base.count
    MOV dword ptr [0x01d22e60],ECX      ; 004cd62f | g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[0]
    MOV dword ptr [0x01d22e64],EBX      ; 004cd635 | g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[1]
    MOV dword ptr [0x01d22e68],ESI      ; 004cd63b | g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[2]
    MOV dword ptr [0x01d22e6c],EDI      ; 004cd641 | g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[3]
    MOV dword ptr [0x0060b02c],EBP      ; 004cd647 | g_SRenderVertex_ARRAY_0060b014[0].u
    MOV [0x0060b030],EAX                ; 004cd64d | g_SRenderVertex_ARRAY_0060b014[0].v
    MOV [0x0060b05c],EAX                ; 004cd652 | g_SRenderVertex_ARRAY_0060b014[1].u
    MOV [0x0060b060],EAX                ; 004cd657 | g_SRenderVertex_ARRAY_0060b014[1].v
    MOV [0x0060b08c],EAX                ; 004cd65c | g_SRenderVertex_ARRAY_0060b014[2].u
    MOV EAX,[0x005f2afc]                ; 004cd661 | g_CDemonRenderer_PTR_005f2afc
    MOV dword ptr [0x0060b090],EBP      ; 004cd666 | g_SRenderVertex_ARRAY_0060b014[2].v
    PUSH EAX                            ; 004cd66c | g_CDemonRenderer_01bdd7e4
    MOV dword ptr [0x0060b0bc],EBP      ; 004cd66d | g_SRenderVertex_ARRAY_0060b014[3].u
    MOV dword ptr [0x0060b0c0],EBP      ; 004cd673 | g_SRenderVertex_ARRAY_0060b014[3].v
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004cd679
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004cd67e
    POP EBP                             ; 004cd681
    POP EDI                             ; 004cd682
    POP ESI                             ; 004cd683
    POP EBX                             ; 004cd684
    RET                                 ; 004cd685

