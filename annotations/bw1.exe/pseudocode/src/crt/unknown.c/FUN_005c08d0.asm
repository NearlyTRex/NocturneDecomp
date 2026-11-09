; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_unknown_c_FUN_005c08d0(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[55]:
;   cockpit_ckptutil.c_FUN_00438bd0 at 00438d44
;   cockpit_ckptutil.c_FUN_0043a040 at 0043a142
;   cockpit_ckptutil.c_FUN_0043a200 at 0043a22f
;   cockpit_ckptutil.c_FUN_0043b2e0 at 0043b397
;   cockpit_pkbitmap.cpp_FUN_00538280 at 005383fe
;   cockpit_pkbmpset.cpp_FUN_00538b2e at 00538c23
;   cockpit_pkbmpset.cpp_FUN_00538db0 at 00538dee
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30 at 0044cd36
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00457c40 at 00457ca6
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0 at 0045d9d5
;   ... and 45 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c08e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c08d0
        ;   Label: crt_unknown.c_FUN_005c08d0
    PUSH EDX                            ; 005c08d4
    CALL crt_unknown.c_FUN_005c08e0     ; 005c08d5
        ;   XREF to: 005c08e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c08e0()
    ADD ESP,0x4                         ; 005c08da
    RET                                 ; 005c08dd

