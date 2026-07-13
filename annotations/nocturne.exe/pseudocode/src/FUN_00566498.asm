; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00566498(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[18]:
;   FUN_00474460 at 0047459c
;   FUN_004746b0 at 0047473c
;   FUN_004748b0 at 0047493c
;   FUN_00474ae0 at 00474b16
;   FUN_0048ff70 at 004900b6
;   FUN_004a3b90 at 004a3bd5
;   FUN_004a4170 at 004a41ab
;   FUN_004a57c0 at 004a5841
;   FUN_004a6570 at 004a65a4
;   FUN_004febd0 at 004fec3c
;   ... and 8 more
;
; Called Functions:
;   FUN_00566450
;   FUN_0056d9f0
;   FUN_0056da80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566498
        ;   Label: FUN_00566498
    PUSH ESI                            ; 00566499
    PUSH EDI                            ; 0056649a
    PUSH EBP                            ; 0056649b
    SUB ESP,0x4                         ; 0056649c
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056649f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005664a3
    MOV AH,byte ptr [EBX]               ; 005664a7
    TEST AH,AH                          ; 005664a9
    JZ 0x005664c7                       ; 005664ab
        ;   XREF to: 005664c7 (CONDITIONAL_JUMP)  ; LAB_005664c7
    MOV DL,byte ptr [EBX + 0x1]         ; 005664ad
    CMP DL,0x3a                         ; 005664b0
    JNZ 0x005664c7                      ; 005664b3
        ;   XREF to: 005664c7 (CONDITIONAL_JUMP)  ; LAB_005664c7
    TEST ESI,ESI                        ; 005664b5
    JZ 0x005664c2                       ; 005664b7
        ;   XREF to: 005664c2 (CONDITIONAL_JUMP)  ; LAB_005664c2
    MOV byte ptr [ESI + 0x2],0x0        ; 005664b9
    MOV byte ptr [ESI],AH               ; 005664bd
    MOV byte ptr [ESI + 0x1],DL         ; 005664bf
    ADD EBX,0x2                         ; 005664c2
        ;   Label: LAB_005664c2
    JMP 0x005664ce                      ; 005664c5
        ;   XREF to: 005664ce (UNCONDITIONAL_JUMP)  ; LAB_005664ce
    TEST ESI,ESI                        ; 005664c7
        ;   Label: LAB_005664c7
    JZ 0x005664ce                       ; 005664c9
        ;   XREF to: 005664ce (CONDITIONAL_JUMP)  ; LAB_005664ce
    MOV byte ptr [ESI],0x0              ; 005664cb
    MOV EBP,EBX                         ; 005664ce
        ;   Label: LAB_005664ce
    MOV dword ptr [ESP],EBX             ; 005664d0
    MOV DH,byte ptr [EBX]               ; 005664d3
    XOR EDI,EDI                         ; 005664d5
    TEST DH,DH                          ; 005664d7
    JZ 0x0056650e                       ; 005664d9
        ;   XREF to: 0056650e (CONDITIONAL_JUMP)  ; LAB_0056650e
    PUSH EBX                            ; 005664db
        ;   Label: LAB_005664db
    CALL FUN_0056d9f0                   ; 005664dc
        ;   XREF to: 0056d9f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056d9f0()
    MOV ESI,EAX                         ; 005664e1
    ADD ESP,0x4                         ; 005664e3
    CMP EAX,0x2e                        ; 005664e6
    JNZ 0x005664f0                      ; 005664e9
        ;   XREF to: 005664f0 (CONDITIONAL_JUMP)  ; LAB_005664f0
    MOV EDI,EBX                         ; 005664eb
    INC EBX                             ; 005664ed
    JMP 0x00566509                      ; 005664ee
        ;   XREF to: 00566509 (UNCONDITIONAL_JUMP)  ; LAB_00566509
    PUSH EBX                            ; 005664f0
        ;   Label: LAB_005664f0
    CALL FUN_0056da80                   ; 005664f1
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    MOV EBX,EAX                         ; 005664f6
    ADD ESP,0x4                         ; 005664f8
    CMP ESI,0x5c                        ; 005664fb
    JZ 0x00566505                       ; 005664fe
        ;   XREF to: 00566505 (CONDITIONAL_JUMP)  ; LAB_00566505
    CMP ESI,0x2f                        ; 00566500
    JNZ 0x00566509                      ; 00566503
        ;   XREF to: 00566509 (CONDITIONAL_JUMP)  ; LAB_00566509
    MOV EBP,EBX                         ; 00566505
        ;   Label: LAB_00566505
    XOR EDI,EDI                         ; 00566507
    CMP byte ptr [EBX],0x0              ; 00566509
        ;   Label: LAB_00566509
    JNZ 0x005664db                      ; 0056650c
        ;   XREF to: 005664db (CONDITIONAL_JUMP)  ; LAB_005664db
    MOV EDX,dword ptr [ESP]             ; 0056650e
        ;   Label: LAB_0056650e
    MOV ESI,EBP                         ; 00566511
    PUSH 0xff                           ; 00566513
    SUB ESI,EDX                         ; 00566518
    PUSH ESI                            ; 0056651a
    PUSH EDX                            ; 0056651b
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0056651c
    PUSH ESI                            ; 00566520
    CALL FUN_00566450                   ; 00566521
        ;   XREF to: 00566450 (UNCONDITIONAL_CALL)  ; undefined FUN_00566450()
    ADD ESP,0x10                        ; 00566526
    TEST EDI,EDI                        ; 00566529
    JNZ 0x0056652f                      ; 0056652b
        ;   XREF to: 0056652f (CONDITIONAL_JUMP)  ; LAB_0056652f
    MOV EDI,EBX                         ; 0056652d
    MOV ESI,EDI                         ; 0056652f
        ;   Label: LAB_0056652f
    PUSH 0xff                           ; 00566531
    SUB ESI,EBP                         ; 00566536
    PUSH ESI                            ; 00566538
    PUSH EBP                            ; 00566539
    MOV EBP,dword ptr [ESP + 0x30]      ; 0056653a
    PUSH EBP                            ; 0056653e
    CALL FUN_00566450                   ; 0056653f
        ;   XREF to: 00566450 (UNCONDITIONAL_CALL)  ; undefined FUN_00566450()
    ADD ESP,0x10                        ; 00566544
    PUSH 0xff                           ; 00566547
    SUB EBX,EDI                         ; 0056654c
    PUSH EBX                            ; 0056654e
    PUSH EDI                            ; 0056654f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00566550
    PUSH EAX                            ; 00566554
    CALL FUN_00566450                   ; 00566555
        ;   XREF to: 00566450 (UNCONDITIONAL_CALL)  ; undefined FUN_00566450()
    ADD ESP,0x10                        ; 0056655a
    ADD ESP,0x4                         ; 0056655d
    POP EBP                             ; 00566560
    POP EDI                             ; 00566561
    POP ESI                             ; 00566562
    POP EBX                             ; 00566563
    RET                                 ; 00566564

