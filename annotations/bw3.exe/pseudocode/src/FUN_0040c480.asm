; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040c480(char *param_1)
;
;
; XREF[2]:
;   FUN_0040c4f0 at 0040c4f8
;   FUN_004f5cc0 at 004f5ebe
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;   undefined4 DAT_007df9c4
;   undefined4 DAT_007df9c8
;   undefined4 DAT_007df9cc
;
; Called Functions:
;   FUN_005a35a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c480
        ;   Label: FUN_0040c480
    PUSH ESI                            ; 0040c481
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040c482
    XOR EBX,EBX                         ; 0040c486
    XOR EAX,EAX                         ; 0040c488
        ;   Label: LAB_0040c488
    MOV AL,byte ptr [ESI]               ; 0040c48a
    INC ESI                             ; 0040c48c
    TEST EAX,EAX                        ; 0040c48d
    JNZ 0x0040c4b7                      ; 0040c48f
        ;   XREF to: 0040c4b7 (CONDITIONAL_JUMP)  ; LAB_0040c4b7
    MOV EDX,dword ptr [0x007df9c4]      ; 0040c491 | DAT_007df9c4
    MOV ESI,EBX                         ; 0040c497
    TEST EDX,EDX                        ; 0040c499
    JLE 0x0040c4b2                      ; 0040c49b
        ;   XREF to: 0040c4b2 (CONDITIONAL_JUMP)  ; LAB_0040c4b2
    SHL EDX,0x2                         ; 0040c49d
    MOV EBX,dword ptr [EAX + 0x7df9c8]  ; 0040c4a0 | DAT_007df9c8 | DAT_007df9cc
        ;   Label: LAB_0040c4a0
    CMP ESI,dword ptr [EBX + 0x38]      ; 0040c4a6
    JZ 0x0040c4e8                       ; 0040c4a9
        ;   XREF to: 0040c4e8 (CONDITIONAL_JUMP)  ; LAB_0040c4e8
    ADD EAX,0x4                         ; 0040c4ab
    CMP EAX,EDX                         ; 0040c4ae
    JL 0x0040c4a0                       ; 0040c4b0
        ;   XREF to: 0040c4a0 (CONDITIONAL_JUMP)  ; LAB_0040c4a0
    XOR EAX,EAX                         ; 0040c4b2
        ;   Label: LAB_0040c4b2
    POP ESI                             ; 0040c4b4
    POP EBX                             ; 0040c4b5
    RET                                 ; 0040c4b6
    MOV DL,AL                           ; 0040c4b7
        ;   Label: LAB_0040c4b7
    INC DL                              ; 0040c4b9
    AND EDX,0xff                        ; 0040c4bb
    TEST byte ptr [EDX + 0x6074b8],0xe0 ; 0040c4c1 | DAT_006074b8
    JZ 0x0040c488                       ; 0040c4c8
        ;   XREF to: 0040c488 (CONDITIONAL_JUMP)  ; LAB_0040c488
    PUSH EAX                            ; 0040c4ca
    CALL FUN_005a35a0                   ; 0040c4cb
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a35a0()
    MOV EDX,EBX                         ; 0040c4d0
    SHL EDX,0x7                         ; 0040c4d2
    SHR EBX,0x19                        ; 0040c4d5
    ADD EDX,EBX                         ; 0040c4d8
    MOV EBX,EAX                         ; 0040c4da
    SHL EBX,0x11                        ; 0040c4dc
    ADD EBX,EDX                         ; 0040c4df
    ADD ESP,0x4                         ; 0040c4e1
    ADD EBX,EAX                         ; 0040c4e4
    JMP 0x0040c488                      ; 0040c4e6
        ;   XREF to: 0040c488 (UNCONDITIONAL_JUMP)  ; LAB_0040c488
    MOV EAX,EBX                         ; 0040c4e8
        ;   Label: LAB_0040c4e8
    POP ESI                             ; 0040c4ea
    POP EBX                             ; 0040c4eb
    RET                                 ; 0040c4ec

