; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00576130(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005eccd0
;   undefined4 DAT_005eccd4
;
; Called Functions:
;   FUN_0040cf60
;   FUN_0054fcd0
;   FUN_005503e0
;   FUN_00550450
;   FUN_005504d0
;   FUN_00550bf0
;   FUN_00550c30
;   FUN_00550f50
;   FUN_00551050
;   FUN_00551440
;   FUN_005532f0
;   FUN_00589c80
;   FUN_005b7790
;   FUN_005b7ff0
;   FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576130
        ;   Label: FUN_00576130
    PUSH ESI                            ; 00576131
    PUSH EDI                            ; 00576132
    PUSH EBP                            ; 00576133
    MOV EBP,ESP                         ; 00576134
    SUB ESP,0x1dc                       ; 00576136
    AND ESP,0xfffffff8                  ; 0057613c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057613f
    PUSH dword ptr [EBP + 0x18]         ; 00576142
    PUSH EBX                            ; 00576145
    CALL FUN_00589c80                   ; 00576146
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00589c80()
    MOV EDX,dword ptr [EBX + 0x6d4]     ; 0057614b
    ADD ESP,0x8                         ; 00576151
    TEST EDX,EDX                        ; 00576154
    JLE 0x00576206                      ; 00576156
        ;   XREF to: 00576206 (CONDITIONAL_JUMP)  ; LAB_00576206
    PUSH 0x3f8e38e4                     ; 0057615c
    LEA EAX,[EDX + -0x1]                ; 00576161
    PUSH 0x3f666666                     ; 00576164
    MOV dword ptr [EBX + 0x6d4],EAX     ; 00576169
    CALL FUN_0040cf60                   ; 0057616f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00576174
    FLD float ptr [ESP + 0x1e0]         ; 0057617b
    ADD ESP,0x8                         ; 00576182
    MOV EDX,dword ptr [EBX + 0x6d8]     ; 00576185
    FSTP float ptr [ESP + 0xc]          ; 0057618b
    PUSH dword ptr [ESP + 0xc]          ; 0057618f
    PUSH EDX                            ; 00576193
    CALL FUN_00550f50                   ; 00576194
        ;   XREF to: 00550f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00550f50()
    ADD ESP,0x8                         ; 00576199
    TEST EAX,EAX                        ; 0057619c
    JZ 0x005761a7                       ; 0057619e
        ;   XREF to: 005761a7 (CONDITIONAL_JUMP)  ; LAB_005761a7
    MOV ESP,EBP                         ; 005761a0
    POP EBP                             ; 005761a2
    POP EDI                             ; 005761a3
    POP ESI                             ; 005761a4
    POP EBX                             ; 005761a5
    RET                                 ; 005761a6
    MOV ECX,dword ptr [EBX + 0x6d8]     ; 005761a7
        ;   Label: LAB_005761a7
    PUSH ECX                            ; 005761ad
    CALL FUN_00551050                   ; 005761ae
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 005761b3
    FLD float ptr [ESP + 0xc]           ; 005761b6
    SUB ESP,0x8                         ; 005761ba
    FSTP double ptr [ESP]               ; 005761bd
    PUSH 0x5eccac                       ; 005761c0
    LEA EAX,[ESP + 0x170]               ; 005761c5
    PUSH EAX                            ; 005761cc
    CALL FUN_005b7790                   ; 005761cd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 005761d2
    MOV ESI,dword ptr [EBX + 0x6dc]     ; 005761d5
    PUSH ESI                            ; 005761db
    CALL FUN_00551050                   ; 005761dc
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 005761e1
    LEA EAX,[ESP + 0x164]               ; 005761e4
    PUSH EAX                            ; 005761eb
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 005761ec
    PUSH EBX                            ; 005761f2
    CALL dword ptr [EDX + 0x38]         ; 005761f3
    ADD ESP,0x8                         ; 005761f6
    MOV dword ptr [EBX + 0x6d8],EAX     ; 005761f9
    MOV ESP,EBP                         ; 005761ff
    POP EBP                             ; 00576201
    POP EDI                             ; 00576202
    POP ESI                             ; 00576203
    POP EBX                             ; 00576204
    RET                                 ; 00576205
    PUSH 0x2                            ; 00576206
        ;   Label: LAB_00576206
    MOV ECX,dword ptr [EBX + 0x6d8]     ; 00576208
    PUSH ECX                            ; 0057620e
    CALL FUN_00550c30                   ; 0057620f
        ;   XREF to: 00550c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00550c30()
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00576214
    MOV dword ptr [ESP + 0x1dc],EDX     ; 0057621b
    FLD double ptr [ESP + 0x1d8]        ; 00576222
    ADD ESP,0x8                         ; 00576229
    FST float ptr [ESP + 0x10]          ; 0057622c
    FLDZ                                ; 00576230
    FCOMPP                              ; 00576232
    FNSTSW AX                           ; 00576234
    SAHF                                ; 00576236
    JA 0x00576350                       ; 00576237
        ;   XREF to: 00576350 (CONDITIONAL_JUMP)  ; LAB_00576350
    CALL FUN_005532f0                   ; 0057623d
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
    FLD float ptr [ESP + 0x10]          ; 00576242
    FMUL float ptr [0x005eccd0]         ; 00576246 | DAT_005eccd0
    FST float ptr [ESP + 0x10]          ; 0057624c
    FSTP double ptr [ESP + 0x1c8]       ; 00576250
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 00576257
    PUSH EDI                            ; 0057625e
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0057625f
    PUSH EAX                            ; 00576266
    CALL FUN_005b84d0                   ; 00576267
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b84d0()
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0057626c
    MOV dword ptr [ESP + 0x1dc],EDX     ; 00576273
    FLD double ptr [ESP + 0x1d8]        ; 0057627a
    ADD ESP,0x8                         ; 00576281
    LEA EAX,[ESP + 0x14]                ; 00576284
    FSUBR double ptr [ESP + 0x1c8]      ; 00576288
    PUSH EAX                            ; 0057628f
    FSTP float ptr [ESP + 0x14]         ; 00576290
    CALL FUN_0054fcd0                   ; 00576294
        ;   XREF to: 0054fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054fcd0()
    ADD ESP,0x4                         ; 00576299
    LEA EAX,[ESP + 0x14]                ; 0057629c
    PUSH EAX                            ; 005762a0
    MOV EDX,dword ptr [EBX + 0x6d8]     ; 005762a1
    PUSH EDX                            ; 005762a7
    CALL FUN_00550bf0                   ; 005762a8
        ;   XREF to: 00550bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00550bf0()
    ADD ESP,0x8                         ; 005762ad
    TEST EAX,EAX                        ; 005762b0
    JZ 0x00576335                       ; 005762b2
        ;   XREF to: 00576335 (CONDITIONAL_JUMP)  ; LAB_00576335
    MOV EAX,dword ptr [ESP + 0x124]     ; 005762b8
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005762bf
    FILD dword ptr [ESP + 0x1d8]        ; 005762c6
    FMUL float ptr [ESP + 0x10]         ; 005762cd
    FMUL float ptr [0x005eccd4]         ; 005762d1 | DAT_005eccd4
    CALL FUN_005b7ff0                   ; 005762d7
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 005762dc
    CALL FUN_00550450                   ; 005762e0
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
    MOV EAX,dword ptr [ESP + 0x8]       ; 005762e5
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005762e9
    FLDZ                                ; 005762f0
    FILD dword ptr [ESP + 0x1d8]        ; 005762f2
    FSTP double ptr [ESP]               ; 005762f9
    FCOMP double ptr [ESP]              ; 005762fc
    FNSTSW AX                           ; 005762ff
    SAHF                                ; 00576301
    JNC 0x00576318                      ; 00576302
        ;   XREF to: 00576318 (CONDITIONAL_JUMP)  ; LAB_00576318
    PUSH 0x0                            ; 00576304
    MOV ECX,dword ptr [ESP + 0x8]       ; 00576306
    PUSH ECX                            ; 0057630a
    MOV ESI,dword ptr [ESP + 0x8]       ; 0057630b
    PUSH ESI                            ; 0057630f
    CALL FUN_005503e0                   ; 00576310
        ;   XREF to: 005503e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005503e0()
    ADD ESP,0xc                         ; 00576315
    PUSH 0x5eccc2                       ; 00576318
        ;   Label: LAB_00576318
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057631d
    PUSH EBX                            ; 00576323
    CALL dword ptr [EAX + 0x34]         ; 00576324
    ADD ESP,0x8                         ; 00576327
    MOV dword ptr [EBX + 0x6dc],EAX     ; 0057632a
    CALL FUN_005504d0                   ; 00576330
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
    MOV EDI,dword ptr [EBX + 0x6d8]     ; 00576335
        ;   Label: LAB_00576335
    PUSH EDI                            ; 0057633b
    CALL FUN_00551050                   ; 0057633c
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 00576341
    CALL FUN_00551440                   ; 00576344
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    MOV ESP,EBP                         ; 00576349
    POP EBP                             ; 0057634b
    POP EDI                             ; 0057634c
    POP ESI                             ; 0057634d
    POP EBX                             ; 0057634e
    RET                                 ; 0057634f
    MOV ESI,dword ptr [EBX + 0x6d8]     ; 00576350
        ;   Label: LAB_00576350
    PUSH ESI                            ; 00576356
    CALL FUN_00551050                   ; 00576357
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0057635c
    MOV ESP,EBP                         ; 0057635f
    POP EBP                             ; 00576361
    POP EDI                             ; 00576362
    POP ESI                             ; 00576363
    POP EBX                             ; 00576364
    RET                                 ; 00576365

