; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00465b60(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_podmain.cpp_FUN_005152e0 at 00515310
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00482a70 at 00482ba9
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 at 00482d9c
;   shape_edittool.cpp_FUN_0047dd20 at 0047dddc
;   shape_edittool.cpp_FUN_00482ea0 at 00482ef8
;   shape_edittool.cpp_FUN_00483020 at 004830df
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465b60
        ;   Label: engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465b61
    PUSH EBX                            ; 00465b65
    MOV dword ptr [EBX + 0x10c],0x0     ; 00465b66
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0 ; 00465b70
        ;   XREF to: 00465ce0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00465b75
    MOV EAX,EBX                         ; 00465b78
    POP EBX                             ; 00465b7a
    RET                                 ; 00465b7b

