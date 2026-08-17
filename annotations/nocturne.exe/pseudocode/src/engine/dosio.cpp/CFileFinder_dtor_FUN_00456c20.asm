; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(CFileFinder *this_ptr,uint flags)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_podmain.cpp_CDemonPod_load_FUN_004f92b0 at 004f9332
;   engine_dosio.cpp_getFileSizeWithFinder_FUN_004569a0 at 004569fc
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_00470730 at 00470a2b
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 0047486a
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 00474a69
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_00474ae0 at 00474c72
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456c20
        ;   Label: engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456c21
    PUSH EBX                            ; 00456c25
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40 ; 00456c26
        ;   XREF to: 00456d40 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00456c2b
    MOV EAX,EBX                         ; 00456c2e
    POP EBX                             ; 00456c30
    RET                                 ; 00456c31

