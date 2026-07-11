; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00465341(uint param_1,uint param_2,uint param_3)
;
;
; XREF[5]:
;   FUN_00440610 at 004406c7
;   FUN_00440710 at 0044092b
;   FUN_00440c50 at 00440d0d
;   FUN_0044e660 at 0044e6df
;   FUN_0044e970 at 0044eb4c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00465341
        ;   Label: FUN_00465341
    MOV EBP,ESP                         ; 00465342
    PUSH ESI                            ; 00465344
    PUSH EDI                            ; 00465345
    PUSH EAX                            ; 00465346
    PUSH ECX                            ; 00465347
    MOV ESI,dword ptr [EBP + 0xc]       ; 00465348
    MOV ECX,dword ptr [EBP + 0x10]      ; 0046534b
    MOV AL,byte ptr [ESI]               ; 0046534e
        ;   Label: LAB_0046534e
    ADD ESI,0x20                        ; 00465350
    SUB ECX,0x20                        ; 00465353
    JG 0x0046534e                       ; 00465356
        ;   XREF to: 0046534e (CONDITIONAL_JUMP)  ; LAB_0046534e
    MOV ESI,dword ptr [EBP + 0xc]       ; 00465358
    AND ESI,0xfffffff8                  ; 0046535b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0046535e
    AND EDI,0xfffffff8                  ; 00465361
    MOV ECX,dword ptr [EBP + 0x10]      ; 00465364
    SHR ECX,0x3                         ; 00465367
    INC ECX                             ; 0046536a
    MOVQ MM0,qword ptr [ESI]            ; 0046536b
        ;   Label: LAB_0046536b
    MOVQ qword ptr [EDI],MM0            ; 0046536e
    ADD ESI,0x8                         ; 00465371
    ADD EDI,0x8                         ; 00465374
    DEC ECX                             ; 00465377
    JGE 0x0046536b                      ; 00465378
        ;   XREF to: 0046536b (CONDITIONAL_JUMP)  ; LAB_0046536b
    POP ECX                             ; 0046537a
    POP EAX                             ; 0046537b
    EMMS                                ; 0046537c
    POP EDI                             ; 0046537e
    POP ESI                             ; 0046537f
    LEAVE                               ; 00465380
    RET                                 ; 00465381

