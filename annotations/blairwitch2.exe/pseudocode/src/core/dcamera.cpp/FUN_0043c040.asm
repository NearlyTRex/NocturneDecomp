; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043c040(int param_1)
;
;
; XREF[2]:
;   FUN_0052ddf0 at 0052e466
;   FUN_0052f2a0 at 0052f6f9
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005ce37c
;   TerminatedCString s_CDemonCamera_beginBackgr_005ce390
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01467158
;   undefined4 DAT_0146715c
;   undefined4 DAT_01467160
;   undefined4 DAT_01467164
;   undefined4 DAT_01467168
;   undefined4 DAT_01468424
;   undefined4 DAT_01468428
;   undefined4 DAT_0146842c
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c2a38c
;   ... and 11 more
;
; Called Functions:
;   FUN_0046afb0
;   FUN_0046b060
;   FUN_0046b4b0
;   FUN_0046b710
;   FUN_0046cca0
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c040
        ;   Label: FUN_0043c040
    PUSH ESI                            ; 0043c041
    PUSH EDI                            ; 0043c042
    PUSH EBP                            ; 0043c043
    MOV EBX,dword ptr [ESP + 0x14]      ; 0043c044
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0043c048
    JZ 0x0043c1cf                       ; 0043c04f
        ;   XREF to: 0043c1cf (CONDITIONAL_JUMP)  ; LAB_0043c1cf
    MOV EDI,dword ptr [0x01467158]      ; 0043c055 | DAT_01467158
        ;   Label: LAB_0043c055
    INC EDI                             ; 0043c05b
    MOV dword ptr [0x01467158],EDI      ; 0043c05c | DAT_01467158
    CMP EDI,0x1                         ; 0043c062
    JNZ 0x0043c1ca                      ; 0043c065
        ;   XREF to: 0043c1ca (CONDITIONAL_JUMP)  ; LAB_0043c1ca
    MOV ESI,0x1c2a38c                   ; 0043c06b
    MOV EDI,0x1467164                   ; 0043c070
    MOV EDX,0x8                         ; 0043c075
    MOV EAX,[0x006141c0]                ; 0043c07a | DAT_006141c0
    MOV ECX,dword ptr [0x006141bc]      ; 0043c07f | DAT_006141bc
    MOV [0x0146715c],EAX                ; 0043c085 | DAT_0146715c
    MOV EAX,[0x01c37788]                ; 0043c08a | DAT_01c37788
    SHL ECX,0x2                         ; 0043c08f
    MOV [0x01467160],EAX                ; 0043c092 | DAT_01467160
    PUSH EDI                            ; 0043c097 | DAT_01467164
    MOV EAX,ECX                         ; 0043c098
    SHR ECX,0x2                         ; 0043c09a
    MOVSD.REP ES:EDI,ESI                ; 0043c09d | DAT_01c2a38c | DAT_01467164 | DAT_01c2a390
    MOV CL,AL                           ; 0043c09f
    AND CL,0x3                          ; 0043c0a1
    MOVSB.REP ES:EDI,ESI                ; 0043c0a4 | DAT_01c2a390 | DAT_01467168
    POP EDI                             ; 0043c0a6
    MOV ESI,0x20                        ; 0043c0a7
    MOV EAX,[0x01c35814]                ; 0043c0ac | DAT_01c35814
    MOV EBP,dword ptr [EBX + 0x148]     ; 0043c0b1
    XOR ECX,ECX                         ; 0043c0b7
    MOV [0x01468424],EAX                ; 0043c0b9 | DAT_01468424
    MOV dword ptr [0x006141c0],ESI      ; 0043c0be | DAT_006141c0
    MOV EAX,[0x01c35820]                ; 0043c0c4 | DAT_01c35820
    MOV dword ptr [0x01c37788],ECX      ; 0043c0c9 | DAT_01c37788
    MOV [0x01468428],EAX                ; 0043c0cf | DAT_01468428
    MOV EAX,[0x01c3582c]                ; 0043c0d4 | DAT_01c3582c
    MOV dword ptr [0x01c35820],EDX      ; 0043c0d9 | DAT_01c35820
    MOV [0x0146842c],EAX                ; 0043c0df | DAT_0146842c
    MOV EAX,0x10                        ; 0043c0e4
    MOV dword ptr [0x01c3582c],ECX      ; 0043c0e9 | DAT_01c3582c
    MOV [0x01c35814],EAX                ; 0043c0ef | DAT_01c35814
    XOR EAX,EAX                         ; 0043c0f4
    TEST EBP,EBP                        ; 0043c0f6
    JLE 0x0043c130                      ; 0043c0f8
        ;   XREF to: 0043c130 (CONDITIONAL_JUMP)  ; LAB_0043c130
    XOR EDX,EDX                         ; 0043c0fa
    MOV ECX,dword ptr [EBX + 0x144]     ; 0043c0fc
        ;   Label: LAB_0043c0fc
    IMUL ECX,EAX                        ; 0043c102
    LEA ESI,[ECX*0x4 + 0x0]             ; 0043c105
    MOV ECX,dword ptr [EBX + 0x158]     ; 0043c10c
    ADD ECX,ESI                         ; 0043c112
    MOV dword ptr [EDX + 0x1c2a38c],ECX ; 0043c114 | DAT_01c2a38c | DAT_01c2a390
    INC EAX                             ; 0043c11a
    MOV ECX,dword ptr [EBX + 0x148]     ; 0043c11b
    ADD EDX,0x4                         ; 0043c121
    CMP EAX,ECX                         ; 0043c124
    JL 0x0043c0fc                       ; 0043c126
        ;   XREF to: 0043c0fc (CONDITIONAL_JUMP)  ; LAB_0043c0fc
    LEA EAX,[EAX]                       ; 0043c128
    MOV EDX,EDX                         ; 0043c12e
    MOV EAX,dword ptr [EBX + 0x148]     ; 0043c130
        ;   Label: LAB_0043c130
    DEC EAX                             ; 0043c136
    PUSH EAX                            ; 0043c137
    MOV EAX,dword ptr [EBX + 0x144]     ; 0043c138
    DEC EAX                             ; 0043c13e
    PUSH EAX                            ; 0043c13f
    PUSH 0x0                            ; 0043c140
    PUSH 0x0                            ; 0043c142
    MOV ESI,dword ptr [0x0060b280]      ; 0043c144 | DAT_0060b280
    PUSH ESI                            ; 0043c14a | DAT_01ba5c50
    CALL FUN_0046b710                   ; 0043c14b
        ;   XREF to: 0046b710 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b710()
    MOV EAX,[0x01c35e38]                ; 0043c150 | DAT_01c35e38
    MOV EDI,dword ptr [0x0060b280]      ; 0043c155 | DAT_0060b280
    MOV dword ptr [EBX + 0x1c0],EAX     ; 0043c15b
    MOV EAX,[0x01c35e3c]                ; 0043c161 | DAT_01c35e3c
    ADD ESP,0x14                        ; 0043c166
    MOV dword ptr [EBX + 0x1c4],EAX     ; 0043c169
    MOV EAX,[0x01c35e40]                ; 0043c16f | DAT_01c35e40
    PUSH 0x1468440                      ; 0043c174
    MOV dword ptr [EBX + 0x1c8],EAX     ; 0043c179
    MOV EAX,[0x01c35e44]                ; 0043c17f | DAT_01c35e44
    PUSH EDI                            ; 0043c184 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x1cc],EAX     ; 0043c185
    CALL FUN_0046cca0                   ; 0043c18b
        ;   XREF to: 0046cca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cca0()
    ADD ESP,0x8                         ; 0043c190
    LEA EAX,[EBX + 0x4]                 ; 0043c193
    PUSH EAX                            ; 0043c196
    MOV EBP,dword ptr [0x0060b280]      ; 0043c197 | DAT_0060b280
    PUSH EBP                            ; 0043c19d | DAT_01ba5c50
    CALL FUN_0046afb0                   ; 0043c19e
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046afb0()
    ADD ESP,0x8                         ; 0043c1a3
    MOV EAX,[0x0060b280]                ; 0043c1a6 | DAT_0060b280
    PUSH dword ptr [EBX + 0x38]         ; 0043c1ab
    PUSH EAX                            ; 0043c1ae | DAT_01ba5c50
    CALL FUN_0046b4b0                   ; 0043c1af
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b4b0()
    ADD ESP,0x8                         ; 0043c1b4
    ADD EBX,0x10                        ; 0043c1b7
    PUSH EBX                            ; 0043c1ba
    MOV EDX,dword ptr [0x0060b280]      ; 0043c1bb | DAT_0060b280
    PUSH EDX                            ; 0043c1c1 | DAT_01ba5c50
    CALL FUN_0046b060                   ; 0043c1c2
        ;   XREF to: 0046b060 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b060()
    ADD ESP,0x8                         ; 0043c1c7
    POP EBP                             ; 0043c1ca
        ;   Label: LAB_0043c1ca
    POP EDI                             ; 0043c1cb
    POP ESI                             ; 0043c1cc
    POP EBX                             ; 0043c1cd
    RET                                 ; 0043c1ce
    MOV ECX,0x5ce37c                    ; 0043c1cf | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0043c1cf
    MOV ESI,0x432                       ; 0043c1d4
    PUSH 0x5ce390                       ; 0043c1d9 | = "CDemonCamera::beginBackgroundScene - ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0043c1de | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0043c1e4 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043c1ea
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0043c1ef
    JMP 0x0043c055                      ; 0043c1f2
        ;   XREF to: 0043c055 (UNCONDITIONAL_JUMP)  ; LAB_0043c055

