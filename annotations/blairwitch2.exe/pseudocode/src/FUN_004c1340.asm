; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c1340(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1340
        ;   Label: FUN_004c1340
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c1341
    PUSH EBX                            ; 004c1345
    CALL FUN_00408790                   ; 004c1346
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 004c134b
    ADD EAX,0x2b4                       ; 004c134e
    PUSH EAX                            ; 004c1353
    CALL FUN_0044fc80                   ; 004c1354
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 004c1359
    LEA EBX,[EAX + 0xfffffd4c]          ; 004c135c
    PUSH 0x5d8e6b                       ; 004c1362
    LEA EAX,[EBX + 0x2b4]               ; 004c1367
    PUSH EAX                            ; 004c136d
    MOV dword ptr [EBX + 0x2b0],0x5f7794 ; 004c136e
    CALL FUN_0044fd70                   ; 004c1378
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 004c137d
    MOV EAX,EBX                         ; 004c1380
    MOV dword ptr [EBX + 0x430],0x0     ; 004c1382
    POP EBX                             ; 004c138c
    RET                                 ; 004c138d

