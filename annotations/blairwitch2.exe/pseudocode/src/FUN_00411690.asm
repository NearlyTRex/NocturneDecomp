; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00411690(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2ee0
;   undefined4 DAT_005f2ee4
;
; Called Functions:
;   FUN_00487db0
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411690
        ;   Label: FUN_00411690
    MOV EDX,dword ptr [ESP + 0x8]       ; 00411691
    PUSH EDX                            ; 00411695
    CALL FUN_00487db0                   ; 00411696
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 0041169b
    PUSH 0x5cb71b                       ; 0041169e
    MOV EBX,EAX                         ; 004116a3
    ADD EAX,0x2b4                       ; 004116a5
    PUSH EAX                            ; 004116aa
    MOV dword ptr [EAX + -0x4],0x5f2ef4 ; 004116ab
    CALL FUN_005478b0                   ; 004116b2
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    FLD float ptr [0x005f2ee0]          ; 004116b7 | DAT_005f2ee0
    FLD float ptr [0x005f2ee4]          ; 004116bd | DAT_005f2ee4
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 004116c3
    ADD ESP,0x8                         ; 004116cd
    MOV dword ptr [EBX + 0x3434],0x3fc00000 ; 004116d0
    MOV EAX,EBX                         ; 004116da
    FXCH                                ; 004116dc
    FSTP float ptr [EBX + 0x3438]       ; 004116de
    FSTP float ptr [EBX + 0x343c]       ; 004116e4
    POP EBX                             ; 004116ea
    RET                                 ; 004116eb

