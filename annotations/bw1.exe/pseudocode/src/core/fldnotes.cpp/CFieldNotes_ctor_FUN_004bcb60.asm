; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFieldNotes * core_fldnotes_cpp_CFieldNotes_ctor_FUN_004bcb60(CFieldNotes *this_ptr)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   unkaddr_004b9ab0.cpp_FUN_004b9ab0 at 004b9c36
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bcb60
        ;   Label: core_fldnotes.cpp_CFieldNotes_ctor_FUN_004bcb60
    MOV byte ptr [EAX],0x0              ; 004bcb64
    RET                                 ; 004bcb67

