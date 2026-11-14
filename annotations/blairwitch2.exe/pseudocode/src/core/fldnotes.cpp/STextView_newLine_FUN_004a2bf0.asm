; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_newLine_FUN_004a2bf0(STextView *this_ptr)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_fldnotes.cpp_STextView_ensureSpace_FUN_004a30a0 at 004a30d7
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a2cc0 at 004a2cfb
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 at 004a2abe
;
; Called Functions:
;   core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30
;   core_fldnotes.cpp_STextView_newPage_FUN_004a2c90
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2bf0
        ;   Label: core_fldnotes.cpp_STextView_newLine_FUN_004a2bf0
    PUSH ESI                            ; 004a2bf1
    PUSH EDI                            ; 004a2bf2
    PUSH EBP                            ; 004a2bf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a2bf4
    PUSH EBX                            ; 004a2bf8
    CALL core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30 ; 004a2bf9
        ;   XREF to: 004a2b30 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a2bfe
    PUSH 0x6a                           ; 004a2c01
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004a2c03
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a2c06
    PUSH EDX                            ; 004a2c09
    MOV dword ptr [EBX + 0x14],EAX      ; 004a2c0a
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004a2c0d
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004a2c12
    LEA EDX,[EBX + 0x18]                ; 004a2c15
    MOV ECX,dword ptr [ECX + 0x41f8]    ; 004a2c18
    MOV ESI,dword ptr [EDX]             ; 004a2c1e
    ADD ECX,EAX                         ; 004a2c20
    ADD ESI,ECX                         ; 004a2c22
    MOV dword ptr [EDX],ESI             ; 004a2c24
    MOV EDI,dword ptr [EBX + 0x18]      ; 004a2c26
    MOV EBP,dword ptr [EBX + 0x28]      ; 004a2c29
    ADD EAX,EDI                         ; 004a2c2c
    ADD ESP,0x8                         ; 004a2c2e
    CMP EAX,EBP                         ; 004a2c31
    JG 0x004a2c66                       ; 004a2c33
        ;   XREF to: 004a2c66 (CONDITIONAL_JUMP)  ; LAB_004a2c66
    XOR ECX,ECX                         ; 004a2c35
        ;   Label: LAB_004a2c35
    XOR ESI,ESI                         ; 004a2c37
    IMUL EDX,dword ptr [EBX + 0x10],0x144 ; 004a2c39
        ;   Label: LAB_004a2c39
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a2c40
    ADD EAX,EDX                         ; 004a2c43
    CMP ESI,dword ptr [EAX]             ; 004a2c45
    JGE 0x004a2977                      ; 004a2c47
        ;   XREF to: 004a2977 (CONDITIONAL_JUMP)  ; LAB_004a2977
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x4] ; 004a2c4d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a2c51
    MOV EDI,dword ptr [EAX + 0xc]       ; 004a2c54
    MOV EBP,dword ptr [EBX + 0x18]      ; 004a2c57
    ADD EDX,EDI                         ; 004a2c5a
    CMP EDX,EBP                         ; 004a2c5c
    JG 0x004a2c71                       ; 004a2c5e
        ;   XREF to: 004a2c71 (CONDITIONAL_JUMP)  ; LAB_004a2c71
    INC ESI                             ; 004a2c60
        ;   Label: LAB_004a2c60
    ADD ECX,0x4                         ; 004a2c61
    JMP 0x004a2c39                      ; 004a2c64
        ;   XREF to: 004a2c39 (UNCONDITIONAL_JUMP)  ; LAB_004a2c39
    PUSH EBX                            ; 004a2c66
        ;   Label: LAB_004a2c66
    CALL core_fldnotes.cpp_STextView_newPage_FUN_004a2c90 ; 004a2c67
        ;   XREF to: 004a2c90 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_newPage_FUN_004a2c90(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a2c6c
    JMP 0x004a2c35                      ; 004a2c6f
        ;   XREF to: 004a2c35 (UNCONDITIONAL_JUMP)  ; LAB_004a2c35
    MOV EDI,dword ptr [EAX + 0x8]       ; 004a2c71
        ;   Label: LAB_004a2c71
    MOV EDX,dword ptr [EAX]             ; 004a2c74
    MOV EBP,dword ptr [EBX + 0x14]      ; 004a2c76
    ADD EDX,EDI                         ; 004a2c79
    CMP EDX,EBP                         ; 004a2c7b
    JL 0x004a2c60                       ; 004a2c7d
        ;   XREF to: 004a2c60 (CONDITIONAL_JUMP)  ; LAB_004a2c60
    MOV dword ptr [EBX + 0x14],EDX      ; 004a2c7f
    INC ESI                             ; 004a2c82
    ADD ECX,0x4                         ; 004a2c83
    JMP 0x004a2c39                      ; 004a2c86
        ;   XREF to: 004a2c39 (UNCONDITIONAL_JUMP)  ; LAB_004a2c39

