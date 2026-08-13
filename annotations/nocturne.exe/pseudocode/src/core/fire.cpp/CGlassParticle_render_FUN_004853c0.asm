; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004853c0(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
; Referenced Globals:
;   float FLOAT_0059d1f8 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c508c
;   undefined4 DAT_005c5090
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004853c0
        ;   Label: core_fire.cpp_CGlassParticle_render_FUN_004853c0
    PUSH ESI                            ; 004853c1
    PUSH EDI                            ; 004853c2
    PUSH EBP                            ; 004853c3
    SUB ESP,0x58                        ; 004853c4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004853c7
    PUSH ESI                            ; 004853cb
    MOV EDX,dword ptr [0x005ae704]      ; 004853cc | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004853d2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004853d3
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004853d8
    PUSH 0x0                            ; 004853db
    LEA EAX,[ESI + 0x54]                ; 004853dd
    PUSH EAX                            ; 004853e0
    MOV ECX,dword ptr [0x005ae704]      ; 004853e1 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004853e7 | DAT_01b4d738
    LEA EBX,[ESP + 0x4c]                ; 004853e8
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004853ec
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004853f1
    LEA EAX,[ESI + 0x78]                ; 004853f4
    MOV EDX,dword ptr [0x005ae704]      ; 004853f7 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004853fd
    FMUL float ptr [0x0059d1f8]         ; 004853ff | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00485405
    FLD float ptr [EAX + 0x4]           ; 00485407
    FMUL float ptr [0x0059d1f8]         ; 0048540a | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00485410
    FLD float ptr [EAX + 0x8]           ; 00485413
    FMUL float ptr [0x0059d1f8]         ; 00485416 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048541c
    LEA EAX,[ESP + 0x40]                ; 0048541f
    PUSH EAX                            ; 00485423
    MOV EAX,dword ptr [EDX]             ; 00485424 | DAT_01b4d738
    PUSH EAX                            ; 00485426
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00485427
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x54]                ; 0048542c
    ADD ESP,0x8                         ; 00485430
    LEA EAX,[ESI + 0x84]                ; 00485433
    MOV EDX,dword ptr [0x005ae704]      ; 00485439 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0048543f
    FMUL float ptr [0x0059d1f8]         ; 00485441 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00485447
    FLD float ptr [EAX + 0x4]           ; 00485449
    FMUL float ptr [0x0059d1f8]         ; 0048544c | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00485452
    FLD float ptr [EAX + 0x8]           ; 00485455
    FMUL float ptr [0x0059d1f8]         ; 00485458 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048545e
    LEA EAX,[ESP + 0x4c]                ; 00485461
    PUSH EAX                            ; 00485465
    MOV EAX,dword ptr [EDX]             ; 00485466 | DAT_01b4d738
    ADD EAX,0x30                        ; 00485468
    PUSH EAX                            ; 0048546b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048546c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x3c]                ; 00485471
    ADD ESP,0x8                         ; 00485475
    LEA EAX,[ESI + 0x90]                ; 00485478
    MOV EDX,dword ptr [0x005ae704]      ; 0048547e | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00485484
    FMUL float ptr [0x0059d1f8]         ; 00485486 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048548c
    FLD float ptr [EAX + 0x4]           ; 0048548e
    FMUL float ptr [0x0059d1f8]         ; 00485491 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00485497
    FLD float ptr [EAX + 0x8]           ; 0048549a
    FMUL float ptr [0x0059d1f8]         ; 0048549d | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004854a3
    LEA EAX,[ESP + 0x34]                ; 004854a6
    PUSH EAX                            ; 004854aa
    MOV EAX,dword ptr [EDX]             ; 004854ab | DAT_01b4d738
    ADD EAX,0x60                        ; 004854ad
    PUSH EAX                            ; 004854b0
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004854b1
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004854b6
    LEA EAX,[ESI + 0x3c]                ; 004854b9
    PUSH EAX                            ; 004854bc
    MOV EBX,dword ptr [0x005ae704]      ; 004854bd | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004854c3 | DAT_01b4d738
    MOV EDI,0x3                         ; 004854c4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004854c9
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004854ce
    XOR EBP,EBP                         ; 004854d1
    MOV dword ptr [ESP + 0x4],EDI       ; 004854d3
    MOV dword ptr [ESP + 0x14],EBP      ; 004854d7
    MOV dword ptr [ESP + 0x10],EBP      ; 004854db
    MOV dword ptr [ESP + 0xc],EBP       ; 004854df
    MOV dword ptr [ESP + 0x8],EBP       ; 004854e3
    MOV dword ptr [ESP + 0x18],EBP      ; 004854e7
    MOV EDI,0x1                         ; 004854eb
    MOV EBP,0x2                         ; 004854f0
    MOV dword ptr [ESP + 0x1c],EDI      ; 004854f5
    MOV dword ptr [ESP + 0x20],EBP      ; 004854f9
    MOV EAX,dword ptr [ESI + 0x38]      ; 004854fd
    PUSH EAX                            ; 00485500
    MOV EDX,dword ptr [0x005ae704]      ; 00485501 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00485507 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00485508
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0048550d
    LEA EBX,[ESP + 0x28]                ; 00485510
    MOV EAX,ESI                         ; 00485514
    FLD float ptr [EAX]                 ; 00485516
    FMUL float ptr [0x0059d1f8]         ; 00485518 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048551e
    FLD float ptr [EAX + 0x4]           ; 00485520
    FMUL float ptr [0x0059d1f8]         ; 00485523 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00485529
    FLD float ptr [EAX + 0x8]           ; 0048552c
    FMUL float ptr [0x0059d1f8]         ; 0048552f | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00485535
    PUSH 0x3                            ; 00485538
    PUSH 0x0                            ; 0048553a
    PUSH 0x0                            ; 0048553c
    LEA EAX,[ESP + 0x34]                ; 0048553e
    PUSH EAX                            ; 00485542
    MOV ECX,dword ptr [0x005be368]      ; 00485543 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 00485549 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 0048554a
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    MOV EAX,dword ptr [ESI + 0x60]      ; 0048554f
    MOV [0x005c502c],EAX                ; 00485552 | DAT_005c502c
    MOV EAX,dword ptr [ESI + 0x6c]      ; 00485557
    MOV [0x005c5030],EAX                ; 0048555a | DAT_005c5030
    MOV EAX,dword ptr [ESI + 0x64]      ; 0048555f
    MOV EBX,dword ptr [0x005ae704]      ; 00485562 | g_CDemonRenderer_PTR_005ae704
    MOV [0x005c505c],EAX                ; 00485568 | DAT_005c505c
    MOV EAX,dword ptr [ESI + 0x70]      ; 0048556d
    ADD ESP,0x14                        ; 00485570
    MOV [0x005c5060],EAX                ; 00485573 | DAT_005c5060
    MOV EAX,dword ptr [ESI + 0x68]      ; 00485578
    PUSH 0x0                            ; 0048557b
    MOV [0x005c508c],EAX                ; 0048557d | DAT_005c508c
    MOV EAX,dword ptr [ESI + 0x74]      ; 00485582
    PUSH EBX                            ; 00485585 | DAT_01b4d738
    MOV [0x005c5090],EAX                ; 00485586 | DAT_005c5090
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048558b
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00485590
    MOV EAX,ESP                         ; 00485593
    PUSH EAX                            ; 00485595
    MOV ESI,dword ptr [0x005ae704]      ; 00485596 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0048559c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 0048559d
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004855a2
    MOV EDI,dword ptr [0x005ae704]      ; 004855a5 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 004855ab | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004855ac
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004855b1
    ADD ESP,0x58                        ; 004855b4
    POP EBP                             ; 004855b7
    POP EDI                             ; 004855b8
    POP ESI                             ; 004855b9
    POP EBX                             ; 004855ba
    RET                                 ; 004855bb

