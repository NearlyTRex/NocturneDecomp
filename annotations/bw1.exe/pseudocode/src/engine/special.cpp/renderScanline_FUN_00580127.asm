; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderScanline_FUN_00580127(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y)
;
;
; XREF[8]:
;   engine_drender.cpp_renderTriangleSimple_FUN_0047ab00 at 0047adf6
;   engine_drender.cpp_renderTriangleTextured_FUN_0047a480 at 0047a734
;   engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80 at 004c507f
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720 at 0053fb24
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0053e650 at 0053e8c6
;   engine_prim.c_renderPolygonSoftware_FUN_0053e120 at 0053e57b
;   engine_prim.c_renderScanlinePolygon_FUN_0053f080 at 0053f62f
;   engine_zraster.c_rasterizeTriangle_FUN_005bf120 at 005bf5ba
;
; Referenced Globals:
;   void* g_ScanlineRenderFunc
;
; *****************************************************************************

section .text

    JMP dword ptr [0x01c4f02c]          ; 00580127 | g_ScanlineRenderFunc
        ;   Label: engine_special.cpp_renderScanline_FUN_00580127

