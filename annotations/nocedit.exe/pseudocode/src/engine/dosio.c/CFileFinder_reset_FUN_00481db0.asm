; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_dosio.c_CFileFinder_reset_FUN_00481db0(CFileFinder * this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70 at 00481da2
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30 at 00481c40
;   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 at 00481d5d
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 at 00481cd4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481db0
        ;   Label: engine_dosio.c_CFileFinder_reset_FUN_00481db0
    MOV byte ptr [EAX],0x0              ; 00481db4
    RET                                 ; 00481db7

