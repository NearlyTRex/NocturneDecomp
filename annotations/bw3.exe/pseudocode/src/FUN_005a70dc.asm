; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a70dc(char *param_1)
;
;
; XREF[1]:
;   FUN_005a6a78 at 005a6eb9
;
; Called Functions:
;   FUN_005a4120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a70dc
        ;   Label: FUN_005a70dc
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a70dd
    CMP byte ptr [EBX],0x0              ; 005a70e1
    JZ 0x005a70fd                       ; 005a70e4
        ;   XREF to: 005a70fd (CONDITIONAL_JUMP)  ; LAB_005a70fd
    XOR EAX,EAX                         ; 005a70e6
        ;   Label: LAB_005a70e6
    MOV AL,byte ptr [EBX]               ; 005a70e8
    PUSH EAX                            ; 005a70ea
    INC EBX                             ; 005a70eb
    CALL FUN_005a4120                   ; 005a70ec
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4120()
    MOV byte ptr [EBX + -0x1],AL        ; 005a70f1
    MOV DL,byte ptr [EBX]               ; 005a70f4
    ADD ESP,0x4                         ; 005a70f6
    TEST DL,DL                          ; 005a70f9
    JNZ 0x005a70e6                      ; 005a70fb
        ;   XREF to: 005a70e6 (CONDITIONAL_JUMP)  ; LAB_005a70e6
    POP EBX                             ; 005a70fd
        ;   Label: LAB_005a70fd
    RET                                 ; 005a70fe

