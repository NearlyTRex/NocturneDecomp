; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_STextView_addText_FUN_004a8ed0(STextView *this_ptr,char *text)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[3]:
;   core_fldnotes.cpp_SNotesEntry_layout_FUN_004a9950 at 004a9a0a
;   core_fldnotes.cpp_SNotesMap_paginate_FUN_004aa6d0 at 004aa73d
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90 at 004a9ddb
;
; Referenced Globals:
;   TerminatedCString s_ERROR_item_won_t_fit_br_005c0e40
;
; Called Functions:
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004a8f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8ed0
        ;   Label: core_fldnotes.cpp_STextView_addText_FUN_004a8ed0
    PUSH ESI                            ; 004a8ed1
    PUSH EDI                            ; 004a8ed2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a8ed3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a8ed7
    MOV EBX,EAX                         ; 004a8edb
    MOV DL,byte ptr [EAX]               ; 004a8edd
    XOR ESI,ESI                         ; 004a8edf
    TEST DL,DL                          ; 004a8ee1
    JZ 0x004a8efc                       ; 004a8ee3
        ;   XREF to: 004a8efc (CONDITIONAL_JUMP)  ; LAB_004a8efc
    PUSH EBX                            ; 004a8ee5
        ;   Label: LAB_004a8ee5
    PUSH EDI                            ; 004a8ee6
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a8f30 ; 004a8ee7
        ;   XREF to: 004a8f30 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a8f30(STextView * this_ptr, char * text)
    ADD ESP,0x8                         ; 004a8eec
    TEST EAX,EAX                        ; 004a8eef
    JL 0x004a8f05                       ; 004a8ef1
        ;   XREF to: 004a8f05 (CONDITIONAL_JUMP)  ; LAB_004a8f05
    JLE 0x004a8f0b                      ; 004a8ef3
        ;   XREF to: 004a8f0b (CONDITIONAL_JUMP)  ; LAB_004a8f0b
    ADD EBX,EAX                         ; 004a8ef5
    CMP byte ptr [EBX],0x0              ; 004a8ef7
        ;   Label: LAB_004a8ef7
    JNZ 0x004a8ee5                      ; 004a8efa
        ;   XREF to: 004a8ee5 (CONDITIONAL_JUMP)  ; LAB_004a8ee5
    MOV EAX,0x1                         ; 004a8efc
        ;   Label: LAB_004a8efc
    POP EDI                             ; 004a8f01
    POP ESI                             ; 004a8f02
    POP EBX                             ; 004a8f03
    RET                                 ; 004a8f04
    XOR EAX,EAX                         ; 004a8f05
        ;   Label: LAB_004a8f05
    POP EDI                             ; 004a8f07
    POP ESI                             ; 004a8f08
    POP EBX                             ; 004a8f09
    RET                                 ; 004a8f0a
    INC ESI                             ; 004a8f0b
        ;   Label: LAB_004a8f0b
    CMP ESI,0x1                         ; 004a8f0c
    JLE 0x004a8ef7                      ; 004a8f0f
        ;   XREF to: 004a8ef7 (CONDITIONAL_JUMP)  ; LAB_004a8ef7
    PUSH 0x5c0e40                       ; 004a8f11 | = "ERROR: item won't fit<br>"
    PUSH EDI                            ; 004a8f16
    CALL core_fldnotes.cpp_STextView_addText_FUN_004a8ed0 ; 004a8f17
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_addText_FUN_004a8ed0(STextView * this_ptr, char * text)
    ADD ESP,0x8                         ; 004a8f1c
    MOV EAX,0x1                         ; 004a8f1f
    POP EDI                             ; 004a8f24
    POP ESI                             ; 004a8f25
    POP EBX                             ; 004a8f26
    RET                                 ; 004a8f27

