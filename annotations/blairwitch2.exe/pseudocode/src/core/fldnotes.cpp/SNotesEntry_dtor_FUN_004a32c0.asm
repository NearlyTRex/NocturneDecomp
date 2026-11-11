; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char *** __cdecl core_fldnotes_cpp_SNotesEntry_dtor_FUN_004a32c0(SNotesEntry *this_ptr)
;
; Parameters:
; SNotesEntry *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesSection_clear_FUN_004a3570 at 004a35c2
;
; Called Functions:
;   shape_edittool.cpp_CStrList_dtor_FUN_00480d40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a32c0
        ;   Label: core_fldnotes.cpp_SNotesEntry_dtor_FUN_004a32c0
    PUSH 0x0                            ; 004a32c4
    ADD EAX,0x148                       ; 004a32c6
    PUSH EAX                            ; 004a32cb
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00480d40 ; 004a32cc
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00480d40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a32d1
    SUB EAX,0x148                       ; 004a32d4
    RET                                 ; 004a32d9

