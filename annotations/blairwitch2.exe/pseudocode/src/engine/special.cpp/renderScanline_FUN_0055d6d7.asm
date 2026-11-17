; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderScanline_FUN_0055d6d7(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y)
;
;
; XREF[8]:
;   engine_drender.cpp_renderTriangleSimple_FUN_004625f0 at 004628e6
;   engine_drender.cpp_renderTriangleTextured_FUN_00461f70 at 00462224
;   engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0 at 004ac0cf
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0051e130 at 0051e534
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0051d050 at 0051d2c6
;   engine_prim.c_renderPolygonSoftware_FUN_0051cb20 at 0051cf7b
;   engine_prim.c_renderScanlinePolygon_FUN_0051da80 at 0051e043
;   engine_zraster.c_rasterizeTriangle_FUN_0059a0b0 at 0059a54a
;
; Referenced Globals:
;   void* g_PTR_01c35e6c
;
; *****************************************************************************

section .text

    JMP dword ptr [0x01c35e6c]          ; 0055d6d7 | g_PTR_01c35e6c
        ;   Label: engine_special.cpp_renderScanline_FUN_0055d6d7

