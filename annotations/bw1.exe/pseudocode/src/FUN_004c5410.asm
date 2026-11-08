; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5410(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_whichPart_005e0bd2
;   TerminatedCString s_masterFrame_005e0bdc
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5410
        ;   Label: FUN_004c5410
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c5411
    PUSH EBX                            ; 004c5415
    CALL FUN_0040c040                   ; 004c5416
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004c541b
    PUSH 0x5e0bd2                       ; 004c541e | = "whichPart"
    LEA EAX,[EBX + 0x158]               ; 004c5423
    PUSH EAX                            ; 004c5429
    CALL FUN_0040b670                   ; 004c542a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004c542f
    PUSH 0x5e0bdc                       ; 004c5432 | = "masterFrame"
    LEA EAX,[EBX + 0x15c]               ; 004c5437
    PUSH EAX                            ; 004c543d
    CALL FUN_0040b5f0                   ; 004c543e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004c5443
    POP EBX                             ; 004c5446
    RET                                 ; 004c5447

