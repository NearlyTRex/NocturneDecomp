; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_drawPolygon_FUN_005b75e0 (SRenderVertex *vertices,int vertex_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   render_flags
;
; XREF[5]:
;   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 at 005fd2b0
;   engine_prim.c_renderPolygonSoftware_FUN_00552510 at 005526fe
;   engine_prim.c_renderScanlinePolygon_FUN_00553470 at 00553748
;   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580 at 005dd664
;   wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50 at 005b7aed
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_drawPolygon* g_APIDLL_drawPolygon
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b75e0 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_drawPolygon_FUN_005b75e0
    JNZ 0x005b75ec                      ; 005b75e7
        ;   XREF to: 005b75ec (CONDITIONAL_JUMP)  ; LAB_005b75ec
    XOR EAX,EAX                         ; 005b75e9
    RET                                 ; 005b75eb
    PUSH ESI                            ; 005b75ec
        ;   Label: LAB_005b75ec
    PUSH EBX                            ; 005b75ed
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b75ee
    PUSH ECX                            ; 005b75f2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b75f3
    PUSH EBX                            ; 005b75f7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b75f8
    PUSH ESI                            ; 005b75fc
    CALL dword ptr [0x03f6b8c8]         ; 005b75fd | g_APIDLL_drawPolygon
    ADD ESP,0xc                         ; 005b7603
    POP EBX                             ; 005b7606
    POP ESI                             ; 005b7607
    RET                                 ; 005b7608

