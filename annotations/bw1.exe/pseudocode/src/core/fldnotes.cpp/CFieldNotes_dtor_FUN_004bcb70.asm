; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFieldNotes * __cdecl core_fldnotes_cpp_CFieldNotes_dtor_FUN_004bcb70(CFieldNotes *this_ptr,uint flags)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0
;   core_fldnotes.cpp_STextView_reset_FUN_004bb1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bcb70
        ;   Label: core_fldnotes.cpp_CFieldNotes_dtor_FUN_004bcb70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bcb71
    PUSH EBX                            ; 004bcb75
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0 ; 004bcb76
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004bcb7b
    PUSH 0x1cc7cd4                      ; 004bcb7e
    MOV dword ptr [EBX + 0x40],0x0      ; 004bcb83
    CALL core_fldnotes.cpp_STextView_reset_FUN_004bb1c0 ; 004bcb8a
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004bb1c0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004bcb8f
    MOV EAX,EBX                         ; 004bcb92
    POP EBX                             ; 004bcb94
    RET                                 ; 004bcb95

