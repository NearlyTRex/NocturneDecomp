; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d4780(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510460
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4780
        ;   Label: FUN_004d4780
    PUSH ESI                            ; 004d4781
    PUSH EDI                            ; 004d4782
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d4783
    PUSH EDX                            ; 004d4787
    CALL FUN_00510460                   ; 004d4788
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; undefined FUN_00510460()
    ADD ESP,0x4                         ; 004d478d
    PUSH 0x5da6ce                       ; 004d4790
    MOV EBX,EAX                         ; 004d4795
    LEA EDI,[EAX + 0x2b4]               ; 004d4797
    PUSH EDI                            ; 004d479d
    MOV dword ptr [EAX + 0x2b0],0x5f8a14 ; 004d479e
    CALL FUN_005478b0                   ; 004d47a8
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 004d47ad
    MOV ESI,0x5da6d9                    ; 004d47b0
    LEA EDI,[EBX + 0x24348]             ; 004d47b5
    PUSH EDI                            ; 004d47bb
    MOV AL,byte ptr [ESI]               ; 004d47bc
        ;   Label: LAB_004d47bc
    MOV byte ptr [EDI],AL               ; 004d47be
    CMP AL,0x0                          ; 004d47c0
    JZ 0x004d47d4                       ; 004d47c2
        ;   XREF to: 004d47d4 (CONDITIONAL_JUMP)  ; LAB_004d47d4
    MOV AL,byte ptr [ESI + 0x1]         ; 004d47c4
    ADD ESI,0x2                         ; 004d47c7
    MOV byte ptr [EDI + 0x1],AL         ; 004d47ca
    ADD EDI,0x2                         ; 004d47cd
    CMP AL,0x0                          ; 004d47d0
    JNZ 0x004d47bc                      ; 004d47d2
        ;   XREF to: 004d47bc (CONDITIONAL_JUMP)  ; LAB_004d47bc
    POP EDI                             ; 004d47d4
        ;   Label: LAB_004d47d4
    MOV EAX,EBX                         ; 004d47d5
    POP EDI                             ; 004d47d7
    POP ESI                             ; 004d47d8
    POP EBX                             ; 004d47d9
    RET                                 ; 004d47da

