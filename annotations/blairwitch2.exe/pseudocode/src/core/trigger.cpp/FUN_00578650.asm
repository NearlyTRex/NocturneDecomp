; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_FUN_00578650(int param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x48]:1  local_48
;
; XREF[1]:
;   core_trigger.cpp_CTrigger_archive_FUN_005780e0 at 00578388
;
; Referenced Globals:
;   undefined1* switchdataD_00578628 = 00578675
;   undefined4 DAT_005ecf02
;
; Called Functions:
;   crt_math.c_ceil_FUN_005bae37
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578650
        ;   Label: core_trigger.cpp_FUN_00578650
    PUSH ESI                            ; 00578651
    PUSH EDI                            ; 00578652
    PUSH EBP                            ; 00578653
    MOV EBP,ESP                         ; 00578654
    SUB ESP,0x50                        ; 00578656
    AND ESP,0xfffffff8                  ; 00578659
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057865c
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 0057865f
    CMP EAX,0x9                         ; 00578665
    JA 0x0057870a                       ; 00578668
        ;   XREF to: 0057870a (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x578628]  ; 0057866e | caseD_1 | caseD_9 | switchdataD_00578628
        ;   Label: switchD
    PUSH EBX                            ; 00578675
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00578676
    LEA ESI,[ESP + 0x1c]                ; 0057867c
    LEA EDI,[ESP + 0x4]                 ; 00578680
    CALL dword ptr [EAX + 0x24]         ; 00578684
    MOV ECX,0x6                         ; 00578687
    LEA ESI,[ESP + 0x1c]                ; 0057868c
    ADD ESP,0x4                         ; 00578690
    MOV EAX,ESP                         ; 00578693
    MOVSD.REP ES:EDI,ESI                ; 00578695
    FLD float ptr [EAX + 0xc]           ; 00578697
    FLD float ptr [EAX + 0x10]          ; 0057869a
    FLD float ptr [EAX + 0x14]          ; 0057869d
    LEA EDI,[ESP + 0x30]                ; 005786a0
    LEA ESI,[ESP + 0x3c]                ; 005786a4
    FXCH ST2                            ; 005786a8
    FSUB float ptr [ESP]                ; 005786aa
    FXCH                                ; 005786ad
    FSUB float ptr [ESP + 0x4]          ; 005786af
    FXCH ST2                            ; 005786b3
    FSUB float ptr [ESP + 0x8]          ; 005786b5
    FXCH                                ; 005786b9
    FSTP float ptr [ESP + 0x3c]         ; 005786bb
    FXCH                                ; 005786bf
    FSTP float ptr [ESP + 0x40]         ; 005786c1
    FSTP float ptr [ESP + 0x44]         ; 005786c5
    MOVSD ES:EDI,ESI                    ; 005786c9
    MOVSD ES:EDI,ESI                    ; 005786ca
    MOVSD ES:EDI,ESI                    ; 005786cb
    FLD float ptr [ESP + 0x34]          ; 005786cc
    FMUL ST0                            ; 005786d0
    FLD float ptr [ESP + 0x30]          ; 005786d2
    FMUL ST0                            ; 005786d6
    FADDP                               ; 005786d8
    FLD float ptr [ESP + 0x38]          ; 005786da
    FMUL ST0                            ; 005786de
    FADDP                               ; 005786e0
    FSQRT                               ; 005786e2
    FADD double ptr [0x005ecf02]        ; 005786e4 | DAT_005ecf02
    SUB ESP,0x8                         ; 005786ea
    FSTP double ptr [ESP]               ; 005786ed
    CALL crt_math.c_ceil_FUN_005bae37   ; 005786f0
        ;   XREF to: 005bae37 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_005bae37(double value)
    MOV dword ptr [ESP + 0x50],EAX      ; 005786f5
    MOV dword ptr [ESP + 0x54],EDX      ; 005786f9
    FLD double ptr [ESP + 0x50]         ; 005786fd
    FSTP float ptr [EBX + 0x2b4]        ; 00578701
    ADD ESP,0x8                         ; 00578707
    MOV ESP,EBP                         ; 0057870a
        ;   Label: caseD_2
    POP EBP                             ; 0057870c
    POP EDI                             ; 0057870d
    POP ESI                             ; 0057870e
    POP EBX                             ; 0057870f
    RET                                 ; 00578710

