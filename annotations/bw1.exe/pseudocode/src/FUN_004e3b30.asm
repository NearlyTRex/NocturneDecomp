; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e3b30(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d27b0 at 004d531f
;
; Referenced Globals:
;   TerminatedCString s_doc_goggles_kfm_005e3ff5
;   void* PTR_FUN_00601594 = 004e3b80
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3b30
        ;   Label: FUN_004e3b30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3b31
    PUSH EBX                            ; 004e3b35
    CALL FUN_004085c0                   ; 004e3b36
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004e3b3b
    ADD EAX,0x158                       ; 004e3b3e
    PUSH EAX                            ; 004e3b43
    CALL FUN_00468860                   ; 004e3b44
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004e3b49
    LEA EBX,[EAX + 0xfffffea8]          ; 004e3b4c
    PUSH 0x5e3ff5                       ; 004e3b52 | = "doc-goggles.kfm"
    LEA EAX,[EBX + 0x158]               ; 004e3b57
    PUSH EAX                            ; 004e3b5d
    MOV dword ptr [EBX + 0x154],0x601594 ; 004e3b5e | PTR_FUN_00601594
    CALL FUN_00468950                   ; 004e3b68
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004e3b6d
    MOV EAX,EBX                         ; 004e3b70
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004e3b72
    POP EBX                             ; 004e3b7c
    RET                                 ; 004e3b7d

