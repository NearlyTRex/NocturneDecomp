; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050f170(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0050f200
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f170
        ;   Label: FUN_0050f170
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f171
    PUSH EBX                            ; 0050f175
    CALL FUN_0050f200                   ; 0050f176
        ;   XREF to: 0050f200 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f200()
    ADD ESP,0x4                         ; 0050f17b
    PUSH 0x14                           ; 0050f17e
    PUSH 0x0                            ; 0050f180
    PUSH EBX                            ; 0050f182
    CALL FUN_005a28f0                   ; 0050f183
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0050f188
    MOV EAX,EBX                         ; 0050f18b
    POP EBX                             ; 0050f18d
    RET                                 ; 0050f18e

