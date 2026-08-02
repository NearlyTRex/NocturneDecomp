; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_malloc_FUN_005635b0(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[49]:
;   cockpit_ckptutil.c_FUN_0042d180 at 0042d1e2
;   cockpit_ckptutil.c_FUN_00430210 at 00430312
;   cockpit_ckptutil.c_FUN_004303d0 at 004303ff
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90 at 0042ed04
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 at 0042d2c9
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80 at 004f4df2
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0 at 004f55b3
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740 at 004f577e
;   core_dcamera.cpp_CDemonCamera_init_FUN_00440010 at 004400fa
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0 at 0044ad40
;   ... and 39 more
;
; Called Functions:
;   crt_unknown.c_InternalHeapAlloc_FUN_005635c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005635b0
        ;   Label: crt_memory.c_malloc_FUN_005635b0
    PUSH EDX                            ; 005635b4
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005635c0 ; 005635b5
        ;   XREF to: 005635c0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005635c0(ulong size)
    ADD ESP,0x4                         ; 005635ba
    RET                                 ; 005635bd

