; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b1480(undefined4 param_1)
;
;
; XREF[56]:
;   FUN_0040f120 at 0040f155
;   FUN_0040f1c0 at 0040f1f5
;   FUN_00412a20 at 00412a55
;   FUN_00414620 at 00414655
;   FUN_00414c10 at 00414c45
;   FUN_00415410 at 00415455
;   FUN_0041a3d0 at 0041a405
;   FUN_0041ee50 at 0041ee85
;   FUN_00422150 at 00422185
;   FUN_0042c000 at 0042c035
;   ... and 46 more
;
; Called Functions:
;   FUN_005b1550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1480
        ;   Label: FUN_005b1480
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1481
    PUSH EBX                            ; 005b1485
    CALL FUN_005b1550                   ; 005b1486
        ;   XREF to: 005b1550 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1550()
    ADD ESP,0x4                         ; 005b148b
    MOV EAX,EBX                         ; 005b148e
    POP EBX                             ; 005b1490
    RET                                 ; 005b1491

