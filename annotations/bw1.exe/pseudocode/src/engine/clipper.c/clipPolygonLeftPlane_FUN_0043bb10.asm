; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonLeftPlane_FUN_0043bb10(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bb10
        ;   Label: engine_clipper.c_clipPolygonLeftPlane_FUN_0043bb10
    PUSH ESI                            ; 0043bb11
    PUSH EDI                            ; 0043bb12
    PUSH EBP                            ; 0043bb13
    SUB ESP,0x8                         ; 0043bb14
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043bb17
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043bb1b
    XOR EBX,EBX                         ; 0043bb1f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043bb21
    MOV dword ptr [ESP],EBX             ; 0043bb25
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 0043bb28
    TEST EAX,EAX                        ; 0043bb2c
    JLE 0x0043bb86                      ; 0043bb2e
        ;   XREF to: 0043bb86 (CONDITIONAL_JUMP)  ; LAB_0043bb86
    MOV dword ptr [ESP + 0x4],EDX       ; 0043bb30
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043bb34
        ;   Label: LAB_0043bb34
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043bb38
    MOV ECX,dword ptr [ESI]             ; 0043bb3b
    XOR EAX,EAX                         ; 0043bb3d
    NEG EDX                             ; 0043bb3f
    MOV EDI,dword ptr [EDI]             ; 0043bb41
    CMP EDX,ECX                         ; 0043bb43
    JL 0x0043bb4c                       ; 0043bb45
        ;   XREF to: 0043bb4c (CONDITIONAL_JUMP)  ; LAB_0043bb4c
    MOV EAX,0x1                         ; 0043bb47
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043bb4c
        ;   Label: LAB_0043bb4c
    MOV ECX,dword ptr [EDI]             ; 0043bb4f
    NEG EDX                             ; 0043bb51
    CMP EDX,ECX                         ; 0043bb53
    JL 0x0043bb59                       ; 0043bb55
        ;   XREF to: 0043bb59 (CONDITIONAL_JUMP)  ; LAB_0043bb59
    OR AL,0x2                           ; 0043bb57
    CMP EAX,0x3                         ; 0043bb59
        ;   Label: LAB_0043bb59
    JA 0x0043bb6a                       ; 0043bb5c
        ;   XREF to: 0043bb6a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43baf8]  ; 0043bb5e
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043bb6a
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 0043bb6e
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043bb71
    MOV ESI,EDI                         ; 0043bb75
    ADD EAX,0x4                         ; 0043bb77
    INC EDX                             ; 0043bb7a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043bb7b
    MOV dword ptr [ESP],EDX             ; 0043bb7f
    CMP EDX,ECX                         ; 0043bb82
    JL 0x0043bb34                       ; 0043bb84
        ;   XREF to: 0043bb34 (CONDITIONAL_JUMP)  ; LAB_0043bb34
    MOV EAX,EBX                         ; 0043bb86
        ;   Label: LAB_0043bb86
    ADD ESP,0x8                         ; 0043bb88
    POP EBP                             ; 0043bb8b
    POP EDI                             ; 0043bb8c
    POP ESI                             ; 0043bb8d
    POP EBX                             ; 0043bb8e
    RET                                 ; 0043bb8f

