; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c1550(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cb81c8
;   undefined4 DAT_01cb81cc
;   undefined4 DAT_01cb81d0
;   undefined4 DAT_01cb81d4
;   undefined4 DAT_01cb81d8
;   undefined4 DAT_01cb81dc
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c1550
        ;   Label: FUN_004c1550
    PUSH 0x1c264a8                      ; 004c1551
    PUSH 0x7                            ; 004c1556
    MOV EDX,0xbf19999a                  ; 004c1558
    PUSH 0x61677c                       ; 004c155d
    MOV ESI,0x3f19999a                  ; 004c1562
    XOR ECX,ECX                         ; 004c1567
    PUSH 0x4c15b0                       ; 004c1569
    MOV dword ptr [0x01cb81c8],EDX      ; 004c156e | DAT_01cb81c8
    MOV dword ptr [0x01cb81cc],ECX      ; 004c1574 | DAT_01cb81cc
    PUSH 0x5d8e87                       ; 004c157a
    MOV dword ptr [0x01cb81d0],ECX      ; 004c157f | DAT_01cb81d0
    MOV dword ptr [0x01cb81d4],ESI      ; 004c1585 | DAT_01cb81d4
    PUSH 0x1cb81e0                      ; 004c158b
    MOV dword ptr [0x01cb81d8],ECX      ; 004c1590 | DAT_01cb81d8
    MOV dword ptr [0x01cb81dc],ECX      ; 004c1596 | DAT_01cb81dc
    CALL FUN_0040c450                   ; 004c159c
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004c15a1
    POP ESI                             ; 004c15a4
    RET                                 ; 004c15a5

