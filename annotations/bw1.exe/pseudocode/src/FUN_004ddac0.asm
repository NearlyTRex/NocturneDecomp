; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ddac0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d27b0 at 004d5225
;
; Referenced Globals:
;   TerminatedCString s_gasmask_kfm_005e3a25
;   void* PTR_FUN_006011a4 = 004ddb10
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddac0
        ;   Label: FUN_004ddac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ddac1
    PUSH EBX                            ; 004ddac5
    CALL FUN_004085c0                   ; 004ddac6
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004ddacb
    ADD EAX,0x158                       ; 004ddace
    PUSH EAX                            ; 004ddad3
    CALL FUN_00468860                   ; 004ddad4
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004ddad9
    LEA EBX,[EAX + 0xfffffea8]          ; 004ddadc
    PUSH 0x5e3a25                       ; 004ddae2 | = "gasmask.kfm"
    LEA EAX,[EBX + 0x158]               ; 004ddae7
    PUSH EAX                            ; 004ddaed
    MOV dword ptr [EBX + 0x154],0x6011a4 ; 004ddaee | PTR_FUN_006011a4
    CALL FUN_00468950                   ; 004ddaf8
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004ddafd
    MOV EAX,EBX                         ; 004ddb00
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004ddb02
    POP EBX                             ; 004ddb0c
    RET                                 ; 004ddb0d

