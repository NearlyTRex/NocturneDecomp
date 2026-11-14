; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonLeftPlane_FUN_00430cb0(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430cb0
        ;   Label: engine_clipper.c_clipPolygonLeftPlane_FUN_00430cb0
    PUSH ESI                            ; 00430cb1
    PUSH EDI                            ; 00430cb2
    PUSH EBP                            ; 00430cb3
    SUB ESP,0x8                         ; 00430cb4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00430cb7
    MOV EBP,dword ptr [ESP + 0x20]      ; 00430cbb
    XOR EBX,EBX                         ; 00430cbf
    MOV EAX,dword ptr [ESP + 0x24]      ; 00430cc1
    MOV dword ptr [ESP],EBX             ; 00430cc5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00430cc8
    TEST EAX,EAX                        ; 00430ccc
    JLE 0x00430d26                      ; 00430cce
        ;   XREF to: 00430d26 (CONDITIONAL_JUMP)  ; LAB_00430d26
    MOV dword ptr [ESP + 0x4],EDX       ; 00430cd0
    MOV EDI,dword ptr [ESP + 0x4]       ; 00430cd4
        ;   Label: LAB_00430cd4
    MOV EDX,dword ptr [ESI + 0x8]       ; 00430cd8
    MOV ECX,dword ptr [ESI]             ; 00430cdb
    XOR EAX,EAX                         ; 00430cdd
    NEG EDX                             ; 00430cdf
    MOV EDI,dword ptr [EDI]             ; 00430ce1
    CMP EDX,ECX                         ; 00430ce3
    JL 0x00430cec                       ; 00430ce5
        ;   XREF to: 00430cec (CONDITIONAL_JUMP)  ; LAB_00430cec
    MOV EAX,0x1                         ; 00430ce7
    MOV EDX,dword ptr [EDI + 0x8]       ; 00430cec
        ;   Label: LAB_00430cec
    MOV ECX,dword ptr [EDI]             ; 00430cef
    NEG EDX                             ; 00430cf1
    CMP EDX,ECX                         ; 00430cf3
    JL 0x00430cf9                       ; 00430cf5
        ;   XREF to: 00430cf9 (CONDITIONAL_JUMP)  ; LAB_00430cf9
    OR AL,0x2                           ; 00430cf7
    CMP EAX,0x3                         ; 00430cf9
        ;   Label: LAB_00430cf9
    JA 0x00430d0a                       ; 00430cfc
        ;   XREF to: 00430d0a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x430c98]  ; 00430cfe
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x4]       ; 00430d0a
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00430d0e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00430d11
    MOV ESI,EDI                         ; 00430d15
    ADD EAX,0x4                         ; 00430d17
    INC EDX                             ; 00430d1a
    MOV dword ptr [ESP + 0x4],EAX       ; 00430d1b
    MOV dword ptr [ESP],EDX             ; 00430d1f
    CMP EDX,ECX                         ; 00430d22
    JL 0x00430cd4                       ; 00430d24
        ;   XREF to: 00430cd4 (CONDITIONAL_JUMP)  ; LAB_00430cd4
    MOV EAX,EBX                         ; 00430d26
        ;   Label: LAB_00430d26
    ADD ESP,0x8                         ; 00430d28
    POP EBP                             ; 00430d2b
    POP EDI                             ; 00430d2c
    POP ESI                             ; 00430d2d
    POP EBX                             ; 00430d2e
    RET                                 ; 00430d2f

