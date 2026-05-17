; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0048bba0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; uint             Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 at 004c337e
;   core_manpuz.cpp_CMansionPuzzleCircle_renderGem_FUN_00509d50 at 0050a184
;   core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0 at 0054837e
;   core_path.cpp_renderGridQuad_FUN_00547dd0 at 00547fab
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   MainScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bba0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0048bba0
    PUSH ESI                            ; 0048bba1
    PUSH EDI                            ; 0048bba2
    PUSH EBP                            ; 0048bba3
    SUB ESP,0x4                         ; 0048bba4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048bba7
    CMP dword ptr [EBX + 0xc],0x0       ; 0048bbab
    JNZ 0x0048bc4e                      ; 0048bbaf
        ;   XREF to: 0048bc4e (CONDITIONAL_JUMP)  ; LAB_0048bc4e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048bbb5
        ;   Label: LAB_0048bbb5
    MOV ECX,0xffffffff                  ; 0048bbb9
    XOR EDX,EDX                         ; 0048bbbe
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048bbc0
    MOV dword ptr [ESP],ECX             ; 0048bbc3
    TEST ESI,ESI                        ; 0048bbc6
    JLE 0x0048bc00                      ; 0048bbc8
        ;   XREF to: 0048bc00 (CONDITIONAL_JUMP)  ; LAB_0048bc00
    XOR ECX,ECX                         ; 0048bbca
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048bbcc
        ;   Label: LAB_0048bbcc
    MOV dword ptr [ECX + 0x2c6d5ac],ESI ; 0048bbcf | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    IMUL ESI,ESI,0x30                   ; 0048bbd5
    MOV EDI,dword ptr [EBX]             ; 0048bbd8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0048bbda
    MOV EDI,dword ptr [ESP]             ; 0048bbde
    ADD ECX,0x4                         ; 0048bbe1
    AND EDI,ESI                         ; 0048bbe4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048bbe6
    ADD EAX,0xc                         ; 0048bbea
    INC EDX                             ; 0048bbed
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048bbee
    MOV dword ptr [ESP],EDI             ; 0048bbf1
    CMP EDX,EBP                         ; 0048bbf4
    JL 0x0048bbcc                       ; 0048bbf6
        ;   XREF to: 0048bbcc (CONDITIONAL_JUMP)  ; LAB_0048bbcc
    LEA EAX,[EAX]                       ; 0048bbf8
    MOV EDX,EDX                         ; 0048bbfe
    TEST byte ptr [ESP + 0x3],0x80      ; 0048bc00
        ;   Label: LAB_0048bc00
    JZ 0x0048bc0d                       ; 0048bc05
        ;   XREF to: 0048bc0d (CONDITIONAL_JUMP)  ; LAB_0048bc0d
    TEST byte ptr [ESP],0x1f            ; 0048bc07
    JNZ 0x0048bc46                      ; 0048bc0b
        ;   XREF to: 0048bc46 (CONDITIONAL_JUMP)  ; LAB_0048bc46
    CMP dword ptr [EBX + 0x4],0x0       ; 0048bc0d
        ;   Label: LAB_0048bc0d
    JZ 0x0048bc67                       ; 0048bc11
        ;   XREF to: 0048bc67 (CONDITIONAL_JUMP)  ; LAB_0048bc67
    XOR ESI,ESI                         ; 0048bc13
    MOV ECX,0x49072f                    ; 0048bc15
    MOV dword ptr [0x02d052a0],ESI      ; 0048bc1a | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ESI      ; 0048bc20 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],ECX      ; 0048bc26 | g_ScanlineRenderFunc
    LEA EAX,[EAX]                       ; 0048bc2c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048bc30
        ;   Label: LAB_0048bc30
    PUSH 0x2c6d5ac                      ; 0048bc34 | g_VertexIndexBuffer
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048bc39
    PUSH EDX                            ; 0048bc3c
    PUSH EBX                            ; 0048bc3d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048bc3e
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048bc43
    ADD ESP,0x4                         ; 0048bc46
        ;   Label: LAB_0048bc46
    POP EBP                             ; 0048bc49
    POP EDI                             ; 0048bc4a
    POP ESI                             ; 0048bc4b
    POP EBX                             ; 0048bc4c
    RET                                 ; 0048bc4d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048bc4e
        ;   Label: LAB_0048bc4e
    ADD EAX,0x8                         ; 0048bc52
    PUSH EAX                            ; 0048bc55
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048bc56
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048bc5b
    TEST EAX,EAX                        ; 0048bc5e
    JZ 0x0048bc46                       ; 0048bc60
        ;   XREF to: 0048bc46 (CONDITIONAL_JUMP)  ; LAB_0048bc46
    JMP 0x0048bbb5                      ; 0048bc62
        ;   XREF to: 0048bbb5 (UNCONDITIONAL_JUMP)  ; LAB_0048bbb5
    CMP dword ptr [0x0067939c],0x20     ; 0048bc67 | g_BitsPerPixel
        ;   Label: LAB_0048bc67
    JNZ 0x0048bcd9                      ; 0048bc6e
        ;   XREF to: 0048bcd9 (CONDITIONAL_JUMP)  ; LAB_0048bcd9
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048bc70 | g_ScanlineRenderFunc
    MOV EBP,0x6                         ; 0048bc7a
        ;   Label: LAB_0048bc7a
    MOV EDI,0x367                       ; 0048bc7f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048bc84
    MOV dword ptr [0x02d052a4],EBP      ; 0048bc87 | g_VertexPreprocessMode
    MOV dword ptr [0x02d052a0],EDI      ; 0048bc8d | g_RenderStateFlags
    TEST EAX,EAX                        ; 0048bc93
    JNZ 0x0048bc30                      ; 0048bc95
        ;   XREF to: 0048bc30 (CONDITIONAL_JUMP)  ; LAB_0048bc30
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048bc97
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048bc9b
    XOR ECX,ECX                         ; 0048bc9e
    TEST EDX,EDX                        ; 0048bca0
    JLE 0x0048bc30                      ; 0048bca2
        ;   XREF to: 0048bc30 (CONDITIONAL_JUMP)  ; LAB_0048bc30
    XOR EDX,EDX                         ; 0048bca4
    MOV ESI,dword ptr [EDX + 0x2c6d5ac] ; 0048bca6 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048bca6
    IMUL ESI,ESI,0x30                   ; 0048bcac
    MOV EDI,dword ptr [EBX]             ; 0048bcaf
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048bcb1
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048bcb4
    MOV EDI,dword ptr [EBX]             ; 0048bcb8
    ADD EDI,ESI                         ; 0048bcba
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048bcbc
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048bcbf
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048bcc2
    ADD EAX,0xc                         ; 0048bcc6
    INC ECX                             ; 0048bcc9
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048bcca
    ADD EDX,0x4                         ; 0048bccd
    CMP ECX,EBP                         ; 0048bcd0
    JL 0x0048bca6                       ; 0048bcd2
        ;   XREF to: 0048bca6 (CONDITIONAL_JUMP)  ; LAB_0048bca6
    JMP 0x0048bc30                      ; 0048bcd4
        ;   XREF to: 0048bc30 (UNCONDITIONAL_JUMP)  ; LAB_0048bc30
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048bcd9 | g_ScanlineRenderFunc
        ;   Label: LAB_0048bcd9
    JMP 0x0048bc7a                      ; 0048bce3
        ;   XREF to: 0048bc7a (UNCONDITIONAL_JUMP)  ; LAB_0048bc7a

