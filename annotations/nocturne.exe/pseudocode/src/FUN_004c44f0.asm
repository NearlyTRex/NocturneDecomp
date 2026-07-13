; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c44f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_model_0058774b+1
;   string s_ladderSize_00587752
;   string s_masterActor_0058775d
;   string s_groundType_00587769
;   undefined4 DAT_005bac68
;
; Called Functions:
;   FUN_0040c450
;   FUN_0040c900
;   FUN_0040c980
;   FUN_0040ca00
;   FUN_0040d2d0
;   FUN_004c46b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c44f0
        ;   Label: FUN_004c44f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c44f1
    PUSH EBX                            ; 004c44f5
    CALL FUN_0040d2d0                   ; 004c44f6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 004c44fb
    PUSH 0x58774c                       ; 004c44fe | s_model_0058774b+1
    LEA EAX,[EBX + 0x150]               ; 004c4503
    PUSH EAX                            ; 004c4509
    CALL FUN_0040ca00                   ; 004c450a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca00()
    ADD ESP,0x8                         ; 004c450f
    PUSH 0x587752                       ; 004c4512 | = "ladderSize"
    LEA EAX,[EBX + 0x2cc]               ; 004c4517
    PUSH EAX                            ; 004c451d
    CALL FUN_0040c450                   ; 004c451e
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x8                         ; 004c4523
    PUSH 0x58775d                       ; 004c4526 | = "masterActor"
    LEA EAX,[EBX + 0x2d8]               ; 004c452b
    PUSH EAX                            ; 004c4531
    CALL FUN_0040c980                   ; 004c4532
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 004c4537
    PUSH EBX                            ; 004c453a
    CALL FUN_004c46b0                   ; 004c453b
        ;   XREF to: 004c46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c46b0()
    MOV EDX,dword ptr [0x005bac68]      ; 004c4540 | DAT_005bac68
    ADD ESP,0x4                         ; 004c4546
    CMP EDX,0x2                         ; 004c4549
    JGE 0x004c4550                      ; 004c454c
        ;   XREF to: 004c4550 (CONDITIONAL_JUMP)  ; LAB_004c4550
    POP EBX                             ; 004c454e
    RET                                 ; 004c454f
    PUSH 0x587769                       ; 004c4550 | = "groundType"
        ;   Label: LAB_004c4550
    ADD EBX,0x2f4                       ; 004c4555
    PUSH EBX                            ; 004c455b
    CALL FUN_0040c900                   ; 004c455c
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004c4561
    POP EBX                             ; 004c4564
    RET                                 ; 004c4565

