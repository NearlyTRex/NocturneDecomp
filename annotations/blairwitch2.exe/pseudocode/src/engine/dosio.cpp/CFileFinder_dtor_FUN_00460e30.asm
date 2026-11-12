; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(CFileFinder *this_ptr,uint flags)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_podmain.cpp_CDemonPod_load_FUN_0051c000 at 0051c082
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00481870 at 00481a2a
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70 at 00481c29
;   shape_edittool.cpp_FUN_0047cb1e at 0047cdff
;   shape_edittool.cpp_FUN_00481ca0 at 00481d54
;   shape_edittool.cpp_FUN_00481e20 at 00481f2f
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e30
        ;   Label: engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460e31
    PUSH EBX                            ; 00460e35
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50 ; 00460e36
        ;   XREF to: 00460f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00460e3b
    MOV EAX,EBX                         ; 00460e3e
    POP EBX                             ; 00460e40
    RET                                 ; 00460e41

