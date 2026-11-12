; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004a1d4e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00616014
;   undefined4 DAT_01cab7f0
;   undefined4 DAT_01cab9f0
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740
;   core_fldnotes.cpp_STextView_reset_FUN_004a27e0
;   core_fldnotes.cpp_STextView_setRect_FUN_004a2890
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004a1d4e
        ;   Label: core_flashlit.cpp_FUN_004a1d4e
    PUSH EBX                            ; 004a1d50
    PUSH ESI                            ; 004a1d51
    PUSH 0x1b8                          ; 004a1d52
    PUSH 0x1eb                          ; 004a1d57
    PUSH 0x40                           ; 004a1d5c
    PUSH 0x60                           ; 004a1d5e
    PUSH 0x1caf240                      ; 004a1d60
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004a2890 ; 004a1d65
        ;   XREF to: 004a2890 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004a2890(STextView * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004a1d6a
    PUSH 0x1caf240                      ; 004a1d6d
    XOR ESI,ESI                         ; 004a1d72
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a27e0 ; 004a1d74
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a27e0(STextView * this_ptr)
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a1d79 | DAT_01cab9f0
    XOR AH,AH                           ; 004a1d7f
    ADD ESP,0x4                         ; 004a1d81
    MOV byte ptr [0x01cab7f0],AH        ; 004a1d84 | DAT_01cab7f0
    TEST EDX,EDX                        ; 004a1d8a
    JLE 0x004a1db6                      ; 004a1d8c
        ;   XREF to: 004a1db6 (CONDITIONAL_JUMP)  ; LAB_004a1db6
    MOV EBX,0x1cab9f4                   ; 004a1d8e
    PUSH 0x1caf240                      ; 004a1d93
        ;   Label: LAB_004a1d93
    PUSH EBX                            ; 004a1d98
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740 ; 004a1d99
        ;   XREF to: 004a3740 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740(SNotesSection * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004a1d9e
    TEST EAX,EAX                        ; 004a1da1
    JZ 0x004a1dc3                       ; 004a1da3
        ;   XREF to: 004a1dc3 (CONDITIONAL_JUMP)  ; LAB_004a1dc3
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a1da5 | DAT_01cab9f0
    INC ESI                             ; 004a1dab
    ADD EBX,0x2e4                       ; 004a1dac
    CMP ESI,ECX                         ; 004a1db2
    JL 0x004a1d93                       ; 004a1db4
        ;   XREF to: 004a1d93 (CONDITIONAL_JUMP)  ; LAB_004a1d93
    XOR EBX,EBX                         ; 004a1db6
        ;   Label: LAB_004a1db6
    MOV EAX,0x1                         ; 004a1db8
    MOV dword ptr [0x00616014],EBX      ; 004a1dbd | DAT_00616014
    POP ESI                             ; 004a1dc3
        ;   Label: LAB_004a1dc3
    POP EBX                             ; 004a1dc4
    RET                                 ; 004a1dc5

