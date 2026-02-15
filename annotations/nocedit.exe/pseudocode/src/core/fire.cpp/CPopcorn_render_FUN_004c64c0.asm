; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CPopcorn_render_FUN_004c64c0(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined1       Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_FireEffectPopcornTexture
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].w_recip
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[1].w_recip
;   undefined4 g_RenderVertexBuffer[2].u
;   undefined4 g_RenderVertexBuffer[2].v
;   undefined4 g_RenderVertexBuffer[2].w_recip
;   undefined4 g_RenderVertexBuffer[3].u
;   undefined4 g_RenderVertexBuffer[3].v
;   ... and 7 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c64c0
        ;   Label: core_fire.cpp_CPopcorn_render_FUN_004c64c0
    PUSH ESI                            ; 004c64c1
    PUSH EBP                            ; 004c64c2
    SUB ESP,0x94                        ; 004c64c3
    MOV EBP,dword ptr [ESP + 0xa4]      ; 004c64c9
    MOV ESI,dword ptr [0x006703ec]      ; 004c64d0 | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x58]                ; 004c64d6
    MOV EAX,EBP                         ; 004c64da
    MOV ESI,dword ptr [ESI]             ; 004c64dc | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 004c64de
    FMUL float ptr [0x0065dca8]         ; 004c64e0 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c64e6
    FLD float ptr [EAX + 0x4]           ; 004c64e8
    FMUL float ptr [0x0065dca8]         ; 004c64eb | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c64f1
    FLD float ptr [EAX + 0x8]           ; 004c64f4
    FMUL float ptr [0x0065dca8]         ; 004c64f7 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c64fd
    LEA EAX,[ESP + 0x58]                ; 004c6500
    PUSH EAX                            ; 004c6504
    PUSH ESI                            ; 004c6505
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c6506
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c650b
    PUSH ESI                            ; 004c650e
    MOV EDX,dword ptr [0x006703ec]      ; 004c650f | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c6515 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50 ; 004c6516
        ;   XREF to: 0048dc50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004c651b
    TEST EAX,EAX                        ; 004c651e
    JNZ 0x004c652c                      ; 004c6520
        ;   XREF to: 004c652c (CONDITIONAL_JUMP)  ; LAB_004c652c
    ADD ESP,0x94                        ; 004c6522
    POP EBP                             ; 004c6528
    POP ESI                             ; 004c6529
    POP EBX                             ; 004c652a
    RET                                 ; 004c652b
    PUSH EDI                            ; 004c652c
        ;   Label: LAB_004c652c
    PUSH EBP                            ; 004c652d
    MOV ECX,dword ptr [0x006703ec]      ; 004c652e | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c6534 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c6535
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c653a
    MOV EBX,dword ptr [0x006703ec]      ; 004c653d | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c6543 | g_CDemonRendererInstance
    LEA ESI,[ESP + 0x30]                ; 004c6544
    LEA EDI,[ESP + 0x48]                ; 004c6548
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004c654c
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    ADD ESP,0x4                         ; 004c6551
    LEA ESI,[ESP + 0x2c]                ; 004c6554
    LEA EAX,[ESP + 0x44]                ; 004c6558
    PUSH 0x0                            ; 004c655c
    MOVSD ES:EDI,ESI                    ; 004c655e
    MOVSD ES:EDI,ESI                    ; 004c655f
    MOVSD ES:EDI,ESI                    ; 004c6560
    PUSH EAX                            ; 004c6561
    MOV ESI,dword ptr [0x006703ec]      ; 004c6562 | g_CDemonRendererPtr2
    PUSH ESI                            ; 004c6568 | g_CDemonRendererInstance
    LEA EBX,[ESP + 0x98]                ; 004c6569
    MOV EDI,0xbe000000                  ; 004c6570
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c6575
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x80]                ; 004c657a
    MOV ESI,dword ptr [0x006703ec]      ; 004c6581 | g_CDemonRendererPtr2
    ADD ESP,0xc                         ; 004c6587
    XOR EDX,EDX                         ; 004c658a
    MOV dword ptr [ESP + 0x74],EDI      ; 004c658c
    MOV dword ptr [ESP + 0x78],EDI      ; 004c6590
    MOV dword ptr [ESP + 0x7c],EDX      ; 004c6594
    FLD float ptr [EAX]                 ; 004c6598
    FMUL float ptr [0x0065dca8]         ; 004c659a | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c65a0
    FLD float ptr [EAX + 0x4]           ; 004c65a2
    FMUL float ptr [0x0065dca8]         ; 004c65a5 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c65ab
    FLD float ptr [EAX + 0x8]           ; 004c65ae
    FMUL float ptr [0x0065dca8]         ; 004c65b1 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c65b7
    LEA EAX,[ESP + 0x8c]                ; 004c65ba
    PUSH EAX                            ; 004c65c1
    MOV EAX,dword ptr [ESI]             ; 004c65c2 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c65c4
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c65c5
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 004c65ca
    MOV ECX,0x3e000000                  ; 004c65cc
    LEA EBX,[ESP + 0x70]                ; 004c65d1
    ADD ESP,0x8                         ; 004c65d5
    LEA EAX,[ESP + 0x74]                ; 004c65d8
    MOV dword ptr [ESP + 0x74],ECX      ; 004c65dc
    MOV dword ptr [ESP + 0x78],EDI      ; 004c65e0
    MOV dword ptr [ESP + 0x7c],ESI      ; 004c65e4
    MOV ESI,dword ptr [0x006703ec]      ; 004c65e8 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c65ee
    FMUL float ptr [0x0065dca8]         ; 004c65f0 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c65f6
    FLD float ptr [EAX + 0x4]           ; 004c65f8
    FMUL float ptr [0x0065dca8]         ; 004c65fb | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c6601
    FLD float ptr [EAX + 0x8]           ; 004c6604
    FMUL float ptr [0x0065dca8]         ; 004c6607 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c660d
    LEA EAX,[ESP + 0x68]                ; 004c6610
    PUSH EAX                            ; 004c6614
    MOV EAX,dword ptr [ESI]             ; 004c6615 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c6617
    PUSH EAX                            ; 004c661a
    MOV EDI,0x3e000000                  ; 004c661b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c6620
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x006703ec]      ; 004c6625 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004c662b
    XOR EDX,EDX                         ; 004c662e
    MOV dword ptr [ESP + 0x74],EDI      ; 004c6630
    MOV dword ptr [ESP + 0x78],EDI      ; 004c6634
    MOV dword ptr [ESP + 0x7c],EDX      ; 004c6638
    LEA EBX,[ESP + 0x38]                ; 004c663c
    LEA EAX,[ESP + 0x74]                ; 004c6640
    FLD float ptr [EAX]                 ; 004c6644
    FMUL float ptr [0x0065dca8]         ; 004c6646 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c664c
    FLD float ptr [EAX + 0x4]           ; 004c664e
    FMUL float ptr [0x0065dca8]         ; 004c6651 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c6657
    FLD float ptr [EAX + 0x8]           ; 004c665a
    FMUL float ptr [0x0065dca8]         ; 004c665d | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c6663
    LEA EAX,[ESP + 0x38]                ; 004c6666
    PUSH EAX                            ; 004c666a
    MOV EAX,dword ptr [ESI]             ; 004c666b | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c666d
    PUSH EAX                            ; 004c6670
    XOR ESI,ESI                         ; 004c6671
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c6673
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 004c6678
    LEA EBX,[ESP + 0x58]                ; 004c667d
    ADD ESP,0x8                         ; 004c6681
    LEA EAX,[ESP + 0x74]                ; 004c6684
    MOV dword ptr [ESP + 0x74],ECX      ; 004c6688
    MOV dword ptr [ESP + 0x78],EDI      ; 004c668c
    MOV dword ptr [ESP + 0x7c],ESI      ; 004c6690
    MOV ESI,dword ptr [0x006703ec]      ; 004c6694 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c669a
    FMUL float ptr [0x0065dca8]         ; 004c669c | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c66a2
    FLD float ptr [EAX + 0x4]           ; 004c66a4
    FMUL float ptr [0x0065dca8]         ; 004c66a7 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c66ad
    FLD float ptr [EAX + 0x8]           ; 004c66b0
    FMUL float ptr [0x0065dca8]         ; 004c66b3 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c66b9
    LEA EAX,[ESP + 0x50]                ; 004c66bc
    PUSH EAX                            ; 004c66c0
    MOV EAX,dword ptr [ESI]             ; 004c66c1 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c66c3
    PUSH EAX                            ; 004c66c8
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c66c9
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c66ce
    PUSH 0x67ae84                       ; 004c66d1 | g_FireEffectPopcornTexture
    MOV EDI,dword ptr [0x006703ec]      ; 004c66d6 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c66dc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c66dd
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c66e2
    PUSH 0x0                            ; 004c66e5
    MOV EAX,[0x00823a74]                ; 004c66e7 | g_CurrentSceneCamera
    PUSH EBP                            ; 004c66ec
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004c66ed
    PUSH EAX                            ; 004c66f0
    CALL dword ptr [EBX + 0x4]          ; 004c66f1
    MOV EAX,0xffff                      ; 004c66f4
    MOV ECX,0x80000                     ; 004c66f9
    MOV EBX,0xf80000                    ; 004c66fe | DAT_00f80000
    MOV EDX,dword ptr [0x02d051f4]      ; 004c6703 | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004c6709
    MOV dword ptr [0x0068802c],ECX      ; 004c670c | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688030],EBX      ; 004c6712 | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],EBX      ; 004c6718 | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],EBX      ; 004c671e | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],EBX      ; 004c6724 | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],ECX      ; 004c672a | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],ECX      ; 004c6730 | g_RenderVertexBuffer[3].u
    SUB EAX,EDX                         ; 004c6736
    LEA EBX,[ESP + 0x80]                ; 004c6738
    MOV [0x00688040],EAX                ; 004c673f | g_RenderVertexBuffer[0].w_recip
    MOV [0x00688070],EAX                ; 004c6744 | g_RenderVertexBuffer[1].w_recip
    MOV [0x006880a0],EAX                ; 004c6749 | g_RenderVertexBuffer[2].w_recip
    MOV [0x006880d0],EAX                ; 004c674e | g_RenderVertexBuffer[3].w_recip
    MOV EAX,EBP                         ; 004c6753
    MOV dword ptr [0x006880c0],ECX      ; 004c6755 | g_RenderVertexBuffer[3].v
    FLD float ptr [EAX]                 ; 004c675b
    FMUL float ptr [0x0065dca8]         ; 004c675d | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6763
    FLD float ptr [EAX + 0x4]           ; 004c6765
    FMUL float ptr [0x0065dca8]         ; 004c6768 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c676e
    FLD float ptr [EAX + 0x8]           ; 004c6771
    FMUL float ptr [0x0065dca8]         ; 004c6774 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c677a
    PUSH 0x4                            ; 004c677d
    PUSH 0x0                            ; 004c677f
    PUSH 0x2d12dc0                      ; 004c6781 | g_BillboardCameraUp
    LEA EAX,[ESP + 0x8c]                ; 004c6786
    PUSH EAX                            ; 004c678d
    MOV ESI,dword ptr [0x006810c8]      ; 004c678e | g_CDemonSetPtr
    PUSH ESI                            ; 004c6794 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 004c6795
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004c679a
    PUSH 0x1                            ; 004c679d
    MOV EDI,dword ptr [0x006703ec]      ; 004c679f | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c67a5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c67a6
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c67ab
    XOR EAX,EAX                         ; 004c67ae
    MOV EBP,0x4                         ; 004c67b0
    MOV dword ptr [ESP + 0x18],EAX      ; 004c67b5
    MOV dword ptr [ESP + 0x14],EAX      ; 004c67b9
    MOV dword ptr [ESP + 0x10],EAX      ; 004c67bd
    MOV dword ptr [ESP + 0xc],EAX       ; 004c67c1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c67c5
    MOV EAX,0x3                         ; 004c67c9
    MOV EDI,0x1                         ; 004c67ce
    MOV dword ptr [ESP + 0x28],EAX      ; 004c67d3
    LEA EAX,[ESP + 0x4]                 ; 004c67d7
    MOV EDX,dword ptr [0x006703ec]      ; 004c67db | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c67e1
    MOV dword ptr [ESP + 0xc],EBP       ; 004c67e2
    MOV EBP,0x2                         ; 004c67e6
    PUSH EDX                            ; 004c67eb | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],EDI      ; 004c67ec
    MOV dword ptr [ESP + 0x2c],EBP      ; 004c67f0
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 004c67f4
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 004c67f9
    XOR EBX,EBX                         ; 004c67fc
    PUSH EBX                            ; 004c67fe
    MOV ECX,dword ptr [0x006703ec]      ; 004c67ff | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c6805 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c6806
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c680b
    MOV EBX,dword ptr [0x006703ec]      ; 004c680e | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c6814 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004c6815
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

