; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_render_FUN_004c5e90(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3i        Stack[-0x50]:12  local_50
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; CVector3i        Stack[-0x38]:12  local_38
; CVector3i        Stack[-0x2c]:12  local_2c
; CVector3f        Stack[-0x20]:12  local_20
; CVector3i        Stack[-0x14]:12  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c741d
;
; Referenced Globals:
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[1].r
;   undefined4 g_RenderVertexBuffer[1].g
;   undefined4 g_RenderVertexBuffer[1].b
;   undefined4 g_RenderVertexBuffer[2].u
;   undefined4 g_RenderVertexBuffer[2].v
;   undefined4 g_RenderVertexBuffer[2].r
;   ... and 9 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5e90
        ;   Label: core_fire.cpp_CTrail_render_FUN_004c5e90
    PUSH EBP                            ; 004c5e91
    SUB ESP,0x70                        ; 004c5e92
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004c5e95
    FLD float ptr [EBX + 0x10]          ; 004c5e99
    FLDZ                                ; 004c5e9c
    FCOMPP                              ; 004c5e9e
    FNSTSW AX                           ; 004c5ea0
    SAHF                                ; 004c5ea2
    JC 0x004c5eab                       ; 004c5ea3
        ;   XREF to: 004c5eab (CONDITIONAL_JUMP)  ; LAB_004c5eab
    ADD ESP,0x70                        ; 004c5ea5
    POP EBP                             ; 004c5ea8
    POP EBX                             ; 004c5ea9
    RET                                 ; 004c5eaa
    PUSH EDI                            ; 004c5eab
        ;   Label: LAB_004c5eab
    PUSH ESI                            ; 004c5eac
    MOV EDX,dword ptr [EBX + 0x20]      ; 004c5ead
    PUSH EDX                            ; 004c5eb0
    MOV ECX,dword ptr [0x006703ec]      ; 004c5eb1 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c5eb7 | g_CDemonRendererInstance
    MOV ESI,0x4                         ; 004c5eb8
    MOV EBP,0x3                         ; 004c5ebd
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c5ec2
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c5ec7
    XOR EDI,EDI                         ; 004c5eca
    MOV dword ptr [ESP + 0xc],ESI       ; 004c5ecc
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c5ed0
    MOV dword ptr [ESP + 0x18],EDI      ; 004c5ed4
    MOV dword ptr [ESP + 0x14],EDI      ; 004c5ed8
    MOV dword ptr [ESP + 0x10],EDI      ; 004c5edc
    MOV dword ptr [ESP + 0x20],EDI      ; 004c5ee0
    MOV dword ptr [ESP + 0x2c],EBP      ; 004c5ee4
    MOV ESI,0x1                         ; 004c5ee8
    MOV EDI,0x2                         ; 004c5eed
    MOV dword ptr [ESP + 0x24],ESI      ; 004c5ef2
    MOV dword ptr [ESP + 0x28],EDI      ; 004c5ef6
    MOV EAX,[0x006703ec]                ; 004c5efa | g_CDemonRendererPtr2
    PUSH dword ptr [EBX + 0x14]         ; 004c5eff
    PUSH EAX                            ; 004c5f02 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70 ; 004c5f03
        ;   XREF to: 0048ca70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 004c5f08
    PUSH ESI                            ; 004c5f0b
    MOV EDX,dword ptr [0x006703ec]      ; 004c5f0c | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c5f12 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c5f13
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c5f18
    PUSH EBX                            ; 004c5f1b
    MOV ECX,dword ptr [0x006703ec]      ; 004c5f1c | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c5f22 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c5f23
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c5f28
    LEA EAX,[ESP + 0x60]                ; 004c5f2b
    PUSH EAX                            ; 004c5f2f
    MOV ESI,dword ptr [0x006703ec]      ; 004c5f30 | g_CDemonRendererPtr2
    PUSH ESI                            ; 004c5f36 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_0048c800 ; 004c5f37
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_0048c800(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 004c5f3c
    PUSH 0x0                            ; 004c5f3f
    LEA EAX,[ESP + 0x64]                ; 004c5f41
    PUSH EAX                            ; 004c5f45
    MOV EDI,dword ptr [0x006703ec]      ; 004c5f46 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c5f4c | g_CDemonRendererInstance
    XOR EBP,EBP                         ; 004c5f4d
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c5f4f
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004c5f54
    MOV dword ptr [ESP + 0x3c],EBP      ; 004c5f57
    MOV dword ptr [ESP + 0x40],EBP      ; 004c5f5b
    MOV dword ptr [ESP + 0x44],EBP      ; 004c5f5f
    FLD float ptr [EBX + 0xc]           ; 004c5f63
    FMUL float ptr [EBX + 0x14]         ; 004c5f66
    FSTP float ptr [ESP + 0x3c]         ; 004c5f69
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c5f6d
    LEA EBX,[ESP + 0x54]                ; 004c5f71
    MOV dword ptr [ESP + 0x40],EAX      ; 004c5f75
    LEA EAX,[ESP + 0x3c]                ; 004c5f79
    MOV EDX,dword ptr [0x006703ec]      ; 004c5f7d | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c5f83
    FMUL float ptr [0x0065dca8]         ; 004c5f85 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5f8b
    FLD float ptr [EAX + 0x4]           ; 004c5f8d
    FMUL float ptr [0x0065dca8]         ; 004c5f90 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5f96
    FLD float ptr [EAX + 0x8]           ; 004c5f99
    FMUL float ptr [0x0065dca8]         ; 004c5f9c | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5fa2
    LEA EAX,[ESP + 0x54]                ; 004c5fa5
    PUSH EAX                            ; 004c5fa9
    MOV EAX,dword ptr [EDX]             ; 004c5faa | g_CDemonRendererInstance
    PUSH EAX                            ; 004c5fac
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c5fad
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c5fb2
    MOV AH,byte ptr [ESP + 0x3f]        ; 004c5fb5
    XOR AH,0x80                         ; 004c5fb9
    MOV EDX,dword ptr [0x006703ec]      ; 004c5fbc | g_CDemonRendererPtr2
    MOV byte ptr [ESP + 0x3f],AH        ; 004c5fc2
    POP ESI                             ; 004c5fc6
    POP EDI                             ; 004c5fc7
    LEA EBX,[ESP + 0x64]                ; 004c5fc8
    LEA EAX,[ESP + 0x34]                ; 004c5fcc
    FLD float ptr [EAX]                 ; 004c5fd0
    FMUL float ptr [0x0065dca8]         ; 004c5fd2 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5fd8
    FLD float ptr [EAX + 0x4]           ; 004c5fda
    FMUL float ptr [0x0065dca8]         ; 004c5fdd | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5fe3
    FLD float ptr [EAX + 0x8]           ; 004c5fe6
    FMUL float ptr [0x0065dca8]         ; 004c5fe9 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5fef
    LEA EAX,[ESP + 0x64]                ; 004c5ff2
    PUSH EAX                            ; 004c5ff6
    MOV EAX,dword ptr [EDX]             ; 004c5ff7 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c5ff9
    PUSH EAX                            ; 004c5ffc
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c5ffd
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c6002
    MOV DL,byte ptr [ESP + 0x3b]        ; 004c6005
    LEA EBX,[ESP + 0x40]                ; 004c6009
    XOR DL,0x80                         ; 004c600d
    LEA EAX,[ESP + 0x34]                ; 004c6010
    MOV byte ptr [ESP + 0x3b],DL        ; 004c6014
    MOV EDX,dword ptr [0x006703ec]      ; 004c6018 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c601e
    FMUL float ptr [0x0065dca8]         ; 004c6020 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6026
    FLD float ptr [EAX + 0x4]           ; 004c6028
    FMUL float ptr [0x0065dca8]         ; 004c602b | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c6031
    FLD float ptr [EAX + 0x8]           ; 004c6034
    FMUL float ptr [0x0065dca8]         ; 004c6037 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c603d
    LEA EAX,[ESP + 0x40]                ; 004c6040
    PUSH EAX                            ; 004c6044
    MOV EAX,dword ptr [EDX]             ; 004c6045 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c6047
    PUSH EAX                            ; 004c604a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c604b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c6050
    MOV DH,byte ptr [ESP + 0x37]        ; 004c6053
    LEA EBX,[ESP + 0x28]                ; 004c6057
    XOR DH,0x80                         ; 004c605b
    LEA EAX,[ESP + 0x34]                ; 004c605e
    MOV byte ptr [ESP + 0x37],DH        ; 004c6062
    MOV EDX,dword ptr [0x006703ec]      ; 004c6066 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c606c
    FMUL float ptr [0x0065dca8]         ; 004c606e | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6074
    FLD float ptr [EAX + 0x4]           ; 004c6076
    FMUL float ptr [0x0065dca8]         ; 004c6079 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c607f
    FLD float ptr [EAX + 0x8]           ; 004c6082
    FMUL float ptr [0x0065dca8]         ; 004c6085 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c608b
    LEA EAX,[ESP + 0x28]                ; 004c608e
    PUSH EAX                            ; 004c6092
    MOV EAX,dword ptr [EDX]             ; 004c6093 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c6095
    PUSH EAX                            ; 004c609a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c609b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 004c60a0
    MOV EBX,0xf80000                    ; 004c60a5 | g_LightBufferPool[11][183800]
    LEA EAX,[ESP + 0x8]                 ; 004c60aa
    MOV EDX,dword ptr [0x006703ec]      ; 004c60ae | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004c60b4
    MOV dword ptr [0x0068802c],ECX      ; 004c60b7 | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688030],EBX      ; 004c60bd | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],EBX      ; 004c60c3 | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],EBX      ; 004c60c9 | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],EBX      ; 004c60cf | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],ECX      ; 004c60d5 | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],ECX      ; 004c60db | g_RenderVertexBuffer[3].u
    PUSH EAX                            ; 004c60e1
    MOV dword ptr [0x006880c0],ECX      ; 004c60e2 | g_RenderVertexBuffer[3].v
    MOV EBX,0xffff                      ; 004c60e8
    PUSH EDX                            ; 004c60ed | g_CDemonRendererInstance
    MOV dword ptr [0x00688034],EBX      ; 004c60ee | g_RenderVertexBuffer[0].r
    MOV dword ptr [0x00688038],EBX      ; 004c60f4 | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],EBX      ; 004c60fa | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],EBX      ; 004c6100 | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],EBX      ; 004c6106 | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],EBX      ; 004c610c | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],EBX      ; 004c6112 | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],EBX      ; 004c6118 | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],EBX      ; 004c611e | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x006880c4],EBX      ; 004c6124 | g_RenderVertexBuffer[3].r
    MOV dword ptr [0x006880c8],EBX      ; 004c612a | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],EBX      ; 004c6130 | g_RenderVertexBuffer[3].b
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0 ; 004c6136
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c613b
    MOV ECX,dword ptr [0x006703ec]      ; 004c613e | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c6144 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c6145
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c614a
    PUSH EBP                            ; 004c614d
    MOV EBX,dword ptr [0x006703ec]      ; 004c614e | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c6154 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c6155
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c615a
    ADD ESP,0x70                        ; 004c615d
    POP EBP                             ; 004c6160
    POP EBX                             ; 004c6161
    RET                                 ; 004c6162

