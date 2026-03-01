; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx wincore_windll_cpp_renderScanline_FUN_005b5710(SHardwareEdge *left,SHardwareEdge *right,int scanline_y)
;
;
; XREF[8]:
;   engine_3d.c_rasterizePolygon_FUN_004d1340 at 004d163f
;   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 at 005fd45a
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 at 00483ce6
;   engine_drender.cpp_renderTriangleTextured_FUN_00483370 at 00483624
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 at 00553f14
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 at 00552cb6
;   engine_prim.c_renderPolygonSoftware_FUN_00552510 at 0055296b
;   engine_prim.c_renderScanlinePolygon_FUN_00553470 at 00553a1f
;
; Referenced Globals:
;   RenderScanlineFunc* g_ScanlineRenderFunc
;
; *****************************************************************************

section .text

    JMP dword ptr [0x02d0257c]          ; 005b5710 | g_ScanlineRenderFunc
        ;   Label: wincore_windll.cpp_renderScanline_FUN_005b5710

