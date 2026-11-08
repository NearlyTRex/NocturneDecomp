; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056be50(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060594c
;   undefined4 DAT_00605950
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056be50
        ;   Label: FUN_0056be50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056be51
    PUSH EDX                            ; 0056be55
    CALL FUN_004a0410                   ; 0056be56
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 0056be5b
    PUSH 0x5f2857                       ; 0056be5e
    MOV EBX,EAX                         ; 0056be63
    ADD EAX,0x158                       ; 0056be65
    PUSH EAX                            ; 0056be6a
    MOV dword ptr [EAX + -0x4],0x605964 ; 0056be6b
    CALL FUN_00569f50                   ; 0056be72
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0xc268],0x0    ; 0056be77
    MOV dword ptr [EBX + 0xc26c],0x42c80000 ; 0056be81
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0056be8b
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 0056be95
    MOV dword ptr [EBX + 0xc29c],0x0    ; 0056be9f
    FLD float ptr [0x0060594c]          ; 0056bea9 | DAT_0060594c
    MOV dword ptr [EBX + 0xc2a0],0x0    ; 0056beaf
    FLD float ptr [0x00605950]          ; 0056beb9 | DAT_00605950
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 0056bebf
    ADD ESP,0x8                         ; 0056bec9
    MOV dword ptr [EBX + 0xc2a8],0x1    ; 0056becc
    MOV EAX,EBX                         ; 0056bed6
    FXCH                                ; 0056bed8
    FSTP float ptr [EBX + 0x2ff4]       ; 0056beda
    FSTP float ptr [EBX + 0x2ff8]       ; 0056bee0
    POP EBX                             ; 0056bee6
    RET                                 ; 0056bee7

