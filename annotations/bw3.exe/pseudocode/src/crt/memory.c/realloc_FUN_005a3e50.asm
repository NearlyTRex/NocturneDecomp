; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_realloc_FUN_005a3e50(void *ptr,ulong new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; ulong            Stack[0x8]:4   new_size
;
; XREF[31]:
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_0043806e at 00438a9f
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90 at 0050fbb3
;   cockpit_pkbitmap.cpp_FUN_0050fcb8 at 0050fcbd
;   core_bodypart.cpp_FUN_00414910 at 00414946
;   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_004771c0 at 00477206
;   core_fldnotes.cpp_SNotesMap_load_FUN_004a9f30 at 004a9f65
;   core_fldnotes.cpp_STextView_ensurePage_FUN_004a9830 at 004a984e
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0 at 004f9b69
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004f9c40 at 004f9cb0
;   core_script.cpp_CScript_buildParsedLines_FUN_005295e0 at 0052964a
;   ... and 21 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a3e68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3e50
        ;   Label: crt_memory.c_realloc_FUN_005a3e50
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a3e51
    PUSH EDX                            ; 005a3e55
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3e56
    PUSH EBX                            ; 005a3e5a
    CALL crt_unknown.c_FUN_005a3e68     ; 005a3e5b
        ;   XREF to: 005a3e68 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3e68()
    ADD ESP,0x8                         ; 005a3e60
    POP EBX                             ; 005a3e63
    RET                                 ; 005a3e64

