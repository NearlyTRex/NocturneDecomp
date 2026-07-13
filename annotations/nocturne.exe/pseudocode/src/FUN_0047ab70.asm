; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ab70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[17]:
;   FUN_0044b850 at 0044b99b
;   FUN_00455270 at 00455281
;   FUN_00455640 at 00455720
;   FUN_00481890 at 004818c7
;   FUN_00482010 at 004820ba
;   FUN_004a0550 at 004a22a8
;   FUN_004b4fe0 at 004b50ea
;   FUN_004b6d80 at 004b7767
;   FUN_004b8590 at 004b85e9
;   FUN_004c1580 at 004c1816
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_01c08b5c
;
; Called Functions:
;   FUN_0047ab90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ab70
        ;   Label: FUN_0047ab70
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047ab71
    PUSH ECX                            ; 0047ab75
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047ab76
    XOR EDX,EDX                         ; 0047ab7a
    PUSH EBX                            ; 0047ab7c
    MOV dword ptr [0x01c08b5c],EDX      ; 0047ab7d | DAT_01c08b5c
    CALL FUN_0047ab90                   ; 0047ab83
        ;   XREF to: 0047ab90 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab90()
    ADD ESP,0x8                         ; 0047ab88
    POP EBX                             ; 0047ab8b
    RET                                 ; 0047ab8c

