; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_podmain.cpp_CDemonPod_load_FUN_005519c0 at 00551a43
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50 at 00481c56
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 at 00481c7f
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b51e6
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 at 004a3758
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 at 004a3957
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 at 004a3b63
;
; Referenced Globals:
;   FIND_CLOSE_FUNC* g_FindCloseFunc = 00211d78
;
; Called Functions:
;   engine_dosio.c_CFileFinder_reset_FUN_00481db0
;   FindClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481d70
        ;   Label: engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481d71
    CMP dword ptr [EBX + 0x10c],0x0     ; 00481d75
    JNZ 0x00481d89                      ; 00481d7c
        ;   XREF to: 00481d89 (CONDITIONAL_JUMP)  ; LAB_00481d89
    PUSH EBX                            ; 00481d7e
    CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0 ; 00481d7f
        ;   XREF to: 00481db0 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_reset_FUN_00481db0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481d84
    POP EBX                             ; 00481d87
    RET                                 ; 00481d88
    MOV ECX,dword ptr [EBX + 0x110]     ; 00481d89
        ;   Label: LAB_00481d89
    PUSH ECX                            ; 00481d8f
    CALL dword ptr CS:[0x611548]        ; 00481d90 | g_FindCloseFunc
    MOV dword ptr [EBX + 0x10c],0x0     ; 00481d97
    PUSH EBX                            ; 00481da1
    CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0 ; 00481da2
        ;   XREF to: 00481db0 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_reset_FUN_00481db0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481da7
    POP EBX                             ; 00481daa
    RET                                 ; 00481dab

