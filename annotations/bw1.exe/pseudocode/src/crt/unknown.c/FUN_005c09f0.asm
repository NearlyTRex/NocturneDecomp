; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c09f0(undefined4 param_1)
;
;
; XREF[76]:
;   cockpit_ckptutil.c_FUN_00438bd0 at 00438d2d
;   cockpit_ckptutil.c_FUN_0043a200 at 0043a2dc
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00537550 at 00537576
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_00537cb0 at 00537ce1
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30 at 00537c7f
;   cockpit_pkbmpset.cpp_FUN_00538b30 at 00538d13
;   cockpit_pkbmpset.cpp_FUN_00538db0 at 00538e84
;   core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0 at 0044ce40
;   core_dcube.cpp_FUN_00457d70 at 00457d9d
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10 at 0045da1f
;   ... and 66 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c0a00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c09f0
        ;   Label: crt_unknown.c_FUN_005c09f0
    PUSH EDX                            ; 005c09f4
    CALL crt_unknown.c_FUN_005c0a00     ; 005c09f5
        ;   XREF to: 005c0a00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0a00()
    ADD ESP,0x4                         ; 005c09fa
    RET                                 ; 005c09fd

