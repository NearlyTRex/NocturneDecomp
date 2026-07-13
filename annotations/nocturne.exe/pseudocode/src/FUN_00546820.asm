; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00546820(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_beartrap.kfm_00596903
;   undefined1* PTR_FUN_005a3424 = 00546870
;
; Called Functions:
;   FUN_00409d30
;   FUN_00454490
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546820
        ;   Label: FUN_00546820
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546821
    PUSH EBX                            ; 00546825
    CALL FUN_00409d30                   ; 00546826
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0054682b
    ADD EAX,0x150                       ; 0054682e
    PUSH EAX                            ; 00546833
    CALL FUN_00454490                   ; 00546834
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined FUN_00454490()
    ADD ESP,0x4                         ; 00546839
    LEA EBX,[EAX + 0xfffffeb0]          ; 0054683c
    PUSH 0x596903                       ; 00546842 | = "beartrap.kfm"
    LEA EAX,[EBX + 0x150]               ; 00546847
    PUSH EAX                            ; 0054684d
    MOV dword ptr [EBX + 0x14c],0x5a3424 ; 0054684e | PTR_FUN_005a3424
    CALL FUN_00454580                   ; 00546858
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 0054685d
    MOV EAX,EBX                         ; 00546860
    MOV dword ptr [EBX + 0x2d0],0x0     ; 00546862
    POP EBX                             ; 0054686c
    RET                                 ; 0054686d

