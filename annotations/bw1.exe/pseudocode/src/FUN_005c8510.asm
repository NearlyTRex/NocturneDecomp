; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c8510(LPCSTR param_1)
;
; Local Variables:
; undefined4       Stack[-0x148]:4  local_148
;
; XREF[1]:
;   FUN_005c1dc0 at 005c1dc6
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005d0558 = 001d0d6a
;
; Called Functions:
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8510
        ;   Label: FUN_005c8510
    PUSH ESI                            ; 005c8511
    SUB ESP,0x140                       ; 005c8512
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005c8518
    MOV DL,0x2a                         ; 005c851f
    MOV ESI,EBX                         ; 005c8521
    MOV AL,byte ptr [ESI]               ; 005c8523
        ;   Label: LAB_005c8523
    CMP AL,DL                           ; 005c8525
    JZ 0x005c853b                       ; 005c8527
        ;   XREF to: 005c853b (CONDITIONAL_JUMP)  ; LAB_005c853b
    CMP AL,0x0                          ; 005c8529
    JZ 0x005c8539                       ; 005c852b
        ;   XREF to: 005c8539 (CONDITIONAL_JUMP)  ; LAB_005c8539
    INC ESI                             ; 005c852d
    MOV AL,byte ptr [ESI]               ; 005c852e
    CMP AL,DL                           ; 005c8530
    JZ 0x005c853b                       ; 005c8532
        ;   XREF to: 005c853b (CONDITIONAL_JUMP)  ; LAB_005c853b
    INC ESI                             ; 005c8534
    CMP AL,0x0                          ; 005c8535
    JNZ 0x005c8523                      ; 005c8537
        ;   XREF to: 005c8523 (CONDITIONAL_JUMP)  ; LAB_005c8523
    SUB ESI,ESI                         ; 005c8539
        ;   Label: LAB_005c8539
    TEST ESI,ESI                        ; 005c853b
        ;   Label: LAB_005c853b
    JNZ 0x005c855f                      ; 005c853d
        ;   XREF to: 005c855f (CONDITIONAL_JUMP)  ; LAB_005c855f
    MOV DL,0x3f                         ; 005c853f
    MOV ESI,EBX                         ; 005c8541
    MOV AL,byte ptr [ESI]               ; 005c8543
        ;   Label: LAB_005c8543
    CMP AL,DL                           ; 005c8545
    JZ 0x005c855b                       ; 005c8547
        ;   XREF to: 005c855b (CONDITIONAL_JUMP)  ; LAB_005c855b
    CMP AL,0x0                          ; 005c8549
    JZ 0x005c8559                       ; 005c854b
        ;   XREF to: 005c8559 (CONDITIONAL_JUMP)  ; LAB_005c8559
    INC ESI                             ; 005c854d
    MOV AL,byte ptr [ESI]               ; 005c854e
    CMP AL,DL                           ; 005c8550
    JZ 0x005c855b                       ; 005c8552
        ;   XREF to: 005c855b (CONDITIONAL_JUMP)  ; LAB_005c855b
    INC ESI                             ; 005c8554
    CMP AL,0x0                          ; 005c8555
    JNZ 0x005c8543                      ; 005c8557
        ;   XREF to: 005c8543 (CONDITIONAL_JUMP)  ; LAB_005c8543
    SUB ESI,ESI                         ; 005c8559
        ;   Label: LAB_005c8559
    TEST ESI,ESI                        ; 005c855b
        ;   Label: LAB_005c855b
    JZ 0x005c8566                       ; 005c855d
        ;   XREF to: 005c8566 (CONDITIONAL_JUMP)  ; LAB_005c8566
    MOV EAX,0xffffffff                  ; 005c855f
        ;   Label: LAB_005c855f
    JMP 0x005c8579                      ; 005c8564
        ;   XREF to: 005c8579 (UNCONDITIONAL_JUMP)  ; LAB_005c8579
    MOV EAX,ESP                         ; 005c8566
        ;   Label: LAB_005c8566
    PUSH EAX                            ; 005c8568
    PUSH EBX                            ; 005c8569
    CALL dword ptr CS:[0x5d0558]        ; 005c856a | PTR_FindFirstFileA_005d0558
    CMP EAX,-0x1                        ; 005c8571
    JZ 0x005c8579                       ; 005c8574
        ;   XREF to: 005c8579 (CONDITIONAL_JUMP)  ; LAB_005c8579
    MOV EAX,dword ptr [ESP]             ; 005c8576
    ADD ESP,0x140                       ; 005c8579
        ;   Label: LAB_005c8579
    POP ESI                             ; 005c857f
    POP EBX                             ; 005c8580
    RET                                 ; 005c8581

