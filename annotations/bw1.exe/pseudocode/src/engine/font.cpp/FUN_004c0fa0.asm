; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c0fa0(int param_1,int param_2)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0049935c at 00499376
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c8337c
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c09f0
;   engine_dosio.cpp_makePath_FUN_004795b0
;   engine_dosio.cpp_splitPath_FUN_00479580
;   engine_font.cpp_FUN_004c1520
;   engine_mini3d.cpp_FUN_00512200
;   support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;   support_trstream.cpp_CInStreamFile_read_FUN_005a0c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0fa0
        ;   Label: engine_font.cpp_FUN_004c0fa0
    PUSH EBP                            ; 004c0fa1
    SUB ESP,0x450                       ; 004c0fa2
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004c0fa8
    MOV dword ptr [EAX + 0x1ddc],0x0    ; 004c0faf
    MOV EDX,dword ptr [EAX + 0x1dcc]    ; 004c0fb9
    MOV dword ptr [EAX + 0x1dd8],0x0    ; 004c0fbf
    TEST EDX,EDX                        ; 004c0fc9
    JNZ 0x004c1327                      ; 004c0fcb
        ;   XREF to: 004c1327 (CONDITIONAL_JUMP)  ; LAB_004c1327
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004c0fd1
        ;   Label: LAB_004c0fd1
    MOV EBX,dword ptr [EAX + 0x1dd4]    ; 004c0fd8
    MOV dword ptr [EAX + 0x1dd0],0x0    ; 004c0fde
    TEST EBX,EBX                        ; 004c0fe8
    JZ 0x004c1006                       ; 004c0fea
        ;   XREF to: 004c1006 (CONDITIONAL_JUMP)  ; LAB_004c1006
    PUSH EBX                            ; 004c0fec
    CALL crt_unknown.c_FUN_005c09f0     ; 004c0fed
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004c0ff2
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004c0ff5
    MOV dword ptr [EAX + 0x1dd4],0x0    ; 004c0ffc
    CMP dword ptr [0x01c50948],0x0      ; 004c1006 | DAT_01c50948
        ;   Label: LAB_004c1006
    JZ 0x004c131e                       ; 004c100d
        ;   XREF to: 004c131e (CONDITIONAL_JUMP)  ; LAB_004c131e
    CMP dword ptr [ESP + 0x460],0x0     ; 004c1013
    JZ 0x004c12fc                       ; 004c101b
        ;   XREF to: 004c12fc (CONDITIONAL_JUMP)  ; LAB_004c12fc
    MOV EBP,dword ptr [ESP + 0x45c]     ; 004c1021
    MOV EAX,[0x02c8337c]                ; 004c1028 | DAT_02c8337c
    MOV EBP,dword ptr [EBP + 0x1a4]     ; 004c102d
    TEST EAX,EAX                        ; 004c1033
    JNZ 0x004c1039                      ; 004c1035
        ;   XREF to: 004c1039 (CONDITIONAL_JUMP)  ; LAB_004c1039
    ADD EBP,EBP                         ; 004c1037
    PUSH EDI                            ; 004c1039
        ;   Label: LAB_004c1039
    PUSH ESI                            ; 004c103a
    MOV EAX,EBP                         ; 004c103b
    IMUL EAX,EBP                        ; 004c103d
    PUSH 0x300                          ; 004c1040
    MOV dword ptr [ESP + 0x448],EAX     ; 004c1045
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 004c104c
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004c1051
    MOV EDX,dword ptr [ESP + 0x444]     ; 004c1054
    PUSH EDX                            ; 004c105b
    MOV EBX,EAX                         ; 004c105c
    MOV dword ptr [ESP + 0x440],EAX     ; 004c105e
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 004c1065
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004c106a
    MOV ECX,dword ptr [ESP + 0x444]     ; 004c106d
    PUSH ECX                            ; 004c1074
    MOV ESI,EAX                         ; 004c1075
    MOV dword ptr [ESP + 0x43c],EAX     ; 004c1077
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 004c107e
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004c1083
    MOV dword ptr [ESP + 0x440],EAX     ; 004c1086
    TEST EBX,EBX                        ; 004c108d
    JNZ 0x004c1346                      ; 004c108f
        ;   XREF to: 004c1346 (CONDITIONAL_JUMP)  ; LAB_004c1346
    MOV EBX,0x5e0886                    ; 004c1095
        ;   Label: LAB_004c1095
    MOV ESI,0x184                       ; 004c109a
    PUSH 0x5e0899                       ; 004c109f
    MOV dword ptr [0x01d1d400],EBX      ; 004c10a4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004c10aa | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c10b0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c10b5
    PUSH 0x0                            ; 004c10b8
        ;   Label: LAB_004c10b8
    LEA EAX,[ESP + 0x30c]               ; 004c10ba
    PUSH EAX                            ; 004c10c1
    PUSH 0x0                            ; 004c10c2
    MOV EAX,dword ptr [ESP + 0x470]     ; 004c10c4
    PUSH 0x0                            ; 004c10cb
    ADD EAX,0x4                         ; 004c10cd
    PUSH EAX                            ; 004c10d0
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004c10d1
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004c10d6
    PUSH 0x5e08c3                       ; 004c10d9
    LEA EAX,[ESP + 0x30c]               ; 004c10de
    PUSH EAX                            ; 004c10e5
    PUSH 0x0                            ; 004c10e6
    PUSH 0x0                            ; 004c10e8
    LEA EAX,[ESP + 0x218]               ; 004c10ea
    PUSH EAX                            ; 004c10f1
    CALL engine_dosio.cpp_makePath_FUN_004795b0 ; 004c10f2
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004c10f7
    LEA EAX,[ESP + 0x408]               ; 004c10fa
    PUSH EAX                            ; 004c1101
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 004c1102
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004c1107
    PUSH 0x1                            ; 004c110a
    LEA EAX,[ESP + 0x20c]               ; 004c110c
    PUSH EAX                            ; 004c1113
    PUSH 0x5e08c7                       ; 004c1114
    LEA EAX,[ESP + 0x414]               ; 004c1119
    PUSH EAX                            ; 004c1120
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 004c1121
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 004c1126
    TEST EAX,EAX                        ; 004c1129
    JZ 0x004c13f1                       ; 004c112b
        ;   XREF to: 004c13f1 (CONDITIONAL_JUMP)  ; LAB_004c13f1
    CMP dword ptr [0x02c8337c],0x0      ; 004c1131 | DAT_02c8337c
    JZ 0x004c135b                       ; 004c1138
        ;   XREF to: 004c135b (CONDITIONAL_JUMP)  ; LAB_004c135b
    MOV EAX,EBP                         ; 004c113e
    IMUL EAX,EBP                        ; 004c1140
    PUSH EAX                            ; 004c1143
    MOV EBX,dword ptr [ESP + 0x444]     ; 004c1144
    PUSH EBX                            ; 004c114b
    LEA EAX,[ESP + 0x410]               ; 004c114c
    PUSH EAX                            ; 004c1153
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 004c1154
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 004c1159
    LEA EAX,[ESP + 0x408]               ; 004c115c
        ;   Label: LAB_004c115c
    PUSH EAX                            ; 004c1163
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 004c1164
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004c1169
    MOV ECX,dword ptr [ESP + 0x444]     ; 004c116c
        ;   Label: LAB_004c116c
    PUSH ECX                            ; 004c1173
    PUSH 0xff                           ; 004c1174
    MOV EBX,dword ptr [ESP + 0x440]     ; 004c1179
    PUSH EBX                            ; 004c1180
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004c1181
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004c1186
    MOV ECX,0x300                       ; 004c1189
    MOV ESI,dword ptr [ESP + 0x464]     ; 004c118e
    MOV EDI,dword ptr [ESP + 0x43c]     ; 004c1195
    ADD ESI,0x1b4                       ; 004c119c
    PUSH EDI                            ; 004c11a2
    MOV EAX,ECX                         ; 004c11a3
    SHR ECX,0x2                         ; 004c11a5
    MOVSD.REP ES:EDI,ESI                ; 004c11a8
    MOV CL,AL                           ; 004c11aa
    AND CL,0x3                          ; 004c11ac
    MOVSB.REP ES:EDI,ESI                ; 004c11af
    POP EDI                             ; 004c11b1
    MOV EAX,dword ptr [ESP + 0x464]     ; 004c11b2
    LEA ESI,[EAX + 0x4]                 ; 004c11b9
    LEA EDI,[EAX + 0x1dbc]              ; 004c11bc
    MOV dword ptr [EAX + 0x1db8],0x0    ; 004c11c2
    PUSH EDI                            ; 004c11cc
    MOV AL,byte ptr [ESI]               ; 004c11cd
        ;   Label: LAB_004c11cd
    MOV byte ptr [EDI],AL               ; 004c11cf
    CMP AL,0x0                          ; 004c11d1
    JZ 0x004c11e5                       ; 004c11d3
        ;   XREF to: 004c11e5 (CONDITIONAL_JUMP)  ; LAB_004c11e5
    MOV AL,byte ptr [ESI + 0x1]         ; 004c11d5
    ADD ESI,0x2                         ; 004c11d8
    MOV byte ptr [EDI + 0x1],AL         ; 004c11db
    ADD EDI,0x2                         ; 004c11de
    CMP AL,0x0                          ; 004c11e1
    JNZ 0x004c11cd                      ; 004c11e3
        ;   XREF to: 004c11cd (CONDITIONAL_JUMP)  ; LAB_004c11cd
    POP EDI                             ; 004c11e5
        ;   Label: LAB_004c11e5
    MOV ESI,dword ptr [ESP + 0x440]     ; 004c11e6
    PUSH ESI                            ; 004c11ed
    MOV EDI,dword ptr [ESP + 0x440]     ; 004c11ee
    PUSH EDI                            ; 004c11f5
    PUSH EBX                            ; 004c11f6
    MOV EAX,dword ptr [ESP + 0x470]     ; 004c11f7
    PUSH EBP                            ; 004c11fe
    ADD EAX,0x1db4                      ; 004c11ff
    PUSH EAX                            ; 004c1204
    CALL engine_mini3d.cpp_FUN_00512200 ; 004c1205
        ;   XREF to: 00512200 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512200()
    ADD ESP,0x14                        ; 004c120a
    PUSH 0x7d20                         ; 004c120d
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 004c1212
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004c1217
    MOV ECX,dword ptr [ESP + 0x464]     ; 004c121a
    MOV dword ptr [ECX + 0x1dcc],EAX    ; 004c1221
    TEST EAX,EAX                        ; 004c1227
    JNZ 0x004c1256                      ; 004c1229
        ;   XREF to: 004c1256 (CONDITIONAL_JUMP)  ; LAB_004c1256
    LEA EAX,[ESP + 0x208]               ; 004c122b
    PUSH EAX                            ; 004c1232
    MOV ECX,0x5e0914                    ; 004c1233
    MOV EBX,0x1e5                       ; 004c1238
    PUSH 0x5e0927                       ; 004c123d
    MOV dword ptr [0x01d1d400],ECX      ; 004c1242 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004c1248 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c124e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004c1253
    MOV EAX,dword ptr [ESP + 0x464]     ; 004c1256
        ;   Label: LAB_004c1256
    MOV EAX,dword ptr [EAX + 0x1dcc]    ; 004c125d
    ADD EAX,0x1f                        ; 004c1263
    MOV ECX,dword ptr [ESP + 0x464]     ; 004c1266
    AND AL,0xe0                         ; 004c126d
    PUSH 0x7d0                          ; 004c126f
    MOV dword ptr [ECX + 0x1dd0],EAX    ; 004c1274
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 004c127a
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004c127f
    MOV ECX,dword ptr [ESP + 0x464]     ; 004c1282
    MOV dword ptr [ECX + 0x1dd4],EAX    ; 004c1289
    TEST EAX,EAX                        ; 004c128f
    JZ 0x004c1420                       ; 004c1291
        ;   XREF to: 004c1420 (CONDITIONAL_JUMP)  ; LAB_004c1420
    MOV EAX,dword ptr [ESP + 0x464]     ; 004c1297
        ;   Label: LAB_004c1297
    LEA EBX,[EAX + 0x80]                ; 004c129e
    LEA EBP,[EAX + 0x200]               ; 004c12a4
    ADD EAX,0x400                       ; 004c12aa
    MOV dword ptr [EAX + 0x19d8],0x0    ; 004c12af
    MOV dword ptr [EAX + 0x19dc],0x0    ; 004c12b9
    MOV dword ptr [ESP + 0x448],EAX     ; 004c12c3
    CMP dword ptr [EBX + 0x35e8],0x0    ; 004c12ca
        ;   Label: LAB_004c12ca
    JNZ 0x004c144c                      ; 004c12d1
        ;   XREF to: 004c144c (CONDITIONAL_JUMP)  ; LAB_004c144c
    MOV EAX,dword ptr [ESP + 0x448]     ; 004c12d7
        ;   Label: LAB_004c12d7
    ADD EBX,0x4                         ; 004c12de
    ADD EBP,0x10                        ; 004c12e1
    CMP EBX,EAX                         ; 004c12e4
    JNZ 0x004c12ca                      ; 004c12e6
        ;   XREF to: 004c12ca (CONDITIONAL_JUMP)  ; LAB_004c12ca
    PUSH 0x0                            ; 004c12e8
    LEA EAX,[ESP + 0x40c]               ; 004c12ea
    PUSH EAX                            ; 004c12f1
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 004c12f2
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c12f7
    POP ESI                             ; 004c12fa
    POP EDI                             ; 004c12fb
    PUSH 0x3f8ccccd                     ; 004c12fc
        ;   Label: LAB_004c12fc
    MOV ECX,dword ptr [ESP + 0x460]     ; 004c1301
    MOV EAX,dword ptr [ESP + 0x464]     ; 004c1308
    PUSH ECX                            ; 004c130f
    MOV dword ptr [ECX + 0x420c],EAX    ; 004c1310
    CALL engine_font.cpp_FUN_004c1520   ; 004c1316
        ;   XREF to: 004c1520 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1520()
    ADD ESP,0x8                         ; 004c131b
    ADD ESP,0x450                       ; 004c131e
        ;   Label: LAB_004c131e
    POP EBP                             ; 004c1324
    POP EBX                             ; 004c1325
    RET                                 ; 004c1326
    PUSH EDX                            ; 004c1327
        ;   Label: LAB_004c1327
    CALL crt_unknown.c_FUN_005c09f0     ; 004c1328
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004c132d
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004c1330
    MOV dword ptr [EAX + 0x1dcc],0x0    ; 004c1337
    JMP 0x004c0fd1                      ; 004c1341
        ;   XREF to: 004c0fd1 (UNCONDITIONAL_JUMP)  ; LAB_004c0fd1
    TEST ESI,ESI                        ; 004c1346
        ;   Label: LAB_004c1346
    JZ 0x004c1095                       ; 004c1348
        ;   XREF to: 004c1095 (CONDITIONAL_JUMP)  ; LAB_004c1095
    TEST EAX,EAX                        ; 004c134e
    JZ 0x004c1095                       ; 004c1350
        ;   XREF to: 004c1095 (CONDITIONAL_JUMP)  ; LAB_004c1095
    JMP 0x004c10b8                      ; 004c1356
        ;   XREF to: 004c10b8 (UNCONDITIONAL_JUMP)  ; LAB_004c10b8
    MOV EDX,EBP                         ; 004c135b
        ;   Label: LAB_004c135b
    MOV EAX,EBP                         ; 004c135d
    SAR EDX,0x1f                        ; 004c135f
    SUB EAX,EDX                         ; 004c1362
    SAR EAX,0x1                         ; 004c1364
    MOV ESI,dword ptr [ESP + 0x440]     ; 004c1366
    XOR EDI,EDI                         ; 004c136d
    MOV dword ptr [ESP + 0x44c],EAX     ; 004c136f
    TEST EAX,EAX                        ; 004c1376
    JLE 0x004c115c                      ; 004c1378
        ;   XREF to: 004c115c (CONDITIONAL_JUMP)  ; LAB_004c115c
    MOV EDX,dword ptr [ESP + 0x44c]     ; 004c137e
        ;   Label: LAB_004c137e
    PUSH EDX                            ; 004c1385
    LEA EAX,[ESP + 0xc]                 ; 004c1386
    PUSH EAX                            ; 004c138a
    LEA EAX,[ESP + 0x410]               ; 004c138b
    PUSH EAX                            ; 004c1392
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 004c1393
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 004c1398
    XOR ECX,ECX                         ; 004c139b
    TEST EBP,EBP                        ; 004c139d
    JLE 0x004c13bb                      ; 004c139f
        ;   XREF to: 004c13bb (CONDITIONAL_JUMP)  ; LAB_004c13bb
    MOV EBX,ESI                         ; 004c13a1
    MOV EDX,ECX                         ; 004c13a3
        ;   Label: LAB_004c13a3
    MOV EAX,ECX                         ; 004c13a5
    SAR EDX,0x1f                        ; 004c13a7
    SUB EAX,EDX                         ; 004c13aa
    SAR EAX,0x1                         ; 004c13ac
    INC EBX                             ; 004c13ae
    MOV AL,byte ptr [ESP + EAX*0x1 + 0x8] ; 004c13af
    INC ECX                             ; 004c13b3
    MOV byte ptr [EBX + -0x1],AL        ; 004c13b4
    CMP ECX,EBP                         ; 004c13b7
    JL 0x004c13a3                       ; 004c13b9
        ;   XREF to: 004c13a3 (CONDITIONAL_JUMP)  ; LAB_004c13a3
    XOR ECX,ECX                         ; 004c13bb
        ;   Label: LAB_004c13bb
    ADD ESI,EBP                         ; 004c13bd
    TEST EBP,EBP                        ; 004c13bf
    JLE 0x004c13dd                      ; 004c13c1
        ;   XREF to: 004c13dd (CONDITIONAL_JUMP)  ; LAB_004c13dd
    MOV EBX,ESI                         ; 004c13c3
    MOV EDX,ECX                         ; 004c13c5
        ;   Label: LAB_004c13c5
    MOV EAX,ECX                         ; 004c13c7
    SAR EDX,0x1f                        ; 004c13c9
    SUB EAX,EDX                         ; 004c13cc
    SAR EAX,0x1                         ; 004c13ce
    INC EBX                             ; 004c13d0
    MOV AL,byte ptr [ESP + EAX*0x1 + 0x8] ; 004c13d1
    INC ECX                             ; 004c13d5
    MOV byte ptr [EBX + -0x1],AL        ; 004c13d6
    CMP ECX,EBP                         ; 004c13d9
    JL 0x004c13c5                       ; 004c13db
        ;   XREF to: 004c13c5 (CONDITIONAL_JUMP)  ; LAB_004c13c5
    MOV EAX,dword ptr [ESP + 0x44c]     ; 004c13dd
        ;   Label: LAB_004c13dd
    INC EDI                             ; 004c13e4
    ADD ESI,EBP                         ; 004c13e5
    CMP EDI,EAX                         ; 004c13e7
    JGE 0x004c115c                      ; 004c13e9
        ;   XREF to: 004c115c (CONDITIONAL_JUMP)  ; LAB_004c115c
    JMP 0x004c137e                      ; 004c13ef
        ;   XREF to: 004c137e (UNCONDITIONAL_JUMP)  ; LAB_004c137e
    MOV dword ptr [0x01d1d404],0x1a3    ; 004c13f1 | DAT_01d1d404
        ;   Label: LAB_004c13f1
    LEA EAX,[ESP + 0x208]               ; 004c13fb
    PUSH EAX                            ; 004c1402
    MOV EDI,0x5e08cb                    ; 004c1403
    PUSH 0x5e08de                       ; 004c1408
    MOV dword ptr [0x01d1d400],EDI      ; 004c140d | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 004c1413
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004c1418
    JMP 0x004c116c                      ; 004c141b
        ;   XREF to: 004c116c (UNCONDITIONAL_JUMP)  ; LAB_004c116c
    LEA EAX,[ECX + 0x4]                 ; 004c1420
        ;   Label: LAB_004c1420
    PUSH EAX                            ; 004c1423
    MOV EDI,0x5e0954                    ; 004c1424
    MOV EBP,0x1ed                       ; 004c1429
    PUSH 0x5e0967                       ; 004c142e
    MOV dword ptr [0x01d1d400],EDI      ; 004c1433 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 004c1439 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c143f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004c1444
    JMP 0x004c1297                      ; 004c1447
        ;   XREF to: 004c1297 (UNCONDITIONAL_JUMP)  ; LAB_004c1297
    MOV ESI,dword ptr [EBX + 0x21e8]    ; 004c144c
        ;   Label: LAB_004c144c
    MOV EDX,dword ptr [ESP + 0x464]     ; 004c1452
    SHL ESI,0x2                         ; 004c1459
    ADD ESI,EDX                         ; 004c145c
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004c145e
    SUB ECX,dword ptr [ESI + 0x194]     ; 004c1464
    MOV ESI,dword ptr [ESI + 0x1a4]     ; 004c146a
    MOV EDX,ECX                         ; 004c1470
    MOV EAX,ECX                         ; 004c1472
    SAR EDX,0x1f                        ; 004c1474
    IDIV ESI                            ; 004c1477
    MOV EDI,EDX                         ; 004c1479
    MOV dword ptr [ESP + 0x454],EDI     ; 004c147b
    MOV dword ptr [ESP + 0x450],ESI     ; 004c1482
    FILD dword ptr [ESP + 0x454]        ; 004c1489
    FILD dword ptr [ESP + 0x450]        ; 004c1490
    FLD1                                ; 004c1497
    FDIVRP                              ; 004c1499
    MOV EDX,ECX                         ; 004c149b
    MOV EAX,ECX                         ; 004c149d
    SAR EDX,0x1f                        ; 004c149f
    IDIV ESI                            ; 004c14a2
    MOV ECX,dword ptr [EBX + 0x35e8]    ; 004c14a4
    ADD ECX,EDI                         ; 004c14aa
    INC ECX                             ; 004c14ac
    FXCH                                ; 004c14ad
    FMUL ST1                            ; 004c14af
    MOV dword ptr [ESP + 0x434],ECX     ; 004c14b1
    MOV dword ptr [ESP + 0x450],EAX     ; 004c14b8
    MOV ECX,dword ptr [EBX + 0x39e8]    ; 004c14bf
    FILD dword ptr [ESP + 0x450]        ; 004c14c5
    FMUL ST2                            ; 004c14cc
    ADD ECX,EAX                         ; 004c14ce
    MOV EAX,dword ptr [ESP + 0x434]     ; 004c14d0
    INC ECX                             ; 004c14d7
    MOV dword ptr [ESP + 0x450],EAX     ; 004c14d8
    MOV dword ptr [ESP + 0x454],ECX     ; 004c14df
    FILD dword ptr [ESP + 0x450]        ; 004c14e6
    FMUL ST3                            ; 004c14ed
    FILD dword ptr [ESP + 0x454]        ; 004c14ef
    FMULP ST4                           ; 004c14f6
    FXCH ST2                            ; 004c14f8
    FSTP float ptr [EBP + 0x25e8]       ; 004c14fa
    FSTP float ptr [EBP + 0x25ec]       ; 004c1500
    FSTP float ptr [EBP + 0x25f0]       ; 004c1506
    FSTP float ptr [EBP + 0x25f4]       ; 004c150c
    JMP 0x004c12d7                      ; 004c1512
        ;   XREF to: 004c12d7 (UNCONDITIONAL_JUMP)  ; LAB_004c12d7

