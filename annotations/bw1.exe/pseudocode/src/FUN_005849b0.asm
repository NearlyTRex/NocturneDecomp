; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005849b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_00584cc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005849b0
        ;   Label: FUN_005849b0
    PUSH EDX                            ; 005849b4
    CALL FUN_00408850                   ; 005849b5
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 005849ba
    MOV ECX,dword ptr [ESP + 0x4]       ; 005849bd
    PUSH ECX                            ; 005849c1
    CALL FUN_00584cc0                   ; 005849c2
        ;   XREF to: 00584cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00584cc0()
    ADD ESP,0x4                         ; 005849c7
    LEA EAX,[EAX]                       ; 005849ca
    RET                                 ; 005849d0

