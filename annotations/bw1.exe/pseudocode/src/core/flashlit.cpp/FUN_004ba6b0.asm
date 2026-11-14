; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004ba6b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d2e4
;   undefined4 DAT_01cc4270
;   undefined4 DAT_01cc4470
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130
;   core_fldnotes.cpp_STextView_reset_FUN_004bb1c0
;   core_fldnotes.cpp_STextView_setRect_FUN_004bb270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba6b0
        ;   Label: core_flashlit.cpp_FUN_004ba6b0
    PUSH ESI                            ; 004ba6b1
    PUSH EDI                            ; 004ba6b2
    CMP dword ptr [0x0061d2e4],0x0      ; 004ba6b3 | DAT_0061d2e4
    JNZ 0x004ba6c0                      ; 004ba6ba
        ;   XREF to: 004ba6c0 (CONDITIONAL_JUMP)  ; LAB_004ba6c0
    POP EDI                             ; 004ba6bc
        ;   Label: LAB_004ba6bc
    POP ESI                             ; 004ba6bd
    POP EBX                             ; 004ba6be
    RET                                 ; 004ba6bf
    PUSH 0x1b8                          ; 004ba6c0
        ;   Label: LAB_004ba6c0
    PUSH 0x1eb                          ; 004ba6c5
    PUSH 0x40                           ; 004ba6ca
    PUSH 0x60                           ; 004ba6cc
    PUSH 0x1cc7cd4                      ; 004ba6ce
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004bb270 ; 004ba6d3
        ;   XREF to: 004bb270 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004bb270(STextView * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004ba6d8
    PUSH 0x1cc7cd4                      ; 004ba6db
    XOR ESI,ESI                         ; 004ba6e0
    CALL core_fldnotes.cpp_STextView_reset_FUN_004bb1c0 ; 004ba6e2
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004bb1c0(STextView * this_ptr)
    MOV EBX,dword ptr [0x01cc4470]      ; 004ba6e7 | DAT_01cc4470
    ADD ESP,0x4                         ; 004ba6ed
    XOR ECX,ECX                         ; 004ba6f0
    XOR AH,AH                           ; 004ba6f2
    MOV dword ptr [0x0061d2e4],ECX      ; 004ba6f4 | DAT_0061d2e4
    MOV byte ptr [0x01cc4270],AH        ; 004ba6fa | DAT_01cc4270
    TEST EBX,EBX                        ; 004ba700
    JLE 0x004ba6bc                      ; 004ba702
        ;   XREF to: 004ba6bc (CONDITIONAL_JUMP)  ; LAB_004ba6bc
    MOV EBX,0x1cc4474                   ; 004ba704
    PUSH 0x1cc7cd4                      ; 004ba709
        ;   Label: LAB_004ba709
    PUSH EBX                            ; 004ba70e
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130 ; 004ba70f
        ;   XREF to: 004bc130 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130(SNotesSection * this_ptr, STextView * view)
    ADD ESP,0x8                         ; 004ba714
    TEST EAX,EAX                        ; 004ba717
    JZ 0x004ba6bc                       ; 004ba719
        ;   XREF to: 004ba6bc (CONDITIONAL_JUMP)  ; LAB_004ba6bc
    MOV EDI,dword ptr [0x01cc4470]      ; 004ba71b | DAT_01cc4470
    INC ESI                             ; 004ba721
    ADD EBX,0x2e4                       ; 004ba722
    CMP ESI,EDI                         ; 004ba728
    JL 0x004ba709                       ; 004ba72a
        ;   XREF to: 004ba709 (CONDITIONAL_JUMP)  ; LAB_004ba709
    POP EDI                             ; 004ba72c
    POP ESI                             ; 004ba72d
    POP EBX                             ; 004ba72e
    RET                                 ; 004ba72f

