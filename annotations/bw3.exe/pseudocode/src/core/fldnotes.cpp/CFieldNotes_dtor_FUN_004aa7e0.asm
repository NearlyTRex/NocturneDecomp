; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFieldNotes * __cdecl core_fldnotes_cpp_CFieldNotes_dtor_FUN_004aa7e0(CFieldNotes *this_ptr,uint flags)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0
;   core_fldnotes.cpp_STextView_reset_FUN_004a8e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa7e0
        ;   Label: core_fldnotes.cpp_CFieldNotes_dtor_FUN_004aa7e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004aa7e1
    PUSH EBX                            ; 004aa7e5
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0 ; 004aa7e6
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004aa7eb
    PUSH 0x1d19d30                      ; 004aa7ee
    MOV dword ptr [EBX + 0x40],0x0      ; 004aa7f3
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a8e00 ; 004aa7fa
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a8e00(STextView * this_ptr)
    ADD ESP,0x4                         ; 004aa7ff
    MOV EAX,EBX                         ; 004aa802
    POP EBX                             ; 004aa804
    RET                                 ; 004aa805

