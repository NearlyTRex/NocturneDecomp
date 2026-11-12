; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004ba62e(void)
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

    MOV ECX,ECX                         ; 004ba62e
        ;   Label: core_flashlit.cpp_FUN_004ba62e
    PUSH EBX                            ; 004ba630
    PUSH ESI                            ; 004ba631
    PUSH EDI                            ; 004ba632
    PUSH 0x1b8                          ; 004ba633
    PUSH 0x1eb                          ; 004ba638
    PUSH 0x40                           ; 004ba63d
    PUSH 0x60                           ; 004ba63f
    PUSH 0x1cc7cd4                      ; 004ba641
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004bb270 ; 004ba646
        ;   XREF to: 004bb270 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004bb270(STextView * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004ba64b
    PUSH 0x1cc7cd4                      ; 004ba64e
    XOR ESI,ESI                         ; 004ba653
    CALL core_fldnotes.cpp_STextView_reset_FUN_004bb1c0 ; 004ba655
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004bb1c0(STextView * this_ptr)
    MOV ECX,dword ptr [0x01cc4470]      ; 004ba65a | DAT_01cc4470
    ADD ESP,0x4                         ; 004ba660
    XOR EDX,EDX                         ; 004ba663
    XOR AH,AH                           ; 004ba665
    MOV dword ptr [0x0061d2e4],EDX      ; 004ba667 | DAT_0061d2e4
    MOV byte ptr [0x01cc4270],AH        ; 004ba66d | DAT_01cc4270
    TEST ECX,ECX                        ; 004ba673
    JLE 0x004ba69f                      ; 004ba675
        ;   XREF to: 004ba69f (CONDITIONAL_JUMP)  ; LAB_004ba69f
    MOV EBX,0x1cc4474                   ; 004ba677
    PUSH 0x1cc7cd4                      ; 004ba67c
        ;   Label: LAB_004ba67c
    PUSH EBX                            ; 004ba681
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130 ; 004ba682
        ;   XREF to: 004bc130 (UNCONDITIONAL_CALL)  ; bool core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130(SNotesSection * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004ba687
    TEST EAX,EAX                        ; 004ba68a
    JZ 0x004ba6a4                       ; 004ba68c
        ;   XREF to: 004ba6a4 (CONDITIONAL_JUMP)  ; LAB_004ba6a4
    MOV EDI,dword ptr [0x01cc4470]      ; 004ba68e | DAT_01cc4470
    INC ESI                             ; 004ba694
    ADD EBX,0x2e4                       ; 004ba695
    CMP ESI,EDI                         ; 004ba69b
    JL 0x004ba67c                       ; 004ba69d
        ;   XREF to: 004ba67c (CONDITIONAL_JUMP)  ; LAB_004ba67c
    MOV EAX,0x1                         ; 004ba69f
        ;   Label: LAB_004ba69f
    POP EDI                             ; 004ba6a4
        ;   Label: LAB_004ba6a4
    POP ESI                             ; 004ba6a5
    POP EBX                             ; 004ba6a6
    RET                                 ; 004ba6a7

