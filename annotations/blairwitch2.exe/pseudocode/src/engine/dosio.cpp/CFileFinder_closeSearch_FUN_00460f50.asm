; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00460f50(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_podmain.cpp_FUN_0051c000 at 0051c073
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30 at 00460e36
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50 at 00460e5f
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00481870 at 00481a18
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70 at 00481c17
;   shape_edittool.cpp_FUN_00481ca0 at 00481d45
;   shape_edittool.cpp_FUN_00481e20 at 00481f20
;
; Referenced Globals:
;   void* PTR_FindClose_005c8544 = 001c8d36
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_reset_FUN_00460f90
;   FindClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460f50
        ;   Label: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460f51
    CMP dword ptr [EBX + 0x10c],0x0     ; 00460f55
    JNZ 0x00460f69                      ; 00460f5c
        ;   XREF to: 00460f69 (CONDITIONAL_JUMP)  ; LAB_00460f69
    PUSH EBX                            ; 00460f5e
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00460f90 ; 00460f5f
        ;   XREF to: 00460f90 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00460f90(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00460f64
    POP EBX                             ; 00460f67
    RET                                 ; 00460f68
    MOV ECX,dword ptr [EBX + 0x110]     ; 00460f69
        ;   Label: LAB_00460f69
    PUSH ECX                            ; 00460f6f
    CALL dword ptr CS:[0x5c8544]        ; 00460f70 | PTR_FindClose_005c8544
    MOV dword ptr [EBX + 0x10c],0x0     ; 00460f77
    PUSH EBX                            ; 00460f81
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00460f90 ; 00460f82
        ;   XREF to: 00460f90 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00460f90(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00460f87
    POP EBX                             ; 00460f8a
    RET                                 ; 00460f8b

