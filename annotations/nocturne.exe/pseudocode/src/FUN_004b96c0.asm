; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b96c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_00585f7b+2
;   string s_modelName_00585f83
;   string s_motion_state_00585f8d
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040ca80
;   FUN_0040cb00
;   FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b96c0
        ;   Label: FUN_004b96c0
    PUSH ESI                            ; 004b96c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b96c2
    PUSH ESI                            ; 004b96c6
    CALL FUN_004796c0                   ; 004b96c7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796c0()
    ADD ESP,0x4                         ; 004b96cc
    PUSH 0x585f7d                       ; 004b96cf | s_speed_00585f7b+2
    LEA EBX,[ESI + 0xbc8c]              ; 004b96d4
    PUSH EBX                            ; 004b96da
    CALL FUN_0040c880                   ; 004b96db
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004b96e0
    PUSH 0x585f83                       ; 004b96e3 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 004b96e8
    PUSH EBX                            ; 004b96ee
    CALL FUN_0040ca80                   ; 004b96ef
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca80()
    ADD ESP,0x8                         ; 004b96f4
    PUSH 0x585f8d                       ; 004b96f7 | = "motion state"
    PUSH EBX                            ; 004b96fc
    CALL FUN_0040cb00                   ; 004b96fd
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 004b9702
    POP ESI                             ; 004b9705
    POP EBX                             ; 004b9706
    LEA EAX,[EAX]                       ; 004b9707
    LEA EDX,[EDX]                       ; 004b970d
    RET                                 ; 004b9710

