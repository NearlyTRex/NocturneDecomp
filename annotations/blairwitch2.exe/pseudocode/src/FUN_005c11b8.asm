; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_005c11b8(byte *param_1,byte *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c13dc at 005c1400
;
; Called Functions:
;   FUN_005c1188
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c11b8
        ;   Label: FUN_005c11b8
    PUSH ESI                            ; 005c11b9
    PUSH EDI                            ; 005c11ba
    PUSH EBP                            ; 005c11bb
    SUB ESP,0xc                         ; 005c11bc
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c11bf
    CMP byte ptr [EBX],0x3a             ; 005c11c3
    JNZ 0x005c11c9                      ; 005c11c6
        ;   XREF to: 005c11c9 (CONDITIONAL_JUMP)  ; LAB_005c11c9
    INC EBX                             ; 005c11c8
    MOV ESI,EBX                         ; 005c11c9
        ;   Label: LAB_005c11c9
    MOV DL,byte ptr [EBX]               ; 005c11cb
        ;   Label: LAB_005c11cb
    TEST DL,DL                          ; 005c11cd
    JZ 0x005c11ed                       ; 005c11cf
        ;   XREF to: 005c11ed (CONDITIONAL_JUMP)  ; LAB_005c11ed
    CMP DL,0x2c                         ; 005c11d1
    JZ 0x005c11ed                       ; 005c11d4
        ;   XREF to: 005c11ed (CONDITIONAL_JUMP)  ; LAB_005c11ed
    CMP DL,0x2d                         ; 005c11d6
    JZ 0x005c11ed                       ; 005c11d9
        ;   XREF to: 005c11ed (CONDITIONAL_JUMP)  ; LAB_005c11ed
    CMP DL,0x2b                         ; 005c11db
    JZ 0x005c11ed                       ; 005c11de
        ;   XREF to: 005c11ed (CONDITIONAL_JUMP)  ; LAB_005c11ed
    CMP DL,0x30                         ; 005c11e0
    JC 0x005c11ea                       ; 005c11e3
        ;   XREF to: 005c11ea (CONDITIONAL_JUMP)  ; LAB_005c11ea
    CMP DL,0x39                         ; 005c11e5
    JBE 0x005c11ed                      ; 005c11e8
        ;   XREF to: 005c11ed (CONDITIONAL_JUMP)  ; LAB_005c11ed
    INC EBX                             ; 005c11ea
        ;   Label: LAB_005c11ea
    JMP 0x005c11cb                      ; 005c11eb
        ;   XREF to: 005c11cb (UNCONDITIONAL_JUMP)  ; LAB_005c11cb
    MOV EBP,EBX                         ; 005c11ed
        ;   Label: LAB_005c11ed
    SUB EBP,ESI                         ; 005c11ef
    CMP EBP,0x80                        ; 005c11f1
    JLE 0x005c11fe                      ; 005c11f7
        ;   XREF to: 005c11fe (CONDITIONAL_JUMP)  ; LAB_005c11fe
    MOV EBP,0x80                        ; 005c11f9
    MOV EDI,dword ptr [ESP + 0x24]      ; 005c11fe
        ;   Label: LAB_005c11fe
    MOV ECX,EBP                         ; 005c1202
    PUSH ES                             ; 005c1204
    MOV AX,DS                           ; 005c1205
    MOV ES,AX                           ; 005c1207
    PUSH EDI                            ; 005c1209
    MOV EAX,ECX                         ; 005c120a
    SHR ECX,0x2                         ; 005c120c
    MOVSD.REP ES:EDI,ESI                ; 005c120f
    MOV CL,AL                           ; 005c1211
    AND CL,0x3                          ; 005c1213
    MOVSB.REP ES:EDI,ESI                ; 005c1216
    POP EDI                             ; 005c1218
    POP ES                              ; 005c1219
    ADD EBP,EDI                         ; 005c121a
    LEA EAX,[EBX + 0x1]                 ; 005c121c
    XOR ESI,ESI                         ; 005c121f
    MOV byte ptr [EBP],0x0              ; 005c1221
    CMP DL,0x2d                         ; 005c1225
    JNZ 0x005c1231                      ; 005c1228
        ;   XREF to: 005c1231 (CONDITIONAL_JUMP)  ; LAB_005c1231
    MOV ESI,0x1                         ; 005c122a
    JMP 0x005c1236                      ; 005c122f
        ;   XREF to: 005c1236 (UNCONDITIONAL_JUMP)  ; LAB_005c1236
    CMP DL,0x2b                         ; 005c1231
        ;   Label: LAB_005c1231
    JNZ 0x005c1238                      ; 005c1234
        ;   XREF to: 005c1238 (CONDITIONAL_JUMP)  ; LAB_005c1238
    MOV EBX,EAX                         ; 005c1236
        ;   Label: LAB_005c1236
    MOV AL,byte ptr [EBX]               ; 005c1238
        ;   Label: LAB_005c1238
    CMP AL,0x30                         ; 005c123a
    JC 0x005c12c9                       ; 005c123c
        ;   XREF to: 005c12c9 (CONDITIONAL_JUMP)  ; LAB_005c12c9
    CMP AL,0x39                         ; 005c1242
    JA 0x005c12c9                       ; 005c1244
        ;   XREF to: 005c12c9 (CONDITIONAL_JUMP)  ; LAB_005c12c9
    LEA EAX,[ESP + 0x8]                 ; 005c124a
    XOR EDI,EDI                         ; 005c124e
    PUSH EAX                            ; 005c1250
    MOV dword ptr [ESP + 0x4],EDI       ; 005c1251
    PUSH EBX                            ; 005c1255
    MOV dword ptr [ESP + 0xc],EDI       ; 005c1256
    MOV dword ptr [ESP + 0x10],EDI      ; 005c125a
    CALL FUN_005c1188                   ; 005c125e
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    ADD ESP,0x8                         ; 005c1263
    MOV DL,byte ptr [EAX]               ; 005c1266
    MOV EBX,EAX                         ; 005c1268
    CMP DL,0x3a                         ; 005c126a
    JNZ 0x005c1296                      ; 005c126d
        ;   XREF to: 005c1296 (CONDITIONAL_JUMP)  ; LAB_005c1296
    LEA EBX,[ESP + 0x4]                 ; 005c126f
    PUSH EBX                            ; 005c1273
    INC EAX                             ; 005c1274
    PUSH EAX                            ; 005c1275
    CALL FUN_005c1188                   ; 005c1276
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    ADD ESP,0x8                         ; 005c127b
    MOV DH,byte ptr [EAX]               ; 005c127e
    MOV EBX,EAX                         ; 005c1280
    CMP DH,0x3a                         ; 005c1282
    JNZ 0x005c1296                      ; 005c1285
        ;   XREF to: 005c1296 (CONDITIONAL_JUMP)  ; LAB_005c1296
    MOV EBX,ESP                         ; 005c1287
    PUSH EBX                            ; 005c1289
    INC EAX                             ; 005c128a
    PUSH EAX                            ; 005c128b
    CALL FUN_005c1188                   ; 005c128c
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    ADD ESP,0x8                         ; 005c1291
    MOV EBX,EAX                         ; 005c1294
    MOV EBP,dword ptr [ESP + 0x8]       ; 005c1296
        ;   Label: LAB_005c1296
    MOV EAX,EBP                         ; 005c129a
    SHL EAX,0x4                         ; 005c129c
    SUB EAX,EBP                         ; 005c129f
    MOV EBP,dword ptr [ESP + 0x4]       ; 005c12a1
    SHL EAX,0x2                         ; 005c12a5
    ADD EBP,EAX                         ; 005c12a8
    MOV EAX,EBP                         ; 005c12aa
    SHL EAX,0x4                         ; 005c12ac
    SUB EAX,EBP                         ; 005c12af
    MOV EBP,dword ptr [ESP]             ; 005c12b1
    SHL EAX,0x2                         ; 005c12b4
    ADD EBP,EAX                         ; 005c12b7
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c12b9
    MOV dword ptr [EAX],EBP             ; 005c12bd
    TEST ESI,ESI                        ; 005c12bf
    JZ 0x005c12c9                       ; 005c12c1
        ;   XREF to: 005c12c9 (CONDITIONAL_JUMP)  ; LAB_005c12c9
    MOV EDX,EBP                         ; 005c12c3
    NEG EDX                             ; 005c12c5
    MOV dword ptr [EAX],EDX             ; 005c12c7
    MOV EAX,EBX                         ; 005c12c9
        ;   Label: LAB_005c12c9
    ADD ESP,0xc                         ; 005c12cb
    POP EBP                             ; 005c12ce
    POP EDI                             ; 005c12cf
    POP ESI                             ; 005c12d0
    POP EBX                             ; 005c12d1
    RET                                 ; 005c12d2

