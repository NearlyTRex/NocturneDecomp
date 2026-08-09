; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderScanline_FUN_00530710(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y)
;
;
; XREF[8]:
;   engine_drender.cpp_renderTriangleSimple_FUN_00458080 at 00458376
;   engine_drender.cpp_renderTriangleTextured_FUN_00457a00 at 00457cb4
;   engine_fpoly.c_rasterizePolygonHardware_FUN_00494260 at 0049455f
;   engine_prim.c_FUN_004f9dd0 at 004fa217
;   engine_prim.c_FUN_004fa2e0 at 004fa547
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390 at 004fb7a4
;   engine_prim.c_renderScanlinePolygon_FUN_004fad00 at 004fb29f
;   engine_zraster.c_rasterizeTriangle_FUN_005628c0 at 00562d5a
;
; Referenced Globals:
;   MainScanlineFunc* g_ScanlineRenderFunc
;
; *****************************************************************************

section .text

    JMP dword ptr [0x01c00c7c]          ; 00530710 | g_ScanlineRenderFunc
        ;   Label: engine_special.cpp_renderScanline_FUN_00530710

