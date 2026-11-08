; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449480(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d7345
;   TerminatedCString s_lastPlatform_005d734f
;   undefined4 DAT_006111a4
;
; Called Functions:
;   FUN_0040b6f0
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449480
        ;   Label: FUN_00449480
    MOV EBX,dword ptr [ESP + 0x8]       ; 00449481
    PUSH EBX                            ; 00449485
    CALL FUN_0040c040                   ; 00449486
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 0044948b
    PUSH 0x5d7345                       ; 0044948e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00449493
    PUSH EAX                            ; 00449499
    CALL FUN_0040b770                   ; 0044949a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    MOV EDX,dword ptr [0x006111a4]      ; 0044949f | DAT_006111a4
    ADD ESP,0x8                         ; 004494a5
    CMP EDX,0x2                         ; 004494a8
    JGE 0x004494af                      ; 004494ab
        ;   XREF to: 004494af (CONDITIONAL_JUMP)  ; LAB_004494af
    POP EBX                             ; 004494ad
    RET                                 ; 004494ae
    PUSH 0x5d734f                       ; 004494af | = "lastPlatform"
        ;   Label: LAB_004494af
    LEA EAX,[EBX + 0x2dc]               ; 004494b4
    PUSH EAX                            ; 004494ba
    CALL FUN_0040b6f0                   ; 004494bb
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004494c0
    POP EBX                             ; 004494c3
    RET                                 ; 004494c4

