; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004a82f0(void)
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

    PUSH EBX                            ; 004a82f0
        ;   Label: core_flashlit.cpp_FUN_004a82f0
    PUSH ESI                            ; 004a82f1
    PUSH EDI                            ; 004a82f2
    CMP dword ptr [0x005fe374],0x0      ; 004a82f3 | DAT_005fe374
    JNZ 0x004a8300                      ; 004a82fa
        ;   XREF to: 004a8300 (CONDITIONAL_JUMP)  ; LAB_004a8300
    POP EDI                             ; 004a82fc
        ;   Label: LAB_004a82fc
    POP ESI                             ; 004a82fd
    POP EBX                             ; 004a82fe
    RET                                 ; 004a82ff
    PUSH 0x1b8                          ; 004a8300
        ;   Label: LAB_004a8300
    PUSH 0x1eb                          ; 004a8305
    PUSH 0x40                           ; 004a830a
    PUSH 0x60                           ; 004a830c
    PUSH 0x1d19d30                      ; 004a830e
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0 ; 004a8313
        ;   XREF to: 004a8eb0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0(STextView * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004a8318
    PUSH 0x1d19d30                      ; 004a831b
    XOR ESI,ESI                         ; 004a8320
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a8e00 ; 004a8322
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a8e00(STextView * this_ptr)
    MOV EBX,dword ptr [0x01d0d210]      ; 004a8327 | DAT_01d0d210
    ADD ESP,0x4                         ; 004a832d
    XOR ECX,ECX                         ; 004a8330
    XOR AH,AH                           ; 004a8332
    MOV dword ptr [0x005fe374],ECX      ; 004a8334 | DAT_005fe374
    MOV byte ptr [0x01d0d010],AH        ; 004a833a | DAT_01d0d010
    TEST EBX,EBX                        ; 004a8340
    JLE 0x004a82fc                      ; 004a8342
        ;   XREF to: 004a82fc (CONDITIONAL_JUMP)  ; LAB_004a82fc
    MOV EBX,0x1d0d214                   ; 004a8344
    PUSH 0x1d19d30                      ; 004a8349
        ;   Label: LAB_004a8349
    PUSH EBX                            ; 004a834e
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90 ; 004a834f
        ;   XREF to: 004a9d90 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90(SNotesSection * this_ptr, STextView * view)
    ADD ESP,0x8                         ; 004a8354
    TEST EAX,EAX                        ; 004a8357
    JZ 0x004a82fc                       ; 004a8359
        ;   XREF to: 004a82fc (CONDITIONAL_JUMP)  ; LAB_004a82fc
    MOV EDI,dword ptr [0x01d0d210]      ; 004a835b | DAT_01d0d210
    INC ESI                             ; 004a8361
    ADD EBX,0x2e4                       ; 004a8362
    CMP ESI,EDI                         ; 004a8368
    JL 0x004a8349                       ; 004a836a
        ;   XREF to: 004a8349 (CONDITIONAL_JUMP)  ; LAB_004a8349
    POP EDI                             ; 004a836c
    POP ESI                             ; 004a836d
    POP EBX                             ; 004a836e
    RET                                 ; 004a836f

