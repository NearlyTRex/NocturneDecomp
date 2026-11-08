; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004613b0(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00460c70 at 00460cbc
;
; Called Functions:
;   FUN_005b9c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004613b0
        ;   Label: FUN_004613b0
    PUSH ESI                            ; 004613b1
    PUSH EDI                            ; 004613b2
    PUSH EBP                            ; 004613b3
    SUB ESP,0x104                       ; 004613b4
    MOV EBP,dword ptr [ESP + 0x118]     ; 004613ba
    MOV EDI,ESP                         ; 004613c1
    MOV ESI,EBP                         ; 004613c3
    PUSH EDI                            ; 004613c5
    MOV AL,byte ptr [ESI]               ; 004613c6
        ;   Label: LAB_004613c6
    MOV byte ptr [EDI],AL               ; 004613c8
    CMP AL,0x0                          ; 004613ca
    JZ 0x004613de                       ; 004613cc
        ;   XREF to: 004613de (CONDITIONAL_JUMP)  ; LAB_004613de
    MOV AL,byte ptr [ESI + 0x1]         ; 004613ce
    ADD ESI,0x2                         ; 004613d1
    MOV byte ptr [EDI + 0x1],AL         ; 004613d4
    ADD EDI,0x2                         ; 004613d7
    CMP AL,0x0                          ; 004613da
    JNZ 0x004613c6                      ; 004613dc
        ;   XREF to: 004613c6 (CONDITIONAL_JUMP)  ; LAB_004613c6
    POP EDI                             ; 004613de
        ;   Label: LAB_004613de
    MOV AH,byte ptr [ESP]               ; 004613df
    MOV EBX,ESP                         ; 004613e2
    TEST AH,AH                          ; 004613e4
    JZ 0x00461417                       ; 004613e6
        ;   XREF to: 00461417 (CONDITIONAL_JUMP)  ; LAB_00461417
    XOR EAX,EAX                         ; 004613e8
        ;   Label: LAB_004613e8
    MOV AL,byte ptr [EBX]               ; 004613ea
    MOV dword ptr [ESP + 0x100],EAX     ; 004613ec
    CMP EAX,0x2f                        ; 004613f3
    JNZ 0x00461435                      ; 004613f6
        ;   XREF to: 00461435 (CONDITIONAL_JUMP)  ; LAB_00461435
    MOV EAX,ESP                         ; 004613f8
        ;   Label: LAB_004613f8
    PUSH EAX                            ; 004613fa
    MOV byte ptr [EBX],0x0              ; 004613fb
    CALL FUN_005b9c20                   ; 004613fe
        ;   XREF to: 005b9c20 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9c20()
    ADD ESP,0x4                         ; 00461403
    MOV AL,byte ptr [ESP + 0x100]       ; 00461406
    MOV byte ptr [EBX],AL               ; 0046140d
    MOV DL,byte ptr [EBX + 0x1]         ; 0046140f
        ;   Label: LAB_0046140f
    INC EBX                             ; 00461412
    TEST DL,DL                          ; 00461413
    JNZ 0x004613e8                      ; 00461415
        ;   XREF to: 004613e8 (CONDITIONAL_JUMP)  ; LAB_004613e8
    PUSH EBP                            ; 00461417
        ;   Label: LAB_00461417
    CALL FUN_005b9c20                   ; 00461418
        ;   XREF to: 005b9c20 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9c20()
    ADD ESP,0x4                         ; 0046141d
    TEST EAX,EAX                        ; 00461420
    SETZ AL                             ; 00461422
    AND EAX,0xff                        ; 00461425
    ADD ESP,0x104                       ; 0046142a
    POP EBP                             ; 00461430
    POP EDI                             ; 00461431
    POP ESI                             ; 00461432
    POP EBX                             ; 00461433
    RET                                 ; 00461434
    CMP EAX,0x5c                        ; 00461435
        ;   Label: LAB_00461435
    JZ 0x004613f8                       ; 00461438
        ;   XREF to: 004613f8 (CONDITIONAL_JUMP)  ; LAB_004613f8
    JMP 0x0046140f                      ; 0046143a
        ;   XREF to: 0046140f (UNCONDITIONAL_JUMP)  ; LAB_0046140f

