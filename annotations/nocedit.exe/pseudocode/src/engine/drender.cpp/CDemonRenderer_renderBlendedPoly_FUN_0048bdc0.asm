; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0048bdc0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; uint             Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0044b060 at 0044b20a
;   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 at 004c3415
;   core_glass.cpp_CGlass_renderOpaque_FUN_004e9930 at 004e9aba
;   core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0 at 004e9c69
;   core_water.cpp_CWater_render_FUN_005ea320 at 005ea767
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

    PUSH EBX                            ; 0048bdc0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0048bdc0
    PUSH ESI                            ; 0048bdc1
    PUSH EDI                            ; 0048bdc2
    PUSH EBP                            ; 0048bdc3
    SUB ESP,0x4                         ; 0048bdc4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048bdc7
    CMP dword ptr [EBX + 0xc],0x0       ; 0048bdcb
    JNZ 0x0048be6e                      ; 0048bdcf
        ;   XREF to: 0048be6e (CONDITIONAL_JUMP)  ; LAB_0048be6e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048bdd5
        ;   Label: LAB_0048bdd5
    MOV ECX,0xffffffff                  ; 0048bdd9
    XOR EDX,EDX                         ; 0048bdde
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048bde0
    MOV dword ptr [ESP],ECX             ; 0048bde3
    TEST ESI,ESI                        ; 0048bde6
    JLE 0x0048be20                      ; 0048bde8
        ;   XREF to: 0048be20 (CONDITIONAL_JUMP)  ; LAB_0048be20
    XOR ECX,ECX                         ; 0048bdea
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048bdec
        ;   Label: LAB_0048bdec
    MOV dword ptr [ECX + 0x2c6d5ac],ESI ; 0048bdef | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    IMUL ESI,ESI,0x30                   ; 0048bdf5
    MOV EDI,dword ptr [EBX]             ; 0048bdf8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0048bdfa
    MOV EDI,dword ptr [ESP]             ; 0048bdfe
    ADD ECX,0x4                         ; 0048be01
    AND EDI,ESI                         ; 0048be04
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048be06
    ADD EAX,0xc                         ; 0048be0a
    INC EDX                             ; 0048be0d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048be0e
    MOV dword ptr [ESP],EDI             ; 0048be11
    CMP EDX,EBP                         ; 0048be14
    JL 0x0048bdec                       ; 0048be16
        ;   XREF to: 0048bdec (CONDITIONAL_JUMP)  ; LAB_0048bdec
    LEA EAX,[EAX]                       ; 0048be18
    MOV EDX,EDX                         ; 0048be1e
    TEST byte ptr [ESP + 0x3],0x80      ; 0048be20
        ;   Label: LAB_0048be20
    JZ 0x0048be2d                       ; 0048be25
        ;   XREF to: 0048be2d (CONDITIONAL_JUMP)  ; LAB_0048be2d
    TEST byte ptr [ESP],0x1f            ; 0048be27
    JNZ 0x0048be66                      ; 0048be2b
        ;   XREF to: 0048be66 (CONDITIONAL_JUMP)  ; LAB_0048be66
    CMP dword ptr [EBX + 0x4],0x0       ; 0048be2d
        ;   Label: LAB_0048be2d
    JZ 0x0048be87                       ; 0048be31
        ;   XREF to: 0048be87 (CONDITIONAL_JUMP)  ; LAB_0048be87
    XOR ESI,ESI                         ; 0048be33
    MOV ECX,0x49072f                    ; 0048be35
    MOV dword ptr [0x02d052a0],ESI      ; 0048be3a | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ESI      ; 0048be40 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],ECX      ; 0048be46 | g_ScanlineRenderFunc
    LEA EAX,[EAX]                       ; 0048be4c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048be50
        ;   Label: LAB_0048be50
    PUSH 0x2c6d5ac                      ; 0048be54 | g_VertexIndexBuffer
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048be59
    PUSH EDX                            ; 0048be5c
    PUSH EBX                            ; 0048be5d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048be5e
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048be63
    ADD ESP,0x4                         ; 0048be66
        ;   Label: LAB_0048be66
    POP EBP                             ; 0048be69
    POP EDI                             ; 0048be6a
    POP ESI                             ; 0048be6b
    POP EBX                             ; 0048be6c
    RET                                 ; 0048be6d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048be6e
        ;   Label: LAB_0048be6e
    ADD EAX,0x8                         ; 0048be72
    PUSH EAX                            ; 0048be75
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048be76
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048be7b
    TEST EAX,EAX                        ; 0048be7e
    JZ 0x0048be66                       ; 0048be80
        ;   XREF to: 0048be66 (CONDITIONAL_JUMP)  ; LAB_0048be66
    JMP 0x0048bdd5                      ; 0048be82
        ;   XREF to: 0048bdd5 (UNCONDITIONAL_JUMP)  ; LAB_0048bdd5
    CMP dword ptr [0x0067939c],0x20     ; 0048be87 | g_BitsPerPixel
        ;   Label: LAB_0048be87
    JNZ 0x0048bef9                      ; 0048be8e
        ;   XREF to: 0048bef9 (CONDITIONAL_JUMP)  ; LAB_0048bef9
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048be90 | g_ScanlineRenderFunc
    MOV EBP,0x6                         ; 0048be9a
        ;   Label: LAB_0048be9a
    MOV EDI,0x267                       ; 0048be9f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048bea4
    MOV dword ptr [0x02d052a4],EBP      ; 0048bea7 | g_VertexPreprocessMode
    MOV dword ptr [0x02d052a0],EDI      ; 0048bead | g_RenderStateFlags
    TEST EAX,EAX                        ; 0048beb3
    JNZ 0x0048be50                      ; 0048beb5
        ;   XREF to: 0048be50 (CONDITIONAL_JUMP)  ; LAB_0048be50
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048beb7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048bebb
    XOR ECX,ECX                         ; 0048bebe
    TEST EDX,EDX                        ; 0048bec0
    JLE 0x0048be50                      ; 0048bec2
        ;   XREF to: 0048be50 (CONDITIONAL_JUMP)  ; LAB_0048be50
    XOR EDX,EDX                         ; 0048bec4
    MOV ESI,dword ptr [EDX + 0x2c6d5ac] ; 0048bec6 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048bec6
    IMUL ESI,ESI,0x30                   ; 0048becc
    MOV EDI,dword ptr [EBX]             ; 0048becf
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048bed1
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048bed4
    MOV EDI,dword ptr [EBX]             ; 0048bed8
    ADD EDI,ESI                         ; 0048beda
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048bedc
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048bedf
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048bee2
    ADD EAX,0xc                         ; 0048bee6
    INC ECX                             ; 0048bee9
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048beea
    ADD EDX,0x4                         ; 0048beed
    CMP ECX,EBP                         ; 0048bef0
    JL 0x0048bec6                       ; 0048bef2
        ;   XREF to: 0048bec6 (CONDITIONAL_JUMP)  ; LAB_0048bec6
    JMP 0x0048be50                      ; 0048bef4
        ;   XREF to: 0048be50 (UNCONDITIONAL_JUMP)  ; LAB_0048be50
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048bef9 | g_ScanlineRenderFunc
        ;   Label: LAB_0048bef9
    JMP 0x0048be9a                      ; 0048bf03
        ;   XREF to: 0048be9a (UNCONDITIONAL_JUMP)  ; LAB_0048be9a

