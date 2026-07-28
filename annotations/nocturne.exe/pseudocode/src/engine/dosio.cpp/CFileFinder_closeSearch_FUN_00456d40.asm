; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(CFileFinder *this_ptr)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_podmain.cpp_CDemonPod_load_FUN_004f92b0 at 004f9323
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 at 00456c26
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 at 00456c4f
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 00474858
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 00474a57
;   shape_edittool.cpp_FUN_00474ae0 at 00474c63
;
; Referenced Globals:
;   void* PTR_FindClose_005754c8 = 00175bf0
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_reset_FUN_00456d80
;   FindClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456d40
        ;   Label: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456d41
    CMP dword ptr [EBX + 0x10c],0x0     ; 00456d45
    JNZ 0x00456d59                      ; 00456d4c
        ;   XREF to: 00456d59 (CONDITIONAL_JUMP)  ; LAB_00456d59
    PUSH EBX                            ; 00456d4e
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00456d80 ; 00456d4f
        ;   XREF to: 00456d80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00456d80(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00456d54
    POP EBX                             ; 00456d57
    RET                                 ; 00456d58
    MOV ECX,dword ptr [EBX + 0x110]     ; 00456d59
        ;   Label: LAB_00456d59
    PUSH ECX                            ; 00456d5f
    CALL dword ptr CS:[0x5754c8]        ; 00456d60 | PTR_FindClose_005754c8
    MOV dword ptr [EBX + 0x10c],0x0     ; 00456d67
    PUSH EBX                            ; 00456d71
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_00456d80 ; 00456d72
        ;   XREF to: 00456d80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_00456d80(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00456d77
    POP EBX                             ; 00456d7a
    RET                                 ; 00456d7b

