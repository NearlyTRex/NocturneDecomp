; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gore.cpp_FUN_004ebac0()
;
; Local Variables:
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   undefined4 DAT_0065f024
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic DAT_0067b9b0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[1].light
;   undefined4 g_RenderVertexBuffer[1].color
;   undefined4 g_RenderVertexBuffer[1].fog
;   undefined4 g_RenderVertexBuffer[2].u
;   ... and 10 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebac0
        ;   Label: core_gore.cpp_FUN_004ebac0
    PUSH ESI                            ; 004ebac1
    PUSH EDI                            ; 004ebac2
    PUSH EBP                            ; 004ebac3
    MOV EBP,ESP                         ; 004ebac4
    SUB ESP,0xe4                        ; 004ebac6
    AND ESP,0xfffffff8                  ; 004ebacc
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ebacf
    MOV ESI,dword ptr [0x006703ec]      ; 004ebad2 | CDemonRenderer * g_CDemonRendererPtr
    LEA EBX,[ESP + 0xa0]                ; 004ebad8
    MOV EAX,EDI                         ; 004ebadf
    MOV ESI,dword ptr [ESI]             ; 004ebae1 | CDemonRenderer g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 004ebae3
    FMUL float ptr [0x0065f024]         ; 004ebae5 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebaeb
    FLD float ptr [EAX + 0x4]           ; 004ebaed
    FMUL float ptr [0x0065f024]         ; 004ebaf0 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebaf6
    FLD float ptr [EAX + 0x8]           ; 004ebaf9
    FMUL float ptr [0x0065f024]         ; 004ebafc | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebb02
    LEA EAX,[ESP + 0xa0]                ; 004ebb05
    PUSH EAX                            ; 004ebb0c
    PUSH ESI                            ; 004ebb0d
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004ebb0e | int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
    MOV AH,byte ptr [ESI + 0x13]        ; 004ebb13
    ADD ESP,0x8                         ; 004ebb16
    TEST AH,0x80                        ; 004ebb19
    JZ 0x004ebb25                       ; 004ebb1c | LAB_004ebb25
        ;   XREF to: 004ebb25 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 004ebb1e
        ;   Label: LAB_004ebb1e
    POP EBP                             ; 004ebb20
    POP EDI                             ; 004ebb21
    POP ESI                             ; 004ebb22
    POP EBX                             ; 004ebb23
    RET                                 ; 004ebb24
    PUSH EDI                            ; 004ebb25
        ;   Label: LAB_004ebb25
    MOV EDX,dword ptr [0x006703ec]      ; 004ebb26 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004ebb2c | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004ebb2d | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ebb32
    PUSH 0x0                            ; 004ebb35
    PUSH 0x2d83390                      ; 004ebb37 | DAT_02d83390
    MOV ECX,dword ptr [0x006703ec]      ; 004ebb3c | CDemonRenderer * g_CDemonRendererPtr
    MOV EBX,0xbdcccccd                  ; 004ebb42
    PUSH ECX                            ; 004ebb47 | CDemonRenderer g_CDemonRendererInstance
    MOV ESI,EBX                         ; 004ebb48
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004ebb4a | void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004ebb4f
    XOR EAX,EAX                         ; 004ebb52
    MOV dword ptr [ESP + 0xac],EBX      ; 004ebb54
    MOV dword ptr [ESP + 0xb0],EBX      ; 004ebb5b
    MOV dword ptr [ESP + 0xb4],EAX      ; 004ebb62
    LEA EBX,[ESP + 0x40]                ; 004ebb69
    LEA EAX,[ESP + 0xac]                ; 004ebb6d
    MOV EDX,dword ptr [0x006703ec]      ; 004ebb74 | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 004ebb7a
    FMUL float ptr [0x0065f024]         ; 004ebb7c | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebb82
    FLD float ptr [EAX + 0x4]           ; 004ebb84
    FMUL float ptr [0x0065f024]         ; 004ebb87 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebb8d
    FLD float ptr [EAX + 0x8]           ; 004ebb90
    FMUL float ptr [0x0065f024]         ; 004ebb93 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebb99
    LEA EAX,[ESP + 0x40]                ; 004ebb9c
    PUSH EAX                            ; 004ebba0
    MOV EAX,dword ptr [EDX]             ; 004ebba1 | CDemonRenderer g_CDemonRendererInstance
    PUSH EAX                            ; 004ebba3
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebba4 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    MOV EDX,0x3dcccccd                  ; 004ebba9
    LEA EAX,[ESP + 0xb4]                ; 004ebbae
    ADD ESP,0x8                         ; 004ebbb5
    MOV ECX,ESI                         ; 004ebbb8
    XOR EBX,EBX                         ; 004ebbba
    MOV dword ptr [ESP + 0xac],EDX      ; 004ebbbc
    MOV dword ptr [ESP + 0xb0],ECX      ; 004ebbc3
    MOV dword ptr [ESP + 0xb4],EBX      ; 004ebbca
    LEA EBX,[ESP + 0x7c]                ; 004ebbd1
    MOV EDX,dword ptr [0x006703ec]      ; 004ebbd5 | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 004ebbdb
    FMUL float ptr [0x0065f024]         ; 004ebbdd | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebbe3
    FLD float ptr [EAX + 0x4]           ; 004ebbe5
    FMUL float ptr [0x0065f024]         ; 004ebbe8 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebbee
    FLD float ptr [EAX + 0x8]           ; 004ebbf1
    FMUL float ptr [0x0065f024]         ; 004ebbf4 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebbfa
    LEA EAX,[ESP + 0x7c]                ; 004ebbfd
    PUSH EAX                            ; 004ebc01
    MOV EAX,dword ptr [EDX]             ; 004ebc02 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004ebc04
    PUSH EAX                            ; 004ebc07
    MOV ESI,0x3dcccccd                  ; 004ebc08
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebc0d | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    LEA EBX,[ESP + 0x30]                ; 004ebc12
    LEA EAX,[ESP + 0xb4]                ; 004ebc16
    ADD ESP,0x8                         ; 004ebc1d
    XOR EDX,EDX                         ; 004ebc20
    MOV dword ptr [ESP + 0xac],ESI      ; 004ebc22
    MOV dword ptr [ESP + 0xb0],ESI      ; 004ebc29
    MOV dword ptr [ESP + 0xb4],EDX      ; 004ebc30
    MOV EDX,dword ptr [0x006703ec]      ; 004ebc37 | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 004ebc3d
    FMUL float ptr [0x0065f024]         ; 004ebc3f | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebc45
    FLD float ptr [EAX + 0x4]           ; 004ebc47
    FMUL float ptr [0x0065f024]         ; 004ebc4a | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebc50
    FLD float ptr [EAX + 0x8]           ; 004ebc53
    FMUL float ptr [0x0065f024]         ; 004ebc56 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebc5c
    LEA EAX,[ESP + 0x28]                ; 004ebc5f
    PUSH EAX                            ; 004ebc63
    MOV EAX,dword ptr [EDX]             ; 004ebc64 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004ebc66
    PUSH EAX                            ; 004ebc69
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebc6a | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    MOV ECX,0xbdcccccd                  ; 004ebc6f
    LEA EBX,[ESP + 0x6c]                ; 004ebc74
    LEA EAX,[ESP + 0xb4]                ; 004ebc78
    ADD ESP,0x8                         ; 004ebc7f
    MOV EDX,dword ptr [0x006703ec]      ; 004ebc82 | CDemonRenderer * g_CDemonRendererPtr
    MOV dword ptr [ESP + 0xb0],ESI      ; 004ebc88
    XOR ESI,ESI                         ; 004ebc8f
    MOV dword ptr [ESP + 0xac],ECX      ; 004ebc91
    MOV dword ptr [ESP + 0xb4],ESI      ; 004ebc98
    FLD float ptr [EAX]                 ; 004ebc9f
    FMUL float ptr [0x0065f024]         ; 004ebca1 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebca7
    FLD float ptr [EAX + 0x4]           ; 004ebca9
    FMUL float ptr [0x0065f024]         ; 004ebcac | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebcb2
    FLD float ptr [EAX + 0x8]           ; 004ebcb5
    FMUL float ptr [0x0065f024]         ; 004ebcb8 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebcbe
    LEA EAX,[ESP + 0x64]                ; 004ebcc1
    PUSH EAX                            ; 004ebcc5
    MOV EAX,dword ptr [EDX]             ; 004ebcc6 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004ebcc8
    PUSH EAX                            ; 004ebccd
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ebcce | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ebcd3
    PUSH 0x67b9b0                       ; 004ebcd6 | SMRGLTextureBasic DAT_0067b9b0
    MOV EAX,[0x006703ec]                ; 004ebcdb | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 004ebce0 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ebce1 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
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
    FMUL float ptr [0x0065f024]         ; 004ebd48 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ebd4e
    FLD float ptr [EAX + 0x4]           ; 004ebd50
    FMUL float ptr [0x0065f024]         ; 004ebd53 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ebd59
    FLD float ptr [EAX + 0x8]           ; 004ebd5c
    FMUL float ptr [0x0065f024]         ; 004ebd5f | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ebd65
    PUSH 0x4                            ; 004ebd68
    PUSH ESI                            ; 004ebd6a
    PUSH 0x2d8339c                      ; 004ebd6b | DAT_02d8339c
    LEA EAX,[ESP + 0x7c]                ; 004ebd70
    PUSH EAX                            ; 004ebd74
    MOV EDX,dword ptr [0x006810c8]      ; 004ebd75 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 004ebd7b | CDemonSet g_CDemonSetInstance
    LEA EBX,[ESP + 0xec]                ; 004ebd7c
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 004ebd83 | int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)
    LEA ECX,[ESP + 0xe4]                ; 004ebd88
    LEA EDX,[ESP + 0xe8]                ; 004ebd8f
    MOV EAX,dword ptr [EDI + 0x38]      ; 004ebd96
    ADD ESP,0x14                        ; 004ebd99
    CMP EAX,0x1                         ; 004ebd9c
    JNC 0x004ec275                      ; 004ebd9f | LAB_004ec275
        ;   XREF to: 004ec275 (CONDITIONAL_JUMP)
    MOV dword ptr [ECX],0x2000          ; 004ebda5
        ;   Label: LAB_004ebda5
    MOV dword ptr [EBX],0x0             ; 004ebdab
    MOV dword ptr [EDX],0x0             ; 004ebdb1
    XOR ECX,ECX                         ; 004ebdb7
        ;   Label: LAB_004ebdb7
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ebdb9
        ;   Label: LAB_004ebdb9
    MOV EDX,dword ptr [ECX + 0x688034]  ; 004ebdc0 | g_RenderVertexBuffer[0].light
    IMUL EDX                            ; 004ebdc6
    SHRD EAX,EDX,0x10                   ; 004ebdc8
    MOV EDX,dword ptr [ECX + 0x688038]  ; 004ebdcc | g_RenderVertexBuffer[0].color
    MOV dword ptr [ECX + 0x688034],EAX  ; 004ebdd2 | g_RenderVertexBuffer[0].light
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ebdd8
    IMUL EDX                            ; 004ebddf
    SHRD EAX,EDX,0x10                   ; 004ebde1
    MOV EDX,dword ptr [ECX + 0x68803c]  ; 004ebde5 | g_RenderVertexBuffer[0].fog
    MOV dword ptr [ECX + 0x688038],EAX  ; 004ebdeb | g_RenderVertexBuffer[0].color
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ebdf1
    ADD ECX,0x30                        ; 004ebdf8
    IMUL EDX                            ; 004ebdfb
    SHRD EAX,EDX,0x10                   ; 004ebdfd
    MOV dword ptr [ECX + 0x68800c],EAX  ; 004ebe01 | g_RenderVertexBuffer[0].fog
    CMP ECX,0xc0                        ; 004ebe07
    JNZ 0x004ebdb9                      ; 004ebe0d | LAB_004ebdb9
        ;   XREF to: 004ebdb9 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004ebe0f
    MOV EAX,[0x00823a74]                ; 004ebe11 | CDemonCamera * g_CurrentSceneCamera
    PUSH EDI                            ; 004ebe16
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004ebe17
    PUSH EAX                            ; 004ebe1a
    CALL dword ptr [EDX + 0x4]          ; 004ebe1b
    MOV EAX,0xffff                      ; 004ebe1e
    MOV EBX,dword ptr [0x02d051f4]      ; 004ebe23 | float g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004ebe29
    SUB EAX,EBX                         ; 004ebe2c
    PUSH EAX                            ; 004ebe2e
    MOV ESI,dword ptr [0x006703ec]      ; 004ebe2f | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 004ebe35 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004ebe36 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ebe3b
    PUSH 0x2d83368                      ; 004ebe3e | SMRGLHeaderPrimitive DAT_02d83368
    MOV EAX,[0x006703ec]                ; 004ebe43 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 004ebe48 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004ebe49 | void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ebe4e
    MOV EDX,dword ptr [0x006703ec]      ; 004ebe51 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004ebe57 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004ebe58 | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)
    MOV EDX,0x7f80                      ; 004ec23c
        ;   Label: LAB_004ec23c
    MOV dword ptr [ESP + 0xd4],ESI      ; 004ec241
    MOV dword ptr [ESP + 0xd0],ESI      ; 004ec248
    MOV dword ptr [ESP + 0xd8],EDX      ; 004ec24f
    JMP 0x004ebdb7                      ; 004ec256 | LAB_004ebdb7
        ;   XREF to: 004ebdb7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xd8],ESI      ; 004ec25b
        ;   Label: LAB_004ec25b
    MOV dword ptr [ESP + 0xd4],ESI      ; 004ec262
    MOV dword ptr [ESP + 0xd0],ESI      ; 004ec269
    JMP 0x004ebdb7                      ; 004ec270 | LAB_004ebdb7
        ;   XREF to: 004ebdb7 (UNCONDITIONAL_JUMP)
    JBE 0x004ec23c                      ; 004ec275 | LAB_004ec23c
        ;   Label: LAB_004ec275
        ;   XREF to: 004ec23c (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 004ec277
    JZ 0x004ec25b                       ; 004ec27a | LAB_004ec25b
        ;   XREF to: 004ec25b (CONDITIONAL_JUMP)
    JMP 0x004ebda5                      ; 004ec27c | LAB_004ebda5
        ;   XREF to: 004ebda5 (UNCONDITIONAL_JUMP)

