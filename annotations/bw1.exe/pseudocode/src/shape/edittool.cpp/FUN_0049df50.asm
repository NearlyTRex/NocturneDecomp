; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_0049df50(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_CScript_buildParsedLines_FUN_00543fd0 at 00543ff0
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543ceb
;   core_script.cpp_FUN_00543e00 at 00543f8a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049df50
        ;   Label: shape_edittool.cpp_FUN_0049df50
    MOV EAX,dword ptr [EAX]             ; 0049df54
    RET                                 ; 0049df56

