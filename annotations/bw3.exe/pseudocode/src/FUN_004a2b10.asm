; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
;
; XREF[1]:
;   FUN_004876d0 at 004878ae
;
; Referenced Globals:
;   undefined4 DAT_005df8fc
;   undefined4 DAT_01cf5088
;
; Called Functions:
;   FUN_0049b030
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004a2b10
        ;   Label: FUN_004a2b10
    MOV EDX,dword ptr [0x01cf5088]      ; 004a2b11 | DAT_01cf5088
    CMP EDX,0x40                        ; 004a2b17
    JL 0x004a2b1e                       ; 004a2b1a
        ;   XREF to: 004a2b1e (CONDITIONAL_JUMP)  ; LAB_004a2b1e
    POP EBP                             ; 004a2b1c
    RET                                 ; 004a2b1d
    PUSH EDI                            ; 004a2b1e
        ;   Label: LAB_004a2b1e
    PUSH ESI                            ; 004a2b1f
    PUSH EBX                            ; 004a2b20
    PUSH dword ptr [ESP + 0x30]         ; 004a2b21
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a2b25
    PUSH dword ptr [0x005df8fc]         ; 004a2b29 | DAT_005df8fc
    PUSH ECX                            ; 004a2b2f
    MOV EBX,dword ptr [ESP + 0x34]      ; 004a2b30
    PUSH EBX                            ; 004a2b34
    MOV ESI,dword ptr [ESP + 0x34]      ; 004a2b35
    PUSH ESI                            ; 004a2b39
    PUSH 0x0                            ; 004a2b3a
    MOV EDI,dword ptr [ESP + 0x34]      ; 004a2b3c
    PUSH 0x0                            ; 004a2b40
    MOV EBP,dword ptr [ESP + 0x34]      ; 004a2b42
    PUSH dword ptr [ESP + 0x3c]         ; 004a2b46
    MOV EAX,EDX                         ; 004a2b4a
    PUSH EDI                            ; 004a2b4c
    SHL EAX,0x6                         ; 004a2b4d
    PUSH EBP                            ; 004a2b50
    ADD EAX,0x1cf508c                   ; 004a2b51
    PUSH EAX                            ; 004a2b56
    CALL FUN_0049b030                   ; 004a2b57
        ;   XREF to: 0049b030 (UNCONDITIONAL_CALL)  ; undefined FUN_0049b030()
    MOV EAX,[0x01cf5088]                ; 004a2b5c | DAT_01cf5088
    INC EAX                             ; 004a2b61
    ADD ESP,0x2c                        ; 004a2b62
    MOV [0x01cf5088],EAX                ; 004a2b65 | DAT_01cf5088
    POP EBX                             ; 004a2b6a
    POP ESI                             ; 004a2b6b
    POP EDI                             ; 004a2b6c
    POP EBP                             ; 004a2b6d
    RET                                 ; 004a2b6e

