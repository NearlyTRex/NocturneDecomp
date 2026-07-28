; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_reset_FUN_00456d80(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40 at 00456d4f
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00 at 00456c10
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0 at 00456d2d
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 at 00456ca4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00456d80
        ;   Label: engine_dosio.cpp_CFileFinder_reset_FUN_00456d80
    MOV byte ptr [EAX],0x0              ; 00456d84
    RET                                 ; 00456d87

