; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a3770(undefined4 param_1)
;
;
; XREF[76]:
;   cockpit_ckptutil.c_FUN_004367e0 at 0043693d
;   cockpit_ckptutil.c_FUN_00437e10 at 00437eec
;   cockpit_pkbitmap.cpp_FUN_0050f230 at 0050f256
;   cockpit_pkbitmap.cpp_FUN_0050f910 at 0050f95f
;   cockpit_pkbitmap.cpp_FUN_0050f990 at 0050f9c1
;   cockpit_pkbmpset.cpp_FUN_0051080e at 005109f3
;   cockpit_pkbmpset.cpp_FUN_00510a90 at 00510b64
;   core_dcamera.cpp_CDemonCamera_free_FUN_00448f30 at 00448f80
;   core_dcube.cpp_FUN_00453ec0 at 00453eed
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960 at 0045996f
;   ... and 66 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a3780
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3770
        ;   Label: crt_unknown.c_FUN_005a3770
    PUSH EDX                            ; 005a3774
    CALL crt_unknown.c_FUN_005a3780     ; 005a3775
        ;   XREF to: 005a3780 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3780()
    ADD ESP,0x4                         ; 005a377a
    RET                                 ; 005a377d

