; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_debugFree_FUN_005b86a0(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[79]:
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_0042dec0 at 0042e01d
;   cockpit_ckptutil.c_rotateBitmap_FUN_0042f4f0 at 0042f5cc
;   cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_00516230 at 0051623f
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00516200 at 00516226
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_00516960 at 00516991
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0 at 0051692f
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_005177e0 at 005179c3
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00517a60 at 00517b34
;   core_bwspart.cpp_CSimpleParticleSystem_dtor_FUN_005a8000 at 005a801b
;   core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220 at 005a823b
;   ... and 69 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b86b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b86a0
        ;   Label: crt_unknown.c_debugFree_FUN_005b86a0
    PUSH EDX                            ; 005b86a4
    CALL crt_unknown.c_FUN_005b86b0     ; 005b86a5
        ;   XREF to: 005b86b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86b0()
    ADD ESP,0x4                         ; 005b86aa
    RET                                 ; 005b86ad

