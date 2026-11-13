; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00465b80(CFileFinder *this_ptr,uint flags)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_podmain.cpp_FUN_005152e0 at 00515371
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00482a70 at 00482c2a
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 at 00482e29
;   shape_edittool.cpp_FUN_0047dd20 at 0047dfff
;   shape_edittool.cpp_FUN_00482ea0 at 00482f54
;   shape_edittool.cpp_FUN_00483020 at 0048312f
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465b80
        ;   Label: engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465b81
    PUSH EBX                            ; 00465b85
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0 ; 00465b86
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00465b8b
    MOV EAX,EBX                         ; 00465b8e
    POP EBX                             ; 00465b90
    RET                                 ; 00465b91

