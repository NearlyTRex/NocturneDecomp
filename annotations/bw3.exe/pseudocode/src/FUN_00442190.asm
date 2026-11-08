; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00442190(int param_1)
;
;
; XREF[2]:
;   FUN_00441f60 at 00441fac
;   FUN_004b7f90 at 004b7fab
;
; Referenced Globals:
;   TerminatedCString s_console_txt_005f1698
;
; Called Functions:
;   FUN_00466220
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442190
        ;   Label: FUN_00442190
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442191
    PUSH 0xfa0                          ; 00442195
    PUSH 0x0                            ; 0044219a
    LEA EAX,[EBX + 0x8]                 ; 0044219c
    PUSH EAX                            ; 0044219f
    CALL FUN_005a28f0                   ; 004421a0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 004421a5
    MOV dword ptr [EBX + 0xfa8],0x0     ; 004421a8
    PUSH 0x5f1698                       ; 004421b2 | = "console.txt"
    MOV dword ptr [EBX + 0xfac],0x0     ; 004421b7
    CALL FUN_00466220                   ; 004421c1
        ;   XREF to: 00466220 (UNCONDITIONAL_CALL)  ; undefined FUN_00466220()
    ADD ESP,0x4                         ; 004421c6
    POP EBX                             ; 004421c9
    RET                                 ; 004421ca

