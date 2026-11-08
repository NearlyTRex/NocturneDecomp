; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6310(void)
;
;
; XREF[1]:
;   FUN_004d5e40 at 004d5e66
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061dcb4
;   undefined4 DAT_0061dccc
;   undefined4 DAT_0061dce4
;   undefined4 DAT_0061dd2c
;   undefined4 DAT_0061dd44
;   undefined4 DAT_0061deac
;   undefined4 DAT_0061e32c
;   undefined4 DAT_0061e344
;   undefined4 DAT_0061e5e4
;   undefined4 DAT_0061ee2c
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6310
        ;   Label: FUN_004e6310
    PUSH ESI                            ; 004e6311
    PUSH EDI                            ; 004e6312
    PUSH EBP                            ; 004e6313
    PUSH 0x61dcb4                       ; 004e6314 | DAT_0061dcb4
    MOV EDX,dword ptr [0x00612560]      ; 004e6319 | DAT_00612560
    PUSH EDX                            ; 004e631f | DAT_01bc120c
    MOV EBX,0x61dccc                    ; 004e6320 | DAT_0061dccc
    CALL FUN_00484f00                   ; 004e6325
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    LEA ESI,[EBX + 0x60]                ; 004e632a | DAT_0061dd2c
    ADD ESP,0x8                         ; 004e632d
    PUSH EBX                            ; 004e6330 | DAT_0061dccc | DAT_0061dce4
        ;   Label: LAB_004e6330
    MOV ECX,dword ptr [0x00612560]      ; 004e6331 | DAT_00612560
    PUSH ECX                            ; 004e6337 | DAT_01bc120c
    CALL FUN_00484f00                   ; 004e6338
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD EBX,0x18                        ; 004e633d
    ADD ESP,0x8                         ; 004e6340
    CMP EBX,ESI                         ; 004e6343
    JNZ 0x004e6330                      ; 004e6345
        ;   XREF to: 004e6330 (CONDITIONAL_JUMP)  ; LAB_004e6330
    MOV EBP,0x61dd2c                    ; 004e6347 | DAT_0061dd2c
    XOR EDI,EDI                         ; 004e634c
    ADD EBP,0x180                       ; 004e634e
    IMUL EBX,EDI,0x180                  ; 004e6354
        ;   Label: LAB_004e6354
    MOV ESI,EBP                         ; 004e635a
    ADD EBX,0x61dd2c                    ; 004e635c | DAT_0061dd2c
    PUSH EBX                            ; 004e6362 | DAT_0061dd2c | DAT_0061dd44 | DAT_0061deac
        ;   Label: LAB_004e6362
    MOV EAX,[0x00612560]                ; 004e6363 | DAT_00612560
    PUSH EAX                            ; 004e6368 | DAT_01bc120c
    CALL FUN_00484f00                   ; 004e6369
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD EBX,0x18                        ; 004e636e
    ADD ESP,0x8                         ; 004e6371
    CMP EBX,ESI                         ; 004e6374
    JNZ 0x004e6362                      ; 004e6376
        ;   XREF to: 004e6362 (CONDITIONAL_JUMP)  ; LAB_004e6362
    INC EDI                             ; 004e6378
    ADD EBP,0x180                       ; 004e6379
    CMP EDI,0x4                         ; 004e637f
    JL 0x004e6354                       ; 004e6382
        ;   XREF to: 004e6354 (CONDITIONAL_JUMP)  ; LAB_004e6354
    MOV EBP,0x61e32c                    ; 004e6384 | DAT_0061e32c
    XOR EDI,EDI                         ; 004e6389
    ADD EBP,0x2b8                       ; 004e638b
    IMUL EBX,EDI,0x2b8                  ; 004e6391
        ;   Label: LAB_004e6391
    MOV ESI,EBP                         ; 004e6397
    ADD EBX,0x61e32c                    ; 004e6399 | DAT_0061e32c
    PUSH EBX                            ; 004e639f | DAT_0061e32c | DAT_0061e344 | DAT_0061e5e4
        ;   Label: LAB_004e639f
    MOV EDX,dword ptr [0x00612560]      ; 004e63a0 | DAT_00612560
    PUSH EDX                            ; 004e63a6 | DAT_01bc120c
    CALL FUN_00484f00                   ; 004e63a7
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD EBX,0x18                        ; 004e63ac
    ADD ESP,0x8                         ; 004e63af
    CMP EBX,ESI                         ; 004e63b2
    JNZ 0x004e639f                      ; 004e63b4
        ;   XREF to: 004e639f (CONDITIONAL_JUMP)  ; LAB_004e639f
    INC EDI                             ; 004e63b6
    ADD EBP,0x2b8                       ; 004e63b7
    CMP EDI,0x4                         ; 004e63bd
    JL 0x004e6391                       ; 004e63c0
        ;   XREF to: 004e6391 (CONDITIONAL_JUMP)  ; LAB_004e6391
    PUSH 0x61ee2c                       ; 004e63c2 | DAT_0061ee2c
    MOV ECX,dword ptr [0x00612560]      ; 004e63c7 | DAT_00612560
    PUSH ECX                            ; 004e63cd | DAT_01bc120c
    CALL FUN_00484f00                   ; 004e63ce
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 004e63d3
    POP EBP                             ; 004e63d6
    POP EDI                             ; 004e63d7
    POP ESI                             ; 004e63d8
    POP EBX                             ; 004e63d9
    RET                                 ; 004e63da

