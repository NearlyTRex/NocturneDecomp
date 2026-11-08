; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c1540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004c0ca0 at 004c0cc3
;
; Called Functions:
;   FUN_004c0cd0
;   FUN_004c1830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1540
        ;   Label: FUN_004c1540
    PUSH ESI                            ; 004c1541
    PUSH EDI                            ; 004c1542
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c1543
    PUSH EBX                            ; 004c1547
    CALL FUN_004c1830                   ; 004c1548
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1830()
    ADD ESP,0x4                         ; 004c154d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c1550
    PUSH EDX                            ; 004c1554
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c1555
    PUSH ECX                            ; 004c1559
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c155a
    PUSH ESI                            ; 004c155e
    MOV EDI,dword ptr [ESP + 0x20]      ; 004c155f
    PUSH EDI                            ; 004c1563
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c1564
    PUSH EBX                            ; 004c1568
    MOV dword ptr [EBX + 0x4208],EAX    ; 004c1569
    CALL FUN_004c0cd0                   ; 004c156f
        ;   XREF to: 004c0cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c0cd0()
    ADD ESP,0x14                        ; 004c1574
    POP EDI                             ; 004c1577
    POP ESI                             ; 004c1578
    POP EBX                             ; 004c1579
    RET                                 ; 004c157a

