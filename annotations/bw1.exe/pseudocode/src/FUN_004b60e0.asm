; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b60e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
;
; XREF[4]:
;   FUN_0049eb30 at 0049ed0e
;   FUN_00500f90 at 0050121c
;   FUN_005026f0 at 0050297c
;   FUN_00562100 at 005622de
;
; Referenced Globals:
;   undefined4 DAT_005fffac
;   undefined4 DAT_01caf068
;
; Called Functions:
;   FUN_004b0000
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004b60e0
        ;   Label: FUN_004b60e0
    MOV EDX,dword ptr [0x01caf068]      ; 004b60e1 | DAT_01caf068
    CMP EDX,0x40                        ; 004b60e7
    JL 0x004b60ee                       ; 004b60ea
        ;   XREF to: 004b60ee (CONDITIONAL_JUMP)  ; LAB_004b60ee
    POP EBP                             ; 004b60ec
    RET                                 ; 004b60ed
    PUSH EDI                            ; 004b60ee
        ;   Label: LAB_004b60ee
    PUSH ESI                            ; 004b60ef
    PUSH EBX                            ; 004b60f0
    PUSH dword ptr [ESP + 0x30]         ; 004b60f1
    MOV ECX,dword ptr [ESP + 0x30]      ; 004b60f5
    PUSH dword ptr [0x005fffac]         ; 004b60f9 | DAT_005fffac
    PUSH ECX                            ; 004b60ff
    MOV EBX,dword ptr [ESP + 0x34]      ; 004b6100
    PUSH EBX                            ; 004b6104
    MOV ESI,dword ptr [ESP + 0x34]      ; 004b6105
    PUSH ESI                            ; 004b6109
    PUSH 0x0                            ; 004b610a
    MOV EDI,dword ptr [ESP + 0x34]      ; 004b610c
    PUSH 0x0                            ; 004b6110
    MOV EBP,dword ptr [ESP + 0x34]      ; 004b6112
    PUSH dword ptr [ESP + 0x3c]         ; 004b6116
    MOV EAX,EDX                         ; 004b611a
    PUSH EDI                            ; 004b611c
    SHL EAX,0x6                         ; 004b611d
    PUSH EBP                            ; 004b6120
    ADD EAX,0x1caf06c                   ; 004b6121
    PUSH EAX                            ; 004b6126
    CALL FUN_004b0000                   ; 004b6127
        ;   XREF to: 004b0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0000()
    MOV EAX,[0x01caf068]                ; 004b612c | DAT_01caf068
    INC EAX                             ; 004b6131
    ADD ESP,0x2c                        ; 004b6132
    MOV [0x01caf068],EAX                ; 004b6135 | DAT_01caf068
    POP EBX                             ; 004b613a
    POP ESI                             ; 004b613b
    POP EDI                             ; 004b613c
    POP EBP                             ; 004b613d
    RET                                 ; 004b613e

