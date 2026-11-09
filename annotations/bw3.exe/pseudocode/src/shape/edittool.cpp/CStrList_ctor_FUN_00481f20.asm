; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00481f20(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_fldnotes.cpp_FUN_004a98f0 at 004a98fa
;   core_script.cpp_CScript_ctor_FUN_00528ce0 at 00528ce8
;   core_sound.cpp_staticInit_FUN_0055e7a0 at 0055e7b2
;   shape_edittool.cpp_CPickList_ctor_FUN_004831c0 at 004831c8
;   shape_edittool.cpp_FUN_0047d8c0 at 0047d903
;   shape_edittool.cpp_FUN_0047d980 at 0047d9c3
;   shape_edittool.cpp_FUN_0047da40 at 0047da83
;
; Referenced Globals:
;   undefined1* g_CStrListVTable = 00481f40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481f20
        ;   Label: shape_edittool.cpp_CStrList_ctor_FUN_00481f20
    MOV dword ptr [EAX],0x0             ; 00481f24
    MOV dword ptr [EAX + 0x8],0x0       ; 00481f2a
    MOV dword ptr [EAX + 0x4],0x0       ; 00481f31
    MOV dword ptr [EAX + 0xc],0x5df024  ; 00481f38 | g_CStrListVTable
    RET                                 ; 00481f3f

