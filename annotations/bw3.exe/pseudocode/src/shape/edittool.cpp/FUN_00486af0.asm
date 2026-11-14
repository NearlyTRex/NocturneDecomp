; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_00486af0(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_CScript_buildParsedLines_FUN_005295e0 at 00529600
;   core_script.cpp_CScript_renderEditor_FUN_00529210 at 005292fb
;   core_script.cpp_FUN_00529410 at 0052959a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00486af0
        ;   Label: shape_edittool.cpp_FUN_00486af0
    MOV EAX,dword ptr [EAX]             ; 00486af4
    RET                                 ; 00486af6

