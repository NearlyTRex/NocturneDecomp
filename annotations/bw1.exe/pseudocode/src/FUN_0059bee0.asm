; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059bee0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x48]:1  local_48
;
; XREF[1]:
;   FUN_0059b950 at 0059bbf8
;
; Referenced Globals:
;   undefined1* switchdataD_0059bea8 = 0059bf05
;   undefined4 DAT_005f821c
;
; Called Functions:
;   FUN_005c31f7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bee0
        ;   Label: FUN_0059bee0
    PUSH ESI                            ; 0059bee1
    PUSH EDI                            ; 0059bee2
    PUSH EBP                            ; 0059bee3
    MOV EBP,ESP                         ; 0059bee4
    SUB ESP,0x50                        ; 0059bee6
    AND ESP,0xfffffff8                  ; 0059bee9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059beec
    MOV EAX,dword ptr [EBX + 0x174]     ; 0059beef
    CMP EAX,0xa                         ; 0059bef5
    JA 0x0059bf9a                       ; 0059bef8
        ;   XREF to: 0059bf9a (CONDITIONAL_JUMP)  ; caseD_a
    JMP dword ptr [EAX*0x4 + 0x59bea8]  ; 0059befe | caseD_1 | caseD_a | switchdataD_0059bea8
        ;   Label: switchD
    PUSH EBX                            ; 0059bf05
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059bf06
    LEA ESI,[ESP + 0x1c]                ; 0059bf0c
    LEA EDI,[ESP + 0x4]                 ; 0059bf10
    CALL dword ptr [EAX + 0x1c]         ; 0059bf14
    MOV ECX,0x6                         ; 0059bf17
    LEA ESI,[ESP + 0x1c]                ; 0059bf1c
    ADD ESP,0x4                         ; 0059bf20
    MOV EAX,ESP                         ; 0059bf23
    MOVSD.REP ES:EDI,ESI                ; 0059bf25
    FLD float ptr [EAX + 0xc]           ; 0059bf27
    FLD float ptr [EAX + 0x10]          ; 0059bf2a
    FLD float ptr [EAX + 0x14]          ; 0059bf2d
    LEA EDI,[ESP + 0x30]                ; 0059bf30
    LEA ESI,[ESP + 0x3c]                ; 0059bf34
    FXCH ST2                            ; 0059bf38
    FSUB float ptr [ESP]                ; 0059bf3a
    FXCH                                ; 0059bf3d
    FSUB float ptr [ESP + 0x4]          ; 0059bf3f
    FXCH ST2                            ; 0059bf43
    FSUB float ptr [ESP + 0x8]          ; 0059bf45
    FXCH                                ; 0059bf49
    FSTP float ptr [ESP + 0x3c]         ; 0059bf4b
    FXCH                                ; 0059bf4f
    FSTP float ptr [ESP + 0x40]         ; 0059bf51
    FSTP float ptr [ESP + 0x44]         ; 0059bf55
    MOVSD ES:EDI,ESI                    ; 0059bf59
    MOVSD ES:EDI,ESI                    ; 0059bf5a
    MOVSD ES:EDI,ESI                    ; 0059bf5b
    FLD float ptr [ESP + 0x34]          ; 0059bf5c
    FMUL ST0                            ; 0059bf60
    FLD float ptr [ESP + 0x30]          ; 0059bf62
    FMUL ST0                            ; 0059bf66
    FADDP                               ; 0059bf68
    FLD float ptr [ESP + 0x38]          ; 0059bf6a
    FMUL ST0                            ; 0059bf6e
    FADDP                               ; 0059bf70
    FSQRT                               ; 0059bf72
    FADD double ptr [0x005f821c]        ; 0059bf74 | DAT_005f821c
    SUB ESP,0x8                         ; 0059bf7a
    FSTP double ptr [ESP]               ; 0059bf7d
    CALL FUN_005c31f7                   ; 0059bf80
        ;   XREF to: 005c31f7 (UNCONDITIONAL_CALL)  ; undefined FUN_005c31f7()
    MOV dword ptr [ESP + 0x50],EAX      ; 0059bf85
    MOV dword ptr [ESP + 0x54],EDX      ; 0059bf89
    FLD double ptr [ESP + 0x50]         ; 0059bf8d
    FSTP float ptr [EBX + 0x158]        ; 0059bf91
    ADD ESP,0x8                         ; 0059bf97
    MOV ESP,EBP                         ; 0059bf9a
        ;   Label: caseD_2
    POP EBP                             ; 0059bf9c
    POP EDI                             ; 0059bf9d
    POP ESI                             ; 0059bf9e
    POP EBX                             ; 0059bf9f
    RET                                 ; 0059bfa0

