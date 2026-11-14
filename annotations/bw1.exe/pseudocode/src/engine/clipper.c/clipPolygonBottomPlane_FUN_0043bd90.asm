; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonBottomPlane_FUN_0043bd90(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bd90
        ;   Label: engine_clipper.c_clipPolygonBottomPlane_FUN_0043bd90
    PUSH ESI                            ; 0043bd91
    PUSH EDI                            ; 0043bd92
    PUSH EBP                            ; 0043bd93
    SUB ESP,0x8                         ; 0043bd94
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043bd97
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043bd9b
    XOR EBX,EBX                         ; 0043bd9f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043bda1
    MOV dword ptr [ESP],EBX             ; 0043bda5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 0043bda8
    TEST EAX,EAX                        ; 0043bdac
    JLE 0x0043be08                      ; 0043bdae
        ;   XREF to: 0043be08 (CONDITIONAL_JUMP)  ; LAB_0043be08
    MOV dword ptr [ESP + 0x4],EDX       ; 0043bdb0
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043bdb4
        ;   Label: LAB_0043bdb4
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043bdb8
    MOV ECX,dword ptr [ESI + 0x4]       ; 0043bdbb
    XOR EAX,EAX                         ; 0043bdbe
    NEG EDX                             ; 0043bdc0
    MOV EDI,dword ptr [EDI]             ; 0043bdc2
    CMP EDX,ECX                         ; 0043bdc4
    JL 0x0043bdcd                       ; 0043bdc6
        ;   XREF to: 0043bdcd (CONDITIONAL_JUMP)  ; LAB_0043bdcd
    MOV EAX,0x1                         ; 0043bdc8
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043bdcd
        ;   Label: LAB_0043bdcd
    MOV ECX,dword ptr [EDI + 0x4]       ; 0043bdd0
    NEG EDX                             ; 0043bdd3
    CMP EDX,ECX                         ; 0043bdd5
    JL 0x0043bddb                       ; 0043bdd7
        ;   XREF to: 0043bddb (CONDITIONAL_JUMP)  ; LAB_0043bddb
    OR AL,0x2                           ; 0043bdd9
    CMP EAX,0x3                         ; 0043bddb
        ;   Label: LAB_0043bddb
    JA 0x0043bdec                       ; 0043bdde
        ;   XREF to: 0043bdec (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43bd78]  ; 0043bde0
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043bdec
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 0043bdf0
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043bdf3
    MOV ESI,EDI                         ; 0043bdf7
    ADD EAX,0x4                         ; 0043bdf9
    INC EDX                             ; 0043bdfc
    MOV dword ptr [ESP + 0x4],EAX       ; 0043bdfd
    MOV dword ptr [ESP],EDX             ; 0043be01
    CMP EDX,ECX                         ; 0043be04
    JL 0x0043bdb4                       ; 0043be06
        ;   XREF to: 0043bdb4 (CONDITIONAL_JUMP)  ; LAB_0043bdb4
    MOV EAX,EBX                         ; 0043be08
        ;   Label: LAB_0043be08
    ADD ESP,0x8                         ; 0043be0a
    POP EBP                             ; 0043be0d
    POP EDI                             ; 0043be0e
    POP ESI                             ; 0043be0f
    POP EBX                             ; 0043be10
    RET                                 ; 0043be11

