; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00486ba0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005df0fc
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486ba0
        ;   Label: FUN_00486ba0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00486ba1
    PUSH EDX                            ; 00486ba5
    CALL FUN_0057ad70                   ; 00486ba6
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 00486bab
    PUSH 0x5bd969                       ; 00486bae
    MOV EBX,EAX                         ; 00486bb3
    ADD EAX,0x158                       ; 00486bb5
    PUSH EAX                            ; 00486bba
    MOV dword ptr [EAX + -0x4],0x5df104 ; 00486bbb
    CALL FUN_004625f0                   ; 00486bc2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x594],0x41200000 ; 00486bc7
    MOV dword ptr [EBX + 0x2d8],0x1     ; 00486bd1
    MOV dword ptr [EBX + 0x2dc],0x2     ; 00486bdb
    MOV dword ptr [EBX + 0x2e0],0x1     ; 00486be5
    MOV dword ptr [EBX + 0x2e4],0x1     ; 00486bef
    MOV dword ptr [EBX + 0x2e8],0x41700000 ; 00486bf9
    FLD float ptr [0x005df0fc]          ; 00486c03 | DAT_005df0fc
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00486c09
    ADD ESP,0x8                         ; 00486c13
    MOV dword ptr [EBX + 0x598],0x0     ; 00486c16
    MOV EAX,EBX                         ; 00486c20
    FSTP float ptr [EBX + 0x564]        ; 00486c22
    POP EBX                             ; 00486c28
    RET                                 ; 00486c29

