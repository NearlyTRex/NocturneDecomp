; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00512f70(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_005143b0 at 005143ec
;   FUN_00514650 at 00514686
;   FUN_005151f0 at 00515233
;
; Called Functions:
;   FUN_00513b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512f70
        ;   Label: FUN_00512f70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00512f71
    PUSH EBX                            ; 00512f75
    CALL FUN_00513b90                   ; 00512f76
        ;   XREF to: 00513b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00513b90()
    ADD ESP,0x4                         ; 00512f7b
    MOV EAX,EBX                         ; 00512f7e
    POP EBX                             ; 00512f80
    RET                                 ; 00512f81

