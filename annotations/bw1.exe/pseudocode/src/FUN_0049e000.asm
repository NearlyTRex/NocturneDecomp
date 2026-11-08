; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049e000(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff8ec
;
; Called Functions:
;   FUN_00468950
;   FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e000
        ;   Label: FUN_0049e000
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049e001
    PUSH EDX                            ; 0049e005
    CALL FUN_005ad4c0                   ; 0049e006
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad4c0()
    ADD ESP,0x4                         ; 0049e00b
    PUSH 0x5dc8ac                       ; 0049e00e
    MOV EBX,EAX                         ; 0049e013
    ADD EAX,0x158                       ; 0049e015
    PUSH EAX                            ; 0049e01a
    MOV dword ptr [EAX + -0x4],0x5ff8f4 ; 0049e01b
    CALL FUN_00468950                   ; 0049e022
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x578],0x41200000 ; 0049e027
    MOV dword ptr [EBX + 0x2d8],0x1     ; 0049e031
    MOV dword ptr [EBX + 0x2dc],0x2     ; 0049e03b
    MOV dword ptr [EBX + 0x2e0],0x1     ; 0049e045
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0049e04f
    MOV dword ptr [EBX + 0x2e8],0x41700000 ; 0049e059
    FLD float ptr [0x005ff8ec]          ; 0049e063 | DAT_005ff8ec
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0049e069
    ADD ESP,0x8                         ; 0049e073
    MOV dword ptr [EBX + 0x57c],0x0     ; 0049e076
    MOV EAX,EBX                         ; 0049e080
    FSTP float ptr [EBX + 0x564]        ; 0049e082
    POP EBX                             ; 0049e088
    RET                                 ; 0049e089

