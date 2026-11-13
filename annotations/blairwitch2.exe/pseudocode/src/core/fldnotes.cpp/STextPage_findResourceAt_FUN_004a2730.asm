; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResource * __cdecl core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730(STextPage *this_ptr,int x,int y)
;
; Parameters:
; STextPage *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[2]:
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004a5700 at 004a5933
;   core_fldnotes.cpp_CFieldNotes_process_FUN_004a5f60 at 004a612f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2730
        ;   Label: core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a2730
    PUSH ESI                            ; 004a2731
    PUSH EDI                            ; 004a2732
    PUSH EBP                            ; 004a2733
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a2734
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a2738
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a273c
    MOV EDX,dword ptr [EBP]             ; 004a2740
    XOR EBX,EBX                         ; 004a2743
    TEST EDX,EDX                        ; 004a2745
    JLE 0x004a2774                      ; 004a2747
        ;   XREF to: 004a2774 (CONDITIONAL_JUMP)  ; LAB_004a2774
    MOV ECX,EBP                         ; 004a2749
    MOV EAX,dword ptr [ECX + 0x4]       ; 004a274b
        ;   Label: LAB_004a274b
    MOV EDX,dword ptr [EAX]             ; 004a274e
    CMP EDI,EDX                         ; 004a2750
    JL 0x004a2769                       ; 004a2752
        ;   XREF to: 004a2769 (CONDITIONAL_JUMP)  ; LAB_004a2769
    ADD EDX,dword ptr [EAX + 0x8]       ; 004a2754
    CMP EDI,EDX                         ; 004a2757
    JGE 0x004a2769                      ; 004a2759
        ;   XREF to: 004a2769 (CONDITIONAL_JUMP)  ; LAB_004a2769
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a275b
    CMP ESI,EDX                         ; 004a275e
    JL 0x004a2769                       ; 004a2760
        ;   XREF to: 004a2769 (CONDITIONAL_JUMP)  ; LAB_004a2769
    ADD EDX,dword ptr [EAX + 0xc]       ; 004a2762
    CMP ESI,EDX                         ; 004a2765
    JL 0x004a2776                       ; 004a2767
        ;   XREF to: 004a2776 (CONDITIONAL_JUMP)  ; LAB_004a2776
    INC EBX                             ; 004a2769
        ;   Label: LAB_004a2769
    MOV EAX,dword ptr [EBP]             ; 004a276a
    ADD ECX,0x4                         ; 004a276d
    CMP EBX,EAX                         ; 004a2770
    JL 0x004a274b                       ; 004a2772
        ;   XREF to: 004a274b (CONDITIONAL_JUMP)  ; LAB_004a274b
    XOR EAX,EAX                         ; 004a2774
        ;   Label: LAB_004a2774
    POP EBP                             ; 004a2776
        ;   Label: LAB_004a2776
    POP EDI                             ; 004a2777
    POP ESI                             ; 004a2778
    POP EBX                             ; 004a2779
    RET                                 ; 004a277a

