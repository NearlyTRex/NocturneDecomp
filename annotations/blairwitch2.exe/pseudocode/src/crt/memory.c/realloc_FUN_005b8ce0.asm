; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_realloc_FUN_005b8ce0(void *ptr,ulong new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; ulong            Stack[0x8]:4   new_size
;
; XREF[31]:
;   cockpit_ckptutil.c_FUN_0042f74e at 0043017f
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60 at 00516b83
;   cockpit_pkbitmap.cpp_FUN_00516c88 at 00516c8d
;   core_bodypart.cpp_FUN_00415890 at 004158c6
;   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00476150 at 00476196
;   core_fldnotes.cpp_SNotesMap_load_FUN_004a38e0 at 004a3915
;   core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0 at 004a31de
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090 at 005b6129
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200 at 005b6270
;   core_script.cpp_CScript_buildParsedLines_FUN_00521ec0 at 00521f2a
;   ... and 21 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b8cf8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8ce0
        ;   Label: crt_memory.c_realloc_FUN_005b8ce0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b8ce1
    PUSH EDX                            ; 005b8ce5
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b8ce6
    PUSH EBX                            ; 005b8cea
    CALL crt_unknown.c_FUN_005b8cf8     ; 005b8ceb
        ;   XREF to: 005b8cf8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8cf8()
    ADD ESP,0x8                         ; 005b8cf0
    POP EBX                             ; 005b8cf3
    RET                                 ; 005b8cf4

