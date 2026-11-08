; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e400(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d3208
;   TerminatedCString s_weaponClassName_005d3212
;   TerminatedCString s_ammoCount_005d3222
;   TerminatedCString s_ammoType_005d322c
;   undefined4 DAT_005d3235
;   TerminatedCString s_hasCollision_005d323a
;   TerminatedCString s_openSound_005d3247
;   undefined4 DAT_00610898
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e400
        ;   Label: FUN_0040e400
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e401
    PUSH EBX                            ; 0040e405
    CALL FUN_0040c040                   ; 0040e406
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 0040e40b
    PUSH 0x5d3208                       ; 0040e40e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0040e413
    PUSH EAX                            ; 0040e419
    CALL FUN_0040b770                   ; 0040e41a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 0040e41f
    PUSH 0x5d3212                       ; 0040e422 | = "weaponClassName"
    LEA EAX,[EBX + 0x2d4]               ; 0040e427
    PUSH EAX                            ; 0040e42d
    CALL FUN_0040b440                   ; 0040e42e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0040e433
    PUSH 0x5d3222                       ; 0040e436 | = "ammoCount"
    LEA EAX,[EBX + 0x314]               ; 0040e43b
    PUSH EAX                            ; 0040e441
    CALL FUN_0040b670                   ; 0040e442
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0040e447
    PUSH 0x5d322c                       ; 0040e44a | = "ammoType"
    LEA EAX,[EBX + 0x318]               ; 0040e44f
    PUSH EAX                            ; 0040e455
    CALL FUN_0040b670                   ; 0040e456
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0040e45b
    PUSH 0x0                            ; 0040e45e
    LEA EAX,[EBX + 0x31c]               ; 0040e460
    PUSH EAX                            ; 0040e466
    CALL FUN_0040b5f0                   ; 0040e467
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV EDX,dword ptr [0x00610898]      ; 0040e46c | DAT_00610898
    ADD ESP,0x8                         ; 0040e472
    CMP EDX,0x2                         ; 0040e475
    JGE 0x0040e4a2                      ; 0040e478
        ;   XREF to: 0040e4a2 (CONDITIONAL_JUMP)  ; LAB_0040e4a2
    CMP dword ptr [0x00610898],0x3      ; 0040e47a | DAT_00610898
        ;   Label: LAB_0040e47a
    JL 0x0040e497                       ; 0040e481
        ;   XREF to: 0040e497 (CONDITIONAL_JUMP)  ; LAB_0040e497
    PUSH 0x5d323a                       ; 0040e483 | = "hasCollision"
    LEA EAX,[EBX + 0x324]               ; 0040e488
    PUSH EAX                            ; 0040e48e
    CALL FUN_0040b670                   ; 0040e48f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0040e494
    CMP dword ptr [0x00610898],0x4      ; 0040e497 | DAT_00610898
        ;   Label: LAB_0040e497
    JGE 0x0040e4b8                      ; 0040e49e
        ;   XREF to: 0040e4b8 (CONDITIONAL_JUMP)  ; LAB_0040e4b8
    POP EBX                             ; 0040e4a0
    RET                                 ; 0040e4a1
    PUSH 0x5d3235                       ; 0040e4a2 | DAT_005d3235
        ;   Label: LAB_0040e4a2
    LEA EAX,[EBX + 0x320]               ; 0040e4a7
    PUSH EAX                            ; 0040e4ad
    CALL FUN_0040b6f0                   ; 0040e4ae
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 0040e4b3
    JMP 0x0040e47a                      ; 0040e4b6
        ;   XREF to: 0040e47a (UNCONDITIONAL_JUMP)  ; LAB_0040e47a
    PUSH 0x5d3247                       ; 0040e4b8 | = "openSound"
        ;   Label: LAB_0040e4b8
    ADD EBX,0x328                       ; 0040e4bd
    PUSH EBX                            ; 0040e4c3
    CALL FUN_0040b440                   ; 0040e4c4
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0040e4c9
    POP EBX                             ; 0040e4cc
    RET                                 ; 0040e4cd

