; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___vec_new_FUN_00601272(void *array_memory,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   array_memory
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
;
; XREF[6]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 at 0054ba93
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 at 0054be02
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380 at 004943c0
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 at 0059a630
;   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 at 004ba04f
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049ea6c
;
; Called Functions:
;   crt_memory.c___vec_new_FUN_00601232
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601272
        ;   Label: crt_memory.c___vec_new_FUN_00601272
    MOV EDX,dword ptr [ESP + 0x10]      ; 00601273
    PUSH EDX                            ; 00601277
    MOV ECX,dword ptr [ESP + 0x10]      ; 00601278
    PUSH ECX                            ; 0060127c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0060127d
    PUSH EBX                            ; 00601281
    CALL crt_memory.c___vec_new_FUN_00601232 ; 00601282
        ;   XREF to: 00601232 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_new_FUN_00601232(void * dest, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00601287
    POP EBX                             ; 0060128a
    RET                                 ; 0060128b

