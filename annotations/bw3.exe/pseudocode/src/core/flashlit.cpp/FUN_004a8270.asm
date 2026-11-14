; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004a8270(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe374
;   undefined4 DAT_01d0d010
;   undefined4 DAT_01d0d210
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90
;   core_fldnotes.cpp_STextView_reset_FUN_004a8e00
;   core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8270
        ;   Label: core_flashlit.cpp_FUN_004a8270
    PUSH ESI                            ; 004a8271
    PUSH EDI                            ; 004a8272
    PUSH 0x1b8                          ; 004a8273
    PUSH 0x1eb                          ; 004a8278
    PUSH 0x40                           ; 004a827d
    PUSH 0x60                           ; 004a827f
    PUSH 0x1d19d30                      ; 004a8281
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0 ; 004a8286
        ;   XREF to: 004a8eb0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0(STextView * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004a828b
    PUSH 0x1d19d30                      ; 004a828e
    XOR ESI,ESI                         ; 004a8293
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a8e00 ; 004a8295
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a8e00(STextView * this_ptr)
    MOV ECX,dword ptr [0x01d0d210]      ; 004a829a | DAT_01d0d210
    ADD ESP,0x4                         ; 004a82a0
    XOR EDX,EDX                         ; 004a82a3
    XOR AH,AH                           ; 004a82a5
    MOV dword ptr [0x005fe374],EDX      ; 004a82a7 | DAT_005fe374
    MOV byte ptr [0x01d0d010],AH        ; 004a82ad | DAT_01d0d010
    TEST ECX,ECX                        ; 004a82b3
    JLE 0x004a82df                      ; 004a82b5
        ;   XREF to: 004a82df (CONDITIONAL_JUMP)  ; LAB_004a82df
    MOV EBX,0x1d0d214                   ; 004a82b7
    PUSH 0x1d19d30                      ; 004a82bc
        ;   Label: LAB_004a82bc
    PUSH EBX                            ; 004a82c1
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90 ; 004a82c2
        ;   XREF to: 004a9d90 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90(SNotesSection * this_ptr, STextView * view)
    ADD ESP,0x8                         ; 004a82c7
    TEST EAX,EAX                        ; 004a82ca
    JZ 0x004a82e4                       ; 004a82cc
        ;   XREF to: 004a82e4 (CONDITIONAL_JUMP)  ; LAB_004a82e4
    MOV EDI,dword ptr [0x01d0d210]      ; 004a82ce | DAT_01d0d210
    INC ESI                             ; 004a82d4
    ADD EBX,0x2e4                       ; 004a82d5
    CMP ESI,EDI                         ; 004a82db
    JL 0x004a82bc                       ; 004a82dd
        ;   XREF to: 004a82bc (CONDITIONAL_JUMP)  ; LAB_004a82bc
    MOV EAX,0x1                         ; 004a82df
        ;   Label: LAB_004a82df
    POP EDI                             ; 004a82e4
        ;   Label: LAB_004a82e4
    POP ESI                             ; 004a82e5
    POP EBX                             ; 004a82e6
    RET                                 ; 004a82e7

