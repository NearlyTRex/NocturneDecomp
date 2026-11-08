; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ebe0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005d32e4
;   TerminatedCString s_modelName_005d32ea
;   TerminatedCString s_motion_state_005d32f4
;   TerminatedCString s_fallApartEvent_005d3301
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ebe0
        ;   Label: FUN_0040ebe0
    PUSH ESI                            ; 0040ebe1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040ebe2
    PUSH ESI                            ; 0040ebe6
    CALL FUN_004a0520                   ; 0040ebe7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 0040ebec
    PUSH 0x5d32e4                       ; 0040ebef | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 0040ebf4
    PUSH EBX                            ; 0040ebfa
    CALL FUN_0040b5f0                   ; 0040ebfb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0040ec00
    PUSH 0x5d32ea                       ; 0040ec03 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 0040ec08
    PUSH EBX                            ; 0040ec0e
    CALL FUN_0040b7f0                   ; 0040ec0f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 0040ec14
    PUSH 0x5d32f4                       ; 0040ec17 | = "motion state"
    PUSH EBX                            ; 0040ec1c
    CALL FUN_0040b870                   ; 0040ec1d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 0040ec22
    PUSH 0x5d3301                       ; 0040ec25 | = "fallApartEvent"
    ADD ESI,0xc268                      ; 0040ec2a
    PUSH ESI                            ; 0040ec30
    CALL FUN_0040b440                   ; 0040ec31
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0040ec36
    POP ESI                             ; 0040ec39
    POP EBX                             ; 0040ec3a
    RET                                 ; 0040ec3b

