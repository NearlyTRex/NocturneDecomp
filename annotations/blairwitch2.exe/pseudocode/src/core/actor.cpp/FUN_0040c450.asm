; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_0040c450(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[133]:
;   FUN_00408270 at 00408285
;   FUN_0040dd50 at 0040dd6b
;   FUN_0040e4b0 at 0040e4cb
;   FUN_0040e9d0 at 0040e9eb
;   FUN_0040ede0 at 0040edfb
;   FUN_0040f2d0 at 0040f2eb
;   FUN_0040f600 at 0040f61b
;   FUN_00410c50 at 00410c6b
;   FUN_00410ed0 at 00410eeb
;   FUN_00411630 at 0041164b
;   ... and 123 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005cae00
;   TerminatedCString s_Too_many_actor_types_005cae12
;   undefined4 DAT_0061ed94
;   undefined4 DAT_007bc044
;   undefined4 DAT_007bc048
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c450
        ;   Label: FUN_0040c450
    PUSH ESI                            ; 0040c451
    PUSH EDI                            ; 0040c452
    PUSH EBP                            ; 0040c453
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c454
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c458
    MOV EDI,EBP                         ; 0040c45c
    PUSH EDI                            ; 0040c45e
    MOV AL,byte ptr [ESI]               ; 0040c45f
        ;   Label: LAB_0040c45f
    MOV byte ptr [EDI],AL               ; 0040c461
    CMP AL,0x0                          ; 0040c463
    JZ 0x0040c477                       ; 0040c465
        ;   XREF to: 0040c477 (CONDITIONAL_JUMP)  ; LAB_0040c477
    MOV AL,byte ptr [ESI + 0x1]         ; 0040c467
    ADD ESI,0x2                         ; 0040c46a
    MOV byte ptr [EDI + 0x1],AL         ; 0040c46d
    ADD EDI,0x2                         ; 0040c470
    CMP AL,0x0                          ; 0040c473
    JNZ 0x0040c45f                      ; 0040c475
        ;   XREF to: 0040c45f (CONDITIONAL_JUMP)  ; LAB_0040c45f
    POP EDI                             ; 0040c477
        ;   Label: LAB_0040c477
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040c478
    MOV dword ptr [EBP + 0x2c],EAX      ; 0040c47c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040c47f
    MOV dword ptr [EBP + 0x30],EAX      ; 0040c483
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040c486
    XOR EBX,EBX                         ; 0040c48a
    MOV dword ptr [EBP + 0x34],EAX      ; 0040c48c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040c48f
    MOV ESI,EBP                         ; 0040c493
    MOV dword ptr [EBP + 0x28],EAX      ; 0040c495
    XOR EAX,EAX                         ; 0040c498
        ;   Label: LAB_0040c498
    MOV AL,byte ptr [ESI]               ; 0040c49a
    INC ESI                             ; 0040c49c
    TEST EAX,EAX                        ; 0040c49d
    JNZ 0x0040c4ce                      ; 0040c49f
        ;   XREF to: 0040c4ce (CONDITIONAL_JUMP)  ; LAB_0040c4ce
    MOV EDX,dword ptr [0x007bc044]      ; 0040c4a1 | DAT_007bc044
    MOV dword ptr [EBP + 0x38],EBX      ; 0040c4a7
    CMP EDX,0xc8                        ; 0040c4aa
    JGE 0x0040c4ff                      ; 0040c4b0
        ;   XREF to: 0040c4ff (CONDITIONAL_JUMP)  ; LAB_0040c4ff
    MOV EAX,[0x007bc044]                ; 0040c4b2 | DAT_007bc044
        ;   Label: LAB_0040c4b2
    LEA ESI,[EAX + 0x1]                 ; 0040c4b7
    MOV dword ptr [EAX*0x4 + 0x7bc048],EBP ; 0040c4ba | DAT_007bc048
    MOV dword ptr [0x007bc044],ESI      ; 0040c4c1 | DAT_007bc044
    MOV EAX,EBP                         ; 0040c4c7
    POP EBP                             ; 0040c4c9
    POP EDI                             ; 0040c4ca
    POP ESI                             ; 0040c4cb
    POP EBX                             ; 0040c4cc
    RET                                 ; 0040c4cd
    MOV DL,AL                           ; 0040c4ce
        ;   Label: LAB_0040c4ce
    INC DL                              ; 0040c4d0
    AND EDX,0xff                        ; 0040c4d2
    TEST byte ptr [EDX + 0x61ed94],0xe0 ; 0040c4d8 | DAT_0061ed94
    JZ 0x0040c498                       ; 0040c4df
        ;   XREF to: 0040c498 (CONDITIONAL_JUMP)  ; LAB_0040c498
    PUSH EAX                            ; 0040c4e1
    CALL FUN_005b8470                   ; 0040c4e2
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8470()
    MOV EDX,EBX                         ; 0040c4e7
    SHL EDX,0x7                         ; 0040c4e9
    SHR EBX,0x19                        ; 0040c4ec
    ADD EDX,EBX                         ; 0040c4ef
    MOV EBX,EAX                         ; 0040c4f1
    SHL EBX,0x11                        ; 0040c4f3
    ADD EBX,EDX                         ; 0040c4f6
    ADD ESP,0x4                         ; 0040c4f8
    ADD EBX,EAX                         ; 0040c4fb
    JMP 0x0040c498                      ; 0040c4fd
        ;   XREF to: 0040c498 (UNCONDITIONAL_JUMP)  ; LAB_0040c498
    MOV ECX,0x5cae00                    ; 0040c4ff | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040c4ff
    MOV EBX,0xa7c                       ; 0040c504
    PUSH 0x5cae12                       ; 0040c509 | = "Too many actor types!"
    MOV dword ptr [0x01d046a0],ECX      ; 0040c50e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0040c514 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040c51a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0040c51f
    JMP 0x0040c4b2                      ; 0040c522
        ;   XREF to: 0040c4b2 (UNCONDITIONAL_JUMP)  ; LAB_0040c4b2

