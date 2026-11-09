; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(CFileFinder *this_ptr,uint flags)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_podmain.cpp_FUN_0053d580 at 0053d611
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00499ed0 at 0049a08a
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 at 0049a289
;   shape_edittool.cpp_FUN_0049517e at 0049545f
;   shape_edittool.cpp_FUN_0049a300 at 0049a3b4
;   shape_edittool.cpp_FUN_0049a480 at 0049a58f
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479340
        ;   Label: engine_dosio.cpp_CFileFinder_dtor_FUN_00479340
    MOV EBX,dword ptr [ESP + 0x8]       ; 00479341
    PUSH EBX                            ; 00479345
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460 ; 00479346
        ;   XREF to: 00479460 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0047934b
    MOV EAX,EBX                         ; 0047934e
    POP EBX                             ; 00479350
    RET                                 ; 00479351

