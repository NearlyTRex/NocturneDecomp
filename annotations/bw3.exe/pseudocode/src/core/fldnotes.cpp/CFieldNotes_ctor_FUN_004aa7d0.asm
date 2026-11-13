; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFieldNotes * __cdecl core_fldnotes_cpp_CFieldNotes_ctor_FUN_004aa7d0(CFieldNotes *this_ptr)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flashlit.cpp_FUN_004a76f0 at 004a7876
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa7d0
        ;   Label: core_fldnotes.cpp_CFieldNotes_ctor_FUN_004aa7d0
    MOV byte ptr [EAX],0x0              ; 004aa7d4
    RET                                 ; 004aa7d7

