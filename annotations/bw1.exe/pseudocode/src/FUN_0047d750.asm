; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047d750(int param_1)
;
;
; Referenced Globals:
;   undefined4 caseD_8
;   undefined1* switchdataD_0047d724 = 0047d75f
;
; Called Functions:
;   FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047d750
        ;   Label: FUN_0047d750
    MOV EDX,dword ptr [EAX + 0x70]      ; 0047d754
    CMP EDX,0x2                         ; 0047d757
    JNZ 0x0047d76b                      ; 0047d75a
        ;   XREF to: 0047d76b (CONDITIONAL_JUMP)  ; LAB_0047d76b
    MOV EAX,EDX                         ; 0047d75c
    RET                                 ; 0047d75e
    MOV EAX,0x1                         ; 0047d75f
        ;   Label: caseD_7
    RET                                 ; 0047d764
    MOV EAX,0x2                         ; 0047d765
        ;   Label: caseD_10
    RET                                 ; 0047d76a
    ADD EAX,0x158                       ; 0047d76b
        ;   Label: LAB_0047d76b
    PUSH EAX                            ; 0047d770
    CALL FUN_00524770                   ; 0047d771
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047d776
    SUB EAX,0x7                         ; 0047d779
    ADD ESP,0x4                         ; 0047d77c
    CMP EAX,0xa                         ; 0047d77f
    JA 0x0047cfcd                       ; 0047d782
        ;   XREF to: 0047cfcd (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x47d724]  ; 0047d788 | caseD_a | caseD_f | caseD_11
        ;   Label: switchD

