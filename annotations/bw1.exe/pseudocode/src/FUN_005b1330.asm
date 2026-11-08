; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1330(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005f9b39+1
;   TerminatedCString s_modelName_005f9b40
;   TerminatedCString s_guardDistance_005f9b4a
;   TerminatedCString s_motion_state_005f9b58
;   TerminatedCString s_lightUpEyes_005f9b65
;   TerminatedCString s_chainAnchor_005f9b71
;   TerminatedCString s_chainLength_005f9b7d
;   undefined4 DAT_005f9b89
;   TerminatedCString s_phase_005f9b8e
;   TerminatedCString s_phaseTimer_005f9b94
;   TerminatedCString s_alpha1_005f9b9f
;   TerminatedCString s_alpha2_005f9ba6
;   undefined4 DAT_00626098
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1330
        ;   Label: FUN_005b1330
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1331
    PUSH EBX                            ; 005b1335
    CALL FUN_004a0520                   ; 005b1336
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 005b133b
    PUSH 0x5f9b3a                       ; 005b133e | s_speed_005f9b39+1
    LEA EAX,[EBX + 0xc1d0]              ; 005b1343
    PUSH EAX                            ; 005b1349
    CALL FUN_0040b5f0                   ; 005b134a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005b134f
    PUSH 0x5f9b40                       ; 005b1352 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005b1357
    PUSH EAX                            ; 005b135d
    CALL FUN_0040b7f0                   ; 005b135e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    MOV EDX,dword ptr [0x00626098]      ; 005b1363 | DAT_00626098
    ADD ESP,0x8                         ; 005b1369
    CMP EDX,0x3                         ; 005b136c
    JL 0x005b1401                       ; 005b136f
        ;   XREF to: 005b1401 (CONDITIONAL_JUMP)  ; LAB_005b1401
    PUSH 0x5f9b58                       ; 005b1375 | = "motion state"
        ;   Label: LAB_005b1375
    LEA EAX,[EBX + 0x158]               ; 005b137a
    PUSH EAX                            ; 005b1380
    CALL FUN_0040b870                   ; 005b1381
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    MOV ECX,dword ptr [0x00626098]      ; 005b1386 | DAT_00626098
    ADD ESP,0x8                         ; 005b138c
    CMP ECX,0x2                         ; 005b138f
    JL 0x005b13a8                       ; 005b1392
        ;   XREF to: 005b13a8 (CONDITIONAL_JUMP)  ; LAB_005b13a8
    PUSH 0x5f9b65                       ; 005b1394 | = "lightUpEyes"
    LEA EAX,[EBX + 0xc280]              ; 005b1399
    PUSH EAX                            ; 005b139f
    CALL FUN_0040b670                   ; 005b13a0
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005b13a5
    CMP dword ptr [0x00626098],0x4      ; 005b13a8 | DAT_00626098
        ;   Label: LAB_005b13a8
    JL 0x005b13d9                       ; 005b13af
        ;   XREF to: 005b13d9 (CONDITIONAL_JUMP)  ; LAB_005b13d9
    PUSH 0x5f9b71                       ; 005b13b1 | = "chainAnchor"
    LEA EAX,[EBX + 0xc294]              ; 005b13b6
    PUSH EAX                            ; 005b13bc
    CALL FUN_0040b6f0                   ; 005b13bd
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005b13c2
    PUSH 0x5f9b7d                       ; 005b13c5 | = "chainLength"
    LEA EAX,[EBX + 0xc298]              ; 005b13ca
    PUSH EAX                            ; 005b13d0
    CALL FUN_0040b5f0                   ; 005b13d1
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005b13d6
    CMP dword ptr [0x00626098],0x5      ; 005b13d9 | DAT_00626098
        ;   Label: LAB_005b13d9
    JL 0x005b13f6                       ; 005b13e0
        ;   XREF to: 005b13f6 (CONDITIONAL_JUMP)  ; LAB_005b13f6
    PUSH 0x5f9b89                       ; 005b13e2 | DAT_005f9b89
    LEA EAX,[EBX + 0xc268]              ; 005b13e7
    PUSH EAX                            ; 005b13ed
    CALL FUN_0040b670                   ; 005b13ee
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005b13f3
    CMP dword ptr [0x00626098],0x6      ; 005b13f6 | DAT_00626098
        ;   Label: LAB_005b13f6
    JGE 0x005b141a                      ; 005b13fd
        ;   XREF to: 005b141a (CONDITIONAL_JUMP)  ; LAB_005b141a
    POP EBX                             ; 005b13ff
    RET                                 ; 005b1400
    PUSH 0x5f9b4a                       ; 005b1401 | = "guardDistance"
        ;   Label: LAB_005b1401
    LEA EAX,[EBX + 0xc1e0]              ; 005b1406
    PUSH EAX                            ; 005b140c
    CALL FUN_0040b5f0                   ; 005b140d
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005b1412
    JMP 0x005b1375                      ; 005b1415
        ;   XREF to: 005b1375 (UNCONDITIONAL_JUMP)  ; LAB_005b1375
    PUSH 0x5f9b8e                       ; 005b141a | = "phase"
        ;   Label: LAB_005b141a
    LEA EAX,[EBX + 0xc2a4]              ; 005b141f
    PUSH EAX                            ; 005b1425
    CALL FUN_0040b670                   ; 005b1426
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005b142b
    PUSH 0x5f9b94                       ; 005b142e | = "phaseTimer"
    LEA EAX,[EBX + 0xc2a8]              ; 005b1433
    PUSH EAX                            ; 005b1439
    CALL FUN_0040b5f0                   ; 005b143a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005b143f
    PUSH 0x5f9b9f                       ; 005b1442 | = "alpha1"
    LEA EAX,[EBX + 0xc29c]              ; 005b1447
    PUSH EAX                            ; 005b144d
    CALL FUN_0040b6f0                   ; 005b144e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005b1453
    PUSH 0x5f9ba6                       ; 005b1456 | = "alpha2"
    ADD EBX,0xc2a0                      ; 005b145b
    PUSH EBX                            ; 005b1461
    CALL FUN_0040b6f0                   ; 005b1462
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005b1467
    POP EBX                             ; 005b146a
    RET                                 ; 005b146b

