; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; STextView * core_fldnotes_cpp_STextView_ctor_FUN_004a27b0(STextView *this_ptr)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flashlit.cpp_FUN_004a1200 at 004a1352
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a27b0
        ;   Label: core_fldnotes.cpp_STextView_ctor_FUN_004a27b0
    RET                                 ; 004a27b4

