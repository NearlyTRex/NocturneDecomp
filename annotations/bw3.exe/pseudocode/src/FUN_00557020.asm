; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00557020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_00557f60 at 00557fb7
;   FUN_0055e8b0 at 0055ea0a
;   FUN_005607d0 at 00560882
;
; Referenced Globals:
;   undefined4 DAT_02cf2828
;   undefined4 DAT_02cf2838
;   undefined4 DAT_02cf2848
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf3424
;
; Called Functions:
;   FUN_00556fd0
;   FUN_00558e90
;
; *****************************************************************************

section .text

    CALL FUN_00558e90                   ; 00557020
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00558e90()
        ;   Label: FUN_00557020
    MOV EAX,[0x02cf28b8]                ; 00557025 | DAT_02cf28b8
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055702a
    MOV dword ptr [EAX*0x8 + 0x2cf2828],EDX ; 0055702e | DAT_02cf2828
    MOV EDX,dword ptr [ESP + 0x8]       ; 00557035
    MOV dword ptr [EAX*0x8 + 0x2cf282c],EDX ; 00557039
    MOV EDX,dword ptr [ESP + 0xc]       ; 00557040
    MOV dword ptr [EAX*0x8 + 0x2cf2838],EDX ; 00557044 | DAT_02cf2838
    MOV EDX,dword ptr [ESP + 0x10]      ; 0055704b
    MOV dword ptr [EAX*0x8 + 0x2cf283c],EDX ; 0055704f
    MOV EDX,dword ptr [ESP + 0x14]      ; 00557056
    MOV dword ptr [EAX*0x8 + 0x2cf2848],EDX ; 0055705a | DAT_02cf2848
    MOV EDX,dword ptr [ESP + 0x18]      ; 00557061
    MOV dword ptr [EAX*0x8 + 0x2cf284c],EDX ; 00557065
    OR byte ptr [0x02cf3424],0x2        ; 0055706c | DAT_02cf3424
    JMP 0x00556fd0                      ; 00557073
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)

