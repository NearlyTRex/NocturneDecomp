; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00576370(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00551050
;   FUN_0058a200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576370
        ;   Label: FUN_00576370
    MOV EAX,dword ptr [ESP + 0x8]       ; 00576371
    MOV EDX,dword ptr [EAX + 0x6d8]     ; 00576375
    PUSH EDX                            ; 0057637b
    CALL FUN_00551050                   ; 0057637c
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 00576381
    MOV ECX,dword ptr [ESP + 0xc]       ; 00576384
    PUSH ECX                            ; 00576388
    MOV EBX,dword ptr [ESP + 0xc]       ; 00576389
    PUSH EBX                            ; 0057638d
    CALL FUN_0058a200                   ; 0057638e
        ;   XREF to: 0058a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0058a200()
    ADD ESP,0x8                         ; 00576393
    POP EBX                             ; 00576396
    RET                                 ; 00576397

