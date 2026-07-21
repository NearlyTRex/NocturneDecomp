; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(int param_1)
;
;
; XREF[4]:
;   FUN_00474ae0 at 00474b9f
;   core_podmain.cpp_CDemonPod_load_FUN_004f92b0 at 004f92de
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 004747e9
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 004749dc
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
        ;   XREF to: 00456d80 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_reset_FUN_00456d80()
    ADD ESP,0x4                         ; 00456c15
    MOV EAX,EBX                         ; 00456c18
    POP EBX                             ; 00456c1a
    RET                                 ; 00456c1b

