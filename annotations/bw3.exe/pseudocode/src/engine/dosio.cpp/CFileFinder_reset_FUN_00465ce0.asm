; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_reset_FUN_00465ce0(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0 at 00465caf
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60 at 00465b70
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20 at 00465c8d
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0 at 00465c04
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00465ce0
        ;   Label: engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0
    MOV byte ptr [EAX],0x0              ; 00465ce4
    RET                                 ; 00465ce7

