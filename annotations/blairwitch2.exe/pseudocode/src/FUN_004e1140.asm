; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1140(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbe81
;   undefined4 DAT_005dbe85
;   undefined4 DAT_005dbe89
;   TerminatedCString s_l_s_die_wav_005dbe9e
;   TerminatedCString s_l_s_shot_wav_005dbeab
;   undefined4 DAT_005dbebe
;   undefined4 DAT_005dbec6
;   undefined4 DAT_006167e0
;
; Called Functions:
;   FUN_00408d70
;   FUN_00488890
;   FUN_004c9850
;   FUN_005035c0
;   FUN_00503620
;   FUN_00550b70
;   FUN_00551050
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1140
        ;   Label: FUN_004e1140
    PUSH ESI                            ; 004e1141
    PUSH EDI                            ; 004e1142
    PUSH EBP                            ; 004e1143
    MOV EBP,ESP                         ; 004e1144
    SUB ESP,0xf8                        ; 004e1146
    AND ESP,0xfffffff8                  ; 004e114c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e114f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e1152
    FLD float ptr [EAX + 0x4]           ; 004e1155
    FSUBR float ptr [EBX + 0x25a8]      ; 004e1158
    FST float ptr [EBX + 0x25a8]        ; 004e115e
    FLDZ                                ; 004e1164
    FCOMPP                              ; 004e1166
    FNSTSW AX                           ; 004e1168
    SAHF                                ; 004e116a
    JC 0x004e1297                       ; 004e116b
        ;   XREF to: 004e1297 (CONDITIONAL_JUMP)  ; LAB_004e1297
    LEA ESI,[EBX + 0x2b4]               ; 004e1171
    PUSH ESI                            ; 004e1177
    MOV dword ptr [EBX + 0x25a8],0x0    ; 004e1178
    CALL FUN_005035c0                   ; 004e1182
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e1187
    ADD ESP,0x4                         ; 004e118a
    CMP EAX,0x5                         ; 004e118d
    JZ 0x004e11a4                       ; 004e1190
        ;   XREF to: 004e11a4 (CONDITIONAL_JUMP)  ; LAB_004e11a4
    CMP EAX,0x4                         ; 004e1192
    JZ 0x004e11a4                       ; 004e1195
        ;   XREF to: 004e11a4 (CONDITIONAL_JUMP)  ; LAB_004e11a4
    PUSH 0x1                            ; 004e1197
    PUSH 0x4                            ; 004e1199
    PUSH ESI                            ; 004e119b
    CALL FUN_00503620                   ; 004e119c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004e11a1
    MOV ESI,dword ptr [EBX + 0x10afc]   ; 004e11a4
        ;   Label: LAB_004e11a4
    PUSH ESI                            ; 004e11aa
    CALL FUN_00551050                   ; 004e11ab
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 004e11b0
    MOV EDI,dword ptr [EBX + 0x10b00]   ; 004e11b3
    PUSH EDI                            ; 004e11b9
    CALL FUN_00551050                   ; 004e11ba
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 004e11bf
    MOV EAX,dword ptr [EBX + 0x2824]    ; 004e11c2
    MOV dword ptr [ESP + 0x10],EAX      ; 004e11c8
    FLD float ptr [ESP + 0x10]          ; 004e11cc
    FST double ptr [ESP + 0x8]          ; 004e11d0
    FCOMP double ptr [0x005dbebe]       ; 004e11d4 | DAT_005dbebe
    FNSTSW AX                           ; 004e11da
    SAHF                                ; 004e11dc
    JNC 0x004e1274                      ; 004e11dd
        ;   XREF to: 004e1274 (CONDITIONAL_JUMP)  ; LAB_004e1274
    MOV EAX,0x5dbe81                    ; 004e11e3 | DAT_005dbe81
    PUSH EAX                            ; 004e11e8 | DAT_005dbe81 | DAT_005dbe85 | DAT_005dbe89
        ;   Label: LAB_004e11e8
    PUSH 0x5dbe9e                       ; 004e11e9 | = "l%s-die?.wav"
    LEA EAX,[ESP + 0x84]                ; 004e11ee
    PUSH EAX                            ; 004e11f5
    CALL FUN_005b7790                   ; 004e11f6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 004e11fb
    LEA ESI,[ESP + 0x7c]                ; 004e11fe
    PUSH ESI                            ; 004e1202
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e1203
    PUSH EBX                            ; 004e1209
    CALL dword ptr [EAX + 0x34]         ; 004e120a
    ADD ESP,0x8                         ; 004e120d
    MOV dword ptr [EBX + 0x10afc],EAX   ; 004e1210
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e1216
        ;   Label: LAB_004e1216
    ADD EAX,0x1c                        ; 004e1219
    PUSH EAX                            ; 004e121c
    PUSH EBX                            ; 004e121d
    LEA ESI,[ESP + 0xe8]                ; 004e121e
    LEA EDI,[ESP + 0xf4]                ; 004e1225
    CALL FUN_00408d70                   ; 004e122c
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0xe8]                ; 004e1231
    ADD ESP,0x8                         ; 004e1238
    MOVSD ES:EDI,ESI                    ; 004e123b
    MOVSD ES:EDI,ESI                    ; 004e123c
    MOVSD ES:EDI,ESI                    ; 004e123d
    MOV EAX,dword ptr [EBX + 0x280c]    ; 004e123e
    PUSH EAX                            ; 004e1244
    PUSH 0xa                            ; 004e1245
    PUSH 0x0                            ; 004e1247
    LEA EAX,[ESP + 0xf8]                ; 004e1249
    PUSH EAX                            ; 004e1250
    MOV EDX,dword ptr [0x006167e0]      ; 004e1251 | DAT_006167e0
    PUSH EDX                            ; 004e1257
    CALL FUN_004c9850                   ; 004e1258
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    ADD ESP,0x14                        ; 004e125d
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e1260
    PUSH ECX                            ; 004e1263
    PUSH EBX                            ; 004e1264
    CALL FUN_00488890                   ; 004e1265
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 004e126a
    MOV ESP,EBP                         ; 004e126d
    POP EBP                             ; 004e126f
    POP EDI                             ; 004e1270
    POP ESI                             ; 004e1271
    POP EBX                             ; 004e1272
    RET                                 ; 004e1273
    FLD double ptr [ESP + 0x8]          ; 004e1274
        ;   Label: LAB_004e1274
    FCOMP double ptr [0x005dbec6]       ; 004e1278 | DAT_005dbec6
    FNSTSW AX                           ; 004e127e
    SAHF                                ; 004e1280
    JNC 0x004e128d                      ; 004e1281
        ;   XREF to: 004e128d (CONDITIONAL_JUMP)  ; LAB_004e128d
    MOV EAX,0x5dbe85                    ; 004e1283 | DAT_005dbe85
    JMP 0x004e11e8                      ; 004e1288
        ;   XREF to: 004e11e8 (UNCONDITIONAL_JUMP)  ; LAB_004e11e8
    MOV EAX,0x5dbe89                    ; 004e128d | DAT_005dbe89
        ;   Label: LAB_004e128d
    JMP 0x004e11e8                      ; 004e1292
        ;   XREF to: 004e11e8 (UNCONDITIONAL_JUMP)  ; LAB_004e11e8
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 004e1297
        ;   Label: LAB_004e1297
    PUSH EDX                            ; 004e129d
    CALL FUN_00551050                   ; 004e129e
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 004e12a3
    MOV ECX,dword ptr [EBX + 0x10afc]   ; 004e12a6
    PUSH ECX                            ; 004e12ac
    CALL FUN_00550b70                   ; 004e12ad
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 004e12b2
    TEST EAX,EAX                        ; 004e12b5
    JNZ 0x004e1305                      ; 004e12b7
        ;   XREF to: 004e1305 (CONDITIONAL_JUMP)  ; LAB_004e1305
    MOV EAX,dword ptr [EBX + 0x2824]    ; 004e12b9
    MOV dword ptr [ESP + 0x14],EAX      ; 004e12bf
    FLD float ptr [ESP + 0x14]          ; 004e12c3
    FST double ptr [ESP]                ; 004e12c7
    FCOMP double ptr [0x005dbebe]       ; 004e12ca | DAT_005dbebe
    FNSTSW AX                           ; 004e12d0
    SAHF                                ; 004e12d2
    JNC 0x004e131d                      ; 004e12d3
        ;   XREF to: 004e131d (CONDITIONAL_JUMP)  ; LAB_004e131d
    MOV EAX,0x5dbe81                    ; 004e12d5 | DAT_005dbe81
    PUSH EAX                            ; 004e12da | DAT_005dbe81 | DAT_005dbe85 | DAT_005dbe89
        ;   Label: LAB_004e12da
    PUSH 0x5dbeab                       ; 004e12db | = "l%s-shot?.wav"
    LEA EAX,[ESP + 0x20]                ; 004e12e0
    PUSH EAX                            ; 004e12e4
    CALL FUN_005b7790                   ; 004e12e5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 004e12ea
    LEA ESI,[ESP + 0x18]                ; 004e12ed
    PUSH ESI                            ; 004e12f1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e12f2
    PUSH EBX                            ; 004e12f8
    CALL dword ptr [EAX + 0x34]         ; 004e12f9
    ADD ESP,0x8                         ; 004e12fc
    MOV dword ptr [EBX + 0x10afc],EAX   ; 004e12ff
    PUSH 0x1                            ; 004e1305
        ;   Label: LAB_004e1305
    PUSH 0x3                            ; 004e1307
    LEA EAX,[EBX + 0x2b4]               ; 004e1309
    PUSH EAX                            ; 004e130f
    CALL FUN_00503620                   ; 004e1310
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004e1315
    JMP 0x004e1216                      ; 004e1318
        ;   XREF to: 004e1216 (UNCONDITIONAL_JUMP)  ; LAB_004e1216
    FLD double ptr [ESP]                ; 004e131d
        ;   Label: LAB_004e131d
    FCOMP double ptr [0x005dbec6]       ; 004e1320 | DAT_005dbec6
    FNSTSW AX                           ; 004e1326
    SAHF                                ; 004e1328
    JNC 0x004e1332                      ; 004e1329
        ;   XREF to: 004e1332 (CONDITIONAL_JUMP)  ; LAB_004e1332
    MOV EAX,0x5dbe85                    ; 004e132b | DAT_005dbe85
    JMP 0x004e12da                      ; 004e1330
        ;   XREF to: 004e12da (UNCONDITIONAL_JUMP)  ; LAB_004e12da
    MOV EAX,0x5dbe89                    ; 004e1332 | DAT_005dbe89
        ;   Label: LAB_004e1332
    JMP 0x004e12da                      ; 004e1337
        ;   XREF to: 004e12da (UNCONDITIONAL_JUMP)  ; LAB_004e12da

