; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[13]:
;   core_chain.cpp_CChain_renderTransparent_FUN_004308f0 at 00430e92
;   core_fire.cpp_CBulletHole_render_FUN_004bfac0 at 004bfd0e
;   core_fire.cpp_CCrater_render_FUN_004c4620 at 004c4865
;   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 at 004c20cd
;   core_fire.cpp_CLightningBolt_render_FUN_004c5720 at 004c5a34
;   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 at 004bf7cf
;   core_fire.cpp_CTrail_render_FUN_004c5e90 at 004c6136
;   core_gore.cpp_CBloodParticle_render_FUN_004ebac0 at 004ebe49
;   core_gore.cpp_CBloodPool_render_FUN_004ecce0 at 004ecf8f
;   core_gore.cpp_CBloodSplat_render_FUN_004ec500 at 004ec7ec
;   ... and 3 more
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bcf0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
    PUSH ESI                            ; 0048bcf1
    PUSH EDI                            ; 0048bcf2
    PUSH EBP                            ; 0048bcf3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0048bcf4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048bcf8
    CMP dword ptr [EBP + 0xc],0x0       ; 0048bcfc
    JNZ 0x0048bd71                      ; 0048bd00
        ;   XREF to: 0048bd71 (CONDITIONAL_JUMP)  ; LAB_0048bd71
    MOV ECX,0xffffffff                  ; 0048bd06
        ;   Label: LAB_0048bd06
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048bd0b
    XOR EDX,EDX                         ; 0048bd0e
    TEST EBX,EBX                        ; 0048bd10
    JLE 0x0048bd30                      ; 0048bd12
        ;   XREF to: 0048bd30 (CONDITIONAL_JUMP)  ; LAB_0048bd30
    MOV EAX,ESI                         ; 0048bd14
    MOV EDI,dword ptr [EBP]             ; 0048bd16
    MOV EBX,dword ptr [EAX + 0x18]      ; 0048bd19
        ;   Label: LAB_0048bd19
    IMUL EBX,EBX,0x30                   ; 0048bd1c
    INC EDX                             ; 0048bd1f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0048bd20
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048bd24
    ADD EAX,0x4                         ; 0048bd27
    CMP EDX,EBX                         ; 0048bd2a
    JL 0x0048bd19                       ; 0048bd2c
        ;   XREF to: 0048bd19 (CONDITIONAL_JUMP)  ; LAB_0048bd19
    MOV EAX,EAX                         ; 0048bd2e
    TEST ECX,0x80000000                 ; 0048bd30
        ;   Label: LAB_0048bd30
    JZ 0x0048bd3d                       ; 0048bd36
        ;   XREF to: 0048bd3d (CONDITIONAL_JUMP)  ; LAB_0048bd3d
    TEST CL,0x1f                        ; 0048bd38
    JNZ 0x0048bd6c                      ; 0048bd3b
        ;   XREF to: 0048bd6c (CONDITIONAL_JUMP)  ; LAB_0048bd6c
    CMP dword ptr [EBP + 0x4],0x0       ; 0048bd3d
        ;   Label: LAB_0048bd3d
    JZ 0x0048bd83                       ; 0048bd41
        ;   XREF to: 0048bd83 (CONDITIONAL_JUMP)  ; LAB_0048bd83
    XOR EDX,EDX                         ; 0048bd43
    MOV EAX,0x49072f                    ; 0048bd45
    MOV dword ptr [0x02d052a0],EDX      ; 0048bd4a | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048bd50 | g_VertexPreprocessMode
    MOV [0x02d0257c],EAX                ; 0048bd56 | g_ScanlineRenderFunc
    LEA EAX,[ESI + 0x18]                ; 0048bd5b
        ;   Label: LAB_0048bd5b
    PUSH EAX                            ; 0048bd5e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048bd5f
    PUSH EBX                            ; 0048bd62
    PUSH EBP                            ; 0048bd63
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048bd64
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048bd69
    POP EBP                             ; 0048bd6c
        ;   Label: LAB_0048bd6c
    POP EDI                             ; 0048bd6d
    POP ESI                             ; 0048bd6e
    POP EBX                             ; 0048bd6f
    RET                                 ; 0048bd70
    LEA EAX,[ESI + 0x8]                 ; 0048bd71
        ;   Label: LAB_0048bd71
    PUSH EAX                            ; 0048bd74
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048bd75
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048bd7a
    TEST EAX,EAX                        ; 0048bd7d
    JZ 0x0048bd6c                       ; 0048bd7f
        ;   XREF to: 0048bd6c (CONDITIONAL_JUMP)  ; LAB_0048bd6c
    JMP 0x0048bd06                      ; 0048bd81
        ;   XREF to: 0048bd06 (UNCONDITIONAL_JUMP)  ; LAB_0048bd06
    CMP dword ptr [0x0067939c],0x20     ; 0048bd83 | g_BitsPerPixel
        ;   Label: LAB_0048bd83
    JNZ 0x0048bdae                      ; 0048bd8a
        ;   XREF to: 0048bdae (CONDITIONAL_JUMP)  ; LAB_0048bdae
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048bd8c | g_ScanlineRenderFunc
    MOV EDI,0x6                         ; 0048bd96
        ;   Label: LAB_0048bd96
    MOV EBX,0x267                       ; 0048bd9b
    MOV dword ptr [0x02d052a4],EDI      ; 0048bda0 | g_VertexPreprocessMode
    MOV dword ptr [0x02d052a0],EBX      ; 0048bda6 | g_RenderStateFlags
    JMP 0x0048bd5b                      ; 0048bdac
        ;   XREF to: 0048bd5b (UNCONDITIONAL_JUMP)  ; LAB_0048bd5b
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048bdae | g_ScanlineRenderFunc
        ;   Label: LAB_0048bdae
    JMP 0x0048bd96                      ; 0048bdb8
        ;   XREF to: 0048bd96 (UNCONDITIONAL_JUMP)  ; LAB_0048bd96

