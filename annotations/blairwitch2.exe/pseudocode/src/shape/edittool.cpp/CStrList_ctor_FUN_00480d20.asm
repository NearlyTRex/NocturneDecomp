; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00480d20(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_fldnotes.cpp_SNotesEntry_ctor_FUN_004a3280 at 004a328a
;   core_script.cpp_CScript_ctor_FUN_005215c0 at 005215c8
;   core_sound.cpp_staticInit_FUN_00558c40 at 00558c52
;   shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760 at 0047c78c
;   shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 at 00481fc8
;   shape_edittool.cpp_FUN_0047c7f0 at 0047c81c
;   shape_edittool.cpp_FUN_0047c880 at 0047c8ac
;
; Referenced Globals:
;   undefined1* g_CStrListVTable = 00480d40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00480d20
        ;   Label: shape_edittool.cpp_CStrList_ctor_FUN_00480d20
    MOV dword ptr [EAX],0x0             ; 00480d24
    MOV dword ptr [EAX + 0x8],0x0       ; 00480d2a
    MOV dword ptr [EAX + 0x4],0x0       ; 00480d31
    MOV dword ptr [EAX + 0xc],0x5f5d14  ; 00480d38 | g_CStrListVTable
    RET                                 ; 00480d3f

