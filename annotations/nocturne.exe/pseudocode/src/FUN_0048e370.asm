; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0048e370(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_question.kfm_00581639
;   undefined1 DAT_00581646
;   undefined1 DAT_00581647
;   undefined1 DAT_00581648
;   undefined1 DAT_00581649
;   undefined1* PTR_FUN_0059d684 = 0048e410
;
; Called Functions:
;   FUN_00409d30
;   FUN_00454490
;   FUN_00454580
;   FUN_0048cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e370
        ;   Label: FUN_0048e370
    PUSH ESI                            ; 0048e371
    PUSH EDI                            ; 0048e372
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048e373
    PUSH EBX                            ; 0048e377
    CALL FUN_00409d30                   ; 0048e378
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0048e37d
    ADD EAX,0x150                       ; 0048e380
    PUSH EAX                            ; 0048e385
    CALL FUN_00454490                   ; 0048e386
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined FUN_00454490()
    ADD ESP,0x4                         ; 0048e38b
    ADD EAX,0x1e8                       ; 0048e38e
    PUSH EAX                            ; 0048e393
    CALL FUN_0048cf60                   ; 0048e394
        ;   XREF to: 0048cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0048cf60()
    ADD ESP,0x4                         ; 0048e399
    LEA EBX,[EAX + 0xfffffcc8]          ; 0048e39c
    PUSH 0x581639                       ; 0048e3a2 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 0048e3a7
    PUSH EAX                            ; 0048e3ad
    MOV ESI,0x581646                    ; 0048e3ae | DAT_00581646
    MOV dword ptr [EBX + 0x14c],0x59d684 ; 0048e3b3 | PTR_FUN_0059d684
    CALL FUN_00454580                   ; 0048e3bd
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 0048e3c2
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0048e3c5
    LEA EDI,[EBX + 0x2d4]               ; 0048e3cf
    MOV dword ptr [EBX + 0x2d0],0x41200000 ; 0048e3d5
    PUSH EDI                            ; 0048e3df
    MOV AL,byte ptr [ESI]               ; 0048e3e0 | DAT_00581646 | DAT_00581648
        ;   Label: LAB_0048e3e0
    MOV byte ptr [EDI],AL               ; 0048e3e2
    CMP AL,0x0                          ; 0048e3e4
    JZ 0x0048e3f8                       ; 0048e3e6
        ;   XREF to: 0048e3f8 (CONDITIONAL_JUMP)  ; LAB_0048e3f8
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e3e8 | DAT_00581647 | DAT_00581649
    ADD ESI,0x2                         ; 0048e3eb
    MOV byte ptr [EDI + 0x1],AL         ; 0048e3ee
    ADD EDI,0x2                         ; 0048e3f1
    CMP AL,0x0                          ; 0048e3f4
    JNZ 0x0048e3e0                      ; 0048e3f6
        ;   XREF to: 0048e3e0 (CONDITIONAL_JUMP)  ; LAB_0048e3e0
    POP EDI                             ; 0048e3f8
        ;   Label: LAB_0048e3f8
    MOV EAX,EBX                         ; 0048e3f9
    MOV dword ptr [EBX + 0x5d4],0x0     ; 0048e3fb
    POP EDI                             ; 0048e405
    POP ESI                             ; 0048e406
    POP EBX                             ; 0048e407
    RET                                 ; 0048e408

