; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d5f70(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005c53d8+1
;   TerminatedCString s_modelName_005c53df
;   TerminatedCString s_motion_state_005c53e9
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5f70
        ;   Label: FUN_004d5f70
    PUSH ESI                            ; 004d5f71
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d5f72
    PUSH ESI                            ; 004d5f76
    CALL FUN_00489120                   ; 004d5f77
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 004d5f7c
    PUSH 0x5c53d9                       ; 004d5f7f | s_speed_005c53d8+1
    LEA EBX,[ESI + 0xcdcc]              ; 004d5f84
    PUSH EBX                            ; 004d5f8a
    CALL FUN_0040b830                   ; 004d5f8b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 004d5f90
    PUSH 0x5c53df                       ; 004d5f93 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 004d5f98
    PUSH EBX                            ; 004d5f9e
    CALL FUN_0040ba30                   ; 004d5f9f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 004d5fa4
    PUSH 0x5c53e9                       ; 004d5fa7 | = "motion state"
    PUSH EBX                            ; 004d5fac
    CALL FUN_0040bab0                   ; 004d5fad
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 004d5fb2
    POP ESI                             ; 004d5fb5
    POP EBX                             ; 004d5fb6
    LEA EAX,[EAX]                       ; 004d5fb7
    LEA EDX,[EDX]                       ; 004d5fbd
    RET                                 ; 004d5fc0

