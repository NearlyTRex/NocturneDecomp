; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_newPage_FUN_004bb6c0(STextView *this_ptr)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004bb6f0 at 004bb77f
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004bb2f0 at 004bb42a
;   core_fldnotes.cpp_STextView_newLine_FUN_004bb630 at 004bb6af
;   core_fldnotes.cpp_STextView_placeResource_FUN_004bb510 at 004bb563
;
; Called Functions:
;   core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0
;   core_fldnotes.cpp_STextView_flushWord_FUN_004bb570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb6c0
        ;   Label: core_fldnotes.cpp_STextView_newPage_FUN_004bb6c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bb6c1
    PUSH EBX                            ; 004bb6c5
    CALL core_fldnotes.cpp_STextView_flushWord_FUN_004bb570 ; 004bb6c6
        ;   XREF to: 004bb570 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_flushWord_FUN_004bb570(STextView * this_ptr)
    ADD ESP,0x4                         ; 004bb6cb
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004bb6ce
    MOV EDX,dword ptr [EBX + 0x10]      ; 004bb6d1
    MOV dword ptr [EBX + 0x14],EAX      ; 004bb6d4
    INC EDX                             ; 004bb6d7
    MOV EAX,dword ptr [EBX + 0x20]      ; 004bb6d8
    MOV dword ptr [EBX + 0x10],EDX      ; 004bb6db
    PUSH EBX                            ; 004bb6de
    MOV dword ptr [EBX + 0x18],EAX      ; 004bb6df
    CALL core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0 ; 004bb6e2
        ;   XREF to: 004bbbf0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004bb6e7
    POP EBX                             ; 004bb6ea
    RET                                 ; 004bb6eb

