; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4[984]  Stack[-0x1020]:3936  auStackY_1020
; SMRGLPrimitiveQuadIndex Stack[-0xa8]:40  SStack_a8
; CVector3i        Stack[-0x80]:12  local_80
; CVector3i        Stack[-0x74]:12  local_74
; CVector3i        Stack[-0x68]:12  local_68
; CVector3i        Stack[-0x50]:12  local_50
; CVector3i        Stack[-0x44]:12  local_44
; CVector3i        Stack[-0x38]:12  local_38
; CVector3i        Stack[-0x2c]:12  CStack_2c
; CVector3i        Stack[-0x20]:12  local_20
; int              Stack[-0x14]:4  iStack_14
; int              Stack[-0x10]:4  iStack_10
;
; Referenced Globals:
;   double DOUBLE_00629ffb = 4
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_FireEffectRainDropTexture
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].a
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[1].a
;   undefined4 g_RenderVertexBuffer[2].u
;   undefined4 g_RenderVertexBuffer[2].v
;   undefined4 g_RenderVertexBuffer[2].a
;   undefined4 g_RenderVertexBuffer[3].u
;   ... and 11 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6830
        ;   Label: core_fire.cpp_CRainDrop_render_FUN_004c6830
    PUSH ESI                            ; 004c6831
    PUSH EBP                            ; 004c6832
    SUB ESP,0x9c                        ; 004c6833
    MOV EBP,dword ptr [ESP + 0xac]      ; 004c6839
    MOV ESI,dword ptr [0x006703ec]      ; 004c6840 | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x40]                ; 004c6846
    MOV EAX,EBP                         ; 004c684a
    MOV ESI,dword ptr [ESI]             ; 004c684c | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 004c684e
    FMUL float ptr [0x0065dca8]         ; 004c6850 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6856
    FLD float ptr [EAX + 0x4]           ; 004c6858
    FMUL float ptr [0x0065dca8]         ; 004c685b | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c6861
    FLD float ptr [EAX + 0x8]           ; 004c6864
    FMUL float ptr [0x0065dca8]         ; 004c6867 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c686d
    LEA EAX,[ESP + 0x40]                ; 004c6870
    PUSH EAX                            ; 004c6874
    PUSH ESI                            ; 004c6875
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c6876
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c687b
    PUSH ESI                            ; 004c687e
    MOV EDX,dword ptr [0x006703ec]      ; 004c687f | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c6885 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50 ; 004c6886
        ;   XREF to: 0048dc50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004c688b
    TEST EAX,EAX                        ; 004c688e
    JNZ 0x004c689c                      ; 004c6890
        ;   XREF to: 004c689c (CONDITIONAL_JUMP)  ; LAB_004c689c
    ADD ESP,0x9c                        ; 004c6892
    POP EBP                             ; 004c6898
    POP ESI                             ; 004c6899
    POP EBX                             ; 004c689a
    RET                                 ; 004c689b
    PUSH EDI                            ; 004c689c
        ;   Label: LAB_004c689c
    PUSH EBP                            ; 004c689d
    MOV ECX,dword ptr [0x006703ec]      ; 004c689e | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c68a4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c68a5
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c68aa
    MOV EBX,dword ptr [0x006703ec]      ; 004c68ad | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c68b3 | g_CDemonRendererInstance
    LEA ESI,[ESP + 0x90]                ; 004c68b4
    LEA EDI,[ESP + 0x78]                ; 004c68bb
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004c68bf
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    ADD ESP,0x4                         ; 004c68c4
    LEA ESI,[ESP + 0x8c]                ; 004c68c7
    LEA EAX,[ESP + 0x74]                ; 004c68ce
    PUSH 0x0                            ; 004c68d2
    JMP 0x00610920                      ; 004c68d4
        ;   XREF to: 00610920 (UNCONDITIONAL_JUMP)  ; LAB_00610920
    PUSH ESI                            ; 004c68de | g_CDemonRendererInstance
        ;   Label: LAB_004c68de
    LEA EBX,[ESP + 0x68]                ; 004c68df
    MOV EDI,0xbe000000                  ; 004c68e3
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c68e8
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x5c]                ; 004c68ed
    MOV ESI,dword ptr [0x006703ec]      ; 004c68f1 | g_CDemonRendererPtr2
    ADD ESP,0xc                         ; 004c68f7
    XOR EDX,EDX                         ; 004c68fa
    MOV dword ptr [ESP + 0x50],EDI      ; 004c68fc
    MOV dword ptr [ESP + 0x54],EDI      ; 004c6900
    MOV dword ptr [ESP + 0x58],EDX      ; 004c6904
    FLD float ptr [EAX]                 ; 004c6908
    FMUL float ptr [0x0065dca8]         ; 004c690a | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6910
    FLD float ptr [EAX + 0x4]           ; 004c6912
    FMUL float ptr [0x0065dca8]         ; 004c6915 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c691b
    FLD float ptr [EAX + 0x8]           ; 004c691e
    FMUL float ptr [0x0065dca8]         ; 004c6921 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c6927
    LEA EAX,[ESP + 0x5c]                ; 004c692a
    PUSH EAX                            ; 004c692e
    MOV EAX,dword ptr [ESI]             ; 004c692f | g_CDemonRendererInstance
    PUSH EAX                            ; 004c6931
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c6932
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 004c6937
    MOV ECX,0x3e000000                  ; 004c6939
    LEA EBX,[ESP + 0x34]                ; 004c693e
    ADD ESP,0x8                         ; 004c6942
    LEA EAX,[ESP + 0x50]                ; 004c6945
    MOV dword ptr [ESP + 0x50],ECX      ; 004c6949
    MOV dword ptr [ESP + 0x54],EDI      ; 004c694d
    MOV dword ptr [ESP + 0x58],ESI      ; 004c6951
    MOV ESI,dword ptr [0x006703ec]      ; 004c6955 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c695b
    FMUL float ptr [0x0065dca8]         ; 004c695d | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6963
    FLD float ptr [EAX + 0x4]           ; 004c6965
    FMUL float ptr [0x0065dca8]         ; 004c6968 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c696e
    FLD float ptr [EAX + 0x8]           ; 004c6971
    FMUL float ptr [0x0065dca8]         ; 004c6974 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c697a
    LEA EAX,[ESP + 0x2c]                ; 004c697d
    PUSH EAX                            ; 004c6981
    MOV EAX,dword ptr [ESI]             ; 004c6982 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c6984
    PUSH EAX                            ; 004c6987
    MOV EDI,0x3e000000                  ; 004c6988
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c698d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x006703ec]      ; 004c6992 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004c6998
    XOR EDX,EDX                         ; 004c699b
    MOV dword ptr [ESP + 0x50],EDI      ; 004c699d
    MOV dword ptr [ESP + 0x54],EDI      ; 004c69a1
    MOV dword ptr [ESP + 0x58],EDX      ; 004c69a5
    LEA EBX,[ESP + 0x38]                ; 004c69a9
    LEA EAX,[ESP + 0x50]                ; 004c69ad
    FLD float ptr [EAX]                 ; 004c69b1
    FMUL float ptr [0x0065dca8]         ; 004c69b3 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c69b9
    FLD float ptr [EAX + 0x4]           ; 004c69bb
    FMUL float ptr [0x0065dca8]         ; 004c69be | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c69c4
    FLD float ptr [EAX + 0x8]           ; 004c69c7
    FMUL float ptr [0x0065dca8]         ; 004c69ca | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c69d0
    LEA EAX,[ESP + 0x38]                ; 004c69d3
    PUSH EAX                            ; 004c69d7
    MOV EAX,dword ptr [ESI]             ; 004c69d8 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c69da
    PUSH EAX                            ; 004c69dd
    XOR ESI,ESI                         ; 004c69de
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c69e0
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 004c69e5
    LEA EBX,[ESP + 0x70]                ; 004c69ea
    ADD ESP,0x8                         ; 004c69ee
    LEA EAX,[ESP + 0x50]                ; 004c69f1
    MOV dword ptr [ESP + 0x50],ECX      ; 004c69f5
    MOV dword ptr [ESP + 0x54],EDI      ; 004c69f9
    MOV dword ptr [ESP + 0x58],ESI      ; 004c69fd
    MOV ESI,dword ptr [0x006703ec]      ; 004c6a01 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c6a07
    FMUL float ptr [0x0065dca8]         ; 004c6a09 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6a0f
    FLD float ptr [EAX + 0x4]           ; 004c6a11
    FMUL float ptr [0x0065dca8]         ; 004c6a14 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c6a1a
    FLD float ptr [EAX + 0x8]           ; 004c6a1d
    FMUL float ptr [0x0065dca8]         ; 004c6a20 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c6a26
    LEA EAX,[ESP + 0x68]                ; 004c6a29
    PUSH EAX                            ; 004c6a2d
    MOV EAX,dword ptr [ESI]             ; 004c6a2e | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c6a30
    PUSH EAX                            ; 004c6a35
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c6a36
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c6a3b
    PUSH 0x67ae9c                       ; 004c6a3e | g_FireEffectRainDropTexture
    MOV EDI,dword ptr [0x006703ec]      ; 004c6a43 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c6a49 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c6a4a
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c6a4f
    PUSH 0x0                            ; 004c6a52
    MOV EAX,[0x00823a74]                ; 004c6a54 | g_CurrentSceneCamera
    PUSH EBP                            ; 004c6a59
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004c6a5a
    PUSH EAX                            ; 004c6a5d
    CALL dword ptr [EBX + 0x4]          ; 004c6a5e
    FLD float ptr [EBP + 0x18]          ; 004c6a61
    FMUL double ptr [0x00629ffb]        ; 004c6a64 | DOUBLE_00629ffb
    MOV EAX,0xffff                      ; 004c6a6a
    MOV EDX,dword ptr [0x02d051f4]      ; 004c6a6f | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004c6a75
    SUB EAX,EDX                         ; 004c6a78
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c6a7a
    FILD dword ptr [ESP + 0x9c]         ; 004c6a81
    FMULP                               ; 004c6a88
    MOV ESI,0xd00000                    ; 004c6a8a | g_LightBufferPool[3][19960]
    MOV ECX,0x800000                    ; 004c6a8f | DAT_00800000
    MOV EBX,0xdc0000                    ; 004c6a94 | g_LightBufferPool[5][191992]
    MOV dword ptr [0x0068805c],ESI      ; 004c6a99 | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x0068802c],ECX      ; 004c6a9f | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688030],EBX      ; 004c6aa5 | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x00688060],EBX      ; 004c6aab | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],ECX      ; 004c6ab1 | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x006880bc],ECX      ; 004c6ab7 | g_RenderVertexBuffer[3].u
    MOV EDX,0x900000                    ; 004c6abd | g_CameraLoadImageReadBuffer+0x771b0
    MOV dword ptr [ESP + 0x98],EAX      ; 004c6ac2
    MOV dword ptr [0x00688090],EDX      ; 004c6ac9 | g_RenderVertexBuffer[2].v
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c6acf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x98]        ; 004c6ad4
    MOV EAX,dword ptr [ESP + 0x98]      ; 004c6adb
    MOV dword ptr [0x006880c0],EDX      ; 004c6ae2 | g_RenderVertexBuffer[3].v
    MOV [0x00688040],EAX                ; 004c6ae8 | g_RenderVertexBuffer[0].a
    MOV [0x00688070],EAX                ; 004c6aed | g_RenderVertexBuffer[1].a
    MOV [0x006880a0],EAX                ; 004c6af2 | g_RenderVertexBuffer[2].a
    MOV [0x006880d0],EAX                ; 004c6af7 | g_RenderVertexBuffer[3].a
    LEA EBX,[ESP + 0x80]                ; 004c6afc
    MOV EAX,EBP                         ; 004c6b03
    FLD float ptr [EAX]                 ; 004c6b05
    FMUL float ptr [0x0065dca8]         ; 004c6b07 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6b0d
    FLD float ptr [EAX + 0x4]           ; 004c6b0f
    FMUL float ptr [0x0065dca8]         ; 004c6b12 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c6b18
    FLD float ptr [EAX + 0x8]           ; 004c6b1b
    FMUL float ptr [0x0065dca8]         ; 004c6b1e | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c6b24
    PUSH 0x4                            ; 004c6b27
    PUSH 0x0                            ; 004c6b29
    PUSH 0x2d12dc0                      ; 004c6b2b | g_BillboardCameraUp
    LEA EAX,[ESP + 0x8c]                ; 004c6b30
    PUSH EAX                            ; 004c6b37
    MOV ESI,dword ptr [0x006810c8]      ; 004c6b38 | g_CDemonSetPtr
    PUSH ESI                            ; 004c6b3e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 004c6b3f
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004c6b44
    PUSH 0x1                            ; 004c6b47
    MOV EDI,dword ptr [0x006703ec]      ; 004c6b49 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c6b4f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c6b50
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c6b55
    XOR EAX,EAX                         ; 004c6b58
    MOV EBP,0x4                         ; 004c6b5a
    MOV dword ptr [ESP + 0x18],EAX      ; 004c6b5f
    MOV dword ptr [ESP + 0x14],EAX      ; 004c6b63
    MOV dword ptr [ESP + 0x10],EAX      ; 004c6b67
    MOV dword ptr [ESP + 0xc],EAX       ; 004c6b6b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c6b6f
    MOV EAX,0x3                         ; 004c6b73
    MOV EDI,0x1                         ; 004c6b78
    MOV dword ptr [ESP + 0x28],EAX      ; 004c6b7d
    LEA EAX,[ESP + 0x4]                 ; 004c6b81
    MOV EDX,dword ptr [0x006703ec]      ; 004c6b85 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c6b8b
    MOV dword ptr [ESP + 0xc],EBP       ; 004c6b8c
    MOV EBP,0x2                         ; 004c6b90
    PUSH EDX                            ; 004c6b95 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],EDI      ; 004c6b96
    MOV dword ptr [ESP + 0x2c],EBP      ; 004c6b9a
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 004c6b9e
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c6ba3
    XOR EBX,EBX                         ; 004c6ba6
    PUSH EBX                            ; 004c6ba8
    MOV ECX,dword ptr [0x006703ec]      ; 004c6ba9 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c6baf | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c6bb0
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c6bb5
    MOV EBX,dword ptr [0x006703ec]      ; 004c6bb8 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c6bbe | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c6bbf
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    MOV ECX,dword ptr [ESI]             ; 00610920
        ;   Label: LAB_00610920
    MOV dword ptr [EDI],ECX             ; 00610922
    MOV ECX,dword ptr [ESI + 0x4]       ; 00610924
    MOV dword ptr [EDI + 0x4],ECX       ; 00610927
    MOV ECX,dword ptr [ESI + 0x8]       ; 0061092a
    MOV dword ptr [EDI + 0x8],ECX       ; 0061092d
    ADD ESI,0xc                         ; 00610930
    ADD EDI,0xc                         ; 00610933
    PUSH EAX                            ; 00610936
    MOV ESI,dword ptr [0x006703ec]      ; 00610937 | g_CDemonRendererPtr2
    JMP 0x004c68de                      ; 0061093d
        ;   XREF to: 004c68de (UNCONDITIONAL_JUMP)  ; LAB_004c68de

