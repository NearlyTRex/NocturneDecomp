; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b1310(undefined4 *param_1,byte *param_2,int param_3,int param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004b1460 at 004b2621
;
; Referenced Globals:
;   undefined4 DAT_005f07c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1310
        ;   Label: FUN_004b1310
    PUSH ESI                            ; 004b1311
    PUSH EDI                            ; 004b1312
    PUSH EBP                            ; 004b1313
    MOV EBP,ESP                         ; 004b1314
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b1316
    MOV ESI,dword ptr [EBP + 0x18]      ; 004b131c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004b1322
    MOV ECX,dword ptr [EBP + 0x20]      ; 004b1328
    PXOR MM7,MM7                        ; 004b132e
    MOVD MM4,dword ptr [0x005f07c0]     ; 004b1331 | DAT_005f07c0
    PUNPCKLBW MM4,MM7                   ; 004b1338
    MOV EAX,0xffffffff                  ; 004b133b
    MOVD MM6,EAX                        ; 004b1340
    PUNPCKLBW MM6,MM7                   ; 004b1343
    MOVZX EAX,byte ptr [ESI]            ; 004b1346
        ;   Label: LAB_004b1346
    CMP EAX,0x0                         ; 004b1349
    JZ 0x004b138d                       ; 004b134c
        ;   XREF to: 004b138d (CONDITIONAL_JUMP)  ; LAB_004b138d
    SHL EAX,0x2                         ; 004b134e
    MOV EAX,dword ptr [EAX + EDX*0x1]   ; 004b1351
    MOVD MM2,EAX                        ; 004b1354
    MOVD MM0,dword ptr [EBP + 0x24]     ; 004b1357
    MOVD MM1,dword ptr [EDI]            ; 004b135e
    PUNPCKLBW MM0,MM7                   ; 004b1361
    PUNPCKLBW MM1,MM7                   ; 004b1364
    PUNPCKLBW MM2,MM7                   ; 004b1367
    PUNPCKLBW MM3,MM7                   ; 004b136a
    PMULLW MM2,MM4                      ; 004b136d
    PSRLW MM2,0x8                       ; 004b1370
    MOVQ MM3,MM2                        ; 004b1374
    PXOR MM3,MM6                        ; 004b1377
    PMULLW MM0,MM2                      ; 004b137a
    PMULLW MM1,MM3                      ; 004b137d
    PADDW MM0,MM1                       ; 004b1380
    PSRLW MM0,0x8                       ; 004b1383
    PACKUSWB MM0,MM7                    ; 004b1387
    MOVD dword ptr [EDI],MM0            ; 004b138a
    INC ESI                             ; 004b138d
        ;   Label: LAB_004b138d
    ADD EDI,0x4                         ; 004b138e
    DEC ECX                             ; 004b1391
    JG 0x004b1346                       ; 004b1392
        ;   XREF to: 004b1346 (CONDITIONAL_JUMP)  ; LAB_004b1346
    EMMS                                ; 004b1394
    MOV ESP,EBP                         ; 004b1396
    POP EBP                             ; 004b1398
    POP EDI                             ; 004b1399
    POP ESI                             ; 004b139a
    POP EBX                             ; 004b139b
    RET                                 ; 004b139c

