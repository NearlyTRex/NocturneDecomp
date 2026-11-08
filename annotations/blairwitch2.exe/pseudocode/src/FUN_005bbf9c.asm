; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bbf9c(char *param_1)
;
;
; XREF[1]:
;   FUN_005bb938 at 005bbd79
;
; Called Functions:
;   FUN_005b8e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bbf9c
        ;   Label: FUN_005bbf9c
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bbf9d
    CMP byte ptr [EBX],0x0              ; 005bbfa1
    JZ 0x005bbfbd                       ; 005bbfa4
        ;   XREF to: 005bbfbd (CONDITIONAL_JUMP)  ; LAB_005bbfbd
    XOR EAX,EAX                         ; 005bbfa6
        ;   Label: LAB_005bbfa6
    MOV AL,byte ptr [EBX]               ; 005bbfa8
    PUSH EAX                            ; 005bbfaa
    INC EBX                             ; 005bbfab
    CALL FUN_005b8e40                   ; 005bbfac
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    MOV byte ptr [EBX + -0x1],AL        ; 005bbfb1
    MOV DL,byte ptr [EBX]               ; 005bbfb4
    ADD ESP,0x4                         ; 005bbfb6
    TEST DL,DL                          ; 005bbfb9
    JNZ 0x005bbfa6                      ; 005bbfbb
        ;   XREF to: 005bbfa6 (CONDITIONAL_JUMP)  ; LAB_005bbfa6
    POP EBX                             ; 005bbfbd
        ;   Label: LAB_005bbfbd
    RET                                 ; 005bbfbe

