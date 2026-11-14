; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonBottomPlane_FUN_00430f30(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430f30
        ;   Label: engine_clipper.c_clipPolygonBottomPlane_FUN_00430f30
    PUSH ESI                            ; 00430f31
    PUSH EDI                            ; 00430f32
    PUSH EBP                            ; 00430f33
    SUB ESP,0x8                         ; 00430f34
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00430f37
    MOV EBP,dword ptr [ESP + 0x20]      ; 00430f3b
    XOR EBX,EBX                         ; 00430f3f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00430f41
    MOV dword ptr [ESP],EBX             ; 00430f45
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00430f48
    TEST EAX,EAX                        ; 00430f4c
    JLE 0x00430fa8                      ; 00430f4e
        ;   XREF to: 00430fa8 (CONDITIONAL_JUMP)  ; LAB_00430fa8
    MOV dword ptr [ESP + 0x4],EDX       ; 00430f50
    MOV EDI,dword ptr [ESP + 0x4]       ; 00430f54
        ;   Label: LAB_00430f54
    MOV EDX,dword ptr [ESI + 0x8]       ; 00430f58
    MOV ECX,dword ptr [ESI + 0x4]       ; 00430f5b
    XOR EAX,EAX                         ; 00430f5e
    NEG EDX                             ; 00430f60
    MOV EDI,dword ptr [EDI]             ; 00430f62
    CMP EDX,ECX                         ; 00430f64
    JL 0x00430f6d                       ; 00430f66
        ;   XREF to: 00430f6d (CONDITIONAL_JUMP)  ; LAB_00430f6d
    MOV EAX,0x1                         ; 00430f68
    MOV EDX,dword ptr [EDI + 0x8]       ; 00430f6d
        ;   Label: LAB_00430f6d
    MOV ECX,dword ptr [EDI + 0x4]       ; 00430f70
    NEG EDX                             ; 00430f73
    CMP EDX,ECX                         ; 00430f75
    JL 0x00430f7b                       ; 00430f77
        ;   XREF to: 00430f7b (CONDITIONAL_JUMP)  ; LAB_00430f7b
    OR AL,0x2                           ; 00430f79
    CMP EAX,0x3                         ; 00430f7b
        ;   Label: LAB_00430f7b
    JA 0x00430f8c                       ; 00430f7e
        ;   XREF to: 00430f8c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x430f18]  ; 00430f80
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x4]       ; 00430f8c
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00430f90
    MOV ECX,dword ptr [ESP + 0x24]      ; 00430f93
    MOV ESI,EDI                         ; 00430f97
    ADD EAX,0x4                         ; 00430f99
    INC EDX                             ; 00430f9c
    MOV dword ptr [ESP + 0x4],EAX       ; 00430f9d
    MOV dword ptr [ESP],EDX             ; 00430fa1
    CMP EDX,ECX                         ; 00430fa4
    JL 0x00430f54                       ; 00430fa6
        ;   XREF to: 00430f54 (CONDITIONAL_JUMP)  ; LAB_00430f54
    MOV EAX,EBX                         ; 00430fa8
        ;   Label: LAB_00430fa8
    ADD ESP,0x8                         ; 00430faa
    POP EBP                             ; 00430fad
    POP EDI                             ; 00430fae
    POP ESI                             ; 00430faf
    POP EBX                             ; 00430fb0
    RET                                 ; 00430fb1

