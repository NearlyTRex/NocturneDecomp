; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char *** __cdecl core_fldnotes_cpp_SNotesEntry_dtor_FUN_004a9930(SNotesEntry *this_ptr)
;
; Parameters:
; SNotesEntry *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesSection_clear_FUN_004a9bc0 at 004a9c12
;
; Called Functions:
;   shape_edittool.cpp_CStrList_dtor_FUN_00481f40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9930
        ;   Label: core_fldnotes.cpp_SNotesEntry_dtor_FUN_004a9930
    PUSH 0x0                            ; 004a9934
    ADD EAX,0x148                       ; 004a9936
    PUSH EAX                            ; 004a993b
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00481f40 ; 004a993c
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00481f40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a9941
    SUB EAX,0x148                       ; 004a9944
    RET                                 ; 004a9949

