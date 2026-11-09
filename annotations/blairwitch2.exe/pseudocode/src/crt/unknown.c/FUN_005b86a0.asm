; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b86a0(undefined4 param_1)
;
;
; XREF[79]:
;   cockpit_ckptutil.c_FUN_0042dec0 at 0042e01d
;   cockpit_ckptutil.c_FUN_0042f4f0 at 0042f5cc
;   cockpit_pkbitmap.cpp_FUN_00516200 at 00516226
;   cockpit_pkbitmap.cpp_FUN_005168e0 at 0051692f
;   cockpit_pkbitmap.cpp_FUN_00516960 at 00516991
;   cockpit_pkbmpset.cpp_FUN_005177de at 005179c3
;   cockpit_pkbmpset.cpp_FUN_00517a60 at 00517b34
;   core_dcamera.cpp_CDemonCamera_free_FUN_0043b730 at 0043b780
;   core_dcube.cpp_FUN_004466c0 at 004466ed
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0 at 004478bf
;   ... and 69 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b86b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b86a0
        ;   Label: crt_unknown.c_FUN_005b86a0
    PUSH EDX                            ; 005b86a4
    CALL crt_unknown.c_FUN_005b86b0     ; 005b86a5
        ;   XREF to: 005b86b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86b0()
    ADD ESP,0x4                         ; 005b86aa
    RET                                 ; 005b86ad

