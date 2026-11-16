; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00434ea0(void)
;
;
; XREF[3]:
;   cockpit_ckptutil.c_copyBitmapRegion_FUN_00435e70 at 00435e98
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00434e80 at 00434e89
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0050f780 at 0050f7c7
;
; Referenced Globals:
;   undefined4 DAT_01c6e2a0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6e2a0],0x0      ; 00434ea0 | DAT_01c6e2a0
        ;   Label: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00434ea0
    JZ 0x00434eaf                       ; 00434ea7
        ;   XREF to: 00434eaf (CONDITIONAL_JUMP)  ; LAB_00434eaf
    MOV EAX,0x434d42                    ; 00434ea9
    RET                                 ; 00434eae
    MOV EAX,0x434c48                    ; 00434eaf
        ;   Label: LAB_00434eaf
    RET                                 ; 00434eb4

