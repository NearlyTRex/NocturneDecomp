; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_004858f0(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_CScript_buildParsedLines_FUN_00521ec0 at 00521ee0
;   core_script.cpp_CScript_renderEditor_FUN_00521af0 at 00521bdb
;   core_script.cpp_FUN_00521cf0 at 00521e7a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004858f0
        ;   Label: shape_edittool.cpp_FUN_004858f0
    MOV EAX,dword ptr [EAX]             ; 004858f4
    RET                                 ; 004858f6

