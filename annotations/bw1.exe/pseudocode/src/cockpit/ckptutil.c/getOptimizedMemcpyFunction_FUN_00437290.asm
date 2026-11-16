; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; code * cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00437290(void)
;
;
; XREF[3]:
;   cockpit_ckptutil.c_copyBitmapRegion_FUN_00438260 at 00438288
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270 at 00437279
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_00537aa0 at 00537ae7
;
; Referenced Globals:
;   undefined4 DAT_01c51d00
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c51d00],0x0      ; 00437290 | DAT_01c51d00
        ;   Label: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00437290
    JZ 0x0043729f                       ; 00437297
        ;   XREF to: 0043729f (CONDITIONAL_JUMP)  ; LAB_0043729f
    MOV EAX,0x437132                    ; 00437299
    RET                                 ; 0043729e
    MOV EAX,0x437038                    ; 0043729f
        ;   Label: LAB_0043729f
    RET                                 ; 004372a4

