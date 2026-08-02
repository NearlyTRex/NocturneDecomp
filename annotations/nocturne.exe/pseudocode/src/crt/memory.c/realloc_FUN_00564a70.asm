; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_realloc_FUN_00564a70(void *ptr,ulong new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; ulong            Stack[0x8]:4   new_size
;
; XREF[25]:
;   cockpit_ckptutil.c_FUN_00430630 at 0043105f
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0 at 004f48d3
;   cockpit_pkbitmap.cpp_FUN_004f49d8 at 004f49dd
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0 at 00415f16
;   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0046ae40 at 0046ae86
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0 at 004df389
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460 at 004df4d0
;   core_script.cpp_CScript_dbLoad_FUN_00504e70 at 0050507e
;   core_script.cpp_FUN_004fee30 at 004fee9a
;   core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800 at 00514831
;   ... and 15 more
;
; Called Functions:
;   crt_unknown.c_realloc__FUN_00564a88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564a70
        ;   Label: crt_memory.c_realloc_FUN_00564a70
    MOV EDX,dword ptr [ESP + 0xc]       ; 00564a71
    PUSH EDX                            ; 00564a75
    MOV EBX,dword ptr [ESP + 0xc]       ; 00564a76
    PUSH EBX                            ; 00564a7a
    CALL crt_unknown.c_realloc__FUN_00564a88 ; 00564a7b
        ;   XREF to: 00564a88 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_realloc__FUN_00564a88(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00564a80
    POP EBX                             ; 00564a83
    RET                                 ; 00564a84

