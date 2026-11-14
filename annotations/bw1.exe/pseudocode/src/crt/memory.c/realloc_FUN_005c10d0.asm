; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_realloc_FUN_005c10d0(void *ptr,ulong new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; ulong            Stack[0x8]:4   new_size
;
; XREF[31]:
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_0043a460 at 0043ae8f
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0 at 00537ed3
;   cockpit_pkbitmap.cpp_FUN_00537fd8 at 00537fdd
;   core_bodypart.cpp_setCounts_FUN_00418d00 at 00418d36
;   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0048e640 at 0048e686
;   core_fldnotes.cpp_SNotesMap_load_FUN_004bc2d0 at 004bc305
;   core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0 at 004bbc0e
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0 at 00522269
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340 at 005223b0
;   core_script.cpp_CScript_buildParsedLines_FUN_00543fd0 at 0054403a
;   ... and 21 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c10e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c10d0
        ;   Label: crt_memory.c_realloc_FUN_005c10d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c10d1
    PUSH EDX                            ; 005c10d5
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c10d6
    PUSH EBX                            ; 005c10da
    CALL crt_unknown.c_FUN_005c10e8     ; 005c10db
        ;   XREF to: 005c10e8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c10e8()
    ADD ESP,0x8                         ; 005c10e0
    POP EBX                             ; 005c10e3
    RET                                 ; 005c10e4

