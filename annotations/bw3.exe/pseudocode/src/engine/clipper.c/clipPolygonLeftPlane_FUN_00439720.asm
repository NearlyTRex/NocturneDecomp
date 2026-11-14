; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonLeftPlane_FUN_00439720(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439720
        ;   Label: engine_clipper.c_clipPolygonLeftPlane_FUN_00439720
    PUSH ESI                            ; 00439721
    PUSH EDI                            ; 00439722
    PUSH EBP                            ; 00439723
    SUB ESP,0x8                         ; 00439724
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00439727
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043972b
    XOR EBX,EBX                         ; 0043972f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00439731
    MOV dword ptr [ESP],EBX             ; 00439735
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00439738
    TEST EAX,EAX                        ; 0043973c
    JLE 0x00439796                      ; 0043973e
        ;   XREF to: 00439796 (CONDITIONAL_JUMP)  ; LAB_00439796
    MOV dword ptr [ESP + 0x4],EDX       ; 00439740
    MOV EDI,dword ptr [ESP + 0x4]       ; 00439744
        ;   Label: LAB_00439744
    MOV EDX,dword ptr [ESI + 0x8]       ; 00439748
    MOV ECX,dword ptr [ESI]             ; 0043974b
    XOR EAX,EAX                         ; 0043974d
    NEG EDX                             ; 0043974f
    MOV EDI,dword ptr [EDI]             ; 00439751
    CMP EDX,ECX                         ; 00439753
    JL 0x0043975c                       ; 00439755
        ;   XREF to: 0043975c (CONDITIONAL_JUMP)  ; LAB_0043975c
    MOV EAX,0x1                         ; 00439757
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043975c
        ;   Label: LAB_0043975c
    MOV ECX,dword ptr [EDI]             ; 0043975f
    NEG EDX                             ; 00439761
    CMP EDX,ECX                         ; 00439763
    JL 0x00439769                       ; 00439765
        ;   XREF to: 00439769 (CONDITIONAL_JUMP)  ; LAB_00439769
    OR AL,0x2                           ; 00439767
    CMP EAX,0x3                         ; 00439769
        ;   Label: LAB_00439769
    JA 0x0043977a                       ; 0043976c
        ;   XREF to: 0043977a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439708]  ; 0043976e
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043977a
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 0043977e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00439781
    MOV ESI,EDI                         ; 00439785
    ADD EAX,0x4                         ; 00439787
    INC EDX                             ; 0043978a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043978b
    MOV dword ptr [ESP],EDX             ; 0043978f
    CMP EDX,ECX                         ; 00439792
    JL 0x00439744                       ; 00439794
        ;   XREF to: 00439744 (CONDITIONAL_JUMP)  ; LAB_00439744
    MOV EAX,EBX                         ; 00439796
        ;   Label: LAB_00439796
    ADD ESP,0x8                         ; 00439798
    POP EBP                             ; 0043979b
    POP EDI                             ; 0043979c
    POP ESI                             ; 0043979d
    POP EBX                             ; 0043979e
    RET                                 ; 0043979f

