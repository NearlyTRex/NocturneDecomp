; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056fff0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005ec14e
;   TerminatedCString s_modelName_005ec154
;   TerminatedCString s_motion_state_005ec15e
;
; Called Functions:
;   FUN_0040b8e0
;   FUN_0040bae0
;   FUN_0040bb60
;   FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fff0
        ;   Label: FUN_0056fff0
    PUSH ESI                            ; 0056fff1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056fff2
    PUSH ESI                            ; 0056fff6
    CALL FUN_00487ec0                   ; 0056fff7
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487ec0()
    ADD ESP,0x4                         ; 0056fffc
    PUSH 0x5ec14e                       ; 0056ffff | = "speed"
    LEA EBX,[ESI + 0x10a60]             ; 00570004
    PUSH EBX                            ; 0057000a
    CALL FUN_0040b8e0                   ; 0057000b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00570010
    PUSH 0x5ec154                       ; 00570013 | = "modelName"
    LEA EBX,[ESI + 0x2b4]               ; 00570018
    PUSH EBX                            ; 0057001e
    CALL FUN_0040bae0                   ; 0057001f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bae0()
    ADD ESP,0x8                         ; 00570024
    PUSH 0x5ec15e                       ; 00570027 | = "motion state"
    PUSH EBX                            ; 0057002c
    CALL FUN_0040bb60                   ; 0057002d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bb60()
    ADD ESP,0x8                         ; 00570032
    POP ESI                             ; 00570035
    POP EBX                             ; 00570036
    RET                                 ; 00570037

