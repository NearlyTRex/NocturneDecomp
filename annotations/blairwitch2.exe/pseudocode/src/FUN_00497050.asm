; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00497050(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_0062208c
;   undefined4 DAT_00622090
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_0046ab50
;   FUN_0046b2b0
;   FUN_0046b350
;   FUN_0046b8d0
;   FUN_0046b8e0
;   FUN_0046ca00
;   FUN_005317c0
;   FUN_0055d723
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497050
        ;   Label: FUN_00497050
    PUSH ESI                            ; 00497051
    PUSH EDI                            ; 00497052
    PUSH EBP                            ; 00497053
    SUB ESP,0x58                        ; 00497054
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00497057
    PUSH ESI                            ; 0049705b
    MOV EDX,dword ptr [0x0060b280]      ; 0049705c | DAT_0060b280
    PUSH EDX                            ; 00497062 | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 00497063
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 00497068
    PUSH 0x0                            ; 0049706b
    LEA EAX,[ESI + 0x5c]                ; 0049706d
    PUSH EAX                            ; 00497070
    MOV ECX,dword ptr [0x0060b280]      ; 00497071 | DAT_0060b280
    PUSH ECX                            ; 00497077 | DAT_01ba5c50
    LEA EBX,[ESP + 0x4c]                ; 00497078
    CALL FUN_0046b350                   ; 0049707c
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 00497081
    LEA EAX,[ESI + 0x80]                ; 00497084
    MOV EDX,dword ptr [0x0060b280]      ; 0049708a | DAT_0060b280
    FLD float ptr [EAX]                 ; 00497090
    FMUL float ptr [0x005f64e4]         ; 00497092 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00497098
    FLD float ptr [EAX + 0x4]           ; 0049709a
    FMUL float ptr [0x005f64e4]         ; 0049709d | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004970a3
    FLD float ptr [EAX + 0x8]           ; 004970a6
    FMUL float ptr [0x005f64e4]         ; 004970a9 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004970af
    LEA EAX,[ESP + 0x40]                ; 004970b2
    PUSH EAX                            ; 004970b6
    MOV EAX,dword ptr [EDX]             ; 004970b7 | DAT_01ba5c50
    PUSH EAX                            ; 004970b9
    CALL FUN_0055d723                   ; 004970ba
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    LEA EBX,[ESP + 0x54]                ; 004970bf
    ADD ESP,0x8                         ; 004970c3
    LEA EAX,[ESI + 0x8c]                ; 004970c6
    MOV EDX,dword ptr [0x0060b280]      ; 004970cc | DAT_0060b280
    FLD float ptr [EAX]                 ; 004970d2
    FMUL float ptr [0x005f64e4]         ; 004970d4 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004970da
    FLD float ptr [EAX + 0x4]           ; 004970dc
    FMUL float ptr [0x005f64e4]         ; 004970df | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004970e5
    FLD float ptr [EAX + 0x8]           ; 004970e8
    FMUL float ptr [0x005f64e4]         ; 004970eb | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004970f1
    LEA EAX,[ESP + 0x4c]                ; 004970f4
    PUSH EAX                            ; 004970f8
    MOV EAX,dword ptr [EDX]             ; 004970f9 | DAT_01ba5c50
    ADD EAX,0x30                        ; 004970fb
    PUSH EAX                            ; 004970fe
    CALL FUN_0055d723                   ; 004970ff
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    LEA EBX,[ESP + 0x3c]                ; 00497104
    ADD ESP,0x8                         ; 00497108
    LEA EAX,[ESI + 0x98]                ; 0049710b
    MOV EDX,dword ptr [0x0060b280]      ; 00497111 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00497117
    FMUL float ptr [0x005f64e4]         ; 00497119 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049711f
    FLD float ptr [EAX + 0x4]           ; 00497121
    FMUL float ptr [0x005f64e4]         ; 00497124 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049712a
    FLD float ptr [EAX + 0x8]           ; 0049712d
    FMUL float ptr [0x005f64e4]         ; 00497130 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00497136
    LEA EAX,[ESP + 0x34]                ; 00497139
    PUSH EAX                            ; 0049713d
    MOV EAX,dword ptr [EDX]             ; 0049713e | DAT_01ba5c50
    ADD EAX,0x60                        ; 00497140
    PUSH EAX                            ; 00497143
    CALL FUN_0055d723                   ; 00497144
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 00497149
    LEA EAX,[ESI + 0x44]                ; 0049714c
    PUSH EAX                            ; 0049714f
    MOV EBX,dword ptr [0x0060b280]      ; 00497150 | DAT_0060b280
    PUSH EBX                            ; 00497156 | DAT_01ba5c50
    MOV EDI,0x3                         ; 00497157
    CALL FUN_0046ca00                   ; 0049715c
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 00497161
    XOR EBP,EBP                         ; 00497164
    MOV dword ptr [ESP + 0x4],EDI       ; 00497166
    MOV dword ptr [ESP + 0x14],EBP      ; 0049716a
    MOV dword ptr [ESP + 0x10],EBP      ; 0049716e
    MOV dword ptr [ESP + 0xc],EBP       ; 00497172
    MOV dword ptr [ESP + 0x8],EBP       ; 00497176
    MOV dword ptr [ESP + 0x18],EBP      ; 0049717a
    MOV EDI,0x1                         ; 0049717e
    MOV EBP,0x2                         ; 00497183
    MOV dword ptr [ESP + 0x1c],EDI      ; 00497188
    MOV dword ptr [ESP + 0x20],EBP      ; 0049718c
    MOV EAX,dword ptr [ESI + 0x40]      ; 00497190
    PUSH EAX                            ; 00497193
    MOV EDX,dword ptr [0x0060b280]      ; 00497194 | DAT_0060b280
    PUSH EDX                            ; 0049719a | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 0049719b
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 004971a0
    LEA EBX,[ESP + 0x28]                ; 004971a3
    MOV EAX,ESI                         ; 004971a7
    FLD float ptr [EAX]                 ; 004971a9
    FMUL float ptr [0x005f64e4]         ; 004971ab | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004971b1
    FLD float ptr [EAX + 0x4]           ; 004971b3
    FMUL float ptr [0x005f64e4]         ; 004971b6 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004971bc
    FLD float ptr [EAX + 0x8]           ; 004971bf
    FMUL float ptr [0x005f64e4]         ; 004971c2 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004971c8
    PUSH 0x3                            ; 004971cb
    PUSH 0x0                            ; 004971cd
    PUSH 0x0                            ; 004971cf
    LEA EAX,[ESP + 0x34]                ; 004971d1
    PUSH EAX                            ; 004971d5
    MOV ECX,dword ptr [0x0061b5a8]      ; 004971d6 | DAT_0061b5a8
    PUSH ECX                            ; 004971dc | DAT_01e661b8
    CALL FUN_005317c0                   ; 004971dd
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005317c0()
    MOV EAX,dword ptr [ESI + 0x68]      ; 004971e2
    MOV [0x0062202c],EAX                ; 004971e5 | DAT_0062202c
    MOV EAX,dword ptr [ESI + 0x74]      ; 004971ea
    MOV [0x00622030],EAX                ; 004971ed | DAT_00622030
    MOV EAX,dword ptr [ESI + 0x6c]      ; 004971f2
    MOV EBX,dword ptr [0x0060b280]      ; 004971f5 | DAT_0060b280
    MOV [0x0062205c],EAX                ; 004971fb | DAT_0062205c
    MOV EAX,dword ptr [ESI + 0x78]      ; 00497200
    ADD ESP,0x14                        ; 00497203
    MOV [0x00622060],EAX                ; 00497206 | DAT_00622060
    MOV EAX,dword ptr [ESI + 0x70]      ; 0049720b
    PUSH 0x0                            ; 0049720e
    MOV [0x0062208c],EAX                ; 00497210 | DAT_0062208c
    MOV EAX,dword ptr [ESI + 0x7c]      ; 00497215
    PUSH EBX                            ; 00497218 | DAT_01ba5c50
    MOV [0x00622090],EAX                ; 00497219 | DAT_00622090
    CALL FUN_0046b8d0                   ; 0049721e
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 00497223
    MOV EAX,ESP                         ; 00497226
    PUSH EAX                            ; 00497228
    MOV ESI,dword ptr [0x0060b280]      ; 00497229 | DAT_0060b280
    PUSH ESI                            ; 0049722f | DAT_01ba5c50
    CALL FUN_0046ab50                   ; 00497230
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ab50()
    ADD ESP,0x8                         ; 00497235
    MOV EDI,dword ptr [0x0060b280]      ; 00497238 | DAT_0060b280
    PUSH EDI                            ; 0049723e | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 0049723f
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00497244
    ADD ESP,0x58                        ; 00497247
    POP EBP                             ; 0049724a
    POP EDI                             ; 0049724b
    POP ESI                             ; 0049724c
    POP EBX                             ; 0049724d
    RET                                 ; 0049724e

