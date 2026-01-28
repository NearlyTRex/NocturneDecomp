; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   polygon_info
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   core_set.cpp_CDemonSet_FUN_00570040 at 0057021f
;   core_set.cpp_FUN_005702b0 at 00570640
;   core_water.cpp_CWater_render_FUN_005ea320 at 005ea7c8
;   shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 at 0051ec5a
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b1e0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
    PUSH EBP                            ; 0048b1e1
    SUB ESP,0x4                         ; 0048b1e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048b1e5
    CMP dword ptr [EBX + 0xc],0x0       ; 0048b1e9
    JNZ 0x0048b270                      ; 0048b1ed
        ;   XREF to: 0048b270 (CONDITIONAL_JUMP)  ; LAB_0048b270
    PUSH EDI                            ; 0048b1f3
        ;   Label: LAB_0048b1f3
    PUSH ESI                            ; 0048b1f4
    MOV ECX,dword ptr [EBX + 0x4]       ; 0048b1f5
    TEST ECX,ECX                        ; 0048b1f8
    JZ 0x0048b289                       ; 0048b1fa
        ;   XREF to: 0048b289 (CONDITIONAL_JUMP)  ; LAB_0048b289
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b200
    MOV EDI,dword ptr [EAX + 0x4]       ; 0048b204
    XOR EDX,EDX                         ; 0048b207
    TEST EDI,EDI                        ; 0048b209
    JLE 0x0048b230                      ; 0048b20b
        ;   XREF to: 0048b230 (CONDITIONAL_JUMP)  ; LAB_0048b230
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0048b20d
    XOR EAX,EAX                         ; 0048b211
    MOV ESI,dword ptr [ECX + 0x18]      ; 0048b213
        ;   Label: LAB_0048b213
    MOV dword ptr [EAX + 0x2c6d5ac],ESI ; 0048b216 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b21c
    ADD EAX,0x4                         ; 0048b220
    INC EDX                             ; 0048b223
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048b224
    ADD ECX,0xc                         ; 0048b227
    CMP EDX,EBP                         ; 0048b22a
    JL 0x0048b213                       ; 0048b22c
        ;   XREF to: 0048b213 (CONDITIONAL_JUMP)  ; LAB_0048b213
    MOV EAX,EAX                         ; 0048b22e
    CMP dword ptr [EBX + 0x4],0x0       ; 0048b230
        ;   Label: LAB_0048b230
    JZ 0x0048b2e2                       ; 0048b234
        ;   XREF to: 0048b2e2 (CONDITIONAL_JUMP)  ; LAB_0048b2e2
    XOR EDX,EDX                         ; 0048b23a
    MOV EAX,0x49072f                    ; 0048b23c
    MOV dword ptr [0x02d052a0],EDX      ; 0048b241 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048b247 | g_RenderStateFlag2
    MOV [0x02d0257c],EAX                ; 0048b24d | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b252
        ;   Label: LAB_0048b252
    PUSH 0x2c6d5ac                      ; 0048b256 | g_VertexIndexBuffer
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048b25b
    PUSH ESI                            ; 0048b25e
    PUSH EBX                            ; 0048b25f
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b260
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b265
    POP ESI                             ; 0048b268
    POP EDI                             ; 0048b269
    ADD ESP,0x4                         ; 0048b26a
        ;   Label: LAB_0048b26a
    POP EBP                             ; 0048b26d
    POP EBX                             ; 0048b26e
    RET                                 ; 0048b26f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048b270
        ;   Label: LAB_0048b270
    ADD EAX,0x8                         ; 0048b274
    PUSH EAX                            ; 0048b277
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048b278
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048b27d
    TEST EAX,EAX                        ; 0048b280
    JZ 0x0048b26a                       ; 0048b282
        ;   XREF to: 0048b26a (CONDITIONAL_JUMP)  ; LAB_0048b26a
    JMP 0x0048b1f3                      ; 0048b284
        ;   XREF to: 0048b1f3 (UNCONDITIONAL_JUMP)  ; LAB_0048b1f3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b289
        ;   Label: LAB_0048b289
    CMP dword ptr [EAX + 0x4],0x0       ; 0048b28d
    JLE 0x0048b230                      ; 0048b291
        ;   XREF to: 0048b230 (CONDITIONAL_JUMP)  ; LAB_0048b230
    XOR EDX,EDX                         ; 0048b293
    MOV EDI,dword ptr [EBX + 0x20]      ; 0048b295
        ;   Label: LAB_0048b295
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048b298
    TEST EDI,EDI                        ; 0048b29b
    JZ 0x0048b2bd                       ; 0048b29d
        ;   XREF to: 0048b2bd (CONDITIONAL_JUMP)  ; LAB_0048b2bd
    MOV dword ptr [EDX + 0x2c6d5ac],ESI ; 0048b29f | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048b29f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b2a5
    ADD EAX,0xc                         ; 0048b2a9
    INC ECX                             ; 0048b2ac
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048b2ad
    ADD EDX,0x4                         ; 0048b2b0
    CMP ECX,EBP                         ; 0048b2b3
    JGE 0x0048b230                      ; 0048b2b5
        ;   XREF to: 0048b230 (CONDITIONAL_JUMP)  ; LAB_0048b230
    JMP 0x0048b295                      ; 0048b2bb
        ;   XREF to: 0048b295 (UNCONDITIONAL_JUMP)  ; LAB_0048b295
    IMUL EDI,ESI,0x30                   ; 0048b2bd
        ;   Label: LAB_0048b2bd
    MOV dword ptr [ESP + 0x8],EDI       ; 0048b2c0
    MOV EBP,dword ptr [ESP + 0x8]       ; 0048b2c4
    MOV EDI,dword ptr [EBX]             ; 0048b2c8
    ADD EDI,EBP                         ; 0048b2ca
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048b2cc
    MOV dword ptr [EDI + 0x18],EBP      ; 0048b2cf
    MOV EDI,dword ptr [ESP + 0x8]       ; 0048b2d2
    MOV EBP,dword ptr [EBX]             ; 0048b2d6
    ADD EBP,EDI                         ; 0048b2d8
    MOV EDI,dword ptr [EAX + 0x20]      ; 0048b2da
    MOV dword ptr [EBP + 0x1c],EDI      ; 0048b2dd
    JMP 0x0048b29f                      ; 0048b2e0
        ;   XREF to: 0048b29f (UNCONDITIONAL_JUMP)  ; LAB_0048b29f
    CMP dword ptr [0x0067939c],0x20     ; 0048b2e2 | g_BitsPerPixel
        ;   Label: LAB_0048b2e2
    JNZ 0x0048b310                      ; 0048b2e9
        ;   XREF to: 0048b310 (CONDITIONAL_JUMP)  ; LAB_0048b310
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048b2eb | g_ScanlineRenderFunc
    MOV EBP,0x6                         ; 0048b2f5
        ;   Label: LAB_0048b2f5
    MOV EDI,0x2cd                       ; 0048b2fa
    MOV dword ptr [0x02d052a4],EBP      ; 0048b2ff | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EDI      ; 0048b305 | g_RenderStateFlags
    JMP 0x0048b252                      ; 0048b30b
        ;   XREF to: 0048b252 (UNCONDITIONAL_JUMP)  ; LAB_0048b252
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b310 | g_ScanlineRenderFunc
        ;   Label: LAB_0048b310
    JMP 0x0048b2f5                      ; 0048b31a
        ;   XREF to: 0048b2f5 (UNCONDITIONAL_JUMP)  ; LAB_0048b2f5

