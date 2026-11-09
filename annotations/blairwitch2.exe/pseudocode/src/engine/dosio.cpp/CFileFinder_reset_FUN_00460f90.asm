; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_reset_FUN_00460f90(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50 at 00460f5f
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10 at 00460e20
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0 at 00460f3d
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50 at 00460eb4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00460f90
        ;   Label: engine_dosio.cpp_CFileFinder_reset_FUN_00460f90
    MOV byte ptr [EAX],0x0              ; 00460f94
    RET                                 ; 00460f97

