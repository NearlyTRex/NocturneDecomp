; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00544470(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005965a6+2
;   string s_guardDistance_005965b2
;   string s_motion_state_005965c0
;   string s_partStatus_005965cd
;   string s_graveActor_005965d8
;   undefined4 DAT_005c10b0
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040c980
;   FUN_0040ca80
;   FUN_0040cb00
;   FUN_0040cbf0
;   FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544470
        ;   Label: FUN_00544470
    PUSH ESI                            ; 00544471
    MOV EBX,dword ptr [ESP + 0xc]       ; 00544472
    PUSH EBX                            ; 00544476
    CALL FUN_004796c0                   ; 00544477
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796c0()
    ADD ESP,0x4                         ; 0054447c
    PUSH 0x5965a8                       ; 0054447f | s_modelName_005965a6+2
    LEA ESI,[EBX + 0x150]               ; 00544484
    PUSH ESI                            ; 0054448a
    CALL FUN_0040ca80                   ; 0054448b
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca80()
    MOV EDX,dword ptr [0x005c10b0]      ; 00544490 | DAT_005c10b0
    ADD ESP,0x8                         ; 00544496
    CMP EDX,0x2                         ; 00544499
    JL 0x005444d7                       ; 0054449c
        ;   XREF to: 005444d7 (CONDITIONAL_JUMP)  ; LAB_005444d7
    PUSH 0x5965c0                       ; 0054449e | = "motion state"
        ;   Label: LAB_0054449e
    LEA ESI,[EBX + 0x150]               ; 005444a3
    PUSH ESI                            ; 005444a9
    CALL FUN_0040cb00                   ; 005444aa
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 005444af
    PUSH 0x5965cd                       ; 005444b2 | = "partStatus"
    PUSH ESI                            ; 005444b7
    CALL FUN_0040cbf0                   ; 005444b8
        ;   XREF to: 0040cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cbf0()
    ADD ESP,0x8                         ; 005444bd
    PUSH 0x5965d8                       ; 005444c0 | = "graveActor"
    ADD EBX,0xbd2c                      ; 005444c5
    PUSH EBX                            ; 005444cb
    CALL FUN_0040c980                   ; 005444cc
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 005444d1
    POP ESI                             ; 005444d4
    POP EBX                             ; 005444d5
    RET                                 ; 005444d6
    PUSH 0x5965b2                       ; 005444d7 | = "guardDistance"
        ;   Label: LAB_005444d7
    LEA ESI,[EBX + 0xbc9c]              ; 005444dc
    PUSH ESI                            ; 005444e2
    CALL FUN_0040c880                   ; 005444e3
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 005444e8
    JMP 0x0054449e                      ; 005444eb
        ;   XREF to: 0054449e (UNCONDITIONAL_JUMP)  ; LAB_0054449e

