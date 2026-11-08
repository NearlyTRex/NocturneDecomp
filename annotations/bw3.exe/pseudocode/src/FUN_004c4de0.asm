; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c4de0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0770
;   undefined4 DAT_005e0774
;
; Called Functions:
;   FUN_00488fd0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4de0
        ;   Label: FUN_004c4de0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c4de1
    PUSH EDX                            ; 004c4de5
    CALL FUN_00488fd0                   ; 004c4de6
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 004c4deb
    PUSH 0x5c3dd2                       ; 004c4dee
    MOV EBX,EAX                         ; 004c4df3
    ADD EAX,0x158                       ; 004c4df5
    PUSH EAX                            ; 004c4dfa
    MOV dword ptr [EAX + -0x4],0x5e0784 ; 004c4dfb
    CALL FUN_0054eae0                   ; 004c4e02
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 004c4e07
    MOV dword ptr [EBX + 0x3270],0x3f19999a ; 004c4e11
    MOV dword ptr [EBX + 0x27a0],0x2    ; 004c4e1b
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 004c4e25
    MOV dword ptr [EBX + 0x108],0xffff  ; 004c4e2f
    MOV dword ptr [EBX + 0x10c],0xffff  ; 004c4e39
    MOV dword ptr [EBX + 0x110],0xffff  ; 004c4e43
    MOV dword ptr [EBX + 0xd09c],0xffff ; 004c4e4d
    MOV dword ptr [EBX + 0xd0a0],0xffff ; 004c4e57
    MOV dword ptr [EBX + 0xd0a4],0xffff ; 004c4e61
    MOV dword ptr [EBX + 0xd084],0x80   ; 004c4e6b
    MOV dword ptr [EBX + 0xd088],0x80   ; 004c4e75
    MOV dword ptr [EBX + 0xd08c],0x80   ; 004c4e7f
    MOV dword ptr [EBX + 0xd090],0x0    ; 004c4e89
    FLD float ptr [0x005e0770]          ; 004c4e93 | DAT_005e0770
    MOV dword ptr [EBX + 0xd0a8],0x0    ; 004c4e99
    FLD float ptr [0x005e0774]          ; 004c4ea3 | DAT_005e0774
    MOV dword ptr [EBX + 0xd0ac],0x0    ; 004c4ea9
    ADD ESP,0x8                         ; 004c4eb3
    MOV dword ptr [EBX + 0x27c0],0x0    ; 004c4eb6
    MOV EAX,EBX                         ; 004c4ec0
    FXCH                                ; 004c4ec2
    FSTP float ptr [EBX + 0x3274]       ; 004c4ec4
    FSTP float ptr [EBX + 0x3278]       ; 004c4eca
    POP EBX                             ; 004c4ed0
    RET                                 ; 004c4ed1

