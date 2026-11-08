; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00439150(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine2_005ce095
;   TerminatedCString s_Bip01_Head_005ce0a2
;   TerminatedCString s_head01_005ce0ad
;   TerminatedCString s_neck01_005ce0b4
;   TerminatedCString s_lfrontleg01_005ce0bb
;   TerminatedCString s_rfrontleg01_005ce0c7
;   TerminatedCString s_rbackleg01_005ce0d3
;   TerminatedCString s_lbackleg01_005ce0de
;   TerminatedCString s_torso01_005ce0e9
;   TerminatedCString s_utter01_005ce0f1
;   TerminatedCString s_back01_005ce0f9
;   TerminatedCString s_tail01_005ce100
;
; Called Functions:
;   FUN_00487eb0
;   FUN_00540e80
;   FUN_00543100
;   FUN_00547480
;   FUN_00547810
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439150
        ;   Label: FUN_00439150
    PUSH ESI                            ; 00439151
    MOV EBX,dword ptr [ESP + 0xc]       ; 00439152
    PUSH EDI                            ; 00439156
    LEA ESI,[EBX + 0x2b4]               ; 00439157
    PUSH ESI                            ; 0043915d
    CALL FUN_00547480                   ; 0043915e
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 00439163
    PUSH ESI                            ; 00439166
    CALL FUN_00547890                   ; 00439167
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0043916c
    PUSH 0x1                            ; 0043916f
    PUSH 0x5ce095                       ; 00439171 | = "Bip01 Spine2"
    PUSH EAX                            ; 00439176
    MOV EDI,EAX                         ; 00439177
    CALL FUN_00540e80                   ; 00439179
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0043917e
    PUSH 0x1                            ; 00439181
    PUSH 0x5ce0a2                       ; 00439183 | = "Bip01 Head"
    PUSH EDI                            ; 00439188
    MOV dword ptr [EBX + 0x10af8],EAX   ; 00439189
    CALL FUN_00540e80                   ; 0043918f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 00439194
    PUSH EBX                            ; 00439197
    MOV dword ptr [EBX + 0x10afc],EAX   ; 00439198
    CALL FUN_00487eb0                   ; 0043919e
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 004391a3
    PUSH ESI                            ; 004391a6
    CALL FUN_00547810                   ; 004391a7
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 004391ac
    PUSH 0x1                            ; 004391af
    PUSH 0x5ce0ad                       ; 004391b1 | = "head01"
    PUSH EAX                            ; 004391b6
    MOV ESI,EAX                         ; 004391b7
    CALL FUN_00543100                   ; 004391b9
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004391be
    PUSH 0x1                            ; 004391c1
    PUSH 0x5ce0b4                       ; 004391c3 | = "neck01"
    PUSH ESI                            ; 004391c8
    MOV dword ptr [EBX + 0x10b04],EAX   ; 004391c9
    CALL FUN_00543100                   ; 004391cf
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004391d4
    PUSH 0x1                            ; 004391d7
    PUSH 0x5ce0bb                       ; 004391d9 | = "lfrontleg01"
    PUSH ESI                            ; 004391de
    MOV dword ptr [EBX + 0x10b08],EAX   ; 004391df
    CALL FUN_00543100                   ; 004391e5
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004391ea
    PUSH 0x1                            ; 004391ed
    PUSH 0x5ce0c7                       ; 004391ef | = "rfrontleg01"
    PUSH ESI                            ; 004391f4
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 004391f5
    CALL FUN_00543100                   ; 004391fb
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00439200
    PUSH 0x1                            ; 00439203
    PUSH 0x5ce0d3                       ; 00439205 | = "rbackleg01"
    PUSH ESI                            ; 0043920a
    MOV dword ptr [EBX + 0x10b10],EAX   ; 0043920b
    CALL FUN_00543100                   ; 00439211
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00439216
    MOV dword ptr [EBX + 0x10b14],EAX   ; 00439219
    POP EDI                             ; 0043921f
    PUSH 0x1                            ; 00439220
    PUSH 0x5ce0de                       ; 00439222 | = "lbackleg01"
    PUSH ESI                            ; 00439227
    CALL FUN_00543100                   ; 00439228
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 0043922d
    PUSH 0x1                            ; 00439230
    PUSH 0x5ce0e9                       ; 00439232 | = "torso01"
    PUSH ESI                            ; 00439237
    MOV dword ptr [EBX + 0x10b18],EAX   ; 00439238
    CALL FUN_00543100                   ; 0043923e
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00439243
    PUSH 0x1                            ; 00439246
    PUSH 0x5ce0f1                       ; 00439248 | = "utter01"
    PUSH ESI                            ; 0043924d
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 0043924e
    CALL FUN_00543100                   ; 00439254
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00439259
    PUSH 0x1                            ; 0043925c
    PUSH 0x5ce0f9                       ; 0043925e | = "back01"
    PUSH ESI                            ; 00439263
    MOV dword ptr [EBX + 0x10b20],EAX   ; 00439264
    CALL FUN_00543100                   ; 0043926a
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 0043926f
    PUSH 0x1                            ; 00439272
    PUSH 0x5ce100                       ; 00439274 | = "tail01"
    PUSH ESI                            ; 00439279
    MOV dword ptr [EBX + 0x10b24],EAX   ; 0043927a
    CALL FUN_00543100                   ; 00439280
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00439285
    MOV dword ptr [EBX + 0x10b28],EAX   ; 00439288
    POP ESI                             ; 0043928e
    POP EBX                             ; 0043928f
    RET                                 ; 00439290

