; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00560a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)
;
;
; XREF[4]:
;   FUN_00408ca0 at 00408cba
;   FUN_00410490 at 004115a3
;   FUN_004a2090 at 004a23a6
;   FUN_004ae850 at 004af0fd
;
; Called Functions:
;   FUN_00555ee0
;   FUN_00555fd0
;   FUN_00556050
;   FUN_0055f020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560a70
        ;   Label: FUN_00560a70
    MOV EBX,dword ptr [ESP + 0x14]      ; 00560a71
    CALL FUN_00555fd0                   ; 00560a75
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555fd0()
    PUSH dword ptr [ESP + 0x18]         ; 00560a7a
    CALL FUN_00555ee0                   ; 00560a7e
        ;   XREF to: 00555ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555ee0()
    ADD ESP,0x4                         ; 00560a83
    PUSH 0x0                            ; 00560a86
    PUSH 0x0                            ; 00560a88
    PUSH dword ptr [EBX + 0x8]          ; 00560a8a
    PUSH dword ptr [EBX + 0x4]          ; 00560a8d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00560a90
    PUSH dword ptr [EBX]                ; 00560a94
    PUSH EDX                            ; 00560a96
    MOV ECX,dword ptr [ESP + 0x24]      ; 00560a97
    PUSH ECX                            ; 00560a9b
    CALL FUN_0055f020                   ; 00560a9c
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f020()
    ADD ESP,0x1c                        ; 00560aa1
    MOV EBX,EAX                         ; 00560aa4
    CALL FUN_00556050                   ; 00560aa6
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; undefined FUN_00556050()
    MOV EAX,EBX                         ; 00560aab
    POP EBX                             ; 00560aad
    RET                                 ; 00560aae

