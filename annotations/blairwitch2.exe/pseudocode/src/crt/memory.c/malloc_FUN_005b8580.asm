; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_malloc_FUN_005b8580(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[58]:
;   cockpit_ckptutil.c_FUN_0042c520 at 0042c5d5
;   cockpit_ckptutil.c_FUN_0042dec0 at 0042e034
;   cockpit_ckptutil.c_FUN_0042f330 at 0042f432
;   cockpit_ckptutil.c_FUN_0042f4f0 at 0042f51f
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30 at 005170ae
;   cockpit_pkbmpset.cpp_FUN_005177de at 005178d3
;   cockpit_pkbmpset.cpp_FUN_00517a60 at 00517a9e
;   core_dcamera.cpp_CDemonCamera_init_FUN_0043b570 at 0043b676
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00446590 at 004465f6
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860 at 00447875
;   ... and 48 more
;
; Called Functions:
;   crt_unknown.c_InternalHeapAlloc_FUN_005b8590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b8580
        ;   Label: crt_memory.c_malloc_FUN_005b8580
    PUSH EDX                            ; 005b8584
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005b8590 ; 005b8585
        ;   XREF to: 005b8590 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005b8590(ulong size)
    ADD ESP,0x4                         ; 005b858a
    RET                                 ; 005b858d

