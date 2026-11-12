; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004ba540(int param_1,int param_2)
;
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004be0f0 at 004be2de
;   core_fldnotes.cpp_FUN_004be970 at 004beae7
;
; Referenced Globals:
;   undefined4 DAT_0061d2e8
;   undefined4 DAT_0061d2ec
;   undefined4 DAT_0061d2f0
;   undefined4 DAT_0061d2f4
;   undefined4 DAT_01cc7b90
;   undefined4 CAlphaBitmap_01cc7c84.width
;   undefined4 CAlphaBitmap_01cc7c84.height
;   undefined4 CAlphaBitmap_01cc7c98.width
;   undefined4 CAlphaBitmap_01cc7c98.height
;   undefined4 g_STextViewInstance.page_count
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba540
        ;   Label: core_flashlit.cpp_FUN_004ba540
    PUSH ESI                            ; 004ba541
    PUSH EDI                            ; 004ba542
    PUSH EBP                            ; 004ba543
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ba544
    MOV EDX,dword ptr [ESP + 0x18]      ; 004ba548
    CMP dword ptr [0x01cc7b90],0x0      ; 004ba54c | DAT_01cc7b90
    JLE 0x004ba583                      ; 004ba553
        ;   XREF to: 004ba583 (CONDITIONAL_JUMP)  ; LAB_004ba583
    MOV ESI,dword ptr [0x0061d2e8]      ; 004ba555 | DAT_0061d2e8
    CMP ECX,ESI                         ; 004ba55b
    JL 0x004ba583                       ; 004ba55d
        ;   XREF to: 004ba583 (CONDITIONAL_JUMP)  ; LAB_004ba583
    MOV EDI,dword ptr [0x0061d2ec]      ; 004ba55f | DAT_0061d2ec
    CMP EDX,EDI                         ; 004ba565
    JL 0x004ba583                       ; 004ba567
        ;   XREF to: 004ba583 (CONDITIONAL_JUMP)  ; LAB_004ba583
    MOV EBP,dword ptr [0x01cc7c90]      ; 004ba569 | CAlphaBitmap_01cc7c84.width
    LEA EAX,[ESI + EBP*0x1]             ; 004ba56f
    CMP ECX,EAX                         ; 004ba572
    JGE 0x004ba583                      ; 004ba574
        ;   XREF to: 004ba583 (CONDITIONAL_JUMP)  ; LAB_004ba583
    MOV EBX,dword ptr [0x01cc7c94]      ; 004ba576 | CAlphaBitmap_01cc7c84.height
    LEA EAX,[EDI + EBX*0x1]             ; 004ba57c
    CMP EDX,EAX                         ; 004ba57f
    JL 0x004ba5cd                       ; 004ba581
        ;   XREF to: 004ba5cd (CONDITIONAL_JUMP)  ; LAB_004ba5cd
    MOV EAX,[0x01cc7d0c]                ; 004ba583 | g_STextViewInstance.page_count
        ;   Label: LAB_004ba583
    MOV ESI,dword ptr [0x01cc7b90]      ; 004ba588 | DAT_01cc7b90
    SUB EAX,0x2                         ; 004ba58e
    CMP EAX,ESI                         ; 004ba591
    JLE 0x004ba5d7                      ; 004ba593
        ;   XREF to: 004ba5d7 (CONDITIONAL_JUMP)  ; LAB_004ba5d7
    MOV EDI,dword ptr [0x0061d2f0]      ; 004ba595 | DAT_0061d2f0
    CMP ECX,EDI                         ; 004ba59b
    JL 0x004ba5d7                       ; 004ba59d
        ;   XREF to: 004ba5d7 (CONDITIONAL_JUMP)  ; LAB_004ba5d7
    MOV EBP,dword ptr [0x0061d2f4]      ; 004ba59f | DAT_0061d2f4
    CMP EDX,EBP                         ; 004ba5a5
    JL 0x004ba5d7                       ; 004ba5a7
        ;   XREF to: 004ba5d7 (CONDITIONAL_JUMP)  ; LAB_004ba5d7
    MOV EBX,dword ptr [0x01cc7ca4]      ; 004ba5a9 | CAlphaBitmap_01cc7c98.width
    LEA EAX,[EDI + EBX*0x1]             ; 004ba5af
    CMP ECX,EAX                         ; 004ba5b2
    JGE 0x004ba5d7                      ; 004ba5b4
        ;   XREF to: 004ba5d7 (CONDITIONAL_JUMP)  ; LAB_004ba5d7
    MOV ESI,dword ptr [0x01cc7ca8]      ; 004ba5b6 | CAlphaBitmap_01cc7c98.height
    LEA EAX,[ESI + EBP*0x1]             ; 004ba5bc
    CMP EDX,EAX                         ; 004ba5bf
    JGE 0x004ba5d7                      ; 004ba5c1
        ;   XREF to: 004ba5d7 (CONDITIONAL_JUMP)  ; LAB_004ba5d7
    MOV EAX,0x1                         ; 004ba5c3
    POP EBP                             ; 004ba5c8
    POP EDI                             ; 004ba5c9
    POP ESI                             ; 004ba5ca
    POP EBX                             ; 004ba5cb
    RET                                 ; 004ba5cc
    MOV EAX,0xffffffff                  ; 004ba5cd
        ;   Label: LAB_004ba5cd
    POP EBP                             ; 004ba5d2
    POP EDI                             ; 004ba5d3
    POP ESI                             ; 004ba5d4
    POP EBX                             ; 004ba5d5
    RET                                 ; 004ba5d6
    XOR EAX,EAX                         ; 004ba5d7
        ;   Label: LAB_004ba5d7
    POP EBP                             ; 004ba5d9
    POP EDI                             ; 004ba5da
    POP ESI                             ; 004ba5db
    POP EBX                             ; 004ba5dc
    RET                                 ; 004ba5dd

