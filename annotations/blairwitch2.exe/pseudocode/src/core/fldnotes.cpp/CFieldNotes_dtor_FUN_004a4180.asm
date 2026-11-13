; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFieldNotes * __cdecl core_fldnotes_cpp_CFieldNotes_dtor_FUN_004a4180(CFieldNotes *this_ptr,uint flags)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0
;   core_fldnotes.cpp_STextView_reset_FUN_004a27e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4180
        ;   Label: core_fldnotes.cpp_CFieldNotes_dtor_FUN_004a4180
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a4181
    PUSH EBX                            ; 004a4185
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0 ; 004a4186
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004a418b
    PUSH 0x1caf240                      ; 004a418e
    MOV dword ptr [EBX + 0x40],0x0      ; 004a4193
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a27e0 ; 004a419a
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a27e0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a419f
    MOV EAX,EBX                         ; 004a41a2
    POP EBX                             ; 004a41a4
    RET                                 ; 004a41a5

