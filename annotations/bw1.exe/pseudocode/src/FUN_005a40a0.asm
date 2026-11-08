; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a40a0(int param_1)
;
;
; Called Functions:
;   FUN_0040cc00
;   FUN_004688e0
;   FUN_004a0510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a40a0
        ;   Label: FUN_005a40a0
    SUB ESP,0x4                         ; 005a40a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a40a4
    LEA EAX,[EBX + 0xc26c]              ; 005a40a8
    PUSH EAX                            ; 005a40ae
    CALL FUN_004688e0                   ; 005a40af
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 005a40b4
    PUSH EBX                            ; 005a40b7
    CALL FUN_004a0510                   ; 005a40b8
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    MOV dword ptr [EBX + 0x2538],0x41200000 ; 005a40bd
    ADD ESP,0x4                         ; 005a40c7
    MOV dword ptr [EBX + 0xc49c],0x0    ; 005a40ca
    PUSH dword ptr [EBX + 0xc490]       ; 005a40d4
    PUSH dword ptr [EBX + 0xc48c]       ; 005a40da
    MOV dword ptr [EBX + 0xc494],0x0    ; 005a40e0
    CALL FUN_0040cc00                   ; 005a40ea
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 005a40ef
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a40f3
    MOV dword ptr [EBX + 0xc498],EAX    ; 005a40f7
    ADD ESP,0x8                         ; 005a40fd
    ADD ESP,0x4                         ; 005a4100
    POP EBX                             ; 005a4103
    RET                                 ; 005a4104

