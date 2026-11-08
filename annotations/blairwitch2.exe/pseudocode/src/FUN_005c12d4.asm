; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005c12d4(char *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_005c13dc at 005c146d
;
; Called Functions:
;   FUN_005c1188
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c12d4
        ;   Label: FUN_005c12d4
    PUSH ESI                            ; 005c12d5
    SUB ESP,0x10                        ; 005c12d6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c12d9
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c12dd
    MOV AH,byte ptr [EDX]               ; 005c12e1
    MOV ESI,0xffffffff                  ; 005c12e3
    CMP AH,0x4a                         ; 005c12e8
    JNZ 0x005c12f4                      ; 005c12eb
        ;   XREF to: 005c12f4 (CONDITIONAL_JUMP)  ; LAB_005c12f4
    MOV ESI,0x1                         ; 005c12ed
    ADD EDX,ESI                         ; 005c12f2
    CMP byte ptr [EDX],0x4d             ; 005c12f4
        ;   Label: LAB_005c12f4
    JNZ 0x005c12fc                      ; 005c12f7
        ;   XREF to: 005c12fc (CONDITIONAL_JUMP)  ; LAB_005c12fc
    INC EDX                             ; 005c12f9
    XOR ESI,ESI                         ; 005c12fa
    LEA EAX,[ESP + 0xc]                 ; 005c12fc
        ;   Label: LAB_005c12fc
    PUSH EAX                            ; 005c1300
    PUSH EDX                            ; 005c1301
    MOV dword ptr [EBX + 0x20],ESI      ; 005c1302
    CALL FUN_005c1188                   ; 005c1305
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    MOV ECX,EAX                         ; 005c130a
    ADD ESP,0x8                         ; 005c130c
    MOV EDX,EAX                         ; 005c130f
    TEST ESI,ESI                        ; 005c1311
    JZ 0x005c131e                       ; 005c1313
        ;   XREF to: 005c131e (CONDITIONAL_JUMP)  ; LAB_005c131e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c1315
    MOV dword ptr [EBX + 0x1c],EAX      ; 005c1319
    JMP 0x005c1369                      ; 005c131c
        ;   XREF to: 005c1369 (UNCONDITIONAL_JUMP)  ; LAB_005c1369
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c131e
        ;   Label: LAB_005c131e
    DEC EAX                             ; 005c1322
    MOV dword ptr [EBX + 0x10],EAX      ; 005c1323
    CMP byte ptr [ECX],0x2e             ; 005c1326
    JNZ 0x005c1362                      ; 005c1329
        ;   XREF to: 005c1362 (CONDITIONAL_JUMP)  ; LAB_005c1362
    LEA EAX,[ESP + 0xc]                 ; 005c132b
    PUSH EAX                            ; 005c132f
    INC ECX                             ; 005c1330
    PUSH ECX                            ; 005c1331
    CALL FUN_005c1188                   ; 005c1332
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    MOV ECX,EAX                         ; 005c1337
    ADD ESP,0x8                         ; 005c1339
    MOV EDX,EAX                         ; 005c133c
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c133e
    MOV dword ptr [EBX + 0xc],EAX       ; 005c1342
    CMP byte ptr [ECX],0x2e             ; 005c1345
    JNZ 0x005c1362                      ; 005c1348
        ;   XREF to: 005c1362 (CONDITIONAL_JUMP)  ; LAB_005c1362
    LEA EAX,[ESP + 0xc]                 ; 005c134a
    PUSH EAX                            ; 005c134e
    INC ECX                             ; 005c134f
    PUSH ECX                            ; 005c1350
    CALL FUN_005c1188                   ; 005c1351
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    ADD ESP,0x8                         ; 005c1356
    MOV EDX,EAX                         ; 005c1359
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c135b
    MOV dword ptr [EBX + 0x18],EAX      ; 005c135f
    MOV dword ptr [EBX + 0x1c],0x0      ; 005c1362
        ;   Label: LAB_005c1362
    MOV ECX,0x2                         ; 005c1369
        ;   Label: LAB_005c1369
    XOR ESI,ESI                         ; 005c136e
    MOV dword ptr [ESP + 0x8],ECX       ; 005c1370
    MOV dword ptr [ESP],ESI             ; 005c1374
    MOV dword ptr [ESP + 0x4],ESI       ; 005c1377
    CMP byte ptr [EDX],0x2f             ; 005c137b
    JNZ 0x005c13bf                      ; 005c137e
        ;   XREF to: 005c13bf (CONDITIONAL_JUMP)  ; LAB_005c13bf
    LEA EAX,[ESP + 0x8]                 ; 005c1380
    PUSH EAX                            ; 005c1384
    INC EDX                             ; 005c1385
    PUSH EDX                            ; 005c1386
    CALL FUN_005c1188                   ; 005c1387
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    ADD ESP,0x8                         ; 005c138c
    MOV CH,byte ptr [EAX]               ; 005c138f
    MOV EDX,EAX                         ; 005c1391
    CMP CH,0x3a                         ; 005c1393
    JNZ 0x005c13bf                      ; 005c1396
        ;   XREF to: 005c13bf (CONDITIONAL_JUMP)  ; LAB_005c13bf
    LEA EDX,[ESP + 0x4]                 ; 005c1398
    PUSH EDX                            ; 005c139c
    INC EAX                             ; 005c139d
    PUSH EAX                            ; 005c139e
    CALL FUN_005c1188                   ; 005c139f
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    ADD ESP,0x8                         ; 005c13a4
    MOV CL,byte ptr [EAX]               ; 005c13a7
    MOV EDX,EAX                         ; 005c13a9
    CMP CL,0x3a                         ; 005c13ab
    JNZ 0x005c13bf                      ; 005c13ae
        ;   XREF to: 005c13bf (CONDITIONAL_JUMP)  ; LAB_005c13bf
    MOV EDX,ESP                         ; 005c13b0
    PUSH EDX                            ; 005c13b2
    INC EAX                             ; 005c13b3
    PUSH EAX                            ; 005c13b4
    CALL FUN_005c1188                   ; 005c13b5
        ;   XREF to: 005c1188 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1188()
    ADD ESP,0x8                         ; 005c13ba
    MOV EDX,EAX                         ; 005c13bd
    MOV EAX,dword ptr [ESP]             ; 005c13bf
        ;   Label: LAB_005c13bf
    MOV dword ptr [EBX],EAX             ; 005c13c2
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c13c4
    MOV dword ptr [EBX + 0x4],EAX       ; 005c13c8
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c13cb
    MOV dword ptr [EBX + 0x8],EAX       ; 005c13cf
    MOV EAX,EDX                         ; 005c13d2
    ADD ESP,0x10                        ; 005c13d4
    POP ESI                             ; 005c13d7
    POP EBX                             ; 005c13d8
    RET                                 ; 005c13d9

