; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CFootstep_render_FUN_004ed3c0(CFootstep *this_ptr,int expire_flag)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
; Local Variables:
; CVector3i        Stack[-0x1c]:12  local_1c
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004ed830 at 004ed901
;
; Referenced Globals:
;   float FLOAT_0065f024 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_FootstepTexture
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
;   ... and 22 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed3c0
        ;   Label: core_gore.cpp_CFootstep_render_FUN_004ed3c0
    PUSH ESI                            ; 004ed3c1
    PUSH EDI                            ; 004ed3c2
    PUSH EBP                            ; 004ed3c3
    SUB ESP,0xc                         ; 004ed3c4
    MOV EDX,0x4                         ; 004ed3c7
    MOV EBX,0x1                         ; 004ed3cc
    MOV ESI,0x2                         ; 004ed3d1
    MOV EDI,0x3                         ; 004ed3d6
    MOV EBP,0x80000                     ; 004ed3db
    XOR ECX,ECX                         ; 004ed3e0
    MOV dword ptr [0x02d833ac],EDX      ; 004ed3e2 | g_FootstepPrimitive.base.base.count
    MOV dword ptr [0x02d833c0],ECX      ; 004ed3e8 | g_FootstepPrimitive.vertices[0]
    MOV dword ptr [0x02d833c4],EBX      ; 004ed3ee | g_FootstepPrimitive.vertices[1]
    MOV dword ptr [0x02d833c8],ESI      ; 004ed3f4 | g_FootstepPrimitive.vertices[2]
    MOV dword ptr [0x02d833cc],EDI      ; 004ed3fa | g_FootstepPrimitive.vertices[3]
    MOV dword ptr [0x0068802c],EBP      ; 004ed400 | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688030],EBP      ; 004ed406 | g_RenderVertexBuffer[0].v
    MOV EDX,0xf80000                    ; 004ed40c | DAT_00f80000
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ed411
    MOV dword ptr [0x0068805c],EDX      ; 004ed415 | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x0068808c],EDX      ; 004ed41b | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],EDX      ; 004ed421 | g_RenderVertexBuffer[2].v
    MOV EAX,dword ptr [EBX + 0x38]      ; 004ed427
    MOV dword ptr [0x006880c0],EDX      ; 004ed42a | g_RenderVertexBuffer[3].v
    PUSH EAX                            ; 004ed430
    MOV EDX,dword ptr [0x006703ec]      ; 004ed431 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [0x00688060],EBP      ; 004ed437 | g_RenderVertexBuffer[1].v
    PUSH EDX                            ; 004ed43d | g_CDemonRendererInstance
    MOV dword ptr [0x006880bc],EBP      ; 004ed43e | g_RenderVertexBuffer[3].u
    MOV EDI,0x688014                    ; 004ed444 | g_RenderVertexBuffer
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004ed449
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ed44e
    MOV EBP,dword ptr [0x006703ec]      ; 004ed451 | g_CDemonRendererPtr2
    XOR ECX,ECX                         ; 004ed457
    PUSH 0x67cb28                       ; 004ed459 | g_FootstepTexture
    MOV dword ptr [0x02d833b0],ECX      ; 004ed45e | g_FootstepPrimitive.base.surface_normal.A
    MOV dword ptr [0x02d833b4],ECX      ; 004ed464 | g_FootstepPrimitive.base.surface_normal.B
    PUSH EBP                            ; 004ed46a | g_CDemonRendererInstance
    MOV dword ptr [0x02d833b8],ECX      ; 004ed46b | g_FootstepPrimitive.base.surface_normal.C
    MOV dword ptr [0x02d833bc],ECX      ; 004ed471 | g_FootstepPrimitive.base.surface_normal.D
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ed477
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBP,[EBX + 0x8]                 ; 004ed47c
    ADD ESP,0x8                         ; 004ed47f
    MOV ESI,EBP                         ; 004ed482
    ADD EBP,0x30                        ; 004ed484
    MOV EBX,ESP                         ; 004ed487
        ;   Label: LAB_004ed487
    MOV EAX,ESI                         ; 004ed489
    FLD float ptr [EAX]                 ; 004ed48b
    FMUL float ptr [0x0065f024]         ; 004ed48d | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ed493
    FLD float ptr [EAX + 0x4]           ; 004ed495
    FMUL float ptr [0x0065f024]         ; 004ed498 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ed49e
    FLD float ptr [EAX + 0x8]           ; 004ed4a1
    FMUL float ptr [0x0065f024]         ; 004ed4a4 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ed4aa
    MOV EBX,ESP                         ; 004ed4ad
    PUSH EBX                            ; 004ed4af
    PUSH EDI                            ; 004ed4b0 | g_RenderVertexBuffer | DAT_00688044
    ADD ESI,0xc                         ; 004ed4b1
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004ed4b4
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ed4b9
    ADD EDI,0x30                        ; 004ed4bc
    CMP ESI,EBP                         ; 004ed4bf
    JNZ 0x004ed487                      ; 004ed4c1
        ;   XREF to: 004ed487 (CONDITIONAL_JUMP)  ; LAB_004ed487
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ed4c3
    CMP dword ptr [EBX + 0x3c],0x0      ; 004ed4c7
    JZ 0x004ed5bc                       ; 004ed4cb
        ;   XREF to: 004ed5bc (CONDITIONAL_JUMP)  ; LAB_004ed5bc
    MOV ESI,0x688034                    ; 004ed4d1 | g_RenderVertexBuffer[0].r
    MOV EBP,0x688038                    ; 004ed4d6 | g_RenderVertexBuffer[0].g
    MOV EBX,dword ptr [EBX + 0x4]       ; 004ed4db
    MOV EDI,0x68803c                    ; 004ed4de | g_RenderVertexBuffer[0].b
    CMP EBX,0x1                         ; 004ed4e3
    JNC 0x004ed642                      ; 004ed4e6
        ;   XREF to: 004ed642 (CONDITIONAL_JUMP)  ; LAB_004ed642
    MOV dword ptr [ESI],0x2000          ; 004ed4ec | g_RenderVertexBuffer[0].r
        ;   Label: LAB_004ed4ec
    MOV dword ptr [EBP],0x0             ; 004ed4f2 | g_RenderVertexBuffer[0].g
    MOV dword ptr [EDI],0x0             ; 004ed4f9 | g_RenderVertexBuffer[0].b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ed4ff
        ;   Label: LAB_004ed4ff
    MOV ESI,0x688064                    ; 004ed503 | g_RenderVertexBuffer[1].r
    MOV EBP,0x688068                    ; 004ed508 | g_RenderVertexBuffer[1].g
    MOV EBX,dword ptr [EBX + 0x4]       ; 004ed50d
    MOV EDI,0x68806c                    ; 004ed510 | g_RenderVertexBuffer[1].b
    CMP EBX,0x1                         ; 004ed515
    JNC 0x004ed682                      ; 004ed518
        ;   XREF to: 004ed682 (CONDITIONAL_JUMP)  ; LAB_004ed682
    MOV dword ptr [ESI],0x2000          ; 004ed51e | g_RenderVertexBuffer[1].r
        ;   Label: LAB_004ed51e
    MOV dword ptr [EBP],0x0             ; 004ed524 | g_RenderVertexBuffer[1].g
    MOV dword ptr [EDI],0x0             ; 004ed52b | g_RenderVertexBuffer[1].b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ed531
        ;   Label: LAB_004ed531
    MOV EBP,0x688094                    ; 004ed535 | g_RenderVertexBuffer[2].r
    MOV ESI,0x688098                    ; 004ed53a | g_RenderVertexBuffer[2].g
    MOV EBX,dword ptr [EBX + 0x4]       ; 004ed53f
    MOV EDI,0x68809c                    ; 004ed542 | g_RenderVertexBuffer[2].b
    CMP EBX,0x1                         ; 004ed547
    JNC 0x004ed6c5                      ; 004ed54a
        ;   XREF to: 004ed6c5 (CONDITIONAL_JUMP)  ; LAB_004ed6c5
    MOV dword ptr [EBP],0x2000          ; 004ed550 | g_RenderVertexBuffer[2].r
        ;   Label: LAB_004ed550
    MOV dword ptr [ESI],0x0             ; 004ed557 | g_RenderVertexBuffer[2].g
    MOV dword ptr [EDI],0x0             ; 004ed55d | g_RenderVertexBuffer[2].b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ed563
        ;   Label: LAB_004ed563
    MOV EDI,0x6880c4                    ; 004ed567 | g_RenderVertexBuffer[3].r
    MOV EBP,0x6880c8                    ; 004ed56c | g_RenderVertexBuffer[3].g
    MOV EBX,dword ptr [EBX + 0x4]       ; 004ed571
    MOV ESI,0x6880cc                    ; 004ed574 | g_RenderVertexBuffer[3].b
    CMP EBX,0x1                         ; 004ed579
    JNC 0x004ed708                      ; 004ed57c
        ;   XREF to: 004ed708 (CONDITIONAL_JUMP)  ; LAB_004ed708
    MOV dword ptr [EDI],0x2000          ; 004ed582 | g_RenderVertexBuffer[3].r
        ;   Label: LAB_004ed582
    MOV dword ptr [EBP],0x0             ; 004ed588 | g_RenderVertexBuffer[3].g
    MOV dword ptr [ESI],0x0             ; 004ed58f | g_RenderVertexBuffer[3].b
    PUSH 0x2d833a8                      ; 004ed595 | g_FootstepPrimitive
        ;   Label: LAB_004ed595
    MOV ECX,dword ptr [0x006703ec]      ; 004ed59a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 004ed5a0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004ed5a1
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ed5a6
    CMP dword ptr [ESP + 0x24],0x0      ; 004ed5a9
    JNZ 0x004ed714                      ; 004ed5ae
        ;   XREF to: 004ed714 (CONDITIONAL_JUMP)  ; LAB_004ed714
    ADD ESP,0xc                         ; 004ed5b4
    POP EBP                             ; 004ed5b7
    POP EDI                             ; 004ed5b8
    POP ESI                             ; 004ed5b9
    POP EBX                             ; 004ed5ba
    RET                                 ; 004ed5bb
    MOV ESI,0x7ff                       ; 004ed5bc
        ;   Label: LAB_004ed5bc
    MOV dword ptr [0x00688038],ESI      ; 004ed5c1 | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],ESI      ; 004ed5c7 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],ESI      ; 004ed5cd | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],ESI      ; 004ed5d3 | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],ESI      ; 004ed5d9 | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],ESI      ; 004ed5df | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],ESI      ; 004ed5e5 | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],ESI      ; 004ed5eb | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x006880c4],ESI      ; 004ed5f1 | g_RenderVertexBuffer[3].r
    MOV dword ptr [0x006880c8],ESI      ; 004ed5f7 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],ESI      ; 004ed5fd | g_RenderVertexBuffer[3].b
    MOV dword ptr [0x00688034],ESI      ; 004ed603 | g_RenderVertexBuffer[0].r
    JMP 0x004ed595                      ; 004ed609
        ;   XREF to: 004ed595 (UNCONDITIONAL_JUMP)  ; LAB_004ed595
    MOV EDI,0x7f80                      ; 004ed60b
        ;   Label: LAB_004ed60b
    XOR ESI,ESI                         ; 004ed610
    MOV dword ptr [0x00688038],EDI      ; 004ed612 | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],ESI      ; 004ed618 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688034],ESI      ; 004ed61e | g_RenderVertexBuffer[0].r
    JMP 0x004ed4ff                      ; 004ed624
        ;   XREF to: 004ed4ff (UNCONDITIONAL_JUMP)  ; LAB_004ed4ff
    XOR EDX,EDX                         ; 004ed629
        ;   Label: LAB_004ed629
    MOV dword ptr [0x00688038],EDX      ; 004ed62b | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],EDX      ; 004ed631 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688034],EDX      ; 004ed637 | g_RenderVertexBuffer[0].r
    JMP 0x004ed4ff                      ; 004ed63d
        ;   XREF to: 004ed4ff (UNCONDITIONAL_JUMP)  ; LAB_004ed4ff
    JBE 0x004ed60b                      ; 004ed642
        ;   XREF to: 004ed60b (CONDITIONAL_JUMP)  ; LAB_004ed60b
        ;   Label: LAB_004ed642
    CMP EBX,0x2                         ; 004ed644
    JZ 0x004ed629                       ; 004ed647
        ;   XREF to: 004ed629 (CONDITIONAL_JUMP)  ; LAB_004ed629
    JMP 0x004ed4ec                      ; 004ed649
        ;   XREF to: 004ed4ec (UNCONDITIONAL_JUMP)  ; LAB_004ed4ec
    MOV ESI,0x7f80                      ; 004ed64e
        ;   Label: LAB_004ed64e
    XOR EBX,EBX                         ; 004ed653
    MOV dword ptr [0x00688068],ESI      ; 004ed655 | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],EBX      ; 004ed65b | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688064],EBX      ; 004ed661 | g_RenderVertexBuffer[1].r
    JMP 0x004ed531                      ; 004ed667
        ;   XREF to: 004ed531 (UNCONDITIONAL_JUMP)  ; LAB_004ed531
    XOR EAX,EAX                         ; 004ed66c
        ;   Label: LAB_004ed66c
    MOV [0x00688068],EAX                ; 004ed66e | g_RenderVertexBuffer[1].g
    MOV [0x0068806c],EAX                ; 004ed673 | g_RenderVertexBuffer[1].b
    MOV [0x00688064],EAX                ; 004ed678 | g_RenderVertexBuffer[1].r
    JMP 0x004ed531                      ; 004ed67d
        ;   XREF to: 004ed531 (UNCONDITIONAL_JUMP)  ; LAB_004ed531
    JBE 0x004ed64e                      ; 004ed682
        ;   XREF to: 004ed64e (CONDITIONAL_JUMP)  ; LAB_004ed64e
        ;   Label: LAB_004ed682
    CMP EBX,0x2                         ; 004ed684
    JZ 0x004ed66c                       ; 004ed687
        ;   XREF to: 004ed66c (CONDITIONAL_JUMP)  ; LAB_004ed66c
    JMP 0x004ed51e                      ; 004ed689
        ;   XREF to: 004ed51e (UNCONDITIONAL_JUMP)  ; LAB_004ed51e
    MOV EBX,0x7f80                      ; 004ed68e
        ;   Label: LAB_004ed68e
    XOR ECX,ECX                         ; 004ed693
    MOV dword ptr [0x00688098],EBX      ; 004ed695 | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],ECX      ; 004ed69b | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x00688094],ECX      ; 004ed6a1 | g_RenderVertexBuffer[2].r
    JMP 0x004ed563                      ; 004ed6a7
        ;   XREF to: 004ed563 (UNCONDITIONAL_JUMP)  ; LAB_004ed563
    XOR EBP,EBP                         ; 004ed6ac
        ;   Label: LAB_004ed6ac
    MOV dword ptr [0x00688098],EBP      ; 004ed6ae | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],EBP      ; 004ed6b4 | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x00688094],EBP      ; 004ed6ba | g_RenderVertexBuffer[2].r
    JMP 0x004ed563                      ; 004ed6c0
        ;   XREF to: 004ed563 (UNCONDITIONAL_JUMP)  ; LAB_004ed563
    JBE 0x004ed68e                      ; 004ed6c5
        ;   XREF to: 004ed68e (CONDITIONAL_JUMP)  ; LAB_004ed68e
        ;   Label: LAB_004ed6c5
    CMP EBX,0x2                         ; 004ed6c7
    JZ 0x004ed6ac                       ; 004ed6ca
        ;   XREF to: 004ed6ac (CONDITIONAL_JUMP)  ; LAB_004ed6ac
    JMP 0x004ed550                      ; 004ed6cc
        ;   XREF to: 004ed550 (UNCONDITIONAL_JUMP)  ; LAB_004ed550
    MOV ECX,0x7f80                      ; 004ed6d1
        ;   Label: LAB_004ed6d1
    XOR EDX,EDX                         ; 004ed6d6
    MOV dword ptr [0x006880c8],ECX      ; 004ed6d8 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],EDX      ; 004ed6de | g_RenderVertexBuffer[3].b
    MOV dword ptr [0x006880c4],EDX      ; 004ed6e4 | g_RenderVertexBuffer[3].r
    JMP 0x004ed595                      ; 004ed6ea
        ;   XREF to: 004ed595 (UNCONDITIONAL_JUMP)  ; LAB_004ed595
    XOR EDI,EDI                         ; 004ed6ef
        ;   Label: LAB_004ed6ef
    MOV dword ptr [0x006880c8],EDI      ; 004ed6f1 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],EDI      ; 004ed6f7 | g_RenderVertexBuffer[3].b
    MOV dword ptr [0x006880c4],EDI      ; 004ed6fd | g_RenderVertexBuffer[3].r
    JMP 0x004ed595                      ; 004ed703
        ;   XREF to: 004ed595 (UNCONDITIONAL_JUMP)  ; LAB_004ed595
    JBE 0x004ed6d1                      ; 004ed708
        ;   XREF to: 004ed6d1 (CONDITIONAL_JUMP)  ; LAB_004ed6d1
        ;   Label: LAB_004ed708
    CMP EBX,0x2                         ; 004ed70a
    JZ 0x004ed6ef                       ; 004ed70d
        ;   XREF to: 004ed6ef (CONDITIONAL_JUMP)  ; LAB_004ed6ef
    JMP 0x004ed582                      ; 004ed70f
        ;   XREF to: 004ed582 (UNCONDITIONAL_JUMP)  ; LAB_004ed582
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ed714
        ;   Label: LAB_004ed714
    MOV dword ptr [EBX],0x1             ; 004ed718
    ADD ESP,0xc                         ; 004ed71e
    POP EBP                             ; 004ed721
    POP EDI                             ; 004ed722
    POP ESI                             ; 004ed723
    POP EBX                             ; 004ed724
    RET                                 ; 004ed725

