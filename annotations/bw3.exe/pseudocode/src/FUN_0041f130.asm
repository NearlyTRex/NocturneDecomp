; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041f130(int param_1)
;
;
; XREF[1]:
;   FUN_004203f0 at 004203ff
;
; Called Functions:
;   FUN_00408890
;   FUN_0041f1e0
;   FUN_00462580
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f130
        ;   Label: FUN_0041f130
    PUSH ESI                            ; 0041f131
    SUB ESP,0x4                         ; 0041f132
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041f135
    PUSH EBX                            ; 0041f139
    CALL FUN_00408890                   ; 0041f13a
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0041f13f
    LEA ESI,[EBX + 0x158]               ; 0041f142
    PUSH ESI                            ; 0041f148
    CALL FUN_00462580                   ; 0041f149
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0041f14e
    PUSH ESI                            ; 0041f151
    CALL FUN_004625a0                   ; 0041f152
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    FLD float ptr [EBX + 0x310]         ; 0041f157
    FLDZ                                ; 0041f15d
    ADD ESP,0x4                         ; 0041f15f
    MOV ESI,dword ptr [EAX + 0x100]     ; 0041f162
    FCOMPP                              ; 0041f168
    FNSTSW AX                           ; 0041f16a
    SAHF                                ; 0041f16c
    JA 0x0041f1ba                       ; 0041f16d
        ;   XREF to: 0041f1ba (CONDITIONAL_JUMP)  ; LAB_0041f1ba
    MOV dword ptr [ESP],ESI             ; 0041f16f
        ;   Label: LAB_0041f16f
    FILD dword ptr [ESP]                ; 0041f172
    FCOMP float ptr [EBX + 0x310]       ; 0041f175
    FNSTSW AX                           ; 0041f17b
    SAHF                                ; 0041f17d
    JA 0x0041f18d                       ; 0041f17e
        ;   XREF to: 0041f18d (CONDITIONAL_JUMP)  ; LAB_0041f18d
    DEC ESI                             ; 0041f180
    MOV dword ptr [ESP],ESI             ; 0041f181
    FILD dword ptr [ESP]                ; 0041f184
    FSTP float ptr [EBX + 0x310]        ; 0041f187
    CMP dword ptr [EBX + 0x5e8],0x0     ; 0041f18d
        ;   Label: LAB_0041f18d
    JL 0x0041f1c6                       ; 0041f194
        ;   XREF to: 0041f1c6 (CONDITIONAL_JUMP)  ; LAB_0041f1c6
    MOV dword ptr [EBX + 0x6dc],0x0     ; 0041f196
        ;   Label: LAB_0041f196
    MOV dword ptr [EBX + 0x6e4],0x10000 ; 0041f1a0
    MOV dword ptr [EBX + 0x328],0x0     ; 0041f1aa
    ADD ESP,0x4                         ; 0041f1b4
    POP ESI                             ; 0041f1b7
    POP EBX                             ; 0041f1b8
    RET                                 ; 0041f1b9
    MOV dword ptr [EBX + 0x310],0x0     ; 0041f1ba
        ;   Label: LAB_0041f1ba
    JMP 0x0041f16f                      ; 0041f1c4
        ;   XREF to: 0041f16f (UNCONDITIONAL_JUMP)  ; LAB_0041f16f
    PUSH EBX                            ; 0041f1c6
        ;   Label: LAB_0041f1c6
    CALL FUN_0041f1e0                   ; 0041f1c7
        ;   XREF to: 0041f1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041f1e0()
    ADD ESP,0x4                         ; 0041f1cc
    JMP 0x0041f196                      ; 0041f1cf
        ;   XREF to: 0041f196 (UNCONDITIONAL_JUMP)  ; LAB_0041f196

