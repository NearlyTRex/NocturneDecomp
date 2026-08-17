; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_00460c20(CDemonRenderer *this_ptr,float scale_factor)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
;
; Referenced Globals:
;   double DOUBLE_0057dc55 = 65536
;   undefined4 DAT_005b7648
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00460c20
        ;   Label: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_00460c20
    FDIVR double ptr [0x0057dc55]       ; 00460c24 | DOUBLE_0057dc55
    CALL crt_math.c_round_FUN_00563a30  ; 00460c2a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x005b7648]        ; 00460c2f | DAT_005b7648
    RET                                 ; 00460c35

