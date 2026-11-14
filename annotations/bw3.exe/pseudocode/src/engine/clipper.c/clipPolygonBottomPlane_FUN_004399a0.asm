; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonBottomPlane_FUN_004399a0(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004399a0
        ;   Label: engine_clipper.c_clipPolygonBottomPlane_FUN_004399a0
    PUSH ESI                            ; 004399a1
    PUSH EDI                            ; 004399a2
    PUSH EBP                            ; 004399a3
    SUB ESP,0x8                         ; 004399a4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004399a7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004399ab
    XOR EBX,EBX                         ; 004399af
    MOV EAX,dword ptr [ESP + 0x24]      ; 004399b1
    MOV dword ptr [ESP],EBX             ; 004399b5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 004399b8
    TEST EAX,EAX                        ; 004399bc
    JLE 0x00439a18                      ; 004399be
        ;   XREF to: 00439a18 (CONDITIONAL_JUMP)  ; LAB_00439a18
    MOV dword ptr [ESP + 0x4],EDX       ; 004399c0
    MOV EDI,dword ptr [ESP + 0x4]       ; 004399c4
        ;   Label: LAB_004399c4
    MOV EDX,dword ptr [ESI + 0x8]       ; 004399c8
    MOV ECX,dword ptr [ESI + 0x4]       ; 004399cb
    XOR EAX,EAX                         ; 004399ce
    NEG EDX                             ; 004399d0
    MOV EDI,dword ptr [EDI]             ; 004399d2
    CMP EDX,ECX                         ; 004399d4
    JL 0x004399dd                       ; 004399d6
        ;   XREF to: 004399dd (CONDITIONAL_JUMP)  ; LAB_004399dd
    MOV EAX,0x1                         ; 004399d8
    MOV EDX,dword ptr [EDI + 0x8]       ; 004399dd
        ;   Label: LAB_004399dd
    MOV ECX,dword ptr [EDI + 0x4]       ; 004399e0
    NEG EDX                             ; 004399e3
    CMP EDX,ECX                         ; 004399e5
    JL 0x004399eb                       ; 004399e7
        ;   XREF to: 004399eb (CONDITIONAL_JUMP)  ; LAB_004399eb
    OR AL,0x2                           ; 004399e9
    CMP EAX,0x3                         ; 004399eb
        ;   Label: LAB_004399eb
    JA 0x004399fc                       ; 004399ee
        ;   XREF to: 004399fc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439988]  ; 004399f0
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x4]       ; 004399fc
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00439a00
    MOV ECX,dword ptr [ESP + 0x24]      ; 00439a03
    MOV ESI,EDI                         ; 00439a07
    ADD EAX,0x4                         ; 00439a09
    INC EDX                             ; 00439a0c
    MOV dword ptr [ESP + 0x4],EAX       ; 00439a0d
    MOV dword ptr [ESP],EDX             ; 00439a11
    CMP EDX,ECX                         ; 00439a14
    JL 0x004399c4                       ; 00439a16
        ;   XREF to: 004399c4 (CONDITIONAL_JUMP)  ; LAB_004399c4
    MOV EAX,EBX                         ; 00439a18
        ;   Label: LAB_00439a18
    ADD ESP,0x8                         ; 00439a1a
    POP EBP                             ; 00439a1d
    POP EDI                             ; 00439a1e
    POP ESI                             ; 00439a1f
    POP EBX                             ; 00439a20
    RET                                 ; 00439a21

