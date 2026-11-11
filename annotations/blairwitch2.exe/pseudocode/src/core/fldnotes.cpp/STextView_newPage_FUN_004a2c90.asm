; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_newPage_FUN_004a2c90(STextView *this_ptr)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a2cc0 at 004a2d4f
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 at 004a29ea
;   core_fldnotes.cpp_STextView_newLine_FUN_004a2bf0 at 004a2c67
;   core_fldnotes.cpp_STextView_placeResource_FUN_004a2ad0 at 004a2b23
;
; Called Functions:
;   core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0
;   core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2c90
        ;   Label: core_fldnotes.cpp_STextView_newPage_FUN_004a2c90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2c91
    PUSH EBX                            ; 004a2c95
    CALL core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30 ; 004a2c96
        ;   XREF to: 004a2b30 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a2c9b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a2c9e
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a2ca1
    MOV dword ptr [EBX + 0x14],EAX      ; 004a2ca4
    INC EDX                             ; 004a2ca7
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a2ca8
    MOV dword ptr [EBX + 0x10],EDX      ; 004a2cab
    PUSH EBX                            ; 004a2cae
    MOV dword ptr [EBX + 0x18],EAX      ; 004a2caf
    CALL core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0 ; 004a2cb2
        ;   XREF to: 004a31c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a2cb7
    POP EBX                             ; 004a2cba
    RET                                 ; 004a2cbb

