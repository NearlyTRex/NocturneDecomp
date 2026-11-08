; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00438a70(undefined4 param_1)
;
;
; XREF[7]:
;   FUN_004115c0 at 004115d5
;   FUN_004388b0 at 004388c5
;   FUN_00438920 at 00438935
;   FUN_004ad050 at 004ad065
;   FUN_004e85b0 at 004e85c5
;   FUN_004f2120 at 004f2135
;   FUN_00584de0 at 00584df5
;
; Called Functions:
;   FUN_00438c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438a70
        ;   Label: FUN_00438a70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438a71
    PUSH EBX                            ; 00438a75
    CALL FUN_00438c20                   ; 00438a76
        ;   XREF to: 00438c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00438c20()
    ADD ESP,0x4                         ; 00438a7b
    MOV EAX,EBX                         ; 00438a7e
    POP EBX                             ; 00438a80
    RET                                 ; 00438a81

