; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a8cb0(undefined4 *param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a9830 at 004a988d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8cb0
        ;   Label: core_fldnotes.cpp_FUN_004a8cb0
    MOV dword ptr [EAX],0x0             ; 004a8cb4
    RET                                 ; 004a8cba

