; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d12d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510460
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d12d0
        ;   Label: FUN_004d12d0
    PUSH ESI                            ; 004d12d1
    PUSH EDI                            ; 004d12d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d12d3
    PUSH EDX                            ; 004d12d7
    CALL FUN_00510460                   ; 004d12d8
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; undefined FUN_00510460()
    ADD ESP,0x4                         ; 004d12dd
    PUSH 0x5da107                       ; 004d12e0
    MOV EBX,EAX                         ; 004d12e5
    LEA EDI,[EAX + 0x2b4]               ; 004d12e7
    PUSH EDI                            ; 004d12ed
    MOV dword ptr [EAX + 0x2b0],0x5f86d4 ; 004d12ee
    CALL FUN_005478b0                   ; 004d12f8
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x246f4],0x0   ; 004d12fd
    MOV dword ptr [EBX + 0x246fc],0x0   ; 004d1307
    MOV ESI,0x5da113                    ; 004d1311
    MOV dword ptr [EBX + 0x24700],0x0   ; 004d1316
    ADD ESP,0x8                         ; 004d1320
    MOV dword ptr [EBX + 0x24704],0x0   ; 004d1323
    LEA EDI,[EBX + 0x2434c]             ; 004d132d
    MOV dword ptr [EBX + 0x24348],0x40a00000 ; 004d1333
    PUSH EDI                            ; 004d133d
    MOV AL,byte ptr [ESI]               ; 004d133e
        ;   Label: LAB_004d133e
    MOV byte ptr [EDI],AL               ; 004d1340
    CMP AL,0x0                          ; 004d1342
    JZ 0x004d1356                       ; 004d1344
        ;   XREF to: 004d1356 (CONDITIONAL_JUMP)  ; LAB_004d1356
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1346
    ADD ESI,0x2                         ; 004d1349
    MOV byte ptr [EDI + 0x1],AL         ; 004d134c
    ADD EDI,0x2                         ; 004d134f
    CMP AL,0x0                          ; 004d1352
    JNZ 0x004d133e                      ; 004d1354
        ;   XREF to: 004d133e (CONDITIONAL_JUMP)  ; LAB_004d133e
    POP EDI                             ; 004d1356
        ;   Label: LAB_004d1356
    MOV dword ptr [EBX + 0x24708],0x0   ; 004d1357
    MOV dword ptr [EBX + 0x276c],0x0    ; 004d1361
    MOV dword ptr [EBX + 0x24720],0x0   ; 004d136b
    MOV dword ptr [EBX + 0x24724],0x0   ; 004d1375
    MOV byte ptr [EBX + 0x243b0],0x0    ; 004d137f
    MOV byte ptr [EBX + 0x243d0],0x0    ; 004d1386
    MOV byte ptr [EBX + 0x24434],0x0    ; 004d138d
    MOV byte ptr [EBX + 0x24498],0x0    ; 004d1394
    MOV byte ptr [EBX + 0x244fc],0x0    ; 004d139b
    MOV byte ptr [EBX + 0x24560],0x0    ; 004d13a2
    MOV byte ptr [EBX + 0x245c4],0x0    ; 004d13a9
    MOV dword ptr [EBX + 0x24728],0x0   ; 004d13b0
    MOV dword ptr [EBX + 0x2472c],0x0   ; 004d13ba
    MOV dword ptr [EBX + 0x2471c],0x0   ; 004d13c4
    MOV byte ptr [EBX + 0x25b4],0x0     ; 004d13ce
    MOV byte ptr [EBX + 0x24628],0x0    ; 004d13d5
    MOV byte ptr [EBX + 0x2468c],0x0    ; 004d13dc
    MOV EAX,EBX                         ; 004d13e3
    MOV dword ptr [EBX + 0x25b0],0x1    ; 004d13e5
    POP EDI                             ; 004d13ef
    POP ESI                             ; 004d13f0
    POP EBX                             ; 004d13f1
    RET                                 ; 004d13f2

