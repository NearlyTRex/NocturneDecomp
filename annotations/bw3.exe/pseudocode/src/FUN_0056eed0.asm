; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056eed0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x48]:1  local_48
;
; XREF[1]:
;   FUN_0056e940 at 0056ebe8
;
; Referenced Globals:
;   undefined1* switchdataD_0056ee98 = 0056eef5
;   undefined4 DAT_005d678b
;
; Called Functions:
;   FUN_005a6067
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056eed0
        ;   Label: FUN_0056eed0
    PUSH ESI                            ; 0056eed1
    PUSH EDI                            ; 0056eed2
    PUSH EBP                            ; 0056eed3
    MOV EBP,ESP                         ; 0056eed4
    SUB ESP,0x50                        ; 0056eed6
    AND ESP,0xfffffff8                  ; 0056eed9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056eedc
    MOV EAX,dword ptr [EBX + 0x174]     ; 0056eedf
    CMP EAX,0xa                         ; 0056eee5
    JA 0x0056ef8a                       ; 0056eee8
        ;   XREF to: 0056ef8a (CONDITIONAL_JUMP)  ; caseD_a
    JMP dword ptr [EAX*0x4 + 0x56ee98]  ; 0056eeee | caseD_1 | caseD_a | switchdataD_0056ee98
        ;   Label: switchD
    PUSH EBX                            ; 0056eef5
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056eef6
    LEA ESI,[ESP + 0x1c]                ; 0056eefc
    LEA EDI,[ESP + 0x4]                 ; 0056ef00
    CALL dword ptr [EAX + 0x1c]         ; 0056ef04
    MOV ECX,0x6                         ; 0056ef07
    LEA ESI,[ESP + 0x1c]                ; 0056ef0c
    ADD ESP,0x4                         ; 0056ef10
    MOV EAX,ESP                         ; 0056ef13
    MOVSD.REP ES:EDI,ESI                ; 0056ef15
    FLD float ptr [EAX + 0xc]           ; 0056ef17
    FLD float ptr [EAX + 0x10]          ; 0056ef1a
    FLD float ptr [EAX + 0x14]          ; 0056ef1d
    LEA EDI,[ESP + 0x30]                ; 0056ef20
    LEA ESI,[ESP + 0x3c]                ; 0056ef24
    FXCH ST2                            ; 0056ef28
    FSUB float ptr [ESP]                ; 0056ef2a
    FXCH                                ; 0056ef2d
    FSUB float ptr [ESP + 0x4]          ; 0056ef2f
    FXCH ST2                            ; 0056ef33
    FSUB float ptr [ESP + 0x8]          ; 0056ef35
    FXCH                                ; 0056ef39
    FSTP float ptr [ESP + 0x3c]         ; 0056ef3b
    FXCH                                ; 0056ef3f
    FSTP float ptr [ESP + 0x40]         ; 0056ef41
    FSTP float ptr [ESP + 0x44]         ; 0056ef45
    MOVSD ES:EDI,ESI                    ; 0056ef49
    MOVSD ES:EDI,ESI                    ; 0056ef4a
    MOVSD ES:EDI,ESI                    ; 0056ef4b
    FLD float ptr [ESP + 0x34]          ; 0056ef4c
    FMUL ST0                            ; 0056ef50
    FLD float ptr [ESP + 0x30]          ; 0056ef52
    FMUL ST0                            ; 0056ef56
    FADDP                               ; 0056ef58
    FLD float ptr [ESP + 0x38]          ; 0056ef5a
    FMUL ST0                            ; 0056ef5e
    FADDP                               ; 0056ef60
    FSQRT                               ; 0056ef62
    FADD double ptr [0x005d678b]        ; 0056ef64 | DAT_005d678b
    SUB ESP,0x8                         ; 0056ef6a
    FSTP double ptr [ESP]               ; 0056ef6d
    CALL FUN_005a6067                   ; 0056ef70
        ;   XREF to: 005a6067 (UNCONDITIONAL_CALL)  ; undefined FUN_005a6067()
    MOV dword ptr [ESP + 0x50],EAX      ; 0056ef75
    MOV dword ptr [ESP + 0x54],EDX      ; 0056ef79
    FLD double ptr [ESP + 0x50]         ; 0056ef7d
    FSTP float ptr [EBX + 0x158]        ; 0056ef81
    ADD ESP,0x8                         ; 0056ef87
    MOV ESP,EBP                         ; 0056ef8a
        ;   Label: caseD_2
    POP EBP                             ; 0056ef8c
    POP EDI                             ; 0056ef8d
    POP ESI                             ; 0056ef8e
    POP EBX                             ; 0056ef8f
    RET                                 ; 0056ef90

