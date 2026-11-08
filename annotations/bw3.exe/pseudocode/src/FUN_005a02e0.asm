; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a02e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005da4f9+1
;   TerminatedCString s_modelName_005da500
;   TerminatedCString s_motion_state_005da50a
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a02e0
        ;   Label: FUN_005a02e0
    PUSH ESI                            ; 005a02e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a02e2
    PUSH ESI                            ; 005a02e6
    CALL FUN_00489120                   ; 005a02e7
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 005a02ec
    PUSH 0x5da4fa                       ; 005a02ef | s_speed_005da4f9+1
    LEA EBX,[ESI + 0xcdcc]              ; 005a02f4
    PUSH EBX                            ; 005a02fa
    CALL FUN_0040b830                   ; 005a02fb
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 005a0300
    PUSH 0x5da500                       ; 005a0303 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 005a0308
    PUSH EBX                            ; 005a030e
    CALL FUN_0040ba30                   ; 005a030f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 005a0314
    PUSH 0x5da50a                       ; 005a0317 | = "motion state"
    PUSH EBX                            ; 005a031c
    CALL FUN_0040bab0                   ; 005a031d
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 005a0322
    POP ESI                             ; 005a0325
    POP EBX                             ; 005a0326
    RET                                 ; 005a0327

