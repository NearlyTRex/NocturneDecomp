; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042c430(void)
;
;
; XREF[3]:
;   cockpit_ckptutil.c_copyBitmapRegion_FUN_0042d550 at 0042d578
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410 at 0042c419
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_00516750 at 00516797
;
; Referenced Globals:
;   int g_MMXSupported
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c38b40],0x0      ; 0042c430 | g_MMXSupported
        ;   Label: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042c430
    JZ 0x0042c43f                       ; 0042c437
        ;   XREF to: 0042c43f (CONDITIONAL_JUMP)  ; LAB_0042c43f
    MOV EAX,0x42c2d2                    ; 0042c439
    RET                                 ; 0042c43e
    MOV EAX,0x42c1d8                    ; 0042c43f
        ;   Label: LAB_0042c43f
    RET                                 ; 0042c444

