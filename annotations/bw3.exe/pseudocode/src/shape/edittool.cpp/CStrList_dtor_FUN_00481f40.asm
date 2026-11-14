; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00481f40(CStrList *this_ptr,uint flags)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_fldnotes.cpp_SNotesEntry_dtor_FUN_004a9930 at 004a993c
;   core_script.cpp_CScript_dtor_FUN_00528d20 at 00528d34
;   shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0 at 0047d95f
;   shape_edittool.cpp_CPickList_dtor_FUN_004832b0 at 00483304
;   shape_edittool.cpp_FUN_0047d980 at 0047da1f
;   shape_edittool.cpp_FUN_0047da40 at 0047db0f
;
; Referenced Globals:
;   undefined1* g_CStrListVTable = 00481f40
;   WatcomTypeInfo g_CStrListTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   shape_edittool.cpp_CStrList_clear_FUN_00482010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481f40
        ;   Label: shape_edittool.cpp_CStrList_dtor_FUN_00481f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481f41
    TEST byte ptr [ESP + 0xc],0x4       ; 00481f45
    JNZ 0x00481f67                      ; 00481f4a
        ;   XREF to: 00481f67 (CONDITIONAL_JUMP)  ; LAB_00481f67
    PUSH EBX                            ; 00481f4c
    MOV dword ptr [EBX + 0xc],0x5df024  ; 00481f4d | g_CStrListVTable
    CALL shape_edittool.cpp_CStrList_clear_FUN_00482010 ; 00481f54
        ;   XREF to: 00482010 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00482010(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00481f59
    TEST byte ptr [ESP + 0xc],0x2       ; 00481f5c
    JNZ 0x00481f82                      ; 00481f61
        ;   XREF to: 00481f82 (CONDITIONAL_JUMP)  ; LAB_00481f82
    MOV EAX,EBX                         ; 00481f63
    POP EBX                             ; 00481f65
    RET                                 ; 00481f66
    PUSH 0x5df0a0                       ; 00481f67 | g_CStrListTypeInfo
        ;   Label: LAB_00481f67
    PUSH EBX                            ; 00481f6c
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00481f6d
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00481f72
    PUSH EAX                            ; 00481f75
    CALL crt_unknown.c_FUN_005a30b6     ; 00481f76
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00481f7b
    MOV EAX,EBX                         ; 00481f7e
    POP EBX                             ; 00481f80
    RET                                 ; 00481f81
    PUSH EBX                            ; 00481f82
        ;   Label: LAB_00481f82
    CALL crt_unknown.c_FUN_005a30c4     ; 00481f83
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00481f88
    MOV EAX,EBX                         ; 00481f8b
    POP EBX                             ; 00481f8d
    RET                                 ; 00481f8e

