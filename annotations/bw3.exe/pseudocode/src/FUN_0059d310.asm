; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059d310(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d9e7b+1
;   TerminatedCString s_modelName_005d9e82
;   TerminatedCString s_motion_state_005d9e8c
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d310
        ;   Label: FUN_0059d310
    PUSH ESI                            ; 0059d311
    MOV ESI,dword ptr [ESP + 0xc]       ; 0059d312
    PUSH ESI                            ; 0059d316
    CALL FUN_00489120                   ; 0059d317
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 0059d31c
    PUSH 0x5d9e7c                       ; 0059d31f | s_speed_005d9e7b+1
    LEA EBX,[ESI + 0xcdcc]              ; 0059d324
    PUSH EBX                            ; 0059d32a
    CALL FUN_0040b830                   ; 0059d32b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0059d330
    PUSH 0x5d9e82                       ; 0059d333 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 0059d338
    PUSH EBX                            ; 0059d33e
    CALL FUN_0040ba30                   ; 0059d33f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 0059d344
    PUSH 0x5d9e8c                       ; 0059d347 | = "motion state"
    PUSH EBX                            ; 0059d34c
    CALL FUN_0040bab0                   ; 0059d34d
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 0059d352
    POP ESI                             ; 0059d355
    POP EBX                             ; 0059d356
    RET                                 ; 0059d357

