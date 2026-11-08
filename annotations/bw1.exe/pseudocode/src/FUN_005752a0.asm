; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005752a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0050ba70 at 0050c7b1
;
; Called Functions:
;   FUN_00575120
;   FUN_00575200
;   FUN_00575240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005752a0
        ;   Label: FUN_005752a0
    PUSH EDX                            ; 005752a4
    CALL FUN_00575240                   ; 005752a5
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; undefined FUN_00575240()
    PUSH EAX                            ; 005752aa
    CALL FUN_00575200                   ; 005752ab
        ;   XREF to: 00575200 (UNCONDITIONAL_CALL)  ; undefined FUN_00575200()
    PUSH EAX                            ; 005752b0
    CALL FUN_00575120                   ; 005752b1
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; undefined FUN_00575120()
    ADD ESP,0xc                         ; 005752b6
    RET                                 ; 005752b9

