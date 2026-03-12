; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_render_FUN_004c4620(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0x6c]:24  local_6c
; CVector3i        Stack[-0x38]:12  local_38
; CVector3i        Stack[-0x2c]:12  local_2c
; CVector3i        Stack[-0x20]:12  local_20
; CVector3i        Stack[-0x14]:12  local_14
;
; XREF[2]:
;   core_fire.cpp_CCrater_activate_FUN_004c4200 at 004c422a
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 at 004c7564
;
; Referenced Globals:
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_FireEffectBlastTexture
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 DAT_00688044
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[1].r
;   undefined4 g_RenderVertexBuffer[1].g
;   undefined4 g_RenderVertexBuffer[1].b
;   ... and 14 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c4620
        ;   Label: core_fire.cpp_CCrater_render_FUN_004c4620
    PUSH EBP                            ; 004c4621
    SUB ESP,0x64                        ; 004c4622
    MOV ESI,dword ptr [ESP + 0x70]      ; 004c4625
    CMP dword ptr [ESI],0x0             ; 004c4629
    JNZ 0x004c4634                      ; 004c462c
        ;   XREF to: 004c4634 (CONDITIONAL_JUMP)  ; LAB_004c4634
    ADD ESP,0x64                        ; 004c462e
    POP EBP                             ; 004c4631
    POP ESI                             ; 004c4632
    RET                                 ; 004c4633
    PUSH EDI                            ; 004c4634
        ;   Label: LAB_004c4634
    PUSH EBX                            ; 004c4635
    LEA EAX,[ESI + 0xc]                 ; 004c4636
    PUSH EAX                            ; 004c4639
    MOV ECX,dword ptr [0x006703ec]      ; 004c463a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c4640 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c4641
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c4646
    PUSH 0x67addc                       ; 004c4649 | g_FireEffectBlastTexture
    MOV EBX,dword ptr [0x006703ec]      ; 004c464e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c4654 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c4655
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c465a
    LEA EBX,[ESP + 0x54]                ; 004c465d
    LEA EAX,[ESI + 0x40]                ; 004c4661
    FLD float ptr [EAX]                 ; 004c4664
    FMUL float ptr [0x0065dca8]         ; 004c4666 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c466c
    FLD float ptr [EAX + 0x4]           ; 004c466e
    FMUL float ptr [0x0065dca8]         ; 004c4671 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c4677
    FLD float ptr [EAX + 0x8]           ; 004c467a
    FMUL float ptr [0x0065dca8]         ; 004c467d | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c4683
    LEA EAX,[ESP + 0x54]                ; 004c4686
    PUSH EAX                            ; 004c468a
    PUSH 0x688014                       ; 004c468b | g_RenderVertexBuffer
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c4690
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c4695
    LEA EBX,[ESP + 0x48]                ; 004c4698
    LEA EAX,[ESI + 0x4c]                ; 004c469c
    FLD float ptr [EAX]                 ; 004c469f
    FMUL float ptr [0x0065dca8]         ; 004c46a1 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c46a7
    FLD float ptr [EAX + 0x4]           ; 004c46a9
    FMUL float ptr [0x0065dca8]         ; 004c46ac | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c46b2
    FLD float ptr [EAX + 0x8]           ; 004c46b5
    FMUL float ptr [0x0065dca8]         ; 004c46b8 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c46be
    LEA EAX,[ESP + 0x48]                ; 004c46c1
    PUSH EAX                            ; 004c46c5
    PUSH 0x688044                       ; 004c46c6 | DAT_00688044
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c46cb
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c46d0
    LEA EBX,[ESP + 0x3c]                ; 004c46d3
    LEA EAX,[ESI + 0x58]                ; 004c46d7
    FLD float ptr [EAX]                 ; 004c46da
    FMUL float ptr [0x0065dca8]         ; 004c46dc | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c46e2
    FLD float ptr [EAX + 0x4]           ; 004c46e4
    FMUL float ptr [0x0065dca8]         ; 004c46e7 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c46ed
    FLD float ptr [EAX + 0x8]           ; 004c46f0
    FMUL float ptr [0x0065dca8]         ; 004c46f3 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c46f9
    LEA EAX,[ESP + 0x3c]                ; 004c46fc
    PUSH EAX                            ; 004c4700
    PUSH 0x688074                       ; 004c4701 | DAT_00688074
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c4706
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c470b
    LEA EAX,[ESI + 0x64]                ; 004c470e
    LEA EBX,[ESP + 0x60]                ; 004c4711
    FLD float ptr [EAX]                 ; 004c4715
    FMUL float ptr [0x0065dca8]         ; 004c4717 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c471d
    FLD float ptr [EAX + 0x4]           ; 004c471f
    FMUL float ptr [0x0065dca8]         ; 004c4722 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c4728
    FLD float ptr [EAX + 0x8]           ; 004c472b
    FMUL float ptr [0x0065dca8]         ; 004c472e | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c4734
    LEA EAX,[ESP + 0x60]                ; 004c4737
    PUSH EAX                            ; 004c473b
    PUSH 0x6880a4                       ; 004c473c | DAT_006880a4
    MOV ESI,0xffff                      ; 004c4741
    MOV EDI,0xffff                      ; 004c4746
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c474b
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 004c4750
    MOV EBX,0xf80000                    ; 004c4755 | DAT_00f80000
    ADD ESP,0x8                         ; 004c475a
    MOV dword ptr [0x00688034],ESI      ; 004c475d | g_RenderVertexBuffer[0].r
    MOV dword ptr [0x00688038],ESI      ; 004c4763 | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],ESI      ; 004c4769 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],ESI      ; 004c476f | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],ESI      ; 004c4775 | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],ESI      ; 004c477b | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],ESI      ; 004c4781 | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],ESI      ; 004c4787 | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],ESI      ; 004c478d | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x006880c4],ESI      ; 004c4793 | g_RenderVertexBuffer[3].r
    MOV dword ptr [0x006880c8],ESI      ; 004c4799 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],ESI      ; 004c479f | g_RenderVertexBuffer[3].b
    MOV dword ptr [0x0068802c],ECX      ; 004c47a5 | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688030],EBX      ; 004c47ab | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],EBX      ; 004c47b1 | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],EBX      ; 004c47b7 | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],EBX      ; 004c47bd | g_RenderVertexBuffer[2].u
    MOV EAX,ECX                         ; 004c47c3
    MOV dword ptr [0x00688090],ECX      ; 004c47c5 | g_RenderVertexBuffer[2].v
    MOV EDX,ECX                         ; 004c47cb
    MOV dword ptr [0x006880bc],ECX      ; 004c47cd | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x006880c0],ECX      ; 004c47d3 | g_RenderVertexBuffer[3].v
    MOV dword ptr [ESP + 0x14],EDI      ; 004c47d9
    PUSH EDI                            ; 004c47dd
    XOR ESI,ESI                         ; 004c47de
    MOV EBX,0x3                         ; 004c47e0
    MOV dword ptr [ESP + 0x14],ESI      ; 004c47e5
    MOV dword ptr [ESP + 0x1c],ESI      ; 004c47e9
    XOR EAX,ECX                         ; 004c47ed
    XOR EDX,ECX                         ; 004c47ef
    MOV ECX,0x1                         ; 004c47f1
    MOV ESI,dword ptr [0x006703ec]      ; 004c47f6 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x10],EBX      ; 004c47fc
    MOV dword ptr [ESP + 0x20],EAX      ; 004c4800
    MOV dword ptr [ESP + 0x24],EDX      ; 004c4804
    MOV EBX,0x2                         ; 004c4808
    PUSH ESI                            ; 004c480d | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],ECX      ; 004c480e
    MOV dword ptr [ESP + 0x30],EBX      ; 004c4812
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004c4816
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c481b
    LEA EAX,[ESP + 0x8]                 ; 004c481e
    PUSH EAX                            ; 004c4822
    MOV EDI,dword ptr [0x006703ec]      ; 004c4823 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c4829 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004c482a
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c482f
    XOR EBP,EBP                         ; 004c4832
    MOV EDX,0x3                         ; 004c4834
    PUSH 0xffff                         ; 004c4839
    MOV ECX,dword ptr [0x006703ec]      ; 004c483e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x24],EBP      ; 004c4844
    PUSH ECX                            ; 004c4848 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],EBX      ; 004c4849
    MOV dword ptr [ESP + 0x30],EDX      ; 004c484d
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004c4851
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c4856
    LEA EAX,[ESP + 0x8]                 ; 004c4859
    PUSH EAX                            ; 004c485d
    MOV EBX,dword ptr [0x006703ec]      ; 004c485e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c4864 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004c4865
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c486a
    POP EBX                             ; 004c486d
    POP EDI                             ; 004c486e
    ADD ESP,0x64                        ; 004c486f
    POP EBP                             ; 004c4872
    POP ESI                             ; 004c4873
    RET                                 ; 004c4874

