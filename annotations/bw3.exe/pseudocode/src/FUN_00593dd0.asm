; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00593dd0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7520
;   undefined4 DAT_005e7524
;   undefined4 DAT_005e7528
;
; Called Functions:
;   FUN_00488fd0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593dd0
        ;   Label: FUN_00593dd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00593dd1
    PUSH EDX                            ; 00593dd5
    CALL FUN_00488fd0                   ; 00593dd6
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 00593ddb
    PUSH 0x5d9254                       ; 00593dde
    MOV EBX,EAX                         ; 00593de3
    ADD EAX,0x158                       ; 00593de5
    PUSH EAX                            ; 00593dea
    MOV dword ptr [EAX + -0x4],0x5e7544 ; 00593deb
    CALL FUN_0054eae0                   ; 00593df2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x326c],0x3f800000 ; 00593df7
    MOV dword ptr [EBX + 0x3270],0x40000000 ; 00593e01
    MOV dword ptr [EBX + 0xd054],0x0    ; 00593e0b
    MOV dword ptr [EBX + 0xd06c],0x1    ; 00593e15
    MOV dword ptr [EBX + 0xd080],0x0    ; 00593e1f
    FLD float ptr [0x005e7520]          ; 00593e29 | DAT_005e7520
    MOV dword ptr [EBX + 0xd084],0x40a00000 ; 00593e2f
    FLD float ptr [0x005e7524]          ; 00593e39 | DAT_005e7524
    MOV dword ptr [EBX + 0xd088],0x0    ; 00593e3f
    FLD float ptr [0x005e7528]          ; 00593e49 | DAT_005e7528
    MOV dword ptr [EBX + 0xd08c],0x0    ; 00593e4f
    ADD ESP,0x8                         ; 00593e59
    MOV dword ptr [EBX + 0xd090],0x0    ; 00593e5c
    MOV EAX,EBX                         ; 00593e66
    FXCH ST2                            ; 00593e68
    FSTP float ptr [EBX + 0x3274]       ; 00593e6a
    FSTP float ptr [EBX + 0x3278]       ; 00593e70
    FSTP float ptr [EBX + 0xd094]       ; 00593e76
    POP EBX                             ; 00593e7c
    RET                                 ; 00593e7d

