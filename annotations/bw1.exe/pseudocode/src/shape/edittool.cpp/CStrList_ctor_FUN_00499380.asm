; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00499380(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_fldnotes.cpp_FUN_004bbcb0 at 004bbcba
;   core_script.cpp_CScript_ctor_FUN_005436d0 at 005436d8
;   core_sound.cpp_staticInit_FUN_0057b670 at 0057b682
;   shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20 at 00494d63
;   shape_edittool.cpp_CPickList_ctor_FUN_0049a620 at 0049a628
;   shape_edittool.cpp_FUN_00494de0 at 00494e23
;   shape_edittool.cpp_FUN_00494ea0 at 00494ee3
;
; Referenced Globals:
;   undefined1* g_CStrListVTable = 004993a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00499380
        ;   Label: shape_edittool.cpp_CStrList_ctor_FUN_00499380
    MOV dword ptr [EAX],0x0             ; 00499384
    MOV dword ptr [EAX + 0x8],0x0       ; 0049938a
    MOV dword ptr [EAX + 0x4],0x0       ; 00499391
    MOV dword ptr [EAX + 0xc],0x5ff814  ; 00499398 | g_CStrListVTable
    RET                                 ; 0049939f

