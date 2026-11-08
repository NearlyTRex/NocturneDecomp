; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d37f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0056f6d0 at 0056f9c9
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_dfm_005da4f3
;   undefined4 DAT_005f8860
;   undefined4 DAT_005f8864
;   undefined4 DAT_005f8874
;
; Called Functions:
;   FUN_00487db0
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d37f0
        ;   Label: FUN_004d37f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d37f1
    PUSH EDX                            ; 004d37f5
    CALL FUN_00487db0                   ; 004d37f6
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 004d37fb
    PUSH 0x5da4f3                       ; 004d37fe | = "hotdemon.dfm"
    MOV EBX,EAX                         ; 004d3803
    ADD EAX,0x2b4                       ; 004d3805
    PUSH EAX                            ; 004d380a
    MOV dword ptr [EAX + -0x4],0x5f8874 ; 004d380b | DAT_005f8874
    CALL FUN_005478b0                   ; 004d3812
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    FLD float ptr [0x005f8860]          ; 004d3817 | DAT_005f8860
    FLD float ptr [0x005f8864]          ; 004d381d | DAT_005f8864
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 004d3823
    ADD ESP,0x8                         ; 004d382d
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 004d3830
    MOV EAX,EBX                         ; 004d383a
    FXCH                                ; 004d383c
    FSTP float ptr [EBX + 0x3438]       ; 004d383e
    FSTP float ptr [EBX + 0x343c]       ; 004d3844
    POP EBX                             ; 004d384a
    RET                                 ; 004d384b

