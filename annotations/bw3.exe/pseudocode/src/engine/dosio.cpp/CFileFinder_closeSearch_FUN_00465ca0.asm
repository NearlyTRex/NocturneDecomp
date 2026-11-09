; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_podmain.cpp_FUN_005152e0 at 00515362
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80 at 00465b86
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0 at 00465baf
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00482a70 at 00482c18
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 at 00482e17
;   shape_edittool.cpp_FUN_00482ea0 at 00482f45
;   shape_edittool.cpp_FUN_00483020 at 00483120
;
; Referenced Globals:
;   void* PTR_FindClose_005b3554 = 001b3d64
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0
;   FindClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465ca0
        ;   Label: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465ca1
    CMP dword ptr [EBX + 0x10c],0x0     ; 00465ca5
    JNZ 0x00465cb9                      ; 00465cac
        ;   XREF to: 00465cb9 (CONDITIONAL_JUMP)  ; LAB_00465cb9
    PUSH EBX                            ; 00465cae
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0 ; 00465caf
        ;   XREF to: 00465ce0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00465cb4
    POP EBX                             ; 00465cb7
    RET                                 ; 00465cb8
    MOV ECX,dword ptr [EBX + 0x110]     ; 00465cb9
        ;   Label: LAB_00465cb9
    PUSH ECX                            ; 00465cbf
    CALL dword ptr CS:[0x5b3554]        ; 00465cc0 | PTR_FindClose_005b3554
    MOV dword ptr [EBX + 0x10c],0x0     ; 00465cc7
    PUSH EBX                            ; 00465cd1
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0 ; 00465cd2
        ;   XREF to: 00465ce0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00465ce0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00465cd7
    POP EBX                             ; 00465cda
    RET                                 ; 00465cdb

