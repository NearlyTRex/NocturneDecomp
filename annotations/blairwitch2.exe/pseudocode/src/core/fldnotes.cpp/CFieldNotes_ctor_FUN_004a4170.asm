; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFieldNotes * core_fldnotes_cpp_CFieldNotes_ctor_FUN_004a4170(CFieldNotes *this_ptr)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flashlit.cpp_FUN_004a1200 at 004a136c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4170
        ;   Label: core_fldnotes.cpp_CFieldNotes_ctor_FUN_004a4170
    MOV byte ptr [EAX],0x0              ; 004a4174
    RET                                 ; 004a4177

