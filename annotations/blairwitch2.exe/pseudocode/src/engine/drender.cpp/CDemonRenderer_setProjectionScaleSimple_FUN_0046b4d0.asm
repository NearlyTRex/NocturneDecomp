; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0(CDemonRenderer *this_ptr,float scale_factor)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
;
; XREF[1]:
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0 at 00538a10
;
; Referenced Globals:
;   double g_DOUBLE_005d15b3 = 65536
;   int g_INT_006141e4 = 0x10000
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0046b4d0
        ;   Label: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0
    FDIVR double ptr [0x005d15b3]       ; 0046b4d4 | g_DOUBLE_005d15b3
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b4da
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [0x006141e4]        ; 0046b4df | g_INT_006141e4
    RET                                 ; 0046b4e5

