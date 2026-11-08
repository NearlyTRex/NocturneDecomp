; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1480(undefined4 *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[3]:
;   FUN_004bbf70 at 004bc0e1
;   FUN_004bc840 at 004bca0b
;   FUN_004fcb00 at 004fcc47
;
; Referenced Globals:
;   TerminatedCString s_moon_kfm_005dbece
;   TerminatedCString s_loadscreen_005dbed7
;   undefined4 DAT_0060b280
;   undefined4 DAT_00617e14
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0040d420
;   FUN_0040d440
;   FUN_0040d5a0
;   FUN_0040d900
;   FUN_0044dcd0
;   FUN_0046ca00
;   FUN_0055b1f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e1480
        ;   Label: FUN_004e1480
    SUB ESP,0x14                        ; 004e1481
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e1484
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e1488
    MOV dword ptr [ESI + 0x8],0x0       ; 004e148c
    MOV dword ptr [ESI + 0xc],0x1       ; 004e1493
    MOV dword ptr [ESI],0x0             ; 004e149a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e14a0
    MOV dword ptr [ESI + 0x110],EAX     ; 004e14a4
    MOV dword ptr [ESI + 0x4],EDX       ; 004e14aa
    TEST EAX,EAX                        ; 004e14ad
    JZ 0x004e15c2                       ; 004e14af
        ;   XREF to: 004e15c2 (CONDITIONAL_JUMP)  ; LAB_004e15c2
    MOV dword ptr [ESI + 0x118],0x0     ; 004e14b5
    MOV dword ptr [ESI + 0x11c],0xc0    ; 004e14bf
    MOV dword ptr [ESI + 0x120],0xc0    ; 004e14c9
    MOV dword ptr [ESI + 0x114],0x1bf   ; 004e14d3
    MOV dword ptr [ESI + 0x124],0xff    ; 004e14dd
        ;   Label: LAB_004e14dd
    PUSH 0x5dbece                       ; 004e14e7 | = "moon.kfm"
    MOV dword ptr [ESI + 0x128],0xff    ; 004e14ec
    PUSH 0x1d03130                      ; 004e14f6
    MOV dword ptr [ESI + 0x12c],0xff    ; 004e14fb
    CALL FUN_0044dcd0                   ; 004e1505
        ;   XREF to: 0044dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dcd0()
    ADD ESP,0x8                         ; 004e150a
    PUSH 0x617e14                       ; 004e150d | DAT_00617e14
    MOV EDX,dword ptr [0x0060b280]      ; 004e1512 | DAT_0060b280
    PUSH EDX                            ; 004e1518 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 004e1519
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 004e151e
    MOV EAX,ESP                         ; 004e1521
    PUSH EAX                            ; 004e1523
    CALL FUN_0040d420                   ; 004e1524
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004e1529
    PUSH 0x1e0                          ; 004e152c
    PUSH 0x280                          ; 004e1531
    PUSH 0x5dbed7                       ; 004e1536 | = "loadscreen"
    LEA EAX,[ESP + 0xc]                 ; 004e153b
    PUSH EAX                            ; 004e153f
    CALL FUN_0040d5a0                   ; 004e1540
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d5a0()
    ADD ESP,0x10                        ; 004e1545
    PUSH 0xffff                         ; 004e1548
    PUSH 0x0                            ; 004e154d
    PUSH 0x0                            ; 004e154f
    LEA EAX,[ESP + 0xc]                 ; 004e1551
    PUSH EAX                            ; 004e1555
    CALL FUN_0040d900                   ; 004e1556
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d900()
    MOV dword ptr [ESI + 0x114],0x18    ; 004e155b
    MOV dword ptr [ESI + 0x118],0x195   ; 004e1565
    MOV dword ptr [ESI + 0x11c],0x3c    ; 004e156f
    MOV dword ptr [ESI + 0x120],0x3c    ; 004e1579
    MOV dword ptr [ESI + 0x110],0x1     ; 004e1583
    ADD ESP,0x10                        ; 004e158d
    MOV dword ptr [ESI + 0x124],0xd7    ; 004e1590
    PUSH 0x0                            ; 004e159a
    LEA EAX,[ESP + 0x4]                 ; 004e159c
    MOV dword ptr [ESI + 0x128],0xdc    ; 004e15a0
    PUSH EAX                            ; 004e15aa
    MOV dword ptr [ESI + 0x12c],0xe0    ; 004e15ab
    CALL FUN_0040d440                   ; 004e15b5
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d440()
    ADD ESP,0x8                         ; 004e15ba
    ADD ESP,0x14                        ; 004e15bd
    POP ESI                             ; 004e15c0
    RET                                 ; 004e15c1
    PUSH EBX                            ; 004e15c2
        ;   Label: LAB_004e15c2
    CALL FUN_0055b1f0                   ; 004e15c3
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
    MOV dword ptr [ESI + 0x114],0x0     ; 004e15c8
    MOV dword ptr [ESI + 0x118],0x0     ; 004e15d2
    MOV dword ptr [ESI + 0x11c],0x280   ; 004e15dc
    MOV dword ptr [ESI + 0x120],0x1e0   ; 004e15e6
    POP EBX                             ; 004e15f0
    JMP 0x004e14dd                      ; 004e15f1
        ;   XREF to: 004e14dd (UNCONDITIONAL_JUMP)  ; LAB_004e14dd

