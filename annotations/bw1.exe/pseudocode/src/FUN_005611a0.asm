; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005611a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005f1946
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_00483dd0
;   FUN_00483de0
;   FUN_00484a40
;   FUN_00484e00
;   FUN_004a6c30
;   FUN_00524770
;   FUN_005254b0
;   FUN_00569810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005611a0
        ;   Label: FUN_005611a0
    PUSH EBP                            ; 005611a1
    SUB ESP,0x30                        ; 005611a2
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005611a5
    LEA EBP,[EBX + 0x158]               ; 005611a9
    PUSH EBP                            ; 005611af
    CALL FUN_00524770                   ; 005611b0
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 005611b5
    PUSH EBP                            ; 005611b8
    CALL FUN_00524770                   ; 005611b9
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 005611be
    PUSH 0x5f1946                       ; 005611c1 | = "heroCanSee"
    MOV EDX,dword ptr [0x0061b4d0]      ; 005611c6 | DAT_0061b4d0
    PUSH EDX                            ; 005611cc
    MOV dword ptr [EBX + 0x27bc],0x0    ; 005611cd
    CALL FUN_004a6c30                   ; 005611d7
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 005611dc
    TEST EAX,EAX                        ; 005611df
    JZ 0x005611ee                       ; 005611e1
        ;   XREF to: 005611ee (CONDITIONAL_JUMP)  ; LAB_005611ee
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 005611e3
    JZ 0x005611f4                       ; 005611ea
        ;   XREF to: 005611f4 (CONDITIONAL_JUMP)  ; LAB_005611f4
    XOR EAX,EAX                         ; 005611ec
    ADD ESP,0x30                        ; 005611ee
        ;   Label: LAB_005611ee
    POP EBP                             ; 005611f1
    POP EBX                             ; 005611f2
    RET                                 ; 005611f3
    PUSH EDI                            ; 005611f4
        ;   Label: LAB_005611f4
    PUSH ESI                            ; 005611f5
    PUSH EBX                            ; 005611f6
    CALL FUN_004087b0                   ; 005611f7
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 005611fc
    PUSH 0x0                            ; 005611ff
    MOV EAX,dword ptr [EBX + 0x154]     ; 00561201
    PUSH EBX                            ; 00561207
    LEA ESI,[ESP + 0x28]                ; 00561208
    LEA EDI,[ESP + 0x10]                ; 0056120c
    CALL dword ptr [EAX + 0x1c]         ; 00561210
    MOV ECX,0x6                         ; 00561213
    ADD ESP,0x4                         ; 00561218
    LEA EAX,[ESP + 0xc]                 ; 0056121b
    LEA ESI,[ESP + 0x24]                ; 0056121f
    PUSH EAX                            ; 00561223
    MOVSD.REP ES:EDI,ESI                ; 00561224
    CALL FUN_004207b0                   ; 00561226
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0056122b
    TEST EAX,EAX                        ; 0056122e
    JZ 0x005612aa                       ; 00561230
        ;   XREF to: 005612aa (CONDITIONAL_JUMP)  ; LAB_005612aa
    MOV ESI,dword ptr [EBX + 0xc294]    ; 00561232
    PUSH ESI                            ; 00561238
    MOV EDI,dword ptr [0x00612560]      ; 00561239 | DAT_00612560
    PUSH EDI                            ; 0056123f | DAT_01bc120c
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00561240
    CALL FUN_00483de0                   ; 0056124a
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 0056124f
    PUSH 0x0                            ; 00561252
    MOV EAX,[0x00612560]                ; 00561254 | DAT_00612560
    PUSH EAX                            ; 00561259 | DAT_01bc120c
    CALL FUN_00483dd0                   ; 0056125a
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    ADD ESP,0x8                         ; 0056125f
    PUSH 0x1                            ; 00561262
    MOV EDX,dword ptr [0x00612560]      ; 00561264 | DAT_00612560
    PUSH EDX                            ; 0056126a | DAT_01bc120c
    CALL FUN_00484a40                   ; 0056126b
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00484a40()
    ADD ESP,0x8                         ; 00561270
    PUSH 0x0                            ; 00561273
    PUSH 0x1                            ; 00561275
    PUSH 0x2e7                          ; 00561277
    PUSH -0x1                           ; 0056127c
    PUSH EBP                            ; 0056127e
    CALL FUN_00569810                   ; 0056127f
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; undefined FUN_00569810()
    ADD ESP,0x14                        ; 00561284
    MOV ECX,dword ptr [0x00612560]      ; 00561287 | DAT_00612560
    PUSH ECX                            ; 0056128d | DAT_01bc120c
    CALL FUN_00484e00                   ; 0056128e
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484e00()
    MOV ESI,dword ptr [0x01d39d34]      ; 00561293 | DAT_01d39d34
    ADD ESP,0x4                         ; 00561299
    TEST ESI,ESI                        ; 0056129c
    JZ 0x005612aa                       ; 0056129e
        ;   XREF to: 005612aa (CONDITIONAL_JUMP)  ; LAB_005612aa
    PUSH EBX                            ; 005612a0
    PUSH EBP                            ; 005612a1
    CALL FUN_005254b0                   ; 005612a2
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005254b0()
    ADD ESP,0x8                         ; 005612a7
    PUSH EBX                            ; 005612aa
        ;   Label: LAB_005612aa
    CALL FUN_004087f0                   ; 005612ab
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005612b0
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 005612b3
    POP ESI                             ; 005612b9
    POP EDI                             ; 005612ba
    ADD ESP,0x30                        ; 005612bb
    POP EBP                             ; 005612be
    POP EBX                             ; 005612bf
    RET                                 ; 005612c0

