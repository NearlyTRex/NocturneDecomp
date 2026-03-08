; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_render_FUN_004bfac0(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 at 004c75b1
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c7287
;
; Referenced Globals:
;   float FLOAT_0065dca8 = 256
;   float FLOAT_0065dcac = 65536
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
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
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfac0
        ;   Label: core_fire.cpp_CBulletHole_render_FUN_004bfac0
    PUSH ESI                            ; 004bfac1
    PUSH EDI                            ; 004bfac2
    PUSH EBP                            ; 004bfac3
    SUB ESP,0x60                        ; 004bfac4
    MOV ESI,dword ptr [ESP + 0x74]      ; 004bfac7
    MOV EDX,dword ptr [ESI + 0x10]      ; 004bfacb
    LEA EBX,[ESI + 0x14]                ; 004bface
    TEST EDX,EDX                        ; 004bfad1
    JZ 0x004bfd38                       ; 004bfad3
        ;   XREF to: 004bfd38 (CONDITIONAL_JUMP)  ; LAB_004bfd38
    PUSH EDX                            ; 004bfad9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004bfada
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004bfadf
    LEA EAX,[ESI + 0x24]                ; 004bfae2
    PUSH EAX                            ; 004bfae5
    PUSH EBX                            ; 004bfae6
    MOV EBX,dword ptr [0x006703ec]      ; 004bfae7 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004bfaed | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004bfaee
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   Label: LAB_004bfaee
    ADD ESP,0xc                         ; 004bfaf3
    MOV EBX,dword ptr [ESI + 0x20]      ; 004bfaf6
    MOV EAX,dword ptr [ESI + 0x20]      ; 004bfaf9
    XOR ECX,ECX                         ; 004bfafc
    AND EBX,0x1                         ; 004bfafe
    AND EAX,0x2                         ; 004bfb01
    SHL EBX,0x17                        ; 004bfb04
    MOV dword ptr [ESP + 0x20],ECX      ; 004bfb07
    LEA EDX,[EBX + 0x80000]             ; 004bfb0b
    SHL EAX,0x16                        ; 004bfb11
    MOV dword ptr [0x0068802c],EDX      ; 004bfb14 | g_RenderVertexBuffer[0].u
    ADD EBX,0x780000                    ; 004bfb1a | DAT_00780000
    LEA EDX,[EAX + 0x780000]            ; 004bfb20 | DAT_00780000
    MOV dword ptr [0x0068805c],EBX      ; 004bfb26 | g_RenderVertexBuffer[1].u
    ADD EAX,0x80000                     ; 004bfb2c
    MOV dword ptr [0x0068808c],EBX      ; 004bfb31 | g_RenderVertexBuffer[2].u
    MOV [0x00688090],EAX                ; 004bfb37 | g_RenderVertexBuffer[2].v
    MOV EAX,[0x0068802c]                ; 004bfb3c | g_RenderVertexBuffer[0].u
    LEA EBX,[ESP + 0x30]                ; 004bfb41
    MOV [0x006880bc],EAX                ; 004bfb45 | g_RenderVertexBuffer[3].u
    MOV EAX,[0x00688090]                ; 004bfb4a | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x00688030],EDX      ; 004bfb4f | g_RenderVertexBuffer[0].v
    MOV [0x006880c0],EAX                ; 004bfb55 | g_RenderVertexBuffer[3].v
    MOV EAX,0xbe2e147b                  ; 004bfb5a
    MOV dword ptr [0x00688060],EDX      ; 004bfb5f | g_RenderVertexBuffer[1].v
    MOV dword ptr [ESP + 0x18],EAX      ; 004bfb65
    MOV dword ptr [ESP + 0x1c],EAX      ; 004bfb69
    LEA EAX,[ESP + 0x18]                ; 004bfb6d
    MOV EDX,dword ptr [0x006703ec]      ; 004bfb71 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004bfb77
    FMUL float ptr [0x0065dca8]         ; 004bfb79 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bfb7f
    FLD float ptr [EAX + 0x4]           ; 004bfb81
    FMUL float ptr [0x0065dca8]         ; 004bfb84 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bfb8a
    FLD float ptr [EAX + 0x8]           ; 004bfb8d
    FMUL float ptr [0x0065dca8]         ; 004bfb90 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bfb96
    LEA EAX,[ESP + 0x30]                ; 004bfb99
    PUSH EAX                            ; 004bfb9d
    MOV EAX,dword ptr [EDX]             ; 004bfb9e | g_CDemonRendererInstance
    PUSH EAX                            ; 004bfba0
    MOV EDI,0xbe2e147b                  ; 004bfba1
    XOR EBP,EBP                         ; 004bfba6
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004bfba8
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3e2e147b                  ; 004bfbad
    LEA EAX,[ESP + 0x20]                ; 004bfbb2
    ADD ESP,0x8                         ; 004bfbb6
    MOV EDX,dword ptr [0x006703ec]      ; 004bfbb9 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x18],EBX      ; 004bfbbf
    MOV dword ptr [ESP + 0x1c],EDI      ; 004bfbc3
    MOV EBX,ESP                         ; 004bfbc7
    MOV dword ptr [ESP + 0x20],EBP      ; 004bfbc9
    FLD float ptr [EAX]                 ; 004bfbcd
    FMUL float ptr [0x0065dca8]         ; 004bfbcf | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bfbd5
    FLD float ptr [EAX + 0x4]           ; 004bfbd7
    FMUL float ptr [0x0065dca8]         ; 004bfbda | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bfbe0
    FLD float ptr [EAX + 0x8]           ; 004bfbe3
    FMUL float ptr [0x0065dca8]         ; 004bfbe6 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bfbec
    MOV EAX,ESP                         ; 004bfbef
    PUSH EAX                            ; 004bfbf1
    MOV EAX,dword ptr [EDX]             ; 004bfbf2 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004bfbf4
    PUSH EAX                            ; 004bfbf7
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004bfbf8
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3e2e147b                  ; 004bfbfd
    LEA EBX,[ESP + 0x5c]                ; 004bfc02
    ADD ESP,0x8                         ; 004bfc06
    MOV EDX,dword ptr [0x006703ec]      ; 004bfc09 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x18],EAX      ; 004bfc0f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004bfc13
    LEA EAX,[ESP + 0x18]                ; 004bfc17
    MOV dword ptr [ESP + 0x20],EBP      ; 004bfc1b
    FLD float ptr [EAX]                 ; 004bfc1f
    FMUL float ptr [0x0065dca8]         ; 004bfc21 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bfc27
    FLD float ptr [EAX + 0x4]           ; 004bfc29
    FMUL float ptr [0x0065dca8]         ; 004bfc2c | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bfc32
    FLD float ptr [EAX + 0x8]           ; 004bfc35
    FMUL float ptr [0x0065dca8]         ; 004bfc38 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bfc3e
    LEA EAX,[ESP + 0x54]                ; 004bfc41
    PUSH EAX                            ; 004bfc45
    MOV EAX,dword ptr [EDX]             ; 004bfc46 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004bfc48
    PUSH EAX                            ; 004bfc4b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004bfc4c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x50]                ; 004bfc51
    LEA EAX,[ESP + 0x20]                ; 004bfc55
    ADD ESP,0x8                         ; 004bfc59
    MOV EDX,dword ptr [0x006703ec]      ; 004bfc5c | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x18],EDI      ; 004bfc62
    MOV EDI,0x3e2e147b                  ; 004bfc66
    MOV dword ptr [ESP + 0x20],EBP      ; 004bfc6b
    MOV dword ptr [ESP + 0x1c],EDI      ; 004bfc6f
    FLD float ptr [EAX]                 ; 004bfc73
    FMUL float ptr [0x0065dca8]         ; 004bfc75 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bfc7b
    FLD float ptr [EAX + 0x4]           ; 004bfc7d
    FMUL float ptr [0x0065dca8]         ; 004bfc80 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bfc86
    FLD float ptr [EAX + 0x8]           ; 004bfc89
    FMUL float ptr [0x0065dca8]         ; 004bfc8c | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bfc92
    LEA EAX,[ESP + 0x48]                ; 004bfc95
    PUSH EAX                            ; 004bfc99
    MOV EAX,dword ptr [EDX]             ; 004bfc9a | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004bfc9c
    PUSH EAX                            ; 004bfca1
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004bfca2
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [ESI + 0x10]      ; 004bfca7
    ADD ESP,0x8                         ; 004bfcaa
    TEST EAX,EAX                        ; 004bfcad
    JNZ 0x004bfd57                      ; 004bfcaf
        ;   XREF to: 004bfd57 (CONDITIONAL_JUMP)  ; LAB_004bfd57
    MOV EBX,0xffff                      ; 004bfcb5
    MOV dword ptr [0x00688038],EBX      ; 004bfcba | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],EBX      ; 004bfcc0 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],EBX      ; 004bfcc6 | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],EBX      ; 004bfccc | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],EBX      ; 004bfcd2 | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],EBX      ; 004bfcd8 | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],EBX      ; 004bfcde | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],EBX      ; 004bfce4 | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x006880c4],EBX      ; 004bfcea | g_RenderVertexBuffer[3].r
    MOV dword ptr [0x006880c8],EBX      ; 004bfcf0 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],EBX      ; 004bfcf6 | g_RenderVertexBuffer[3].b
    MOV dword ptr [0x00688034],EBX      ; 004bfcfc | g_RenderVertexBuffer[0].r
    PUSH 0x2d12dcc                      ; 004bfd02 | g_BillboardPrimitive
        ;   Label: LAB_004bfd02
    MOV EBX,dword ptr [0x006703ec]      ; 004bfd07 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004bfd0d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004bfd0e
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDI,dword ptr [ESI + 0x10]      ; 004bfd13
    ADD ESP,0x8                         ; 004bfd16
    TEST EDI,EDI                        ; 004bfd19
    JNZ 0x004bfddf                      ; 004bfd1b
        ;   XREF to: 004bfddf (CONDITIONAL_JUMP)  ; LAB_004bfddf
    MOV EDX,dword ptr [0x006703ec]      ; 004bfd21 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004bfd27 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004bfd28
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH ESI                            ; 004bfd38
        ;   Label: LAB_004bfd38
    MOV EDI,dword ptr [0x006703ec]      ; 004bfd39 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004bfd3f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004bfd40
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004bfd45
    PUSH 0x0                            ; 004bfd48
    PUSH EBX                            ; 004bfd4a
    MOV EBP,dword ptr [0x006703ec]      ; 004bfd4b | g_CDemonRendererPtr2
    PUSH EBP                            ; 004bfd51 | g_CDemonRendererInstance
    JMP 0x004bfaee                      ; 004bfd52
        ;   XREF to: 004bfaee (UNCONDITIONAL_JUMP)  ; LAB_004bfaee
    LEA EAX,[ESI + 0x30]                ; 004bfd57
        ;   Label: LAB_004bfd57
    PUSH EAX                            ; 004bfd5a
    LEA EAX,[ESP + 0x40]                ; 004bfd5b
    PUSH EAX                            ; 004bfd5f
    MOV EDX,dword ptr [ESI + 0x10]      ; 004bfd60
    PUSH EDX                            ; 004bfd63
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004bfd64
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004bfd69
    LEA EBX,[ESP + 0xc]                 ; 004bfd6c
    MOV EAX,ESI                         ; 004bfd70
    FLD float ptr [EAX]                 ; 004bfd72
    FMUL float ptr [0x0065dca8]         ; 004bfd74 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bfd7a
    FLD float ptr [EAX + 0x4]           ; 004bfd7c
    FMUL float ptr [0x0065dca8]         ; 004bfd7f | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bfd85
    FLD float ptr [EAX + 0x8]           ; 004bfd88
    FMUL float ptr [0x0065dca8]         ; 004bfd8b | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bfd91
    LEA EBX,[ESP + 0x24]                ; 004bfd94
    LEA EAX,[ESP + 0x3c]                ; 004bfd98
    FLD float ptr [EAX]                 ; 004bfd9c
    FMUL float ptr [0x0065dcac]         ; 004bfd9e | FLOAT_0065dcac
    FISTP dword ptr [EBX]               ; 004bfda4
    FLD float ptr [EAX + 0x4]           ; 004bfda6
    FMUL float ptr [0x0065dcac]         ; 004bfda9 | FLOAT_0065dcac
    FISTP dword ptr [EBX + 0x4]         ; 004bfdaf
    FLD float ptr [EAX + 0x8]           ; 004bfdb2
    FMUL float ptr [0x0065dcac]         ; 004bfdb5 | FLOAT_0065dcac
    FISTP dword ptr [EBX + 0x8]         ; 004bfdbb
    PUSH 0x4                            ; 004bfdbe
    PUSH EBP                            ; 004bfdc0
    LEA EAX,[ESP + 0x2c]                ; 004bfdc1
    PUSH EAX                            ; 004bfdc5
    LEA EAX,[ESP + 0x18]                ; 004bfdc6
    PUSH EAX                            ; 004bfdca
    MOV ECX,dword ptr [0x006810c8]      ; 004bfdcb | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004bfdd1 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 004bfdd2
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004bfdd7
    JMP 0x004bfd02                      ; 004bfdda
        ;   XREF to: 004bfd02 (UNCONDITIONAL_JUMP)  ; LAB_004bfd02
    PUSH EDI                            ; 004bfddf
        ;   Label: LAB_004bfddf
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004bfde0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004bfde5
    MOV EAX,[0x006703ec]                ; 004bfde8 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004bfded | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004bfdee
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

