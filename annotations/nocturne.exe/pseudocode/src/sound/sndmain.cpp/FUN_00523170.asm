; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523170(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005bea68
;   undefined4 DAT_005bea6c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc8328
;   undefined4 DAT_02dc832c
;   undefined4 DAT_02dc8330
;   undefined4 DAT_02dc8334
;   undefined4 DAT_02dc83d0
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   FUN_004c8440
;   FUN_00524830
;   FUN_00524d10
;   FUN_00563cc0
;   FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523170
        ;   Label: FUN_00523170
    PUSH ESI                            ; 00523171
    PUSH EDI                            ; 00523172
    PUSH EBP                            ; 00523173
    SUB ESP,0x30                        ; 00523174
    CMP dword ptr [0x02dc84bc],0x0      ; 00523177 | DAT_02dc84bc
    JLE 0x005232f9                      ; 0052317e
        ;   XREF to: 005232f9 (CONDITIONAL_JUMP)  ; LAB_005232f9
    CMP dword ptr [0x02dc8328],0x0      ; 00523184 | DAT_02dc8328
        ;   Label: LAB_00523184
    JLE 0x005231b0                      ; 0052318b
        ;   XREF to: 005231b0 (CONDITIONAL_JUMP)  ; LAB_005231b0
    MOV EDI,0x592860                    ; 0052318d
    MOV EBP,0x4e4                       ; 00523192
    PUSH 0x592875                       ; 00523197
    MOV dword ptr [0x01cc4800],EDI      ; 0052319c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 005231a2 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005231a8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005231ad
    MOV ESI,dword ptr [0x02dc8330]      ; 005231b0 | DAT_02dc8330
        ;   Label: LAB_005231b0
    MOV EAX,[0x005bea68]                ; 005231b6 | DAT_005bea68
    XOR EDI,EDI                         ; 005231bb
    SHL ESI,0x2                         ; 005231bd
    TEST EAX,EAX                        ; 005231c0
    JLE 0x00523230                      ; 005231c2
        ;   XREF to: 00523230 (CONDITIONAL_JUMP)  ; LAB_00523230
    XOR EBX,EBX                         ; 005231c4
    MOV EAX,[0x02dc8334]                ; 005231c6 | DAT_02dc8334
        ;   Label: LAB_005231c6
    DEC EAX                             ; 005231cb
    IMUL EAX,ESI                        ; 005231cc
    MOV EDX,dword ptr [0x02dc8330]      ; 005231cf | DAT_02dc8330
    SHL EDX,0x2                         ; 005231d5
    PUSH EAX                            ; 005231d8
    MOV EAX,dword ptr [EBX + 0x2dc8360] ; 005231d9
    ADD EDX,EAX                         ; 005231df
    PUSH EDX                            ; 005231e1
    PUSH EAX                            ; 005231e2
    CALL FUN_00566170                   ; 005231e3
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    MOV EAX,[0x02dc8334]                ; 005231e8 | DAT_02dc8334
    MOV EDX,dword ptr [0x02dc8330]      ; 005231ed | DAT_02dc8330
    DEC EAX                             ; 005231f3
    IMUL EAX,EDX                        ; 005231f4
    ADD ESP,0xc                         ; 005231f7
    LEA EDX,[EAX*0x4 + 0x0]             ; 005231fa
    PUSH ESI                            ; 00523201
    MOV EAX,dword ptr [EBX + 0x2dc8360] ; 00523202
    PUSH 0x0                            ; 00523208
    ADD EAX,EDX                         ; 0052320a
    PUSH EAX                            ; 0052320c
    ADD EBX,0x4                         ; 0052320d
    INC EDI                             ; 00523210
    CALL FUN_00563cc0                   ; 00523211
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    MOV ECX,dword ptr [0x005bea68]      ; 00523216 | DAT_005bea68
    ADD ESP,0xc                         ; 0052321c
    CMP EDI,ECX                         ; 0052321f
    JL 0x005231c6                       ; 00523221
        ;   XREF to: 005231c6 (CONDITIONAL_JUMP)  ; LAB_005231c6
    LEA EAX,[EAX]                       ; 00523223
    LEA EDX,[EDX]                       ; 00523229
    NOP                                 ; 0052322f
    MOV EAX,[0x02dc8330]                ; 00523230 | DAT_02dc8330
        ;   Label: LAB_00523230
    MOV dword ptr [ESP + 0x20],EAX      ; 00523235
    MOV EAX,[0x005bea68]                ; 00523239 | DAT_005bea68
    MOV dword ptr [ESP + 0x24],EAX      ; 0052323e
    MOV EAX,[0x005bea6c]                ; 00523242 | DAT_005bea6c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00523247
    MOV dword ptr [ESP + 0x28],EAX      ; 0052324b
    TEST EBX,EBX                        ; 0052324f
    JLE 0x00523270                      ; 00523251
        ;   XREF to: 00523270 (CONDITIONAL_JUMP)  ; LAB_00523270
    SHL EBX,0x2                         ; 00523253
    XOR EAX,EAX                         ; 00523256
    ADD EAX,0x4                         ; 00523258
        ;   Label: LAB_00523258
    MOV EDX,dword ptr [EAX + 0x2dc835c] ; 0052325b
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00523261
    CMP EAX,EBX                         ; 00523265
    JL 0x00523258                       ; 00523267
        ;   XREF to: 00523258 (CONDITIONAL_JUMP)  ; LAB_00523258
    LEA EAX,[EAX]                       ; 00523269
    NOP                                 ; 0052326f
    FILD dword ptr [0x02dc8330]         ; 00523270 | DAT_02dc8330
        ;   Label: LAB_00523270
    FILD dword ptr [0x005bea6c]         ; 00523276 | DAT_005bea6c
    FDIVP                               ; 0052327c
    MOV EBX,0x2dbd374                   ; 0052327e
    LEA ESI,[EBX + 0x4800]              ; 00523283
    FSTP float ptr [ESP + 0x2c]         ; 00523289
    PUSH dword ptr [ESP + 0x2c]         ; 0052328d
        ;   Label: LAB_0052328d
    PUSH EBX                            ; 00523291
    CALL FUN_00524830                   ; 00523292
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; undefined FUN_00524830()
    ADD EBX,0x120                       ; 00523297
    ADD ESP,0x8                         ; 0052329d
    CMP EBX,ESI                         ; 005232a0
    JNZ 0x0052328d                      ; 005232a2
        ;   XREF to: 0052328d (CONDITIONAL_JUMP)  ; LAB_0052328d
    MOV EBX,0x2dbd374                   ; 005232a4
    LEA EBP,[EBX + 0x4800]              ; 005232a9
    SUB ESP,0x2c                        ; 005232af
        ;   Label: LAB_005232af
    MOV EDI,ESP                         ; 005232b2
    MOV ECX,0xb                         ; 005232b4
    LEA ESI,[ESP + 0x2c]                ; 005232b9
    PUSH EBX                            ; 005232bd
    MOVSD.REP ES:EDI,ESI                ; 005232be
    CALL FUN_00524d10                   ; 005232c0
        ;   XREF to: 00524d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00524d10()
    ADD EBX,0x120                       ; 005232c5
    ADD ESP,0x30                        ; 005232cb
    CMP EBX,EBP                         ; 005232ce
    JNZ 0x005232af                      ; 005232d0
        ;   XREF to: 005232af (CONDITIONAL_JUMP)  ; LAB_005232af
    MOV EAX,[0x02dc8330]                ; 005232d2 | DAT_02dc8330
    MOV EDI,dword ptr [0x02dc83d0]      ; 005232d7 | DAT_02dc83d0
    XOR ESI,ESI                         ; 005232dd
    MOV [0x02dc8328],EAX                ; 005232df | DAT_02dc8328
    INC EDI                             ; 005232e4
    MOV dword ptr [0x02dc832c],ESI      ; 005232e5 | DAT_02dc832c
    MOV dword ptr [0x02dc83d0],EDI      ; 005232eb | DAT_02dc83d0
    ADD ESP,0x30                        ; 005232f1
    POP EBP                             ; 005232f4
    POP EDI                             ; 005232f5
    POP ESI                             ; 005232f6
    POP EBX                             ; 005232f7
    RET                                 ; 005232f8
    MOV ECX,0x59282b                    ; 005232f9
        ;   Label: LAB_005232f9
    MOV EBX,0x4e0                       ; 005232fe
    PUSH 0x592840                       ; 00523303
    MOV dword ptr [0x01cc4800],ECX      ; 00523308 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0052330e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523314
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00523319
    JMP 0x00523184                      ; 0052331c
        ;   XREF to: 00523184 (UNCONDITIONAL_JUMP)  ; LAB_00523184

