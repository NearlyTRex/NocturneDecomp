; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)
;
;
; XREF[2]:
;   FUN_0049d840 at 0049d9f0
;   FUN_0049db20 at 0049e1de
;
; Referenced Globals:
;   undefined4 DAT_01c965dc
;
; Called Functions:
;   FUN_00497660
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049d770
        ;   Label: FUN_0049d770
    MOV EDX,dword ptr [0x01c965dc]      ; 0049d771 | DAT_01c965dc
    CMP EDX,0x40                        ; 0049d777
    JL 0x0049d77e                       ; 0049d77a
        ;   XREF to: 0049d77e (CONDITIONAL_JUMP)  ; LAB_0049d77e
    POP EBP                             ; 0049d77c
    RET                                 ; 0049d77d
    PUSH EDI                            ; 0049d77e
        ;   Label: LAB_0049d77e
    PUSH ESI                            ; 0049d77f
    PUSH EBX                            ; 0049d780
    PUSH 0x0                            ; 0049d781
    MOV ECX,dword ptr [ESP + 0x38]      ; 0049d783
    PUSH dword ptr [ESP + 0x3c]         ; 0049d787
    PUSH ECX                            ; 0049d78b
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0049d78c
    PUSH EBX                            ; 0049d790
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0049d791
    PUSH ESI                            ; 0049d795
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0049d796
    PUSH EDI                            ; 0049d79a
    PUSH dword ptr [ESP + 0x3c]         ; 0049d79b
    MOV EBP,dword ptr [ESP + 0x38]      ; 0049d79f
    PUSH dword ptr [ESP + 0x3c]         ; 0049d7a3
    PUSH EBP                            ; 0049d7a7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049d7a8
    PUSH EAX                            ; 0049d7ac
    MOV EAX,EDX                         ; 0049d7ad
    SHL EAX,0x6                         ; 0049d7af
    ADD EAX,0x1c965e0                   ; 0049d7b2
    PUSH EAX                            ; 0049d7b7
    CALL FUN_00497660                   ; 0049d7b8
        ;   XREF to: 00497660 (UNCONDITIONAL_CALL)  ; undefined FUN_00497660()
    MOV EDX,dword ptr [0x01c965dc]      ; 0049d7bd | DAT_01c965dc
    INC EDX                             ; 0049d7c3
    ADD ESP,0x2c                        ; 0049d7c4
    MOV dword ptr [0x01c965dc],EDX      ; 0049d7c7 | DAT_01c965dc
    POP EBX                             ; 0049d7cd
    POP ESI                             ; 0049d7ce
    POP EDI                             ; 0049d7cf
    POP EBP                             ; 0049d7d0
    RET                                 ; 0049d7d1

