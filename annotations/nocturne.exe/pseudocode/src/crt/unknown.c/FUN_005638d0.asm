; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005638d0(void *param_1)
;
;
; XREF[65]:
;   cockpit_ckptutil.c_FUN_004303d0 at 004304ac
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90 at 0042eced
;   cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_004f3f80 at 004f3f8f
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0 at 004f46e1
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630 at 004f467f
;   cockpit_pkbitmap.cpp_FUN_004f3f50 at 004f3f76
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0 at 004f56a3
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740 at 004f5814
;   core_dcamera.cpp_CDemonCamera_free_FUN_004401d0 at 00440220
;   core_dcube.cpp_FUN_0044adf0 at 0044ae33
;   ... and 55 more
;
; Called Functions:
;   crt_unknown.c_ValidateHeapIntegrity_FUN_005638e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005638d0
        ;   Label: crt_unknown.c_FUN_005638d0
    PUSH EDX                            ; 005638d4
    CALL crt_unknown.c_ValidateHeapIntegrity_FUN_005638e0 ; 005638d5
        ;   XREF to: 005638e0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_ValidateHeapIntegrity_FUN_005638e0(void * ptr)
    ADD ESP,0x4                         ; 005638da
    RET                                 ; 005638dd

