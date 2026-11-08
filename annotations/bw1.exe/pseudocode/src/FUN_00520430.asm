; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00520430(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_moloch_h_dfm_005ea1ef
;   TerminatedCString s_moloch_d_dfm_005ea1fc
;   TerminatedCString s_moloch_d_dfm_005ea209
;   TerminatedCString s_moloch_h_dfm_005ea216
;
; Called Functions:
;   FUN_004eaa10
;   FUN_005230c0
;   FUN_00523310
;   FUN_00569b20
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520430
        ;   Label: FUN_00520430
    PUSH ESI                            ; 00520431
    PUSH EDI                            ; 00520432
    MOV EBX,dword ptr [ESP + 0x10]      ; 00520433
    LEA ESI,[EBX + 0x1ffac]             ; 00520437
    MOV EDX,dword ptr [EBX + 0x22350]   ; 0052043d
    LEA EAX,[EBX + 0x158]               ; 00520443
    TEST EDX,EDX                        ; 00520449
    JZ 0x005204c5                       ; 0052044b
        ;   XREF to: 005204c5 (CONDITIONAL_JUMP)  ; LAB_005204c5
    PUSH 0x5ea1ef                       ; 0052044d | = "moloch_h.dfm"
    PUSH EAX                            ; 00520452
    CALL FUN_00569f50                   ; 00520453
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 00520458
    PUSH 0x5ea1fc                       ; 0052045b | = "moloch_d.dfm"
    PUSH ESI                            ; 00520460
        ;   Label: LAB_00520460
    CALL FUN_00569f50                   ; 00520461
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 00520466
    LEA ESI,[EBX + 0x158]               ; 00520469
    PUSH ESI                            ; 0052046f
    CALL FUN_00569b20                   ; 00520470
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 00520475
    LEA EDI,[EBX + 0x1ffac]             ; 00520478
    PUSH EDI                            ; 0052047e
    CALL FUN_00569b20                   ; 0052047f
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 00520484
    PUSH ESI                            ; 00520487
    PUSH 0x0                            ; 00520488
    LEA ESI,[EBX + 0x22424]             ; 0052048a
    PUSH ESI                            ; 00520490
    MOV dword ptr [EBX + 0x2304c],0x0   ; 00520491
    CALL FUN_005230c0                   ; 0052049b
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005230c0()
    ADD ESP,0xc                         ; 005204a0
    PUSH EDI                            ; 005204a3
    PUSH 0x1                            ; 005204a4
    PUSH ESI                            ; 005204a6
    CALL FUN_005230c0                   ; 005204a7
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005230c0()
    ADD ESP,0xc                         ; 005204ac
    PUSH ESI                            ; 005204af
    CALL FUN_00523310                   ; 005204b0
        ;   XREF to: 00523310 (UNCONDITIONAL_CALL)  ; undefined FUN_00523310()
    ADD ESP,0x4                         ; 005204b5
    PUSH EBX                            ; 005204b8
    CALL FUN_004eaa10                   ; 005204b9
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; undefined FUN_004eaa10()
    ADD ESP,0x4                         ; 005204be
    POP EDI                             ; 005204c1
    POP ESI                             ; 005204c2
    POP EBX                             ; 005204c3
    RET                                 ; 005204c4
    PUSH 0x5ea209                       ; 005204c5 | = "moloch_d.dfm"
        ;   Label: LAB_005204c5
    PUSH EAX                            ; 005204ca
    CALL FUN_00569f50                   ; 005204cb
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 005204d0
    PUSH 0x5ea216                       ; 005204d3 | = "moloch_h.dfm"
    JMP 0x00520460                      ; 005204d8
        ;   XREF to: 00520460 (UNCONDITIONAL_JUMP)  ; LAB_00520460

