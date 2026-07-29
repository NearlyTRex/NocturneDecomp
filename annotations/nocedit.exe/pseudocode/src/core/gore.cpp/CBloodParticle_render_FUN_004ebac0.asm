; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004ebac0(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0xf0]:4  fStack_f0
; float            Stack[-0xec]:4  fStack_ec
; CVector3f        Stack[-0xe8]:12  CStack_e8
; CVector3i        Stack[-0xdc]:12  CStack_dc
; CVector3i        Stack[-0xd0]:12  local_d0
; CVector3i        Stack[-0xc4]:12  CStack_c4
; CVector3i        Stack[-0xb8]:12  local_b8
; CVector3i        Stack[-0xac]:12  CStack_ac
; float            Stack[-0xa0]:4  fStack_a0
; float            Stack[-0x9c]:4  fStack_9c
; float            Stack[-0x98]:4  fStack_98
; CVector3i        Stack[-0x94]:12  local_94
; CVector3i        Stack[-0x88]:12  local_88
; CVector3i        Stack[-0x7c]:12  local_7c
; float            Stack[-0x70]:4  fStack_70
; float            Stack[-0x6c]:4  fStack_6c
; float            Stack[-0x68]:4  fStack_68
; CVector3i        Stack[-0x64]:12  CStack_64
; CVector3i        Stack[-0x58]:12  local_58
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; Referenced Globals:
;   double DOUBLE_0062e2ea = 0.700000000000000
;   double DOUBLE_0062e2f2 = -0.100000000000000
;   double DOUBLE_0062e2fa = 0.100000000000000
;   float FLOAT_0065f024 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_BloodParticleTexture
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[1].r
;   ... and 13 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;   engine_special.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebac0
        ;   Label: core_gore.cpp_CBloodParticle_render_FUN_004ebac0
    PUSH ESI                            ; 004ebac1
    PUSH EDI                            ; 004ebac2
    PUSH EBP                            ; 004ebac3
    MOV EBP,ESP                         ; 004ebac4
    SUB ESP,0xe4                        ; 004ebac6
    AND ESP,0xfffffff8                  ; 004ebacc
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ebacf
    MOV ESI,dword ptr [0x006703ec]      ; 004ebad2 | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0xa0]                ; 004ebad8
    MOV EAX,EDI                         ; 004ebadf
    MOV ESI,dword ptr [ESI]             ; 004ebae1 | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 004ebae3
    FMUL float ptr [0x0065f024]         ; 004ebae5 | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebaeb
    FLD float ptr [EAX + 0x4]           ; 004ebaed
    FMUL float ptr [0x0065f024]         ; 004ebaf0 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebaf6
    FLD float ptr [EAX + 0x8]           ; 004ebaf9
    FMUL float ptr [0x0065f024]         ; 004ebafc | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebb02
    LEA EAX,[ESP + 0xa0]                ; 004ebb05
    PUSH EAX                            ; 004ebb0c
    PUSH ESI                            ; 004ebb0d
    CALL engine_special.cpp_transformPoint_FUN_005b5a25 ; 004ebb0e
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV AH,byte ptr [ESI + 0x13]        ; 004ebb13
    ADD ESP,0x8                         ; 004ebb16
    TEST AH,0x80                        ; 004ebb19
    JZ 0x004ebb25                       ; 004ebb1c
        ;   XREF to: 004ebb25 (CONDITIONAL_JUMP)  ; LAB_004ebb25
    MOV ESP,EBP                         ; 004ebb1e
        ;   Label: LAB_004ebb1e
    POP EBP                             ; 004ebb20
    POP EDI                             ; 004ebb21
    POP ESI                             ; 004ebb22
    POP EBX                             ; 004ebb23
    RET                                 ; 004ebb24
    PUSH EDI                            ; 004ebb25
        ;   Label: LAB_004ebb25
    MOV EDX,dword ptr [0x006703ec]      ; 004ebb26 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004ebb2c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004ebb2d
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ebb32
    PUSH 0x0                            ; 004ebb35
    PUSH 0x2d83390                      ; 004ebb37 | g_ParticleCameraRotation
    MOV ECX,dword ptr [0x006703ec]      ; 004ebb3c | g_CDemonRendererPtr2
    MOV EBX,0xbdcccccd                  ; 004ebb42
    PUSH ECX                            ; 004ebb47 | g_CDemonRendererInstance
    MOV ESI,EBX                         ; 004ebb48
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004ebb4a
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ebb4f
    XOR EAX,EAX                         ; 004ebb52
    MOV dword ptr [ESP + 0xac],EBX      ; 004ebb54
    MOV dword ptr [ESP + 0xb0],EBX      ; 004ebb5b
    MOV dword ptr [ESP + 0xb4],EAX      ; 004ebb62
    LEA EBX,[ESP + 0x40]                ; 004ebb69
    LEA EAX,[ESP + 0xac]                ; 004ebb6d
    MOV EDX,dword ptr [0x006703ec]      ; 004ebb74 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ebb7a
    FMUL float ptr [0x0065f024]         ; 004ebb7c | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebb82
    FLD float ptr [EAX + 0x4]           ; 004ebb84
    FMUL float ptr [0x0065f024]         ; 004ebb87 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebb8d
    FLD float ptr [EAX + 0x8]           ; 004ebb90
    FMUL float ptr [0x0065f024]         ; 004ebb93 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebb99
    LEA EAX,[ESP + 0x40]                ; 004ebb9c
    PUSH EAX                            ; 004ebba0
    MOV EAX,dword ptr [EDX]             ; 004ebba1 | g_CDemonRendererInstance
    PUSH EAX                            ; 004ebba3
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebba4
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3dcccccd                  ; 004ebba9
    LEA EAX,[ESP + 0xb4]                ; 004ebbae
    ADD ESP,0x8                         ; 004ebbb5
    MOV ECX,ESI                         ; 004ebbb8
    XOR EBX,EBX                         ; 004ebbba
    MOV dword ptr [ESP + 0xac],EDX      ; 004ebbbc
    MOV dword ptr [ESP + 0xb0],ECX      ; 004ebbc3
    MOV dword ptr [ESP + 0xb4],EBX      ; 004ebbca
    LEA EBX,[ESP + 0x7c]                ; 004ebbd1
    MOV EDX,dword ptr [0x006703ec]      ; 004ebbd5 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ebbdb
    FMUL float ptr [0x0065f024]         ; 004ebbdd | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebbe3
    FLD float ptr [EAX + 0x4]           ; 004ebbe5
    FMUL float ptr [0x0065f024]         ; 004ebbe8 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebbee
    FLD float ptr [EAX + 0x8]           ; 004ebbf1
    FMUL float ptr [0x0065f024]         ; 004ebbf4 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebbfa
    LEA EAX,[ESP + 0x7c]                ; 004ebbfd
    PUSH EAX                            ; 004ebc01
    MOV EAX,dword ptr [EDX]             ; 004ebc02 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004ebc04
    PUSH EAX                            ; 004ebc07
    MOV ESI,0x3dcccccd                  ; 004ebc08
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebc0d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x30]                ; 004ebc12
    LEA EAX,[ESP + 0xb4]                ; 004ebc16
    ADD ESP,0x8                         ; 004ebc1d
    XOR EDX,EDX                         ; 004ebc20
    MOV dword ptr [ESP + 0xac],ESI      ; 004ebc22
    MOV dword ptr [ESP + 0xb0],ESI      ; 004ebc29
    MOV dword ptr [ESP + 0xb4],EDX      ; 004ebc30
    MOV EDX,dword ptr [0x006703ec]      ; 004ebc37 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ebc3d
    FMUL float ptr [0x0065f024]         ; 004ebc3f | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebc45
    FLD float ptr [EAX + 0x4]           ; 004ebc47
    FMUL float ptr [0x0065f024]         ; 004ebc4a | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebc50
    FLD float ptr [EAX + 0x8]           ; 004ebc53
    FMUL float ptr [0x0065f024]         ; 004ebc56 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebc5c
    LEA EAX,[ESP + 0x28]                ; 004ebc5f
    PUSH EAX                            ; 004ebc63
    MOV EAX,dword ptr [EDX]             ; 004ebc64 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004ebc66
    PUSH EAX                            ; 004ebc69
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebc6a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbdcccccd                  ; 004ebc6f
    LEA EBX,[ESP + 0x6c]                ; 004ebc74
    LEA EAX,[ESP + 0xb4]                ; 004ebc78
    ADD ESP,0x8                         ; 004ebc7f
    MOV EDX,dword ptr [0x006703ec]      ; 004ebc82 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0xb0],ESI      ; 004ebc88
    XOR ESI,ESI                         ; 004ebc8f
    MOV dword ptr [ESP + 0xac],ECX      ; 004ebc91
    MOV dword ptr [ESP + 0xb4],ESI      ; 004ebc98
    FLD float ptr [EAX]                 ; 004ebc9f
    FMUL float ptr [0x0065f024]         ; 004ebca1 | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebca7
    FLD float ptr [EAX + 0x4]           ; 004ebca9
    FMUL float ptr [0x0065f024]         ; 004ebcac | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebcb2
    FLD float ptr [EAX + 0x8]           ; 004ebcb5
    FMUL float ptr [0x0065f024]         ; 004ebcb8 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebcbe
    LEA EAX,[ESP + 0x64]                ; 004ebcc1
    PUSH EAX                            ; 004ebcc5
    MOV EAX,dword ptr [EDX]             ; 004ebcc6 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004ebcc8
    PUSH EAX                            ; 004ebccd
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebcce
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ebcd3
    PUSH 0x67b9b0                       ; 004ebcd6 | g_BloodParticleTexture
    MOV EAX,[0x006703ec]                ; 004ebcdb | g_CDemonRendererPtr2
    PUSH EAX                            ; 004ebce0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ebce1
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,dword ptr [EDI + 0x3c]      ; 004ebce6
    AND EAX,0x3                         ; 004ebce9
    SHL EAX,0x16                        ; 004ebcec
    LEA EDX,[EAX + 0x80000]             ; 004ebcef
    MOV EAX,dword ptr [EDI + 0x3c]      ; 004ebcf5
    LEA EBX,[ESP + 0x78]                ; 004ebcf8
    SAR EAX,0x2                         ; 004ebcfc
    ADD ESP,0x8                         ; 004ebcff
    AND EAX,0x3                         ; 004ebd02
    MOV dword ptr [0x0068802c],EDX      ; 004ebd05 | g_RenderVertexBuffer[0].u
    SHL EAX,0x16                        ; 004ebd0b
    LEA ECX,[EDX + 0x300000]            ; 004ebd0e
    ADD EAX,0x80000                     ; 004ebd14
    MOV dword ptr [0x0068805c],ECX      ; 004ebd19 | g_RenderVertexBuffer[1].u
    MOV [0x00688030],EAX                ; 004ebd1f | g_RenderVertexBuffer[0].v
    MOV [0x00688060],EAX                ; 004ebd24 | g_RenderVertexBuffer[1].v
    ADD EAX,0x300000                    ; 004ebd29
    MOV dword ptr [0x0068808c],ECX      ; 004ebd2e | g_RenderVertexBuffer[2].u
    MOV [0x00688090],EAX                ; 004ebd34 | g_RenderVertexBuffer[2].v
    MOV [0x006880c0],EAX                ; 004ebd39 | g_RenderVertexBuffer[3].v
    MOV EAX,EDI                         ; 004ebd3e
    MOV dword ptr [0x006880bc],EDX      ; 004ebd40 | g_RenderVertexBuffer[3].u
    FLD float ptr [EAX]                 ; 004ebd46
    FMUL float ptr [0x0065f024]         ; 004ebd48 | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebd4e
    FLD float ptr [EAX + 0x4]           ; 004ebd50
    FMUL float ptr [0x0065f024]         ; 004ebd53 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebd59
    FLD float ptr [EAX + 0x8]           ; 004ebd5c
    FMUL float ptr [0x0065f024]         ; 004ebd5f | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebd65
    PUSH 0x4                            ; 004ebd68
    PUSH ESI                            ; 004ebd6a
    PUSH 0x2d8339c                      ; 004ebd6b | CVector3i_02d8339c
    LEA EAX,[ESP + 0x7c]                ; 004ebd70
    PUSH EAX                            ; 004ebd74
    MOV EDX,dword ptr [0x006810c8]      ; 004ebd75 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 004ebd7b | g_CDemonSetInstance
    LEA EBX,[ESP + 0xec]                ; 004ebd7c
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 004ebd83
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    LEA ECX,[ESP + 0xe4]                ; 004ebd88
    LEA EDX,[ESP + 0xe8]                ; 004ebd8f
    MOV EAX,dword ptr [EDI + 0x38]      ; 004ebd96
    ADD ESP,0x14                        ; 004ebd99
    CMP EAX,0x1                         ; 004ebd9c
    JNC 0x004ec275                      ; 004ebd9f
        ;   XREF to: 004ec275 (CONDITIONAL_JUMP)  ; LAB_004ec275
    MOV dword ptr [ECX],0x2000          ; 004ebda5
        ;   Label: LAB_004ebda5
    MOV dword ptr [EBX],0x0             ; 004ebdab
    MOV dword ptr [EDX],0x0             ; 004ebdb1
    XOR ECX,ECX                         ; 004ebdb7
        ;   Label: LAB_004ebdb7
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ebdb9
        ;   Label: LAB_004ebdb9
    MOV EDX,dword ptr [ECX + 0x688034]  ; 004ebdc0 | g_RenderVertexBuffer[0].r | g_RenderVertexBuffer[1].r
    IMUL EDX                            ; 004ebdc6
    SHRD EAX,EDX,0x10                   ; 004ebdc8
    MOV EDX,dword ptr [ECX + 0x688038]  ; 004ebdcc | g_RenderVertexBuffer[0].g | g_RenderVertexBuffer[1].g
    MOV dword ptr [ECX + 0x688034],EAX  ; 004ebdd2 | g_RenderVertexBuffer[0].r | g_RenderVertexBuffer[1].r
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ebdd8
    IMUL EDX                            ; 004ebddf
    SHRD EAX,EDX,0x10                   ; 004ebde1
    MOV EDX,dword ptr [ECX + 0x68803c]  ; 004ebde5 | g_RenderVertexBuffer[0].b | g_RenderVertexBuffer[1].b
    MOV dword ptr [ECX + 0x688038],EAX  ; 004ebdeb | g_RenderVertexBuffer[0].g | g_RenderVertexBuffer[1].g
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ebdf1
    ADD ECX,0x30                        ; 004ebdf8
    IMUL EDX                            ; 004ebdfb
    SHRD EAX,EDX,0x10                   ; 004ebdfd
    MOV dword ptr [ECX + 0x68800c],EAX  ; 004ebe01 | g_RenderVertexBuffer[0].b | g_RenderVertexBuffer[1].b
    CMP ECX,0xc0                        ; 004ebe07
    JNZ 0x004ebdb9                      ; 004ebe0d
        ;   XREF to: 004ebdb9 (CONDITIONAL_JUMP)  ; LAB_004ebdb9
    PUSH 0x0                            ; 004ebe0f
    MOV EAX,[0x00823a74]                ; 004ebe11 | g_CurrentSceneCamera
    PUSH EDI                            ; 004ebe16
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004ebe17
    PUSH EAX                            ; 004ebe1a
    CALL dword ptr [EDX + 0x4]          ; 004ebe1b
    MOV EAX,0xffff                      ; 004ebe1e
    MOV EBX,dword ptr [0x02d051f4]      ; 004ebe23 | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004ebe29
    SUB EAX,EBX                         ; 004ebe2c
    PUSH EAX                            ; 004ebe2e
    MOV ESI,dword ptr [0x006703ec]      ; 004ebe2f | g_CDemonRendererPtr2
    PUSH ESI                            ; 004ebe35 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004ebe36
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ebe3b
    PUSH 0x2d83368                      ; 004ebe3e | g_GoreQuadPrimitive
    MOV EAX,[0x006703ec]                ; 004ebe43 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004ebe48 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0 ; 004ebe49
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ebe4e
    MOV EDX,dword ptr [0x006703ec]      ; 004ebe51 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004ebe57 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004ebe58
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ebe5d
    MOV EAX,dword ptr [EDI]             ; 004ebe60
    MOV dword ptr [ESP + 0x10],EAX      ; 004ebe62
    LEA EAX,[EDI + 0x4]                 ; 004ebe66
    MOV EAX,dword ptr [EAX]             ; 004ebe69
    MOV dword ptr [ESP + 0x14],EAX      ; 004ebe6b
    LEA EAX,[EDI + 0x8]                 ; 004ebe6f
    MOV EAX,dword ptr [EAX]             ; 004ebe72
    LEA EDX,[EDI + 0xc]                 ; 004ebe74
    MOV dword ptr [ESP + 0x18],EAX      ; 004ebe77
    MOV EAX,dword ptr [EDX]             ; 004ebe7b
    MOV dword ptr [ESP + 0x88],EAX      ; 004ebe7d
    LEA EAX,[EDX + 0x4]                 ; 004ebe84
    MOV EBX,0x3ccccccd                  ; 004ebe87
    MOV EAX,dword ptr [EAX]             ; 004ebe8c
    MOV ECX,0x3f800000                  ; 004ebe8e
    MOV dword ptr [ESP + 0x8c],EAX      ; 004ebe93
    LEA EAX,[EDX + 0x8]                 ; 004ebe9a
    XOR ESI,ESI                         ; 004ebe9d
    MOV dword ptr [ESP + 0x8],ECX       ; 004ebe9f
    MOV EAX,dword ptr [EAX]             ; 004ebea3
    MOV dword ptr [ESP + 0xc],EBX       ; 004ebea5
    MOV dword ptr [ESP + 0x90],EAX      ; 004ebea9
    FLD float ptr [ESP + 0xc]           ; 004ebeb0
        ;   Label: LAB_004ebeb0
    FLD ST0                             ; 004ebeb4
    FLD double ptr [0x0062e2ea]         ; 004ebeb6 | DOUBLE_0062e2ea
    FXCH                                ; 004ebebc
    FMUL ST1                            ; 004ebebe
    FLD float ptr [ESP + 0x8]           ; 004ebec0
    FMUL ST2                            ; 004ebec4
    FLD float ptr [ESP + 0x88]          ; 004ebec6
    FXCH ST2                            ; 004ebecd
    FSTP ST4                            ; 004ebecf
    FXCH ST3                            ; 004ebed1
    FSTP float ptr [ESP + 0xc]          ; 004ebed3
    FMUL float ptr [ESP + 0xc]          ; 004ebed7
    FLD float ptr [ESP + 0xc]           ; 004ebedb
    FMUL float ptr [EDI + 0x1c]         ; 004ebedf
    FLD float ptr [ESP + 0x90]          ; 004ebee2
    FXCH                                ; 004ebee9
    FSUBR float ptr [ESP + 0x8c]        ; 004ebeeb
    FXCH                                ; 004ebef2
    FMUL float ptr [ESP + 0xc]          ; 004ebef4
    FXCH                                ; 004ebef8
    FST float ptr [ESP + 0x8c]          ; 004ebefa
    FMUL float ptr [ESP + 0xc]          ; 004ebf01
    FLD float ptr [ESP + 0x10]          ; 004ebf05
    LEA EAX,[ESP + 0x10]                ; 004ebf09
    FLD float ptr [ESP + 0x14]          ; 004ebf0d
    PUSH EAX                            ; 004ebf11
    MOV EAX,[0x006703ec]                ; 004ebf12 | g_CDemonRendererPtr2
    FXCH ST5                            ; 004ebf17
    FSTP ST6                            ; 004ebf19
    FXCH ST5                            ; 004ebf1b
    FSTP float ptr [ESP + 0xc]          ; 004ebf1d
    FLD float ptr [ESP + 0x1c]          ; 004ebf21
    PUSH EAX                            ; 004ebf25 | g_CDemonRendererInstance
    FXCH ST3                            ; 004ebf26
    FSTP float ptr [ESP + 0x60]         ; 004ebf28
    FXCH                                ; 004ebf2c
    FSTP float ptr [ESP + 0x68]         ; 004ebf2e
    FXCH ST3                            ; 004ebf32
    FSUB float ptr [ESP + 0x60]         ; 004ebf34
    FXCH                                ; 004ebf38
    FSUB float ptr [ESP + 0x68]         ; 004ebf3a
    FXCH                                ; 004ebf3e
    FSTP float ptr [ESP + 0x18]         ; 004ebf40
    FXCH ST2                            ; 004ebf44
    FSTP float ptr [ESP + 0x64]         ; 004ebf46
    FSUB float ptr [ESP + 0x64]         ; 004ebf4a
    FXCH                                ; 004ebf4e
    FSTP float ptr [ESP + 0x20]         ; 004ebf50
    FSTP float ptr [ESP + 0x1c]         ; 004ebf54
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004ebf58
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ebf5d
    PUSH 0x0                            ; 004ebf60
    PUSH 0x2d83390                      ; 004ebf62 | g_ParticleCameraRotation
    MOV EDX,dword ptr [0x006703ec]      ; 004ebf67 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004ebf6d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004ebf6e
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ebf73
    FLD float ptr [ESP + 0x8]           ; 004ebf76
    FST double ptr [ESP]                ; 004ebf7a
    FMUL double ptr [0x0062e2f2]        ; 004ebf7d | DOUBLE_0062e2f2
    LEA EBX,[ESP + 0x1c]                ; 004ebf83
    MOV EDX,dword ptr [0x006703ec]      ; 004ebf87 | g_CDemonRendererPtr2
    FSTP float ptr [ESP + 0xac]         ; 004ebf8d
    MOV EAX,dword ptr [ESP + 0xac]      ; 004ebf94
    XOR ECX,ECX                         ; 004ebf9b
    MOV dword ptr [ESP + 0xe0],EAX      ; 004ebf9d
    MOV dword ptr [ESP + 0xb0],EAX      ; 004ebfa4
    LEA EAX,[ESP + 0xac]                ; 004ebfab
    MOV dword ptr [ESP + 0xb4],ECX      ; 004ebfb2
    FLD float ptr [EAX]                 ; 004ebfb9
    FMUL float ptr [0x0065f024]         ; 004ebfbb | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebfc1
    FLD float ptr [EAX + 0x4]           ; 004ebfc3
    FMUL float ptr [0x0065f024]         ; 004ebfc6 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebfcc
    FLD float ptr [EAX + 0x8]           ; 004ebfcf
    FMUL float ptr [0x0065f024]         ; 004ebfd2 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebfd8
    LEA EAX,[ESP + 0x1c]                ; 004ebfdb
    PUSH EAX                            ; 004ebfdf
    MOV EAX,dword ptr [EDX]             ; 004ebfe0 | g_CDemonRendererInstance
    PUSH EAX                            ; 004ebfe2
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebfe3
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ebfe8
    FLD double ptr [ESP]                ; 004ebfeb
    FMUL double ptr [0x0062e2fa]        ; 004ebfee | DOUBLE_0062e2fa
    XOR EBX,EBX                         ; 004ebff4
    FSTP float ptr [ESP + 0xdc]         ; 004ebff6
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ebffd
    MOV dword ptr [ESP + 0xb4],EBX      ; 004ec004
    MOV dword ptr [ESP + 0xac],EAX      ; 004ec00b
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004ec012
    LEA EBX,[ESP + 0x4c]                ; 004ec019
    MOV dword ptr [ESP + 0xb0],EAX      ; 004ec01d
    LEA EAX,[ESP + 0xac]                ; 004ec024
    MOV EDX,dword ptr [0x006703ec]      ; 004ec02b | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ec031
    FMUL float ptr [0x0065f024]         ; 004ec033 | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec039
    FLD float ptr [EAX + 0x4]           ; 004ec03b
    FMUL float ptr [0x0065f024]         ; 004ec03e | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec044
    FLD float ptr [EAX + 0x8]           ; 004ec047
    FMUL float ptr [0x0065f024]         ; 004ec04a | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec050
    LEA EAX,[ESP + 0x4c]                ; 004ec053
    PUSH EAX                            ; 004ec057
    MOV EAX,dword ptr [EDX]             ; 004ec058 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004ec05a
    PUSH EAX                            ; 004ec05d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec05e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ec063
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ec066
    MOV dword ptr [ESP + 0xac],EAX      ; 004ec06d
    MOV dword ptr [ESP + 0xb0],EAX      ; 004ec074
    XOR EAX,EAX                         ; 004ec07b
    LEA EBX,[ESP + 0x94]                ; 004ec07d
    MOV dword ptr [ESP + 0xb4],EAX      ; 004ec084
    LEA EAX,[ESP + 0xac]                ; 004ec08b
    MOV EDX,dword ptr [0x006703ec]      ; 004ec092 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ec098
    FMUL float ptr [0x0065f024]         ; 004ec09a | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec0a0
    FLD float ptr [EAX + 0x4]           ; 004ec0a2
    FMUL float ptr [0x0065f024]         ; 004ec0a5 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec0ab
    FLD float ptr [EAX + 0x8]           ; 004ec0ae
    FMUL float ptr [0x0065f024]         ; 004ec0b1 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec0b7
    LEA EAX,[ESP + 0x94]                ; 004ec0ba
    PUSH EAX                            ; 004ec0c1
    MOV EAX,dword ptr [EDX]             ; 004ec0c2 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004ec0c4
    PUSH EAX                            ; 004ec0c7
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec0c8
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ec0cd
    LEA EBX,[ESP + 0x34]                ; 004ec0d0
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004ec0d4
    XOR EDX,EDX                         ; 004ec0db
    MOV dword ptr [ESP + 0xac],EAX      ; 004ec0dd
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ec0e4
    MOV dword ptr [ESP + 0xb4],EDX      ; 004ec0eb
    MOV dword ptr [ESP + 0xb0],EAX      ; 004ec0f2
    LEA EAX,[ESP + 0xac]                ; 004ec0f9
    MOV EDX,dword ptr [0x006703ec]      ; 004ec100 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ec106
    FMUL float ptr [0x0065f024]         ; 004ec108 | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec10e
    FLD float ptr [EAX + 0x4]           ; 004ec110
    FMUL float ptr [0x0065f024]         ; 004ec113 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec119
    FLD float ptr [EAX + 0x8]           ; 004ec11c
    FMUL float ptr [0x0065f024]         ; 004ec11f | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec125
    LEA EAX,[ESP + 0x34]                ; 004ec128
    PUSH EAX                            ; 004ec12c
    MOV EAX,dword ptr [EDX]             ; 004ec12d | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004ec12f
    PUSH EAX                            ; 004ec134
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec135
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ec13a
    LEA EBX,[ESP + 0x70]                ; 004ec13d
    LEA EAX,[ESP + 0x10]                ; 004ec141
    FLD float ptr [EAX]                 ; 004ec145
    FMUL float ptr [0x0065f024]         ; 004ec147 | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec14d
    FLD float ptr [EAX + 0x4]           ; 004ec14f
    FMUL float ptr [0x0065f024]         ; 004ec152 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec158
    FLD float ptr [EAX + 0x8]           ; 004ec15b
    FMUL float ptr [0x0065f024]         ; 004ec15e | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec164
    PUSH 0x4                            ; 004ec167
    PUSH 0x0                            ; 004ec169
    PUSH 0x2d8339c                      ; 004ec16b | CVector3i_02d8339c
    LEA EAX,[ESP + 0x7c]                ; 004ec170
    PUSH EAX                            ; 004ec174
    MOV ECX,dword ptr [0x006810c8]      ; 004ec175 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004ec17b | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 004ec17c
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004ec181
    XOR ECX,ECX                         ; 004ec184
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ec186
        ;   Label: LAB_004ec186
    MOV EDX,dword ptr [ECX + 0x688034]  ; 004ec18d | g_RenderVertexBuffer[0].r | g_RenderVertexBuffer[1].r
    IMUL EDX                            ; 004ec193
    SHRD EAX,EDX,0x10                   ; 004ec195
    MOV EDX,dword ptr [ECX + 0x688038]  ; 004ec199 | g_RenderVertexBuffer[0].g | g_RenderVertexBuffer[1].g
    MOV dword ptr [ECX + 0x688034],EAX  ; 004ec19f | g_RenderVertexBuffer[0].r | g_RenderVertexBuffer[1].r
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ec1a5
    IMUL EDX                            ; 004ec1ac
    SHRD EAX,EDX,0x10                   ; 004ec1ae
    MOV EDX,dword ptr [ECX + 0x68803c]  ; 004ec1b2 | g_RenderVertexBuffer[0].b | g_RenderVertexBuffer[1].b
    MOV dword ptr [ECX + 0x688038],EAX  ; 004ec1b8 | g_RenderVertexBuffer[0].g | g_RenderVertexBuffer[1].g
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ec1be
    ADD ECX,0x30                        ; 004ec1c5
    IMUL EDX                            ; 004ec1c8
    SHRD EAX,EDX,0x10                   ; 004ec1ca
    MOV dword ptr [ECX + 0x68800c],EAX  ; 004ec1ce | g_RenderVertexBuffer[0].b | g_RenderVertexBuffer[1].b
    CMP ECX,0xc0                        ; 004ec1d4
    JNZ 0x004ec186                      ; 004ec1da
        ;   XREF to: 004ec186 (CONDITIONAL_JUMP)  ; LAB_004ec186
    PUSH 0x0                            ; 004ec1dc
    MOV EAX,[0x00823a74]                ; 004ec1de | g_CurrentSceneCamera
    PUSH EDI                            ; 004ec1e3
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004ec1e4
    PUSH EAX                            ; 004ec1e7
    CALL dword ptr [EDX + 0x4]          ; 004ec1e8
    MOV EAX,0xffff                      ; 004ec1eb
    MOV EBX,dword ptr [0x02d051f4]      ; 004ec1f0 | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004ec1f6
    SUB EAX,EBX                         ; 004ec1f9
    PUSH EAX                            ; 004ec1fb
    MOV EAX,[0x006703ec]                ; 004ec1fc | g_CDemonRendererPtr2
    PUSH EAX                            ; 004ec201 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004ec202
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ec207
    PUSH 0x2d83368                      ; 004ec20a | g_GoreQuadPrimitive
    MOV EDX,dword ptr [0x006703ec]      ; 004ec20f | g_CDemonRendererPtr2
    PUSH EDX                            ; 004ec215 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0 ; 004ec216
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ec21b
    MOV ECX,dword ptr [0x006703ec]      ; 004ec21e | g_CDemonRendererPtr2
    PUSH ECX                            ; 004ec224 | g_CDemonRendererInstance
    INC ESI                             ; 004ec225
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004ec226
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ec22b
    CMP ESI,0x3                         ; 004ec22e
    JGE 0x004ebb1e                      ; 004ec231
        ;   XREF to: 004ebb1e (CONDITIONAL_JUMP)  ; LAB_004ebb1e
    JMP 0x004ebeb0                      ; 004ec237
        ;   XREF to: 004ebeb0 (UNCONDITIONAL_JUMP)  ; LAB_004ebeb0
    MOV EDX,0x7f80                      ; 004ec23c
        ;   Label: LAB_004ec23c
    MOV dword ptr [ESP + 0xd4],ESI      ; 004ec241
    MOV dword ptr [ESP + 0xd0],ESI      ; 004ec248
    MOV dword ptr [ESP + 0xd8],EDX      ; 004ec24f
    JMP 0x004ebdb7                      ; 004ec256
        ;   XREF to: 004ebdb7 (UNCONDITIONAL_JUMP)  ; LAB_004ebdb7
    MOV dword ptr [ESP + 0xd8],ESI      ; 004ec25b
        ;   Label: LAB_004ec25b
    MOV dword ptr [ESP + 0xd4],ESI      ; 004ec262
    MOV dword ptr [ESP + 0xd0],ESI      ; 004ec269
    JMP 0x004ebdb7                      ; 004ec270
        ;   XREF to: 004ebdb7 (UNCONDITIONAL_JUMP)  ; LAB_004ebdb7
    JBE 0x004ec23c                      ; 004ec275
        ;   XREF to: 004ec23c (CONDITIONAL_JUMP)  ; LAB_004ec23c
        ;   Label: LAB_004ec275
    CMP EAX,0x2                         ; 004ec277
    JZ 0x004ec25b                       ; 004ec27a
        ;   XREF to: 004ec25b (CONDITIONAL_JUMP)  ; LAB_004ec25b
    JMP 0x004ebda5                      ; 004ec27c
        ;   XREF to: 004ebda5 (UNCONDITIONAL_JUMP)  ; LAB_004ebda5

