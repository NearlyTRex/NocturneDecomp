; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c8c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_s_0_modelName_005d6529+2
;   TerminatedCString s_motion_state_005d6535
;   TerminatedCString s_partStatus_005d6542
;
; Called Functions:
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_0040bba0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c8c0
        ;   Label: FUN_0056c8c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056c8c1
    PUSH EBX                            ; 0056c8c5
    CALL FUN_00489120                   ; 0056c8c6
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 0056c8cb
    PUSH 0x5d652b                       ; 0056c8ce | s_s_0_modelName_005d6529+2
    ADD EBX,0x158                       ; 0056c8d3
    PUSH EBX                            ; 0056c8d9
    CALL FUN_0040ba30                   ; 0056c8da
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 0056c8df
    PUSH 0x5d6535                       ; 0056c8e2 | = "motion state"
    PUSH EBX                            ; 0056c8e7
    CALL FUN_0040bab0                   ; 0056c8e8
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 0056c8ed
    PUSH 0x5d6542                       ; 0056c8f0 | = "partStatus"
    PUSH EBX                            ; 0056c8f5
    CALL FUN_0040bba0                   ; 0056c8f6
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bba0()
    ADD ESP,0x8                         ; 0056c8fb
    POP EBX                             ; 0056c8fe
    RET                                 ; 0056c8ff

