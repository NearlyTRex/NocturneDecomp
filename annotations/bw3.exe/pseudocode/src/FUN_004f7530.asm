; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f7530(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x2b]:1  local_2b
;
; XREF[8]:
;   FUN_00414550 at 00414611
;   FUN_0049cca0 at 0049cccd
;   FUN_004bafd0 at 004bafed
;   FUN_004ced40 at 004cedfc
;   FUN_004d4be0 at 004d4c39
;   FUN_004da880 at 004db234
;   FUN_004f6930 at 004f696a
;   FUN_004f7a20 at 004f7b4f
;
; Called Functions:
;   FUN_00408870
;   FUN_004f7490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7530
        ;   Label: FUN_004f7530
    PUSH ESI                            ; 004f7531
    PUSH EDI                            ; 004f7532
    SUB ESP,0x20                        ; 004f7533
    MOV EDI,dword ptr [ESP + 0x34]      ; 004f7536
    PUSH EDI                            ; 004f753a
    MOV byte ptr [EDI],0x0              ; 004f753b
    CALL FUN_00408870                   ; 004f753e
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; undefined FUN_00408870()
    ADD ESP,0x4                         ; 004f7543
    MOV BL,byte ptr [EAX]               ; 004f7546
    MOV EDX,EAX                         ; 004f7548
    CMP BL,0x43                         ; 004f754a
    JNZ 0x004f7552                      ; 004f754d
        ;   XREF to: 004f7552 (CONDITIONAL_JUMP)  ; LAB_004f7552
    LEA EDX,[EAX + 0x1]                 ; 004f754f
    PUSH EDX                            ; 004f7552
        ;   Label: LAB_004f7552
    LEA EAX,[ESP + 0x4]                 ; 004f7553
    PUSH EAX                            ; 004f7557
    MOV EDX,dword ptr [ESP + 0x38]      ; 004f7558
    PUSH EDX                            ; 004f755c
    CALL FUN_004f7490                   ; 004f755d
        ;   XREF to: 004f7490 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7490()
    ADD ESP,0xc                         ; 004f7562
    MOV ESI,ESP                         ; 004f7565
    PUSH EDI                            ; 004f7567
    MOV AL,byte ptr [ESI]               ; 004f7568
        ;   Label: LAB_004f7568
    MOV byte ptr [EDI],AL               ; 004f756a
    CMP AL,0x0                          ; 004f756c
    JZ 0x004f7580                       ; 004f756e
        ;   XREF to: 004f7580 (CONDITIONAL_JUMP)  ; LAB_004f7580
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7570
    ADD ESI,0x2                         ; 004f7573
    MOV byte ptr [EDI + 0x1],AL         ; 004f7576
    ADD EDI,0x2                         ; 004f7579
    CMP AL,0x0                          ; 004f757c
    JNZ 0x004f7568                      ; 004f757e
        ;   XREF to: 004f7568 (CONDITIONAL_JUMP)  ; LAB_004f7568
    POP EDI                             ; 004f7580
        ;   Label: LAB_004f7580
    ADD ESP,0x20                        ; 004f7581
    POP EDI                             ; 004f7584
    POP ESI                             ; 004f7585
    POP EBX                             ; 004f7586
    RET                                 ; 004f7587

