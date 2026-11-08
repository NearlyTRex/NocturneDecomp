; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059ebe0(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ebe0
        ;   Label: FUN_0059ebe0
    MOV EDX,dword ptr [EAX + 0x11390]   ; 0059ebe4
    TEST EDX,EDX                        ; 0059ebea
    JGE 0x0059ebef                      ; 0059ebec
        ;   XREF to: 0059ebef (CONDITIONAL_JUMP)  ; LAB_0059ebef
    RET                                 ; 0059ebee
    PUSH 0x1                            ; 0059ebef
        ;   Label: LAB_0059ebef
    PUSH EDX                            ; 0059ebf1
    ADD EAX,0x2b4                       ; 0059ebf2
    PUSH EAX                            ; 0059ebf7
    CALL FUN_00503620                   ; 0059ebf8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0059ebfd
    RET                                 ; 0059ec00

