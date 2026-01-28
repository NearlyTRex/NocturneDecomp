; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_drawPolygon2_FUN_005b7610 (SRenderVertex **vertex_array,int vertex_count,int render_flags)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   vertex_array
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   render_flags
;
; XREF[7]:
;   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 at 00437dde
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 at 00436880
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420 at 00438564
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 at 00483a6d
;   engine_drender.cpp_renderTriangleTextured_FUN_00483370 at 004833f1
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 at 00553bd0
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 at 00552b16
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7610 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_drawPolygon2_FUN_005b7610
    JNZ 0x005b761c                      ; 005b7617
        ;   XREF to: 005b761c (CONDITIONAL_JUMP)  ; LAB_005b761c
    XOR EAX,EAX                         ; 005b7619
    RET                                 ; 005b761b
    PUSH ESI                            ; 005b761c
        ;   Label: LAB_005b761c
    PUSH EBX                            ; 005b761d
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b761e
    PUSH ECX                            ; 005b7622
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b7623
    PUSH EBX                            ; 005b7627
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b7628
    PUSH ESI                            ; 005b762c
    CALL dword ptr [0x03f6b8cc]         ; 005b762d | g_APIDLL_drawPolygon2
    ADD ESP,0xc                         ; 005b7633
    POP EBX                             ; 005b7636
    POP ESI                             ; 005b7637
    RET                                 ; 005b7638

