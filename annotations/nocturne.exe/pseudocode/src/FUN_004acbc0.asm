; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004acbc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_glassSize_00584fc7+1
;   string s_glassTexture_00584fd2
;   string s_opacity_00584fdf
;   string s_shattered_00584fe7
;   string s_breakEvent_00584ff1
;   string s_mirrorFlag_00584ffc
;   string s_breakableCondition_00585007
;   string s_backgroundFlag_0058501a
;   string s_brokenTexture_00585029
;   undefined4 DAT_005b9668
;
; Called Functions:
;   FUN_0040c450
;   FUN_0040c6d0
;   FUN_0040c900
;   FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004acbc0
        ;   Label: FUN_004acbc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004acbc1
    PUSH EBX                            ; 004acbc5
    CALL FUN_0040d2d0                   ; 004acbc6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 004acbcb
    PUSH 0x584fc8                       ; 004acbce | s_glassSize_00584fc7+1
    LEA EAX,[EBX + 0x150]               ; 004acbd3
    PUSH EAX                            ; 004acbd9
    CALL FUN_0040c450                   ; 004acbda
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x8                         ; 004acbdf
    PUSH 0x584fd2                       ; 004acbe2 | = "glassTexture"
    LEA EAX,[EBX + 0x164]               ; 004acbe7
    PUSH EAX                            ; 004acbed
    CALL FUN_0040c6d0                   ; 004acbee
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    MOV EDX,dword ptr [0x005b9668]      ; 004acbf3 | DAT_005b9668
    ADD ESP,0x8                         ; 004acbf9
    CMP EDX,0x2                         ; 004acbfc
    JGE 0x004acc7b                      ; 004acbff
        ;   XREF to: 004acc7b (CONDITIONAL_JUMP)  ; LAB_004acc7b
    CMP dword ptr [0x005b9668],0x3      ; 004acc05 | DAT_005b9668
        ;   Label: LAB_004acc05
    JL 0x004acc36                       ; 004acc0c
        ;   XREF to: 004acc36 (CONDITIONAL_JUMP)  ; LAB_004acc36
    PUSH 0x584fe7                       ; 004acc0e | = "shattered"
    LEA EAX,[EBX + 0x178]               ; 004acc13
    PUSH EAX                            ; 004acc19
    CALL FUN_0040c900                   ; 004acc1a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004acc1f
    PUSH 0x584ff1                       ; 004acc22 | = "breakEvent"
    LEA EAX,[EBX + 0x17c]               ; 004acc27
    PUSH EAX                            ; 004acc2d
    CALL FUN_0040c6d0                   ; 004acc2e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004acc33
    CMP dword ptr [0x005b9668],0x4      ; 004acc36 | DAT_005b9668
        ;   Label: LAB_004acc36
    JL 0x004acc53                       ; 004acc3d
        ;   XREF to: 004acc53 (CONDITIONAL_JUMP)  ; LAB_004acc53
    PUSH 0x584ffc                       ; 004acc3f | = "mirrorFlag"
    LEA EAX,[EBX + 0x1e0]               ; 004acc44
    PUSH EAX                            ; 004acc4a
    CALL FUN_0040c900                   ; 004acc4b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004acc50
    CMP dword ptr [0x005b9668],0x5      ; 004acc53 | DAT_005b9668
        ;   Label: LAB_004acc53
    JL 0x004acc70                       ; 004acc5a
        ;   XREF to: 004acc70 (CONDITIONAL_JUMP)  ; LAB_004acc70
    PUSH 0x585007                       ; 004acc5c | = "breakableCondition"
    LEA EAX,[EBX + 0x304]               ; 004acc61
    PUSH EAX                            ; 004acc67
    CALL FUN_0040c6d0                   ; 004acc68
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004acc6d
    CMP dword ptr [0x005b9668],0x6      ; 004acc70 | DAT_005b9668
        ;   Label: LAB_004acc70
    JGE 0x004acc94                      ; 004acc77
        ;   XREF to: 004acc94 (CONDITIONAL_JUMP)  ; LAB_004acc94
    POP EBX                             ; 004acc79
    RET                                 ; 004acc7a
    PUSH 0x584fdf                       ; 004acc7b | = "opacity"
        ;   Label: LAB_004acc7b
    LEA EAX,[EBX + 0x174]               ; 004acc80
    PUSH EAX                            ; 004acc86
    CALL FUN_0040c900                   ; 004acc87
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004acc8c
    JMP 0x004acc05                      ; 004acc8f
        ;   XREF to: 004acc05 (UNCONDITIONAL_JUMP)  ; LAB_004acc05
    PUSH 0x58501a                       ; 004acc94 | = "backgroundFlag"
        ;   Label: LAB_004acc94
    LEA EAX,[EBX + 0x368]               ; 004acc99
    PUSH EAX                            ; 004acc9f
    CALL FUN_0040c900                   ; 004acca0
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004acca5
    PUSH 0x585029                       ; 004acca8 | = "brokenTexture"
    ADD EBX,0x374                       ; 004accad
    PUSH EBX                            ; 004accb3
    CALL FUN_0040c6d0                   ; 004accb4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004accb9
    POP EBX                             ; 004accbc
    RET                                 ; 004accbd

