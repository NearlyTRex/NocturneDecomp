; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_podmain.cpp_CDemonPod_load_FUN_0051c000 at 0051c02e
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00481870 at 004819a9
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70 at 00481b9c
;   shape_edittool.cpp_FUN_0047cb1e at 0047cbdc
;   shape_edittool.cpp_FUN_00481ca0 at 00481cf8
;   shape_edittool.cpp_FUN_00481e20 at 00481edf
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_reset_FUN_00460f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e10
        ;   Label: engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460e11
    PUSH EBX                            ; 00460e15
    MOV dword ptr [EBX + 0x10c],0x0     ; 00460e16
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00460f90 ; 00460e20
        ;   XREF to: 00460f90 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00460f90(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00460e25
    MOV EAX,EBX                         ; 00460e28
    POP EBX                             ; 00460e2a
    RET                                 ; 00460e2b

