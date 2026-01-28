; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780(void)
;
;
; XREF[3]:
;   cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860 at 00432888
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 at 00431769
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70 at 0054aeb7
;
; Referenced Globals:
;   BOOL g_MMXSupported
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d05248],0x0      ; 00431780 | g_MMXSupported
        ;   Label: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
    JZ 0x0043178f                       ; 00431787
        ;   XREF to: 0043178f (CONDITIONAL_JUMP)  ; LAB_0043178f
    MOV EAX,0x431622                    ; 00431789
    RET                                 ; 0043178e
    MOV EAX,0x431528                    ; 0043178f
        ;   Label: LAB_0043178f
    RET                                 ; 00431794

