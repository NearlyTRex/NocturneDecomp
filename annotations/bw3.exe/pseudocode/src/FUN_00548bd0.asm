; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548bd0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0054e500 at 0054e52a
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_00538dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548bd0
        ;   Label: FUN_00548bd0
    PUSH ESI                            ; 00548bd1
    PUSH EDI                            ; 00548bd2
    PUSH EBP                            ; 00548bd3
    PUSH 0x0                            ; 00548bd4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00548bd6
    MOV ECX,dword ptr [ESP + 0x18]      ; 00548bda
    PUSH -0x3                           ; 00548bde
    SHL EAX,0x2                         ; 00548be0
    MOV EDX,dword ptr [ESP + 0x24]      ; 00548be3
    ADD EAX,ECX                         ; 00548be7
    PUSH EDX                            ; 00548be9
    MOV EBX,dword ptr [EAX + 0x7c]      ; 00548bea
    PUSH EBX                            ; 00548bed
    MOV ESI,dword ptr [EAX + 0x54]      ; 00548bee
    PUSH ESI                            ; 00548bf1
    MOV EDI,dword ptr [EAX + 0x2c]      ; 00548bf2
    PUSH EDI                            ; 00548bf5
    MOV EBP,dword ptr [0x00603b28]      ; 00548bf6 | DAT_00603b28
    PUSH EBP                            ; 00548bfc | DAT_01ed78c8
    CALL FUN_00538dd0                   ; 00548bfd
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538dd0()
    ADD ESP,0x1c                        ; 00548c02
    POP EBP                             ; 00548c05
    POP EDI                             ; 00548c06
    POP ESI                             ; 00548c07
    POP EBX                             ; 00548c08
    RET                                 ; 00548c09

