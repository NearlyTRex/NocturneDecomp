; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   polygon_info
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[7]:
;   core_bodypart.cpp_CBodyPart_FUN_00419340 at 00419485
;   core_dskybox.cpp_renderSkyDome_FUN_004901f0 at 0049064d
;   core_flies.cpp_CFlies_renderOpaque_FUN_004cc300 at 004cc6a0
;   core_glass.cpp_CGlass_renderBackground_FUN_004e9e90 at 004e9fc3
;   core_morph.cpp_CMorphModel_FUN_0052b160 at 0052b229
;   core_wateract.cpp_CWaterActor_renderTransparent_FUN_005eb280 at 005eb48f
;   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 at 0048cf27
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048aeb0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
    PUSH EDI                            ; 0048aeb1
    PUSH EBP                            ; 0048aeb2
    SUB ESP,0x4                         ; 0048aeb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048aeb6
    CMP dword ptr [ESP + 0x1c],-0x1     ; 0048aeba
    JZ 0x0048af4f                       ; 0048aebf
        ;   XREF to: 0048af4f (CONDITIONAL_JUMP)  ; LAB_0048af4f
    CMP dword ptr [EBX + 0x1c],0x0      ; 0048aec5
        ;   Label: LAB_0048aec5
    JNZ 0x0048af5c                      ; 0048aec9
        ;   XREF to: 0048af5c (CONDITIONAL_JUMP)  ; LAB_0048af5c
    CMP dword ptr [EBX + 0xc],0x0       ; 0048aecf
    JNZ 0x0048af76                      ; 0048aed3
        ;   XREF to: 0048af76 (CONDITIONAL_JUMP)  ; LAB_0048af76
    PUSH ESI                            ; 0048aed9
        ;   Label: LAB_0048aed9
    CMP dword ptr [EBX + 0x4],0x0       ; 0048aeda
    JZ 0x0048af8f                       ; 0048aede
        ;   XREF to: 0048af8f (CONDITIONAL_JUMP)  ; LAB_0048af8f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048aee4
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048aee8
    XOR ECX,ECX                         ; 0048aeeb
    TEST ESI,ESI                        ; 0048aeed
    JLE 0x0048af10                      ; 0048aeef
        ;   XREF to: 0048af10 (CONDITIONAL_JUMP)  ; LAB_0048af10
    XOR EDX,EDX                         ; 0048aef1
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048aef3
        ;   Label: LAB_0048aef3
    MOV dword ptr [EDX + 0x2c6d5ac],ESI ; 0048aef6 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048aefc
    ADD EDX,0x4                         ; 0048af00
    INC ECX                             ; 0048af03
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048af04
    ADD EAX,0xc                         ; 0048af07
    CMP ECX,EBP                         ; 0048af0a
    JL 0x0048aef3                       ; 0048af0c
        ;   XREF to: 0048aef3 (CONDITIONAL_JUMP)  ; LAB_0048aef3
    MOV EAX,EAX                         ; 0048af0e
    CMP dword ptr [EBX + 0x4],0x0       ; 0048af10
        ;   Label: LAB_0048af10
    JZ 0x0048afea                       ; 0048af14
        ;   XREF to: 0048afea (CONDITIONAL_JUMP)  ; LAB_0048afea
    XOR EAX,EAX                         ; 0048af1a
    MOV EBP,0x49072f                    ; 0048af1c
    MOV [0x02d052a0],EAX                ; 0048af21 | g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 0048af26 | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],EBP      ; 0048af2b | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048af31
        ;   Label: LAB_0048af31
    PUSH 0x2c6d5ac                      ; 0048af35 | g_VertexIndexBuffer
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048af3a
    PUSH ECX                            ; 0048af3d
    PUSH EBX                            ; 0048af3e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048af3f
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048af44
    POP ESI                             ; 0048af47
    ADD ESP,0x4                         ; 0048af48
        ;   Label: LAB_0048af48
    POP EBP                             ; 0048af4b
    POP EDI                             ; 0048af4c
    POP EBX                             ; 0048af4d
    RET                                 ; 0048af4e
    MOV dword ptr [ESP + 0x1c],0x2cd    ; 0048af4f
        ;   Label: LAB_0048af4f
    JMP 0x0048aec5                      ; 0048af57
        ;   XREF to: 0048aec5 (UNCONDITIONAL_JUMP)  ; LAB_0048aec5
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048af5c
        ;   Label: LAB_0048af5c
    PUSH EDI                            ; 0048af60
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048af61
    PUSH EBP                            ; 0048af65
    PUSH EBX                            ; 0048af66
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0 ; 0048af67
        ;   XREF to: 0048d7a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
    ADD ESP,0xc                         ; 0048af6c
    ADD ESP,0x4                         ; 0048af6f
    POP EBP                             ; 0048af72
    POP EDI                             ; 0048af73
    POP EBX                             ; 0048af74
    RET                                 ; 0048af75
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048af76
        ;   Label: LAB_0048af76
    ADD EAX,0x8                         ; 0048af7a
    PUSH EAX                            ; 0048af7d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048af7e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048af83
    TEST EAX,EAX                        ; 0048af86
    JZ 0x0048af48                       ; 0048af88
        ;   XREF to: 0048af48 (CONDITIONAL_JUMP)  ; LAB_0048af48
    JMP 0x0048aed9                      ; 0048af8a
        ;   XREF to: 0048aed9 (UNCONDITIONAL_JUMP)  ; LAB_0048aed9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048af8f
        ;   Label: LAB_0048af8f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048af93
    XOR ECX,ECX                         ; 0048af96
    TEST EDX,EDX                        ; 0048af98
    JLE 0x0048af10                      ; 0048af9a
        ;   XREF to: 0048af10 (CONDITIONAL_JUMP)  ; LAB_0048af10
    XOR EDX,EDX                         ; 0048afa0
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048afa2
        ;   Label: LAB_0048afa2
    MOV EBP,dword ptr [EBX + 0x20]      ; 0048afa5
    MOV dword ptr [ESP + 0x4],ESI       ; 0048afa8
    TEST EBP,EBP                        ; 0048afac
    JZ 0x0048afd2                       ; 0048afae
        ;   XREF to: 0048afd2 (CONDITIONAL_JUMP)  ; LAB_0048afd2
    MOV ESI,dword ptr [ESP + 0x4]       ; 0048afb0
        ;   Label: LAB_0048afb0
    MOV dword ptr [EDX + 0x2c6d5ac],ESI ; 0048afb4 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048afba
    ADD EAX,0xc                         ; 0048afbe
    INC ECX                             ; 0048afc1
    MOV EDI,dword ptr [ESI + 0x4]       ; 0048afc2
    ADD EDX,0x4                         ; 0048afc5
    CMP ECX,EDI                         ; 0048afc8
    JGE 0x0048af10                      ; 0048afca
        ;   XREF to: 0048af10 (CONDITIONAL_JUMP)  ; LAB_0048af10
    JMP 0x0048afa2                      ; 0048afd0
        ;   XREF to: 0048afa2 (UNCONDITIONAL_JUMP)  ; LAB_0048afa2
    IMUL ESI,ESI,0x30                   ; 0048afd2
        ;   Label: LAB_0048afd2
    MOV EDI,dword ptr [EBX]             ; 0048afd5
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048afd7
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048afda
    MOV EDI,dword ptr [EBX]             ; 0048afde
    ADD EDI,ESI                         ; 0048afe0
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048afe2
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048afe5
    JMP 0x0048afb0                      ; 0048afe8
        ;   XREF to: 0048afb0 (UNCONDITIONAL_JUMP)  ; LAB_0048afb0
    CMP dword ptr [0x0067939c],0x20     ; 0048afea | g_BitsPerPixel
        ;   Label: LAB_0048afea
    JNZ 0x0048b016                      ; 0048aff1
        ;   XREF to: 0048b016 (CONDITIONAL_JUMP)  ; LAB_0048b016
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048aff3 | g_ScanlineRenderFunc
    MOV EDI,0x6                         ; 0048affd
        ;   Label: LAB_0048affd
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048b002
    MOV dword ptr [0x02d052a4],EDI      ; 0048b006 | g_RenderStateFlag2
    MOV [0x02d052a0],EAX                ; 0048b00c | g_RenderStateFlags
    JMP 0x0048af31                      ; 0048b011
        ;   XREF to: 0048af31 (UNCONDITIONAL_JUMP)  ; LAB_0048af31
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b016 | g_ScanlineRenderFunc
        ;   Label: LAB_0048b016
    JMP 0x0048affd                      ; 0048b020
        ;   XREF to: 0048affd (UNCONDITIONAL_JUMP)  ; LAB_0048affd

