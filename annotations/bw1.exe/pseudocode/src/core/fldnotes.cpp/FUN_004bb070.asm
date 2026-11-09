; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bb070(undefined4 *param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bbbf0 at 004bbc4d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bb070
        ;   Label: core_fldnotes.cpp_FUN_004bb070
    MOV dword ptr [EAX],0x0             ; 004bb074
    RET                                 ; 004bb07a

