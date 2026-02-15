; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670(CDemonRenderer *this_ptr,float scale_factor)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
;
; XREF[2]:
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 at 00574ed0
;   core_setedit.cpp_FUN_0057ce80 at 0057d044
;
; Referenced Globals:
;   double g_ProjectionRenderScaleDivisor = 65536
;   int g_ProjectionScale = 0x10000
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0048c670
        ;   Label: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
    FDIVR double ptr [0x00622045]       ; 0048c674 | g_ProjectionRenderScaleDivisor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c67a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x006793c0]        ; 0048c67f | g_ProjectionScale
    RET                                 ; 0048c685

