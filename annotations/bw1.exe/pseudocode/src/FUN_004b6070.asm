; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b6070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)
;
;
; XREF[2]:
;   FUN_004b6140 at 004b62f0
;   FUN_004b6420 at 004b6ade
;
; Referenced Globals:
;   undefined4 DAT_01caf068
;
; Called Functions:
;   FUN_004b0000
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004b6070
        ;   Label: FUN_004b6070
    MOV EDX,dword ptr [0x01caf068]      ; 004b6071 | DAT_01caf068
    CMP EDX,0x40                        ; 004b6077
    JL 0x004b607e                       ; 004b607a
        ;   XREF to: 004b607e (CONDITIONAL_JUMP)  ; LAB_004b607e
    POP EBP                             ; 004b607c
    RET                                 ; 004b607d
    PUSH EDI                            ; 004b607e
        ;   Label: LAB_004b607e
    PUSH ESI                            ; 004b607f
    PUSH EBX                            ; 004b6080
    PUSH 0x0                            ; 004b6081
    MOV ECX,dword ptr [ESP + 0x38]      ; 004b6083
    PUSH dword ptr [ESP + 0x3c]         ; 004b6087
    PUSH ECX                            ; 004b608b
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004b608c
    PUSH EBX                            ; 004b6090
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004b6091
    PUSH ESI                            ; 004b6095
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004b6096
    PUSH EDI                            ; 004b609a
    PUSH dword ptr [ESP + 0x3c]         ; 004b609b
    MOV EBP,dword ptr [ESP + 0x38]      ; 004b609f
    PUSH dword ptr [ESP + 0x3c]         ; 004b60a3
    PUSH EBP                            ; 004b60a7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b60a8
    PUSH EAX                            ; 004b60ac
    MOV EAX,EDX                         ; 004b60ad
    SHL EAX,0x6                         ; 004b60af
    ADD EAX,0x1caf06c                   ; 004b60b2
    PUSH EAX                            ; 004b60b7
    CALL FUN_004b0000                   ; 004b60b8
        ;   XREF to: 004b0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0000()
    MOV EDX,dword ptr [0x01caf068]      ; 004b60bd | DAT_01caf068
    INC EDX                             ; 004b60c3
    ADD ESP,0x2c                        ; 004b60c4
    MOV dword ptr [0x01caf068],EDX      ; 004b60c7 | DAT_01caf068
    POP EBX                             ; 004b60cd
    POP ESI                             ; 004b60ce
    POP EDI                             ; 004b60cf
    POP EBP                             ; 004b60d0
    RET                                 ; 004b60d1

