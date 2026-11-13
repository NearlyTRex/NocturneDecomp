; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_malloc_FUN_005a3650(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[55]:
;   cockpit_ckptutil.c_FUN_004367e0 at 00436954
;   cockpit_ckptutil.c_FUN_00437e10 at 00437e3f
;   cockpit_ckptutil.c_FUN_00438ef0 at 00438fa7
;   cockpit_ckptutil.c_rotateBitmap_FUN_00437c50 at 00437d52
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60 at 005100de
;   cockpit_pkbmpset.cpp_FUN_00510810 at 00510903
;   cockpit_pkbmpset.cpp_FUN_00510a90 at 00510ace
;   core_dcamera.cpp_CDemonCamera_init_FUN_00448d70 at 00448e76
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00453d90 at 00453df6
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910 at 00459925
;   ... and 45 more
;
; Called Functions:
;   crt_unknown.c_InternalHeapAlloc_FUN_005a3660
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3650
        ;   Label: crt_memory.c_malloc_FUN_005a3650
    PUSH EDX                            ; 005a3654
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005a3660 ; 005a3655
        ;   XREF to: 005a3660 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005a3660(ulong size)
    ADD ESP,0x4                         ; 005a365a
    RET                                 ; 005a365d

