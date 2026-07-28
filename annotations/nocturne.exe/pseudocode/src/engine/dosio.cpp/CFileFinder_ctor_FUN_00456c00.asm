; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_podmain.cpp_CDemonPod_load_FUN_004f92b0 at 004f92de
;   engine_dosio.cpp_getFileSizeWithFinder_FUN_004569a0 at 004569cc
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 004747e9
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 004749dc
;   shape_edittool.cpp_FUN_00470730 at 004707ec
;   shape_edittool.cpp_FUN_00474ae0 at 00474b9f
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_reset_FUN_00456d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456c00
        ;   Label: engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456c01
    PUSH EBX                            ; 00456c05
    MOV dword ptr [EBX + 0x10c],0x0     ; 00456c06
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00456d80 ; 00456c10
        ;   XREF to: 00456d80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00456d80(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00456c15
    MOV EAX,EBX                         ; 00456c18
    POP EBX                             ; 00456c1a
    RET                                 ; 00456c1b

