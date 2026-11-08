; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f5130(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004f5370 at 004f537a
;   FUN_004f53b0 at 004f53ba
;
; Referenced Globals:
;   undefined4 DAT_005e29c0
;   undefined4 DAT_005e29c8
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d80d50
;   undefined4 DAT_01d80d54
;   undefined4 DAT_01d80d58
;   undefined4 DAT_01d80d5c
;   undefined4 DAT_01d80d60
;   undefined4 DAT_01d80d64
;   undefined4 DAT_01d80d68
;   undefined4 DAT_01d80ed4
;   undefined4 DAT_01d80ed8
;   undefined4 DAT_01d80edc
;   undefined4 DAT_01d80ee0
;   ... and 3 more
;
; Called Functions:
;   FUN_004e5570
;   FUN_004f3e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5130
        ;   Label: FUN_004f5130
    PUSH ESI                            ; 004f5131
    PUSH EDI                            ; 004f5132
    PUSH EBP                            ; 004f5133
    SUB ESP,0x4                         ; 004f5134
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f5137
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f513b
    XOR EBP,EBP                         ; 004f513e
    MOV [0x01d80d50],EAX                ; 004f5140 | DAT_01d80d50
    TEST EAX,EAX                        ; 004f5145
    JLE 0x004f51a0                      ; 004f5147
        ;   XREF to: 004f51a0 (CONDITIONAL_JUMP)  ; LAB_004f51a0
    MOV EDX,0x1d80d54                   ; 004f5149
    MOV ESI,EDI                         ; 004f514e
    MOV EBX,dword ptr [ESI + 0x18]      ; 004f5150
        ;   Label: LAB_004f5150
    IMUL EBX,EBX,0x30                   ; 004f5153
    MOV EAX,[0x005f2afc]                ; 004f5156 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 004f515b | DAT_01bdd7e4
    ADD ESI,0x4                         ; 004f515d
    ADD EAX,EBX                         ; 004f5160
    MOV EBX,EDX                         ; 004f5162
    INC EBP                             ; 004f5164
    FILD dword ptr [EAX]                ; 004f5165
    FMUL float ptr [0x005e29c8]         ; 004f5167 | DAT_005e29c8
    FSTP float ptr [EBX]                ; 004f516d | DAT_01d80d54 | DAT_01d80d60
    FILD dword ptr [EAX + 0x4]          ; 004f516f
    FMUL float ptr [0x005e29c8]         ; 004f5172 | DAT_005e29c8
    FSTP float ptr [EBX + 0x4]          ; 004f5178 | DAT_01d80d58 | DAT_01d80d64
    FILD dword ptr [EAX + 0x8]          ; 004f517b
    FMUL float ptr [0x005e29c8]         ; 004f517e | DAT_005e29c8
    FSTP float ptr [EBX + 0x8]          ; 004f5184 | DAT_01d80d5c | DAT_01d80d68
    MOV ECX,dword ptr [EDI + 0x4]       ; 004f5187
    ADD EDX,0xc                         ; 004f518a
    CMP EBP,ECX                         ; 004f518d
    JL 0x004f5150                       ; 004f518f
        ;   XREF to: 004f5150 (CONDITIONAL_JUMP)  ; LAB_004f5150
    LEA EAX,[EAX]                       ; 004f5191
    LEA EDX,[EDX]                       ; 004f5197
    LEA EAX,[EAX]                       ; 004f519d
    PUSH 0x1d80ed4                      ; 004f51a0 | DAT_01d80ed4
        ;   Label: LAB_004f51a0
    PUSH 0x1d80ed8                      ; 004f51a5 | DAT_01d80ed8
    MOV EBX,dword ptr [0x01d80d50]      ; 004f51aa | DAT_01d80d50
    PUSH EBX                            ; 004f51b0
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f51b1
    PUSH 0x1d80d54                      ; 004f51b5 | DAT_01d80d54
    ADD EAX,0x98                        ; 004f51ba
    PUSH EAX                            ; 004f51bf
    CALL FUN_004f3e90                   ; 004f51c0
        ;   XREF to: 004f3e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3e90()
    MOV ESI,dword ptr [0x01d80ed4]      ; 004f51c5 | DAT_01d80ed4
    ADD ESP,0x14                        ; 004f51cb
    CMP ESI,0x3                         ; 004f51ce
    JGE 0x004f51dd                      ; 004f51d1
        ;   XREF to: 004f51dd (CONDITIONAL_JUMP)  ; LAB_004f51dd
    XOR EAX,EAX                         ; 004f51d3
        ;   Label: LAB_004f51d3
    ADD ESP,0x4                         ; 004f51d5
    POP EBP                             ; 004f51d8
    POP EDI                             ; 004f51d9
    POP ESI                             ; 004f51da
    POP EBX                             ; 004f51db
    RET                                 ; 004f51dc
    PUSH 0x1d80d50                      ; 004f51dd | DAT_01d80d50
        ;   Label: LAB_004f51dd
    PUSH 0x1d80d54                      ; 004f51e2 | DAT_01d80d54
    PUSH ESI                            ; 004f51e7
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f51e8
    PUSH 0x1d80ed8                      ; 004f51ec
    ADD EAX,0xa8                        ; 004f51f1
    PUSH EAX                            ; 004f51f6
    CALL FUN_004f3e90                   ; 004f51f7
        ;   XREF to: 004f3e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3e90()
    MOV EAX,[0x01d80d50]                ; 004f51fc | DAT_01d80d50
    ADD ESP,0x14                        ; 004f5201
    CMP EAX,0x3                         ; 004f5204
    JL 0x004f51d3                       ; 004f5207
        ;   XREF to: 004f51d3 (CONDITIONAL_JUMP)  ; LAB_004f51d3
    PUSH 0x1d80ed4                      ; 004f5209 | DAT_01d80ed4
    PUSH 0x1d80ed8                      ; 004f520e
    PUSH EAX                            ; 004f5213
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f5214
    PUSH 0x1d80d54                      ; 004f5218 | DAT_01d80d54
    ADD EAX,0xb8                        ; 004f521d
    PUSH EAX                            ; 004f5222
    CALL FUN_004f3e90                   ; 004f5223
        ;   XREF to: 004f3e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3e90()
    MOV ECX,dword ptr [0x01d80ed4]      ; 004f5228 | DAT_01d80ed4
    ADD ESP,0x14                        ; 004f522e
    CMP ECX,0x3                         ; 004f5231
    JL 0x004f51d3                       ; 004f5234
        ;   XREF to: 004f51d3 (CONDITIONAL_JUMP)  ; LAB_004f51d3
    PUSH 0x1d80d50                      ; 004f5236 | DAT_01d80d50
    PUSH 0x1d80d54                      ; 004f523b | DAT_01d80d54
    PUSH ECX                            ; 004f5240
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f5241
    PUSH 0x1d80ed8                      ; 004f5245
    ADD EAX,0xc8                        ; 004f524a
    PUSH EAX                            ; 004f524f
    CALL FUN_004f3e90                   ; 004f5250
        ;   XREF to: 004f3e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3e90()
    MOV ESI,dword ptr [0x01d80d50]      ; 004f5255 | DAT_01d80d50
    ADD ESP,0x14                        ; 004f525b
    CMP ESI,0x3                         ; 004f525e
    JL 0x004f51d3                       ; 004f5261
        ;   XREF to: 004f51d3 (CONDITIONAL_JUMP)  ; LAB_004f51d3
    PUSH 0x1d80ed4                      ; 004f5267 | DAT_01d80ed4
    PUSH 0x1d80ed8                      ; 004f526c
    PUSH ESI                            ; 004f5271
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f5272
    PUSH 0x1d80d54                      ; 004f5276 | DAT_01d80d54
    ADD EAX,0xd8                        ; 004f527b
    PUSH EAX                            ; 004f5280
    CALL FUN_004f3e90                   ; 004f5281
        ;   XREF to: 004f3e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3e90()
    MOV EAX,[0x01d80ed4]                ; 004f5286 | DAT_01d80ed4
    ADD ESP,0x14                        ; 004f528b
    CMP EAX,0x3                         ; 004f528e
    JL 0x004f51d3                       ; 004f5291
        ;   XREF to: 004f51d3 (CONDITIONAL_JUMP)  ; LAB_004f51d3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f5297
    MOV dword ptr [EDX + 0xec],EAX      ; 004f529b
    MOV EAX,dword ptr [EDI + 0x8]       ; 004f52a1
    MOV dword ptr [EDX + 0xf0],EAX      ; 004f52a4
    MOV EAX,dword ptr [EDI + 0xc]       ; 004f52aa
    MOV dword ptr [EDX + 0xf4],EAX      ; 004f52ad
    MOV EAX,dword ptr [EDI + 0x10]      ; 004f52b3
    MOV dword ptr [EDX + 0xf8],EAX      ; 004f52b6
    MOV EAX,dword ptr [EDI + 0x14]      ; 004f52bc
    MOV dword ptr [EDX + 0xfc],EAX      ; 004f52bf
    MOV EDX,dword ptr [0x01d80ed4]      ; 004f52c5 | DAT_01d80ed4
    XOR EBP,EBP                         ; 004f52cb
    TEST EDX,EDX                        ; 004f52cd
    JLE 0x004f5360                      ; 004f52cf
        ;   XREF to: 004f5360 (CONDITIONAL_JUMP)  ; LAB_004f5360
    MOV EDI,0x1d80ed8                   ; 004f52d5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f52da
    MOV dword ptr [ESP],EDI             ; 004f52de
    MOV EDI,0x124980                    ; 004f52e1
    MOV EAX,[0x005f2afc]                ; 004f52e6 | DAT_005f2afc
        ;   Label: LAB_004f52e6
    MOV EBX,dword ptr [EAX]             ; 004f52eb | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP]             ; 004f52ed
    ADD EBX,EDI                         ; 004f52f0
    FLD float ptr [EAX]                 ; 004f52f2 | DAT_01d80ed8 | DAT_01d80ee4
    FMUL float ptr [0x005e29c0]         ; 004f52f4 | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f52fa
    FLD float ptr [EAX + 0x4]           ; 004f52fc | DAT_01d80edc | DAT_01d80ee8
    FMUL float ptr [0x005e29c0]         ; 004f52ff | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f5305
    FLD float ptr [EAX + 0x8]           ; 004f5308 | DAT_01d80ee0 | DAT_01d80eec
    FMUL float ptr [0x005e29c0]         ; 004f530b | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f5311
    MOV EAX,[0x005f2afc]                ; 004f5314 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 004f5319 | DAT_01bdd7e4
    LEA EDX,[EBP + 0x6188]              ; 004f531b
    ADD ESI,0x4                         ; 004f5321
    MOV dword ptr [EDI + EAX*0x1 + 0x10],0xffffffff ; 004f5324
    PUSH EDX                            ; 004f532c
    MOV dword ptr [ESI + 0xfc],EDX      ; 004f532d
    CALL FUN_004e5570                   ; 004f5333
        ;   XREF to: 004e5570 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5570()
    ADD ESP,0x4                         ; 004f5338
    INC EBP                             ; 004f533b
    MOV ECX,dword ptr [ESP]             ; 004f533c
    ADD EDI,0x30                        ; 004f533f
    ADD ECX,0xc                         ; 004f5342
    MOV EBX,dword ptr [0x01d80ed4]      ; 004f5345 | DAT_01d80ed4
    MOV dword ptr [ESP],ECX             ; 004f534b
    CMP EBP,EBX                         ; 004f534e
    JL 0x004f52e6                       ; 004f5350
        ;   XREF to: 004f52e6 (CONDITIONAL_JUMP)  ; LAB_004f52e6
    LEA EAX,[EAX]                       ; 004f5352
    LEA EDX,[EDX]                       ; 004f5358
    MOV EAX,EAX                         ; 004f535e
    MOV EAX,0x1                         ; 004f5360
        ;   Label: LAB_004f5360
    ADD ESP,0x4                         ; 004f5365
    POP EBP                             ; 004f5368
    POP EDI                             ; 004f5369
    POP ESI                             ; 004f536a
    POP EBX                             ; 004f536b
    RET                                 ; 004f536c

