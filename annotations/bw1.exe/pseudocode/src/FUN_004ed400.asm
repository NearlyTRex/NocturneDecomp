; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ed400(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00602130
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_00533060
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed400
        ;   Label: FUN_004ed400
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ed401
    TEST byte ptr [ESP + 0xc],0x4       ; 004ed405
    JNZ 0x004ed46d                      ; 004ed40a
        ;   XREF to: 004ed46d (CONDITIONAL_JUMP)  ; LAB_004ed46d
    PUSH 0x0                            ; 004ed40c
    ADD EBX,0xc1d0                      ; 004ed40e
    PUSH EBX                            ; 004ed414
    CALL FUN_00533060                   ; 004ed415
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; undefined FUN_00533060()
    ADD ESP,0x8                         ; 004ed41a
    PUSH 0x0                            ; 004ed41d
    SUB EAX,0x8bf4                      ; 004ed41f
    PUSH EAX                            ; 004ed424
    CALL FUN_0040ee30                   ; 004ed425
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 004ed42a
    PUSH 0x0                            ; 004ed42d
    SUB EAX,0x93c                       ; 004ed42f
    PUSH EAX                            ; 004ed434
    CALL FUN_00441ca0                   ; 004ed435
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 004ed43a
    PUSH 0x0                            ; 004ed43d
    SUB EAX,0x2b48                      ; 004ed43f
    PUSH EAX                            ; 004ed444
    CALL FUN_005673f0                   ; 004ed445
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 004ed44a
    PUSH 0x1                            ; 004ed44d
    LEA EBX,[EAX + 0xfffffea8]          ; 004ed44f
    PUSH EBX                            ; 004ed455
    CALL FUN_00408730                   ; 004ed456
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004ed45b
    MOV DL,byte ptr [ESP + 0xc]         ; 004ed45e
    MOV EBX,EAX                         ; 004ed462
    TEST DL,0x2                         ; 004ed464
    JNZ 0x004ed488                      ; 004ed467
        ;   XREF to: 004ed488 (CONDITIONAL_JUMP)  ; LAB_004ed488
    MOV EAX,EBX                         ; 004ed469
    POP EBX                             ; 004ed46b
    RET                                 ; 004ed46c
    PUSH 0x602130                       ; 004ed46d | DAT_00602130
        ;   Label: LAB_004ed46d
    PUSH EBX                            ; 004ed472
    CALL FUN_005c030f                   ; 004ed473
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004ed478
    PUSH EAX                            ; 004ed47b
    CALL FUN_005c0336                   ; 004ed47c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004ed481
    MOV EAX,EBX                         ; 004ed484
    POP EBX                             ; 004ed486
    RET                                 ; 004ed487
    PUSH EAX                            ; 004ed488
        ;   Label: LAB_004ed488
    CALL FUN_005c0344                   ; 004ed489
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004ed48e
    MOV EAX,EBX                         ; 004ed491
    POP EBX                             ; 004ed493
    RET                                 ; 004ed494

