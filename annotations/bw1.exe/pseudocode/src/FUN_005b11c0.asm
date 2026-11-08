; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b11c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9b2e
;   undefined4 DAT_005f9b32
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004301e0
;   FUN_00483850
;   FUN_005b0c00
;   FUN_005b5930
;   FUN_005b6270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b11c0
        ;   Label: FUN_005b11c0
    PUSH EBP                            ; 005b11c1
    SUB ESP,0x60                        ; 005b11c2
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005b11c5
    CMP dword ptr [EBX + 0x27bc],0x0    ; 005b11c9
    JZ 0x005b12fc                       ; 005b11d0
        ;   XREF to: 005b12fc (CONDITIONAL_JUMP)  ; LAB_005b12fc
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 005b11d6
    JNZ 0x005b12fc                      ; 005b11dd
        ;   XREF to: 005b12fc (CONDITIONAL_JUMP)  ; LAB_005b12fc
    FLD float ptr [EBX + 0xc2ac]        ; 005b11e3
    FLD1                                ; 005b11e9
    FCOMPP                              ; 005b11eb
    FNSTSW AX                           ; 005b11ed
    SAHF                                ; 005b11ef
    JC 0x005b1304                       ; 005b11f0
        ;   XREF to: 005b1304 (CONDITIONAL_JUMP)  ; LAB_005b1304
    FLD float ptr [EBX + 0xc2ac]        ; 005b11f6
        ;   Label: LAB_005b11f6
    FCOMP double ptr [0x005f9b32]       ; 005b11fc | DAT_005f9b32
    FNSTSW AX                           ; 005b1202
    SAHF                                ; 005b1204
    JA 0x005b131b                       ; 005b1205
        ;   XREF to: 005b131b (CONDITIONAL_JUMP)  ; LAB_005b131b
    CMP dword ptr [EBX + 0x27bc],0x0    ; 005b120b
    JZ 0x005b12e7                       ; 005b1212
        ;   XREF to: 005b12e7 (CONDITIONAL_JUMP)  ; LAB_005b12e7
    PUSH EDI                            ; 005b1218
    PUSH ESI                            ; 005b1219
    PUSH EBX                            ; 005b121a
    CALL FUN_004087b0                   ; 005b121b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 005b1220
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b1226
    SUB EAX,EDX                         ; 005b122d
    LEA EDI,[ESP + 0xc]                 ; 005b122f
    SHL EAX,0x4                         ; 005b1233
    MOV ECX,0xc                         ; 005b1236
    LEA ESI,[EBX + EAX*0x1 + 0xfd8]     ; 005b123b
    ADD ESP,0x4                         ; 005b1242
    LEA EAX,[ESP + 0x8]                 ; 005b1245
    MOVSD.REP ES:EDI,ESI                ; 005b1249
    PUSH EAX                            ; 005b124b
    LEA ESI,[ESP + 0x54]                ; 005b124c
    LEA EDI,[ESP + 0x48]                ; 005b1250
    CALL FUN_005b5930                   ; 005b1254
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    LEA ESI,[ESP + 0x54]                ; 005b1259
    ADD ESP,0x4                         ; 005b125d
    LEA EAX,[ESP + 0x8]                 ; 005b1260
    MOVSD ES:EDI,ESI                    ; 005b1264
    MOVSD ES:EDI,ESI                    ; 005b1265
    MOVSD ES:EDI,ESI                    ; 005b1266
    PUSH EAX                            ; 005b1267
    LEA ESI,[ESP + 0x60]                ; 005b1268
    LEA EDI,[ESP + 0x3c]                ; 005b126c
    CALL FUN_005b6270                   ; 005b1270
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6270()
    ADD ESP,0x4                         ; 005b1275
    LEA EAX,[ESP + 0x38]                ; 005b1278
    LEA ESI,[ESP + 0x5c]                ; 005b127c
    PUSH EAX                            ; 005b1280
    MOVSD ES:EDI,ESI                    ; 005b1281
    MOVSD ES:EDI,ESI                    ; 005b1282
    MOVSD ES:EDI,ESI                    ; 005b1283
    PUSH 0x2c8af28                      ; 005b1284 | DAT_02c8af28
    MOV EDI,dword ptr [0x00612560]      ; 005b1289 | DAT_00612560
    PUSH EDI                            ; 005b128f | DAT_01bc120c
    CALL FUN_00483850                   ; 005b1290
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 005b1295
    PUSH 0x0                            ; 005b1298
    LEA EAX,[ESP + 0x48]                ; 005b129a
    PUSH EAX                            ; 005b129e
    MOV EBP,dword ptr [0x00612560]      ; 005b129f | DAT_00612560
    PUSH EBP                            ; 005b12a5 | DAT_01bc120c
    CALL FUN_00483850                   ; 005b12a6
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 005b12ab
    PUSH 0x2c9a544                      ; 005b12ae
    PUSH EBX                            ; 005b12b3
    CALL FUN_005b0c00                   ; 005b12b4
        ;   XREF to: 005b0c00 (UNCONDITIONAL_CALL)  ; undefined FUN_005b0c00()
    ADD ESP,0x8                         ; 005b12b9
    PUSH 0x2c9a550                      ; 005b12bc
    PUSH EBX                            ; 005b12c1
    CALL FUN_005b0c00                   ; 005b12c2
        ;   XREF to: 005b0c00 (UNCONDITIONAL_CALL)  ; undefined FUN_005b0c00()
    ADD ESP,0x8                         ; 005b12c7
    PUSH EBX                            ; 005b12ca
    CALL FUN_004087f0                   ; 005b12cb
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005b12d0
    PUSH EBX                            ; 005b12d3
    CALL FUN_004087f0                   ; 005b12d4
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005b12d9
    PUSH EBX                            ; 005b12dc
    CALL FUN_004087f0                   ; 005b12dd
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005b12e2
    POP ESI                             ; 005b12e5
    POP EDI                             ; 005b12e6
    PUSH EBX                            ; 005b12e7
        ;   Label: LAB_005b12e7
    CALL FUN_004301e0                   ; 005b12e8
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004301e0()
    ADD ESP,0x4                         ; 005b12ed
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 005b12f0
    ADD ESP,0x60                        ; 005b12f6
    POP EBP                             ; 005b12f9
    POP EBX                             ; 005b12fa
    RET                                 ; 005b12fb
    XOR EAX,EAX                         ; 005b12fc
        ;   Label: LAB_005b12fc
    ADD ESP,0x60                        ; 005b12fe
    POP EBP                             ; 005b1301
    POP EBX                             ; 005b1302
    RET                                 ; 005b1303
    FLD float ptr [EBX + 0xc2ac]        ; 005b1304
        ;   Label: LAB_005b1304
    FADD float ptr [0x005f9b2e]         ; 005b130a | DAT_005f9b2e
    FSTP float ptr [EBX + 0xc2ac]       ; 005b1310
    JMP 0x005b11f6                      ; 005b1316
        ;   XREF to: 005b11f6 (UNCONDITIONAL_JUMP)  ; LAB_005b11f6
    PUSH EBX                            ; 005b131b
        ;   Label: LAB_005b131b
    CALL FUN_004301e0                   ; 005b131c
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004301e0()
    ADD ESP,0x4                         ; 005b1321
    ADD ESP,0x60                        ; 005b1324
    POP EBP                             ; 005b1327
    POP EBX                             ; 005b1328
    RET                                 ; 005b1329

