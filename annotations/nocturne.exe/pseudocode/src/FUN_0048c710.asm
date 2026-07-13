; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048c710(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00478790 at 00478c60
;
; Referenced Globals:
;   undefined4 DAT_01c69610
;   undefined4 DAT_01c69648
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c710
        ;   Label: FUN_0048c710
    PUSH ESI                            ; 0048c711
    PUSH EBP                            ; 0048c712
    MOV EAX,[0x01c69610]                ; 0048c713 | DAT_01c69610
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048c718
    SHL EAX,0x3                         ; 0048c71c
    PUSH ECX                            ; 0048c71f
    MOV EDX,EAX                         ; 0048c720
    SHL EAX,0x3                         ; 0048c722
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048c725
    SUB EAX,EDX                         ; 0048c729
    PUSH EBX                            ; 0048c72b
    ADD EAX,0x1c69614                   ; 0048c72c
    PUSH EAX                            ; 0048c731
    MOV EDX,dword ptr [EAX + 0x34]      ; 0048c732 | DAT_01c69648
    CALL dword ptr [EDX]                ; 0048c735
    MOV ESI,dword ptr [0x01c69610]      ; 0048c737 | DAT_01c69610
    INC ESI                             ; 0048c73d
    ADD ESP,0xc                         ; 0048c73e
    MOV dword ptr [0x01c69610],ESI      ; 0048c741 | DAT_01c69610
    CMP ESI,0x100                       ; 0048c747
    JGE 0x0048c753                      ; 0048c74d
        ;   XREF to: 0048c753 (CONDITIONAL_JUMP)  ; LAB_0048c753
    POP EBP                             ; 0048c74f
    POP ESI                             ; 0048c750
    POP EBX                             ; 0048c751
    RET                                 ; 0048c752
    XOR EBP,EBP                         ; 0048c753
        ;   Label: LAB_0048c753
    MOV dword ptr [0x01c69610],EBP      ; 0048c755 | DAT_01c69610
    POP EBP                             ; 0048c75b
    POP ESI                             ; 0048c75c
    POP EBX                             ; 0048c75d
    RET                                 ; 0048c75e

