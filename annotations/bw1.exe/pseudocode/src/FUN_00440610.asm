; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00440610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[5]:
;   FUN_00441fa0 at 00441fd4
;   FUN_004c65f0 at 004c6eb8
;   FUN_0050fba0 at 005104e3
;   FUN_00593150 at 00593505
;   FUN_005a5550 at 005a6354
;
; Called Functions:
;   FUN_00440640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440610
        ;   Label: FUN_00440610
    PUSH ESI                            ; 00440611
    MOV EDX,dword ptr [ESP + 0x20]      ; 00440612
    PUSH EDX                            ; 00440616
    PUSH dword ptr [ESP + 0x20]         ; 00440617
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0044061b
    PUSH dword ptr [ESP + 0x20]         ; 0044061f
    PUSH ECX                            ; 00440623
    MOV EBX,dword ptr [ESP + 0x20]      ; 00440624
    PUSH EBX                            ; 00440628
    MOV ESI,dword ptr [ESP + 0x20]      ; 00440629
    PUSH ESI                            ; 0044062d
    CALL FUN_00440640                   ; 0044062e
        ;   XREF to: 00440640 (UNCONDITIONAL_CALL)  ; undefined FUN_00440640()
    ADD ESP,0x18                        ; 00440633
    POP ESI                             ; 00440636
    POP EBX                             ; 00440637
    RET                                 ; 00440638

