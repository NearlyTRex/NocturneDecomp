; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolygon_FUN_00532620(SRenderVertex *vertices,int vertex_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   render_flags
;
; XREF[5]:
;   engine_prim.c_renderPolygonSoftware_FUN_004f9dd0 at 004f9faa
;   engine_prim.c_renderScanlinePolygon_FUN_004fad00 at 004fafd9
;   engine_special.cpp_drawFullScreenQuad_FUN_005329c0 at 00532a5d
;   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00545700 at 005457e4
;   engine_zraster.c_rasterizeTriangle_FUN_005628c0 at 00562bb0
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_drawPolygon* g_APIDLL_drawPolygon
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532620 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_drawPolygon_FUN_00532620
    JNZ 0x0053262c                      ; 00532627
        ;   XREF to: 0053262c (CONDITIONAL_JUMP)  ; LAB_0053262c
    XOR EAX,EAX                         ; 00532629
    RET                                 ; 0053262b
    PUSH ESI                            ; 0053262c
        ;   Label: LAB_0053262c
    PUSH EBX                            ; 0053262d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0053262e
    PUSH ECX                            ; 00532632
    MOV EBX,dword ptr [ESP + 0x14]      ; 00532633
    PUSH EBX                            ; 00532637
    MOV ESI,dword ptr [ESP + 0x14]      ; 00532638
    PUSH ESI                            ; 0053263c
    CALL dword ptr [0x02dc9da8]         ; 0053263d | g_APIDLL_drawPolygon
    ADD ESP,0xc                         ; 00532643
    POP EBX                             ; 00532646
    POP ESI                             ; 00532647
    RET                                 ; 00532648

