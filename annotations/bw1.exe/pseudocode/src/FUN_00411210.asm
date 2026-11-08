; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00411210(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fbfd0
;   undefined4 DAT_005fbfd4
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411210
        ;   Label: FUN_00411210
    MOV EDX,dword ptr [ESP + 0x8]       ; 00411211
    PUSH EDX                            ; 00411215
    CALL FUN_004a0410                   ; 00411216
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 0041121b
    PUSH 0x5d3686                       ; 0041121e
    MOV EBX,EAX                         ; 00411223
    ADD EAX,0x158                       ; 00411225
    PUSH EAX                            ; 0041122a
    MOV dword ptr [EAX + -0x4],0x5fbfe4 ; 0041122b
    CALL FUN_00569f50                   ; 00411232
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    FLD float ptr [0x005fbfd0]          ; 00411237 | DAT_005fbfd0
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0041123d
    FLD float ptr [0x005fbfd4]          ; 00411247 | DAT_005fbfd4
    MOV dword ptr [EBX + 0x2ff0],0x3fc00000 ; 0041124d
    ADD ESP,0x8                         ; 00411257
    MOV dword ptr [EBX + 0xc268],0x0    ; 0041125a
    MOV EAX,EBX                         ; 00411264
    FXCH                                ; 00411266
    FSTP float ptr [EBX + 0x2ff4]       ; 00411268
    FSTP float ptr [EBX + 0x2ff8]       ; 0041126e
    POP EBX                             ; 00411274
    RET                                 ; 00411275

