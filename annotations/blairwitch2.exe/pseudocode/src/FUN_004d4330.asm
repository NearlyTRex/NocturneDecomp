; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d4330(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005da668+1
;   TerminatedCString s_modelName_005da66f
;   TerminatedCString s_motion_state_005da679
;
; Called Functions:
;   FUN_0040b8e0
;   FUN_0040bae0
;   FUN_0040bb60
;   FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4330
        ;   Label: FUN_004d4330
    PUSH ESI                            ; 004d4331
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d4332
    PUSH ESI                            ; 004d4336
    CALL FUN_00487ec0                   ; 004d4337
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487ec0()
    ADD ESP,0x4                         ; 004d433c
    PUSH 0x5da669                       ; 004d433f | s_speed_005da668+1
    LEA EBX,[ESI + 0x10a60]             ; 004d4344
    PUSH EBX                            ; 004d434a
    CALL FUN_0040b8e0                   ; 004d434b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 004d4350
    PUSH 0x5da66f                       ; 004d4353 | = "modelName"
    LEA EBX,[ESI + 0x2b4]               ; 004d4358
    PUSH EBX                            ; 004d435e
    CALL FUN_0040bae0                   ; 004d435f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bae0()
    ADD ESP,0x8                         ; 004d4364
    PUSH 0x5da679                       ; 004d4367 | = "motion state"
    PUSH EBX                            ; 004d436c
    CALL FUN_0040bb60                   ; 004d436d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bb60()
    ADD ESP,0x8                         ; 004d4372
    POP ESI                             ; 004d4375
    POP EBX                             ; 004d4376
    LEA EAX,[EAX]                       ; 004d4377
    LEA EDX,[EDX]                       ; 004d437d
    RET                                 ; 004d4380

