; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00569550(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0056a960 at 0056a97c
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569550
        ;   Label: FUN_00569550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00569551
    PUSH 0x18000                        ; 00569555
    MOV dword ptr [EBX + 0x18004],0x0   ; 0056955a
    PUSH 0x0                            ; 00569564
    LEA EAX,[EBX + 0x4]                 ; 00569566
    MOV dword ptr [EBX],0x0             ; 00569569
    PUSH EAX                            ; 0056956f
    MOV dword ptr [EBX + 0x18008],0x0   ; 00569570
    CALL FUN_005a28f0                   ; 0056957a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0056957f
    MOV EAX,EBX                         ; 00569582
    POP EBX                             ; 00569584
    RET                                 ; 00569585

