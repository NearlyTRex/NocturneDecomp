; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b3c0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005d55ee
;   TerminatedCString s_modelName_005d55f4
;   TerminatedCString s_motion_state_005d55fe
;   TerminatedCString s_partStatus_005d560b
;   TerminatedCString s_alwaysChaseFast_005d5616
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_0040b960
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b3c0
        ;   Label: FUN_0042b3c0
    PUSH ESI                            ; 0042b3c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0042b3c2
    PUSH ESI                            ; 0042b3c6
    CALL FUN_004a0520                   ; 0042b3c7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 0042b3cc
    PUSH 0x5d55ee                       ; 0042b3cf | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 0042b3d4
    PUSH EBX                            ; 0042b3da
    CALL FUN_0040b5f0                   ; 0042b3db
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042b3e0
    PUSH 0x5d55f4                       ; 0042b3e3 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 0042b3e8
    PUSH EBX                            ; 0042b3ee
    CALL FUN_0040b7f0                   ; 0042b3ef
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 0042b3f4
    PUSH 0x5d55fe                       ; 0042b3f7 | = "motion state"
    PUSH EBX                            ; 0042b3fc
    CALL FUN_0040b870                   ; 0042b3fd
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 0042b402
    PUSH 0x5d560b                       ; 0042b405 | = "partStatus"
    PUSH EBX                            ; 0042b40a
    CALL FUN_0040b960                   ; 0042b40b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0042b410
    PUSH 0x5d5616                       ; 0042b413 | = "alwaysChaseFast"
    ADD ESI,0xc284                      ; 0042b418
    PUSH ESI                            ; 0042b41e
    CALL FUN_0040b670                   ; 0042b41f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0042b424
    POP ESI                             ; 0042b427
    POP EBX                             ; 0042b428
    RET                                 ; 0042b429

