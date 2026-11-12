; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004ba5e0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d2f8
;   undefined4 DAT_0061d2fc
;   undefined4 CAlphaBitmap_01cc7cac.width
;   undefined4 CAlphaBitmap_01cc7cac.height
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba5e0
        ;   Label: core_flashlit.cpp_FUN_004ba5e0
    PUSH ESI                            ; 004ba5e1
    PUSH EDI                            ; 004ba5e2
    PUSH EBP                            ; 004ba5e3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ba5e4
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ba5e8
    MOV EBX,dword ptr [0x0061d2f8]      ; 004ba5ec | DAT_0061d2f8
    CMP EDX,EBX                         ; 004ba5f2
    JL 0x004ba61a                       ; 004ba5f4
        ;   XREF to: 004ba61a (CONDITIONAL_JUMP)  ; LAB_004ba61a
    MOV ESI,dword ptr [0x0061d2fc]      ; 004ba5f6 | DAT_0061d2fc
    CMP ECX,ESI                         ; 004ba5fc
    JL 0x004ba61a                       ; 004ba5fe
        ;   XREF to: 004ba61a (CONDITIONAL_JUMP)  ; LAB_004ba61a
    MOV EDI,dword ptr [0x01cc7cb8]      ; 004ba600 | CAlphaBitmap_01cc7cac.width
    LEA EAX,[EBX + EDI*0x1]             ; 004ba606
    CMP EDX,EAX                         ; 004ba609
    JGE 0x004ba61a                      ; 004ba60b
        ;   XREF to: 004ba61a (CONDITIONAL_JUMP)  ; LAB_004ba61a
    MOV EBP,dword ptr [0x01cc7cbc]      ; 004ba60d | CAlphaBitmap_01cc7cac.height
    LEA EAX,[ESI + EBP*0x1]             ; 004ba613
    CMP ECX,EAX                         ; 004ba616
    JL 0x004ba621                       ; 004ba618
        ;   XREF to: 004ba621 (CONDITIONAL_JUMP)  ; LAB_004ba621
    XOR EAX,EAX                         ; 004ba61a
        ;   Label: LAB_004ba61a
    POP EBP                             ; 004ba61c
    POP EDI                             ; 004ba61d
    POP ESI                             ; 004ba61e
    POP EBX                             ; 004ba61f
    RET                                 ; 004ba620
    MOV EAX,0x1                         ; 004ba621
        ;   Label: LAB_004ba621
    POP EBP                             ; 004ba626
    POP EDI                             ; 004ba627
    POP ESI                             ; 004ba628
    POP EBX                             ; 004ba629
    RET                                 ; 004ba62a

