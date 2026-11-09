; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_reset_FUN_004794a0(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460 at 0047946f
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00479320 at 00479330
;   engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0 at 0047944d
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360 at 004793c4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004794a0
        ;   Label: engine_dosio.cpp_CFileFinder_reset_FUN_004794a0
    MOV byte ptr [EAX],0x0              ; 004794a4
    RET                                 ; 004794a7

